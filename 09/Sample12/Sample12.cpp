//역주: Visual Studio 2010버젼 이상 사용자는 아래의 코드를 꼭 넣으십시오.[s]
#define _CRT_SECURE_NO_WARNINGS
//역주: Visual Studio 2010버젼 이상 사용자는 위의 코드를 꼭 넣으십시오.[e]
#include <iostream>
#include <string>
using namespace std;

int main()
{
    char str0[20];
    char str1[10];
    char str2[10];
	
    strcpy(str1, "Hello");
    strcpy(str2, "Goodbye");
    strcpy(str0, str1);
    strcat(str0, str2);
	
    cout << "배열 str1 은(는)" << str1 << "입니다.\n";

    cout << "배열 str2 은(는)" << str2 << " 입니다.\n";

    cout << "연결하면 " << str0 << " 입니다.\n";

    return 0;
}