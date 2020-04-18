#include<iostream>
using namespace std;
class mainparent
{
 public:
  int a;
  int result;
  void takeuserinput(void);
};
void mainparent::takeuserinput(void)
{
 cout<<"enter the no. to be get checked:"<<"\n";
 cin>>a;
}
class child:public mainparent
{public:
   void showresult(void);
 
};
void child:: showresult(void)
{
 if(a%2==0)
 {
   cout<<a<<" "<<"is even no.";
 }
 else{
   cout<<a<<" "<<"is odd no.";
 }
}
int main()
{
 child c1;
 c1.takeuserinput();
 c1.showresult();
  return 0;
 
}
