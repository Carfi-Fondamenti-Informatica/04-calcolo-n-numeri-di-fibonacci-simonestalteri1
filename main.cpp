#include <iostream>
using namespace std;

int main() {
    int n=0, i=0, primo=1, secondo=0, terzo=0;
    cin >> n ;
    if (n<2) 
    {
        cout << "errore" << endl;
    }
     else {
        for (i; i<n; i++){
            terzo=primo+secondo;
            primo=secondo;
            secondo=terzo;
            cout << terzo << endl;
    }
      }
    return 0;
}
