int main () 
{
    int i, n=0, a=1, b=0, c;
    cin>>n;
    if (n>=2)
    {

        for(i=0;i<n;i++)
        {
            c=a+b;
            a=b;
            b=c;
            cout<<c<<endl;
        }}
    else{
        cout<<"errore"<<endl;
    }

    return 0;
}
