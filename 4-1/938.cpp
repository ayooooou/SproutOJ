#include <iostream>
#include <cstring> 
using namespace std;

int main(){
   int x,y,z,q,w,e,m,k;
   bool arr[100][100][100];
   //string 是 C++ 標準庫中的類別，能夠動態調整大小，自動處理記憶體分配和釋放。
   //char[1000] 是固定大小的字元陣列，不能動態調整大小，需要手動處理字串結尾（加上終止字元 '\0'）和記憶體管理。
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