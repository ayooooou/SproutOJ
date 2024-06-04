#include <iostream>

using namespace std;

int main(){
   int n,arr[50],sum=0,avg=0,ans=0;
   cin >> n;
   for(int i=0;i<n;i++){
    cin >> arr[i];
    sum+=arr[i];
   }
   avg = sum/n;
   for(int i=0;i<n;i++){
    if (arr[i]<avg){
        ans+=arr[i];
    }
   }
   cout << ans;
}