#include <iostream>

int range(int array[],int size);
double average(int array[],int size);

int main()
{
  int scores[1000];
  int n;
  std::cin >> n;
  for(int i = 0; i < n; i++)
    std::cin >> scores[i];
  
  std::cout << "Max - Min = " << range(scores, n) << "\n";
  std::cout << "Average = " << average(scores, n) << "\n";
  
  return 0;
}          

/* 你的程式碼會被放在這裡 */

int range(int scores[100],int n){
    int min=1000,max=0;
    for(int i=0;i<n;i++){
       if (scores[i] > max) {max = scores[i];}
       if (scores[i] < min) {min = scores[i];}
    }
    return max-min;
}

double average(int scores[100],int n){
    double sum=0;
    for(int i=0;i<n;i++){
        sum += scores[i];
    }
    return sum/n;
}