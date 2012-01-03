#include<iostream>
#include<vector>

using namespace std;

class MonochromaticBoard{
public:
 int theMin(vector <string> board)
{
 int row_count = 0;
 int column_count = 0;
 int all_count = 0;
 int count = 0;
 bool flag = false;

 for(int i = 0;i < board.size();i++){
   for(int j = 0; j < board[0].size();j++){
      if(board[i][j] == 'B'){
        all_count++;
      }
   }
 }

if(all_count == board.size()*board[0].size())
   flag = true;

for(int i = 0; i < board.size();i++)
{
  count = 0;
  for(int j = 0;j< board[0].size();j++)
  {
    if(board[i][j] == 'B')
      count++;
    if(count == board[0].size())
      row_count++;
  }
}

count = 0;

for(int i = 0;i < board[0].size();i++)
{
   count = 0;
   for(int j = 0;j < board.size();j++)
   {
     if(board[j][i] == 'B')
       count++;
     if(count == board.size())
       column_count++;
   } 
}

if(flag)
  return (row_count < column_count) ?  row_count : column_count;
else
  return row_count + column_count;


}
};
