class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        vector<int> minMax = {1000000000,0};
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] < minMax[0]) minMax[0] = arr[i];
            if(arr[i] > minMax[1]) minMax[1] = arr[i];
        }
        return minMax;
    }
};
