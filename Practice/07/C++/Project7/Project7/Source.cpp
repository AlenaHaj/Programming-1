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
	int x1, y1, x2, y2, x3, y3;
	double a, b, c, p;
	if (k == 1) {
		cout << "������� ������� ������������ a, b ,c:\n";
		cin >> a >> b >> c;
		p = (a + b + c) / 2;
		if (a < 0 || b < 0 || c < 0) 
			cout << "������ �� ����� ���� �������������";
		else if ( (a + b) < c or (a + c) < b or (c + b) < a)//�������� ������������� ����������
			cout << "������ ������������ �� ����������";
		else 
			cout << "S = " << sqrt(p * (p - a) * (p - b) * (p - c));
		return 0;
	}
	if (k == 2) {
		cout << "������� ����������:\n";
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	}
		if (((x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1)) == 0) {
			cout << "����������� �����������";
			return 0;
		}
		cout << "S = " << (abs((x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1))/2);
		
	}
