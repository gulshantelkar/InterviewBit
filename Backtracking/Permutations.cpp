
vector<vector<int>> allsol;
vector<int> curper;
map<int,int> mp;
void rec(int level,int n){
    
    if(level==n){
        allsol.push_back(curper);
        return;
    }
    for(auto v: mp){
        if(v.second!=0){
            mp[v.first]--;
            curper.push_back(v.first);
            rec(level+1,n);
            curper.pop_back();
            mp[v.first]++;    
        }
    }
    
}
vector<vector<int> > Solution::permute(vector<int> &A) {
    allsol.clear();
    curper.clear();
    mp.clear();
   
    int n=A.size();
    for(int i=0;i<n;i++){
        mp[A[i]]++;
    }
    rec(0,n);
    return allsol;
}

