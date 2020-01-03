#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

class person
{
 protected:
 char name[30];
 int id;

  public:

   person()
    {
      strcpy(name,"No Name");
      id=0;

    }

   person(int i)

    {
      strcpy(name,"No Name");
      id=i;
    }

   person(char n[])

    {
      strcpy(name , n);
      id=0;
    }

   person(char n[] , int i)

    {
     strcpy(name , n);
     id = i;
    }

   void set_name(char n[])

    {
      strcpy(name , n);
    }

   void set_id(int x)

    {
      id=x;
    }

   char * get_name(void)
    {
     return name;
    }

   int get_id(void)
    {
     return id;
    }

 };


 class employee : public person

  { protected:
    int salary;

    public:

     employee()

       {
	 salary=0;
       }

     employee(int s , int d , char n[]):person(n ,d)
       {
	 salary = s;
       }

     void set_salary(int s)
       {
	 salary=s;
       }

     int get_salary()
      {
	return salary;
      }
  };

  class customer : public person

  {
    char email[30];

    public:

     customer()

       {
	 strcpy(email,"No Name");
       }

     customer(char e[], int d , char n[]):person(n ,d)
       {
	 strcpy(email,e);
       }

     void set_email(char e[])
       {
	 strcpy(email,e);
       }

     char * get_email()
      {
	return email;
      }
  };


  int main()

  {
    clrscr();
    employee a(1000,10,"Ahmed");
    cout<<a.get_name()<<endl;
    cout<<a.get_id()<<endl;
    cout<<a.get_salary()<<endl;

    customer c("Nobody@email.com",50,"Abdelsatar");
    cout<<endl<<c.get_name()<<endl;
    cout<<c.get_id()<<endl;
    cout<<c.get_email()<<endl;


    getch();
    return 0;
  }




