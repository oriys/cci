#include <vector>
using namespace std;
class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int row = matrix.size();
        int col = matrix[0].size();
        if (matrix.size() == 0)
            return;
        bool firstrow = false;
        bool firstcol = false;
        for (int i = 0; i < row; i++)
        {
            if (matrix[i][0] == 0)
            {
                firstcol = true;
                break;
            }
        }
        for (int j = 0; j < col; j++)
        {
            if (matrix[0][j] == 0)
            {
                firstrow = true;
                break;
            }
        }
        for (int i = 1; i < row; i++)
        {
            for (int j = 1; j < col; j++)
            {
                if (matrix[i][j] == 0)
                {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
        for (int i = 1; i < row; i++)
        {
            if (matrix[i][0] == 0)
            {
                for (int j = 1; j < col; j++)
                {
                    matrix[i][j] = 0;
                }
            }
        }
        for (int j = 1; j < col; j++)
        {
            if (matrix[0][j] == 0)
            {
                for (int i = 1; i < row; i++)
                {
                    matrix[i][j] = 0;
                }
            }
        }
        if (firstrow)
        {
            for (int j = 0; j < col; j++)
            {
                matrix[0][j] = 0;
            }
        }
        if (firstcol)
        {
            for (int i = 0; i < row; i++)
            {
                matrix[i][0] = 0;
            }
        }
    }
};
