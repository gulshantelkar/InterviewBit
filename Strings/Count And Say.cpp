string Solution::countAndSay(int A) {
    string res="";
    if(A<=0){
        return res;
    }
    if(A==1){
        return "1";
    }
    string s= countAndSay(A-1);
    
    int cnt=0;
    for(int i=0;i<s.size();i++){
        cnt++;
        if(i==s.size()-1 || s[i]!=s[i+1]){
            res=res+to_string(cnt)+s[i];
            cnt=0;
        }
    }
    return res;
   


 

}
