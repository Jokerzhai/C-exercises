#include <iostream>

using namespace std;

class Box
{
    public:
        double length;  //����
        double breadth; //���
        double height;  //�߶�

};
int main()
{
    Box Box1;       //����Box1������ΪBox
    Box Box2;       //����Box2������ΪBox
    double volume = 0.0;    //���ڴ洢���

    //box1 ����
    Box1.length  = 5.0;
    Box1.height  = 6.0;
    Box1.breadth = 7.0;

    //box2 ����
    Box2.length  = 10.0;
    Box2.height  = 12.0;
    Box2.breadth = 13.0;

    //box1 �����
    volume = Box1.length * Box1.height * Box1.breadth;
    cout << "Box1 �������" <<volume << endl;

    //box2 �����
    volume = Box2.length * Box2.height * Box2.breadth;
    cout << "Box2 �������" <<volume << endl;

    return 0;
}
