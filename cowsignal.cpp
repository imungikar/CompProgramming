#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main(){
    freopen("cowsignal.in", "r", stdin);
    int height;
    int width;
    int scaleFactor;
    cin >> height >> width >> scaleFactor;
    char signal[height][width];
    for(int i=0;i<height;i++){
        for(int j=0;j<width;j++){
            cin >> signal[i][j];
        }
    }
    freopen("cowsignal.out", "w", stdout);
    for(int k = 0; k<scaleFactor*height;k++){
        for(int l=0;l<scaleFactor*width;l++){
            cout << signal[k/scaleFactor][l/scaleFactor];
        }
        cout << "\n";
    }
    
}