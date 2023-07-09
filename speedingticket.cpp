#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main(){
    freopen("speeding.in", "r", stdin);
    int roadSegments;
    int bessieSegments;
    int max = 0;
    cin >> roadSegments >> bessieSegments;
    int roadLengthHolder[roadSegments];
    int roadSpeedHolder[roadSegments];
    int bessieLengthHolder[bessieSegments];
    int bessieSpeedHolder[bessieSegments];
    int bessieSpeed[100];
    int maxSpeed[100];
    int leftOff = 0;
    for(int i=0;i<roadSegments;i++){
        cin >> roadLengthHolder[i] >> roadSpeedHolder[i];
        for(int j=0+leftOff;j<roadLengthHolder[i]+leftOff;j++){
            maxSpeed[j] = roadSpeedHolder[i];
        }
        leftOff += roadLengthHolder[i];
    }
    leftOff = 0;
    for(int i=0;i<bessieSegments;i++){
        cin >> bessieLengthHolder[i] >> bessieSpeedHolder[i];
        for(int j=0+leftOff;j<bessieLengthHolder[i]+leftOff;j++){
            bessieSpeed[j] = bessieSpeedHolder[i];
        }
        leftOff += bessieLengthHolder[i];
    }
    for(int i=0; i<100;i++){
        int diff = bessieSpeed[i] - maxSpeed[i];
        if(diff>max){
            max = diff;
        }
    }
    freopen("speeding.out", "w", stdout);
    cout << max;

}