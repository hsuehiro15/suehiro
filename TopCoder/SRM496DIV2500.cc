#include<iostream>
#include<vector>

using namespace std;

class ColoredStrokes{
public:
int getLeast(vector <string> picture){

int cnt_blue = 0,cnt_red = 0;

for(int j = 0;j < picture[0].size();j++){
 for(int i = 0;i < picture.size();i++){
   if(picture[i][j] == 'B' || picture[i][j] == 'G'){  
     for(int n = i; n < picture.size();n++){   
       if(n == picture.size() - 1 && picture[n][j] == 'B'){
        cnt_blue++;
        j++;
        break;
       }      
       if(picture[n][j] == 'B'){
         continue;
       }
       if(picture[n][j] == 'G'){
         continue;
       }
       if(picture[n][j] == '.' || picture[n][j] == 'R'){
        cnt_blue++;
        continue;
       }
     }   
   }  
 }
}

for(int j = 0;j < picture.size();j++){
 for(int i = 0;i < picture[0].size();i++){
   if(picture[j][i] == 'R' || picture[j][i] == 'G'){  
     for(int n = i; n < picture[i].size();n++){   
       if(n == picture[j].size() - 1 && picture[j][n] == 'R'){
         cnt_red++;
         i = picture[0].size() -1; 
         break;
       }      
       if(picture[j][n] == 'R'){
         continue;
       }
       if(picture[j][n] == 'G'){
         continue;
       }
       if(picture[n][j] == '.' || picture[n][j] == 'B'){
         cnt_blue++;
         continue;
       }
     }   
   }
 }
}

return cnt_blue + cnt_red;

}
};
