vector<string> allsol;
void rec(int level,string s,int A,int op,int cl){
    if(level==A){
        allsol.push_back(s);
        return;
    }
    if(op<A/2){
        op++;
        s+='(';
        rec(level+1,s,A,op,cl);
        op--;
        s.pop_back();
       
    }
    if(cl<op){
        cl++;
        s+=')';
        rec(level+1,s,A,op,cl);
        cl--;
        s.pop_back();
    }
}
vector<string> Solution::generateParenthesis(int A) {
    
    allsol.clear();
    string s;
    rec(0,s,2*A,0,0);
    return allsol;
}
