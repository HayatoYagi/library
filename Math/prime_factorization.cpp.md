---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/NTL_1_A.test.cpp
    title: test/aoj/NTL_1_A.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"Math/prime_factorization.cpp\"\nvector<pair<int64,int32>>\
    \ prime_factorization(int64 n){\n  assert(n >= 1);\n  vector<pair<int64,int32>>\
    \ res;\n  for(int64 p = 2; p * p <= n; ++p){\n    int32 cnt = 0;\n    while(n\
    \ % p == 0){\n      ++cnt;\n      n /= p;\n    }\n    if(cnt > 0)res.emplace_back(p,cnt);\n\
    \  }\n  if(n > 1){\n    res.emplace_back(n,1);\n  }\n  return res;\n}\n"
  code: "vector<pair<int64,int32>> prime_factorization(int64 n){\n  assert(n >= 1);\n\
    \  vector<pair<int64,int32>> res;\n  for(int64 p = 2; p * p <= n; ++p){\n    int32\
    \ cnt = 0;\n    while(n % p == 0){\n      ++cnt;\n      n /= p;\n    }\n    if(cnt\
    \ > 0)res.emplace_back(p,cnt);\n  }\n  if(n > 1){\n    res.emplace_back(n,1);\n\
    \  }\n  return res;\n}"
  dependsOn: []
  isVerificationFile: false
  path: Math/prime_factorization.cpp
  requiredBy: []
  timestamp: '2022-05-27 16:58:03+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/NTL_1_A.test.cpp
documentation_of: Math/prime_factorization.cpp
layout: document
redirect_from:
- /library/Math/prime_factorization.cpp
- /library/Math/prime_factorization.cpp.html
title: Math/prime_factorization.cpp
---
