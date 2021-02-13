//Задание 5
// Программа двумерный массив чисел, размером 8х8.
// 1. Заполнить его любыми значениями и вывести на
// экран
// 2. Запросить у пользователя координаты элемента
// массива и значение, на которое надо изменить этот
// элемент
// 3. Вывести результат с изменённым массивом на экран
// 4. Программа должна иметь меню с возможностью
// выхода(должна выполняться, пока не будет выбран
// пункт выхода)

#include <iostream>
#include <windows.h>
using namespace std;
int menu();
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int array[8][8] = { 0 };
	int posX = 0, posY = 0;

	for (int i = 0; i < 8; i++) {
		for (int k = 0; k < 8; k++) {
			array[i][k] = rand() % 10;
		}

	}

	for (;;) {
		switch (menu()) {
		case 1:
			for (int i = 0; i < 8; i++) {
				for (int k = 0; k < 8; k++) {
					cout << "\t" << array[i][k];
				}
				cout << '\n';
			}
			break;
		case 2:
			cout << "Координата 1?= "; cin >> posX;
			cout << "Координата 2?= "; cin >> posY;
			cout << "Новое значение?="; cin >> array[posX][posY];

			for (int i = 0; i < 8; i++) {
				for (int k = 0; k < 8; k++) {
					cout << "\t" << array[i][k];
				}
				cout << '\n';
			}
			break;
		case 3:
			return 0;
			break;
		}
	}

}

int menu() {
	int ch = 0;
	cout << "\n1 - Вывести массив";
	cout << "\n2 - Изменить элемент";
	cout << "\n3 - Выход";
	cout << ">"; cin >> ch;
	return ch;
}
