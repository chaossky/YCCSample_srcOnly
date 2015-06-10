#include <iostream>
using namespace std;

int main()
{
    int res;

    cout << "정수를 입력하십시오. \n";
    cin >> res;

    cout << "성적은" << res << "입니다.";
	
    switch(res){
        case 1:
            cout << "노력합시다. \n"; break;
        case 2:
            cout << "조금 더 노력합시다. \n"; break;
        case 3:
            cout << "더 높은 점수를 목표로 합시다. \n"; break;
        case 4:
            cout << "매우 잘했습니다. \n"; break;
        case 5:
            cout << "매우 우수합니다. \n"; break;
    }

    return 0;
}
