#include <iostream>
using namespace std;

int main()
{
    int tab[1000];
    for(int i=0; i<1000; ++i){
        tab[i]=0;
    }
    int o;
    cin >> o;
    char d[o];
    int l[o];
    int k[o];
    for(int i=0; i<o; ++i){
        cin >> d[i];
        cin >> l[i] >> k[i];
        if(d[i]=='+'){
            tab[k[i]]=tab[k[i]]+l[i];
        }
        if(d[i]=='-'){
            tab[k[i]]=tab[k[i]]-l[i];
        }
    }
    int q;
    cin >> q;
    int zap[q];
    for(int i=0; i<q; ++i){
        cin >> zap[i];
    }
    for(int i=0; i<q; ++i){
        cout << tab[zap[i]]<<endl;
    }
    return 0;
}
