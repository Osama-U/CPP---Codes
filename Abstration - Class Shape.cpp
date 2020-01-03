#include<iostream.h>
#include<conio.h>

class shape
{
 protected:

 int dim1 , dim2;

 public:

  shape()
   {
     dim1=dim2=0;
   }

  shape(int m)
   {
    dim1=dim2=m;
   }

  shape(int m ,int n)
   {
     dim1 = m;
     dim2 = n;
   }
  void set_d1(int m)
   {
    dim1=m;
   }
  void set_d2(int n)
  {
   dim2=n;
  }

  int get_d1()
   {
    return dim1;
   }

  int get_d2()
   {
    return dim2;
   }

  virtual float area()=0;

 };


 class circle:public shape

  {
    public:
    circle()
    {}

    circle(int r):shape(r)
    {}

    float area()
    {
      return(3.14*dim1*dim2);
    }
  };

 class rectangle:public shape
  {
    public:
      rectangle()
      {}
      rectangle(int l , int w):shape(l,w)
      {}
      float area()
       {
	return(1*dim1*dim2);
       }
  };

 class triangle:public shape
  {
   public:
    triagle()
    {}
    triangle(int b , int h):shape(b,h)
    {}
    float area()
     {
       return (0.5*dim1*dim2);
     }
  };

 class square:public rectangle
  {
   public:
    square()
    {}
   square(int s):rectangle(s,s)
    {}
  };

 class geoshape
  {
    public:

    shape *p[4];

    geoshape(shape *p1 , shape *p2 , shape *p3 , shape *p4)
     {
      p[0] = p1;
      p[1] = p2;
      p[2] = p3;
      p[3] = p4;
     }

    float total_area()
    {
     float sum=0;

      for(int i=0 ; i<4 ; i++)
       {
	 sum+=p[i]->area();
       }

     return sum;
    }

  };


  int main()

   {
    clrscr();

    circle c(7);
    rectangle r(20,5);
    triangle t(40,5);
    square s(6);

    geoshape g(&c , &r , &t ,&s);

    cout<<g.total_area();

    getch();
    return 0;
   }

