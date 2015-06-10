#include <iostream>
using namespace std;

int main()
{
    int res;

    cout << "몇 번째 처리를 건너 뛰시겠습니까?(1 ~ 10)\n";

    cin >> res;

    for(int i = 1; i <= 10; i++){
        if(i == res)
            continue;
        cout << i << "번째 처리입니다.\n";
    }

    return 0;
}