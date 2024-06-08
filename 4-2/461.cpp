#include <iostream>
#include <cmath>


bool isValid(int, int, int, int[], int[], int[], int, int);
double distance(int, int, int, int);

/*
 * 4個參數分別為：第一個點的x, y座標、第二個點的x, y座標
 * 回傳此二點的平面座標距離 
 */
double distance(int x1, int y1, int x2, int y2){
    return sqrt(pow(x1-x2,2)+pow(y1-y2,2));
}
/* 
 * 判斷娃娃魚是否能吃到所有增益。 
 * 8個傳入參數依序為：a, b, c, 霸霸位置, 咩咩位置, 喵喵位置, x, y.  
 * 若能吃到所有增益，回傳true；否則回傳false 
 */
bool isValid(int a, int b , int c, int baba[], int mie[], int miao[], int x, int y){
    bool hasBaba = false;
    bool hasMie = false;
    bool hasMiao = false;
    for(int i=0;i<a;i++){
        if (distance(x,y,baba[2*i],baba[2*i+1])<=10){
            hasBaba = true;
            break;
        }
    }
    for(int j=0;j<b;j++){
        if (distance(x,y,mie[2*j],mie[2*j+1])<=10){
            hasMie = true;
            break;
        }
    }
    for(int k=0;k<c;k++){
        if (distance(x,y,miao[2*k],miao[2*k+1])<=12){
            hasMiao = true;
            break;
        }
    }
    return hasBaba&&hasMie&&hasMiao;
}



int main()
{
	int a, b, c, x, y;
	int baba[20005];	// 霸霸 
	int mie[20005];		// 咩咩
	int miao[20005];	// 喵喵
	
	// input
	std::cin >> a >> b >> c;	// 霸咩喵數量 
	for(int i=0; i<a; ++i)		// 霸霸位置 
		std::cin >> baba[2*i] >> baba[2*i+1];
	for(int i=0; i<b; ++i)		// 咩咩位置 
		std::cin >> mie[2*i] >> mie[2*i+1];
	for(int i=0; i<c; ++i)		// 喵喵位置 
		std::cin >> miao[2*i] >> miao[2*i+1];
	std::cin >> x >> y;		// 娃娃魚當前位置 
	
	// output
	if(isValid(a,b,c,baba,mie,miao,x,y))
		std::cout << "Good Place! =)";
	else
		std::cout << "Not that well... =("; 
	return 0;
}
