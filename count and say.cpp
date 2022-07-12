/*

COUNT AND SAY
Input: n = 4
Output: "1211"
Explanation:
countAndSay(1) = "1"
countAndSay(2) = say "1" = one 1 = "11"
countAndSay(3) = say "11" = two 1's = "21"
countAndSay(4) = say "21" = one 2 + one 1 = "12" + "11" = "1211"
*/

string countAndSay(int n) {
        if (n == 1)
            return "1";
        if (n == 2)
            return "11";
        string Answer = "11";
        for (int i = 3; i <= n; ++i)
        {
            Answer += ' ';
            int CNT = 1;
            string Template = "";
            for (int j = 1; j < Answer.size(); ++j)
            {
                if (Answer[j] != Answer[j - 1])
                {
                    Template += CNT + '0';
                    Template += Answer[j - 1];
                    CNT = 1;
                }
                else CNT++;
            }
            Answer = Template;
        }
        return Answer;
    }
