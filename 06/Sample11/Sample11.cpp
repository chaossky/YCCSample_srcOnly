#include <iostream>
using namespace std;

int main()
{
    int res;

    cout << "정수를 입력하십시오.(1 ~ 5)\n";

    cin >> res;

    switch(res){
        case 1:
        case 2:
            cout << "조금 더 노력합시다.\n";
            break;
        case 3:
        case 4:
            cout << "이 페이스로 더 노력합시다.\n";
            break;
        case 5:
            cout << "매우 우수합니다.\n";
            break;
        default:
            cout << "1 ~ 5 까지의 성적을 입력하십시오.\n";
            break;
    }

    return 0;
}