#include<iostream>
#include<vector>

using namespace std;

class LuckyCounter{
public:
int countLuckyMoments(vector <string> moments){

int count = 0;

for(int i = 0;i < moments.size();i++){
   if(moments[i][0] == moments[i][4] && moments[i][1] == moments[i][3] || moments[i][0] == moments[i][1] && moments[i][3] == moments[i][4] || moments[i][0] == moments[i][3] && moments[i][1] == moments[i][4])
     count++;    
} 

return count;
  
 }
};
