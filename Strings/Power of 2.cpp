int Solution::power(string s) {
 int A=0;
    for(int i=0;i<s.size();i++){
        A=A*10+(s[i]-'0');
    }
    if(A == 1) return 0; 
    
    if(A & (A-1)) return 0;
    return 1; 
   
}
