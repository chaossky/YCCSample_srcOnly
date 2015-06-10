#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int& rA = a;

    cout << "변수 a의 값은 " << a << " 입니다.\n";
    cout <<"참조 rA의 값은 " << rA << " 입니다.\n";

    rA = 50;

    cout << "rA에50을 대입했습니다.\n";
    cout << "참조rA의 값은" << rA << "(으)로 변경되었습니다.\n";
    cout <<"변수 a의 값도 " << a <<"(으)로 변경되었습니다.\n";
    cout << "변수 a의 주소는 " << &a << " 입니다.\n";
    cout << "참조 rA의 주소도 " << &rA << " 입니다.\n";

    return 0;
}