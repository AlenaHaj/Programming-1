#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int main() {
	setlocale(LC_ALL, "Rus");
	cout << "����� ������� ����� ������� ������������ �������: 1\n����� ������� ����� ���������� ������ �������: 2\n";
	int k;
	cin >> k;
	if (k != 1 && k != 2) {
		cout << "������� �������� �����";
		return 0;
	}
	cout << "������� ������� ������������ a, b ,c:\n";
	double a, b, c, p, x1, y1, x2, y2 ,x3 ,y3;
	if (k == 1) {
		cin >> a >> b >> c;
		if (a < 0 || b < 0 || c < 0) {
			cout << "������ �� ����� ���� �������������";
			return 0;
		}
	}
	if (k == 2)
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	if (k == 1 && (a + b) < c && (a + c) < b && (c + b) < a)//�������� ������������� ����������
		cout << "������ ������������ �� ����������";
	if (k == 1) {
		p = (a + b + c) / 2;
		cout << "S = " << sqrt(p * (p - a) * (p - b) * (p - c));
	}
	else if (k == 2) {
		cout << "S = " << (abs((x1 - x3) * (y2 - y3) - (x2 - x3) * (y1 - y3)) / 2);
		if (abs((x1 - x3) * (y2 - y3) - (x2 - x3) * (y1 - y3) == 0))
			cout << "����������� �����������";
	}
}