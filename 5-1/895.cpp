#include <iostream>
#include <cstring> 
using namespace std;

struct Student {
  char name[100];
  char gender;
  int score;
};

double girls_average(Student ss[], int size){
    double sum=0,num=0;
    for(int i = 0; i < size; ++i) {
        if(ss[i].gender=='F'){
           sum+= ss[i].score;
           num+=1;
        }
    }
    return sum == 0 ? -1 : sum/num; 
}


double boys_average(Student ss[], int size){
    double sum=0,num=0;
    for(int i = 0; i < size; ++i) {
        if(ss[i].gender=='M'){
           sum+= ss[i].score;
           num+=1;
        }
    }
    return sum == 0 ? -1 : sum/num; 
}
void print(Student s){
    cout << s.name << " [" << s.gender << "]: "<< s.score << "\n";   //ABC [F]: 100\n"
}

int main() {

    Student ss[1000];
    int n;

    std::cin >> n;
    for(int i = 0; i < n; ++i) {
        std::cin >> ss[i].name;
        std::cin >> ss[i].gender;
        std::cin >> ss[i].score;
    }

    for (int i = 0; i < n; ++i)
        print(ss[i]);
    std::cout << "-----------------------------------------------\n";
    std::cout << "Girl's average = " << girls_average(ss, n) << "\n";
    std::cout << "Boy's average = " << boys_average(ss, n) << "\n";
  
    return 0;
}