#include <iostream>
using namespace std;

int main()
{
    char res;

    cout << "당신은 남성입니까?\n";
    cout << "Y 또는 N을 입력하십시오.\n";

    cin >> res;

    if(res == 'Y' || res == 'y') {
        cout << "당신은 남성이군요.\n";
    }
    else if(res == 'N' || res == 'n'){
        cout << "당신은 여성이군요.\n";
    }
    else{
        cout << "Y 또는 N을 입력하십시오.\n";
    }

    return 0;
}