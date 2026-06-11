class Solution {
public:
    string solve(string &s, int &i) {
        string result = "";
        int count = 0;

        while (i < s.size()) {
            if (isdigit(s[i])) {
                count = count * 10 + (s[i] - '0');
            }
            else if (s[i] == '[') {
                i++; 

                string part = solve(s, i);

                for (int j = 0; j < count; j++) {
                    result += part;
                }

                count = 0;
            }
            else if (s[i] == ']') {
                return result;
            }
            else {
                result += s[i];
            }

            i++;
        }

        return result;
    }

    string decodeString(string s) {
        int i = 0;
        return solve(s, i);
    }
};