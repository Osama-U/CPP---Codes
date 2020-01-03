#include <iostream.h>
#include <conio.h>
#include <malloc.h>
struct student
{
  int id;
  char name[20];
  int grades[3];
};


int box_volume (int l , int w=1 , int h=1);
struct student fill_student ();
void  print_student (student st);
 int main()

 {
   int v1 ,v2 ,v3 ,v4;
   clrscr();
   student  *ptr;
   ptr=new struct student[5];
   for(int x=0; x<5 ; x++)
   {
     ptr[x]= fill_student();

   }
   for( x=0 ; x<5 ; x++)
   {
   print_student(ptr[x]);
   }

   delete(ptr);
   v1=box_volume(3,4,7);
   v2=box_volume(9,5);
   v3=box_volume(8);
   v4=box_volume(1);

   cout<<"\n"<<v1;
   cout<<"\n"<<v2;
   cout<<"\n"<<v3;
   cout<<"\n"<<v4;

  getch();
  return 0;
 }

 int box_volume(int l , int w , int h)

  {
    return (l * w *h);
  }


  struct student fill_student ()

    {
      int i;
      student s;
      cout<<"\n";
      cout<<"\nEnter Student Name:";
      cin>>s.name;
      cout<<"\nEnter Student ID:";
      cin>>s.id;

      for(i=0;i<3;i++)
      {
	cout<<"\nEnter Student grade"<<i+1<<":";
	cin>>s.grades[i];

      }

      return  s;

    }

  void  print_student (struct student st)

    {
      int i;
      cout<<"\n";
      cout<<"\nStudent Name: "<<st.name;
      cout<<"\nStudent ID: "<< st.id;

      for(i=0;i<3;i++)
       {
	cout<<"\nStudent Grade" <<i+1<<":"<<st.grades[i];

       }

    }
