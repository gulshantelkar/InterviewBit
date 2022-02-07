
vector<int> queen;
vector<vector<string>> allsol;
int check(int row,int col){

    for(int prow=0;prow<row;prow++){
        int pcol=queen[prow];
        if(pcol==col || abs(prow-row)==abs(pcol-col)){
            return 0;
        }
    }
return 1;
}
void rec(int level,int n,vector<string> &temp){
    if(level==n){
        allsol.push_back(temp);
        return;
    }
    for(int col=0;col<n;col++){
        if(check(level,col)){
            queen.push_back(col);
            temp[level][col]='Q';
            rec(level+1,n,temp);
            temp[level][col]='.';
            queen.pop_back();
        }
    }
}
vector<vector<string> > Solution::solveNQueens(int A) {
    allsol.clear();
    queen.clear();
    if(A==2 || A==3){
        return allsol;
    }

    string s(A,'.');
    vector<string> temp(A,s);
    rec(0,A,temp);
    return allsol;
   
}
