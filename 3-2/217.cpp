#include <iostream>
#include <cstring> // 引入 cstring 標頭檔
using namespace std;

int main(){
    int i=0;
    char str[501];
    cin >> str;
    int length = strlen(str);
    while(i<length){
        if (char(str[i])==120){
            str[i] = 'a';
        }
        else if (char(str[i])==121){
             str[i] = 'b';
        }
        else if (char(str[i])==122){
             str[i] = 'c';
        }
        else{
            str[i] = (char)(str[i]+3);
        }
        i++;
    }
    cout << str << endl;
}