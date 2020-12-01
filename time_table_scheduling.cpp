#include<iostream>
#include<list>
#include<string>
using namespace std;

class exam_time_table_scheduling{

  private:


    int subjects;
    list <int> *l;


  public:


    exam_time_table_scheduling(int v){
      subjects = v;
      l=new list <int> [v];
    }


    void sub_code(){
        cout<<endl;
     cout<<endl<<"************************************ FIRST SEMESTER ***************************************"<<endl;
     cout<<" AP - 0 , MA - 1 , AC - 2 , BME - 3 , FEC - 4 "<<endl;
     cout<<endl<<"************************************ SECOND SEMESTER **************************************"<<endl;
     cout<<" OOPS - 5 , DS - 6 , DST - 7 , AE - 8 "<<endl;
     cout<<endl<<"************************************ THIRD SEMESTER ***************************************"<<endl;
     cout<<" TC - 9 , CN - 10 , OS - 11 "<<endl<<endl;
    }


    void add_edge(int x,int y,bool bidi){
     l[x].push_back(y);
     if(bidi){
        l[y].push_back(x);
     }
    }


    void print_list(){
      for(int i=0;i<subjects;i++){
        cout<<" "<<i<<" -> ";

        list<int>::iterator it=l[i].begin();
        for(it;it!=l[i].end();it++)
            cout<<*it<<",";
        cout<<endl;
      }
    }


     void exam_schedule(){

     int subs[12];


     subs[0]  = 0;


     for (int u = 1; u < 12; u++)
        subs[u] = -1;


     bool available[12];
     for (int cr = 0; cr < 12; cr++)
        available[cr] = false;


     for (int u = 1; u < 12; u++)
    {

        list<int>::iterator is;
        for (is = l[u].begin(); is != l[u].end(); ++is)
            if (subs[*is] != -1)
                available[subs[*is]] = true;


        int cr;
        for (cr = 0; cr < 12; cr++)
            if (available[cr] == false)
                break;

        subs[u] = cr;


        for (is = l[u].begin(); is != l[u].end(); ++is)
            if (subs[*is] != -1)
                available[subs[*is]] = false;
    }


          cout<<endl<<endl;
          cout<<"---------------------------------------------------------------------"<<endl;
          cout<<"                            DATE SHEET                               "<<endl;
          cout<<"---------------------------------------------------------------------"<<endl;
          cout<<"              DATE              |                SUBJECT CODE        "<<endl;
          cout<<"---------------------------------------------------------------------"<<endl;
    for (int u = 0; u < 12; u++){

     if(subs[u]==0)
        //system("COLOR 01");
        cout<<"           22-08-2020                              "<<u<<endl;
    }
    cout<<endl;
     for (int u = 0; u < 12; u++){
     if(subs[u]==1)
        //system("COLOR 02");
        cout<<"           25-08-2020                              "<<u<<endl;
     }
     cout<<endl;
      for (int u = 0; u < 12; u++){
     if(subs[u]==2)
        //system("COLOR 03");
        cout<<"           28-08-2020                              "<<u<<endl;
      }
      cout<<endl;
       for (int u = 0; u < 12; u++){
        if(subs[u]==3)
        //system("COLOR 04");
        cout<<"           2-09-2020                               "<<u<<endl;
       }
       cout<<endl;
        for (int u = 0; u < 12; u++){
     if(subs[u]==4)
        //system("COLOR 05");
        cout<<"           5-09-2020                               "<<u<<endl;
        }
        cout<<endl;
        for (int u = 0; u < 12; u++){
     if(subs[u]==5)
         //system("COLOR 06");
         cout<<"           8-09-2020                               "<<u<<endl;
        }
        cout<<endl;
         for (int u = 0; u < 12; u++){
     if(subs[u]==6)
        //system("COLOR 07");
        cout<<"           11-09-2020                              "<<u<<endl;
    }
    cout<<"---------------------------------------------------------------------"<<endl;
    cout<<endl;

}
  void check_your_date(int code){

      if(code==0 || code==9){
    system("COLOR 01");
    cout<<endl<<"                 YOUR EXAM DATE IS  22-08-2020 "<<endl;
  }

      if(code==1){
    system("COLOR 02");
    cout<<endl<<"                 YOUR EXAM DATE IS  25-08-2020 "<<endl;
  }

      if(code==2 || code==10){
    system("COLOR 03");
    cout<<endl<<"                 YOUR EXAM DATE IS  28-08-2020 "<<endl;
  }

      if(code==3 || code==5 || code==11){
    system("COLOR 04");
    cout<<endl<<"                 YOUR EXAM DATE IS  02-08-2020 "<<endl;
  }

      if(code==4 || code==6){
    system("COLOR 05");
    cout<<endl<<"                 YOUR EXAM DATE IS  05-08-2020 "<<endl;
  }

      if(code==7){
    system("COLOR 06");
    cout<<endl<<"                 YOUR EXAM DATE IS  08-08-2020 "<<endl;
  }

      if(code==8){
    system("COLOR 08");
    cout<<endl<<"                 YOUR EXAM DATE IS  11-08-2020 "<<endl;
  }
}

};



int main()
{

   exam_time_table_scheduling etts(12);

   etts.add_edge(0,1,true);
   etts.add_edge(0,2,true);
   etts.add_edge(0,3,true);
   etts.add_edge(0,4,true);
   etts.add_edge(0,5,true);
   etts.add_edge(0,6,true);
   etts.add_edge(0,7,true);
   etts.add_edge(0,8,true);
   etts.add_edge(1,2,true);
   etts.add_edge(1,3,true);
   etts.add_edge(1,4,true);
   etts.add_edge(1,5,true);
   etts.add_edge(1,6,true);
   etts.add_edge(1,7,true);
   etts.add_edge(1,8,true);
   etts.add_edge(1,9,true);
   etts.add_edge(1,10,true);
   etts.add_edge(1,11,true);
   etts.add_edge(2,3,true);
   etts.add_edge(2,4,true);
   etts.add_edge(2,5,true);
   etts.add_edge(2,6,true);
   etts.add_edge(2,7,true);
   etts.add_edge(2,8,true);
   etts.add_edge(3,4,true);
   etts.add_edge(5,6,true);
   etts.add_edge(5,7,true);
   etts.add_edge(5,8,true);
   etts.add_edge(6,7,true);
   etts.add_edge(6,8,true);
   etts.add_edge(7,8,true);
   etts.add_edge(7,9,true);
   etts.add_edge(7,10,true);
   etts.add_edge(7,11,true);
   etts.add_edge(9,10,true);
   etts.add_edge(9,11,true);
   etts.add_edge(10,11,true);


    etts.print_list();

   cout<<"*******************************************************************"<<endl;
   cout<<" 1. SHOW EXAM CODE "<<endl;
   cout<<" 2. SHOW EXAM SCHEDULE "<<endl;
   cout<<" 3. CHECK YOUR EXAM DATE "<<endl;
   cout<<" 4. MESSAGE FROM DEAN "<<endl;
   cout<<" 5. EXIT "<<endl;
   cout<<"*******************************************************************"<<endl<<endl;


 int  choice,cod;
 do{

    cout<<endl<<" Enter choice : ";
    cin>>choice;

    switch(choice){

    case 1 : {
               system("COLOR 07");
               cout<<"                              CODES ARE BEING DISPLAYED"<<endl;
               etts.sub_code();
               cout<<endl;
               break;
             }
    case 2 : {
               system("COLOR 07");
               cout<<"                         YOUR EXAM SCHEDULE IS VISIBLE BELOW"<<endl;
               etts.exam_schedule();
               cout<<endl;
               break;
             }

    case 3 : {
              cout<<endl<<"          Enter your Subject Code : ";
              cin>>cod;cout<<endl;
              etts.check_your_date(cod);
              cout<<endl<<"                 BEST OF LUCK "<<endl;
              cout<<endl;
              break;
             }
    case 4 : {
              system("COLOR 07");
              cout<<endl<<endl<<"     Best luck for your forthcoming examination. Stop worrying and start doing your best"<<endl;
              cout<<"     show everyone that you know everything! You are prepared for this exam, no need to be worried.  "<<endl<<endl<<endl;
              break;
             }

    }


 }while(choice!=5);





   return 0;
}
