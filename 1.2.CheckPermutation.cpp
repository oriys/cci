#include <vector>
#include <string>
using namespace std;
class Solution
{
public:
    bool CheckPermutation(string s1, string s2)
    {
        if (s1.length() != s2.length())
        {
            return false;
        }
        vector<int> vec(128, 0);
        for (int i = 0; i < s1.length(); i++)
        {
            int pos = (int)s1[i];
            vec[(int)s1[i]]++;
            vec[(int)s2[i]]--;
        }
        for (int i = 0; i < 128; i++)
        {
            if (vec[i] != 0)
            {
                return false;
            }
        }
        return true;
    }
};