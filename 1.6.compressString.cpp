#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    string compressString(string S)
    {
        if ((int)S.length() == 0)
        {
            return S;
        }
        string ans = "";
        int cnt = 1;
        char ch = S[0];
        for (int i = 1; i < (int)S.length(); ++i)
        {
            if (ch == S[i])
            {
                cnt++;
            }
            else
            {
                ans += ch + to_string(cnt);
                ch = S[i];
                cnt = 1;
            }
        }
        ans += ch + to_string(cnt);
        return ans.length() >= S.length() ? S : ans;
    }
};