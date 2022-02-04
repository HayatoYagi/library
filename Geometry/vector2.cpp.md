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
  bundledCode: "#line 1 \"Geometry/vector2.cpp\"\ndouble EPS = 1e-10;\n\ndouble add(double\
    \ a, double b){\n    if(abs(a + b) < EPS * (abs(a) + abs(b)))return 0;\n    return\
    \ a + b;\n}\n\nstruct P{\n    double x, y;\n    P(){}\n    P(double x, double\
    \ y) : x(x), y(y) {\n    }\n    P operator + (P p){\n        return P(add(x, p.x),\
    \ add(y, p.y));\n    }\n    P operator - (P p){\n        return P(add(x, -p.x),\
    \ add(y, -p.y));\n    }\n    P operator * (double d){\n        return P(x * d,\
    \ y * d);\n    }\n    double dot(P p){\n        return add(x * p.x, y * p.y);\n\
    \    }\n    double det(P p){\n        return add(x * p.y, -y * p.x);\n    }\n\
    };\n"
  code: "double EPS = 1e-10;\n\ndouble add(double a, double b){\n    if(abs(a + b)\
    \ < EPS * (abs(a) + abs(b)))return 0;\n    return a + b;\n}\n\nstruct P{\n   \
    \ double x, y;\n    P(){}\n    P(double x, double y) : x(x), y(y) {\n    }\n \
    \   P operator + (P p){\n        return P(add(x, p.x), add(y, p.y));\n    }\n\
    \    P operator - (P p){\n        return P(add(x, -p.x), add(y, -p.y));\n    }\n\
    \    P operator * (double d){\n        return P(x * d, y * d);\n    }\n    double\
    \ dot(P p){\n        return add(x * p.x, y * p.y);\n    }\n    double det(P p){\n\
    \        return add(x * p.y, -y * p.x);\n    }\n};"
  dependsOn: []
  isVerificationFile: false
  path: Geometry/vector2.cpp
  requiredBy: []
  timestamp: '2022-02-05 00:01:25+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: Geometry/vector2.cpp
layout: document
redirect_from:
- /library/Geometry/vector2.cpp
- /library/Geometry/vector2.cpp.html
title: Geometry/vector2.cpp
---
