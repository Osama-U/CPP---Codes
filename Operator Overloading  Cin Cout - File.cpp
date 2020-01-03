#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<fstream.h>
class student
{
 int id;
 char *name;
 int grade;


  public:

   void set_id(int x);
   void set_name(char n[]);
   void set_grade(int y);
   int get_id(void);
   char * get_name(void);
   int get_grade(void);



    student()
   {
     name = new char[20];
     strcpy(name,"No NAME");
     id=0;
     grade=0;

   }

  student(char *n)
   {
     name = new char[strlen(n)+1];
     strcpy(name,n);
     id=0;
     grade=0;

   }

  student(int x)
   {
    name = new char[20];
    id = x;
    strcpy(name,"No NAME");
    grade=0;

   }

  student(char n[] , int x)
   {
    name = new char[strlen(n)+1];
    strcpy(name,n);
    id = x;
    grade=0;

   }


   student (student& rst);

  friend ostream & operator << (ostream & out , student std);
  friend istream & operator >>(istream & in , student & std);

   ~student()
   {
    delete name;
   }


};

 int main()
 {
   clrscr();
   student s;
   cin >> s;
   cout << s;

   fstream obj;
   obj.open("Studentfile.txt" , ios::out );
   obj<<s;
   obj.close();

  student g;
  /* obj.open("Studentfile.txt" ,ios::in | ios::app);
   obj<<g;
   obj.close();  */

   obj.open("Studentfile.txt" , ios::in );
   obj>>g;
   obj.close();

   cout<<g;




  getch();

  return 0;
 }




   void student::set_id(int x)

  {
    id = x;
  }

 void student::set_name(char n[])
  {
   delete name;
   name = new char[strlen(n)+1];
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





 student :: student (student& rst)
  {
    name = new char[strlen(rst.name)];
    strcpy(name,rst.name);
    id = rst.id;
    grade=rst.grade;

  }

 ostream & operator << (ostream & out , student std)
  {
   out <<std.name<<endl;
   out << std.id<<endl;
   out <<std.grade<<endl;
   return out;
  }
 istream & operator >> (istream & in , student &  std)
  {
  // cout<<"Enter Name: "<<endl;
   in>>std.name;
  // cout<<"Enter ID:"<<endl;
   in>>std.id;
  // cout<<"Enter Grade:"<<endl;
   in>>std.grade;

   return in;
  }


 



