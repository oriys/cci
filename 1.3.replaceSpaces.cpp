#include <string>

class Solution
{
public:
    string replaceSpaces(string S, int length)
    {
        string ans;
        int i = 0;
        for (int i = 0; i < length; i++)
        {
            if (S[i] == ' ')
                ans += "%20";
            else
                ans += S[i];
        }
        return ans;
    }
};
