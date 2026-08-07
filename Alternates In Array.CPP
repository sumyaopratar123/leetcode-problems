class Solution {
  public:
    vector<int> getAlternates(vector<int> &arr) {
        // code here
        vector <int> p;
        for(int i=0;i<arr.size();i=i+2){
                p.push_back(arr[i]);
        }
        return p;
    }
};

