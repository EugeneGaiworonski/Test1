//Задание 4
//Пользователь вводит размер массива.
//1. Вывести массив на экран, заполненный любыми
//значениями
//2. Запросить у пользователя номер элемента массива
//для обнуления(записать в него 0)
//3. Вывести на экран результат с изменённым массивом
//4. Программа должна иметь меню с возможностью
//выхода(должна выполняться, пока не будет выбран пункт выхода)

#include <iostream>
using namespace std;

int menu();

int main() {
	int length = 0;
	int pos = 0;

	cout << "Array length?= "; cin >> length;
	int* array = new int[length];

	for (int i = 0; i < length; i++) {
		array[i] = rand() % 10;
	}
	for (;;) 
		switch (menu()) {
		case 1:
			for (int i = 0; i < length; i++) {
				cout << "\t" << array[i];
			}
			break;
		case 2:
			cout << "Position?= "; cin >> pos;
			array[pos] = 0;
			for (int i = 0; i < length; i++) {
				cout << "\t" << array[i];
			}
			break;
		case 3:
			delete[] array;
			array = 0;
			return 0;
			break;
		}
	
	
	
}

int menu() {
	int ch = 0;
	cout << "\n1 - write array";
	cout << "\n2 - get zero position";
	cout << "\n3 - exit";
	cout << ">"; cin >> ch;
	return ch;
}
