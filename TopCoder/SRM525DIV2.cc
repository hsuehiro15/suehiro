#include<iostream>
#include<vector>
using namespace std;

class RainyRoad{
public:
string isReachable(vector <string> road){
       for(int n = 0;n < road[0].size() -1 ;n++){
               if(road[0][n] == 'W' && road[1][n] == 'W'){
                 return "NO";
               }
    }
return "YES";
}
};


