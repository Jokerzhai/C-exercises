//保护（protected）成员的练习

#include <iostream>

using namespace std;

class Box
{
    protected:
        double width;
};

class SmallBox:Box  //SmallBox是派生类
{
    public:
        void setSmallWidth(double wid);
        double getSmallWidth(void);
};
//子类的成员函数
double SmallBox::getSmallWidth(void)
{
    return width;
}

void SmallBox::setSmallWidth(double wid)
{
    width = wid;
}
int main()
{
    SmallBox box;
    //Box box; //错误


    //使用成员函数设置宽度
    box.setSmallWidth(5.0);
    cout << "Width of box: " << box.getSmallWidth() << endl;

    // cout << "Width of box: " << box.getSmallWidth(5.0) << endl; //错误
    return 0;
}

//Q:派生类会继承类的成员或者成员函数吗？
