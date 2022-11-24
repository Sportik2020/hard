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
/*Proc23. Описать функцию Quarter(x, y) целого типа, определяющую номер
координатной четверти, в которой находится точка с ненулевыми вещественными координатами (x, y). С помощью этой функции найти номера
координатных четвертей для трех точек с данными ненулевыми координатами.
*/
/*	srand((unsigned int)time(nullptr));
	for (int i = 1; i <= 3; i++) {
		double x = (rand() - 16383) / 1000.0;
		double y = (rand() - 16383) / 1000.0;
		cout << x << ' ' << y << ' ' << Quarter(x, y) << endl;
	}*/
/*Proc24. Описать функцию Even(K) логического типа, возвращающую TRUE,
если целый параметр K является четным, и FALSE в противном случае. С
ее помощью найти количество четных чисел в наборе из 10 целых чисел.
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