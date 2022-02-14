vector<vector<int> > Solution::solve(int A) {
    vector<vector<int>> v(A);
    for(int i=0;i<A;i++){
        for(int j=0;j<=i;j++){
            v[i].push_back(1);

        }
    }
    for(int i=2;i<A;i++){
        for(int j=1;j<i;j++){
            v[i][j]=v[i-1][j-1]+v[i-1][j];
        }
    }
    return v;
}
