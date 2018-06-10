class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        int n=nums.size();
        std::vector<int> visited(n,0);
        vector<int> temp;
        trace(visited,nums,n,0,temp,res);
        return res;
    }
    void trace(vector<int> visited,vector<int> nums,int n,int length,vector<int> temp,vector<vector<int>>& res){
    	if(length>=n){
    		res.push_back(temp);
    	}
    	else{
    		for (int i = 0; i < n; ++i)
    		{
    			if(visited[i]==0){
    				visited[i]=1;
    				temp.push_back(nums[i]);
    				trace(visited,nums,n,length+1,temp,res);
    				visited[i]=0;
    				temp.pop_back();
    			}
    			/* code */
    		}
    	}
    }
};