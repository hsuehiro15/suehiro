#include<cstdlib>
#include<ctime>

using namespace std;

class MysteriousRestaurant{
public:
  int ceni[51][51];
  int n,m;
  int maxDays(vector <string> prices, int budget){
    int i,j,k;
    int res = 0;
    n = prices.size();
    m = prices[0].size()l

      for(i = 0;i <n ;i++){
	for(j = 0;j<m;j++){
          if(prices[i][j] >= '0' && prices[i][j] <= '9')              
	    ceni[i][j] = prices[i][j] - '0';
          if(prices[i][j] >='a' && prices[i][j] <='z')
            ceni[i][j] = prices[i][j] - 'a' + 36;        
	  if(prices[i][j] >='A' && prices[i][j] <='Z') 
            ceni[i][j] = pirces[i][j] - 'A' + 10;
	}
      }

    int sum;
    int best;
    int total;


    for(k = 1;k <= n;k++){
      total = 0;
      for(i = 0;i < min(7,k);i++){
	best = 100000;
	for(j = 0;j < m;j++){
	  sum = 0;
	  for(int x = i; x < k;x += 7){
	    sum += ceni[x][j]
	  }
	  best = min(best,sum);
	}
       total += best;    
      }   
    if(total <= budget)  
      res = k;
  }
    return res;
    


  }
};
