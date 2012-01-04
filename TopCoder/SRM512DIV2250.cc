#include<iostream>
#include<vector>

using namespace std;

class MarbleDecoration{
public:
int maxLength(int R,int G,int B){

   int max_rg = max(R,G);
   int max_all = max(max_rg,B);
   int second,third;   
 
   
   if(max_all == R){
     second = B;
     third  = G; 
   }else if(max_all == G){
     second = B;
     third  = R;
   }else{ 
     second = R;
     third  = G;
   }
  
 second = max(second,third);
 third  = min(second,third);
 
 if(max_all == second){
   return max_all + second; 
 }else if(second < max_all){
  return second + second + 1;
 }

}
};
