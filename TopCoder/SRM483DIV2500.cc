#include<iostream>
#include<vector>

using namespace std;

class MovieSeating{
public:


int kaijo_c(int k,int x){
 if(k < 0)
   return -1; 
 
 int kai_c = 1; 
 
while( x > 0){
 kai_c *= k;
 k--;
 x--;
}

 return kai_c;

}


int kaijo(int k){
 if(k < 0) 
   return -1;
   
 int kai = 1;
 
while(k > 0){   
 kai *= k;
 k--;
}  

 return kai; 
  
}

long long getSeatings(int numFriends,vector<string> hall){

int sum = 0;
//横
for(int i = 0;i < hall.size();i++){
 int count = 0;

 for(int j = 0;j < hall[0].size();j++){
   if(hall[i][j] == '.') 
     count++;
 }

 if(count < numFriends)
    continue;
 
 long long int numfriend_kaijo = 0;
 
 numfriend_kaijo = kaijo_c(count,numFriends);
 
 int numFriends_kaijo = 0;
 
 numFriends_kaijo = kaijo(numFriends);
 
 sum += numfriend_kaijo/numFriends_kaijo;  
   
}

//縦
for(int i = 0;i < hall[0].size();i++){
 int count = 0;
  for(int j = 0;j < hall.size();j++){
     if(hall[j][i] == '.') 
       count++;     
  }
  
  if(count < numFriends)
     continue;
  
  long long int numfriend_kaijo = 0;
  numfriend_kaijo = kaijo_c(count,numFriends);

  int numFriends_kaijo = 0;
  numFriends_kaijo = kaijo(numFriends); 
  
  sum += numfriend_kaijo/numFriends_kaijo;  
}

long long int num_junretu = 0;

num_junretu = kaijo(numFriends);

return (long long int) sum*num_junretu;

}
};
