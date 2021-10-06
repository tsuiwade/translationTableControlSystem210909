# translationTableControlSystem210909-20211006



https://github.com/tsuiwade/translationTableControlSystem210909



这是一个简单的平移台控制软件，主要用到的是qt的串口功能。


1. https://blog.csdn.net/Mark_md/article/details/109048127

重写ComboBox下拉框的鼠标点击事件，实现点击下拉框扫描可用串口

2. 尝试过点击主菜单产生的事件，失败，不可提升为自定义类。

3. 把新的 timeshow 文件夹重命名为 timeshowfixed，并把 timeshowfixed 里面 timeshow.pro.user 用户文件删掉。
进入 timeshowfixed 文件夹，把 timeshow.pro 重命名为 timeshowfixed.pro。
③用记事本打开 timeshowfixed.pro，修改里面的 TARGET 一行，变成下面这句：
TARGET = timeshowfixed
进行这样三步操作后，我们本章第一个例子的项目 timeshowfixed 就建立好了。

4. 布局的时候花了几天时间。

  调布局时，发现一直不如自己所愿。出现了问题：布局中的布局里的间隙无法拉伸。效果就是第一个栅格布局高度不变。加了groupbox，并且改变为同其他类型的布局后，高度便可以开始拉伸，成功。
  ![image](https://user-images.githubusercontent.com/78476272/132862407-86f434ff-2748-4944-a236-213f7f98c96d.png)

![image](https://user-images.githubusercontent.com/78476272/132862466-c9d9b781-1851-478a-b0ec-54154e6004ab.png)



5. 经过几天的优化。总体样式如下：

   ![image-20211006193232544](https://gitee.com/tsuiwade/images/raw/master/image-20211006193232544.png)

   项目结构如下：
   
   ![image-20211006193838493](https://gitee.com/tsuiwade/images/raw/master/image-20211006193838493.png)
   
   
   
   - 先定分辨率1024*768，又布局了几天。布局采用Card的想法，分组放置，故研究阴影的放置，但出现groupBox**与子组件的样式和阴影不兼容问题**，查了好几天没找到是什么问题，最终偶然间下载qt5.14时，发现是**5.9的bug**。
   
   - 除了布局的设计，还有样式和阴影的设计。在qss文件和窗口文件中设置。
   
     加阴影的代码已经经过优化，优化前写的较重复且乱，有个问题一个阴影对象只可以幅值给一个对象，因此...
   
   ```c++
    QList<QWidget*> qList = {ui->horizontalSlider, ui->comboBox_portName,  ui->centralWidget}; //
   
       QList<QPushButton*> btnList = ui->centralWidget->findChildren<QPushButton*>();
       QList<QLineEdit*> lineList = ui->centralWidget->findChildren<QLineEdit*>();
       for (auto i : btnList)  qList.append(i);
       for (auto i : lineList)  qList.append(i);
   
       for (auto i : qList) {
           QGraphicsDropShadowEffect * shadow_effect = new QGraphicsDropShadowEffect(this);
           shadow_effect->setOffset(2, 2);
           shadow_effect->setColor(QColor(55, 55, 55));
           shadow_effect->setBlurRadius(8);
   
           i->setGraphicsEffect(shadow_effect);
       }
   ```
   
   ```css
   QPushButton{
       background-color:rgb(253,253,253);
       border-radius:8px;
       border-width:1px;
       border-color:rgba(0,0,0,50);
       border-style:outset;
       background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,
                                         stop: 0 #f6f7fa, stop: 1 #dadbde);
   }
   
   QPushButton:hover{
       background-color:rgb(224,238,249);
       border:1px solid rgb(11,137,234);
   }
   
   QPushButton:pressed {
       background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,
                                         stop: 0 #dadbde, stop: 1 #f6f7fa);
       padding-left:2px;
       padding-top:2px;
       border-style:inset;
       border-color:rgba(0,0,0,50);
   }
   
   
   QSlider::horizontal{
       min-height: 24px;
   }
   QSlider::groove:horizontal{
       background: "#EC7064";
       height: 12px;
       border-radius: 6px;
   }
   QSlider::add-page:horizontal{
       background: "#EC7064";
       height: 12px;
       border-radius: 6px;
   }
   QSlider::sub-page:horizontal{
       background: "#2EE1C1";
       height: 12px;
       border-radius: 6px;
   }
   QSlider::handle:horizontal{
       width: 24px;
       margin-top: -6px;
       margin-bottom:-6px;
       border-radius: 12px;
       background:qradialgradient(spread:pad,cx:0.5,cy:0.5,radius:0.5,fx:0.5,fy:0.5,stop:0.6 "#FFFFFF",stop:0.8 "#34495E");
   }
   
   
   QGroupBox#groupBox_1, #groupBox_2, #groupBox_3{
   
       background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,
       stop: 0 #f6f7fa, stop: 1 #dadbde);
       border-radius:20px;
   
       border-width:1px;
       border-color:rgba(0,0,0,50);
       border-style:outset;
   }
   ```
   
   样式包括圆角、偏移、渐变及渐变的颠倒、滑动条的前后样式和滑块样式。
   
   还有一个小tip是加上icon会生动许多。
   
   - 还有完成标志的动画。
   
     ![image-20211006194645681](https://gitee.com/tsuiwade/images/raw/master/image-20211006194645681.png)
   
     ![](https://gitee.com/tsuiwade/images/raw/master/image-20211006194751940.png)
   
     截图看不出动画的效果，是有关位置和透明度的动画。
   
     主要是设计了一个新对话框窗体，以非模态的方式出现3秒后自动消失。对话框淡入淡出的动画代码如下：
   
     ```c++
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
     ```
   
     其中最后几句槽函数是花了一些时间找来的，当动画消失后，对话框窗体关闭。
   
     - 点击QLineEdit，弹出虚拟数字键盘，代码也是网上找的修改了一下样式。
   
       ![image-20211006195444106](https://gitee.com/tsuiwade/images/raw/master/image-20211006195444106.png)
   
       QT数字软键盘，包括QLineEdit弹出代码和键盘样式来自：https://download.csdn.net/download/zhuifengcong/8833143
   
       最后采用遮罩蒙版，当某个窗体出现，背景变黑。代码来自：https://blog.csdn.net/tax10240809163com/article/details/108086890

