# translationTableControlSystem210909

这是一个简单的平移台控制软件，主要用到的是qt的串口功能。


1. https://blog.csdn.net/Mark_md/article/details/109048127

重写ComboBox下拉框的鼠标点击事件，实现点击下拉框扫描可用串口

2. 尝试过点击主菜单产生的事件，失败，不可提升为自定义类。
3. 把新的 timeshow 文件夹重命名为 timeshowfixed，并把 timeshowfixed 里面 timeshow.pro.user 用户文件删掉。
进入 timeshowfixed 文件夹，把 timeshow.pro 重命名为 timeshowfixed.pro。
③用记事本打开 timeshowfixed.pro，修改里面的 TARGET 一行，变成下面这句：
TARGET = timeshowfixed
进行这样三步操作后，我们本章第一个例子的项目 timeshowfixed 就建立好了。

4. 调布局时，发现一直不如自己所愿。出现了问题：布局中的布局里的间隙无法拉伸。效果就是第一个栅格布局高度不变。加了groupbox，并且改变为同其他类型的布局后，高度便可以开始拉伸，成功。
![image](https://user-images.githubusercontent.com/78476272/132862407-86f434ff-2748-4944-a236-213f7f98c96d.png)

![image](https://user-images.githubusercontent.com/78476272/132862466-c9d9b781-1851-478a-b0ec-54154e6004ab.png)

