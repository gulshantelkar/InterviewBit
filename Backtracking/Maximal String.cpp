
string res;
void rec(string A,int B){
    if(B==0){
        return ;
    }
    for(int i=0;i<A.size()-1;i++){
        for(int j=i+1;j<A.size();j++){
            swap(A[i],A[j]);
            if(A>=res){
                res=A;
            }
            rec(A,B-1);
            swap(A[i],A[j]);
        }
        

    }

}
string Solution::solve(string A, int B) {
    res=A;
    rec(A,B);
    return res;
}
