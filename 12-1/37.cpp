#include <iostream>
#include <cstring> 
#include <queue> // Include the <queue> header file
using namespace std;

int main(){
   int T,a,n;
   queue<int> q;
   cin >> T;
   for (int i=0;i<T;i++){
    cin >> a;
    if(a==1){
        cin >> n;
        q.push(n);
    }
    else{
        if(q.size()>0){
            cout << q.front() << endl;
            q.pop();
        }
        else{
            cout << "empty!" << endl;
        }
    }
   }
}