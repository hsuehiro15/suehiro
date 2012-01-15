#include<iostream>
#include<vector>

using namespace std;

class ColorfulCards{
public:

//bool isPrime(int n){
// if(n == 1)
//    return false;
// for(int i = 2;i < n/2;i++){
//   if(n%i == 0)
//    return false;      
// }  
// return true;
//}

vector <int> theCards(int N,string colors){
 bool prime[1005];
 prime[1] = false;
 for(int i = 2;i <= N;i++){
   prime[i] = true;
 }

 for(int i = 2;i <= N;i++){
  if(prime[i])
   for(int j = i + i;j <= N;j+=i){
    prime[j] = false;
   } 
 }
 int a[50];
 int b[50];
 int cur = 1;
for(int i = 0;i < colors.size();i++){
  if(colors[i] == 'R'){
    while(!prime[cur])
      ++cur;     
  }else{
    while(prime[cur])
      ++cur;
  }
  a[i] = cur++;
}

 cur = N;
 
for(int i = colors.size() -1 ; i >= 0 ;i--){
 if(colors[i] == 'R'){
   while(!prime[cur])
     --cur;
 }else{
   while(prime[cur])
     --cur;
 }
 b[i] = cur--;
} 

vector <int> ans;
ans.clear();

for(int i = 0;i < colors.size();i++){
  if(a[i] == b[i])
    ans.push_back(a[i]);
  else
    ans.push_back(-1);
}

 return ans;

}
};
