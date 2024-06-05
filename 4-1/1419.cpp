#include <iostream>
#include <cstring> 
using namespace std;

int main(){
    int m,n,arr[1000][1000];
    cin >> m >> n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
        }
        
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << arr[j][i];
            if (j+1 != m) cout << " ";
        }
        cout << endl;
    }
}