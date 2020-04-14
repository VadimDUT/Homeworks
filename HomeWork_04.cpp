#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;
int indexx(int ar[], const int size, int n) {
    for (int i = 0; i < size; i++) {
        if (ar[i] == n)
            return i;
       
    }
    return -1;
}



int main()
{
    srand(time(NULL));
    const int size = 5;
    int ar[size];
    int n;
    cout << "n: ";
   
    for (int i = 0; i < size; i++) {
        ar[i] = 1 + rand() % 5;
        cout << ar[i]<<" ";
    }
    cout << endl;
    cin >> n;
  
    cout << "n = " << indexx(ar, size, n);

}