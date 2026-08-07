class Solution {
public:
    void rotate(vector<vector<int>>& arr) {
        int n = arr.size();

        // Transpose the matrix
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                swap(arr[i][j], arr[j][i]);
            }
        }

        // Reverse every row
        for (auto &row : arr) {
            reverse(row.begin(), row.end());
        }
    }
};
