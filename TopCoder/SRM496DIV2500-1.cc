#include<string>
#include<vector>

using namespace std;

class ColoredStrokes{
public:
  int getLeast( vector <string> picture){

    int h = (int)picture.size(); 
    int w = (int)pictrue[0].size();

    int ans = 0;

    for(int y = 0; y < h ;y++)
      for(int x = 0; x < w;x++)
	if((x == 0 || !(picture[y][x-1] == 'R' || picture[y][x-1] == 'G')) && (picture[y][x] == 'R' || picture[y][x] == 'G'))
	  ans++;

    for(int x = 0; x < w;x++)
      for(int y = 0;y < h;y++)
	if((y == 0||  !(picture[y-1][x] == 'B' || picture[y-1][x] == 'G')) && (picture[y][x] == 'B' || picture[y][x] == 'G'))
	  ans++;

    return ans;
  }
};

















  }

}
