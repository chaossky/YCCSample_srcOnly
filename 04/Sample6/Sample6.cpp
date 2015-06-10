#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int num = 0;

    cout << "첫 번째 숫자를 입력하십시오.\n";
    cin >> num;
    sum += num;
    cout << "두 번째 숫자를 입력하십시오.\n";
    cin >> num;
    sum += num;
    cout << "세 번째 숫자를 입력하십시오.\n";
    cin >> num;
    sum += num;

    cout << "3개 정수의 합은 " << sum << "입니다\n";

    return 0;
}