void rec(vector<int> &candidates, int target,vector<std::vector<int> > &res, vector<int> &combination, int begin) {
        if (!target) {
            res.push_back(combination);
            return;
        }
        for (int i = begin; i != candidates.size() && target >= candidates[i]; ++i) {
            combination.push_back(candidates[i]);
            rec(candidates, target - candidates[i], res, combination, i);
            combination.pop_back();
        }
    }  
vector<vector<int> > Solution::combinationSum(vector<int>& candidates, int target) {
    
     std::sort(candidates.begin(), candidates.end());
        std::vector<std::vector<int> > res;
        std::vector<int> combination;
        rec(candidates, target, res, combination, 0);
        return res;
    
}
