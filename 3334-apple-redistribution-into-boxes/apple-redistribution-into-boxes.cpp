class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int n = capacity.size();
        sort(capacity.begin(), capacity.end());
        int s = 0;
        for (int x : apple) s += x;
        for (int i = 0; i < n; i++) {
            s -= capacity[n - 1 - i];
            if (s <= 0) {
                return i + 1;
            }
        }
        return 0;
    }
};
