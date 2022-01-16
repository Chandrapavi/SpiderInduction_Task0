#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    vector<int> prime;
    int n,x,count=0;
    cin>>n;
    cin>>x;
    int a[n+1]={0};
    for(int i=2; i*i<=n; i++){
        if(a[i]==0){
            for(int j=i*2; j<=n; j+=i){
                a[j]=1;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(a[i]==0){
            prime.push_back(i);
        }
    }
    int s=prime.size();
    for(int i=0; i<s-1;i++){
        int res=prime[i] + prime[i+1] + 1;
        if (binary_search(prime.begin(), prime.end(),res)) {
            count++;
        }
    }
    if(count>=x){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
