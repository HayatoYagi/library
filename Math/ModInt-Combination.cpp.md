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
  bundledCode: "#line 1 \"Math/ModInt-Combination.cpp\"\nvector<mint> fact(n+1,1);\n\
    REP(i,n)fact[i+1] = fact[i] * (i+1);\nvector<mint> ifact(n+1);\nifact[n] = fact[n].inv();\n\
    FORR(i,n,1)ifact[i-1] = ifact[i] * i;\nauto comb = [&](int32 n, int32 r){\n  if(n\
    \ < r)return mint(0);\n  return fact[n] * ifact[n-r] * ifact[r];\n};\n"
  code: "vector<mint> fact(n+1,1);\nREP(i,n)fact[i+1] = fact[i] * (i+1);\nvector<mint>\
    \ ifact(n+1);\nifact[n] = fact[n].inv();\nFORR(i,n,1)ifact[i-1] = ifact[i] * i;\n\
    auto comb = [&](int32 n, int32 r){\n  if(n < r)return mint(0);\n  return fact[n]\
    \ * ifact[n-r] * ifact[r];\n};"
  dependsOn: []
  isVerificationFile: false
  path: Math/ModInt-Combination.cpp
  requiredBy: []
  timestamp: '2022-02-05 00:01:25+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: Math/ModInt-Combination.cpp
layout: document
redirect_from:
- /library/Math/ModInt-Combination.cpp
- /library/Math/ModInt-Combination.cpp.html
title: Math/ModInt-Combination.cpp
---
