#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    int b = 0;

    b = a++;

    cout << "대입 후에 증가 연산자를 사용했습니다. 그러므로 b의 값은" << b << "입니다.\n";

    return 0;
}