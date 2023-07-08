#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main(){
    freopen("mixmilk.in", "r", stdin);
    long long int cap[3];
    long long int amnt[3];
    for(int i=0;i<3;i++){
        cin >> cap[i] >> amnt[i];
    }
    int type = 0;
    for(int pours=0;pours<100;pours++){
        if(type==0){
            if((amnt[1]+amnt[0]>cap[1])){
                amnt[0] = amnt[1] + amnt[0] - cap[1];
                amnt[1] = cap[1];
            } else {
                amnt[1] = amnt[0] + amnt[1];
                amnt[0] = 0;
            }
        } else if(type==1){
            if((amnt[2]+amnt[1]>cap[2])){
                amnt[1] = amnt[2] + amnt[1] - cap[2];
                amnt[2] = cap[2];
            } else {
                amnt[2] = amnt[1] + amnt[2];
                amnt[1] = 0;
            }
        } else if(type==2){
            if((amnt[0]+amnt[2]>cap[0])){
                amnt[2] = amnt[0] + amnt[2] - cap[0];
                amnt[0] = cap[0];
            } else {
                amnt[0] = amnt[2] + amnt[0];
                amnt[2] = 0;
            }

        }
        type++;
        type = type%3;
    }
    freopen("mixmilk.out", "w", stdout);  
    cout << amnt[0] << "\n" << amnt[1] << "\n" << amnt[2]; 
    
}