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
    - http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_A&lang=jp
  bundledCode: "#line 1 \"DataStructure/SegmentTree/SegmentTree.cpp\"\n#include <bits/stdc++.h>\n\
    using namespace std;\n\n\n//Monoid, 1\u70B9\u66F4\u65B0(\u66F8\u304D\u63DB\u3048\
    )\u533A\u9593\u53D6\u5F97\n//\u8981\u7D20\u6570, 2\u9805\u6F14\u7B97, \u5358\u4F4D\
    \u5143 (, \u521D\u671F\u30C7\u30FC\u30BF)\ntemplate<typename T>\nstruct SegmentTree{\n\
    \    typedef function<T(T,T)> F;\n    int n;    //\u8981\u7D20\u6570\n    F f;\
    \    //2\u9805\u6F14\u7B97\n    T e;    //\u5358\u4F4D\u5143\n    vector<T> dat;\n\
    \    SegmentTree(int n_,F f,T e):f(f),e(e){\n        init(n_);\n        build();\n\
    \    }\n    SegmentTree(int n_,F f,T e,vector<T>& v):f(f),e(e){\n        init(n_);\n\
    \        build(n_,v);\n    }\n    void init(int n_){\n        n=1;\n        while(n<n_)n<<=1;\n\
    \        dat.clear();\n        dat.resize(n<<1, e);\n    }\n    void build(int\
    \ n_,const vector<T>& v){\n        for(int i=0;i<n_;++i)dat[n+i]=v[i];\n     \
    \   build();\n    }\n    void build(){\n        for(int i=n-1;i>=1;--i){\n   \
    \         dat[i] = f(dat[i<<1],dat[i<<1|1]);\n        }\n    }\n    void update(int\
    \ k,const T& x){\n        dat[k+=n]=x;\n        while(k>>=1){\n            dat[k]\
    \ = f(dat[k<<1],dat[k<<1|1]);\n        }\n    }\n    T query(int a,int b){\n \
    \       T l=e,r=e;\n        for(a+=n,b+=n;a<b;a>>=1,b>>=1){\n            if(a&1)l=f(l,dat[a++]);\n\
    \            if(b&1)r=f(dat[--b],r);\n        }\n        return f(l,r);\n    }\n\
    \    T operator[](const int &k) const {\n        return dat[n+k];\n    }\n};\n\
    \n//RangeMinimunQuery\n//verified on 2020/04/16 http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_A&lang=jp\n\
    int main(){\n    cin.tie(0);\n    ios::sync_with_stdio(false);\n    int n,q;\n\
    \    cin >> n >> q;\n    SegmentTree<int> rmq(n,[](int a,int b){return min(a,b);},INT_MAX);\n\
    \    for(int i = 0; i < q; ++i){\n        int com,x,y;\n        cin >> com >>\
    \ x >> y;\n        if(com == 0){\n            rmq.update(x,y);\n        }else{\n\
    \            cout << rmq.query(x,y+1) << endl;\n        }\n    }\n    return 0;\n\
    }\n"
  code: "#include <bits/stdc++.h>\nusing namespace std;\n\n\n//Monoid, 1\u70B9\u66F4\
    \u65B0(\u66F8\u304D\u63DB\u3048)\u533A\u9593\u53D6\u5F97\n//\u8981\u7D20\u6570\
    , 2\u9805\u6F14\u7B97, \u5358\u4F4D\u5143 (, \u521D\u671F\u30C7\u30FC\u30BF)\n\
    template<typename T>\nstruct SegmentTree{\n    typedef function<T(T,T)> F;\n \
    \   int n;    //\u8981\u7D20\u6570\n    F f;    //2\u9805\u6F14\u7B97\n    T e;\
    \    //\u5358\u4F4D\u5143\n    vector<T> dat;\n    SegmentTree(int n_,F f,T e):f(f),e(e){\n\
    \        init(n_);\n        build();\n    }\n    SegmentTree(int n_,F f,T e,vector<T>&\
    \ v):f(f),e(e){\n        init(n_);\n        build(n_,v);\n    }\n    void init(int\
    \ n_){\n        n=1;\n        while(n<n_)n<<=1;\n        dat.clear();\n      \
    \  dat.resize(n<<1, e);\n    }\n    void build(int n_,const vector<T>& v){\n \
    \       for(int i=0;i<n_;++i)dat[n+i]=v[i];\n        build();\n    }\n    void\
    \ build(){\n        for(int i=n-1;i>=1;--i){\n            dat[i] = f(dat[i<<1],dat[i<<1|1]);\n\
    \        }\n    }\n    void update(int k,const T& x){\n        dat[k+=n]=x;\n\
    \        while(k>>=1){\n            dat[k] = f(dat[k<<1],dat[k<<1|1]);\n     \
    \   }\n    }\n    T query(int a,int b){\n        T l=e,r=e;\n        for(a+=n,b+=n;a<b;a>>=1,b>>=1){\n\
    \            if(a&1)l=f(l,dat[a++]);\n            if(b&1)r=f(dat[--b],r);\n  \
    \      }\n        return f(l,r);\n    }\n    T operator[](const int &k) const\
    \ {\n        return dat[n+k];\n    }\n};\n\n//RangeMinimunQuery\n//verified on\
    \ 2020/04/16 http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_A&lang=jp\n\
    int main(){\n    cin.tie(0);\n    ios::sync_with_stdio(false);\n    int n,q;\n\
    \    cin >> n >> q;\n    SegmentTree<int> rmq(n,[](int a,int b){return min(a,b);},INT_MAX);\n\
    \    for(int i = 0; i < q; ++i){\n        int com,x,y;\n        cin >> com >>\
    \ x >> y;\n        if(com == 0){\n            rmq.update(x,y);\n        }else{\n\
    \            cout << rmq.query(x,y+1) << endl;\n        }\n    }\n    return 0;\n\
    }"
  dependsOn: []
  isVerificationFile: false
  path: DataStructure/SegmentTree/SegmentTree.cpp
  requiredBy: []
  timestamp: '2022-02-05 00:01:25+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: DataStructure/SegmentTree/SegmentTree.cpp
layout: document
redirect_from:
- /library/DataStructure/SegmentTree/SegmentTree.cpp
- /library/DataStructure/SegmentTree/SegmentTree.cpp.html
title: DataStructure/SegmentTree/SegmentTree.cpp
---
