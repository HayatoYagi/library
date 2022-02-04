---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links:
    - http://na-o-s.hateblo.jp/entry/2014/07/13/031143
  bundledCode: "#line 1 \"DataStructure/FenwickTree.cpp\"\n#include <bits/stdc++.h>\n\
    using namespace std;\n\ntemplate<typename T>\nstruct FenwickTree{\n    vector<T>\
    \ fenwick;\n    int n;\n\n    FenwickTree(int n):\n        fenwick(vector<T>(n+1,\
    \ 0)), n(n) {}\n\n    T sum(int i) {\n        if (!i) return 0;\n        return\
    \ fenwick[i] + sum(i-(i&-i));\n    }\n\n    T sum(int i, int j){\n        // half-open\
    \ Terval\n        return sum(j-1) - sum(i-1);\n    }\n\n    void add(int i, T\
    \ x) {\n        if (i > n) return;\n        fenwick[i] += x;\n        add(i+(i&-i),\
    \ x);\n    }\n};\n\n//1-indexed\n//  http://na-o-s.hateblo.jp/entry/2014/07/13/031143\n"
  code: "#include <bits/stdc++.h>\nusing namespace std;\n\ntemplate<typename T>\n\
    struct FenwickTree{\n    vector<T> fenwick;\n    int n;\n\n    FenwickTree(int\
    \ n):\n        fenwick(vector<T>(n+1, 0)), n(n) {}\n\n    T sum(int i) {\n   \
    \     if (!i) return 0;\n        return fenwick[i] + sum(i-(i&-i));\n    }\n\n\
    \    T sum(int i, int j){\n        // half-open Terval\n        return sum(j-1)\
    \ - sum(i-1);\n    }\n\n    void add(int i, T x) {\n        if (i > n) return;\n\
    \        fenwick[i] += x;\n        add(i+(i&-i), x);\n    }\n};\n\n//1-indexed\n\
    //  http://na-o-s.hateblo.jp/entry/2014/07/13/031143"
  dependsOn: []
  isVerificationFile: false
  path: DataStructure/FenwickTree.cpp
  requiredBy: []
  timestamp: '2022-02-05 00:01:25+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: DataStructure/FenwickTree.cpp
layout: document
redirect_from:
- /library/DataStructure/FenwickTree.cpp
- /library/DataStructure/FenwickTree.cpp.html
title: DataStructure/FenwickTree.cpp
---
