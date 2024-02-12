//Q:1  Delcare person 10 structure and read its values from user and then print it?
#include<iostream>
using namespace std;
struct student 
{
		char name[50];
    	int roll_num;
        float marks;
		
}S[05];
int main()
{
	
	    cout<<"Enter the student information :"<<endl;
	    for(int i=0;i<10;++i)
		{
	    	S[i].roll_num = i+1;
	    cout<<"Information for roll number :"<<S[i].roll_num<<endl;
	    
	    cout<<"Enter name :"<<endl;
	    cin>>S[i].name;
	    
	    cout<<"Enter marks :"<<endl;
	    cin>>S[i].marks;
	    }
       cout<<endl;
	
    cout<<"Displaying information of student :"<<endl;
        for(int i=0;i<10;++i){
	
        cout<<"  Roll number :\t"<<
	(i + 1)<<endl;
        cout<<"  Name  :"<<
	S[i].name<<endl;
        cout<<"  Marks :"<<
	S[i].marks<<endl;

     }
return 0;
}