
void rec(int index, int A,int k,vector<int> &sub,vector<vector<int>> &allsol){
    // if(k==0){
    //     allsol.push_back(sub);
    //     return;
    // }
    // for(int i=index;i<=A;i++){
    //     sub.push_back(i);
    //     rec(i+1,A,k-1,sub,allsol);
    //     sub.pop_back();
    // }
    if(sub.size()==k){
        allsol.push_back(sub);
    }
    
        for(int i=index;i<=A;i++){
             sub.push_back(i);     
        rec(i+1,A,k,sub,allsol);
        sub.pop_back();


    }
    
}
vector<vector<int> > Solution::combine(int A, int B) {
   vector<vector<int>> allsol;
    vector<int> sub;
    rec(1,A,B,sub,allsol);
    // sort(allsol.begin(),allsol.end());

    return allsol;

}
