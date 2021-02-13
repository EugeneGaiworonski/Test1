#include <iostream>
#include <math.h>
using namespace std;

void newline();
void Do(int qty);
void Do(int, int);
int Do(float);
float Do(float a, float b);
int Do(int*, int);

int main()
{
	int arr[5] = { 5,6,3,-1,-9 };
	Do(3);
	newline();
	Do(2, 10);
	newline();
	cout << Do(3.5f);
	newline();
	cout << Do(0.12f, 3.14f);
	newline();
	cout << Do(arr, 5);
	return 0;
}

void Do(int qty) {
	for (int i = 0; i < qty; i++) {
		cout << "\nHello, World!";
	}
}
void Do(int a, int b) {
	for (int i = a; i <= b; i++) {
		cout << "\t" << i;
	}
}
int Do(float num) {
	int pt = 0;
	pt = (int)num;
	return (num - pt)*10;
}

float Do(float a, float b) { return a > b ? a : b; }

int Do(int array[], int length) {
	int min = INT_MAX;
	for (int i = 0; i < length; i++) {
		cout << "\t" << array[i];
		if (array[i] < min) min = array[i];
	}
	newline();
	return min;
}

void newline() { cout << '\n'; }
