---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/DSL_1_A.test.cpp
    title: test/aoj/DSL_1_A.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    document_title: Union Find Tree (Disjoint Set Union)
    links: []
  bundledCode: "#line 1 \"graph/UnionFind.cpp\"\n#include <bits/stdc++.h>\nusing namespace\
    \ std;\n\n/**\n * @brief Union Find Tree (Disjoint Set Union)\n */\nstruct UnionFind{\n\
    \  /**\n   * @brief n\u9802\u70B90\u8FBA\u306E\u30B0\u30E9\u30D5\u3067\u521D\u671F\
    \u5316\u3059\u308B.\n   * @details O(n)\n   * \n   * @param n \u9802\u70B9\u6570\
    \n   */\n  UnionFind(int n){\n    par = vector<int>(n, -1);\n    connectedComponentCnt\
    \ = n;\n  }\n\n  /**\n   * @brief \u8FBA(x,y)\u3092\u8FFD\u52A0\u3059\u308B.\n\
    \   * @details O(\\alpha(n)) amortized\n   * \n   * @param x \n   * @param y \n\
    \   * @return true \u9802\u70B9x, y\u306F\u3082\u3068\u3082\u3068\u5225\u306E\u9023\
    \u7D50\u6210\u5206\u306B\u3042\u308A, \u9023\u7D50\u6210\u5206\u306E\u30DE\u30FC\
    \u30B8\u304C\u884C\u308F\u308C\u305F.\n   * @return false \u9802\u70B9x, y\u306F\
    \u3082\u3068\u3082\u3068\u540C\u3058\u9023\u7D50\u6210\u5206\u306B\u3042\u308A\
    , \u9023\u7D50\u6210\u5206\u306E\u30DE\u30FC\u30B8\u306F\u884C\u308F\u308C\u306A\
    \u304B\u3063\u305F.\n   */\n  bool unite(int x, int y){\n    x = root(x);\n  \
    \  y = root(y);\n    if(x == y)return false;\n    if(-par[x] < -par[y])swap(x,y);\n\
    \    par[x] += par[y];\n    par[y] = x;\n    --connectedComponentCnt;\n    return\
    \ true;\n  }\n\n  /**\n   * @brief \u9802\u70B9x, y\u304C\u540C\u3058\u9023\u7D50\
    \u6210\u5206\u306B\u5C5E\u3057\u3066\u3044\u308B\u304B\u3069\u3046\u304B\u8ABF\
    \u3079\u308B.\n   * @details O(\\alpha(n)) amortized\n   * \n   * @param x \n\
    \   * @param y \n   * @return \n   */\n  bool same(int x, int y){\n    return\
    \ root(x) == root(y);\n  }\n\n  /**\n   * @brief \u9802\u70B9x\u3092\u542B\u3080\
    \u9023\u7D50\u6210\u5206\u306E\u9802\u70B9\u6570\u3092\u8FD4\u3059.\n   * @details\
    \ O(\\alpha(n)) amortizedW\n   * \n   * @param x \n   * @return int \n   */\n\
    \  int size(int x){\n    return -par[root(x)];\n  }\n\nprivate:\n  vector<int>\
    \ par;\n  int connectedComponentCnt;\n  int root(int x){\n    if(par[x] < 0)return\
    \ x;\n    return par[x] = root(par[x]);\n  }\n};\n"
  code: "#include <bits/stdc++.h>\nusing namespace std;\n\n/**\n * @brief Union Find\
    \ Tree (Disjoint Set Union)\n */\nstruct UnionFind{\n  /**\n   * @brief n\u9802\
    \u70B90\u8FBA\u306E\u30B0\u30E9\u30D5\u3067\u521D\u671F\u5316\u3059\u308B.\n \
    \  * @details O(n)\n   * \n   * @param n \u9802\u70B9\u6570\n   */\n  UnionFind(int\
    \ n){\n    par = vector<int>(n, -1);\n    connectedComponentCnt = n;\n  }\n\n\
    \  /**\n   * @brief \u8FBA(x,y)\u3092\u8FFD\u52A0\u3059\u308B.\n   * @details\
    \ O(\\alpha(n)) amortized\n   * \n   * @param x \n   * @param y \n   * @return\
    \ true \u9802\u70B9x, y\u306F\u3082\u3068\u3082\u3068\u5225\u306E\u9023\u7D50\u6210\
    \u5206\u306B\u3042\u308A, \u9023\u7D50\u6210\u5206\u306E\u30DE\u30FC\u30B8\u304C\
    \u884C\u308F\u308C\u305F.\n   * @return false \u9802\u70B9x, y\u306F\u3082\u3068\
    \u3082\u3068\u540C\u3058\u9023\u7D50\u6210\u5206\u306B\u3042\u308A, \u9023\u7D50\
    \u6210\u5206\u306E\u30DE\u30FC\u30B8\u306F\u884C\u308F\u308C\u306A\u304B\u3063\
    \u305F.\n   */\n  bool unite(int x, int y){\n    x = root(x);\n    y = root(y);\n\
    \    if(x == y)return false;\n    if(-par[x] < -par[y])swap(x,y);\n    par[x]\
    \ += par[y];\n    par[y] = x;\n    --connectedComponentCnt;\n    return true;\n\
    \  }\n\n  /**\n   * @brief \u9802\u70B9x, y\u304C\u540C\u3058\u9023\u7D50\u6210\
    \u5206\u306B\u5C5E\u3057\u3066\u3044\u308B\u304B\u3069\u3046\u304B\u8ABF\u3079\
    \u308B.\n   * @details O(\\alpha(n)) amortized\n   * \n   * @param x \n   * @param\
    \ y \n   * @return \n   */\n  bool same(int x, int y){\n    return root(x) ==\
    \ root(y);\n  }\n\n  /**\n   * @brief \u9802\u70B9x\u3092\u542B\u3080\u9023\u7D50\
    \u6210\u5206\u306E\u9802\u70B9\u6570\u3092\u8FD4\u3059.\n   * @details O(\\alpha(n))\
    \ amortizedW\n   * \n   * @param x \n   * @return int \n   */\n  int size(int\
    \ x){\n    return -par[root(x)];\n  }\n\nprivate:\n  vector<int> par;\n  int connectedComponentCnt;\n\
    \  int root(int x){\n    if(par[x] < 0)return x;\n    return par[x] = root(par[x]);\n\
    \  }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: graph/UnionFind.cpp
  requiredBy: []
  timestamp: '2022-03-13 15:34:49+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/DSL_1_A.test.cpp
documentation_of: graph/UnionFind.cpp
layout: document
redirect_from:
- /library/graph/UnionFind.cpp
- /library/graph/UnionFind.cpp.html
title: Union Find Tree (Disjoint Set Union)
---
