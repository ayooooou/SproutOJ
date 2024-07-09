#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main(){
    int n,q,l,r;
    int m[1000000];
    cin >> n >>q;
    for(int i=0;i<n;i++){
        cin >> m[i];
    }
    sort(m,m+n);
    for(int i=0;i<q;i++){
        cin >> l >>r;
        int* ptr1 = lower_bound(m,m+n,l);
        int* ptr2 = upper_bound(m,m+n,r);
        cout << ptr2-ptr1 <<endl;
    }  
}