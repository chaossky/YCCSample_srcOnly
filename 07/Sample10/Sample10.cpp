#include <iostream>
using namespace std;

//max�Լ��� ����
int max(int x, int y);

//max�Լ��� ȣ��
int main()
{
    int num1, num2, ans;

    cout << "ù ��° ������ �Է��Ͻʽÿ�.\n";
    cin >> num1;

    cout << "�� ��° ������ �Է��Ͻʽÿ�.\n";
    cin >> num2;

    ans = max(num1, num2);
	
    cout << "�ִ밪�� " << ans << " �Դϴ�.\n";
    return 0;
}

// max �Լ��� ����
int max(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}