#include <iostream>
using namespace std;

int main()
{
    int n,a=1,b=1,somma;
    cin>>n;
    if(n<2)
    {
    cout<<"errore"<<endl;
    }
    else
    {
     for (int i=0;i<n;i++)
     {
         somma=a+b;
         a=b;
         b=somma;
         cout<<somma<<endl;
     }
    }
    return 0;
}
