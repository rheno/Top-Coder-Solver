/**************************
 * Programs : WritingWords (http://community.topcoder.com/stat?c=problem_statement&pm=13072)
 * 
 * by : rhenobudiasa@yahoo.com
 *
 **************************/

#include<iostream>
#include<string>

using namespace std;

class WritingWords{
public:
  WritingWords(string mInput);
  ~WritingWords();
  int write();
private:
  string input;
};

WritingWords::WritingWords(string mInput){
  input = mInput;
}

WritingWords::~WritingWords(){
  //Destructor
}

int WritingWords::write(){
  int count=0;
  for(int i=0;i<input.length();i++){
    count+=26-((int)'Z'-(int)input[i]);
  }
  return count;
}



int main(){

  WritingWords w("ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ");  
  cout<<w.write()<<endl;  
  
  return 0;
}
