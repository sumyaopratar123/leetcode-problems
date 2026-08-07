class Solution {
  public:
    int findElementAtIndex(int key, vector<int> &arr) {
        // code here
        int n = arr.size();
        for(int i=0;i<n;i++)
        {
            if(i==key)
            {
                return arr[i];
            }
        }
    }
};
