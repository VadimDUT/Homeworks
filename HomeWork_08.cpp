#include <iostream> 
#include <time.h>

using namespace std;

void view(const int* X, int size) {

	for (int i = 0; i < size; i++) {
		cout << X[i] << "\t";
	}
	cout << endl << endl;
}
 
void createVect(int*& X, int size, int min, int max) {

	srand((time(NULL)));
	for (int i = 0; i < size; i++)
		X[i] = rand() % (max - min + 1) + min;
}

void check(int* D, int* M, int* Y, int size) {

	int myD = 19;
	int myM = 1;
	int myY = 2001;

	bool dfound = false;
	bool mfound = false;
	bool yfound = false;

	cout << "Дата рождения " << myD << ".0" << myM << "." << myY << endl;

	for (int i = 0; i < size; i++) {
		if (D[i] == myD) {
			dfound = true;
			break;
		}
	}
	if (dfound) {
		for (int i = 0; i < size; i++) {
			if (M[i] == myM) {
				mfound = true;
				break;
			}
		}
	}
	if (mfound) {
		for (int i = 0; i < size; i++) {
			if (Y[i] == myY) {
				yfound = true;
				break;
			}
		}
	}
	if (yfound) {
		cout << "Тебе везет:)";
	}
	else {
		cout << "Попробуй ещё раз";
	}
}

int main() {
	setlocale(LC_ALL, "Rus");
	int n = 10;
	int* D, * M, * Y;

	D = new int[n]; 
	createVect(D, n, 1, 30); 
	cout << "День: " << endl;
	view(D, n);

	M = new int[n];
	createVect(M, n, 1, 12);
	cout << "Месяц: " << endl;
	view(M, n);

	Y = new int[n];
	createVect(Y, n, 1999, 2003);
	cout << "Год: " << endl;
	view(Y, n);

	check(D, M, Y, n);

	delete[]D; 
	delete[]M;
	delete[]Y;
	

   return 0;

}
