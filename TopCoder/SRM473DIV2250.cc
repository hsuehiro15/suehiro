#include<iostream>
#include<vector>

using namespace std;

class OnTheFarmDivTwo{
public:
vector <int> animals(int heads, int legs){

vector <int> ans;

int chi;
int cow;

//chi + cow = heads;
//2*chi + 4*cow = legs;
if(!((legs - 2*heads)%2)){
cow = (legs - 2*heads)/2;
chi = heads - cow;
if(cow < 0 || chi < 0)
 goto aaa;
ans.push_back(chi);
ans.push_back(cow);
}


aaa:
return ans;

}
};
