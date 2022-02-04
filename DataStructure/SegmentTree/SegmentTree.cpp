#include <bits/stdc++.h>
using namespace std;


//Monoid, 1点更新(書き換え)区間取得
//要素数, 2項演算, 単位元 (, 初期データ)
template<typename T>
struct SegmentTree{
    typedef function<T(T,T)> F;
    int n;    //要素数
    F f;    //2項演算
    T e;    //単位元
    vector<T> dat;
    SegmentTree(int n_,F f,T e):f(f),e(e){
        init(n_);
        build();
    }
    SegmentTree(int n_,F f,T e,vector<T>& v):f(f),e(e){
        init(n_);
        build(n_,v);
    }
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
    void update(int k,const T& x){
        dat[k+=n]=x;
        while(k>>=1){
            dat[k] = f(dat[k<<1],dat[k<<1|1]);
        }
    }
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
};

//RangeMinimunQuery
//verified on 2020/04/16 http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_A&lang=jp
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n,q;
    cin >> n >> q;
    SegmentTree<int> rmq(n,[](int a,int b){return min(a,b);},INT_MAX);
    for(int i = 0; i < q; ++i){
        int com,x,y;
        cin >> com >> x >> y;
        if(com == 0){
            rmq.update(x,y);
        }else{
            cout << rmq.query(x,y+1) << endl;
        }
    }
    return 0;
}