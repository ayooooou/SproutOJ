#include <iostream>
#include <cstring> 
using namespace std;

int n,m,t,k,R,overcooked=0;
float H[10][10],y[10][10],tpt[10][10]={{0}},pan_up[10][10]={{0}},pan_down[10][10]={{0}};
bool up=true,undercooked=false,done=true;
char command[1000];


void result(){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(pan_up[i][j]<R || pan_down[i][j]<R){
                undercooked=true;
            }
            if(pan_down[i][j] >2*R||pan_up[i][j] > 2*R){
                overcooked+=1;
            }
        }
    }
    if (undercooked){cout << 0 ;}
    else{cout << 1 ;}
    cout << " "<< overcooked;
}

void heat(char command){
    if (command='S'){
        if(up){up = false;}
        else{up = true;}
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            tpt[i][j] += H[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(up){pan_up[i][j] += tpt[i][j]/k;}
            else{pan_down[i][j] += tpt[i][j]/k;}
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(H[i][j]+y[i][j]>0){H[i][j] += y[i][j];}
            else{H[i][j]=0;}
        }
    }
    //
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(pan_up[i][j]<R || pan_down[i][j]<R){
                done = false;
                break;
            }
        }
    }
    if(done){result();}
    else{done=true;}
}

int main(){
    cin >> n >> m;
    cin >> t >> k >> R;
    for(int i=0;i<t;i++){
        cin >> command[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> H[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> y[i][j];
        }
    }
    for(int i=0;i<t;i++){
        heat(command[i]);
    }
    result();
}