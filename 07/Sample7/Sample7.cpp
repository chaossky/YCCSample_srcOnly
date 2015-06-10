#include <iostream>
using namespace std;

//sum함수의 정의
int sum(int x, int y)
{
    return x + y;
}

int main()
{
    int num1, num2, ans;

    cout << "첫 번째 정수를 입력하십시오.\n";
    cin >> num1;

    cout << "두 번째 정수를 입력하십시오.\n";
    cin >> num2;

    ans = sum(num1, num2);

    cout << "두 수의 합은 " << ans << " 입니다.\n";

    return 0;
}