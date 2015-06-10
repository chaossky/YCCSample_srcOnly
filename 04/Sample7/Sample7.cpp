#include <iostream>
using namespace std;

int main()
{
    int a = 1;
    int b = 0;

    cout << "short int 형의 크기는 " << sizeof(short int) << "바이트 입니다.\n";
    cout << "int 형의 크기는 " << sizeof(int) << "바이트 입니다.\n";
    cout << "long int 형의 크기는 " << sizeof(long int) << "바이트 입니다.\n";
    cout << "float 형의 크기는" << sizeof(float) << "바이트 입니다.\n";
    cout <<"double 형의 크기는 " << sizeof(double) << "바이트 입니다.\n";
    cout << "long double 형의 크기는 " << sizeof(long double) << "바이트 입니다.\n";
    cout << "변수 a의 크기는 " << sizeof(a) << "바이트 입니다.\n";
    cout << "식a + b의 크기는 " << sizeof(a + b) <<  "바이트 입니다.\n";

    return 0;
}