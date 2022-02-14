int Solution::perfectPeak(vector<int> &A) {
    //Brute Force 
    //o(n^2)
    //
        int n = A.size() ;
    //maximum left element 
    int mx = A[0] ; 
    vector<int> suffix(n+5,INT_MAX) ;
    suffix[n-1] = A[n-1] ;
    for(int i =n-2 ;i>=0 ;i--) suffix[i] = min(suffix[i+1] ,A[i+1]) ;

    for(int i = 1;i<n-1 ;i++)
    {
        int current = A[i]  ;
        if(current > mx && current < suffix[i]) return 1 ;
        mx =max(mx, current) ;
   
    }    

    return 0 ;
}
