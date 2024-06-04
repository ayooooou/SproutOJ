#include <iostream>
#include <cstring> // 引入 cstring 標頭檔
using namespace std;

int main(){
   cout << (int)'Z' - (int)'A' << endl; //25
   cout << 'Z' - 'A' << endl; // 25
   cout << 'A' + 1 << endl; // 66
   cout << (char)'A' + 2 << endl; // 67
   cout << (char)('A' + 3) << endl; // D
   cout << (int)'a' << endl; // D
   // strcmp
   char str1[10] = "aaaaa";
   char str2[10] = "aabaa";
    std::cout << (strcmp(str1, str2) < 0) << std::endl; // (1)
    // strncmp
    std::cout << (strncmp(str1, str2, 2) < 0) << std::endl; // (2)
}