#include<iostream>
using namespace std;
class addition
{
  private:
    int a,b,sum;
  public:
    void userinput(void);
    void getoutput(void);
  

};
void addition:: userinput(void){
    cout<<"enter the value  of first no:"<<"\n";
    cin>>a;
    cout<<"enter the value of second no:"<<"\n";
    cin>>b;

}
void addition:: getoutput(void)
{
    sum=a+b;
    cout<<"the addittion for the given no is:"<<"\n"<<sum;

}
int main()
{
  addition shantanu;
  shantanu.userinput();
  shantanu.getoutput();
  

return 0;
}








################
#include<iostream>
using namespace std;
class addition
{
  private:
    int a,b,c,k;
  public:
    void userinput(void);
    void getoutput(void);
  

};
void addition:: userinput(void){
    cout<<"enter the value  of first no:"<<"\n";
    cin>>a;
    cout<<"enter the value of second no:"<<"\n";
    cin>>b;
    cout<<"enter the value of  third no:"<<"\n";
    cin>>c;

}
void addition:: getoutput(void)
{
    k=a>b? a>c?a:c :b>c?b:c;
    cout<<"the greatest no in between of given no. is:"<<"\n"<<k;

}
int main()
{
  addition shantanu;
  shantanu.userinput();
  shantanu.getoutput();
  

return 0;
}