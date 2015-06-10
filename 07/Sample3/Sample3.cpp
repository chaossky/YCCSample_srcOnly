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
    buy(20);
    buy(50);

    return 0;
}