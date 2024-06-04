#include <iostream>
#include <cstring> 
using namespace std;

int main(){
   char f[10000],l[10000];
   int m,n;
   char ans[10000];
   cin >> f >> l;
   cin >> m >>n;
   strncpy(ans,f,m);
   strncat(ans,l,n);
   for(int i=3;i>0;i--){
    cout << ans << endl;
   }
}