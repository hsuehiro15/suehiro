#include<iostream>
#include<vector>

using namespace std;

class SequenceOfCommands{
public:
string whatHappens(vector <string> commands){
string str;

for(int i = 0;i < commands.size();i++){
 str += commands[i];
}
int x = 0,y = 0,d = 0,dx[4] = {0,1,0,-1},dy[4] = {1,0,-1,0};

 for(int i = 0;i < 100000;i++){
  for(int j = 0; j < str.size();i++){
    if(str[j] == 'R'){
      d = (d + 1)%4;   
    }else if(str[j] == 'L'){
      d = (d + 3)%4;
    }else{
      x += dx[d],y += dy[d]; 
    }
  }
  if(x == 0 && y == 0){
    return "bounded";
  }
 }
return "unbounded";

}
};
