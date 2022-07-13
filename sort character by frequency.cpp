/*
Sort character by frequency 
Input: s = "cccaaa"
Output: "aaaccc"
Explanation: Both 'c' and 'a' appear three times, so both "cccaaa" and "aaaccc" are valid answers.
Note that "cacaca" is incorrect, as the same characters must be together.
*/

string frequencySort(string s) {
      unordered_map<char, int> hm;
        for(int i=0; i<s.size(); i++)
            hm[s[i]]++;
        
        priority_queue<pair<int, char>> max_heap;
        for(auto it=hm.begin(); it!=hm.end(); it++)
        {
            max_heap.push({(*it).second, (*it).first});
            
        }
        
        string ans;
        while(!max_heap.empty()){
            
            int freq=max_heap.top().first;
            while(freq>0){
                ans+=max_heap.top().second;
                freq--;
            }
            
            max_heap.pop();
        }
        
        return ans;
    }
