#include<iostream>
#include<vector>

using namespace std;

class SequenceOfCommands{
public:
string whatHappens(vector <string> commands){
bool flag;
bool north = false;
bool east  = false;
bool west  = false;
bool south = false;
int x = 0;
int y = 0;

while(1){

 for(int i = 0;i < commands.size();i++){
   for(int j = 0;j < commands[i].size();j++){
      if(commands[i][j] == 'S'){
        if(north)
          y++;
        if(east)
          x++;
        if(west)
          y--;
        if(south)
          x--;
        else
          y++;  
      }else if(commands[i][j] == 'R'){
        if(north){
          north = false;
          east = true;
        }else if(east){
          east = false;
          south = true;
        }else if(south){
          south = false;
          west  = true;
        }else if(west){
          west = false;
          north = true;
        }else{
          east = true;
        }          
      }else if(commands[i][j] == 'L'){
         if(north){
           north = false;
           south = true;
         }else if(east){
           east  = false;
           north  = true;
         }else if(west){
           west = false; 
           east = true;
         }else if(south){
           south = false;
           west = true;
         }else{
           south = true;
         }
      }        
   }
 }

 if(x == 0 && y == 0){
  flag = true;
  break;
 }

}

if(flag)
 return "bounded";
else
 return "unbound";


}
}
