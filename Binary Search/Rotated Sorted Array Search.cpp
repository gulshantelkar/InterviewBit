/**
 * @input A : Read only ( DON'T MODIFY ) Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Integer
 * 
 * @Output Integer
 */
int search(const int* A, int n1, int B) {
    
    int low = 0, high = n1-1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(A[mid] == B) return mid;
        else if(A[0]<=A[mid]){
            if(A[0]<=B && B < A[mid]) high = mid-1;
            else low = mid+1;
        }else{
            if(A[mid] < B && B<=A[n1-1]) low = mid+1;
            else high = mid-1;
        }
    }
    return -1;
}
