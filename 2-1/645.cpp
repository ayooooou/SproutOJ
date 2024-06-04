#include <iostream>

using namespace std;

int main(){
   int a,b,c;
   cin >> a >> b >> c;
   if (a==b==c){
    cout << "Equilateral Triangle\n";
   }
   else if(a==b||b==c||a==c){
    cout <<"Isosceles Triangle\n";
   }
   else{
    cout <<"Scalene Triangle\n";
   }
}