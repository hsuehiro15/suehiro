#include<iostream>
#include<vector>

using namespace std;

class RedAndGreen{
public:
 int minPaints(string row){
 
  bool flag = false;
  bool right = true;
  int count = 0;
  int j;
  
 shingi:

 for(int i = 0;i < row.size();i++){
    if(!flag){
      if(row[i] == 'G'){  
        flag = true;
        j = i;
      } 
    }
 }
 
 bool gt = false;
 
 for(int i = j + 1; i < row.size();i++){
   if(row[i] != 'G'){
    gt = true;
    break;
   }
 }
 
 if(gt){
 
 bool lr = false;
 
 for(int i = 0;i <row.size();i++){
   if(row[i] == 'G'){
    row[i] = 'R';
    int j = i;
    lr = true;
   }
 break;
}

for(int i = row.size() -1 ; i >= 0;i--){
  if(j < i && lr && row[i] == 'R' ){
    row[i] = 'G';
    count++;
    break;
  } 
}
 goto shingi;
 
  }else{
   return count;
  }
 
  }
 };
