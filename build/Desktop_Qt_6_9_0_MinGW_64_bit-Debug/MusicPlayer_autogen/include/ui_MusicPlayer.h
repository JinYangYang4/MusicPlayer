/********************************************************************************
** Form generated from reading UI file 'MusicPlayer.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUSICPLAYER_H
#define UI_MUSICPLAYER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MusicPlayer
{
public:
    QVBoxLayout *verticalLayout;
    QListView *listView_song;
    QListView *listView_songs;
    QHBoxLayout *horizontalLayout_5;
    QLabel *sum_time_3;
    QLabel *space1_3;
    QLabel *now_time_3;
    QSpacerItem *space_3;
    QSlider *horizontalSlider;
    QFrame *frame;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton;
    QPushButton *lastsong_3;
    QPushButton *playsong_3;
    QPushButton *nextsong_3;
    QPushButton *sound_3;

    void setupUi(QWidget *MusicPlayer)
    {
        if (MusicPlayer->objectName().isEmpty())
            MusicPlayer->setObjectName("MusicPlayer");
        MusicPlayer->resize(617, 535);
        MusicPlayer->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    min-width:32px;\n"
"    min-height:32px;\n"
"    max-width:32px;\n"
"    max-height:32px;\n"
"\n"
"    border:none;\n"
"\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"   background-color:pink;\n"
"}\n"
""));
        verticalLayout = new QVBoxLayout(MusicPlayer);
        verticalLayout->setObjectName("verticalLayout");
        listView_song = new QListView(MusicPlayer);
        listView_song->setObjectName("listView_song");

        verticalLayout->addWidget(listView_song);

        listView_songs = new QListView(MusicPlayer);
        listView_songs->setObjectName("listView_songs");

        verticalLayout->addWidget(listView_songs);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(2);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        sum_time_3 = new QLabel(MusicPlayer);
        sum_time_3->setObjectName("sum_time_3");

        horizontalLayout_5->addWidget(sum_time_3);

        space1_3 = new QLabel(MusicPlayer);
        space1_3->setObjectName("space1_3");

        horizontalLayout_5->addWidget(space1_3);

        now_time_3 = new QLabel(MusicPlayer);
        now_time_3->setObjectName("now_time_3");

        horizontalLayout_5->addWidget(now_time_3);

        space_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(space_3);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalSlider = new QSlider(MusicPlayer);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setOrientation(Qt::Orientation::Horizontal);

        verticalLayout->addWidget(horizontalSlider);

        frame = new QFrame(MusicPlayer);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);

        verticalLayout->addWidget(frame);

        widget = new QWidget(MusicPlayer);
        widget->setObjectName("widget");
        horizontalLayout_6 = new QHBoxLayout(widget);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resource/\345\261\217\345\271\225\346\210\252\345\233\276 2025-02-20 201912.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton->setIcon(icon);

        horizontalLayout_6->addWidget(pushButton);

        lastsong_3 = new QPushButton(widget);
        lastsong_3->setObjectName("lastsong_3");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resource/\345\261\217\345\271\225\346\210\252\345\233\276 2025-02-20 200107.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        lastsong_3->setIcon(icon1);

        horizontalLayout_6->addWidget(lastsong_3);

        playsong_3 = new QPushButton(widget);
        playsong_3->setObjectName("playsong_3");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resource/\345\261\217\345\271\225\346\210\252\345\233\276 2025-02-20 195915.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        playsong_3->setIcon(icon2);

        horizontalLayout_6->addWidget(playsong_3);

        nextsong_3 = new QPushButton(widget);
        nextsong_3->setObjectName("nextsong_3");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Resource/\345\261\217\345\271\225\346\210\252\345\233\276 2025-02-20 200029.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        nextsong_3->setIcon(icon3);

        horizontalLayout_6->addWidget(nextsong_3);

        sound_3 = new QPushButton(widget);
        sound_3->setObjectName("sound_3");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Resource/\345\261\217\345\271\225\346\210\252\345\233\276 2025-02-20 200145.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        sound_3->setIcon(icon4);

        horizontalLayout_6->addWidget(sound_3);


        verticalLayout->addWidget(widget);


        retranslateUi(MusicPlayer);

        QMetaObject::connectSlotsByName(MusicPlayer);
    } // setupUi

    void retranslateUi(QWidget *MusicPlayer)
    {
        MusicPlayer->setWindowTitle(QCoreApplication::translate("MusicPlayer", "MusicPlayer", nullptr));
        sum_time_3->setText(QCoreApplication::translate("MusicPlayer", "00:00:00", nullptr));
        space1_3->setText(QCoreApplication::translate("MusicPlayer", "/", nullptr));
        now_time_3->setText(QCoreApplication::translate("MusicPlayer", "00:00:00", nullptr));
#if QT_CONFIG(tooltip)
        pushButton->setToolTip(QCoreApplication::translate("MusicPlayer", "\351\200\211\346\213\251\351\237\263\344\271\220", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton->setText(QString());
#if QT_CONFIG(tooltip)
        lastsong_3->setToolTip(QCoreApplication::translate("MusicPlayer", "\344\270\212\344\270\200\346\233\262", nullptr));
#endif // QT_CONFIG(tooltip)
        lastsong_3->setText(QString());
#if QT_CONFIG(tooltip)
        playsong_3->setToolTip(QCoreApplication::translate("MusicPlayer", "\346\222\255\346\224\276/\346\232\202\345\201\234", nullptr));
#endif // QT_CONFIG(tooltip)
        playsong_3->setText(QString());
#if QT_CONFIG(tooltip)
        nextsong_3->setToolTip(QCoreApplication::translate("MusicPlayer", "\344\270\213\344\270\200\346\233\262", nullptr));
#endif // QT_CONFIG(tooltip)
        nextsong_3->setText(QString());
#if QT_CONFIG(tooltip)
        sound_3->setToolTip(QCoreApplication::translate("MusicPlayer", "\350\260\203\350\212\202\351\237\263\351\207\217", nullptr));
#endif // QT_CONFIG(tooltip)
        sound_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MusicPlayer: public Ui_MusicPlayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUSICPLAYER_H
