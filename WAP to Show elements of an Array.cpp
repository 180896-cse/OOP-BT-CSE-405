#include<iostream>
using namespace std;
class mainparent
{
 public:
   int a;
   int *p;
  
   void takeuserinput(void);
};
void mainparent::takeuserinput(void)
{
 cout<<"enter the total no. of elements you want in array"<<"\n";
 cin>>a;
 p=new int[a];
 cout<<"enter the elements you want to be insert in array are as followes:"<<"\n";
 for(int i=0;i<a;i++)
 {
   cin>>p[i];
 }
}
class child:public mainparent
{ 
  public:
 void getresult(void);
 };
void child::getresult(void)
{
 cout<<"the element you inserted are:"<<"\n";
 for(int i=0;i<a;i++)
 {
   cout<<" "<<p[i];
 }
}
int main()
{
  child c1;
  c1.takeuserinput();
  c1.getresult();
  return 0;
 
}

