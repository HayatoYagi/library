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
  bundledCode: "#line 1 \"Math/prime_factor.cpp\"\nvector<pair<int64,int32>> prime_factor(int64\
    \ n){\n    vector<pair<int64,int32>> res;\n    for(int64 p = 2; p * p <= n; ++p){\n\
    \        int32 cnt = 0;\n        while(n % p == 0){\n            ++cnt;\n    \
    \        n /= p;\n        }\n        if(cnt > 0)res.emplace_back(p,cnt);\n   \
    \ }\n    if(n > 1){\n        res.emplace_back(n,1);\n    }\n    return res;\n\
    }\n"
  code: "vector<pair<int64,int32>> prime_factor(int64 n){\n    vector<pair<int64,int32>>\
    \ res;\n    for(int64 p = 2; p * p <= n; ++p){\n        int32 cnt = 0;\n     \
    \   while(n % p == 0){\n            ++cnt;\n            n /= p;\n        }\n \
    \       if(cnt > 0)res.emplace_back(p,cnt);\n    }\n    if(n > 1){\n        res.emplace_back(n,1);\n\
    \    }\n    return res;\n}"
  dependsOn: []
  isVerificationFile: false
  path: Math/prime_factor.cpp
  requiredBy: []
  timestamp: '2022-02-05 00:01:25+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: Math/prime_factor.cpp
layout: document
redirect_from:
- /library/Math/prime_factor.cpp
- /library/Math/prime_factor.cpp.html
title: Math/prime_factor.cpp
---
