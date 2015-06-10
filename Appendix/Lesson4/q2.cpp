#include <iostream>
using namespace std;

int main()
{
    double height, width;

    cout << "삼각형의 높이를 입력하십시오. \n";
    cin >> height;
    cout << "삼각형의 밑변을 입력하십시오. \n";
    cin >> width;
    cout << "삼각형의 넓이는" << height * width / 2 << "입니다. \n";

    return 0;
}