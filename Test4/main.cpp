//������protected����Ա����ϰ

#include <iostream>

using namespace std;

class Box
{
    protected:
        double width;
};

class SmallBox:Box  //SmallBox��������
{
    public:
        void setSmallWidth(double wid);
        double getSmallWidth(void);
};
//����ĳ�Ա����
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
    //Box box; //����


    //ʹ�ó�Ա�������ÿ��
    box.setSmallWidth(5.0);
    cout << "Width of box: " << box.getSmallWidth() << endl;

    // cout << "Width of box: " << box.getSmallWidth(5.0) << endl; //����
    return 0;
}

//Q:�������̳���ĳ�Ա���߳�Ա������
