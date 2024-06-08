#include <iostream>
#include <cstring> 
using namespace std;

int main()
{
    int m=0,n=0,c=0,arr[100][100]={},num=0,x=0,y=0;
    cin >> m >> n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }
    cin >> c;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if (arr[i][j]==c){
                x=i;
                y=j;
            }
        }
    }
    for (int p=0;p<m;p++){
        if(p==x){continue;}
        if(arr[p][y] > num){
            num=arr[p][y];
        }
    }
    for (int p=0;p<n;p++){
        if(p==y){continue;}
        if(arr[x][p] > num){
            num=arr[x][p];
        }
    }
    cout << num <<endl;
}