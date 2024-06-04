#include <iostream>

using namespace std;

int main(){
   int n,arr[1000];
    cin >> n;
   for(int i=0;i<n;i++){
    cin >> arr[i];
   }
   for(int i=0;i<n;i++){
    cout << arr[arr[i]] << "\n";
   }
}