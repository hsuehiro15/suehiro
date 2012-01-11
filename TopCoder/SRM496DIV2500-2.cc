#include<iostream>
#include<vector>

using namespace std;

class ColoredStrokes{
public:
  int getLeast(vector <string> picture){
    int count = 0;

   for(int i = 0;i < picture.size();i++){
     for(int j = 0; j< picture[0].size();j++){
	if(picture[i][j] == 'R' || picture[i][j] == 'G'){
	  if(j = =0){
	    count++;
	  }
	  else if(picture[i][j-1] != 'R' && picture[i][j-1]){
	    count++;
	  }
	}
     }
   }


   for(int j = 0;j < picture[0].size();j++){
     for(int i = 0;i < picture.size();i++){

       if(picture[i][j] == 'B' || picture[i][j] == 'G'){
	 if(i == 0){
	   count++;
	 }
	 else if(picture[i-1][j] != 'B' && picture[i-1][j] != 'G'){
	   count++;
	 }
       }
     }
   }


   return count;



  }
};
