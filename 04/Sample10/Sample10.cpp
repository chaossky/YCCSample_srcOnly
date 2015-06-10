#include <iostream>
using namespace std;

int main()
{
    int d = 2;
    const double pi = 3.14;

    cout << "지름이" << d << "센티미터인 원의\n";
    cout << "둘레는" << d*pi << "센티미터 입니다.\n";

    return 0;
}