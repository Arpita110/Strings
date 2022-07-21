/*
Find K Pairs with Smallest Sums

Input: nums1 = [1,7,11], nums2 = [2,4,6], k = 3
Output: [[1,2],[1,4],[1,6]]
Explanation: The first 3 pairs are returned from the sequence: [1,2],[1,4],[1,6],[7,2],[7,4],[11,2],[7,6],[11,4],[11,6]
*/

priority_queue<pair<int,pair<int,int>>>q;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                int sum=nums1[i]+nums2[j];
                if(q.size()<k){
                    q.push({sum,{nums1[i],nums2[j]}});
                }
                else if(q.top().first>sum){
                        q.pop();
                        q.push({sum,{nums1[i],nums2[j]}});
                    }
                else{
                    break;
                }
            }
        }
        vector<vector<int>>ans;
       
        while(!q.empty()){
            ans.push_back({q.top().second.first,q.top().second.second});
            q.pop();
        }
        return ans;
    } 
    
