class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {

        vector<int> ans;
        int i = 0, j = 0;

        // jab tak dono arrays me elements hain
        while (i < a.size() && j < b.size()) {

            if (a[i] < b[j]) {
            if (ans.empty() || ans.back() != a[i])
                ans.push_back(a[i]); // push_back ko array m dalne k lie use krte hai
                i++;
            }
            else if (a[i] > b[j]) {
            if (ans.empty() || ans.back() != b[j])
                ans.push_back(b[j]);
                j++;
            }
            else { // a[i] == b[j]
            if (ans.empty() || ans.back() != a[i])
                ans.push_back(a[i]);
                i++;
                j++;
            }
        }

        while (i < a.size()) {  // agar a me elements bache hain
            if (ans.empty() || ans.back() != a[i])
                ans.push_back(a[i]);
            i++;
        }

        while (j < b.size()) {      // agar b me elements bache hai
            if (ans.empty() || ans.back() != b[j])
                ans.push_back(b[j]);
            j++;
        }

        return ans;
    }
};
