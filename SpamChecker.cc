/**************************
 * Programs : SpamChecker (http://community.topcoder.com/stat?c=problem_statement&pm=13119)
 * 
 * by : rhenobudiasa@yahoo.com
 *
 **************************/

#include<iostream>
#include<string>

using namespace std;


class SpamChecker{
public:
  SpamChecker();
  ~SpamChecker();
  string spamCheck(string judgeLog, int good, int bad);
};

SpamChecker::SpamChecker(){
  //Konstruktor
}


SpamChecker::~SpamChecker(){
  //Destruktor
}

string SpamChecker::spamCheck(string judgeLog, int good, int bad){
  int sum=0;
  string status = "NOT SPAM";
  for(int i=0;i<judgeLog.length();i++){
    if(judgeLog[i] == 'o'){
      sum+=good;
    }
    if(judgeLog[i] == 'x'){
      sum-=bad;
    }
    if(sum<0){
      status = "SPAM";
      break;
    }
  }
  return status;
}


int main(){
  SpamChecker s;
  string inputText;
  int g, b;
  cin>>inputText;
  cin>>g;
  cin>>b;
  cout<<s.spamCheck(inputText,g,b)<<endl;  

  return 0;
}
