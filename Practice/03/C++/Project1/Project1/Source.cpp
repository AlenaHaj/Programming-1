#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	cout << "������� ������� � ��������� �������:\n1)�������� 2)��������� 3)��������� 4)������� " <<endl;
	cout << "������� ���������� a, b ���� double, double:\n";
	double a;
	double b;
	cin >> a;
	cin >> b;
	double c1 = a + b;
	double c2 = a - b;
	double c3 = a * b;
	double c4 = a / b;
	
	cout << "���������� ���� double, double: \n" << "1)" << c1 << " 2)" << c2 << " 3)" << c3;
	if (b == 0) cout << " 4)" << "������� �� ����" << endl;
	else cout <<" 4)"<< c4 << endl;
	cout << "������� ���������� ���� int, double: \n";
	int z;
	double x;
	cin >> z;
	cin >> x;
	 c1 = z + x;
	 c2 = z - x;
	 c3 = z * x;
	 c4 = z / x;
	 
	 cout << "���������� ���� int, double: \n" << "1)" << c1 << " 2)" << c2 << " 3)" << c3;
	 if (x == 0) cout << " 4)" << "������� �� ����" << endl;
	 else cout <<" 4)"<< c4 << endl;
	cout << "������� ���������� ���� double, int: \n";
	double g;
	int j;
	cin >> g;
	cin >> j;
	 c1 = g + j;
	 c2 = g - j;
	 c3 = g * j;
	 c4 = g / j;
	
	 cout << "���������� ���� double, int: \n" << "1)" << c1 << " 2)" << c2 << " 3)" << c3;
	 if (j == 0) cout << " 4)" << "������� �� ����" << endl;
	 else cout <<" 4)"<< c4 << endl;

}  