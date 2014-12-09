#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <fstream>
#include <iostream>
#include <algorithm>
#include <string>


using namespace std;

/*  SRM 269 DIV 2 */


int main() {

  string s = "----> // -> ->";

  int com = (int)s.find("//");

  if(com>s.length()){

    com = s.length();

  }else if(s.find("->") > s.length() && com <= s.length()){

    cout<<s<<endl;

  }else{

    string str = s.replace(s.find("->"), 2, ".");

    while(str.find("->")<str.length() && str.find("->")<com){

      str = str.replace(str.find("->"), 2, ".");     
    }

    cout<<str<<endl; 
  }

  return 0;
}




