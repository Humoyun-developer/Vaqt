#include <iostream> // #*3 xonali sonni teskarisini chiqarish*

using namespace std;

int main()
{
    int N,a,b,c,d,f,e;
    cin>> N;
    a=N/10000; //1000lar xonasidagi son
    b=(N-a*10000)/1000; //minglar xonasi
    c=((N-a*10000)-(b*1000))/100; // 100lar xonasi
    d=(N-a*10000-b*1000-c*100)/10;//10lar xonasi
    f=(N-a*10000-b*1000-c*100-d*10); //birliklar xonasi
    e=f*10000+d*1000+c*100+b*10+a;
    cout << e << endl;
    //Second poject
    int k,l;
    int k=21;
    int l=56;
    cin>>k;
    cout<<1176/k <<endl;
    return 0;
}
