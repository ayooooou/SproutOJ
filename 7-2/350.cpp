#include <iostream>
#include <cstring> 
using namespace std;

int Pascal(int n,int m){
    if(m == 1 or m == n){return 1;}
    else {return Pascal(n-1,m-1) + Pascal(n-1,m);}
}

int main(){
   int T,n,m;
   cin >> T;

   for(int i=0;i<T;i++){
    cin >> n >> m;
    cout << Pascal(n,m) << endl;
   }

}