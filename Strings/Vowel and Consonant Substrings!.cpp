#define mod 1000000007;
int Solution::solve(string A) {
    
     int con=0;
      int vow=0;
      int cnt=0;
    for(int i=0;i<A.size();i++){
        if(A[i]=='a'||A[i]=='e' ||A[i]=='i'|| A[i]=='o' ||A[i]=='u'){
            vow++;
            cnt=(cnt+con)%mod;
        }else{
            con++;
            cnt=(cnt+vow)%mod;
        }
    }
    return (int)cnt;
}
