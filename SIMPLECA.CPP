#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int a,b,c,d;
 float e;
 cout<<"enter two number"<<endl;
 cin>>a>>b;
 cout<<"1.add"<<"2.substract"<<"3.multi"<<"4.divison"<<endl;
 cin>>c;
 switch(c)
 {
  case 1:d=a+b;
  cout<<"sum of"<<a<<"+"<<b<<"="<<d<<endl;
  break;
  case 2:d=a-b;
  cout<<"substraction of"<<a<<"-"<<b<<"="<<d<<endl;
  break;
  case 3:d=a*b;
  cout<<"multiplication of"<<a<<"*"<<b<<"="<<d<<endl;
  break;
  case 4:e=(float)a/b;
  cout<<"divison of"<<a<<"/"<<b<<"="<<e<<endl;
  break;
  default:
  cout<<"enter a valid number"<<endl;
 }
getch();
}
