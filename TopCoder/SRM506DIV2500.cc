#include<iostream>
#include<vector>
#include<algorithm>
#include<map>


using namespace std;

class SlimeXSlimesCity{
public:
bool isok(vector <int> v,long long int now){
 for(int i = 0; i < v.size();i++){
   if(v[i] > now) return false;
    now += v[i];
 }
 return true;
} 


int merge(vector <int> population){

int ret = 0;

sort(population.begin(),population.end());

 for(int i = 0 ; i < population.size();i++){
  int now = population[i];
  vector <int> v = population;
  v.erase(v.begin() + i);
  if(isok(v,now)) ret++;
 }

return ret;

}
};
