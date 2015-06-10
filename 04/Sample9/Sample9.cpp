#include <iostream>
using namespace std;

int main()
{
    double dnum = 160.5;
    int inum;

    cout << "키는" << dnum << "센티미터 입니다.\n";
    cout << "int형 변수에 대입합니다.\n";
	
    inum = dnum;
	
    cout << "키는" << inum << "센티미터 입니다.\n";
	
    return 0;
}