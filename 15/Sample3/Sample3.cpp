#include <iostream>
#include <string>
using namespace std;

//Car클래스 선언
class Car{
    private:
        int num;
        double gas;
        char* pName;
    public:
        Car(char* pN ,int n, double g);
        ~Car();
        Car(const Car& c);
        Car& operator=(const Car& c);
};

//Car클래스 멤버 함수의 정의
Car::Car(char* pN ,int n, double g)
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
Car::Car(const Car& c)
{
    cout << c.pName << " 로 초기화 합니다.\n";
    pName = new char[strlen(c.pName) + strlen(" 의  복사본 1")+1];
    strcpy(pName, c.pName);
    strcat(pName, " 의 복사본 1");
    num = c.num;
    gas = c.gas;
}
Car& Car::operator=(const Car& c)
{
    cout << pName << "에" << c.pName << " 를 대입합니다.\n";
    if(this != &c){
        delete[] pName;
        pName = new char[strlen(c.pName)+strlen(" 의 복사본 2")+1];
        strcpy(pName, c.pName);
        strcat(pName, " 의 복사본 2");
        num = c.num;
        gas = c.gas;
    }
    return *this;
}

int main()
{
    Car mycar("mycar", 1234, 25.5);
	
    Car car1 = mycar;
	
    Car car2("car2", 0, 0);
    car2 = mycar;
	
    return 0;
}