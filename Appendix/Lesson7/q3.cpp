#include <iostream>
using namespace std;

//square함수의 정의
inline int square(int x){return x*x;}  
inline double square(double x){return x*x;}

//square 함수의 호출
int main()
{
    int num1;
    int sq1;
    cout << "정수를 입력하십시오. \n";
    cin >> num1;
    sq1 = square(num1);
    cout << num1 << "제곱은" << sq1 << "입니다. \n";

    double num2;
    double sq2;
    cout << "소수를 입력하십시오. \n";
    cin >> num2;
    sq2 = square(num2);
    cout << num2 << "제곱은" << sq2 << "입니다. \n";

    return 0;
}