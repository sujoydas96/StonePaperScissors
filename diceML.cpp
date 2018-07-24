#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

using namespace std;

int c1=0,c2=0,c3=0;
string x1,x2,x3;

int reinforce(string,string);
int mind(string);

int main()
{
    cout<<"Enter your Choice: Rock(R), Paper(P) or Scissors(S)"<<endl;
    cout<<"Your answer: ";
    string player;
    getline(cin,player);
    mind(player);
    cout<<"PROCESSED....... Press any key to continue"<<endl;
    getch();
    system("CLS");
    main();
}

int reinforce(string player,string comp)                                                            // The rules of winning the game
{
         if(player=="rock" && comp=="rock") return 0;
    else if(player=="rock" && comp=="paper") return 1;
    else if(player=="rock" && comp=="scissors") return 0;

    else if(player=="paper" && comp=="rock") return 0;
    else if(player=="paper" && comp=="paper") return 0;
    else if(player=="paper" && comp=="scissors") return 1;

    else if(player=="scissors" && comp=="rock") return 1;
    else if(player=="scissors" && comp=="paper") return 0;
    else if(player=="scissors" && comp=="scissors") return 0;
}

int mind(string player)
{
    string comp;

    if(c1==1 && player=="rock")
        {
            comp=x1;
        }
    else if(c1==0 && player=="rock")
        {
            switch( rand()%3 ){
                case 0 :
                {
                    comp="rock";
                    c1=reinforce(player,comp);
                    if(c1==1)
                        x1="rock";

                break;
                }
                case 1 :
                {
                    comp="paper";
                    c1=reinforce(player,comp);
                    if(c1==1)
                        x1="paper";

                    break;
                }
                case 2:
                {
                    comp="scissors";
                    c1=reinforce(player,comp);
                    if(c1==1)
                        x1="scissors";

                    break;
                }
                default: break;
            }
        }

    else if(c2==1 && player=="paper")
    {
        comp=x2;

    }
    else if(c2==0 && player=="paper")
    {
        switch( rand()%3 ){
                case 0:
                {
                    comp="rock";
                    c2=reinforce(player,comp);
                    if(c2==1)
                        x2="rock";
                    break;
                }
                case 1:
                {
                    comp="paper";
                    c2=reinforce(player,comp);
                    if(c2==1)
                        x2="paper";
                    break;
                }
                case 2:
                {
                    comp="scissors";
                    c2=reinforce(player,comp);
                    if(c2==1)
                        x2="scissors";
                    break;
                }
                default: break;
        }
    }


    else if(c3==1 && player=="scissors")
    {
        comp=x3;

    }
    else if(c3==0 && player=="scissors")
    {
        switch( rand()%3 ){
                case 0:
                {
                    comp="rock";
                    c3=reinforce(player,comp);
                    if(c3==1)
                        x3="rock";
                    break;
                }
                case 1:
                {
                    comp="paper";
                    c3=reinforce(player,comp);
                    if(c3==1)
                        x3="paper";
                    break;
                }
                case 2:
                {
                    comp="scissors";
                    c3=reinforce(player,comp);
                    if(c3==1)
                        x3="scissors";
                    break;
                }
                default: break;
        }
    }

cout<<"Computer's answer : "<< comp <<endl;
}
