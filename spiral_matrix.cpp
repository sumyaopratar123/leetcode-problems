class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& arr) {
        vector<int> ans;

        int minr = 0;
        int maxr = arr.size() - 1;
        int minc = 0;
        int maxc = arr[0].size() - 1;

        while (minr <= maxr && minc <= maxc) {

            // Left to Right
            for (int j = minc; j <= maxc; j++) {
                ans.push_back(arr[minr][j]);
            }
            minr++;

            if (minr > maxr || minc > maxc)
                break;

            // Top to Bottom
            for (int i = minr; i <= maxr; i++) {
                ans.push_back(arr[i][maxc]);
            }
            maxc--;

            if (minr > maxr || minc > maxc)
                break;

            // Right to Left
            for (int j = maxc; j >= minc; j--) {
                ans.push_back(arr[maxr][j]);
            }
            maxr--;

            if (minr > maxr || minc > maxc)
                break;

            // Bottom to Top
            for (int i = maxr; i >= minr; i--) {
                ans.push_back(arr[i][minc]);
            }
            minc++;
        }

        return ans;
    }
};
