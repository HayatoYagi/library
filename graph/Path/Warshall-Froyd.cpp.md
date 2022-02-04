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
  bundledCode: "#line 1 \"graph/Path/Warshall-Froyd.cpp\"\n// vector<vector<int32>>\
    \ d : adjacent matrix\n\nvector<vector<int32>> next(n, vector<int32>(n));\nREP(i,n)REP(j,n)next[i][j]\
    \ = j;\nREP(k,n)REP(i,n)REP(j,n){\n    if(d[i][j] > d[i][k] + d[k][j]){\n    \
    \    d[i][j] = d[i][k] + d[k][j];\n        next[i][j] = next[i][k];\n    }\n}\n\
    \n//\u7D4C\u8DEF\u5FA9\u5143\nfor(int cur = start; cur != goal; cur = next[cur][goal]){\n\
    \    cout << cur << \" \";\n}\ncout << goal << endl;\n"
  code: "// vector<vector<int32>> d : adjacent matrix\n\nvector<vector<int32>> next(n,\
    \ vector<int32>(n));\nREP(i,n)REP(j,n)next[i][j] = j;\nREP(k,n)REP(i,n)REP(j,n){\n\
    \    if(d[i][j] > d[i][k] + d[k][j]){\n        d[i][j] = d[i][k] + d[k][j];\n\
    \        next[i][j] = next[i][k];\n    }\n}\n\n//\u7D4C\u8DEF\u5FA9\u5143\nfor(int\
    \ cur = start; cur != goal; cur = next[cur][goal]){\n    cout << cur << \" \"\
    ;\n}\ncout << goal << endl;"
  dependsOn: []
  isVerificationFile: false
  path: graph/Path/Warshall-Froyd.cpp
  requiredBy: []
  timestamp: '2022-02-05 00:01:25+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: graph/Path/Warshall-Froyd.cpp
layout: document
redirect_from:
- /library/graph/Path/Warshall-Froyd.cpp
- /library/graph/Path/Warshall-Froyd.cpp.html
title: graph/Path/Warshall-Froyd.cpp
---
