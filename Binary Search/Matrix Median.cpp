
int Solution::findMedian(vector<vector<int> > &A) {
    int r=A.size();
    int c=A[0].size();
    int min=INT_MAX,max=INT_MIN;
    for(int i=0;i<r;i++){
        if(A[i][0]<min) min=A[i][0];
        if(A[i][c-1]>max) max=A[i][c-1];
    }
    int half = (r*c+1)/2;
    while(min<max){
        int mid = (min+max)/2;
        int place=0;
        for(int i=0;i<r;i++){
            place+=upper_bound(A[i].begin(),A[i].end(),mid)-A[i].begin();
        }
        if(place<half) min=mid+1;
        else max=mid;
    }
    return min;
}
