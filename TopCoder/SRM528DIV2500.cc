#include<iostream>
#include<vector>

using namespace std;

class Cut{
public:
int getMaximum(vector <int> eelLengths, int maxCuts){

int count = 0;

for(int i = 0 ;i < eelLengths.size();i++){
  if(eelLengths[i] < 10)
    continue;

  if(count > maxCuts)
    break;

  while(eelLengths[i] >= 10){
   if(count > maxCuts)
     break;
   count++;  
   eelLengths[i] -= 10;
  }  
}

return count;

}
};
