#include<iostream>
#include<vector>

using namespace std;

class CubeAnts{
public:


 int distance(int x){
   if(x == 0)
     return 0;
   if( x == 1 || x == 3 || x == 4){
      return 1;
   } 
   if(x == 5 || x == 7 || x == 2){
     return 2;
   }
   if(x == 6){
    return 3;
   }   
 }

int getMinimumSteps(vector <int> pos){
  unique(pos.begin(),pos.end());
 
 int ans = 0;
 vector<int>::iterator p;
 
 for(p = pos.begin(); p != pos.end();++p){
  ans = max(ans,distance(*p));
 }
  
 return ans;

}

};
