#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int time[2][2];
    int start,end;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cin>>time[i][j];
        }
    }
    start=max(time[0][0], time[1][0]);
    end=min(time[0][1], time[1][1]);
    int ans=end-start;
    if(ans>=0){
        cout<<ans;
    }
    else{
        cout<<"0";
    }
    return 0;
}
