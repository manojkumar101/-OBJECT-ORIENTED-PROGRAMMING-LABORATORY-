//ASSIGNMENT NO. 1
#include<bits/stdc++.h>
using namespace std;

class weather
{
    int day,lowtemp,hightemp;
    float amt_snow,amt_rain;

    public:
            weather()
            {
              day=0;
              lowtemp=0;
              hightemp=0;
              amt_rain=0;
              amt_snow=0;
            }

                void enterday()
                {
                    cin>>day;
                }
                int returnday()
                {
                    return day;
                }

                void getdata()
                {
                    cout<<"\nEnter High Temp:: ";
                        cin>>hightemp;
                    cout<<"\nEnter Low Temp:: ";
                    cin>>lowtemp;
                    cout<<"\nEnter Amount of Rain:: ";
                    cin>>amt_rain;
                    cout<<"\nEnter Amount of Snow:: ";
                    cin>>amt_snow;
                }

                void showdata()
                {
                    cout<<"  High Temp:: ";
                    cout<<hightemp;
                    cout<<"    Low Temp:: ";
                    cout<<lowtemp;
                    cout<<"     Amount of Rain:: ";
                    cout<<amt_rain;
                    cout<<"     Amount of Snow:: ";
                    cout<<amt_snow;
                    cout<<"\n------------------------------------------------------------------------------\n";
                }



                                void modification()
                                    {
                                        int ch;
cout<<"\n **********************************************************\n";
                                        cout<<" 1. Modification of the complete data\n";
                                        cout<<"2.Modify specific data\n Enter your Choice::";
cout<<"\n***********************************************************\n";
                                        cin>>ch;

                                        switch(ch)
                                            {
                                                        case 1:
                                                                cout<<"ENTER THE DAY::";
                                                                cin>>day;
                                                                cout<<"Enter New High Temp::";
                                                                cin>>hightemp;
                                                                cout<<"Enter New Low Temp::";
                                                                cin>>lowtemp;
                                                                cout<<"Enter New Amount of Rain::";
                                                                cin>>amt_rain;
                                                                cout<<"Enter The New Amount of Snow::";
                                                                cin>>amt_snow;
                                                                break;

                                                    case 2:
                                                            int position;

                                                            cout<<"\n 1.High Temp ";
                                                            cout<<"\n 2.Low Temp ";
                                                            cout<<"\n 3.Amount of snow ";
                                                            cout<<"\n 4.Amount of Rain ";
                                                            cout<<"\nWhat you want to Modify??";
                                                            cin>>position;

                                                            switch(position)
                                                                {
                                                                            case 1:
                                                                                    cout<<"\n Enter the New High Temp::";
                                                                                    cin>>hightemp;
                                                                                    break;
                                                                            case 2:
                                                                                    cout<<"\n Enter the New Low Temp::";
                                                                                    cin>>lowtemp;
                                                                                    break;
                                                                            case 3:
                                                                                    cout<<"\n Enter the New Amount of Rain::";
                                                                                    cin>>amt_rain;
                                                                                    break;
                                                                            case 4:
                                                                                    cout<<"\n Enter the New Amount of Snow::";
                                                                                    cin>>amt_snow;
                                                                                    break;
                                                                            default:
                                                                                    cout<<"\n SIR YOUR CHOICE IS WRONG ";
                                                                }
                                                                break;
                                                    default:
                                                            cout<<"\n SIR YOUR CHOICE IS WRONG ";
                                                }
                                    }

                            int returnhightemp()
                            {
                                return hightemp;
                                }

                            int returnlowtemp()
                            {return lowtemp;}
                            float returnrain()
                            {return amt_rain;}
                            float returnsnow()
                            {return amt_snow;}
                            int deletedata()
                            {hightemp=0;lowtemp=0;amt_snow=0;amt_rain=0;

                            }
};
int main()
{            int i,ch,days,flag1=0,j=0,d,flag=0,m=0;
             int avg1,avg2,avg3,avg4;
            int ch1;
             weather w[31];
        do
            { cout<<"\n1.Enter Data    \n2.Display Data    \n3.Display Specific Data\n";
                    cout<<"4.Modify Data  \n5.Delete Data \n6.Monthly Report\n7.EXIT \n";
                    cout<<"Enter Choice::";
                    cin>>ch1;
                    cout<<"\n--------------------------------------------------------------------------\n";

                        switch(ch1)
                            {
                                case 1:cout<<"Enter the No. of Days::";
                                        cin>>days;
                                        for(i=j;i<days+j;i++)
                                        {
                                            flag1=0;
                                            d=i;
                                            cout<<"\nDay::";
                                            w[i].enterday();
                                            for(int k=0;k<d;k++)
                                                {
                                                    if(w[i].returnday()==w[k].returnday())
                                                    {
                                                    cout<<"Data already present";
                                                    flag1=1;
                                                    i--;
                                                    break;
                                                    }

                                                }
                                        if(flag1==0)
                                            {
                                                w[w[i].returnday()].getdata();
                                            }

                                        }
                                        j+=days;

                                        break;
                            case 2:
                        cout<<"\nDay-----HighTemp----------LowTemp--------Amt of Rain----------Amt of Snow\n";
                                    cout<<"------------------------------------------------------------------------------\n";
                                    for(i=0;i<j;i++)
                                    {
{
                                            cout<<w[i].returnday()<<" ";
                                    w[w[i].returnday()].showdata();
                                    cout<<"\n";}
                                    }
break;
                            case 3:
                                    flag=0;int check;
                                    cout<<"\nEnter Day whose data you want to see::";
                                    cin>>check;
                                    for(i=0;i<j;i++)
                                    {
                                    if(check==w[i].returnday())
                                    {
                                        flag=1;
                                        break;
                                    }
                                    }
                                    if(flag==0)
                                    {
                                    cout<<"\n For this day no data found  \n";
                                    }
                                    else
                                    {
                                    cout<<"\n HighTemp--------LowtempT---------Amt of Rain--------Amt of Snow\n";
                                    w[check].showdata();
                                    }

                                    break;
                            case 4:
                                    int add;
                                    cout<<"\nEnter Day whose data you want to modify::";
                                    cin>>add;

                                    for(int p=0;p<days;p++)
                                    {
                                        if(w[p].returnday()==add)
                                            m=1;
                                    }
                                    if(m==1)
                                    w[add].modification();
                                    else
                                        cout<<"day does not exit ";
                                    break;

                            case 5:int del;
                                    cout<<"Data of which day you want to delete??\n";
                                    cin>>del;
                                    flag=0;
                                    for(i=0;i<j;i++)
                                    {
                                    if(del==w[i].returnday())
                                    {
                                        flag=1;
                                        w[del].deletedata();

                                        cout<<"\n  Data Deleted!!!\n";
            		                  break;
				                    }
                                    }
                                    if(flag==0)
                                    {
                                    cout<<"\n   No Data for day "<<del<<" is present!!!!\n";
                                    }

                                    break;
                         case 6:
                                    for(i=0;i<j;i++)
                                    {
                                                avg1+=w[w[i].returnday()].returnhightemp();
                                                avg2+=w[w[i].returnday()].returnlowtemp();
                                                avg3+=w[w[i].returnday()].returnrain();
                                                avg4+=w[w[i].returnday()].returnsnow();
                                    }
                                    avg1=avg1/j;
                                    avg2=avg2/j;
                                    avg3=avg3/j;
                                    avg4=avg4/j;
                                    cout<<"AVERAGE:\n";
                                    cout<<"HIGHTEMP="<<avg1<<"\t LOWTEMP="<<avg2<<"\t RAIN="<<avg3<<"\n SNOW = "<<avg4<<endl;

                                 break;
                        default:cout<<" thankyou";
                        }
}while(ch1!=7);
  return 0;
}


