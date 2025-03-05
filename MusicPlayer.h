#ifndef MUSICPLAYER_H
#define MUSICPLAYER_H

#include <QWidget>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QStandardItemModel>

QT_BEGIN_NAMESPACE
namespace Ui {
class MusicPlayer;
}
QT_END_NAMESPACE

class MusicPlayer : public QWidget
{
    Q_OBJECT

public:
    MusicPlayer(QWidget *parent = nullptr);
    ~MusicPlayer();


private slots:
    void on_pushButton_clicked();
    void onNetworkReplyFinished(QNetworkReply* reply); // 网络请求完成的处理函数
    void selectSong();
private:
    Ui::MusicPlayer *ui;
    QNetworkAccessManager* manager; // 网络管理器成员变量
    QStandardItemModel *songModel;
    // 添加downloadSong函数的声明
    void downloadSong(const QString& songName, const QString& songUrl); // 下载歌曲的处理函数
};

#endif // MUSICPLAYER_H
