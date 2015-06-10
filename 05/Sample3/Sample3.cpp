#include<iostream>
using namespace std;

int main()
{
    int res;

    cout << "정수를 입력하십시오.\n";

    cin >> res;

    if(res == 1){
        cout << "1이 입력 되었습니다.\n";
    }
    else{
        cout << "1 이외의 값이 입력되었습니다.\n";
    }

    return 0;
}