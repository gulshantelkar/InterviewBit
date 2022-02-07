int Solution::sqrt(int A) {

    if(A==0)return 0;
    long long int  res=0; //for getting values in floor

     long long int l=1;
     long long int h=A;
    while(l<=h){
         long long int mid =l+(h-l)/2;
        if(mid*mid ==A){
            return (int)mid;
        }else if(mid*mid<A){
            res=mid;
            l=mid+1;
        }else{
            h=mid-1;
        }
    }
    return (int)res;
}
