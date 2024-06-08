double distance(int x1, int y1, int x2, int y2){
    return sqrt(pow(x1-x2,2)+pow(x2-y2,2));
}

/* 
 * 判斷娃娃魚是否能吃到所有增益。 
 * 8個傳入參數依序為：a, b, c, 霸霸位置, 咩咩位置, 喵喵位置, x, y.  
 * 若能吃到所有增益，回傳true；否則回傳false 
 */
bool isValid(int a, int b , int c, int baba[], int mie[], int miao[], int x, int y){
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            for(int k=0;k<c;k++){
                if (distance(x,y,baba[2*i],baba[2*i+1])>10){
                    if (distance(x,y,baba[2*j],baba[2*j+1])>10){
                        if (distance(x,y,baba[2*k],baba[2*k+1])>10){
                            return true;
                        }
                    }
                }
            }
        }
    }
    return false;
}