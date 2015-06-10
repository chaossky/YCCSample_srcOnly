#include <iostream>
using namespace std;

int main()
{
    int num1, num2;

    cout << "정수를 2개 입력하십시오. \n";
    cin >> num1 >> num2;
    if(num1 < num2){
        cout << num1 << "보다" << num2 << " 가 큽니다. \n";
    }
    else if(num1 > num2){
        cout << num2 << "보다" << num1 << " 가 큽니다. \n";
    }
    else{
        cout << "두 숫자는 같습니다. \n";
    }

    return 0;
}