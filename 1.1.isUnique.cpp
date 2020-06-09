#include <vector>
using namespace std;
class Solution
{
public:
    bool isUnique(string astr)
    {
        vector<int> vec(128, 0);
        for (int i = 0; i < astr.length(); i++)
        {
            int pos = (int)astr[i];
            if (vec[pos] == 1)
            {
                return false;
            }
            vec[pos] = 1;
        }
        return true;
    }
};