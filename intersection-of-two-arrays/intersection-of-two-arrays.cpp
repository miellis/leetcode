class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> nums1_set;
        vector<int> intersect {};
        
        for (auto num1 : nums1){
            nums1_set.insert(num1);
        }
        
        for (auto num2 : nums2){
            if(nums1_set.contains(num2)){
                intersect.push_back(num2);
                nums1_set.erase(num2);
            }
        }
        
        return intersect;
    }
};