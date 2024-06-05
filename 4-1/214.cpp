#include <iostream>
#include <cstring> 
using namespace std;

int main(){
    int m,n,arr_1[1000][1000]={},arr_2[1000][1000]={},count=0;
    cin >> m >> n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> arr_1[i][j];
        }
        
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            for (int p=-1;p<=1;p++){
                for (int q=-1;q<=1;q++){
                    if (p==0&&q==0){continue;}
                    if (i+p>=0 && j+q>=0 && arr_1[i+p][j+q]==1){count+=1;}
                }
            }
            arr_2[i][j] = count;
            count = 0;
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout << arr_2[i][j];
            if (j+1 != n) cout << " ";
        }
        cout << endl;
    }
}