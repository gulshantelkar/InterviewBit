int Solution::solve(vector<int> &A, int B) {
    sort(A.begin(),A.end());
    int n=A.size();

    long long int l=A[0];
     long long int h=A[n-1];
     long long int ans=0;

    while(l<=h){
        long long int mid= l+(h-l)/2;
        long long int wood=0;
         for(int j=0;j<n;j++){
              if(A[j]-mid>0){
                  wood = wood+A[j]-mid;
              }
          }
        if(wood>=B){
            l=mid+1;
            ans=max(ans,mid);
        }else{
            h=mid-1;
        }
    }
    return (int)ans;
}


