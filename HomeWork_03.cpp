#include <iostream>
#include "palendrom2.h" 
using namespace std;

void faktorial(int numb) {
    int rezult = 1;
    for (int i = 1; i <= numb; i++)
        rezult *= i;
    cout << numb << "! = " << rezult << endl;
}

int faktorial2(int numb) {
    int rezult = 1;
    for (int i = 1; i <= numb; i++)
        rezult *= i;
    return rezult;
}

bool palindrom5(int);


int main()
{
    setlocale(LC_ALL, "Rus");

    cout << "Приклад 1"<<endl;
    int digit;
    cout << "Enter number:";
    cin >> digit;
    faktorial(digit);

    cout << endl;

    cout << "Приклад 2" << endl;
    int digit2;
    cout << "Enter number:";
    cin >> digit2;
    cout << digit << "! = " << faktorial2(digit2) << endl;

    cout << endl;

    cout << "Приклад 3" << endl;
    cout << "Enter 5zn-e chislo:";    
    int in_number, out_number; 
    cin >> in_number;    
    out_number = in_number; 
    if (palindrom5(in_number))
        cout << "Number" << out_number << " - palendrom" << endl;   
    else       
        cout << "This is not palendrom" << endl;

    cout << endl;

    cout << "Приклад 4" << endl;
    cout << "Enter 5zn-e chislo:";
    int in_number2, out_number2;
    cin >> in_number2;
    out_number2 = in_number;
    if (palindrom6(in_number2))
        cout << "Number" << out_number2 << " - palendrom" << endl;
    else
        cout << "This is not palendrom" << endl;

    return 0;
}
    
bool palindrom5(int number) 
{ int balance1, balance2, balance4, balance5; 
balance1 = number% 10; 
number = number / 10;
balance2 = number % 10; 
number = number / 100;
balance4 = number % 10; 
number = number / 10;
balance5 = number % 10; 
if ((balance1 == balance5) && (balance2 == balance4))       
return true; 
else       
return false;  
	}