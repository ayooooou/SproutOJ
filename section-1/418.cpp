#include <iostream>
#include <cstring> 
using namespace std;

int main(){
    int n,q,t,a,b,p,temp,card[100000];
    cin >> n >>q;
    for(int  i=0;i<n;i++){
        cin >> card[i];
    }
    for(int i=0;i<q;i++){
        cin >> t;
        if(t ==1){
            cin >> a >> b;
            a-=1;
            b-=1;
            temp = card[a];
            card[a]=card[b];
            card[b]=temp;
        }

        else if (t==2){
            cin >> p;
            for(int j=0;j<n;j++){
                if (card[j]==card[p-1] && j!=p-1){
                    cout << j+1 <<endl;
                    break;
                }
            }
        }
        else{break;}

    }
}