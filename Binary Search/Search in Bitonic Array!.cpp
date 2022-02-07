/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Integer
 * 
 * @Output Integer
 */
int solve(int* nums, int size, int k) {
    int peak_index = findPeakElement(nums, 0, size-1);
    if(k > nums[peak_index]) 
        return -1;
    else if(k == nums[peak_index]) 
        return peak_index ;
    else {
       int  temp = ascendingBinarySearch(nums, 0, peak_index-1, k) ;
        if (temp != -1) { 
            return temp ;
        }
        // Search in right of k 
        temp = descendingBinarySearch(nums, peak_index+1, size-1, k);
        if(temp != -1){
            return temp;
        }
    }
    return -1;

}
int findPeakElement(int* nums, int low, int high) {
    if (low == high)
        return low;
    int mid = (low + high) / 2;
    if (nums[mid] > nums[mid + 1])
        return findPeakElement(nums, low, mid);
    return findPeakElement(nums, mid + 1, high);
}
int ascendingBinarySearch(int arr[], int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
            return mid;
        if (arr[mid] > key)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}
int descendingBinarySearch(int arr[], int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2 ;
        if (arr[mid] == key)
            return mid ;
        if (arr[mid] < key)
            high = mid - 1 ;
        else 
            low = mid + 1 ;
    }
    return -1 ;
}
