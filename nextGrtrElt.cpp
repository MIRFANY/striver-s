#include<bits/stdc++.h>
using namespace std;


//solution class to find the next greater elemetns 

class Solution{
    public: 
    //function to find the next greater elements
    vector<int> nextGreater(vector<int> &nums){
        stack<int> st;

        // Result array of sam size

        int n = nums.size();
        vector<int> res(n);


        //traverse  from right to left
        for(int i = n-1; i>=0; i--){
            //pop all smaller  or equal elements
            while(!st.empty() && st.top()<= nums[i]){
                st.pop();

            }

            if(st.empty()) res[i] =-1;
            else res[i] = st.top();

            //push current element 
            st.push(nums[i]);

        }
        return res;
    }
};


int main(){
    vector<int > nums = {4, 5,2,10};
    Solution sol; 
    vector<int> ans = sol.nextGreater(nums);
    for(int x: ans){
        cout<< x <<" ";

    }

    cout<< endl;
    return 0;
}