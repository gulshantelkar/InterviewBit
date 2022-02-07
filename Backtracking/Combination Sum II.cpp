void solve(vector<int>& candidates, int target,int idx,vector<vector<int>>&ans,vector<int>&path)
    {
        if(target==0)
        {
            ans.push_back(path);
            return;
        }

        for(int i=idx;i<candidates.size();i++)
        {
            if(i!=idx && candidates[i]==candidates[i-1])
                continue;
            
            if(candidates[i]>target) break;
                
            path.push_back(candidates[i]);
            solve(candidates,target-candidates[i],i+1,ans,path);
            path.pop_back();
        }
    }
vector<vector<int> > Solution::combinationSum(vector<int>& candidates, int target) {
    
     sort(candidates.begin(),candidates.end());
        
        vector<vector<int>>ans;
        vector<int>path;
        
        solve(candidates,target,0,ans,path);
       
        return ans;
    
}
