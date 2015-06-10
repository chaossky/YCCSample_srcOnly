#include <iostream>
using namespace std;

//Point클래스 선언
class Point{
    private:
        int x;
        int y;
    public:
        void setX(int a);
        void setY(int b);
        int getX(){return x;}
        int getY(){return y;}
};

//Point클래스 멤버 함수의 정의
void Point::setX(int a)
{
    if(a >= 0 && a <= 10)
        x = a;
    else
        x = 0;
}
void Point::setY(int b)
{
    if(b >= 0 && b <= 10)
        y = b;
    else
        y = 0;
}

int main()
{
    Point p;
    int x, y;

    cout << "X좌표를 입력하십시오. \n";
    cin >> x;
    cout << "Y좌표를 입력하십시오. \n";
    cin >> y;

    p.setX(x);
    p.setY(y);

    cout << "좌표는 (" << p.getX() << "," << p.getY() << ")입니다. \n";

    return 0;
}