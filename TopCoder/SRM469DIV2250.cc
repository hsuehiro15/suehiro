#include<iostream>
#include<vector>

using namespace std;

class TheMoviesLevelOneDivTwo{
public:
int find(int n ,int m, vector <int> row,vector <int> seat){

int a[n+1][m+1];

for(int i = 1;i <= n;i++){
 for(int j = 1;j <= m;j++){
   a[i][j] = 0; 
 }
}

for(int i = 0;i < row.size();i++){
 a[row[i]][seat[i]] = 1; 
}

int count  = 0;

for(int i = 1; i <= n;i++){
 for(int j = 1; j < m;j++){
   if(a[i][j] == 0 && a[i][j+1] == 0){
     count++;
   }    
 }
}

return count;

}
};
