class Solution:
    def minEdgesReq(self, n, edges):
        # code here
        
        if len(edges) < n - 1:
            return -1
        
        graph = [[] for _ in range(n)]
        
        for u, v in edges:
            graph[u].append(v)
            graph[v].append(u)
        
        visited = [False] * n
        components = 0
        
        def dfs(node):
            visited[node] = True
            
            for neighbour in graph[node]:
                if not visited[neighbour]:
                    dfs(neighbour)
        
        for i in range(n):
            if not visited[i]:
                components += 1
                dfs(i)
        
        return components - 1