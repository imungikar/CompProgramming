#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

void setIO(string s) {

	ios_base::sync_with_stdio(0);

	cin.tie(0);

	freopen((s + ".in").c_str(), "r", stdin);

	freopen((s + ".out").c_str(), "w", stdout);

}

int main(){
    setIO("lostcow");    
    int start;
    int end;
    cin >> start >> end;
    int dir = 1;
    int dist = 1;
    int totalDist = 0;
    while(true){
        if(dir==1 && start+dist>=end && start<=end){
            totalDist += abs(end-start);
            break;
        }else if(dir==-1 && start-dist<=end && start>=end){
            totalDist += abs(end-start);
            break;
        } else{
            totalDist += 2*dist;
            dist *= 2;
            dir *= -1;
        }
    }
    cout << totalDist << endl;;
}

// int main(){
//     freopen("lostcow.in", "r", stdin);
//     int start;
//     int end;
//     cin >> start >> end;
//     bool found = false;
//     long long int iterator = 1;
//     long long int iterationDistance = 1;
//     int distance = 0;
//     while(!found){
//         for(int i=0;i<iterationDistance&&!found;i++){
//             if(iterator>0){
//                 start++;
//                 distance++;
//                 if(start==end){
//                     found = true;
//                 }
//             } else {
//                 start--;
//                 distance++;
//                 if(start==end){
//                     found = true;
//                 }
//             }
//         }
//         iterator *= -2;
//         iterationDistance += abs(iterator);
//     }
//     freopen("lostcow.out", "w", stdout);  
//     cout << distance;
    
// }