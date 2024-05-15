class Solution {
public:
    void solve(queue<int> &q, int k){
        if(q.size() == 1)
            return;

        int count = 0;
        while(++count != k){
            q.push(q.front());
            q.pop();
        }
        q.pop();

        solve(q, k);
    }

    int findTheWinner(int n, int k) {
        queue<int> q;
        for(int i = 1; i<=n; i++){
            q.push(i);
        }
        solve(q, k);
        return q.front();
    }
};