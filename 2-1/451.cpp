#include <iostream>

using namespace std;

int main(){
   int d,w;
   cin >> d >> w;
   if (d>31 || w>7){
    cout <<"= =\n";
   }

   else if (d==13&&w==5){
    cout << "._.zZ\n";
   }
   else if(d==13){
    cout << "QAQ\n";
   }
   else{
    cout << "Oh,AC!\n";
   }

}