#include <iostream>

using namespace std;

int main(){
   int a,count;
   cin >> a;
   while(a!=1){
    if (a%2==0){
        count+=1;
        a/=2;
    }
    else{
        count+=1;
        a=a*3+1;
    }
   }
   cout << count;
}