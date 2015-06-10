#include <iostream>
using namespace std;

//구조체형  Car의 선언
struct Car{
    int num;
    double gas;
};

//show함수 선언
void show(Car c);

int main()
{
    Car car1 = {0, 0.0};

    cout << "차량 번호를 입력하십시오.\n";
    cin >> car1.num;

    cout << "연료 양을 입력하십시오.\n";
    cin >> car1.gas;

    show(car1);

    return 0;
}

//show함수의 정의
void show(Car c)
{
    cout << "차량 번호는 " << c.num << " 연료의 양은 " << c.gas << " 입니다.\n";
}