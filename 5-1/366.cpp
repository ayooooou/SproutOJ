#include <iostream>
#include <cstring> 
using namespace std;

struct datas{
    int no;
    int gender;
    double weight;
};

datas c[100];

void printList(int n,double avg){
    for(int i=0;i<n;i++){
        if(c[i].weight>avg){
            if(c[i].gender==1){cout << '#' << c[i].no << " Steak house Vouchers\n";}
            else{cout << '#' << c[i].no << " Weight loss pills\n";}
        }
        else{
            if(c[i].gender==1){cout << '#' << c[i].no << " Fitness Equipment\n";}
            else{cout  << '#' << c[i].no << " WWE PPV\n";}
        }
    }
}

int main(void) {
    int n, i;
    double avg = 0;

    std::cin >> n;

    for (i = 0; i < n; i++) {
        c[i].no = i + 1;
        std::cin >> c[i].gender >> c[i].weight;
        avg += c[i].weight / n;
    }

    printList(n, avg);

    return 0;
}

