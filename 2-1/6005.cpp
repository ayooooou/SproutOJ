#include <iostream>

using namespace std;

int main(){
   int a=0,b=0,c=0;
   cin >> a >> b >> c;
   if (a<b && b<c){
    cout << "INCREASING\n";
    }
   else if (a>b && b>c){
    cout << "DECREASING\n";
   }
   else{
    cout << "NO\n";
   }
}