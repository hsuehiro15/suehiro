#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<sstream>
#include<list>
#include<set>
#include<algorithm>
#include<functional>
#include<stdio.h>
#include<map>

typedef long long ll;

using namespace std;

class FactoVisors{

public:

  bool D(int n,vector <int> div,vector <int> mul){


    for(int i = 0;i < div.size();i++){
      if(n%div[i])
        return false;
    }
				      
    for(int i = 0;i < mul.size();i++){
      if(mul[i]%n)
         return false
    }

    return true;
  }

  int getNum(vector <int> div,vector <int> mul){

    sort(mul.begin(),mul.end());

    int M = mul[mul.size()-1],CN = 0;

    for(int i = 0; i*i <= M;i++){
      if(D(i,div,mul))
        CN++;
      if(D(M/i,div,mul))
	CN++;
    }


    return CN;

  }

};
