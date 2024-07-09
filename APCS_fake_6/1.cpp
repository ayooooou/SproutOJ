#include <iostream>
#include <cstring> 
using namespace std;

int main(){
   int n,m,k,L,R,P,age[100],sum=0,count=0;
   cin >> n >>m;
   for(int i=0;i<n;i++){
    cin >> age[i];
   }
   cin >> k;
   for(int i=0;i<k;i++){
    cin >> L >> R >> P;
    for (int j=0;j<n ;j++){
        if(L <= age[j] && age[j]<= R){
            sum+=P;
            count+=1;
        }
    }
   }
   cout << sum + (n-count)*m;
}