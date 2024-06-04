#include <iostream>
#include <cstring> // 引入 cstring 標頭檔
using namespace std;

int main(){
   // strcat
char str1[15] = "aaaaa"; char str2[15] = "bbbbb";
strcat(str1, str2);
std::cout << str1 << std::endl; // (5)
// strncat
char str3[15] = "aaaaa"; char str4[15] = "bbbbb";
strncat(str3, str4, 3);
std::cout << str3 << std::endl; // (6)

strcpy(str1, str2);
std::cout << str1 << std::endl; // (3)
// strncpy
strncpy(str3, str4, 1);
std::cout << str3 << std::endl; // (4)
}