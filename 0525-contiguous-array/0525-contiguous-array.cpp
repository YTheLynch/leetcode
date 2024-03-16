class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int maxlen = 0; 
        int count = 0; 
        unordered_map<int, int> mp; 
        mp[0] = -1; 

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) count--;
            else count++;

            if (mp.find(count) != mp.end()) {
                maxlen = max(maxlen, i - mp[count]);
            } else {
                mp[count] = i;
            }
        }


        return maxlen;
        
    }
};