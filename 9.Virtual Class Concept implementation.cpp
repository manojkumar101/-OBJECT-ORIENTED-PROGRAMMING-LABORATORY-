#include<bits/stdc++.h>
using namespace std;
class admin
{  public:
    char id[20],name[20],gender[20];

    void getdata1()
    {cout<<"ID\tName\tgender\n";
        cin>>id>>name>>gender;
    }
};
class workA:public virtual admin
{
protected:
    char work[20],workexp[20];
public:
    void getdata2()
    {cout<<"work\twork experience\n";
        cin>>work>>workexp;

    }
};
class collegeB:public virtual admin
{
protected:
    char mark12[20],markbe[20];
public:
    void getdata3()
    {cout<<"mark\tmark in B.E\n";
        cin>>mark12>>markbe;
    }

};
class student:public workA ,public collegeB
{
    public:
    void getdata4()
    {   getdata1();
        getdata2();
        getdata3();
    }

    void showdata()
    {
     cout<<"ID = "<<id<<endl<<"Name = "<<name<<endl<<"gender = "<<gender<<endl;
     cout<<"work ="<<work<<endl<<"work exprience ="<<workexp<<endl;
      cout<<"12th marks ="<<mark12<<endl<<"percentage in B.E = "<<markbe<<endl;
    }

};
int main()
{
     student s;
     fstream file;
     int ch;
     while(1)
     {
            cout<<"1.add\n2.display\n3.exit\n";
            cin>>ch;
            switch(ch)
            {
                case 1:file.open("E:\\student.txt",ios::out);
                    cout<<"Enter Details :\n";
                    s.getdata4();
                    file.write((char *)&s,sizeof(s));
                    file.close();
                    break;
                case 2:
                    file.open("E:\\student.txt",ios::in|ios::binary);
                    cout<<"\nOutput\n";
                    file.read((char *)&s,sizeof(s));


                    s.showdata();
                    file.close();
                    break;
                default:cout<<"thanx"<<endl;
            }

         if(ch==3)
            break;

     }

     return 0;
}
/*FILE *fp;
     fb=fopen("E:\\record",ios::out||ios::app);
     s.getdata();
     fwrite(&s,sizeof(s),1,fb);
     fclose(fb);
     rewind(fb);
     fread(&s,sizeof(s),1,fp);
     cout<<s.getdata();
     fclose(fb);
*/






