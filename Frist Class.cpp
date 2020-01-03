#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
class student
{
 int id;
 char name[20];
 int grade;

 public:

   void set_id(int x);
   void set_name(char n[20]);
   void set_grade(int y);
   int get_id(void);
   char * get_name(void);
   int get_grade(void);

};
  student fill_student();
   void print_student(student);


   int main()

    {
      clrscr();
      student t;

      t=fill_student();

      print_student(t);

      getch();
     return 0;
    }


 void student::set_id(int x)

  {
    id = x;
  }

 void student::set_name(char n[20])
  {
   strcpy(name,n);
  }

 void student::set_grade(int y)
  {
   grade=y;
  }

  int student::get_id(void)
  {
   return id;
  }

  char * student::get_name(void)
  {
   return name;
  }
  int student::get_grade(void)
  {
   return grade;
  }

  student fill_student()

 {
   int id1;
   char name1[20]={0};
   int grade1;
   student st;
   cout<<"Enter Student Name:";
   cin>>name1;
   st.set_name(name1);
   cout<<"Enter ID:";
   cin>>id1;
   st.set_id(id1);
   cout<<"Enter Grade:";
   cin>>grade1;
   st.set_grade(grade1);

   return st;

  }


  void print_student(student st)
  {
    cout<<"\n";
    cout<<"Student Name:"<<st.get_name()<<endl;
    cout<<"ID:"<<st.get_id()<<endl;
    cout<<"Grade:"<<st.get_grade()<<endl;
  }



