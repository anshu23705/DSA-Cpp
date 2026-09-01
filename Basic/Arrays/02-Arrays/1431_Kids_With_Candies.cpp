class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        int maxCandies = 0;

        // Find the maximum number of candies
        for(int i = 0; i < candies.size(); i++) {
            if(candies[i] > maxCandies) {
                maxCandies = candies[i];
            }
        }

        vector<bool> ans;

        // Check each kid
        for(int i = 0; i < candies.size(); i++) {
            if(candies[i] + extraCandies >= maxCandies) {
                ans.push_back(true);
            }
            else {
                ans.push_back(false);
            }
        }

        return ans;
    }
};
