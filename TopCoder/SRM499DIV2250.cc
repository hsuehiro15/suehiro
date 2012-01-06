#include<iostream>
#include<vector>

using namespace std;

class SimpleGuess{
public:
 int getMaximum(vector <int> hints){
  sort(hints.begin(),hints.end());
  
  int res = 0;
  
 for(int i = 0;i < hints.size();i++){
   for(int j = hints.size() -1 ; j >= i;j--){
     if((hints[j] - hints[i])%2 == 0){
      int x = (hints[j] - hints[i])/2;
      int y = hints[j] - x;
      res = max(res,x*y);
     }
   }
 }
   
 return res;
 
}
};
