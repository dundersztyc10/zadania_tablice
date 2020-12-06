#include <iostream>

using namespace std;

int main()
{
    int r[10]{0,0,0,0,0,0,0,0,0,0};
    char c;
    while(cin >> c){
        int a,b;
        cin >> a >> b;
        if(c == 'z'){
           r[a] = b;
        }
        else{
            switch(c){
                case '+':
                    cout << r[a]+r[b]<<endl;
                    break;
                case '-':
                    cout << r[a]-r[b]<<endl;
                    break;
                case '*':
                    cout << r[a]*r[b]<<endl;
                    break;
                case '/':
                    cout << r[a]/r[b]<<endl;
                    break;
                case '%':
                    cout << r[a]%r[b]<<endl;
                    break;
            }
        }
    }
    return 0;
}
