#include <iostream>
using namespace std;

int main()
{
    int num1 = 2;
    int num2 = 3;
    int sum = num1 + num2;

    cout << "변수 num1의 값은 " << num1 << "입니다.\n";
    cout << "변수 num2의 값은 " << num2 << "입니다.\n";
    cout << "num1 + num2의 값은 " << sum <<"입니다.\n";
	
    num1 = num1 + 1;

    cout << "변수 num1의 값에 1을 더하면 " << num1 << "입니다.\n";
	
    return 0;
}