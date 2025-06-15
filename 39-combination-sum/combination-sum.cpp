class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> combination;
        findCombinations(candidates, target, 0, combination, result);
        return result;
    }

private:
    void findCombinations(vector<int>& candidates, int target, int index,
                          vector<int>& combination,
                          vector<vector<int>>& result) {
        if (target == 0) {
            result.push_back(combination);
            return;
        }
        if (target < 0 || index >= candidates.size()) {
            return;
        }
        combination.push_back(candidates[index]);
        findCombinations(candidates, target - candidates[index], index,
                         combination, result);
        combination.pop_back();
        findCombinations(candidates, target, index + 1, combination, result);
    }
};