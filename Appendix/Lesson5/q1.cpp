#include <iostream>
using namespace std;

int main()
{
    int res;

    cout << "정수를 입력하십시오. \n";
    cin >> res;

    if((res % 2) == 0)
        cout << res << "은 짝수입니다. \n";
    else
        cout << res << "은 홀수입니다. \n";

    return 0;
}