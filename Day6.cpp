#include <iostream>
#include<vector>
#include <unordered_map>


using namespace std;


vector<pair<int,int>> findZeroSumSubarrays(vector<int>& arr) {
    unordered_map<int, vector<int>> mp;  
    vector<pair<int,int>> result;
    int prefixSum = 0;

    for (int i = 0; i < arr.size(); i++) {
        prefixSum += arr[i];

       
        if (prefixSum == 0) {
            result.push_back({0, i});
        }

        
        if (mp.find(prefixSum) != mp.end()) {
            for (int startIdx : mp[prefixSum]) {
                result.push_back({startIdx + 1, i});
            }
        }

        
        mp[prefixSum].push_back(i);
    }

    return result;
}
