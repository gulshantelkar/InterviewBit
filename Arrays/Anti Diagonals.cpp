vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
int x=A.size();
    vector<vector<int>> res(2*x-1);
    int cnt=0;
    for(int i=0;i<A.size();i++){
        int a=0; int y=i;
        while(a<x && y>=0){
            res[cnt].push_back(A[a][y]);
            a++;
            y--;
        }
        cnt++;
    }
     for(int i=1;i<A.size();i++){
        int a=i; int y=x-1;
        while(a<x && y>=0){
            res[cnt].push_back(A[a][y]);
            a++;
            y--;
        }
        cnt++;
    }

    return res;
}
