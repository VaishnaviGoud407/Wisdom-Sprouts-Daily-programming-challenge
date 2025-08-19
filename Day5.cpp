class Solution {
  
  public:
  // Function to find the leaders in the array.
    vector<int> leaders(vector<int>& arr) {
        vector<int>ans;
        int n=arr.size();
        int rightMost=arr[n-1];
        ans.push_back(rightMost);
        for(int i=n-2; i>=0; i--){
            if(arr[i]>=rightMost){
                ans.push_back(arr[i]);
                rightMost=max(rightMost, arr[i]);
            }
            
        }
         sort(ans.begin(), ans.end(), greater<int>());
          
        
        return ans;
        
    }
};
