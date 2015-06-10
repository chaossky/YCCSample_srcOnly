#include <iostream>
using namespace std;

//구조체 Person의 선언
struct Person {
    int age;
    double weight;
    double height;
};

int main()
{
    Person ps[2];

    for(int i = 0; i<2; i++){
        cout << "나이를 입력하십시오. \n";
        cin >> ps[i].age;
        cout << "몸무게를 입력하십시오. \n";
        cin >> ps[i].weight;
        cout << "키를 입력하십시오. \n";
        cin >> ps[i].height;
    }

    for(int j = 0; j<2; j++){
        cout << "나이 " << ps[j].age << " 몸무게 " << ps[j].weight << " 키 " << ps[j].height << " 입니다. \n";
    }
    return 0;
}