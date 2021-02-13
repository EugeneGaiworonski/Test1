// Задание 3
// Пользователь вводит длину двух маршрутов и среднюю
// скорость по каждому из них соответственно.
// 1. Высчитать разницу в расстоянии двух маршрутов и
// вывести её на экран
// 2. Рассчитать время прохождения этих маршрутов в
// зависимости от средней скорости на нём и вывести на
// экран
using namespace std; 
#include <iostream>
int main() {
	float dist1 = 0, dist2 = 0, vel1 = 0, vel2 = 0;
	float differ = 0;
	cout << "\nS1?="; cin >> dist1;
	cout << "\nS2?="; cin >> dist2;
	cout << "\nv1?="; cin >> vel1;
	cout << "\nv2?="; cin >> vel2;
	if (dist1 >= dist2) differ = dist1 - dist2; else differ = dist2 - dist1;
	cout << "\nDifference S1:S2 = " << differ;
	cout << "\nv1= "<< dist1 / vel1;
	cout << "\nv2= " << dist2 / vel2;
	return 0;
}
