// Задание 1
//Пользователь вводит число - шаг, через который в числовой последовательности от - 123 до 154 будет выводиться число.
// Сначала выводится последовательность
// Запрашивается число
// Выводится изменённая последовательность
#include <iostream>
using namespace std;
int main()
{
	int array[278]{ 0 };
	int step = 300;
	//формируем массив
	for (int i = 0, c = -123; i < 278; i++, c++) {
		array[i] = c;
	}
	// выводим массив
	for (int i = 0; i < 278; i++) {
		cout << "\t" << array[i];
	}

	do {
		cout << "\n" << "Step (1-exit) ?=  "; cin >> step;
		if (step > 278) continue;
		if (step <= 0) continue;
		for (int i = 0; i < 278; i++) {
			if (i % step == 0) cout << "\t" << array[i];
		}
	} while (!(step == 1));
	return 0;
}
