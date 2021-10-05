#include "dialog.h"
#include "ui_dialog.h"
#include <QPropertyAnimation>
#include <QSequentialAnimationGroup>
#include <QParallelAnimationGroup>
#include <QGraphicsDropShadowEffect>
#include <QScreen>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent), ui(new Ui::Dialog) {

    ui->setupUi(this);

    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);
    QGraphicsDropShadowEffect* effect = new QGraphicsDropShadowEffect;
    effect->setOffset(2, 2);
    effect->setColor(QColor(68, 68, 68));
    effect->setBlurRadius(18);
    ui->groupBox->setGraphicsEffect(effect);
    ui->groupBox->setStyleSheet("QGroupBox#groupBox{border-radius: 10px;background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #f6f7fa, stop: 1 #dadbde);}");
    ui->label->resize(35, 35);
    QPixmap iconaaa(":/icons/tick.png");
    iconaaa = iconaaa.scaled(ui->label->width(), ui->label->height());
    ui->label->setPixmap(iconaaa);
}


void Dialog::show() {

    //获取主屏幕分辨率
    QRect screenRect = QGuiApplication::primaryScreen()->geometry();

    QPropertyAnimation *appearPositionAnimation = new QPropertyAnimation(this, "geometry");
    appearPositionAnimation->setDuration(1000);
    appearPositionAnimation->setStartValue(QRect((screenRect.width() / 2) - 80, screenRect.height() / 2 - 40, 0, 0));
    appearPositionAnimation->setEndValue(QRect(screenRect.width() / 2 - 80, screenRect.height() / 2, 160, 80));
    appearPositionAnimation->setEasingCurve(QEasingCurve::InOutElastic);

//    QPropertyAnimation *vanishPostionAnimation = new QPropertyAnimation(this, "geometry");
//    vanishPostionAnimation->setDuration(1000);
//    vanishPostionAnimation->setStartValue(QRect(1024 / 2 - 80, 768 / 2, 160, 80));
//    vanishPostionAnimation->setEndValue(QRect(1024 / 2 - 80, 768 / 2 - 40, 0, 0));
//    vanishPostionAnimation->setEasingCurve(QEasingCurve::InBounce);

    QSequentialAnimationGroup *positionAnimationGroup = new QSequentialAnimationGroup(this);
    positionAnimationGroup->addAnimation(appearPositionAnimation);
    positionAnimationGroup->addPause(2000);
//    pScaleGroup->addAnimation(vanishPostionAnimation);

    this->setWindowOpacity(0.0);

    QPropertyAnimation* appearOpacityAnimation = new QPropertyAnimation(this, "windowOpacity");
    appearOpacityAnimation->setDuration(1000); // will take 5 seconds
    appearOpacityAnimation->setEasingCurve(QEasingCurve::OutBack); // just demonstration, there are a lot of curves to choose
    appearOpacityAnimation->setStartValue(0.0);
    appearOpacityAnimation->setEndValue(1.0);

    QPropertyAnimation* vanishOpacityAnimation = new QPropertyAnimation(this, "windowOpacity");
    vanishOpacityAnimation->setDuration(1000); // will take 5 seconds
    vanishOpacityAnimation->setEasingCurve(QEasingCurve::Linear); // just demonstration, there are a lot of curves to choose
    vanishOpacityAnimation->setStartValue(1.0);
    vanishOpacityAnimation->setEndValue(0.0);

    QSequentialAnimationGroup *opacityAnimationGroup = new QSequentialAnimationGroup(this);
    opacityAnimationGroup->addAnimation(appearOpacityAnimation);
    opacityAnimationGroup->addPause(2000);
    opacityAnimationGroup->addAnimation(vanishOpacityAnimation);

//    anim->start(QAbstractAnimation::DeleteWhenStopped);

    m_group = new QParallelAnimationGroup(this);
    m_group->addAnimation(positionAnimationGroup);
    m_group->addAnimation(opacityAnimationGroup);
    m_group->setDirection(QAbstractAnimation::Forward);
    m_group->setLoopCount(1);
    m_group->start();
    connect(this->m_group, SIGNAL(finished()), m_group, SLOT(deleteLater()), Qt::UniqueConnection);
    connect(this->m_group, SIGNAL(finished()), this, SLOT(close()));



    return QDialog::show();
}



Dialog::~Dialog() {
    delete ui;
}
