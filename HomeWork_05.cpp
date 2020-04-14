#include <iostream>


using namespace std;
void charfun( int n, int m) {

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if ((i == 0) or (j == 0) or (i == n - 1) or (j == m - 1)) cout << "* ";
            else cout << "  ";
        }
        cout << endl;
    }
        
    
}
int main()
{
    
    int n;
    int m;
    cin >> n >> m;
    cout << endl;
    charfun(m,n);
    cout << endl;
    system("pause");
    return 0;
}