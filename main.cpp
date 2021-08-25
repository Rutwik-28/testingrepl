#include <iostream>
using namespace std;
class vehicle{
  public:
  int x = 10; int y= 20;
  int add (int x,int y){
    int res;
    res = x+y;
    cout<<"res"<<res;
    return res;

  }

};

int main(){
  vehicle obj;
  obj.add(20,30);

  return 0;

}