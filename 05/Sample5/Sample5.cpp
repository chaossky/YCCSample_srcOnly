#include <iostream>
using namespace std;

int main()
{
    int res;

    cout << "정수를 입력하십시오.\n";

    cin >> res;

    switch (res){
        case 1:
            cout << "1이 입력 되었습니다.\n";
            break;
        case 2:
            cout << "2가 입력되었습니다.\n";
            break;
        default:
            cout << "1 또는 2를 입력하십시오.\n";
            break;
    }

    return 0;
}