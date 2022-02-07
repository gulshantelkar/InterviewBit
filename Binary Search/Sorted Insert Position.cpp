/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Integer
 * 
 * @Output Integer
 */
int searchInsert(int* A, int n1, int B) {
    int l=0; int h=n1-1;
    int ans=-1;

    while(l<=h){
        int mid =(l+h)/2;
        if(check(mid,A,B)){
            l=mid+1;
            ans=mid;
        }else{
            h=mid-1;
        }
    }
    if(A[ans]==B){
        return ans;
    }
    else{
        ans++;
        return ans;
    }

}
int check(int i,int* A,int B){
    return A[i]<=B;
}

