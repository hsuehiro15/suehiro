#include<iostream>
#include<vector>

class LotteryCheating{
public:
  int minimalChange(string ID){
    int ans = ID.size();
    long long n = toInt64(ID);
    for(long long i = 0;i < 100000;i++){
      long long A = n;
      long long B = i*i;
      int diff = 0;
      string s = toString(B);
      if(s.size() > ID.size()){
	break;
      }
      while( A > 0 || B > 0){
	if(A%10 != B%10){
	  diff++;
	}
	A /= 10;
        B /= 10;
      }
      ans = min(ans,diff);
      if(ans == 0){
	return 0;
      }
    }
    return ans;
   }
};
