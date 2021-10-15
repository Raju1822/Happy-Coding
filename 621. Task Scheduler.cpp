class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        map<char, int> mp;
        for(auto x : tasks)
            mp[x]++;
        priority_queue<pair<int, char>> pq;
        for(auto x : mp)
        {
            pq.push({x.second, x.first});
        }
        int cnt =tasks.size(), m  =tasks.size();
        while(!pq.empty())
        {
            priority_queue<pair<int, char>> tmp;
            for(int i=0;i<=n;i++)
            {
                if(!pq.empty())
                {
                pair<int, char> p = pq.top();
                pq.pop();
                   // cout<<p.second<<" ";
                    if(p.first>1)
                    tmp.push({p.first-1, p.second});
                    m--;
                }else if(m){
                    //cout<<n-i+1<<" ";
                    cnt += n-i+1;
                    break;
                }
            }
            
            while(!tmp.empty())
            {
                pair<int, char> p = tmp.top();
                tmp.pop();
                    pq.push({p.first, p.second});
            }
        }
        cout<<endl;
        return cnt;
    }
};
