#include <iostream>
#include <ctime>
using namespace std;
int Quarter(double x, double y) {
	if (x >= 0 && y >= 0)return 1;
	if (x < 0 && y > 0)return 2;
	if (x < 0 && y < 0)return 3;
	if (x > 0 && y < 0)return 4;
}
int Even(int k) {
	return k % 2 == 0;
}
int main()
{
	setlocale(LC_ALL, "Russian");
/*Proc23. ������� ������� Quarter(x, y) ������ ����, ������������ �����
������������ ��������, � ������� ��������� ����� � ���������� ������������� ������������ (x, y). � ������� ���� ������� ����� ������
������������ ��������� ��� ���� ����� � ������� ���������� ������������.
*/
/*	srand((unsigned int)time(nullptr));
	for (int i = 1; i <= 3; i++) {
		double x = (rand() - 16383) / 1000.0;
		double y = (rand() - 16383) / 1000.0;
		cout << x << ' ' << y << ' ' << Quarter(x, y) << endl;
	}*/
/*Proc24. ������� ������� Even(K) ����������� ����, ������������ TRUE,
���� ����� �������� K �������� ������, � FALSE � ��������� ������. �
�� ������� ����� ���������� ������ ����� � ������ �� 10 ����� �����.
*/
	int sum = 0;
	srand(time(nullptr));
	for (int i = 1; i <= 10; i++) {
		double x = rand();
		cout << x << ' ' << boolalpha << Even(x) << endl;
		if (Even(x))sum++; 
	}
	cout << sum << endl;

















	return 0;
}