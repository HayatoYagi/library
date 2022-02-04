---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: DataStructure/SegmentTree/SegmentTree.cpp
    title: "SegmentTree. 1\u70B9\u66F4\u65B0\uFF08\u66F8\u304D\u63DB\u3048\uFF09,\
      \ \u533A\u9593\u53D6\u5F97."
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_A
    links:
    - https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_A
  bundledCode: "#line 1 \"test/aoj/DSL_2_A.test.cpp\"\n#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_A\"\
    \n\n#include <bits/stdc++.h>\n#ifdef __LOCAL\n#define DBG(X) cout << #X << \"\
    \ = \" << (X) << endl;\n#define SAY(X) cout << (X) << endl;\n#else\n#define DBG(X)\n\
    #define SAY(X)\n#define NDEBUG\n#endif\n\nusing namespace std;\n\ntypedef int_fast32_t\
    \ int32;\ntypedef int_fast64_t int64;\n\nconst int32 inf = 1e9+7;\nconst int32\
    \ MOD = 1000000007;\nconst int64 llinf = 1e18;\n\n#define YES(n) cout << ((n)\
    \ ? \"YES\\n\" : \"NO\\n\"  )\n#define Yes(n) cout << ((n) ? \"Yes\\n\" : \"No\\\
    n\"  )\n#define POSSIBLE(n) cout << ((n) ? \"POSSIBLE\\n\" : \"IMPOSSIBLE\\n\"\
    \  )\n#define ANS(n) cout << (n) << \"\\n\"\n#define REP(i,n) for(int64 i=0;i<(n);++i)\n\
    #define FOR(i,a,b) for(int64 i=(a);i<(b);i++)\n#define FORR(i,a,b) for(int64 i=(a);i>=(b);i--)\n\
    #define all(obj) (obj).begin(),(obj).end()\n#define rall(obj) (obj).rbegin(),(obj).rend()\n\
    #define fi first\n#define se second\n#define pb(a) push_back(a)\ntypedef pair<int32,int32>\
    \ pii;\ntypedef pair<int64,int64> pll;\n\ntemplate<class T> inline bool chmax(T&\
    \ a, T b) {\n  if (a < b) { a = b; return true; } return false;\n}\ntemplate<class\
    \ T> inline bool chmin(T& a, T b) {\n  if (a > b) { a = b; return true; } return\
    \ false;\n}\n\n#line 2 \"DataStructure/SegmentTree/SegmentTree.cpp\"\nusing namespace\
    \ std;\n\n/**\n * @brief SegmentTree. 1\u70B9\u66F4\u65B0\uFF08\u66F8\u304D\u63DB\
    \u3048\uFF09, \u533A\u9593\u53D6\u5F97.\n * @details T\u306F\u30B3\u30F3\u30B9\
    \u30C8\u30E9\u30AF\u30BF\u5F15\u6570\u306E2\u9805\u6F14\u7B97f\u306B\u3088\u3063\
    \u3066Monoid\u3092\u6210\u3057\u3066\u3044\u308B\u3068\u3059\u308B.\n * \n * @tparam\
    \ T Monoid\n */\ntemplate<typename T>\nstruct SegmentTree{\n  typedef function<T(T,T)>\
    \ F;\n  /**\n   * @brief Construct a new Segment Tree object\n   * @details $O(n)$\n\
    \   * \n   * @param n_ \u8981\u7D20\u6570\n   * @param f 2\u9805\u6F14\u7B97\n\
    \   * @param e \u5358\u4F4D\u5143\n   */\n  SegmentTree(int n_,F f,T e):f(f),e(e){\n\
    \    init(n_);\n    build();\n  }\n  /**\n   * @brief Construct a new Segment\
    \ Tree object\n   * @details $O(n)$\n   * \n   * @param n_ \u8981\u7D20\u6570\n\
    \   * @param f 2\u9805\u6F14\u7B97\n   * @param e \u5358\u4F4D\u5143\n   * @param\
    \ v \u521D\u671F\u5024\n   */\n  SegmentTree(int n_,F f,T e,vector<T>& v):f(f),e(e){\n\
    \    init(n_);\n    build(n_,v);\n  }\n  /**\n   * @brief 1\u70B9\u66F4\u65B0\n\
    \   * @details $O(\\log n)$\n   * \n   * @param k index\n   * @param x \u65B0\u3057\
    \u3044\u5024\n   */\n  void update(int k,const T& x){\n    dat[k+=n]=x;\n    while(k>>=1){\n\
    \      dat[k] = f(dat[k<<1],dat[k<<1|1]);\n    }\n  }\n  /**\n   * @brief \u533A\
    \u9593\u306E\u5024\u3092\u53D6\u5F97\u3059\u308B\n   * @details $O(\\log n)$\n\
    \   * \n   * @param a \u5DE6\u7AEF(inclusive)\n   * @param b \u53F3\u7AEF(exclusive)\n\
    \   * @return T 2\u9805\u6F14\u7B97f\u306B\u3088\u308B[l,r)\u306E\u533A\u9593\u548C\
    \n   */\n  T query(int a,int b){\n    T l=e,r=e;\n    for(a+=n,b+=n;a<b;a>>=1,b>>=1){\n\
    \      if(a&1)l=f(l,dat[a++]);\n      if(b&1)r=f(dat[--b],r);\n    }\n    return\
    \ f(l,r);\n  }\n  T operator[](const int &k) const {\n    return dat[n+k];\n \
    \ }\nprivate:\n  int n;\n  F f;\n  T e;\n  vector<T> dat;\n  void init(int n_){\n\
    \    n=1;\n    while(n<n_)n<<=1;\n    dat.clear();\n    dat.resize(n<<1, e);\n\
    \  }\n  void build(int n_,const vector<T>& v){\n    for(int i=0;i<n_;++i)dat[n+i]=v[i];\n\
    \    build();\n  }\n  void build(){\n    for(int i=n-1;i>=1;--i){\n      dat[i]\
    \ = f(dat[i<<1],dat[i<<1|1]);\n    }\n  }\n};\n#line 45 \"test/aoj/DSL_2_A.test.cpp\"\
    \n\nint main(){\n  cin.tie(0);\n  ios::sync_with_stdio(false);\n  \n  int n,q;\n\
    \  cin >> n >> q;\n  SegmentTree<int> rmq(n,[](int a,int b){return min(a,b);},INT_MAX);\n\
    \  for(int i = 0; i < q; ++i){\n    int com,x,y;\n    cin >> com >> x >> y;\n\
    \    if(com == 0){\n      rmq.update(x,y);\n    }else{\n      cout << rmq.query(x,y+1)\
    \ << endl;\n    }\n  }\n  return 0;\n}\n"
  code: "#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_A\"\
    \n\n#include <bits/stdc++.h>\n#ifdef __LOCAL\n#define DBG(X) cout << #X << \"\
    \ = \" << (X) << endl;\n#define SAY(X) cout << (X) << endl;\n#else\n#define DBG(X)\n\
    #define SAY(X)\n#define NDEBUG\n#endif\n\nusing namespace std;\n\ntypedef int_fast32_t\
    \ int32;\ntypedef int_fast64_t int64;\n\nconst int32 inf = 1e9+7;\nconst int32\
    \ MOD = 1000000007;\nconst int64 llinf = 1e18;\n\n#define YES(n) cout << ((n)\
    \ ? \"YES\\n\" : \"NO\\n\"  )\n#define Yes(n) cout << ((n) ? \"Yes\\n\" : \"No\\\
    n\"  )\n#define POSSIBLE(n) cout << ((n) ? \"POSSIBLE\\n\" : \"IMPOSSIBLE\\n\"\
    \  )\n#define ANS(n) cout << (n) << \"\\n\"\n#define REP(i,n) for(int64 i=0;i<(n);++i)\n\
    #define FOR(i,a,b) for(int64 i=(a);i<(b);i++)\n#define FORR(i,a,b) for(int64 i=(a);i>=(b);i--)\n\
    #define all(obj) (obj).begin(),(obj).end()\n#define rall(obj) (obj).rbegin(),(obj).rend()\n\
    #define fi first\n#define se second\n#define pb(a) push_back(a)\ntypedef pair<int32,int32>\
    \ pii;\ntypedef pair<int64,int64> pll;\n\ntemplate<class T> inline bool chmax(T&\
    \ a, T b) {\n  if (a < b) { a = b; return true; } return false;\n}\ntemplate<class\
    \ T> inline bool chmin(T& a, T b) {\n  if (a > b) { a = b; return true; } return\
    \ false;\n}\n\n#include \"../../DataStructure/SegmentTree/SegmentTree.cpp\"\n\n\
    int main(){\n  cin.tie(0);\n  ios::sync_with_stdio(false);\n  \n  int n,q;\n \
    \ cin >> n >> q;\n  SegmentTree<int> rmq(n,[](int a,int b){return min(a,b);},INT_MAX);\n\
    \  for(int i = 0; i < q; ++i){\n    int com,x,y;\n    cin >> com >> x >> y;\n\
    \    if(com == 0){\n      rmq.update(x,y);\n    }else{\n      cout << rmq.query(x,y+1)\
    \ << endl;\n    }\n  }\n  return 0;\n}\n"
  dependsOn:
  - DataStructure/SegmentTree/SegmentTree.cpp
  isVerificationFile: true
  path: test/aoj/DSL_2_A.test.cpp
  requiredBy: []
  timestamp: '2022-02-05 01:31:02+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj/DSL_2_A.test.cpp
layout: document
redirect_from:
- /verify/test/aoj/DSL_2_A.test.cpp
- /verify/test/aoj/DSL_2_A.test.cpp.html
title: test/aoj/DSL_2_A.test.cpp
---
