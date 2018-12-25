//ASSIGNMENT NO. 4
#include<bits/stdc++.h>
using namespace std;
class A
{   protected:
    char lic[50];
    char name[10];
   public:
       void getdata()
       {
        cout<<"\nEnter the Licence No :: ";
        cin>>lic;
        cout<<"\nEnter the Customer Name :: ";
        cin>>name;
       }

};
class B
{   protected:
    int height,weight;
   public:
       void getdata()
       {
          cout<<"\nEnter the Customer Height :: ";
          cin>>height;
          cout<<"\nEnter the Customer Weight :: ";
          cin>>weight;
       }

};
class C
{   protected:
    char dob[10],bg[4];
   public:
       void getdata()
       {
        cout<<"\nEnter the Customer Date Of Birth :: ";
        cin>>dob;
        cout<<"\nEnter the Customer Blood Group :: ";
        cin>>bg;
       }

};
class x:public A,public B,protected C
{
    char ph[10],add[50];
public:
    void getdata(int);
    void showdata();
    void modification();
    void deletedata()
    {
      height=0;
    }
     char* rlic()
     {
         return lic;
     }

}w[31];
void x::getdata(int i)
{
    int flag=0;
    A::getdata();

    B::getdata();
    C::getdata();
    loop:
    cout<<"\nEnter the Customer Phone no :: ";
    cin>>ph;
   try
    {
        int l=strlen(ph);
        if(l!=10)
            throw(l);
    }
    catch(int)
    {
        cout<<"\nEnter the Valid Phone no\n";
        goto loop;
    }

    cout<<"\nEnter the Customer address :: ";
    cin>>add;
}
void x::showdata()
        {if(height!=0){
                    cout<<"lic::"<<lic<<"  \n";cout<<"name::"<<name<<" \n";
                    cout<<"height::"<<height<<" \n"; cout<<"weight::"<<weight <<"  \n";
                    cout<<"blood group::"<<bg <<"  \n";cout<<"date of birth::"<<dob <<"  \n";
                    cout<<"phone::"<<ph <<"  \n";cout<<"address::"<<add<<"  \n";
        }}
void x:: modification()
{
int ch;int position;
        cout<<"\n1.Licence No \nCustomer Name";
        cout<<"\n2.Customer Height \nCustomer Weight";
        cout<<"\n3.Customer Date Of Birth \nCustomer Blood Group :: ";
        cout<<"\n4.Customer Phone no";
        cout<<"\n5.Customer address ";
        cout<<"\nWhat you want to Modify??";
        cin>>position;

        switch(position)
        {
        case 1:
                A::getdata();break;
        case 2:
                B::getdata();break;
        case 3:C::getdata();break;
        case 4:cout<<"\n Customer Phone no"; cin>>ph;break;
        case 5:cout<<"\n Customer address  :: ";cin>>add;break;

        }
}
int main()
{
            int i,ch,data,j=0,m=0,flag,p;char check[100];char aaa[100];;
            int ch1;
            x w[31];
        do
            {
                    cout<<"\n1.Enter Details   \n2.Display Detail    \n3.Display Specific Book Detail \n";
                    cout<<"4.Update Detail \n5.Delete Data\n6.EXIT \n";
                    cout<<"Enter Choice::";
                    cin>>ch1;
                    switch(ch1)
                            {
                                case 1:cout<<"Enter the No. of Customers ::";
                                        cin>>data;
                                        for(i=j;i<data+j;i++)
                                        {flag=0;
                                            cout<<"\n::";
                                            w[i].getdata(i);
                                             for(int k=0;k<i;k++)
                                             {
                                                 if(!strcmp(w[k].rlic(),w[i].rlic()))
                                                 {
                                                   flag=1;
                                                    break;
                                                }
                                            }
                                           if(flag!=0)
                                            {
                                            cout<<"Details already present\n";
                                            --i;

                                              }
                                         }
                                        j+=data;

                                        break;
                            case 2:for(i=0;i<j;i++)
                                    {
                                    w[i].showdata();
                                    cout<<"\n";
                                    }

                                    break;
                           case 3:flag=0;
                                    char check[100];
                                    cout<<"\nEnter Customer license no whose data you want to see::";
                                    cin>>check;
                                    for(i=0;i<j;i++)
                                    {
                                    if(!strcmp(check,w[i].rlic()))
                                    {
                                        flag=1;
                                        break;
                                    }
                                    }
                                    if(flag==0)
                                    {
                                    cout<<"\n For this license no\n none customer  found  \n";
                                    }
                                    else
                                    {w[i].showdata();
                                    }
                                    break;
                            case 4:
                                    char add[400];
                                    cout<<"\nEnter customer license no whose data you want to modify::";
                                    cin>>add;

                                    for(p=0;p<data;p++)
                                    {
                                        if(!strcmp(w[p].rlic(),add))
                                            {
                                                m=1;
                                                break;
                                            }
                                    }
                                    if(m==1)
                                    w[p].modification();
                                    else
                                        cout<<"\nNone customer exit\n ";
                                    break;
                        case 5:cout<<"\nEnter the Customer license no whose data u want to delete"<<endl;
                                cin>>aaa;
                                 for(p=0;p<data;p++)
                                    {
                                        if(!strcmp(w[p].rlic(),aaa))
                                            {
                                                m=1;
                                                break;
                                            }
                                    }
                                    if(m==1)
                                    w[p].deletedata();
                                    else
                                        cout<<"\nNone customer exit\n ";
                                    break;
                        }
}while(ch1!=7);
  return 0;
}

