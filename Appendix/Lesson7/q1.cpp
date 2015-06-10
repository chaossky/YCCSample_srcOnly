#include <iostream>
using namespace std;

// square 함수의 선언
int square(int x);

// square 함수의 호출
int main()
{
    int num1;
    int sq1;

    cout << "정수를 입력하십시오. \n";
    cin >> num1;
    sq1 = square(num1);
    cout << num1 << "제곱은" << sq1 << "입니다. \n";

   return 0;
}

// square함수의 정의
int square(int x)
{
    return x * x;
}