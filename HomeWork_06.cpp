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
	cout << endl;
}

void createVect(int*& X, int size) {

	cout << "Введи элементы массива: " << endl;
	for (int i = 0; i < size; i++) {
		cout << "[" << i + 1 << "] -  ";
		cin >> X[i];
	}
}

int main() {
	setlocale(LC_ALL, "Rus");
	int n;
	int* pA;

	cout << "Внесите количество элементов -  ";
	cin >> n;

	pA = new int[n]; 
	createVect(pA, n); 
	view(pA, n); 

	delete[]pA;  

	return 0;
}