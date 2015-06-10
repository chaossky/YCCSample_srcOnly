#include <iostream>
using namespace std;

int main()
{
    int sum = 0, num = 0;

    cout << "과목 1의 점수를 입력하십시오. \n";
    cin >> num;
    sum += num;
    cout << "과목 2의 점수를 입력하십시오. \n";
    cin >> num;
    sum += num;
    cout << "과목 3의 점수를 입력하십시오. \n";
    cin >> num;
    sum += num;
    cout << "과목 4의 점수를 입력하십시오. \n";
    cin >> num;
    sum += num;
    cout << "과목 5의 점수를 입력하십시오. \n";
    cin >> num;
    sum += num;
    cout << "5 과목의 합계는" << sum << "점 입니다. \n";
    cout << "5 과목의 평균은" << (double)sum / 5 << "점 입니다. \n";

    return 0;
}