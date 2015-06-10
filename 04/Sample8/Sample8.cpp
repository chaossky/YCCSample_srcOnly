#include <iostream>
using namespace std;

int main()
{
    int inum = 160;
    double dnum;

    cout << "키는" << inum << "센티미터 입니다.\n";
    cout << "double형 변수에 대입합니다.\n";
	
    dnum = inum;
	
    cout << "키는" << dnum << "센티미터 입니다.\n";
    
    return 0;
}