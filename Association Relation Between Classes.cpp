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

  class assoc_circle
   {
    point *p1,*p2;
    float raduis;

    public:
    assoc_circle()
    {
    p1=p2=NULL;
    raduis=0;
    }



    assoc_circle(point *pt1 , point *pt2)
     {
      p1=pt1;
      p2=pt2;

      if(p1&&p2)
       {
	raduis = sqrt(pow((p2->get_x()-p1->get_x()),2)+pow((p2->get_y()-p1->get_y()),2));
       }
      else
       {
	raduis=0;
       }
     }

    void set_p1(point *pt1)
     {
      p1=pt1;

      if(p1&&p2)
       {
	raduis = sqrt(pow((p2->get_x()-p1->get_x()),2)+pow((p2->get_y()-p1->get_y()),2));
       }
      else
       {
	raduis=0;
       }

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
    point pa(3,4) ,pb(7);
    assoc_circle c(&pa ,&pb);

    cout<<"Area IS "<<c.area()<<endl;

    getch();
    return 0;
   }