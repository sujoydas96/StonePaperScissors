#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<string>

using namespace std;

void check(string inp,string answer)
{
    if(inp.compare("Rock")==0)
    {
        for(int i=0;i<3;i++)
        {
            if(answer.compare("Rock")==0)
            {
                ans[0][i]=ans[0][i]+1;
                if(var<=100)
                {
                    ans[0][i]=ans[0][i]-1;
                    ans[0][i]=ans[0][i]-1; 
                }
            }
            else if(answer.compare("Paper")==0)
            {
                ans[0][i]=ans[0][i]+1;
                if(var<=100)
                {
                    ans[0][i]=ans[0][i]-1;
                    ans[0][i]=ans[0][i]-1; 
                }
            }
            else if(answer.compare("Scissors")==0)
            {
                ans[0][i]=ans[0][i]+1;
                if(var<=100)
                {
                    ans[0][i]=ans[0][i]-1;
                    ans[0][i]=ans[0][i]-1; 
                }
            }
            
        }
    }

    if(inp.compare("Paper")==0)
    {
       for(int i=0;i<3;i++)
        {
            if(answer.compare("Rock")==0)
            {
                ans[1][i]=ans[1][i]+1;
                if(var<=100)
                {
                    ans[1][i]=ans[1][i]-1;
                    ans[1][i]=ans[1][i]-1; 
                }
            }
            else if(answer.compare("Paper")==0)
            {
                ans[1][i]=ans[1][i]+1;
                if(var<=100)
                {
                    ans[1][i]=ans[1][i]-1;
                    ans[1][i]=ans[1][i]-1; 
                }
            }
            else if(answer.compare("Scissors")==0)
            {
                ans[1][i]=ans[1][i]+1;
                if(var<=100)
                {
                    ans[1][i]=ans[1][i]-1;
                    ans[1][i]=ans[1][i]-1; 
                }
            }
            
        } 
    }

    if(inp.compare("Scissors")==0)
    {
       for(int i=0;i<3;i++)
        {
            if(answer.compare("Rock")==0)
            {
                ans[2][i]=ans[2][i]+1;
                if(var<=100)
                {
                    ans[2][i]=ans[2][i]-1;
                    ans[2][i]=ans[2][i]-1; 
                }
            }
            else if(answer.compare("Paper")==0)
            {
                ans[2][i]=ans[2][i]+1;
                if(var<=100)
                {
                    ans[2][i]=ans[2][i]-1;
                    ans[2][i]=ans[2][i]-1; 
                }
            }
            else if(answer.compare("Scissors")==0)
            {
                ans[2][i]=ans[2][i]+1;
                if(var<=100)
                {
                    ans[2][i]=ans[2][i]-1;
                    ans[2][i]=ans[2][i]-1; 
                }
            }
            
        } 
    }
    
var++;    
}

string GenAnswer(int i)
{
    if(i==0)return "Rock";
    else if(i==1)return "Paper";
    else if(i==2)return "Scissors";
    else return "Error... Failed to generate Answer\n"; 
}

string result(string inp)//return the answer after computing the highest element in the row
{   
    int max;
    int i=0;
    string answer;
    if(inp.compare("Rock")!=0)
    {
        max=ans[0][i];
        for(i=0;i<3;i++)
        {
            if(max>ans[0][i]) max=ans[0][i];
        }
        answer=GenAnswer(i-1);
    }
    else if(inp.compare("Paper")!=0)
    {
        max=ans[1][i];
        for(i=0;i<3;i++)
        {
            if(max>ans[1][i]) max=ans[1][i];
        }
        answer=GenAnswer(i-1);

    }
    else if(inp.compare("Scissors")!=0)
    {
        max=ans[2][i];
        for(i=0;i<3;i++)
        {
            if(max>ans[2][i]) max=ans[2][i];
        }
        answer=GenAnswer(i-1);
    }
    else 
    cout<<"Failed to Compute"<<endl;
    check(inp,answer);
}


int ans[3][3];
int var=0;
int main()
{
    string inp;
    int a=0;
    
    //check function for checking the answers,
    do
    {
        system("CLS");
        cout<<"Your Turn:(Rock, Paper or Scissors) "<<endl;
        getline(cin,inp);
        cout<<"\nComputer output: "<<result(inp)<<endl;
        cout<<"press 1 to continue again\n"<<endl;
        cin>>a;
    }
    while(a);
return 0;
}    
    
