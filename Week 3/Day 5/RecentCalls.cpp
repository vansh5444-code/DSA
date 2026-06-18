class RecentCounter {
public:
    queue<int> q;

    RecentCounter() {

    }

    int ping(int t) {
        if (q.empty()) {
            q.push(t);
        }
        else {
            while (!q.empty() && q.front() < t - 3000) {
                q.pop();
            }
            q.push(t);
        }

        return q.size();
    }
};
