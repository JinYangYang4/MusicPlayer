#include "MusicPlayer.h"
#include "./ui_MusicPlayer.h"
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QFile>
#include <QTemporaryDir>
#include <QDebug>
#include <QListView>
#include <QStandardItemModel>
#include <QPushButton>

MusicPlayer::MusicPlayer(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MusicPlayer)
    , songModel(new QStandardItemModel(this))
    , manager(new QNetworkAccessManager(this))
{
    ui->setupUi(this);

    // 初始化网络管理器
    connect(manager, &QNetworkAccessManager::finished, this, &MusicPlayer::onNetworkReplyFinished);

    // 初始化列表视图和模型
    ui->listView_song->setModel(songModel);
}

MusicPlayer::~MusicPlayer()
{
    delete ui;
}

void MusicPlayer::on_pushButton_clicked()
{
    // 发起网络请求获取歌曲列表
    QUrl url("http://159.138.35.84:3000/recommend/songs");
    QNetworkRequest request(url);
    manager->get(request);
}

void MusicPlayer::onNetworkReplyFinished(QNetworkReply* reply)
{
    if (reply->error() == QNetworkReply::NoError)
    {
        QByteArray data = reply->readAll();
        QJsonDocument doc = QJsonDocument::fromJson(data);
        if (!doc.isNull())
        {
            QJsonObject obj = doc.object();
            if (obj.contains("msg") && obj["msg"].isString())
            {
                qDebug() << "Error:" << obj["msg"].toString() << ", Code:" << obj["code"].toInt();
            }
            else if (obj.contains("data") && obj["data"].isObject())
            {
                QJsonObject dataObj = obj["data"].toObject();
                if (dataObj.contains("dailySongs") && dataObj["dailySongs"].isArray())
                {
                    QJsonArray songs = dataObj["dailySongs"].toArray();
                    songModel->clear();
                    for (const QJsonValue& song : songs)
                    {
                        if (song.isObject())
                        {
                            QJsonObject songObj = song.toObject();
                            QString songName = songObj["name"].toString();
                            QStandardItem* item = new QStandardItem(songName);
                            songModel->appendRow(item);
                        }
                    }
                }
                else
                {
                    qDebug() << "Invalid JSON response: missing 'dailySongs' array";
                }
            }
            else
            {
                qDebug() << "Invalid JSON response: missing 'data' object";
            }
        }
        else
        {
            qDebug() << "Invalid JSON response";
        }
    }
    else
    {
        qDebug() << "Network error:" << reply->errorString();
    }
    reply->deleteLater();
}

void MusicPlayer::selectSong()
{
    QModelIndex index = ui->listView_songs->currentIndex();
    if (index.isValid())
    {
        QString songName = songModel->data(index, Qt::DisplayRole).toString();
        qDebug() << "Selected Song:" << songName;
        // 这里可以添加下载歌曲的逻辑
    }
}
