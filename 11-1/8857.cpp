#include <iostream>
using namespace std;

int arr[100];
int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int *max_ptr = NULL;
    int *start = arr;
    int *end = arr + n;
    // start student code
    max_ptr = start;
    while(start != end){
        if(*start > *max_ptr){
            max_ptr = start;
        }
        start++;
    }
    
    cout << *max_ptr << endl;
}