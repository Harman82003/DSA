class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int i,j,k;
        vector<vector<int>> result;
        set<vector<int>> uniqueTriplets;  //a set will only accept unique arrays

        

        for (i=0;i<nums.size()-2;i++)
        {
            for (j=i+1;j<nums.size()-1;j++)
            {
               for(k=j+1;k<nums.size();k++)
               {
                int sum=nums[i]+nums[j]+nums[k];
                if (((sum==0)) || (nums[i]==0 && nums[j]==0 && nums[k]==0))
                {
                    vector<int> triplet = {nums[i], nums[j], nums[k]};
                    sort(triplet.begin(), triplet.end()); // Sort the triplet .begin() and .end() are iterators  and sort is a function
                    uniqueTriplets.insert(triplet);
                    
                }
                else { 
                    continue;
                     }
               } 
            
            }
        }  result.assign(uniqueTriplets.begin(), uniqueTriplets.end());
           return result;

    } 
};
