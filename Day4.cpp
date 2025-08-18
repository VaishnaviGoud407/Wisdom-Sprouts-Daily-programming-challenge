void mergeSort(vector<int> &nums1, vector<int> &nums2){
    int m=nums1.size();
        int n=nums2.size();
        int i=0;
        int j=0;
        while(i<m && j<n){
            if(nums2[j]<nums1[i]){
                swap(nums2[j], nums1[i]);
                sort(nums2.begin(), nums2.end());
            }else{
                i++;
            }
        }
}
