int Solution::firstMissingPositive(vector<int> &A) {
    sort(A.begin(),A.end());
    long long int ans=1;
    for(int i=0;i<A.size();i++){
        if(A[i]==ans){
            ans++;
        }
    }
    return (int)ans;
}
