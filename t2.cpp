// Задание 2
// Программа получает на вход 2 натуралных числа : верхний и нижний границы диапазона.
// 1. Вывести весь диапазон
// 2. Запросить натуральное число
// 3. Вывести все числа, кратные введенному

#include <iostream>
using namespace std;
int main() {
	int top = 0, bottom = 0;
	int skip = INT16_MAX;

	do {
		cout << "top?= "; cin >> top;
		cout << "bottom?= "; cin >> bottom;
	} while ((top == 0) && (bottom == 0));

	for (int i = bottom; i <= top; i++) {
		cout << "\t" << i;
	}
	cout << "\nS?= "; cin >> skip;
	

	for (int i = bottom; i <= top; i++) {
		if (i % skip == 0) cout << "\t" << i;
	}
	return 0;
}
