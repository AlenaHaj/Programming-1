#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	cout << "������� ������� � ��������� �������:\n1)�������� 2)��������� 3)��������� 4)������� \n����� ���������� ������ � ��� �� ������� ����� ���������� �������" <<endl;
	cout << "������� ���������� a, b ���� double, double:\n";
	double a;
	double b;
	cin >> a;
	cin >> b;
	double c1 = a + b;
	double c2 = a - b;
	double c3 = a * b;
	double c4 = a / b;
	double c5 = b + a;
	double c6 = b - a;
	double c7 = b * a;
	double c8 = b / a;
	cout << "���������� ���� double, double: \n"<<"1)"<< c1<<" 2)" << c2 <<" 3)"<< c3 <<" 4)"<< c4 <<endl <<"1)"<< c5<<" 2)"<< c6 <<" 3)"<< c7 <<" 4)"<< c8<<endl;
	cout << "������� ���������� ���� int, double: \n";
	int z;
	double x;
	cin >> z;
	cin >> x;
	 c1 = z + x;
	 c2 = z - x;
	 c3 = z * x;
	 c4 = z / x;
	 c5 = x + z;
	 c6 = x - z;
	 c7 = x * z;
	 c8 = x / z;
	cout << "���������� ���� int, double: \n" << "1)" << c1 << " 2)" << c2 << " 3)" << c3 << " 4)" << c4 << endl << "1)" << c5 << " 2)" << c6 << " 3)" << c7 << " 4)" << c8<<endl;
	cout << "������� ���������� ���� double, int: \n";
	double g;
	int j;
	cin >> g;
	cin >> j;
	 c1 = g + j;
	 c2 = g - j;
	 c3 = g * j;
	 c4 = g / j;
	 c5 = j + g;
	 c6 = j - g;
	 c7 = j * g;
	 c8 = j / g;
	cout << "���������� ���� double, int: \n" << "1)" << c1 << " 2)" << c2 << " 3)" << c3 << " 4)" << c4 << endl << "1)" << c5 << " 2)" << c6 << " 3)" << c7 << " 4)" << c8<<endl;

}  