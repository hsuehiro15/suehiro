#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

class MagicalGirlLevelOneDivTwo{
public:
 double theMinDistance(int d, int x, int y){
   
   double mx = max(0,abs(x)-d);
   double my = max(0,abs(y)-d);
  return sqrt(mx*mx + my*my);
 
 }
};
