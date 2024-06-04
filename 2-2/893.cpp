#include <iostream>

using namespace std;

int main(){
    int a,b,i,j;
    cin >> a;
    for (i=1;i<=a;i++){
        for(b=1;b<=a-i;b++){
            cout << " ";
        }

        for(j=1;j<=i;j++){
            cout << i;
        }

        cout << " ";
        for(j=1;j<=i;j++){
            cout << i;
        }
        cout << "\n";
    }
}