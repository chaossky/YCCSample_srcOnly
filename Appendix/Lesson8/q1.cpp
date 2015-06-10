#include <iostream>
using namespace std;

//add함수의 선언
void add(int * x1, int * x2, int a);

int main()
{
    int num1 = 0;
    int num2 = 0;
    int ad = 0;

    cout << "2 과목 분의 점수를 입력하십시오. \n";
    cin >> num1 >> num2;
    cout << "더할 점수를 입력하십시오. \n";
    cin >> ad;
    add(&num1, &num2, ad);
    cout << ad << "점을 더했으므로 \n";
    cout << "과목 1은" << num1 << "점이 되었습니다. \n";
    cout << "과목 2는" << num2 << "점이 되었습니다. \n";

    return 0;
}

//add함수의 정의
void add(int* x1, int* x2, int a)
{
    *x1 += a;
    *x2 += a;
}