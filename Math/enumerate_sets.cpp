//N = {0, 1, 2, ... , N-1}


//  S : subset of N
//      2^#N
for(int s = 0; s < (1 << n); ++s){
  // cout << bitset<10>(s) << endl;
}

//  S : subset of T
//      2^#T
for(int s = t; ; s = (s - 1) & t){
  // cout << bitset<10>(s) << endl;
  if(s == 0)break;
}

//  S : subset of N & #S = k
//      nCk
for(int s = (1 << k) - 1; s < (1 << n); ){
  // cout << bitset<10>(s) << endl;
  int t = s | (s - 1);
  s = (t + 1) | (((~t & - ~t) - 1) >> (__builtin_ctz(s) + 1));
}


//  https://kimiyuki.net/blog/2017/07/16/enumerate-sets-with-bit-manipulation/