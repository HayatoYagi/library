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
  bundledCode: "#line 1 \"Marathon/timer.cpp\"\nint main{\n  std::chrono::system_clock::time_point\
    \  start, end; // \u578B\u306F auto \u3067\u53EF\n  start = std::chrono::system_clock::now();\
    \ // \u8A08\u6E2C\u958B\u59CB\u6642\u9593\n  while(true){\n    // \u51E6\u7406\
    \n\n    end = std::chrono::system_clock::now();  // \u8A08\u6E2C\u7D42\u4E86\u6642\
    \u9593\n    double elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(end-start).count();\
    \ //\u51E6\u7406\u306B\u8981\u3057\u305F\u6642\u9593\u3092\u30DF\u30EA\u79D2\u306B\
    \u5909\u63DB\n    if(elapsed > 1900)break;\n  }\n}\n"
  code: "int main{\n  std::chrono::system_clock::time_point  start, end; // \u578B\
    \u306F auto \u3067\u53EF\n  start = std::chrono::system_clock::now(); // \u8A08\
    \u6E2C\u958B\u59CB\u6642\u9593\n  while(true){\n    // \u51E6\u7406\n\n    end\
    \ = std::chrono::system_clock::now();  // \u8A08\u6E2C\u7D42\u4E86\u6642\u9593\
    \n    double elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(end-start).count();\
    \ //\u51E6\u7406\u306B\u8981\u3057\u305F\u6642\u9593\u3092\u30DF\u30EA\u79D2\u306B\
    \u5909\u63DB\n    if(elapsed > 1900)break;\n  }\n}"
  dependsOn: []
  isVerificationFile: false
  path: Marathon/timer.cpp
  requiredBy: []
  timestamp: '2022-02-05 00:01:25+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: Marathon/timer.cpp
layout: document
redirect_from:
- /library/Marathon/timer.cpp
- /library/Marathon/timer.cpp.html
title: Marathon/timer.cpp
---
