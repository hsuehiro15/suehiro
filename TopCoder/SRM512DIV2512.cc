#include<iostream>
#include<vector>

using namespace std;

class MysteriousRestaurant{
public:
int maxDays(vector <string> prices,int budget){

//int res = 10000;
int pri = 0;
//int count  = 0;
int ans = 0;

vector <int>count;

for(int i = 0;i < prices.size();i++){
 int res = 1000;
 
  if(i >= 7){
      ans = i%7;
      for(int j = 0;j < prices[i].size();j++){
          if(prices[ans][j] >= '0' && prices[ans][j] <= '9'){
             res = min(res,prices[i][j] - '0');
          }  
          if(prices[ans][j] >= 'A' && prices[ans][j] <= 'Z'){
             res = min(res,prices[i][j] - 'A' + 10);
          } 
          if(prices[ans][j] >= 'a' && prices[ans][j] <= 'z'){
             res = min(res,prices[i][j] - 'a' + 36);
          }
          if(j == prices[i].size() - 1){ 
             if(res + pri <= budget){
                pri += res;
             }else{
                return i;
             }
          }
      }
  }    

 if(i < 7){ 
   for(int j = 0; j <prices[i].size();j++){
     if(prices[i][j] >= '0' && prices[i][j] <= '9'){
       res = min(res,prices[i][j] - '0');
     }  
     if(prices[i][j] >= 'A' && prices[i][j] <= 'Z'){
       res = min(res,prices[i][j] - 'A' + 10);
     } 
     if(prices[i][j] >= 'a' && prices[i][j] <= 'z'){
       res = min(res,prices[i][j] - 'a' + 36);
     }
     if(j == prices[i].size() - 1){ 
       if(res + pri <= budget){
         pri += res;
       }else{
         return i;
       }
     }
   }
 }
}


}
};
	
