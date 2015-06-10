#include <iostream>
using namespace std;

//count함수의 선언
int count(char str[], char ch);

int main()
{
    char str[100];
    char ch;

    cout << "문자열을 입력하십시오. \n";
    cin >> str;
    cout << "검색할 문자열을 입력하십시오. \n";
    cin >> ch;
    int c = count(str, ch);
    cout << str << "안에" << ch << "은(는)" << c << "개 있습니다. \n";

    return 0;
}

//count함수의 정의
int count(char str[], char ch)
{
    int i = 0;
    int c = 0;
    while(str[i]){
        if(str[i] == ch)
            c++;
        i++;
    }
    return c;
}