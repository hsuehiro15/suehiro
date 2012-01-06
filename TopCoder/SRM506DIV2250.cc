#include<iostream>
#include<vector>

using namespace std;

class SlimeXSlimeRancher2{
public:
int train(vector <int> attributes){

int max_value = 0;

for(int i = 0 ;i < attributes.size();i++){
  if(max_value < attributes[i]){
   max_value = attributes[i];
  }
}

int sum = 0;

for(int j = 0;j < attributes.size();j++){
   sum += max_value - attributes[j]; 
}

return sum;


}
};
