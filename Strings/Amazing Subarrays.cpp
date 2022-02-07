int Solution::solve(string A) {

    int cnt=0;

    for(int i=0;i<A.size();i++){
        if(A[i]=='a' ||A[i]=='e'||A[i]=='i'||A[i]=='o'||A[i]=='u'||A[i]=='A'||A[i]=='E'||A[i]=='I'||A[i]=='O'||A[i]=='U'){
            cnt+=(A.size()-i)%10003;
        }
    }
    return cnt%10003;
}
