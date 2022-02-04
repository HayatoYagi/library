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
  bundledCode: "#line 1 \"Geometry/convex_hull.cpp\"\n//vectot2.cpp\n\nbool cmp_x(const\
    \ P& p, const P& q){\n    if(p.x != q.x)return p.x < q.x;\n    return p.y < q.y;\n\
    }\n\nvector<P> convex_hull(P* ps, int n){\n    sort(ps, ps+n, cmp_x);\n    int\
    \ k = 0;\n    vector<P> qs(n * 2);\n    REP(i,n){\n        while(k > 1 && (qs[k-1]\
    \ - qs[k-2]).det(ps[i] - qs[k-1]) <= 0)k--;\n        qs[k++] = ps[i];\n    }\n\
    \    for(int i = n-2, t = k; i >= 0; i--){\n        while(k > t && (qs[k-1] -\
    \ qs[k-2]).det(ps[i] - qs[k-1]) <= 0)k--;\n        qs[k++] = ps[i];\n    }\n \
    \   qs.resize(k-1);\n    return qs;\n}\n\n\n// ps = convex_hull(&ps[0] , ps.size());\n"
  code: "//vectot2.cpp\n\nbool cmp_x(const P& p, const P& q){\n    if(p.x != q.x)return\
    \ p.x < q.x;\n    return p.y < q.y;\n}\n\nvector<P> convex_hull(P* ps, int n){\n\
    \    sort(ps, ps+n, cmp_x);\n    int k = 0;\n    vector<P> qs(n * 2);\n    REP(i,n){\n\
    \        while(k > 1 && (qs[k-1] - qs[k-2]).det(ps[i] - qs[k-1]) <= 0)k--;\n \
    \       qs[k++] = ps[i];\n    }\n    for(int i = n-2, t = k; i >= 0; i--){\n \
    \       while(k > t && (qs[k-1] - qs[k-2]).det(ps[i] - qs[k-1]) <= 0)k--;\n  \
    \      qs[k++] = ps[i];\n    }\n    qs.resize(k-1);\n    return qs;\n}\n\n\n//\
    \ ps = convex_hull(&ps[0] , ps.size());"
  dependsOn: []
  isVerificationFile: false
  path: Geometry/convex_hull.cpp
  requiredBy: []
  timestamp: '2022-02-05 00:01:25+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: Geometry/convex_hull.cpp
layout: document
redirect_from:
- /library/Geometry/convex_hull.cpp
- /library/Geometry/convex_hull.cpp.html
title: Geometry/convex_hull.cpp
---
