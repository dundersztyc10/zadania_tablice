#include <iostream>
using namespace std;

int main()
{
    int tab[100];
    for(int i=0; i<100; ++i){
        cin >> tab[i];
    }
    int q;
    cin >> q;
    for(int i=0; i<q; ++i){
        int n;
        cin >> n;
        cout << tab[n-1]<<endl;
    }
}
