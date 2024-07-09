#include <iostream>
#include <cstring> 
using namespace std;

int main(){
   int n,buy,sell=0,profit=0;
   cin >> n;
   int day[1000];
   for (int i=0;i<n;i++){
    cin >> day[i];
   }
   for (int i=0;i<n;i++){
    buy=day[i];
    for (int j=i;j<n;j++){
        if (sell < day[j]){
            sell = day[j];
        }
    }
    if ( (sell-buy) > profit){
        profit = sell-buy;
    }
    sell=0;
   }
    cout << profit <<endl;
}