#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main() {
	setlocale(LC_ALL, "Rus");
	cout << "������� a,b,c ��� ������� ����������� ���������\n";			//a*x^2+b*x+c=0
	double a, b, c, D ;
	cin >> a >> b >> c;
	if (a == 0 && b!= 0 && c!=0)											//�� ������ ���������� ��-� �.1 (0 1 1) "0" - ���������� �� ����� ����; "1"- ���������� ����� ���� (��� ����)
		cout << "x = " << -(c) / b;
	else if (b == 0 && (-(c) / a) > 0)
		cout << "x1 = " << -sqrt(-(c) / a) << endl << "x2 = " << sqrt(-(c) / a) << endl;
	else if (b == 0 && a!=0 && c!=0 && (-(c) / a) < 0)						//(1 0 1)
		cout << "��� ������\n";
	else if (c == 0 && a!=0 && b!=0)										//(1 1 0)
		cout << "x1 = 0 " << "x2 = " << ((-b) / a)<<endl;
	D = b * b - 4 * a * c;													//������ ���������� ��-�
	if (D == 0 && a != 0 && b != 0 && c != 0)								//D==0
		cout << "x = " << (-(b)-sqrt(D)) / (2 * a) << endl;
	else if (D > 0 && a != 0 && b != 0 && c != 0)							//D>0
		cout << "x1 = " << (-1*(b)-sqrt(D)) / (2 * a) << endl << "x2 = " << (-1*(b)+sqrt(D)) / (2 * a) << endl;
	else if (D < 0 && a != 0 && b != 0 && c != 0)							//D<0
		cout << "��� ������";
	if (a == 0 && b == 0 && c == 0)											//�� ������ ���������� ��-� �.2 (0 0 0)
		cout << "x ����� �����";
	else if (a == 0 && b == 0 && c != 0)									//(0 0 1)
		cout << "��� ������";
	else if ((a == 0 && b != 0 && c == 0) || (a != 0 && b == 0 && c == 0))	//(0 1 0) (1 0 0)
		cout << "x = 0" << endl;
}