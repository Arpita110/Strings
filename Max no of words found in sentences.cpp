/*
MAX NO OF WORDS FOUND IN SENTENCES
Input: sentences = ["alice and bob love leetcode", "i think so too", "this is great thanks very much"]
Output: 6
*/


int mostWordsFound(vector<string>& sentences) {
          int count = 0;
        int maxi = 1;
        for(int i=0;i<sentences.size();i++)
        {
            count=1;
            for(int j=0;j<sentences[i].length();j++)
            {
                if(sentences[i][j]==' ')
                {
                    count++;
                }
                
            }
            maxi = max(maxi , count);
        }
        return maxi;
    }
