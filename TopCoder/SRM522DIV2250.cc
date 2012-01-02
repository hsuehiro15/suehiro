#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

int result;

class PointErasingTwo{
public:
 int getMaximum(vector <int> y){

    for(int i =0 ;i < y.size();i++){
      for(int j = 0;j < y.size();j++){
      
     if(i == j)        
        continue;
 
     int x1 = i;
     int y1 = y[i];
                 
     int x2 = j;
     int y2 = y[j];
 
    int  rowX = ( x1 < x2) ? x1 : x2;
    int  rowY = (y1 < y2 ) ? y1 : y2;
 
    int highX = ( x1 < x2 ) ? x2 : x1;
    int  highY = ( y1 < y2 ) ? y2 : y1;

    int count = 0;
    for(int k = 0; k < y.size();k++){
       if(rowX < k &&  k < highX && rowY < y[k] && highY > y[k] )
          count++; 
    }
 result = max(result,count);
  }
 }
 return result;
 }
};
