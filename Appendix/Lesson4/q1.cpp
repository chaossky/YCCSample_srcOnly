#include <iostream>
using namespace std;

int main()
{
    int ans1 = 0 - 4;
    double ans2 = 3.14 * 2;
    double ans3 = (double)5 / (double)3;
    double ans4 = 30 % 7;
    double ans5 = (7 + 32) / (double)5;

    cout << "0-4 는 " << ans1 << "입니다. \n";
    cout << "3.14× 2 는 " << ans2 << "입니다. \n";
    cout << "5÷ 3 은 " << ans3 << "입니다. \n";
    cout << "30÷ 7 의 나머지 값은 " << ans4 << "입니다. \n";
    cout << "(7+32)÷ 5는 " << ans5 << " 입니다. \n";

    return 0;
}