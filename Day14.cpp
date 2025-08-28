int countAtMostK(string s, int k) {
    int n = s.size();
    int left = 0, ans = 0;
    unordered_map<char,int> freq;

    for(int right = 0; right < n; right++) {
        freq[s[right]]++;
        
        // shrink if more than k distinct
        while(freq.size() > k) {
            freq[s[left]]--;
            if(freq[s[left]] == 0) freq.erase(s[left]);
            left++;
        }
        
        // all substrings ending at right and starting from [left..right]
        ans += (right - left + 1);
    }
    return ans;
}

int countExactlyK(string s, int k) {
    return countAtMostK(s, k) - countAtMostK(s, k - 1);
}
