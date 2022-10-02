/*
	Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
*/

//Todo : Question name :   Two Sum
    
    
#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
	//Here we declare functions in this class.
	// Solution 1 : Brute Focee ( Worst time complexity)
	 vector<int> twoSum_BRUTE_FORCE(vector<int>& nums, int target) {
        
        vector<int> ans;
        // Time complexity : O(n*n) worst case.

        for(int i=0; i<nums.size(); i++) {

        	for(int j=1; j<nums.size(); j++) {

        		 if(nums[i] + nums[j] == target && ans.size() < 2) 
        		 {
        		 	ans.push_back(i);
        		 	ans.push_back(j);

        		 }
        	}
        }
        return	 ans;
    }
    // Solution 2 : Using Hashmap (Most optimal way)
    vector<int> twoSum_Hashmap(vector<int> &nums, int target) {
    	vector<int> ans;

    	unordered_map<int, int> unmp;

    	for(int i=0; i<nums.size(); i++)
    	{
    		if(unmp.find(target-nums[i]) != unmp.end())
    		{
    			ans.push_back(unmp[target-nums[i]]);
    			ans.push_back(i);
    		}
    		unmp[nums[i]] = i;
    	}


    	return ans;
    }
	
};
void printV(vector<int> vv) {
	for(auto it : vv)
	{
		cout<<it<<" ";
	}
}
int main()
{
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

 	int n;
 	cin>>n;

 	vector<int> nums;

 	for(int i=0; i<n; i++) {
 		int x;
 		cin>>x;
 		nums.push_back(x);
 	}

 	int target;
 	cin>>target;

// -------------------------------
 	vector<int> res;

// Todo: Solution :->1  brute; //brute is a object of class Solution


 	// res = brute.twoSum_BRUTE_FORCE(nums,target);

 	// printV(res);
 	
//Todo: -------FIRST SOLUTION ENDING---jUST uncomment and run ---------
     
// Todo: Second Soltuion -> Using hashmap

 	Solution hashAns;

 	res = hashAns.twoSum_Hashmap(nums,target);

 	printV(res);



	return 0;
}