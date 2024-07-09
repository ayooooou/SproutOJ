#include <iostream>
#include <cstring> 
using namespace std;

int main(){
   int n,num_sp=0,num_pa=0;
   cin >> n;
   char sp[10000],pa[10000];
   for(int i=0;i<n;i++){
    cin>> sp[i] >>pa[i];
    if (sp[i]=='X'){num_sp+=1;}
    else{num_sp=0;}
    if (pa[i]=='X'){num_pa+=1;}
    else{num_pa=0;}
    if (num_sp == 4){cout << "Spongebob loses!" << endl; break;}
    if (num_pa == 4){cout << "Patrick loses!"  << endl; break;}
    if ( i == n-1){cout << "Not yet!"  << endl; break;}
   }
}