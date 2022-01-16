#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int rooms;
    cin>>rooms; 
    int boxes[rooms];
    for(int i=0;i<rooms; i++){
        cin>>boxes[i];
    }
    for(int i=0;i<rooms;i++){
        int count=0;
       for(int j=1; j<=boxes[i]; j++){
           boxes[i]=boxes[i]-j;
           if(boxes[i]>=0){
               count++;
           }
           else{
               break;
           }
        }
        cout<<count<<endl;
    }
    return 0;
}
