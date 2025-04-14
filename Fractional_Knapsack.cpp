class Solution {
    public:
      double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
          // code here
          vector<pair<double,pair<int,int>>> v;
          int n = val.size();
          
          for(int i = 0; i < n; i++){
               double ratio = (double)val[i] / wt[i];
              v.push_back({ratio,{val[i],wt[i]}});
          }
          
          sort(v.rbegin(),v.rend());
          double ans = 0;
          for(int i = 0; i < v.size(); i++){
      
              double a = v[i].second.second;
              double b = v[i].second.first;
              
              if(a <= capacity){
                  ans += b;
                  capacity -= a;
              }
              else{
                  ans += double(b/a) * capacity;
                  capacity = 0;
              }
          }
          return ans;
      }
  };