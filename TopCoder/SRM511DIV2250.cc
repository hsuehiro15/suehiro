#include<iostream>
#include<vector>

using namespace std;

class GameOfLifeDivTwo{
public:
string theSimulation(string init, int T){

if(T==0){
  return init;
}

int N = init.size();
int val[N];

for(int j = 0;j < T;j++){
 for(int i = 0;i < N;i++){
    val[i] = init[(i + N -1)%N] - '0' + init[i] - '0' + init[(i + 1)%N] - '0';
 }
 for(int i = 0;i < N;i++){
   if(val[i] > 1){
    init[i] = '1';
   }else{
    init[i] = '0';
   }
 }
}
return init;

}
};
