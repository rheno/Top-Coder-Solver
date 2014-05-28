
/**************************
 * Programs : MicroStrings (http://community.topcoder.com/stat?c=problem_statement&pm=13048)
 * 
 * by : rhenobudiasa@yahoo.com
 *
 **************************/



#include<iostream>
#include<string>

using namespace std;


class MicroStrings{
public:
  MicroStrings();
  ~MicroStrings();
  string makeMicroString(int A, int D);
};


MicroStrings::MicroStrings(){}

MicroStrings::~MicroStrings(){}

string MicroStrings::makeMicroString(int A, int D){
  
  int C = A; 
  
  string s = to_string(C); 
 
  while(C>0){
   
    C -= D;
    if(C>=0){
      s.append(to_string(C));   
    }
  }
  
  return s;
}

int main(){

  MicroStrings m;
  int A,D;
  cin>>A;
  cin>>D;
  cout<<m.makeMicroString(A,D)<<endl;
  return 0;
}
