class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_set<int> hashset;
        for (auto num : nums){
            if(!hashset.contains(num)){
                hashset.insert(num);
            }
            else {
                hashset.erase(num);
            }
        }
        return *hashset.begin();
    }
};