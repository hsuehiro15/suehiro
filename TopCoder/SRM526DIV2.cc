#include<vector>
#include<iostream>
using namespace std;
class CheatingQuiz{
public:
 vector <int> howMany(string answers){
 bool flag0 = false;
 bool flag1 = false; 
 bool flag2 = false;
 vector <int> ans;
 int count = 0;
 for(int i = answers.size() - 1 ; i>=0 ;i--){
  if(count == 3){
   ans.push_back(3);
   continue;
   }
   switch(answers[i]){
    case 'A':
     if(!flag0){
      flag0 = true;
      count++;
      }
      break;
    case 'B':
    if(!flag1){
      flag1 = true;
      count++;
      }
      break;
    case 'C':
    if(!flag2){
     flag2 = true;
     count++;
     }
     break;     
 }
 ans.push_back(count);
 }
 reverse(ans.begin(),ans.end());
 return ans;
 }
 };


