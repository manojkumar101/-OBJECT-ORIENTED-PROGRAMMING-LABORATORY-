#include<bits/stdc++.h>
using namespace std;
class student
{
    int roll_no;
    char name[50];
public:

    void getdata()
    {
     cout<<"\nEnter the roll no ::  ";cin>>roll_no;
     cout<<"\nEnter the name    ::  ";cin>>name;
    }
    int rroll()
    {
        return roll_no;
    }
    void showdata()
    {
        cout<<"\nRoll no  ::  "<<roll_no;
        cout<<"\nname     ::  "<<name;
    }
    void modify()
    {
       cout<<"\nEnter the name    ::  ";cin>>name;
    }
};
int main()
{
    int ch,data,flag=0,i,j=0,kl=0;
    student s[9];fstream fin;ifstream fcin;ofstream fcout;
    while(1)
    {
        cout<<"\n1.Enter the new record\n2.append the exist record\n3.Display record\n4.search record\n5.delete record\n6.modify\n7.exit\n";
        cin>>ch;
        switch(ch)
        {
            case 1:cout<<"\nenter the no of students ";cin>>data;
                    fin.open("E:\\student.dat",ios::out);
                    for(i=j;i<j+data;i++)
                    {  // label:
                        s[i].getdata();
                       /* for(int k=0;k<i;i++)
                        {
                            if(s[i].rroll()==s[k].rroll())
                            {
                                cout<<"data exits \n";goto label;
                            }
                        }
                        */
                        fin.write((char *)&s[i],sizeof(s[i]));
                    }
                    j+=data;
                    fin.close();
                    break;
            case 2:cout<<"\nenter the no of students ";cin>>data;
                    fin.open("E:\\student.dat",ios::out|ios::app);
                    for(i=j;i<j+data;i++)
                    {  flag=1;
                        s[i].getdata();
                        if(flag!=0)
                        fin.write((char *)&s[i],sizeof(s[i]));
                    }
                    j+=data;
                    fin.close();
                    break;
            case 3:fin.open("E:\\student.dat",ios::in);
                        i=0;
                     while(fin.read((char *)&s[i],sizeof(s[i])))
                    {
                        s[i].showdata();i++;
                    }
                    fin.close();
                    break;
            case 4:cout<<"\nenter the roll no of students ";cin>>data;
                    fin.open("E:\\student.dat",ios::in);i=0;
                    while(fin.read((char *)&s[i],sizeof(s[i])))
                    {

                          if(s[i].rroll()==data)
                            {
                                s[i].showdata();break;
                            }
                        i++;

                    }
                    fin.close();
                    break;
        case 5:cout<<"\nenter the roll no of students ";cin>>data;

                    fcin.open("E:\\student.dat",ios::in);i=0;kl=0;

                    while(fcin.read((char *)&s[i],sizeof(s[i])))
                    {
                            if(s[i].rroll()!=data)
                            {
                             fcout.open("E:\\remove.dat",ios::out|ios::app);
                             fcout.write((char*)&s[i],sizeof(s[i]));
                              fcout.close();
                            }
                           i++;

                    }
                    fcin.close();
                    fcout.open("E:\\student.dat",ios::out|ios::trunc);fcout.close();
                    fcin.open("E:\\remove.dat",ios::in);i=0;

                    while(fcin.read((char *)&s[i],sizeof(s[i])))
                    {     fcout.open("E:\\student.dat",ios::out|ios::app);
                          fcout.write((char*)&s[i],sizeof(s[i]));
                          fcout.close();
                          i++;

                    }
                    fcin.close();
                    fcout.open("E:\\remove.dat",ios::out|ios::trunc);fcout.close();
                    break;
            case 6:cout<<"\nenter the roll no of student ";cin>>data;

                    fcin.open("E:\\student.dat",ios::in);i=0;kl=0;

                    while(fcin.read((char *)&s[i],sizeof(s[i])))
                    {        if(s[i].rroll()!=data){
                             fcout.open("E:\\remove.dat",ios::out|ios::app);
                             fcout.write((char*)&s[i],sizeof(s[i]));
                              fcout.close();
                                }
                                else
                            {
                             fcout.open("E:\\remove.dat",ios::out|ios::app);
                             s[i].modify();
                             fcout.write((char*)&s[i],sizeof(s[i]));
                              fcout.close();
                            }
                           i++;

                    }
                    fcin.close();
                    fcout.open("E:\\student.dat",ios::out|ios::trunc);fcout.close();
                    fcin.open("E:\\remove.dat",ios::in);i=0;

                    while(fcin.read((char *)&s[i],sizeof(s[i])))
                    {     fcout.open("E:\\student.dat",ios::out|ios::app);
                          fcout.write((char*)&s[i],sizeof(s[i]));
                          fcout.close();
                          i++;

                    }
                    fcin.close();
                    fcout.open("E:\\remove.dat",ios::out|ios::trunc);fcout.close();
                    break;

        }
        if(ch==7)
            break;

    }
}
