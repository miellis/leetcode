class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> nums1_set(nums1.begin(), nums1.end());
        vector<int> intersect;
        
        for (auto num2 : nums2){
            if(nums1_set.contains(num2)){
                intersect.push_back(num2);
                nums1_set.erase(num2);
            }
        }
        
        return intersect;
    }
};