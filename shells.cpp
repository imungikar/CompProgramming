#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main(){
    freopen("shell.in", "r", stdin);
    int swaps = 0;
    cin >> swaps;
    int shellPositions1[3] = {1,0,0};
    int shellPositions2[3] = {0,1,0};
    int shellPositions3[3] = {0,0,1};

    int maxPoints1 = 0;
    int maxPoints2 = 0;
    int maxPoints3 = 0;
    for(int i=0;i<swaps;i++){
        int a, b, g;
        cin >> a >> b >> g;
        a--, b--, g--;
        for(int shell = 0;shell<3;shell++){
            if(shell == 0){
                swap(shellPositions1[a], shellPositions1[b]);
                if(shellPositions1[g]==1){
                    maxPoints1++;
                }
            } else if(shell == 1){
                swap(shellPositions2[a], shellPositions2[b]);
                if(shellPositions2[g]==1){
                    maxPoints2++;
                }
            } else if(shell == 2){
                swap(shellPositions3[a], shellPositions3[b]);
                if(shellPositions3[g]==1){
                    maxPoints3++;
                }
            }

        }
        
    }
    freopen("shell.out", "w", stdout);
    cout << max(maxPoints1, max(maxPoints2, maxPoints3)) << endl;    
}