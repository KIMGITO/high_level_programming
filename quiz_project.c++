
#include <iostream>
#include <string>
#include <cstring>
#include <conio.h>
#include <math.h>
 using namespace std;
 


 int main(){
   textcolor(GREEN);

    string name;
    int count;
    char selected[5];
    char answer;
    int select;
    string quizs[5] = {
      "Which is the smallest county in kenya","Who was the 3rd president of kenya",
      "Who among this people has ever been a governor and a chairman COG in kenya",
      "When do kenyans cerebrate their madaraka day","Select my name"
    };

   string multiples[5][4] = {
      {"Uasin Gishu","Embu","Nyeri","Nairobi"},
      {"Jomo kenyatta","Mwai Kibaki","Samuei Ruto","John Waluke"},
      {"Martin Wabora","David Chirchir","Frend Matian'i","Non of the above"},
      {"1st January","12 December","20 June","25 December"},
      {"Dennis","John","Daniel","Collins"}
   };

   int answers[5] = {4,2,1,2,1};

    cout<<"THIS PROGRAM IS FOR TEST CREATION AND ANSWER REVIEW built in C++";
    cout<<"\n\n\t\tWhats your name\t\t";
        textcolor(RED);
    getline(cin,name);
    textcolor(GREEN);
    cout<<"\n\tSo "<<name<<", we are going to build a project for MCQ\n\n";

   int x,y;
   for(x =1;x <=5;x++){
      textcolor(9);
      cout<<"\n\n"<<x<<"."<<quizs[x-1]<<"?";
      
      y = 0;
         while(y < 4){
            cout<<endl<<"\t";textcolor(6);cout<<char(65+y)<<". ";textcolor(10);cout<<multiples[x-1][y];
            y++;
         }
         cout<<"\t";
         textcolor(13);
         cin>>answer;
         
         answer = toupper(answer);
       

         if(answer < 65 || int(answer) > 68){
            textcolor(RED);
            cout<<"\n\n\t\tANSWER ENTERED IS INVALID!\n\n";
           return 0;
         }
         selected[x-1] = answer;

   }
   char option;
   cout<<"Do you want to review?\n\tY-yes          N-no";
   cin>>option;

   if(option == 'Y'||'y'){
         cout<<"\n\n\t\t\t***************";
         cout<<"\n\t\t\t*** REVIEW  ***";
         cout<<"\n\t\t\t***************\n";

         textcolor(7);
         cout<<"\t\tno     selected     correct\n";
         for(x = 0;x<5;x++){
            select = answers[x]-1;
            cout<<"\t\t"<<x+1<<"       ";textcolor(3);cout<<selected[x]<<"\t       ";textcolor(15);cout<<char(65+select)<<"\n";
            if(selected[x] == char(65+select)){
               count++;
            }
         }
   }

            cout<<"\n\n\tNAME\t\t    SCORES\t\t       COMMENT";
            cout<<"\n\t"<<name;textcolor(6);cout<<"\t\t\t"<<count<<"/5";if(count<4){textcolor(RED);cout<<"\t\t\tFAIL";}else{textcolor(GREEN);cout<<"\t\t\tPASS\n\n";}
   


 

   // textcolor(3);
   // for(y = 0;y<5;y++){
   //    cout<<selected[y]<<endl;
   // }
 }
 



 

