#include<bits/stdc++.h>
using namespace std;

class book
{

    char *title,*auth,*pub;
    int price,stock;

    public:int bks;
            static int s,u;
            book()
            {
              char *t,*a,*p;
              t=new char[1];
              a=new char[1];
              p=new char[1];
              cout<<"\nEnter Title of Book:: ";
                        cin>>t;
              cout<<"\nEnter Author name :: ";
                    cin>>a;
              cout<<"\nEnter Publisher name:: ";
                    cin>>p;
                      title=new char[strlen(t)+1];
                      auth=new char[strlen(a)+1];
                      pub=new char[strlen(p)+1];
                      strcpy(title,t);
                      strcpy(auth,a);
                      strcpy(pub,p);
                      delete(a);delete(t);delete(p);

            cout<<"\n";
            cout<<"Enter the PRICE of book  :";
            cin>>price;
            cout<<"\n";
            cout<<"Enter the AVAILABLE STOCK of book  :";
            cin>>stock;
            cout<<"\n";

            }


                void showdata()
                {
                   cout<<title<<"  \t  ";
                    cout<<auth<<" \t    ";
                    cout<<pub<<" \t    ";
                     cout<<price<<"  \t\t ";
                    cout<<stock;
                    cout<<"\n------------------------------------------------------------------------------\n";
                }



                                void modification()
                                    {
                                        int ch;


                                        cout<<"\n **********************************************************\n";
                                        cout<<"1.Update the complete details\n";
                                        cout<<"2.Update the specific details\n Enter your Choice::";
                                        cout<<"\n***********************************************************\n";
                                        cin>>ch;

                                        switch(ch)
                                            {
                                                        case 1:
                                                        cout<<"\n  Title of Book:: \n";
                                                        cout<<title;
                                                        cout<<"    author  of Book:: ";
                                                        cout<<auth;
                                                        cout<<"     publisher of Book:: ";
                                                        cout<<pub;
                                                        cout<<"     PRICE of book  :: ";
                                                        cout<<price;
                                                        cout<<"     AVAILABLE STOCK of book :: ";
                                                        cout<<stock;
                                                        cout<<"\n------------------------------------------------------------------------------\n";

                                                    case 2:
                                                            int position;

                                                            cout<<"\n 1.Title of Book::  ";
                                                            cout<<"\n 2.author  of Book::";
                                                            cout<<"\n 3.publisher of Book:: ";
                                                            cout<<"\n 4.PRICE of book  ";
                                                            cout<<"\n 5.Stock of book  ";
                                                            cout<<"\nWhat you want to Modify??";
                                                            cin>>position;

                                                            switch(position)
                                                                {
                                                                            case 1:
                                                                                    cout<<"\n  Title of Book:: \n";
                                                                                      cin>>title;
                                                                                    break;
                                                                            case 2:
                                                                                    cout<<"    author  of Book:: ";
                                                                                    cin>>auth;
                                                                                    break;
                                                                            case 3:
                                                                                    cout<<"     publisher of Book:: ";
                                                                                    cin>>pub;
                                                                                    break;
                                                                            case 4:
                                                                                    cout<<"     PRICE of book  :: ";
                                                                                    cin>>price;
                                                                                    break;
                                                                            case 5:
                                                                                    cout<<"     Stock of book  :: ";
                                                                                    cin>>price;
                                                                                    break;
                                                                            default:
                                                                                    cout<<"\n SIR YOUR CHOICE IS WRONG ";
                                                                }
                                                                break;
                                                    default:
                                                            cout<<"\n SIR YOUR CHOICE IS WRONG ";
                                                }
                                    }



                            char *rtitle()
                            {return title;}

                      void  purchase()
                    {
                        cout<<"ENTER THE QUANTITY OF BOOKS";
                        cin>>bks;
                        if(bks>stock)
                        {
                            cout<<"\n UNSUCCESSFUL TRANSACTION \n";

                            u++;
                        }
                        else
                           {   int pp=bks*price;
                               cout<<"payement == ";
                               cout<<pp<<endl;
                               cout<<"\n SUCCESSFUL TRANSACTION \n";
                             s++;  stock-=bks;
                           }

                    }


};

int book::s;
int book::u;


int main()
{
            int i,ch,books,j=0,m=0,flag,p;char check[100];;

            int ch1;
            book *w[31];
        do
            {
                    cout<<"\n1.Enter Details   \n2.Display Detail    \n3.Display Specific Book Detail \n";
                    cout<<"4.Update Detail  \n5.purchage \n6.transaction\n7.EXIT \n";
                    cout<<"Enter Choice::";
                    cin>>ch1;
                    switch(ch1)
                            {
                                case 1:cout<<"Enter the No. of Books ::";
                                        cin>>books;
                                        for(i=j;i<books+j;i++)
                                        {flag=0;
                                            cout<<"\n::";
                                            w[i]=new book;


                                            for(int k=0;k<i;k++)
                                             {
                                                 if(!strcmp(w[k]->rtitle(),w[i]->rtitle()))
                                                 {
                                                   flag=1;
                                                    break;
                                                }
                                            }
                                           if(flag==0)
                                             {

                                             }
                                            else
                                            {
                                            cout<<"Details already present\n";
                                            --i;
                                              }


                                         }
                                        j+=books;

                                        break;
                            case 2:cout<<"\nTittle---------Author-----------Publisher------------Price ------------Stock\n";

                                    for(i=0;i<j;i++)
                                    {
                                    w[i]->showdata();
                                    cout<<"\n";
                                    }

                                    break;
                           case 3:flag=0;
                                    char check[100];
                                    cout<<"\nEnter book whose data you want to see::";
                                    cin>>check;
                                    for(i=0;i<j;i++)
                                    {
                                 if(!strcmp(check,w[i]->rtitle()))
                                    {
                                        flag=1;
                                        break;
                                    }
                                    }
                                    if(flag==0)
                                    {
                                    cout<<"\n For this Book no data found  \n";
                                    }
                                    else
                                    {
                                    cout<<"\nTite-----Author------Publisher--------Price -------Stock\n";
                                    w[i]->showdata();
                                    }
                                    break;
                            case 4:
                                    char add[100];
                                    cout<<"\nEnter Book title whose data you want to modify::";
                                    cin>>add;

                                    for(p=0;p<books;p++)
                                    {
                                        if(!strcmp(w[p]->rtitle(),add))
                                            {
                                                m=1;
                                                break;
                                            }
                                    }
                                    if(m==1)
                                    w[p]->modification();
                                    else
                                        cout<<"Book for this tittle does not exit ";
                                    break;

                      case 5:  cout<<"Enter the tittle of Book :: \n";
                               cin>>check;
                               flag=0;
                                for(i=0;i<j;i++)
                                    {
                                 if(!strcmp(check,w[i]->rtitle()))
                                    {
                                        flag=1;
                                        break;
                                    }
                                    }
                                    if(flag==0)
                                    {
                                    cout<<"\n For this Book no detail found  \n";
                                    book::u++;
                                    }
                                    else
                                    {

                                    w[i]->purchase();
                                    }
                                   break;
                        case 6:
                                cout<<"\n total successfull transcation ::   ";
                                cout<<book::s;
                                cout<<"\ntotal unsuccessfull transcation ::";
                                cout<<book::u; break;
                        default:cout<<" thankyou";
                        }


            }while(ch1!=7);
  return 0;
}


