#include <iostream>
#include <cstring> 
using namespace std;

int Paint(int h , int k){
    if(h==1){return 0;}
    else {return Paint(h/3,k+1);}
}

int main(){
   int n,k;
   cin >> n >>k;
   Paint((n+1)/2,k);
}