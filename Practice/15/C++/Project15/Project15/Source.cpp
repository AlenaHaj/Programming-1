#include <iostream>
#include <ctime>
using namespace std;
int main() {
	int n, r, a1, a2, a3, a4, a5;
	int random[5] {};
restart:
	srand(time(NULL));
	for (int i = 0; i < 5; i++) {
		random[i] = rand() % 101;
	}
	n = random[0];
	setlocale(LC_ALL, "Rus");

	cout << "��� ������������ ���� ������ �����\n������� �����\n";
	cin >> a1;
	if (a1 < n)
		cout << "���������� ����� ������\n";
	else if (a1 > n)
		cout << "���������� ����� ������\n";
	else if (a1 == n) {
		cout << "����������! �� �������\n������ ������� ���? (1 - ��)\n";
		cin >> r;
		if (r == 1)
			goto restart;
		else
			return 0;
	}
	cin >> a2;
	if (a2 < n)
		cout << "���������� ����� ������\n";
	else if (a2 > n)
		cout << "���������� ����� ������\n";
	else if (a2 == n) {
		cout << "����������! �� �������\n������ ������� ���? (1 - ��)\n";
		cin >> r;
		if (r == 1)
			goto restart;
		else
			return 0;
	}
	cin >> a3;
	if (a3 < n)
		cout << "���������� ����� ������\n";
	else if (a3 > n)
		cout << "���������� ����� ������\n";
	else if (a3 == n) {
		cout << "����������! �� �������\n������ ������� ���? (1 - ��)\n";
		cin >> r;
		if (r == 1)
			goto restart;
		else
			return 0;
	}
	cin >> a4;
	if (a4 < n)
		cout << "���������� ����� ������\n";
	else if (a4 > n)
		cout << "���������� ����� ������\n";
	else if (a4 == n) {
		cout << "����������! �� �������\n������ ������� ���? (1 - ��)\n";
		cin >> r;
		if (r == 1)
			goto restart;
		else
			return 0;
	}
	cin >> a5;
	if (a5 == n) {
		cout << "����������! �� �������\n������ ������� ���? (1 - ��)\n";
		cin >> r;
		if (r == 1)
			goto restart;
		else
			return 0;
	}
	else if (a5 != n) {
		cout << "�� ���������. ���� ��������: " << n << "\n������ ������� ���? (1 - ��)\n";
		cin >> r;
		if (r == 1)
			goto restart;
		else
			return 0;
	}
}