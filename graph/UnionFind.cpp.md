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
  bundledCode: "#line 1 \"graph/UnionFind.cpp\"\nstruct UnionFind{\n    vector<int>\
    \ par;\n    int connectedComponentCnt;\n    UnionFind(int32 n){\n        par =\
    \ vector<int>(n, -1);\n        connectedComponentCnt = n;\n    }\n\n    int root(int\
    \ x){\n        if(par[x] < 0)return x;\n        return par[x] = root(par[x]);\n\
    \    }\n\n    bool unite(int x, int y){\n        x = root(x);\n        y = root(y);\n\
    \        if(x == y)return false;\n        if(-par[x] < -par[y])swap(x,y);\n  \
    \      par[x] += par[y];\n        par[y] = x;\n        --connectedComponentCnt;\n\
    \        return true;\n    }\n\n    bool same(int x, int y){\n        return root(x)\
    \ == root(y);\n    }\n\n    int size(int x){\n        return -par[root(x)];\n\
    \    }\n};\n"
  code: "struct UnionFind{\n    vector<int> par;\n    int connectedComponentCnt;\n\
    \    UnionFind(int32 n){\n        par = vector<int>(n, -1);\n        connectedComponentCnt\
    \ = n;\n    }\n\n    int root(int x){\n        if(par[x] < 0)return x;\n     \
    \   return par[x] = root(par[x]);\n    }\n\n    bool unite(int x, int y){\n  \
    \      x = root(x);\n        y = root(y);\n        if(x == y)return false;\n \
    \       if(-par[x] < -par[y])swap(x,y);\n        par[x] += par[y];\n        par[y]\
    \ = x;\n        --connectedComponentCnt;\n        return true;\n    }\n\n    bool\
    \ same(int x, int y){\n        return root(x) == root(y);\n    }\n\n    int size(int\
    \ x){\n        return -par[root(x)];\n    }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: graph/UnionFind.cpp
  requiredBy: []
  timestamp: '2022-02-05 00:01:25+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: graph/UnionFind.cpp
layout: document
redirect_from:
- /library/graph/UnionFind.cpp
- /library/graph/UnionFind.cpp.html
title: graph/UnionFind.cpp
---
