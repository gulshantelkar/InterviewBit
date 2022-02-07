void subsetsUtil(vector<int>& A,set<vector<int> >& res,
                 vector<int>& subset, int index)
{
    res.insert(subset);
    for (int i = index; i < A.size(); i++) {

        // include the A[i] in subset.
        subset.push_back(A[i]);

        // move onto the next element.
        subsetsUtil(A, res, subset, i + 1);

        // exclude the A[i] from subset and triggers
        // backtracking.
        subset.pop_back();
    }

    return;
}
vector<vector<int> > Solution::subsetsWithDup(vector<int> &A) {
    vector<int> subset;
    set<vector<int> > res;
    sort(A.begin(),A.end());

    vector<vector<int>> ans;

    // keeps track of current element in vector A;
    int index = 0;
    subsetsUtil(A, res, subset, index);
    for(auto v: res){
        ans.push_back(v);
    }

    return ans;
}
