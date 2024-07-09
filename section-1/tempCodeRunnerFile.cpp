#include <iostream>
#include <cstring>
using namespace std;

int main(){
   int ax1, ay1, ax2, ay2, bx1, by1, bx2, by2;
   int recover_area=0;
   int area1 = (ax2-ax1) * (ay2 - ay1);
   int area2 = (bx2-bx1) * (by2 - by1);
   cin >> ax1 >> ay1 >> ax2 >> ay2 >> bx1 >> by1 >> bx2 >> by2;
   if(ax1 < bx2 && ax1> bx1){
      if(ay1 < by2 && ay1 >by1){ //左下
         recover_area = (ax2-bx1) * (ay2-by1);
      }
      else if(ay2 < by2 && ay2 >by1){ //左上
         recover_area = (bx2-ax1)*(ay2-by2);
      }
   }
   else if (ax2 < bx2 && ax2> bx1){
      if(ay1 < by2 && ay1 >by1){ //右下
         recover_area = (bx1-ax2)*(by2-ay2);
      }
      else if(ay2 < by2 && ay2 >by1){ //右上
         recover_area= (ax2-bx1) * (ay2-by1);
      }
   }
   cout << area1 + area2 - recover_area << endl;
}  