// class Solution {
// public:
//     void BFS(int u,unordered_map<int,vector<int>> &adj, vector<int> &vis){
//         queue<int> q;
//         q.push(u);
//         vis[u] =1;
//         while(!q.empty()){
//             int node = q.front();
//             q.pop();
//             for(auto it: adj[node]){
//                 if(!vis[it]){
//                     vis[it]=1;
//                     q.push(it);
//                 }
//             }
//         }
//     }
//     int findCircleNum(vector<vector<int>>& isConnected) {
//         int n = isConnected.size();
//         unordered_map<int,vector<int>> adj;
//         for(int i = 0;i<n;i++){
//             for(int j = 0;j<n;j++){
//                 if(isConnected[i][j]==1){
//                     adj[i].push_back(j);
//                 }
//             }
//         }
//         vector<int> vis(n,0);
//         int provinces = 0;
//         for(int i=0;i<n;i++){
//             if(!vis[i]){
//                 BFS(i,adj,vis);
//                 provinces++;
//             }
//         }
        
//         return provinces;
//     }
// };
class Solution {
public:
    void BFS(int u, vector<vector<int>>& isConnected, vector<int>& vis) {
        queue<int> q;
        q.push(u);
        vis[u] = 1;

        while (!q.empty()) {
            int node = q.front();
            q.pop();

            for (int v = 0; v < isConnected.size(); v++) {
                if (isConnected[node][v] == 1 && !vis[v]) {
                    vis[v] = 1;
                    q.push(v);
                }
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();

        vector<int> vis(n, 0);
        int provinces = 0;

        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                BFS(i, isConnected, vis);
                provinces++;
            }
        }

        return provinces;
    }
};