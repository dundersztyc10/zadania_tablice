#include <iostream>
using namespace std;

int main()
{
    char tab[13];
    cin >> tab;
    for(int i=0; i<13; ++i){
        if(tab[i]=='A'){
            cout << 'Y';
        }
        else if(tab[i]=='B'){
            cout << 'Z';
        }
        else{
            cout << char(tab[i]-2);
        }
    }

}
