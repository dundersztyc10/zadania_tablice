#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int tab[n];
    int t[n];
    for(int i=0; i<n; ++i){
        cin >> tab[i];
    }
    for(int i=0; i<n; ++i){
        if(tab[i]%2==0){
            t[i]=tab[i]*tab[i];
        }
        else{
            t[i]=tab[i]/10;
        }
    }
    for(int i=n-1; i>=0; --i){
        cout << t[i]<<endl;
    }

}
