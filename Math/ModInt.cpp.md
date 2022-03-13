---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/DPL_5_A.test.cpp
    title: test/aoj/DPL_5_A.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"Math/ModInt.cpp\"\ntemplate<int_fast64_t mod>\nstruct ModInt{\n\
    \  int_fast64_t x;\n  constexpr ModInt(int_fast64_t y = 0):x((y%mod+mod)%mod){}\n\
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
    using mint = ModInt<MOD>;\n"
  code: "template<int_fast64_t mod>\nstruct ModInt{\n  int_fast64_t x;\n  constexpr\
    \ ModInt(int_fast64_t y = 0):x((y%mod+mod)%mod){}\n  constexpr ModInt& operator+=(const\
    \ ModInt& a){\n    if((x += a.x) >= mod) x -= mod;\n    return *this;\n  }\n \
    \ constexpr ModInt& operator-=(const ModInt& a){\n    if((x -= a.x) < 0)x += mod;\n\
    \    return *this;\n  }\n  constexpr ModInt& operator*=(const ModInt& a){\n  \
    \  x = x * a.x % mod;\n    return *this;\n  }\n  constexpr ModInt& operator/=(const\
    \ ModInt& a){\n    *this *= a.inv();\n    return *this;\n  }\n  constexpr ModInt\
    \ operator-() const {\n    return ModInt(-x);\n  }\n  constexpr ModInt operator+(const\
    \ ModInt& a) const {\n    return ModInt(*this) += a;\n  }\n  constexpr ModInt\
    \ operator-(const ModInt& a) const {\n    return ModInt(*this) -= a;\n  }\n  constexpr\
    \ ModInt operator*(const ModInt& a) const {\n    return ModInt(*this) *= a;\n\
    \  }\n  constexpr ModInt operator/(const ModInt& a) const {\n    return ModInt(*this)\
    \ /= a;\n  }\n  constexpr ModInt operator++(){\n    *this += ModInt(1);\n    return\
    \ *this;\n  }\n  constexpr ModInt operator++(int){\n    ModInt old = *this;\n\
    \    ++*this;\n    return old;\n  }\n  constexpr ModInt operator--(){\n    *this\
    \ -= ModInt(1);\n    return *this;\n  }\n  constexpr ModInt operator--(int){\n\
    \    ModInt old = *this;\n    --*this;\n    return old;\n  }\n  constexpr bool\
    \ operator==(const ModInt& a) const {\n    return x == a.x;\n  }\n  constexpr\
    \ bool operator!=(const ModInt& a) const {\n    return x != a.x;\n  }\n  constexpr\
    \ ModInt pow(int_fast64_t r) const {\n    if(!r)return 1;\n    ModInt res = pow(r>>1);\n\
    \    res *= res;\n    if(r & 1) res *= *this;\n    return res;\n  }\n  constexpr\
    \ ModInt inv() const {\n    return pow(mod-2);\n  }\n  friend istream& operator>>(istream&\
    \ is, ModInt& a){\n    int_fast64_t t;\n    is >> t;\n    a = ModInt(t);\n   \
    \ return is;\n  }\n  friend ostream& operator<<(ostream& os, const ModInt& a){\n\
    \    return os << a.x;\n  }\n};\nusing mint = ModInt<MOD>;\n"
  dependsOn: []
  isVerificationFile: false
  path: Math/ModInt.cpp
  requiredBy: []
  timestamp: '2022-03-13 17:11:32+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/DPL_5_A.test.cpp
documentation_of: Math/ModInt.cpp
layout: document
redirect_from:
- /library/Math/ModInt.cpp
- /library/Math/ModInt.cpp.html
title: Math/ModInt.cpp
---
