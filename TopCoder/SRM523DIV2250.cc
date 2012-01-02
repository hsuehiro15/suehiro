#include<iostream>
#include<string>
#include<vector>

using namespace std;

const int dx[] = {-1,0,1,0},dy[] = {0,1,0,-1};

int i,j,nowi = -1,nowj = -1;

class AlphabetPath{
public:
 string doesItExist(vector <string> letterMaze)
{
 
  for(i = 0;i < letterMaze.size();i++){
   for(j = 0;j < letterMaze[i].length();j++){
      if(letterMaze[i][j] == 'A'){
      nowi = i;
      nowj = j;
      goto keisan;
   }
  } 
}
 
 if(nowi == -1 && nowj == -1)
    return "NO";
 
keisan:
  int count = 1;
  for(int k = nowi;k <letterMaze.size();k++){
    for(int l = nowj;l< letterMaze[0].length();l++){
      if(count == 25 && letterMaze[k][l] == 'Z')
        return "YES";
      if(letterMaze[k][l+1] == 'A' + count || letterMaze[k][l-1] == 'A' + count || letterMaze[k-1][l] == 'A' + count || letterMaze[k+1][l] == 'A' + count)
        count++;
      else
        return "NO";
    }
  }
}
 
};










