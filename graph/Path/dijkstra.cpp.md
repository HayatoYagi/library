---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"graph/Path/dijkstra.cpp\"\n// n = |V|\n// s = startVertex\n\
    // adj : adjacent list, pii(to,cost)\nvector<int64> dijkstra(int32 n, int32 s,\
    \ vector<vector<pii>> &adj){\n    vector<int64> d(n, LLINF);\n    d[s] = 0;\n\
    \    priority_queue<pii, vector<pii>, greater<pii>> que;\n    que.push(pii(0,s));\n\
    \    while(!que.empty()){\n        pii p = que.top();que.pop();\n        int v\
    \ = p.second;\n        if(d[v] < p.first)continue;\n        for(int i = 0; i <\
    \ (signed)adj[v].size(); i++){\n            int32 to, cost;\n            tie(to,\
    \ cost) = adj[v][i];\n            if(d[to] > d[v] + cost){\n                d[to]\
    \ = d[v] + cost;\n                que.push(pii(d[to], to));\n            }\n \
    \       }\n    }\n    return d;\n}\n"
  code: "// n = |V|\n// s = startVertex\n// adj : adjacent list, pii(to,cost)\nvector<int64>\
    \ dijkstra(int32 n, int32 s, vector<vector<pii>> &adj){\n    vector<int64> d(n,\
    \ LLINF);\n    d[s] = 0;\n    priority_queue<pii, vector<pii>, greater<pii>> que;\n\
    \    que.push(pii(0,s));\n    while(!que.empty()){\n        pii p = que.top();que.pop();\n\
    \        int v = p.second;\n        if(d[v] < p.first)continue;\n        for(int\
    \ i = 0; i < (signed)adj[v].size(); i++){\n            int32 to, cost;\n     \
    \       tie(to, cost) = adj[v][i];\n            if(d[to] > d[v] + cost){\n   \
    \             d[to] = d[v] + cost;\n                que.push(pii(d[to], to));\n\
    \            }\n        }\n    }\n    return d;\n}"
  dependsOn: []
  isVerificationFile: false
  path: graph/Path/dijkstra.cpp
  requiredBy: []
  timestamp: '2022-02-05 00:01:25+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: graph/Path/dijkstra.cpp
layout: document
redirect_from:
- /library/graph/Path/dijkstra.cpp
- /library/graph/Path/dijkstra.cpp.html
title: graph/Path/dijkstra.cpp
---
