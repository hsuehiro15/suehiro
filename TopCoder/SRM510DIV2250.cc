#include<iostream>

using namespace std;

class TheAlmostLuckyNumbersDivTwo{
public:
int find(int a,int b){
int count = 0;

for(int i = a;i <= b;i++){
 int not_lucky = 0;
 bool flag = true;
  while(i){
   if(i != 4 && i !=7)
      not_lucky++;
   
   if(not_lucky > 1)
      break;
   
   if(not_lucky < 2 && i%10 == 4 || i%10 == 7){
      if(flag){
        count++;
      }
      flag = false;
   }    
   i /= 10;
  }

} 
return count;

}
};
