//Q:Take value from user that print the marks sheet with percentage in table form?

#include<iostream>
using namespace std;
int main()
{
	int Eng,Isl,Pstd,Urdu,Math,Phy,Comp;
	int tot=560,obt=450;
	float Total=560, Obtained=450;
	float per;
    const int totengmark=100,totislmark=50,totpstdmark=50,toturdumark=100,
	totmathmark=100,totphymark=85,totcompmark=75;
		
	cout<<"Please enter English marks"<<endl;
	cin>>Eng;
	cout<<"Please enter Islamiat marks"<<endl;
	cin>>Isl;
	cout<<"please enter Pakistan studies marks"<<endl;
	cin>>Pstd;
	cout<<"please enter Urdu marks"<<endl;
	cin>>Urdu;
	cout<<"please enter Mathematics marks"<<endl;
	cin>>Math;
	cout<<"please enter Phyics marks"<<endl;
	cin>>Phy;
	cout<<"please enter Computer science"<<endl;
	cin>>Comp;
	
	
	cout<<"  \t\tSubject(s)\t  Max.\t\tMarks\t\tPass/"<<endl;
	cout<<"  \t\t\t\t  Marks\t\tObtained\tFail"<<endl;
	cout<<" 1\tENGLISH   \t\t   "<<totengmark;
	cout<<"\t\t  "<<Eng;
	cout<<"\t\tPass"<<endl;
	
	cout<<" 2\tISLAMIC EDUCATION  \t   "<<totislmark;
	cout<<"\t\t  "<<Isl;
	cout<<"\t\tPass"<<endl;
	
	cout<<" 3\tPAKISTAN STUDIES  \t   "<<totpstdmark;
	cout<<"\t\t  "<<Pstd;
	cout<<"\t\tPass"<<endl;
	
	cout<<" 4\tURDU  \t\t\t   "<<toturdumark;
	cout<<"\t\t  "<<Urdu;
	cout<<"\t\tPass"<<endl;
	
	cout<<" 5\tMATHEMATICS  \t\t   "<<totmathmark;
	cout<<"\t\t  "<<Math;
	cout<<"\t\tPass"<<endl;
	
	cout<<" 6\tPHYSICS  \t\t   "<<totphymark;
	cout<<"\t\t  "<<Phy;
	cout<<"\t\tPass"<<endl;
	
	cout<<" 7\tCOMPUTER SCIENCE  \t   "<<totcompmark;
	cout<<"\t\t  "<<Comp;
	cout<<"\t\tPass"<<endl;
	
	cout<<"  \t"<<endl;
	
	cout<<"Total Marks \t    Obtained Marks \t    Percentage \t\t "<<endl;
	cout<<"   "<<tot;
	cout<<"\t\t\t  "<<obt;
	
	per=Obtained/Total*100;
	//per=Obtained/Total*100=450/560*100=80.357%
	cout<<"\t\t    Per=Obtained/Total*100="<<Obtained/Total<<"*100"<<endl;
	cout<<"\t\t\t\t\t    ="<<per<<"%"<<endl;
	
	
	return 0;
	
}
	
	
	




