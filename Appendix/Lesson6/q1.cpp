#include <iostream>
using namespace std;

int main()
{
    cout << "1 ~ 10까지의 짝수를 출력합니다. \n";
    for(int i = 1; i <= 10; i++){
        if((i % 2) == 0)
            cout << i << '\n';
    }
    return 0;
}