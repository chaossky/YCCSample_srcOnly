#include <iostream>
using namespace std;

//구조체 Person의 선언
struct Person {
    int age;
    double weight;
    double height;
};

//aging함수의 정의
void aging(Person* p)
{
    p->age++;
}

int main()
{
    Person ps;

    cout << "나이를 입력하십시오. \n";
    cin >> ps.age;
    cout << "몸무게를 입력하십시오. \n";
    cin >> ps.weight;
    cout << "키를 입력하십시오. \n";
    cin >> ps.height;

    cout << "나이" << ps.age << "몸무게" << ps.weight << "키" << ps.height << "입니다. \n";

    aging(&ps);
    cout << "1 년이 지났습니다. \n";

    cout << "나이" << ps.age << "몸무게" << ps.weight << "키" << ps.height << "입니다. \n";

    return 0;
}