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
    - https://kimiyuki.net/blog/2017/07/16/enumerate-sets-with-bit-manipulation/
  bundledCode: "#line 1 \"Math/enumerate sets.cpp\"\n//N = {0, 1, 2, ... , N-1}\n\n\
    \n//  S : subset of N\n//      2^#N\nfor(int s = 0; s < (1 << n); ++s){\n  //\
    \ cout << bitset<10>(s) << endl;\n}\n\n//  S : subset of T\n//      2^#T\nfor(int\
    \ s = t; ; s = (s - 1) & t){\n  // cout << bitset<10>(s) << endl;\n  if(s == 0)break;\n\
    }\n\n//  S : subset of N & #S = k\n//      nCk\nfor(int s = (1 << k) - 1; s <\
    \ (1 << n); ){\n  // cout << bitset<10>(s) << endl;\n  int t = s | (s - 1);\n\
    \  s = (t + 1) | (((~t & - ~t) - 1) >> (__builtin_ctz(s) + 1));\n}\n\n\n//  https://kimiyuki.net/blog/2017/07/16/enumerate-sets-with-bit-manipulation/\n"
  code: "//N = {0, 1, 2, ... , N-1}\n\n\n//  S : subset of N\n//      2^#N\nfor(int\
    \ s = 0; s < (1 << n); ++s){\n  // cout << bitset<10>(s) << endl;\n}\n\n//  S\
    \ : subset of T\n//      2^#T\nfor(int s = t; ; s = (s - 1) & t){\n  // cout <<\
    \ bitset<10>(s) << endl;\n  if(s == 0)break;\n}\n\n//  S : subset of N & #S =\
    \ k\n//      nCk\nfor(int s = (1 << k) - 1; s < (1 << n); ){\n  // cout << bitset<10>(s)\
    \ << endl;\n  int t = s | (s - 1);\n  s = (t + 1) | (((~t & - ~t) - 1) >> (__builtin_ctz(s)\
    \ + 1));\n}\n\n\n//  https://kimiyuki.net/blog/2017/07/16/enumerate-sets-with-bit-manipulation/"
  dependsOn: []
  isVerificationFile: false
  path: Math/enumerate sets.cpp
  requiredBy: []
  timestamp: '2022-02-05 00:01:25+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: Math/enumerate sets.cpp
layout: document
redirect_from:
- /library/Math/enumerate sets.cpp
- /library/Math/enumerate sets.cpp.html
title: Math/enumerate sets.cpp
---
