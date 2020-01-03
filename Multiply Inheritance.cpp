#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>



class base
 {
   protected:
   int z;

   public:

   base(){z=0;}
   base(int m) {z=m;}
   void set_z(int m){z=m;}
   int get_z(){return z;}
   

 };

class base1 : virtual public base
 {
   protected:

   int x;

   public:

   base1()
   {
    x=0;
   }

   base1(int m ): base(m)
   {
    x=m;
   }

   void set_x(int m)
   {
    x=m;
   }

   int get_x()
   {
    return x;
   }
 };

class base2 :virtual public base
{
  protected:
  int y;

  public:

  base2()
  {
   y=0;
  }
  base2(int n):base(n)
  {
   y=n;
  }
  void set_y(int n)
   {
    y=n;
   }
  int get_y()
   {
    return y;
   }
 };

class derived : public base1 , public base2
{
 public:

 derived()
 {}
 derived(int a , int b):base2(a) , base1(b)
 {}
 int product()
  {
   return(x*y*z);
  }
};

int main()
 {
  clrscr();

  derived drv(20,30);
  cout<<drv.product();

  getch();
  return 0;
 }