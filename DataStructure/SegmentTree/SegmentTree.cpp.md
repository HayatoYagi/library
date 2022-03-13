---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/DSL_2_A.test.cpp
    title: test/aoj/DSL_2_A.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    document_title: Segment tree
    links: []
  bundledCode: "#line 1 \"DataStructure/SegmentTree/SegmentTree.cpp\"\n#include <bits/stdc++.h>\n\
    using namespace std;\n\n/**\n * @brief Segment tree\n * @details 1\u70B9\u66F4\
    \u65B0\uFF08\u66F8\u304D\u63DB\u3048\uFF09\u533A\u9593\u53D6\u5F97. T\u306F\u30B3\
    \u30F3\u30B9\u30C8\u30E9\u30AF\u30BF\u5F15\u6570\u306E2\u9805\u6F14\u7B97f\u306B\
    \u3088\u3063\u3066Monoid\u3092\u6210\u3057\u3066\u3044\u308B\u3068\u3059\u308B\
    .\n * \n * @tparam T Monoid\n */\ntemplate<typename T>\nstruct SegmentTree{\n\
    \  typedef function<T(T,T)> F;\n  /**\n   * @brief Construct a new Segment Tree\
    \ object\n   * @details $O(n)$\n   * \n   * @param n_ \u8981\u7D20\u6570\n   *\
    \ @param f 2\u9805\u6F14\u7B97\n   * @param e \u5358\u4F4D\u5143\n   */\n  SegmentTree(int\
    \ n_,F f,T e):f(f),e(e){\n    init(n_);\n    build();\n  }\n  /**\n   * @brief\
    \ Construct a new Segment Tree object\n   * @details $O(n)$\n   * \n   * @param\
    \ n_ \u8981\u7D20\u6570\n   * @param f 2\u9805\u6F14\u7B97\n   * @param e \u5358\
    \u4F4D\u5143\n   * @param v \u521D\u671F\u5024\n   */\n  SegmentTree(int n_,F\
    \ f,T e,vector<T>& v):f(f),e(e){\n    init(n_);\n    build(n_,v);\n  }\n  /**\n\
    \   * @brief 1\u70B9\u66F4\u65B0\n   * @details $O(\\log n)$\n   * \n   * @param\
    \ k index\n   * @param x \u65B0\u3057\u3044\u5024\n   */\n  void update(int k,const\
    \ T& x){\n    dat[k+=n]=x;\n    while(k>>=1){\n      dat[k] = f(dat[k<<1],dat[k<<1|1]);\n\
    \    }\n  }\n  /**\n   * @brief \u533A\u9593\u306E\u5024\u3092\u53D6\u5F97\u3059\
    \u308B\n   * @details $O(\\log n)$\n   * \n   * @param a \u5DE6\u7AEF(inclusive)\n\
    \   * @param b \u53F3\u7AEF(exclusive)\n   * @return T 2\u9805\u6F14\u7B97f\u306B\
    \u3088\u308B[l,r)\u306E\u533A\u9593\u548C\n   */\n  T query(int a,int b){\n  \
    \  T l=e,r=e;\n    for(a+=n,b+=n;a<b;a>>=1,b>>=1){\n      if(a&1)l=f(l,dat[a++]);\n\
    \      if(b&1)r=f(dat[--b],r);\n    }\n    return f(l,r);\n  }\n  T operator[](const\
    \ int &k) const {\n    return dat[n+k];\n  }\nprivate:\n  int n;\n  F f;\n  T\
    \ e;\n  vector<T> dat;\n  void init(int n_){\n    n=1;\n    while(n<n_)n<<=1;\n\
    \    dat.clear();\n    dat.resize(n<<1, e);\n  }\n  void build(int n_,const vector<T>&\
    \ v){\n    for(int i=0;i<n_;++i)dat[n+i]=v[i];\n    build();\n  }\n  void build(){\n\
    \    for(int i=n-1;i>=1;--i){\n      dat[i] = f(dat[i<<1],dat[i<<1|1]);\n    }\n\
    \  }\n};\n"
  code: "#include <bits/stdc++.h>\nusing namespace std;\n\n/**\n * @brief Segment\
    \ tree\n * @details 1\u70B9\u66F4\u65B0\uFF08\u66F8\u304D\u63DB\u3048\uFF09\u533A\
    \u9593\u53D6\u5F97. T\u306F\u30B3\u30F3\u30B9\u30C8\u30E9\u30AF\u30BF\u5F15\u6570\
    \u306E2\u9805\u6F14\u7B97f\u306B\u3088\u3063\u3066Monoid\u3092\u6210\u3057\u3066\
    \u3044\u308B\u3068\u3059\u308B.\n * \n * @tparam T Monoid\n */\ntemplate<typename\
    \ T>\nstruct SegmentTree{\n  typedef function<T(T,T)> F;\n  /**\n   * @brief Construct\
    \ a new Segment Tree object\n   * @details $O(n)$\n   * \n   * @param n_ \u8981\
    \u7D20\u6570\n   * @param f 2\u9805\u6F14\u7B97\n   * @param e \u5358\u4F4D\u5143\
    \n   */\n  SegmentTree(int n_,F f,T e):f(f),e(e){\n    init(n_);\n    build();\n\
    \  }\n  /**\n   * @brief Construct a new Segment Tree object\n   * @details $O(n)$\n\
    \   * \n   * @param n_ \u8981\u7D20\u6570\n   * @param f 2\u9805\u6F14\u7B97\n\
    \   * @param e \u5358\u4F4D\u5143\n   * @param v \u521D\u671F\u5024\n   */\n \
    \ SegmentTree(int n_,F f,T e,vector<T>& v):f(f),e(e){\n    init(n_);\n    build(n_,v);\n\
    \  }\n  /**\n   * @brief 1\u70B9\u66F4\u65B0\n   * @details $O(\\log n)$\n   *\
    \ \n   * @param k index\n   * @param x \u65B0\u3057\u3044\u5024\n   */\n  void\
    \ update(int k,const T& x){\n    dat[k+=n]=x;\n    while(k>>=1){\n      dat[k]\
    \ = f(dat[k<<1],dat[k<<1|1]);\n    }\n  }\n  /**\n   * @brief \u533A\u9593\u306E\
    \u5024\u3092\u53D6\u5F97\u3059\u308B\n   * @details $O(\\log n)$\n   * \n   *\
    \ @param a \u5DE6\u7AEF(inclusive)\n   * @param b \u53F3\u7AEF(exclusive)\n  \
    \ * @return T 2\u9805\u6F14\u7B97f\u306B\u3088\u308B[l,r)\u306E\u533A\u9593\u548C\
    \n   */\n  T query(int a,int b){\n    T l=e,r=e;\n    for(a+=n,b+=n;a<b;a>>=1,b>>=1){\n\
    \      if(a&1)l=f(l,dat[a++]);\n      if(b&1)r=f(dat[--b],r);\n    }\n    return\
    \ f(l,r);\n  }\n  T operator[](const int &k) const {\n    return dat[n+k];\n \
    \ }\nprivate:\n  int n;\n  F f;\n  T e;\n  vector<T> dat;\n  void init(int n_){\n\
    \    n=1;\n    while(n<n_)n<<=1;\n    dat.clear();\n    dat.resize(n<<1, e);\n\
    \  }\n  void build(int n_,const vector<T>& v){\n    for(int i=0;i<n_;++i)dat[n+i]=v[i];\n\
    \    build();\n  }\n  void build(){\n    for(int i=n-1;i>=1;--i){\n      dat[i]\
    \ = f(dat[i<<1],dat[i<<1|1]);\n    }\n  }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: DataStructure/SegmentTree/SegmentTree.cpp
  requiredBy: []
  timestamp: '2022-03-13 15:01:13+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/DSL_2_A.test.cpp
documentation_of: DataStructure/SegmentTree/SegmentTree.cpp
layout: document
redirect_from:
- /library/DataStructure/SegmentTree/SegmentTree.cpp
- /library/DataStructure/SegmentTree/SegmentTree.cpp.html
title: Segment tree
---
