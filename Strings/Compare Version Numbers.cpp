int cmp(string &s, string &r){
    if(s==r) return 0; 
    if(s.size()>r.size()) return 1; 
    if(r.size()>s.size()) return -1; 
    if(r>s) return -1; 
    return 1;
}
int Solution::compareVersion(string A, string B) {
    vector<string>S,R; 
    string s=""; 
    for(int i=0;A[i];i++){
        if(A[i]=='.'){
            int j=0;
            while(s[j]&&s[j]=='0') s.erase(s.begin());
            if(s.size()==0) continue;
            S.push_back(s);
            s="";
        }
        else s+=A[i];
    }
    while(s[0]&&s[0]=='0') s.erase(s.begin());
    if(s!="") S.push_back(s); 
    s="";
    for(int i=0;B[i];i++){
        if(B[i]=='.'){
            int j=0;
            while(s[j]&&s[j]=='0') s.erase(s.begin());
            if(s.size()==0) continue;
            R.push_back(s);
            s="";
        }
        else s+=B[i];
    }
    while(s[0]&&s[0]=='0') s.erase(s.begin());
    if(s!="") R.push_back(s); 
    int n = min(S.size(),R.size());
    for(int i=0;i<n;i++){
        //cout<<S[i]<<" "<<R[i]<<endl;
        int flag = cmp(S[i],R[i]);
        if(flag) return flag;
    }
    //cout<<S.size()<<" "<<R.size()<<endl;
    if(S.size()>n) return 1; 
    if(R.size()>n) return -1; 
    return 0;
}
