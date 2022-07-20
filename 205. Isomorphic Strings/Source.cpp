#include <iostream>

using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {

        // one to one mapping
        int f[256];
        int g[256];
        int n = s.length();

        //fill array with zeros
        for (int i = 0; i < 256; i++) {
            f[i] = 0;
            g[i] = 0;
        }

        for (int i = 0; i < n; i++) {
            if (f[s[i]] == 0) {
                f[s[i]] = t[i];
            }
            if (g[t[i]] == 0) {
                g[t[i]] = s[i];
            }
            if (f[s[i]] != t[i]) {
                return false;
            }
            if (g[t[i]] != s[i]) {
                return false;
            }
        }

        return true;
    }
};

int main() {
    Solution t1;

    t1.isIsomorphic("egg", "add");
}