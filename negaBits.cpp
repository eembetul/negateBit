//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int negaBit(int F , int S) {
    bitset<32> f(F);
    bitset<32> s(S);

    for (int i = 0; i < 32; i++) {
        if (f[i]) {
            s.flip(i);
        }
    }

    return (int)s.to_ulong();
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int F,S;

        cin>>F>>S;

        Solution ob;
        cout << ob.negaBit(F,S) << endl;
    }
    return 0;
}
// } Driver Code Ends
