#include <iostream>
using namespace std;

//buy함수의 정의
void buy(int x)
{
    cout << x << "만원 짜리 차량을 구입했습니다.\n";
}

//buy함수의 호출
int main()
{
    int num;

    cout << "첫 번째로 구입하는 차량의 가격은 얼마입니까?\n";
    cin >> num;

    buy(num);

    cout << "두 번째로 구입하는 차량의 가격은 얼마입니까?\n";
    cin >> num;

    buy(num);

    return 0;
}