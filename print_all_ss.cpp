#include<bits/stdc++.h>
using namespace std;

void printall(int i,vector<int> ans,vector<int> arr,int n){
    if(i >= n){
        for(int i = 0; i < ans.size(); i++){
            cout<<ans[i]<<" ";
        }
        if(ans.size() == 0){
            cout<<"{}";
        }
        cout<<endl;
        return;
    }
    ans.push_back(arr[i]);
    printall(i+1,ans,arr,n);
    ans.pop_back();
    printall(i+1,ans,arr,n);
}
int main(){
    vector<int> ans;
    vector<int> arr = {3,1,2};
    int n = 3;
    printall(0,ans,arr,3);
}
