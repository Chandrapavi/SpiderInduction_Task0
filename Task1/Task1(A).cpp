#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m,input,count=0;
    cin>>n;
    cin>>m;
    vector<int> price;
    for(int i=0; i<n; i++){
        cin>>input;
        price.push_back(input);
    }
    sort(price.begin(),price.end());
    for(int i=0; i<n; i++){
                if(m>=price[i]){
                m=m-price[i];
                count++; 
                if(m==0){
                    break;
                }
        }
    }
    cout<<count;
    return 0;
}
