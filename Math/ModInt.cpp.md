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
  bundledCode: "#line 1 \"Math/ModInt.cpp\"\ntemplate<int64 mod>\nstruct ModInt{\n\
    \  int64 x;\n  constexpr ModInt(int64 y = 0):x((y%mod+mod)%mod){}\n  constexpr\
    \ ModInt& operator+=(const ModInt& a){\n    if((x += a.x) >= mod) x -= mod;\n\
    \    return *this;\n  }\n  constexpr ModInt& operator-=(const ModInt& a){\n  \
    \  if((x -= a.x) < 0)x += mod;\n    return *this;\n  }\n  constexpr ModInt& operator*=(const\
    \ ModInt& a){\n    x = x * a.x % mod;\n    return *this;\n  }\n  constexpr ModInt&\
    \ operator/=(const ModInt& a){\n    *this *= a.inv();\n    return *this;\n  }\n\
    \  constexpr ModInt operator-() const {\n    return ModInt(-x);\n  }\n  constexpr\
    \ ModInt operator+(const ModInt& a) const {\n    return ModInt(*this) += a;\n\
    \  }\n  constexpr ModInt operator-(const ModInt& a) const {\n    return ModInt(*this)\
    \ -= a;\n  }\n  constexpr ModInt operator*(const ModInt& a) const {\n    return\
    \ ModInt(*this) *= a;\n  }\n  constexpr ModInt operator/(const ModInt& a) const\
    \ {\n    return ModInt(*this) /= a;\n  }\n  constexpr ModInt operator++(){\n \
    \   *this += ModInt(1);\n    return *this;\n  }\n  constexpr ModInt operator++(int){\n\
    \    ModInt old = *this;\n    ++*this;\n    return old;\n  }\n  constexpr ModInt\
    \ operator--(){\n    *this -= ModInt(1);\n    return *this;\n  }\n  constexpr\
    \ ModInt operator--(int){\n    ModInt old = *this;\n    --*this;\n    return old;\n\
    \  }\n  constexpr bool operator==(const ModInt& a) const {\n    return x == a.x;\n\
    \  }\n  constexpr bool operator!=(const ModInt& a) const {\n    return x != a.x;\n\
    \  }\n  constexpr ModInt pow(int64 r) const {\n    if(!r)return 1;\n    ModInt\
    \ res = pow(r>>1);\n    res *= res;\n    if(r & 1) res *= *this;\n    return res;\n\
    \  }\n  constexpr ModInt inv() const {\n    return pow(mod-2);\n  }\n  friend\
    \ istream& operator>>(istream& is, ModInt& a){\n    int64 t;\n    is >> t;\n \
    \   a = ModInt(t);\n    return is;\n  }\n  friend ostream& operator<<(ostream&\
    \ os, const ModInt& a){\n    return os << a.x;\n  }\n};\nusing mint = ModInt<MOD>;\n"
  code: "template<int64 mod>\nstruct ModInt{\n  int64 x;\n  constexpr ModInt(int64\
    \ y = 0):x((y%mod+mod)%mod){}\n  constexpr ModInt& operator+=(const ModInt& a){\n\
    \    if((x += a.x) >= mod) x -= mod;\n    return *this;\n  }\n  constexpr ModInt&\
    \ operator-=(const ModInt& a){\n    if((x -= a.x) < 0)x += mod;\n    return *this;\n\
    \  }\n  constexpr ModInt& operator*=(const ModInt& a){\n    x = x * a.x % mod;\n\
    \    return *this;\n  }\n  constexpr ModInt& operator/=(const ModInt& a){\n  \
    \  *this *= a.inv();\n    return *this;\n  }\n  constexpr ModInt operator-() const\
    \ {\n    return ModInt(-x);\n  }\n  constexpr ModInt operator+(const ModInt& a)\
    \ const {\n    return ModInt(*this) += a;\n  }\n  constexpr ModInt operator-(const\
    \ ModInt& a) const {\n    return ModInt(*this) -= a;\n  }\n  constexpr ModInt\
    \ operator*(const ModInt& a) const {\n    return ModInt(*this) *= a;\n  }\n  constexpr\
    \ ModInt operator/(const ModInt& a) const {\n    return ModInt(*this) /= a;\n\
    \  }\n  constexpr ModInt operator++(){\n    *this += ModInt(1);\n    return *this;\n\
    \  }\n  constexpr ModInt operator++(int){\n    ModInt old = *this;\n    ++*this;\n\
    \    return old;\n  }\n  constexpr ModInt operator--(){\n    *this -= ModInt(1);\n\
    \    return *this;\n  }\n  constexpr ModInt operator--(int){\n    ModInt old =\
    \ *this;\n    --*this;\n    return old;\n  }\n  constexpr bool operator==(const\
    \ ModInt& a) const {\n    return x == a.x;\n  }\n  constexpr bool operator!=(const\
    \ ModInt& a) const {\n    return x != a.x;\n  }\n  constexpr ModInt pow(int64\
    \ r) const {\n    if(!r)return 1;\n    ModInt res = pow(r>>1);\n    res *= res;\n\
    \    if(r & 1) res *= *this;\n    return res;\n  }\n  constexpr ModInt inv() const\
    \ {\n    return pow(mod-2);\n  }\n  friend istream& operator>>(istream& is, ModInt&\
    \ a){\n    int64 t;\n    is >> t;\n    a = ModInt(t);\n    return is;\n  }\n \
    \ friend ostream& operator<<(ostream& os, const ModInt& a){\n    return os <<\
    \ a.x;\n  }\n};\nusing mint = ModInt<MOD>;"
  dependsOn: []
  isVerificationFile: false
  path: Math/ModInt.cpp
  requiredBy: []
  timestamp: '2022-02-05 00:01:25+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: Math/ModInt.cpp
layout: document
redirect_from:
- /library/Math/ModInt.cpp
- /library/Math/ModInt.cpp.html
title: Math/ModInt.cpp
---
