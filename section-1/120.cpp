#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int ax1, ay1, ax2, ay2, bx1, by1, bx2, by2;
    cin >> ax1 >> ay1 >> ax2 >> ay2 >> bx1 >> by1 >> bx2 >> by2;
    
    // 計算兩個長方形的面積
    int area1 = abs((ax2 - ax1) * (ay2 - ay1));
    int area2 = abs((bx2 - bx1) * (by2 - by1));
    
    // 計算重疊部分的坐標範圍
    int overlap_x1 = max(ax1, bx1);
    int overlap_y1 = max(ay1, by1);
    int overlap_x2 = min(ax2, bx2);
    int overlap_y2 = min(ay2, by2);
    
    // 計算重疊部分的面積
    int overlap_area = 0;
    if (overlap_x1 < overlap_x2 && overlap_y1 < overlap_y2) {
        overlap_area = (overlap_x2 - overlap_x1) * (overlap_y2 - overlap_y1);
    }
    
    // 計算總面積
    int total_area = area1 + area2 - overlap_area;
    cout << total_area << endl;

    return 0;
}
