#include <iostream>
using namespace std;

int main()
{
    int res;

    cout << "정수를 입력하십시오.\n";

    cin >> res;

    if(res == 1){
        cout << "1이 입력되었습니다.\n";
        cout << "1을 선택했습니다.\n";
    }

    cout << "처리를 종료합니다.\n";

    return 0;
}