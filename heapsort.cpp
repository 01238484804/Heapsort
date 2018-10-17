#include <iostream>
using namespace std;
void heap_sort(int a[], int n)
{
int k,x,s,f,ivalue;
for(k=1;k<n;k++)
    {
    x=a[k];
    s=k;
    f=(s-1)/2;
    while(s>0 && a[f]<x)
        {
        a[s]=a[f];
        s=f;
        f=(s-1)/2;
        }
    a[s]=x;
    }
for(k=n-1;k>0;k--)
    {
    ivalue=a[k];
    a[k]=a[0];
    f=0;
    if(k==1)
        s=-1;
    else
        s=1;
        if(k>2 && a[2]>a[1])
        s=2;
    while(s>=0 && ivalue<a[s])
        {
        a[f]=a[s];
        f=s;
        s=2*f +1;
        if (s+1<=k-1 && a[s]<a[s+1])
            s=s+1;
        if (s>k-1)
            s=-1;
        }
    a[f]=ivalue;
    }
}
int main()
{
    int n;
    cout <<"Nhap so cac so hang can sap xep:  ";
    cin >> n;
    int a[n];
    cout<<"Nhap cac so hang: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"a"<<i+1<<": " ;
        cin >>a[i];
        cout << endl;
    }
    heap_sort(a,n);
    cout<<"Day sau khi sap xep:  ";
    for(int i=0;i<n;i++)
        cout<<a[i] << "  ";
}
