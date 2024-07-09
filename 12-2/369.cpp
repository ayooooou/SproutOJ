#include <iostream>
#include <cstring> 
#include <algorithm>
using namespace std;

int main(){
   int n,arr[10000];
   cin >> n;
   for (int i=0;i<n;i++){
    cin >> arr[i];
   }
    sort(arr+1,arr+n);
    reverse(arr+1,arr+n);
    for (int i=0;i<n;i++){
        cout << arr[i];
        if(i != n-1){cout<<" ";}
        else{cout <<endl;}
   }
}