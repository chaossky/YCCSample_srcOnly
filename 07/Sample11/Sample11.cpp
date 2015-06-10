#include <iostream>
using namespace std;

//buy함수 선언
void buy(int x = 10);

//buy함수 호출
int main()
{
    cout << "처음 구매가는 100만원 입니다.\n";
    buy(100);

    cout << "두 번째 구매가는 기본가격 입니다.\n";
    buy();

    return 0;
}

//buy함수 정의
void buy(int x)
{
    cout << x << "만원 짜리 차량을 구입했습니다.\n";
}