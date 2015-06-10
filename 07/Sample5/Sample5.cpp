#include <iostream>
using namespace std;

//buy함수의 정의
void buy(int x, int y)
{
    cout << x << " 만원 짜리, " << y << " 만원 짜리 차량을 구입했습니다.\n";
}

//buy함수 호출
int main()
{
    int num1, num2;

    cout << "구입하시는 차량의 가격은 얼마입니까?\n";
    cin >> num1;

    cout << "구입하시는 차량의 가격은 얼마입니까?\n";
    cin >> num2;

    buy(num1, num2);

    return 0;
}