#include <vector>
#include <string>
using namespace std;
class Solution
{
public:
    bool canPermutePalindrome(string s)
    {
        vector<int> vec(128, 0);
        for (int i = 0; i < s.length(); i++)
        {
            int pos = (int)s[i];
            if (vec[(int)s[i]] == 0)
            {
                vec[(int)s[i]]++;
            }
            else if (vec[(int)s[i]] == 1)
            {
                vec[(int)s[i]]--;
            }
        }
        int sum = 0 ;
        for (int i = 0; i < 128; i++)
        {
            sum += vec[i];
        }
        return !(sum > 1);
    }
};