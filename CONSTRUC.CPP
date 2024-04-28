#include<iostream.h>
#include<conio.h>
class point
{
 private:
	int x;
	int y;
 public:
 point() {
  x=0;   //default constructor
  y=0;
 }
 point(int x1,int y1){
	x=x1;  //parameterized constructor

 y=y1;
 }
 point(point & a)
 {
  x=a.x;
  y=a.y;
 }
 void putpoint()
 {
  cout<<"x="<<x<<endl;
  cout<<"y="<<x<<endl;
 }
};
void main()
{
 clrscr();
 point p1;      //default constructor
 p1.putpoint();

 point p2(45,66);  //parameterized constructor
 p2.putpoint();

 point p3(p2);    //copy constructor
 p3.putpoint();
//cout<<"HI";
 getch();
}