#include<bits/stdc++.h>
using namespace std;
template<class t,int x,int y>
class matrix
{
    t m1[x][y];
    t m2[x][y];
    t m3[x][y];
    public:
    void getdata()
    {
        cout<<"Enter the numbers of element of  Matrix\n"<<endl;
        for(int i=0;i<x;i++)
            for(int j=0;j<y;j++)
            cin>>m1[i][j];
        cout<<"Enter the numbers of element of  Second Matrix\n"<<endl;
        for(int i=0;i<x;i++)
            for(int j=0;j<y;j++)
            cin>>m2[i][j];
    }
    void showdata()
    {
        cout<<" Matrix ::\n"<<endl;
        for(int i=0;i<x;i++){
            for(int j=0;j<y;j++)
            cout<<m3[i][j]<<" ";cout<<endl;}
    }
    void sum()
    {
        for(int i=0;i<x;i++)
            for(int j=0;j<y;j++)
            m3[i][j]=m1[i][j]+m2[i][j];
    }
    void sub()
    {
        for(int i=0;i<x;i++)
            for(int j=0;j<y;j++)
            m3[i][j]=m1[i][j]-m2[i][j];
    }
    void multi()
    {
        for(int i=0;i<x;i++)
            for(int j=0;j<y;j++)
            m3[i][j]=m1[i][j]+m2[i][j];
    }
};


int main()
{
    int conti=1,ch,ch1=1,a,b;
    while(conti)
    {
    cout<<"\n1.INT\n2.FLOAT\n3.EXIT\n";
    cin>>ch;
            switch(ch)
            {
                case 1: while(ch1<4){
                        cout<<"\n1.ADDITION\n2.SUBSTRACTION\n3.MULTIPLICATION\n4.EXIT"<<endl;
                        matrix<int ,3, 3> mi;
                        cin>>ch1;
                                 switch(ch1)
                                {
                                    case 1:mi.getdata();
                                           mi.sum();
                                           mi.showdata();
                                           break;
                                    case 2:mi.getdata();
                                           mi.sub();
                                           mi.showdata();
                                           break;
                                    case 3:mi.getdata();
                                           mi.multi();
                                           mi.showdata();
                                           break;
                                    case 4:ch1=4;break;
                                }
                           }
                               break;
                case 2:while(ch1<4){
                        cout<<"\n1.ADDITION\n2.SUBSTRACTION\n3.MULTIPLICATION\n4.EXIT";
                        matrix<float ,3,3> mf;
                        cin>>ch1;
                                 switch(ch1)
                                {
                                    case 1:mf.getdata();
                                           mf.sum();
                                           mf.showdata();
                                           break;
                                    case 2:mf.getdata();
                                           mf.sub();
                                           mf.showdata();
                                           break;
                                    case 3:mf.getdata();
                                           mf.multi();
                                           mf.showdata();
                                           break;
                                    case 4:ch1=5;
                                }
                             }
                        break;
               case 3:conti=0;
            }
    }



}
