#include<iostream>
using namespace std;
class addition
{
  private:
    int a,b,sum;
    int &opera=sum;
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
    opera=a+b;
    cout<<"the addittion for the given no is:"<<"\n"<<opera;

}
int main()
{
  addition shantanu;
  shantanu.userinput();
  shantanu.getoutput();
  

return 0;
}







