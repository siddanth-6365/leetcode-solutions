class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> temp;
        helper(res, temp, n, k, 1);
        return res;
    }
    void helper(vector<vector<int>>& res, vector<int>& temp, int n, int k,
                int ind) {
        if (temp.size() == k) {
            res.push_back(temp);
            return;
        }
        // temp.push_back(ind);
        for (int i = ind; i <= n; i++) {
            temp.push_back(i);
            helper(res, temp, n, k, i + 1);
            temp.pop_back();
        }
    }
};

/*
        vector<vector<int>> res;
        vector<int> temp;
        for (int i = 1; i <= n; i++) {
            temp.push_back(i);
            if (temp.size() == k) {
                res.push_back(temp);
            } else {
                for (int j = i + 1; j <= n; j++) {
                    temp.push_back(j);
                    if (temp.size() == k) {
                        res.push_back(temp);
                    }
                    temp.pop_back();
                }
            }
            temp.clear();
        }
        return res;*/