#include <iostream>

using namespace std;

class Line
{
    public:
        double length;
        void setLength(double len);
        double getLength(void);
};

//成员函数定义
double Line::getLength(void)// 类定义使用::
{
    return length;
}

void Line::setLength(double len)
{
    length = len;
}
int main()
{
    Line line;

    //设置长度
    line.setLength(6.0); //访问成员还是用.
    cout << "Length of line : "<<line.getLength() <<endl;

    //不使用成员函数设置长度
    line.length = 10.0; //OK；因为length 是公有的
    cout << "Length of line : " <<line.length << endl;
    return 0;
}
