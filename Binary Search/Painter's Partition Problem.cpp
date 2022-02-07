bool canBeAlloted(int K, vector<int> &L, int threshold){
    long long board_length = 0, painter = 1;
    int n = L.size(); 
    
    for(int i=0;i<n;i++){
        board_length += long(L[i]); 
        if(board_length > threshold){ // If length exceeded thresold value, change the painter.
            board_length = 0; 
            painter++;
            i--;
           if(painter>K){ // Since number of painters exceeded.
                return false;
            }
        }
    }
     
    return true;
}

int Solution::paint(int K, int T, vector<int> &L){
    long long l=0,r=0,mid,ans=0,s=0; 
    int n=L.size();
    for(int i=0;i<n;i++){
        r += long(L[i]);
        ans = max(ans,(1ll)*L[i]);
    }
    
    while(l<=r){
        mid = (l+r)/2; 
        
        // If given length of board can be given, then try to minimize it more.
        if(canBeAlloted(K,L,mid)){
            ans = mid; 
            r = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    return (ans*long(T))%10000003;
}
