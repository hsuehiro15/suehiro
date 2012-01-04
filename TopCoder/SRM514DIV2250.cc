#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

class MagicalGirlLevelOneDivTwo{
public:
 double theMinDistance(int d, int x, int y){

 if(-d <= x && x <=d  &&  -d <= y && y <= d){
   return 0.0;
 }

 if(x > 0 && y > 0){
   if(y < d && x > d){
      return sqrt((x-d)*(x-d));
   }else if(x < d && y > d){
      return sqrt((y-d)*(y-d));
   }else{
      return (double) sqrt((x-d)*(x-d) + (y-d)*(y-d)); 
   }
 }
 
 if(x > 0 && y < 0){
   if(-d < y && x > d){
     return  sqrt((x-d)*(x-d));
   }else if(x < d && y < -d){
     return  sqrt((y+d)*(y+d));
   }else{
     return (double) sqrt((x-d)*(x-d) + (y+d)*(y+d));
   }
 }

 if(x < 0 && y > 0){
   if(x < -d && y < d){
     return sqrt((x+d)*(x+d));
   }else if(-d < x && d < y){
     return sqrt((y-d)*(y-d));
   }else{
     return sqrt((x+d)*(x+d) + (y-d)*(y-d));
   }
 }

if(x < 0 && y < 0){
  if(x < -d && -d < y){
     return sqrt((x+d)*(x+d));
  }else if( -d < x && y < -d){
     return sqrt((y+d)*(y+d)); 
  }else{
  return sqrt((x+d)*(x+d) + (y + d)*(y + d));
  }
}

 }
};
