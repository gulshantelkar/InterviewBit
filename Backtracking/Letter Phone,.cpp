
string temp="";
vector<string> allsol;
map<char,string > mp={
     { '1', "1" },
    { '2', "abc" },
    { '3', "def" },
    { '4', "ghi" },
    { '5', "jkl" },
    { '6', "mno" },
    { '7', "pqrs" },
    { '8', "tuv" },
    { '9', "wxyz" },
    { '0', "0" }
};
void rec(int level,string A){
    if(A[level]-'0'>-1 && A[level]-'0'<10){
        string str=mp[A[level]];
        for(int i=0;i<str.size();i++){
            temp+=str[i];

            if(level==A.size()-1){
                allsol.push_back(temp);
            }else{
                rec(level+1,A);
            }
            temp.pop_back();
        }
    }
}
vector<string> Solution::letterCombinations(string A) {
    allsol.clear();
    rec(0,A);
    return allsol;
}
