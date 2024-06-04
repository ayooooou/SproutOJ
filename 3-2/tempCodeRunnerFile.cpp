#include <iostream>
#include <cstring> // 引入 cstring 標頭檔
using namespace std;

int main(){
    int i=0;
    char str[501];
    cin >> str;
    int length = strlen(str);
    while(i<length){
        cout << (char)(str[i]+3);
        i++;
    }
}