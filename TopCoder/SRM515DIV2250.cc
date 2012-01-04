#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class FortunateNumbers{
public:

int getFortunate(vector <int> a,vector <int> b,vector <int> c){

vector <int> d;

//int a_size = a.size(),b_size = b.size(),c_size = c.size();

//int all_size = a_size*b_size*c_size;

for(int i = 0;i < a.size();i++){
   for(int j = 0;j < b.size();j++){ 
      for(int k = 0;k < c.size();k++){
          d.push_back(a[i] + b[j] + c[k]);   
      }
   }
}

int seisuu = 0;

unique(d.begin(),d.end());

int count = 0;

for(int n = 0; n < d.size();n++){
  int fortunate_count = 0;
  int keta_count = 0;
  seisuu = d[n];
  while(seisuu > 0){
     if((seisuu%10) == 5 ||(seisuu%10) == 8){
       fortunate_count++;
     }
     seisuu /= 10;
     keta_count++;
  };
  if(fortunate_count == keta_count)
    count++;
}

return count;
}
};
