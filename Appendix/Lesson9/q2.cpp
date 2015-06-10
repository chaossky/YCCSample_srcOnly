#include <iostream>
using namespace std;

//length함수의 선언
int length(char* str);

int main()
{
    char str[100];
    cout << "문자열을 입력하십시오. \n";
    cin >> str;
    int ln = length(str);
    cout << "문자열의 길이는" << ln << "입니다. \n";

    return 0;
}

//length함수의 정의
int length(char* str)
{
    int i = 0;
    while(str[i]){
        i++;
    }
    return i;
}