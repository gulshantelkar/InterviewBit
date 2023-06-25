void rec(vector<int> &A,vector<int> &sub,set<vector<int>> &res,int B,int index){
    if(!B){
        res.insert(sub);   
        return;
    }
   
    for(int i=index;i<A.size();i++){
        if(B>=A[i]){
        sub.push_back(A[i]);
        rec(A,sub,res,B-A[i],i);
        sub.pop_back();
        }
        
    }
  
}
vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    sort(A.begin(), A.end());
    vector<int> sub;
    set<vector<int>> res;
    rec(A,sub,res,B,0);
    vector<vector<int>> ans;
    for(auto it : res){
        ans.push_back(it);
    }
    return ans;
}
