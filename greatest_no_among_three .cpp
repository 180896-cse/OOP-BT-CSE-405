#include<iostream>
using namespace std;
class addition
{
  private:
    int a;
    int &A=a;
    int b;
    int &B=b;
    int c,k;
  public:
    void userinput(void);
    void getoutput(void);
  

};
void addition:: userinput(void){
    cout<<"eneter the value of first no:"<<"\n";
    cin>>A;
    cout<<"enter the value of second no:"<<"\n";
    cin>>B;
    cout<<"enter the value of  third no:"<<"\n";
    cin>>c;

}
void addition:: getoutput(void)
{
    k=A>B? A>c?A:c :B>c?B:c;
    cout<<"the greatest no in between of given no. is:"<<"\n"<<k;

}
int main()
{
  addition shantanu;
  shantanu.userinput();
  shantanu.getoutput();
  

return 0;
}
