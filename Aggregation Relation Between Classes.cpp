#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

class point
 {
  int x,y;

  public:

  point()
   {
    x=y=0;
    }
  point (int m)
   {
    x=y=m;
   }

  point (int m , int n)
   {
    x=m;
    y=n;
   }


  void set_x(int m)
   {
    x=m;
   }

  void set_y(int n)
   {
    y=n;
   }

  int get_x()
   {
    return x;
   }

  int get_y()
   {
    return y;
   }

 };


 class agg_rect
  {
   point p1,p2;
   int length , width ;

    public:

    agg_rect(int x1 , int y1 , int x2 , int y2):p1(x1,y1),p2(x2,y2)

     {
       length=abs(x2-x1);
       width =abs(y2-y1);
     }

    void set_p1(int x , int y)
    {
      p1.set_x(x);
      p1.set_y(y);
      length = abs (x-p2.get_x());
      width = abs (y-p2.get_y());
    }

    int area()
     {
      return(length * width);
     }
    int permiter()
     {
      return(2*(length+width));
     }

   };


  class agg_circle
   {
    point p1,p2;
    float raduis;

    public:

    agg_circle(int x1 , int y1 , int x2 , int y2):p1(x1,y1),p2(x2,y2)
     {
      raduis = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
     }
    void set_p1(int x , int y)
     {
      p1.set_x(x);
      p1.set_y(y);
      raduis = sqrt(pow((x-p2.get_x()),2) + pow((y-p2.get_y()),2));
     }

    int area()
    {
     return (3.14 * raduis * raduis);
    }

    int permiter()
    {
      return (2 * 3.14 *raduis);
    }

   };


   int main()
    {
      clrscr();

      agg_rect r(10,20,70,100);
      cout<<r.area()<<endl;

      agg_circle c(10,20,70,100);
      cout<<c.area()<<endl;

      getch();
      return 0 ;

    }