---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: Math/ModInt.cpp
    title: Math/ModInt.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DPL_5_A
    links:
    - https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DPL_5_A
  bundledCode: "#line 1 \"test/aoj/DPL_5_A.test.cpp\"\n#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DPL_5_A\"\
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
    \ false;\n}\n\n#line 1 \"Math/ModInt.cpp\"\ntemplate<int_fast64_t mod>\nstruct\
    \ ModInt{\n  int_fast64_t x;\n  constexpr ModInt(int_fast64_t y = 0):x((y%mod+mod)%mod){}\n\
    \  constexpr ModInt& operator+=(const ModInt& a){\n    if((x += a.x) >= mod) x\
    \ -= mod;\n    return *this;\n  }\n  constexpr ModInt& operator-=(const ModInt&\
    \ a){\n    if((x -= a.x) < 0)x += mod;\n    return *this;\n  }\n  constexpr ModInt&\
    \ operator*=(const ModInt& a){\n    x = x * a.x % mod;\n    return *this;\n  }\n\
    \  constexpr ModInt& operator/=(const ModInt& a){\n    *this *= a.inv();\n   \
    \ return *this;\n  }\n  constexpr ModInt operator-() const {\n    return ModInt(-x);\n\
    \  }\n  constexpr ModInt operator+(const ModInt& a) const {\n    return ModInt(*this)\
    \ += a;\n  }\n  constexpr ModInt operator-(const ModInt& a) const {\n    return\
    \ ModInt(*this) -= a;\n  }\n  constexpr ModInt operator*(const ModInt& a) const\
    \ {\n    return ModInt(*this) *= a;\n  }\n  constexpr ModInt operator/(const ModInt&\
    \ a) const {\n    return ModInt(*this) /= a;\n  }\n  constexpr ModInt operator++(){\n\
    \    *this += ModInt(1);\n    return *this;\n  }\n  constexpr ModInt operator++(int){\n\
    \    ModInt old = *this;\n    ++*this;\n    return old;\n  }\n  constexpr ModInt\
    \ operator--(){\n    *this -= ModInt(1);\n    return *this;\n  }\n  constexpr\
    \ ModInt operator--(int){\n    ModInt old = *this;\n    --*this;\n    return old;\n\
    \  }\n  constexpr bool operator==(const ModInt& a) const {\n    return x == a.x;\n\
    \  }\n  constexpr bool operator!=(const ModInt& a) const {\n    return x != a.x;\n\
    \  }\n  constexpr ModInt pow(int_fast64_t r) const {\n    if(!r)return 1;\n  \
    \  ModInt res = pow(r>>1);\n    res *= res;\n    if(r & 1) res *= *this;\n   \
    \ return res;\n  }\n  constexpr ModInt inv() const {\n    return pow(mod-2);\n\
    \  }\n  friend istream& operator>>(istream& is, ModInt& a){\n    int_fast64_t\
    \ t;\n    is >> t;\n    a = ModInt(t);\n    return is;\n  }\n  friend ostream&\
    \ operator<<(ostream& os, const ModInt& a){\n    return os << a.x;\n  }\n};\n\
    using mint = ModInt<MOD>;\n#line 45 \"test/aoj/DPL_5_A.test.cpp\"\n\nint main(){\n\
    \  cin.tie(0);\n  ios::sync_with_stdio(false);\n  \n  int n,k;\n  cin >> n >>\
    \ k;\n  ANS(mint(k).pow(n));\n  return 0;\n}\n"
  code: "#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DPL_5_A\"\
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
    \ false;\n}\n\n#include \"../../Math/ModInt.cpp\"\n\nint main(){\n  cin.tie(0);\n\
    \  ios::sync_with_stdio(false);\n  \n  int n,k;\n  cin >> n >> k;\n  ANS(mint(k).pow(n));\n\
    \  return 0;\n}\n"
  dependsOn:
  - Math/ModInt.cpp
  isVerificationFile: true
  path: test/aoj/DPL_5_A.test.cpp
  requiredBy: []
  timestamp: '2022-03-13 17:11:32+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj/DPL_5_A.test.cpp
layout: document
redirect_from:
- /verify/test/aoj/DPL_5_A.test.cpp
- /verify/test/aoj/DPL_5_A.test.cpp.html
title: test/aoj/DPL_5_A.test.cpp
---
