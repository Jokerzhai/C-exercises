
//˽�г�Ա����ϰ

#include <iostream>

using namespace std;

class Box
{
    public:
        double length;
        void setWidth(double wid);
        double getWidth(void);

    private:
        double width;
};

//��Ա��������
double Box::getWidth(void)
{
    return width;
}

void Box::setWidth(double wid)
{
    width = wid;
}
int main()
{
    Box box;

    //��ʹ�ó�Ա�������ó���
    box.length = 10.0;  //OK;��Ϊlength �ǹ��е�
    cout << "Length of box : " << box.length << endl;

    //��ʹ�ó�Ա�������ÿ��
    //box.width = 10.0; //Error:��Ϊwidth��˽�е�
    box.setWidth(10.9); //ʹ�ó�Ա�������ÿ��
    cout << "Width of box: " << box.getWidth() <<endl;
    return 0;
}
