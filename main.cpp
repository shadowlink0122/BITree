#include <iostream>
using namespace std;

namespace BIT{
  static const int MAX = 1 << 17;
  int N,bit[MAX];

  int sum(int i){
    int s = 0;
    while(i > 0){
      s += bit[i];
      i -= i & -i;
    }
    return s;
  }

  void add(int i,int x){
    while(i <= N){
      bit[i] += x;
      i += i & -i;
    }
  }
}
