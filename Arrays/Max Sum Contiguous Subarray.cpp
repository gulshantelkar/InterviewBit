int Solution::maxSubArray(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    int max_till_now=A[0],max_ending_here=A[0];
    for(int i=1;i<A.size();i++){
        max_ending_here=max(max_ending_here+A[i],A[i]);
        
        if(max_till_now<max_ending_here)
         max_till_now=max_ending_here;
    }
    return max_till_now;
}
