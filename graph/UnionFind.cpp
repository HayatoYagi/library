#include <bits/stdc++.h>
using namespace std;

/**
 * @brief Union Find Tree (Disjoint Set Union)
 */
struct UnionFind{
  /**
   * @brief n頂点0辺のグラフで初期化する.
   * @details O(n)
   * 
   * @param n 頂点数
   */
  UnionFind(int n){
    par = vector<int>(n, -1);
    connectedComponentCnt = n;
  }

  /**
   * @brief 辺(x,y)を追加する.
   * @details O(\alpha(n)) amortized
   * 
   * @param x 
   * @param y 
   * @return true 頂点x, yはもともと別の連結成分にあり, 連結成分のマージが行われた.
   * @return false 頂点x, yはもともと同じ連結成分にあり, 連結成分のマージは行われなかった.
   */
  bool unite(int x, int y){
    x = root(x);
    y = root(y);
    if(x == y)return false;
    if(-par[x] < -par[y])swap(x,y);
    par[x] += par[y];
    par[y] = x;
    --connectedComponentCnt;
    return true;
  }

  /**
   * @brief 頂点x, yが同じ連結成分に属しているかどうか調べる.
   * @details O(\alpha(n)) amortized
   * 
   * @param x 
   * @param y 
   * @return 
   */
  bool same(int x, int y){
    return root(x) == root(y);
  }

  /**
   * @brief 頂点xを含む連結成分の頂点数を返す.
   * @details O(\alpha(n)) amortizedW
   * 
   * @param x 
   * @return int 
   */
  int size(int x){
    return -par[root(x)];
  }

private:
  vector<int> par;
  int connectedComponentCnt;
  int root(int x){
    if(par[x] < 0)return x;
    return par[x] = root(par[x]);
  }
};
