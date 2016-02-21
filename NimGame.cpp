#include "iostream"
using namespace std;
class Solution {
public:
    bool canWinNim(int n) {
        if( (n > 0) && (n < 4 || (n + 1) % 4 == 0 || (n + 2) % 4 == 0 || (n + 3) % 4 == 0))
            return true;
        else
            return false;
    }
};
int main()
{
    while(1)
    {
        int n;
        Solution s;
        cin >> n;
        cout << s.canWinNim(n);
    }
}
