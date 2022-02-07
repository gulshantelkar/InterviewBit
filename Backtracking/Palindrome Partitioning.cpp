
bool ispali(string A,int l,int r){
    while(l<r){
        if(A[l]==A[r]){
            l++;
            r--;
        }
        else{
            return false;

        }
    }
    return true;
}
void rec(int level,string A,vector<string> &sub,vector<vector<string> >& res){
    if(level==A.size()){
        res.push_back(sub);
        return;
    }
    for(int i=level;i<A.size();i++){
        if(ispali(A,level,i)){
            sub.push_back(A.substr(level,i-level+1));
            rec(i+1,A,sub,res);
            sub.pop_back();
        }
    }
}
vector<vector<string> > Solution::partition(string A) {
    vector<vector<string> > res;
    vector<string> temp;

    rec(0,A,temp,res);
    return res;

    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
