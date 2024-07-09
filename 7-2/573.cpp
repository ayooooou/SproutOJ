#include <iostream>
#include <cstring> 
using namespace std;

char s[3000]={};
char color[7] = {'R', 'O', 'Y', 'G', 'B', 'I', 'V'};

void Paint(int n,int left, int right, int week){
    char now_color = color[week%7];
    if(n<3){
        for(int i=left; i<=right;i++){
            s[i] = now_color;
        }
    }
    else {
        /*mid 是邊界的意思*/
        int mid_left = left + (n/3) ;
        int mid_right = left + 2 * n / 3 - 1;
        for(int i= mid_left; i<=mid_right;i++){
            s[i] = now_color;
        }
        Paint(n / 3, left, mid_left - 1, week + 1);
        Paint(n / 3, mid_right + 1, right, week + 1);
    }
}

int main() {
    int n, k;
    cin >> n >> k;
    Paint(n, 0, n - 1, k - 1);
    for (int i = 0; i < n; i++) {
        cout << s[i];
    }
    cout << endl;
    return 0;
}