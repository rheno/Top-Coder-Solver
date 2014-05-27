/**************************
 * Programs : Unique (http://community.topcoder.com/stat?c=problem_statement&pm=13067)
 * 
 * by : rhenobudiasa@yahoo.com
 *
 **************************/

#include<iostream>
#include<string>

using namespace std;

class Unique{
public :
  Unique();
  ~Unique();
  string removeDuplicates(string S);
};

Unique::Unique(){}

Unique::~Unique(){}

string Unique::removeDuplicates(string S){
  string results="";
  
  string str(1, S[0]);
  
  results.append(str);
  
  for(int i=1;i<S.length();i++){
    string str(1,S[i]);
    
    if(results.find(str) > S.length()){
       results.append(str);
    }
       
  } 
  return results;
}


int main(){
  
  Unique u;
  
  string input;
  
  cin>>input;
  
  cout<<u.removeDuplicates(input)<<endl;
  
  return 0;
}
