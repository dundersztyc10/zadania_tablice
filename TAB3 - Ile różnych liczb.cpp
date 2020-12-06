#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>

using namespace std;

int main()
{
    vector<int>v(1000000,0);
    vector<int>last;
    int n;
    cin >> n;
    for(int i=0; i<n; ++i){
        int temp;
        cin >> temp;
        v[temp]++;
    }
    int counter = 0;
    for(auto a:v){
        if(a==1){
            counter++;
        }
    }
    cout << counter;
    //exit(0);
    return 0;
}
