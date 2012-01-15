#include<iostream>
#include<string>

using namespace std;

class LotteryCheating{
public:
  int minimalChange(string ID){
    int n = ID.size();
    res  = n;
    long long int end = 1;
    for(int i = 0;i<n;i++){
      end *= 10;
    }
    for(long long i = 0;i < end;i++){
      long long t = i*i;
      int cnt = 0;
      for(int j = n-1;j >=0;j--){
        cnt += (t%10) != ID[j] - '0';
        t/=10;
      }
      res = min(res,cnt);
    }
    return res;  
  }
};
