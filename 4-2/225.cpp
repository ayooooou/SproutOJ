#include <iostream>
#include <cstring> 
using namespace std;

int san_n_jia_i(int n) {
  if(n==1){
    return 1;
  }
  else if(n%2==0){
    return n/2;
  }
  else{
    return 3*n+1;
  }

}


int main(){
   
}