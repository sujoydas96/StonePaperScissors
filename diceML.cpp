#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<string>

using namespace std;

int ans[3][3]={{0,0,0},{0,0,0},{0,0,0}};
int var=0;

void check(string inp,string answer);
string GenAnswer(int i);
string result(string inp);

int main()
{
    string inp;
    int a=0;
    
    do
    {
        system("CLS");
        cout<<"\nYour Turn:(Rock, Paper or Scissors) "<<endl;
        getline(cin,inp);
        cout<<"\nComputer output: "<<result(inp)<<endl;
        cout<<"press 1 to continue again\n"<<endl;
        cin>>a;
    }
    while(a);
return 0;
}    

string result(string inp)//return the answer after computing the highest element in the row
{   
    int max;
    int i=0;
    int index=0;
    string answer;

    if(inp.compare("Rock")==0)
    {
        max=ans[0][i];
        for(i=0;i<3;i++)
        {
            if(max<ans[0][i])
            {
               max=ans[0][i]; 
               index=i;
            } 
        }
    }
    else if(inp.compare("Paper")==0)
    {
        max=ans[1][i];
        for(i=0;i<3;i++)
        {
            if(max<ans[1][i])
            {
               max=ans[1][i];
               index=i; 
            } 
        }
    }
    else if(inp.compare("Scissors")==0)
    {
        max=ans[2][i];
        for(i=0;i<3;i++)
        {
            if(max<ans[2][i])
            {
                max=ans[2][i];
                index=i;
            } 
        }
    }
    else 
    cout<<"Failed to Compute"<<endl;
    answer=GenAnswer(index);
    if(var<=100)
    {
        check(inp,answer);          
    }
    return answer;
}

string GenAnswer(int index)
{
    if(index==0)return "Rock";
    else if(index==1)return "Paper";
    else if(index==2)return "Scissors";
    else return "Error... Failed to generate Answer\n"; 
}  

void check(string inp,string answer)
{
    if(inp.compare("Rock")==0)
    {
        if(answer.compare("Rock")==0)
        {
            ans[0][0]=ans[0][0]-1;
        }
        else if(answer.compare("Paper")==0)
        {
            ans[0][1]=ans[0][1]+1;
        }
        else if(answer.compare("Scissors")==0)
        {
            ans[0][2]=ans[0][2]-1;
        }
    }

    if(inp.compare("Paper")==0)
    {
       
        if(answer.compare("Rock")==0)
        {
            ans[0][0]=ans[0][0]-1;
        }
        else if(answer.compare("Paper")==0)
        {
            ans[0][1]=ans[0][1]-1;
        }
        else if(answer.compare("Scissors")==0)
        {
            ans[0][2]=ans[0][2]+1;
        }
    }

    if(inp.compare("Scissors")==0)
    {
       
        if(answer.compare("Rock")==0)
        {
            ans[0][0]=ans[0][0]+1;
        }
        else if(answer.compare("Paper")==0)
        {
            ans[0][1]=ans[0][1]-1;
        }
        else if(answer.compare("Scissors")==0)
        {
            ans[0][2]=ans[0][2]-1;
        } 
    }
    
var++;    
}
