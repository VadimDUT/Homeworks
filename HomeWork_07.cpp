#include <iostream>
#include <time.h>

using namespace std;

void view(const int*, int);
void createVect(int*&, int);
void view(const int* X, int size) {
	cout << "Масcив: " << endl;
	for (int i = 0; i < size; i++) {
		cout << X[i] << endl;
	}
	cout << endl << endl;
}

void createVect(int*& X, int size) {
	srand((time(NULL)));
	for (int i = 0; i < size; i++)
		X[i] = rand() % 20 - 10;
}
int maxElem(int* x, int size) {
	int max = 0;
	int index = 0;
	for (int i = 0; i < size; i++) {
		if (x[i] > max) {
			max = x[i];
			index = i;
		}
	}
	return index;
}

int main() {
	setlocale(LC_ALL, "Rus");
	int n;
	int* pA, * pB, * pC;
	cout << "Задайте количество элементов - ";
	
	cin >> n;
	pA = new int[n];
	createVect(pA, n);
	view(pA, n);
	cout << "Индекс максимального элемента:" << maxElem(pA, n) << endl;
	cout << "Задайте количество элементов - ";
	
	cin >> n;
	pB = new int[n];
	createVect(pB, n);
	view(pB, n);
	
	cout << "Индекс максимального элемента: " << maxElem(pB, n) << endl;
	cout << "Задайте количество элементов - ";
	
	cin >> n;
	pC = new int[n];
	createVect(pC, n);
	view(pC, n);
	
	cout << "Индекс максимального элемента: " << maxElem(pC, n) << endl;
	
	delete[]pA;
	delete[]pB;
	delete[]pC;
	
    return 0;
}
