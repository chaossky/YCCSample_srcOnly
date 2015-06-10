#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0;
    cout << "시험 점수를 입력하십시오. (0 을 입력하면 종료합니다)\n";
    do{
        cin >> num;
        sum += num;
    } while (num);

    cout << "시험점수의 합계는" << sum << "점 입니다. \n";

    return 0;
}