string Solution::longestCommonPrefix(vector<string> &A) {
    string s;
    sort(A.begin(),A.end());

    int i=0;
    int m=A[0].size();
    int n=A.size()-1;

    while(i<m && A[0][i]==A[n][i]){
        s.push_back(A[0][i]);
        i++;
    }
    return s;
}
