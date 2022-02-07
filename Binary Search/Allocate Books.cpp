int check(int x,vector<int> &A,int B){
    int n=A.size();
    int numstu=0;
    int sum=0;
    for(int i=0;i<n;i++){
        if(A[i]>x){
            return 0;
        }
        sum+=A[i];
        if(sum>x){
            numstu++;
            sum=A[i];
        }
        
    }
  return (numstu<B);
}
int Solution::books(vector<int> &A, int B) {
     if(B > A.size()) return -1;
    int n=A.size();
    int l=A[0];
    int h=0;
    int ans=-1;
    for(int i=0;i<n;i++){
        h+=A[i];
    }
    while(l<=h){
        int mid=l+(h-l)/2;
        if(check(mid,A,B)){
            ans=mid;
            h=mid-1;
            
        }
        else{
            l=mid+1;
        }
    }
    return ans;
}
