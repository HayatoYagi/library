#include <bits/stdc++.h>
using namespace std;

template<typename T>
struct FenwickTree{
  vector<T> fenwick;
  int n;

  FenwickTree(int n):
    fenwick(vector<T>(n+1, 0)), n(n) {}

  T sum(int i) {
    if (!i) return 0;
    return fenwick[i] + sum(i-(i&-i));
  }

  T sum(int i, int j){
    // half-open Terval
    return sum(j-1) - sum(i-1);
  }

  void add(int i, T x) {
    if (i > n) return;
    fenwick[i] += x;
    add(i+(i&-i), x);
  }
};

//1-indexed
//  http://na-o-s.hateblo.jp/entry/2014/07/13/031143