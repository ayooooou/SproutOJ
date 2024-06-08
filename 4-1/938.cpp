#include <iostream>
#include <cstring> 
using namespace std;

int main(){
   int x,y,z,q,w,e,m,k;
   bool arr[100][100][100];
   string s;
   cin >> x >> y >> z;
   cin >> s;
   for(int i=0;i<x*y*z ;i++){
     arr[i%x][(i/x)%y][i/(x*y)] = (s[i] == '1');
   }
   cin >> q >> w >> e;
   cin >> m;
   for(int i=0;i<m;i++){
    cin >> k;
    switch (k){
        case 1:
            if(q+1>=x || arr[q+1][w][e]){cout << "Ooops!!!" << endl;}
            else {q++;}
            break;
        case 2:
            if(q-1<0 || arr[q-1][w][e]){cout << "Ooops!!!" << endl;}
            else {q--;}
            break;
        case 4:
            if(w+1>=y || arr[q][w+1][e]){cout << "Ooops!!!" << endl;}
            else {w++;}
            break;
        case 3:
            if(w-1<0 || arr[q][w-1][e]){cout << "Ooops!!!" << endl;}
            else {w--;}
            break;
        case 5:
            if(e+1>=z || arr[q][w][e+1]){cout << "Ooops!!!" << endl;}
            else {e++;}
            break;
        case 6:
            if(e-1<0 || arr[q][w][e-1]){cout << "Ooops!!!" << endl;}
            else {e--;}
            break;
        default:
            break;
    }
   }
   cout << q << " " << w << " "<< e <<endl;
}