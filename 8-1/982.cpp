#include    <cstdlib>
#include    <ctime>
#include    <iostream>
using namespace std;

int opponent(){
    int temp = rand() % 3;
    if (temp == 0) return 5; // 出布
    else if (temp == 1) return 2; // 出剪刀
    else return 0; // 出石頭
}

int you(int seed){
    srand(seed);
    int temp = rand() % 3;
    if (temp == 0) return 2; // 出布
    else if (temp == 1) return 0; // 出剪刀
    else return 5; // 出石頭
}

bool win(int a, int b){f
    if ((a == 5) and (b == 2)) return true; // 剪刀打贏布
    if ((a == 2) and (b == 0)) return true; // 石頭打贏剪刀
    if ((a == 0) and (b == 5)) return true; // 布打贏石頭
    return false;
}

int main() {
    int seed;
    cin >> seed;
    srand(seed);
    int a = opponent();
    int b = you(seed);
    if (win(a,b)) std::cout << "You win!" << std::endl;
    else std::cout << "You lose!" << std::endl;
    return 0;
}