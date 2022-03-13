#include <bits/stdc++.h>
using namespace std;

/**
 * @brief Segment tree
 * @details 1点更新（書き換え）区間取得. Tはコンストラクタ引数の2項演算fによってMonoidを成しているとする.
 * 
 * @tparam T Monoid
 */
template<typename T>
struct SegmentTree{
  typedef function<T(T,T)> F;
  /**
   * @brief Construct a new Segment Tree object
   * @details $O(n)$
   * 
   * @param n_ 要素数
   * @param f 2項演算
   * @param e 単位元
   */
  SegmentTree(int n_,F f,T e):f(f),e(e){
    init(n_);
    build();
  }
  /**
   * @brief Construct a new Segment Tree object
   * @details $O(n)$
   * 
   * @param n_ 要素数
   * @param f 2項演算
   * @param e 単位元
   * @param v 初期値
   */
  SegmentTree(int n_,F f,T e,vector<T>& v):f(f),e(e){
    init(n_);
    build(n_,v);
  }
  /**
   * @brief 1点更新
   * @details $O(\log n)$
   * 
   * @param k index
   * @param x 新しい値
   */
  void update(int k,const T& x){
    dat[k+=n]=x;
    while(k>>=1){
      dat[k] = f(dat[k<<1],dat[k<<1|1]);
    }
  }
  /**
   * @brief 区間の値を取得する
   * @details $O(\log n)$
   * 
   * @param a 左端(inclusive)
   * @param b 右端(exclusive)
   * @return T 2項演算fによる[l,r)の区間和
   */
  T query(int a,int b){
    T l=e,r=e;
    for(a+=n,b+=n;a<b;a>>=1,b>>=1){
      if(a&1)l=f(l,dat[a++]);
      if(b&1)r=f(dat[--b],r);
    }
    return f(l,r);
  }
  T operator[](const int &k) const {
    return dat[n+k];
  }
private:
  int n;
  F f;
  T e;
  vector<T> dat;
  void init(int n_){
    n=1;
    while(n<n_)n<<=1;
    dat.clear();
    dat.resize(n<<1, e);
  }
  void build(int n_,const vector<T>& v){
    for(int i=0;i<n_;++i)dat[n+i]=v[i];
    build();
  }
  void build(){
    for(int i=n-1;i>=1;--i){
      dat[i] = f(dat[i<<1],dat[i<<1|1]);
    }
  }
};
