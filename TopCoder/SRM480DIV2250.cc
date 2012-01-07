#include<iostream>
#include<vector>

using namespace std;

class Cryptography{
public:
long long encrypt(vector <int> numbers){
long long int sum = 0;
for(int i = 0;i < numbers.size();i++){
  numbers[i] += 1;
  long long int sum_1 = 1;
  for(int j =0 ;j < numbers.size();j++){
     sum_1 *= numbers[j];
  }
  sum = max(sum,sum_1);
  numbers[i] -= 1;
}

return sum;
}
};
