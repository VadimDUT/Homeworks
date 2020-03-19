#include <iostream>
using namespace std;

 int main() {
	setlocale(LC_ALL, "ru");
	cout << "Создано массив с рандомным значением[15] - ";
	int* arr = new int[15];

	for (int i = 0; i < 15; i++) {
		arr[i] = rand() % 15 + 1;
	}
	for (int i = 0; i < 15; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	for (int i = 1; i < 15; ++i) {
		for (int r = 0; r < 15; r++) {
			if (arr[r] < arr[r + 1]) {
				int temp = arr[r];
				arr[r] = arr[r + 1];
				arr[r + 1] = temp;
			}
		}
	}
	cout << "Вывод массива по убыванию - ";
	for (int i = 0; i < 15; i++) {
		cout << arr[i] << " ";
	}
}