#include <iostream>
using namespace std;

//Base1클래스의 선언

class Base1{
    protected:
        int bs1;
    public:
        Base1(int b1=0){bs1=b1;}
        void showBs1();
};

//Base2클래스의 선언
class Base2{
    protected:
        int bs2;
    public:
        Base2(int b2=0){bs2=b2;}
        void showBs2();
};

//Derived클래스 선언
class Derived : public Base1, public Base2{
    protected:
        int dr;
    public:
        Derived(int d=0){dr=d;}
        void showDr();
};

//Base1클래스 멤버 함수의 정의
void Base1::showBs1()
{
    cout << "bs1은 " << bs1 << " 입니다.\n";
}

//Base2클래스 멤버 함수의 정의
void Base2::showBs2()
{
    cout << "bs2는 " << bs2 << " 입니다.\n";
}

//Derived클래스 멤버 함수의 정의
void Derived::showDr()
{
    cout << "dr은 " << dr << " 입니다.\n";
}

int main()
{
    Derived drv;

    drv.showBs1();
    drv.showBs2();
    drv.showDr();
	
    return 0;
}