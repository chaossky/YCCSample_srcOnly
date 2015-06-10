#include <iostream>
using namespace std;

//max함수의 선언
int max(int x[]);

int main()
{
    int test[5];
    cout << "시험 점수를 입력하십시오. \n";
    for(int i = 0; i<5; i++){
        cin >> test[i];
    }

    int m = max(test);
    cout << "가장 높은 점수는 " << max << " 입니다. \n";

    return 0;
}

// max 함수의 정의
int max(int x[])
{
    int m = x[0];
    for(int i = 1; i<5; i++){
        if(m < x[i])
            m = x[i];
    }
    return m;
}