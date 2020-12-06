#include<iostream>

using namespace std;

int main ()
{
    string a;
    int ile,ile_a=0;
    cout << "Podaj zdania: ";
    getline(cin,a);
    for(int i=0; i<a.length(); i++){
        if(a[i]=='a'){
            ile_a++;
        }
    }
    cout<<"\nW Twoim zdaniu jest "<<ile_a<<" liter a.";
}
