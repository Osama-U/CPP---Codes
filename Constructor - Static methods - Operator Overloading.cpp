#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
class student
{
 int id;
 char *name;
 int grade;
 static char university[20];
 static int count;

 public:

   void set_id(int x);
   void set_name(char n[]);
   void set_grade(int y);
   int get_id(void);
   char * get_name(void);
   int get_grade(void);
   student operator + (student s);
   student operator + (int r);
   student operator ++ ();
   student operator ++ (int d);
    int operator == (student s);
   student &  operator = (student & s);
   friend student operator + (int n , student s);
   student operator + (char h[]);
   friend student operator + (char h[],student s);
    operator int();
    operator char *();

  student()
   {
     name = new char[20];
     strcpy(name,"No NAME");
     id=0;
     grade=0;
     count ++;
   }

  student(char *n)
   {
     name = new char[strlen(n)+1];
     strcpy(name,n);
     id=0;
     grade=0;
     count ++;
   }

  student(int x)
   {
    name = new char[20];
    id = x;
    strcpy(name,"No NAME");
    grade=0;
    count ++;
   }

  student(char n[] , int x)
   {
    name = new char[strlen(n)+1];
    strcpy(name,n);
    id = x;
    grade=0;
    count ++;
   }
   static int get_count(void)
   {
    return count ;
   }

   static void set_university(char u[])
   {
    strcpy(university,u);
   }
   static char* get_university(void)
    {
    return university;
    }

   student (student& rst);

   ~student()
   {
    count--;
    delete name;
   }


};
   int student :: count = 0;
   char student:: university[20]={'I','T','I'};

  student fill_student();
  void print_student(student);


   int main()

    {
      clrscr();
      student t , n;

      t=fill_student();
      n=fill_student();
     /* int x = (int) t;
      cout<<"X="<<x<<endl;
      print_student(t);
      print_student(n);
      print_student(s);
      s=100 + t;
      print_student(t);
      print_student(n);
      print_student(s);
      s= t+100;
      print_student(t);
      print_student(n);
      print_student(s);*/
      n="ahmed"+t;

     int c = student::get_count();
     cout<<"Count IS:"<<c;

     print_student(n);

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
    count ++;
  }

 student student :: operator + (student s)
  {
   student temp;
   temp.grade = grade + s.grade;
   temp.id=id;
   temp.name=new char[strlen(name)+1];
   strcpy(temp.name,name);

   return temp;
  }
 student student :: operator + (int r)
  {
   student temp;
   temp.grade = grade + r;
   temp.id=id;
   temp.name=new char[strlen(name)+1];
   strcpy(temp.name,name);
   return temp;
  }
 student student :: operator ++()
  {
   grade ++ ;
   return * this;
  }
 student student :: operator ++(int dummy)
  {
   student old;
   old.grade = this->grade;
   old.id=id;
   old.name=new char[strlen(name)+1];
   strcpy(old.name,name);
   ++ (this->grade);
   return old;
  }
 int student :: operator == ( student s)
  {
   return (id == s.id && grade == s.grade);
  }

 student& student :: operator = ( student & s)
  {
   this->name = new char [strlen(s.name)+1];
   strcpy(name,s.name);
   this->id=s.id;
   this->grade=s.grade;
   return * this;
  }

 student operator + (int n , student s)
  {
   return(s + n);
  }
 student :: operator int()
  {
   return grade;
  }
 student :: operator char*()
  {
     return name;
  }
 student student ::  operator + (char h[])
  {
   student temp;
   int size = strlen(name) + strlen (h) +1;
   temp.name = new char[size];
   strcpy(temp.name , name);
   strcat(temp.name , h);
   temp.id=id;
   temp.grade=grade;
   return temp;
  }
 student operator + ( char n [] , student s)
  {
    student temp;
   int size = strlen(s.name) + strlen (n) +1;
   temp.name = new char[size];
   strcpy(temp.name , n);
   strcat(temp.name , s.name);
   temp.id=s.id;
   temp.grade=s.grade;
   return temp;

  }



  student fill_student()

 {
   int id1,grade1;
   char name1[20];
   char university1[20];
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
   cout<<"Enter University:";
   cin>>university1;
   st.set_university(university1);
   return st;

  }


  void print_student(student st)
  {
    cout<<"\n";
    cout<<"Student Name:"<<st.get_name()<<endl;
    cout<<"ID:"<<st.get_id()<<endl;
    cout<<"Grade:"<<st.get_grade()<<endl;
    cout<<"University:"<<student::get_university();
  }



