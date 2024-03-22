#include <vector>

using namespace std;

pair<long, long> indexes(vector<long long> v, long long x)
{
    pair<long, long> firstAndLast;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == x)
        {
            firstAndLast.first = i;
            break;
        }
        else
        {
            firstAndLast.first = -1;
            firstAndLast.second = -1;
        }
    }
    for (int j = v.size() - 1; j > 0; j--)
    {
        if (v[j] == x)
        {
            firstAndLast.second = j;
            break;
        }
    }
    return firstAndLast;
}