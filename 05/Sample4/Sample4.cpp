#include <iostream>
using namespace std;

int main()
{
    int res;

    cout << "정수를 입력하십시오.\n";

    cin >> res;

    if (res == 1){
        cout << "1이 입력 되었습니다.\n";
    }
    else if (res == 2){
        cout << "2가 입력 되었습니다.\n";
    }
    else{
        cout << "1 또는 2를 입력하십시오.\n";
    }

    return 0;
}