class Solution {
public:

    vector<int> getNSR(vector<int>& height) {
        int n = height.size();
        vector<int> ans(n);
        stack<int> st;

        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && height[st.top()] >= height[i]) {
                st.pop();
            }

            ans[i] = st.empty() ? n : st.top();
            st.push(i);
        }

        return ans;
    }

    vector<int> getNSL(vector<int>& height) {
        int n = height.size();
        vector<int> ans(n);
        stack<int> st;

        for (int i = 0; i < n; i++) {
            while (!st.empty() && height[st.top()] >= height[i]) {
                st.pop();
            }

            ans[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }

        return ans;
    }

    int largestRectangleArea(vector<int>& height) {
        vector<int> NSR = getNSR(height);
        vector<int> NSL = getNSL(height);

        int n = height.size();
        int maxArea = 0;

        for (int i = 0; i < n; i++) {
            int width = NSR[i] - NSL[i] - 1;
            int area = width * height[i];

            maxArea = max(maxArea, area);
        }

        return maxArea;
    }
};
