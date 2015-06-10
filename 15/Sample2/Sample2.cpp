#include <iostream>
#include <string>
using namespace std;

//Car클래스의 선언
class Car{
    private:
        int num;
        double gas;
        char* pName;
    public:
        Car::Car(char* pN, int n, double g);
        ~Car();
        void show();
};

//Car클래스 멤버 함수의 정의
Car::Car(char* pN, int n, double g)
{
    pName = new char[strlen(pN)+1];
    strcpy(pName, pN);
    num = n;
    gas = g;
    cout << pName << " 를 생성했습니다.\n";
}
Car::~Car()
{
    cout << pName << " 를 소멸시킵니다.\n";
    delete[] pName;
}
void Car::show()
{
    cout << "차량 번호는 " << num << " 입니다.\n";
    cout << "연료 양은 " << gas << " 입니다.\n";
    cout << "이름은 " << pName << " 입니다.\n";
}

//Car클래스의 이용
int main()
{
    Car car1("mycar", 1234, 25.5);
    car1.show();
    return 0;
}