#include <iostream>
using namespace std;

int main()
{
    int i = 1;

    do {
        cout << i << "번째 반복입니다.\n";
        i++;
    } while (i <= 5);

    cout << "반복이 끝났습니다.\n";

    return 0;
}