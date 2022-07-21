class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        queue<int>q;
        vector<int>v(arr.size(),0);
        q.push(start);
        while(!q.empty())
        {
            if(q.front()-arr[q.front()]>=0)
                if(v[q.front()-arr[q.front()]]==0)
                {
                    v[q.front()-arr[q.front()]]=1;
                    
                    q.push(q.front()-arr[q.front()]);
                    if(arr[q.front()-arr[q.front()]]==0) return 1;
                }
            if(q.front()+arr[q.front()]<arr.size())
                if(v[q.front()+arr[q.front()]]==0)
                {
                    v[q.front()+arr[q.front()]]=1;
                    q.push(q.front()+arr[q.front()]);
                    if(arr[q.front()+arr[q.front()]]==0) return 1;
                }  
            q.pop();
        }
        return 0;
        
    }
};
