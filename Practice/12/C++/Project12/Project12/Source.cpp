#include <iostream>
using namespace std;
long double fact(int a) {
    if (a < 0) {
        cout << "����� ������ 0";
        return 0;
    }
    else if (a == 0) {
        return 1;
    }
    else
        return a * fact(a - 1);
}
int main() {
    int a;
    setlocale(LC_ALL, "Rus");
    cout << "������� ����� ��� ���������� ����������: ";
    cin >> a;
    cout << "�����:" << a << " = " << fact(a) << endl;
    return 0;
}