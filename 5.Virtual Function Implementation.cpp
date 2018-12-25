#include<bits/stdc++.h>
using namespace std;
class shape
{
protected:
    double x,y;
public:
    virtual void getdata(){};
    virtual double area(){};
};
class triangle:public shape
{
public:
    void getdata()
    {   cout<<"Enter the length and breadth"<<endl;
        cin>>x>>y;
    }
    double area()
    {
        return 0.5*x*y;
    }
};
class square:public shape
{
public:
    void getdata()
    {   cout<<"Enter the length and breadth"<<endl;
        cin>>x>>y;
    }
    double area()
    {
        return x*y;
    }
};
class circle:public shape
{
public:
    void getdata()
    {   cout<<"Enter the radius"<<endl;
        cin>>x;
    }
    double area()
    {
        return 3.14*x*x;
    }
};

int main()
{
    int ch=1,ch1;double a;
    shape *sh;triangle t;square s;circle c;
            while(ch)
            {
                cout<<"\n1.TRIANGLE\n2.SQUARE\n3.CIRCLE\n4.EXIT";
                        cin>>ch1;
                                 switch(ch1)
                                {
                                    case 1:sh=&t;
                                            sh->getdata();
                                            a=sh->area();
                                            cout<<"AREA  ::  "<<a<<endl;
                                           break;
                                    case 2:sh=&s;
                                            sh->getdata();
                                             a=sh->area();
                                            cout<<"AREA  ::  "<<a<<endl;
                                           break;
                                    case 3:sh=&c;
                                            sh->getdata();
                                             a=sh->area();
                                            cout<<"AREA  ::  "<<a<<endl;
                                           break;
                                    case 4:ch=0;break;
                                }
            }
}
