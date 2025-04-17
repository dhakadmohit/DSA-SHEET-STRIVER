#include<bits/stdc++.h>
using namespace std;

bool printall(int i,vector<int> ans,vector<int> arr,int n,int sum){
    if(i >= n){
        
        if(sum == 6){

            for(int i = 0; i < ans.size(); i++){
                cout<<ans[i]<<" ";
            }
            if(ans.size() == 0){
                cout<<"{}";
            }
            return true;
        }
        // cout<<endl;
        return false;
    }
    ans.push_back(arr[i]);
    sum += arr[i];
    if(printall(i+1,ans,arr,n,sum)){
        return true;
    }
    sum -= arr[i];
    ans.pop_back();
    if(printall(i+1,ans,arr,n,sum)){
        return true;
    }
    return false;
}
int main(){
    vector<int> ans;
    vector<int> arr = {3,1,2};
    int n = 3;
    printall(0,ans,arr,3,0);
}
