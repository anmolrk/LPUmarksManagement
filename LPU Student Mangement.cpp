#include<iostream>
#include<conio.h>
using namespace std;
void cgpa();
void attendance();
void etemark();
int main()
{
	int option, temp;
	char i='Y',chtemp;
	cout<<"WELCOME IN LPU STUDENT MANAGEMENT";
	cout<<"\n---------------------------------";
	while(i!='n'&&i!='N')
	{
		int j=1;
		cout<<"\nChoose the below three option";
		cout<<"\n\t1. CGPA Calculator\n\t2. Marks Prediction\n\t3. Attendance Manager";
		cout<<"\nWaiting...\t\t";
		
		while(j!=0)
		{
			cin>>temp;
			if(temp==1||temp==2||temp==3)
			{
				option=temp;
				j=0;
			}	
			else
			{
				cout<<"Please choose valid option in between 1 to 3\n";
			}
		}
		switch(option)
		{
			case 1:
				cout<<"\n1. CGPA Calculator\n"<<"===============================================================\n";
				cgpa();
				break;
			case 2:
				cout<<"\n2. Marks Prediction\n"<<"===============================================================\n";
				etemark();
				break;
			case 3:
				cout<<"\n3. Attendane Manager\n"<<"===============================================================\n";
				attendance();
				break;
		}
		cout<<"\nRUN AGAIN??"<<endl<<"Press Y(Yes)to N(No)";
		j=1;
		while(j!=0)
		{
			cin>>chtemp;
			if(chtemp=='y'||chtemp=='Y'||chtemp=='n'||chtemp=='N')
			{
				i=chtemp;
				j=0;
			}	
			else
			{
				cout<<"Please choose valid option Y or N\n";
			}
		}
	}
	cout<<"\n\nxxxxxxxxxxxxxxxTHANK YOU FOR VISTING LPU STUDENT MANAGEMENTxxxxxxxxxxxxxxx";
}
void attendance()
{
	int dc,ac,fper,fnac,i=1,temp;
	float da,nac,per;
	cout<<"Enter total Delivered class: ";
	cin>>dc;
	cout<<"Enter total Attented class: ";
	cin>>ac;
	per=ac*100/dc;
	fper=per;
	if(per==fper)
		fper=fper+1;
	cout<<"Aggregate attendance: "<<fper<<"%"<<endl;
	while(i!=0)
	{
		cout<<"Enter the Desired Attendance: ";
		cin>>temp;
		if(temp>=0&&temp<=100)
		{
			da=temp;
			i=0;	
		}
		else
		{
			cout<<"Enter valid no. between 0to100Please try again"<<endl;
		}
	}
	nac=(dc-ac)/(1-(da/100));
	fnac=nac;
	if(nac!=fnac)
		fnac=fnac+1;
	cout<<"For "<<da<<"% Attendance..."<<endl<<"Total classes will be Delivered: "<<fnac<<endl<<"Total classes will be Attented: "<<fnac-(dc-ac);
}
void cgpa()
{	
	int sub[100];
	int n,j,sum=0,option,i,fmte,fete,attendance,fca,fattendance;
	float cg,per,temp,ca1,ca2,ca3,ffca,mte,ete,bo2ca,ffattendance;
	cout<<"Enter the no. of Subject: ";
	cin>>n;
	for(j=0;j<n;j++)
	{	
		cout<<"\nSubject "<<j+1<<": ";
		cout<<"\n==========================================================\n";
		cout<<"Choose The type of marking Scheme:\n";
		cout<<"1.Type 1:\t\t\t\t2.Type 2:\t\t\t\t3.Type 3:\n";
		cout<<"Attendance marks:\t/5\t\tAttendance marks:\t/5\t\tAttendance marks:\t/15\n";
		cout<<"Continuous Assesment marks: /25\t\tContinuous Assesment marks: /45\t\tContinuous Assesment marks: /30\n";
		cout<<"Mid Term marks:\t\t/20\t\tPractical End Term:\t/50\t\tPractical End Term:\t/55\n";
		cout<<"End Term marks:\t\t/50\nwaiting...\t\t";
		i=1;
		while(i!=0)
		{
			cin>>temp;
			if(temp==1||temp==2||temp==3)
			{
				option=temp;
				i=0;
			}	
			else
			{
				cout<<"Please choose valid option in between 1 to 3\n";
			}
		}
		switch(option)
		{
			case 1:
			i=1;
			while(i!=0)
			{
				cout<<"Enter the marks of CA1: ";
				cin>>temp;
				if(temp>=0&&temp<=30)
				{
					ca1=temp;
					i=0;	
				}
				else
				{
					cout<<"Enter valid no. between 0to30 Please try again"<<endl;
				}
			}
			i=1;
			while(i!=0)
			{
				cout<<"Enter the marks of CA2: ";
				cin>>temp;	
				if(temp>=0&&temp<=30)
				{
					ca2=temp;
					i=0;	
				}
				else
				{
					cout<<"Enter valid no. between 0to30 Please try again"<<endl;
				}
			}
			i=1;
			while(i!=0)
			{
				cout<<"Enter the marks of CA3: ";
				cin>>temp;
				if(temp>=0&&temp<=30)
				{
					ca3=temp;
					i=0;	
				}
				else
				{
					cout<<"Enter valid no. between 0to30 Please try again"<<endl;
				}
			}
			i=1;
			while(i!=0)
			{
				cout<<"Enter the marks of MTE: ";
				cin>>temp;
				if(temp>=-10&&temp<=40)
				{
					mte=temp;
					i=0;	
				}
			else
			{
				cout<<"Enter valid no. between -10to40 Please try again"<<endl;
			}
		}
		i=1;
		while(i!=0)
		{
			cout<<"Enter the marks of ETE: ";
			cin>>temp;
			if(temp>=-17.5&&temp<=70)
			{
				ete=temp;
				i=0;	
			}
			else
			{
				cout<<"Enter valid no. between -17.5to70 Please try again"<<endl;
			}
			}
			i=1;
			while(i!=0)
			{
			cout<<"Enter the percentage of Attendance: ";
			cin>>temp;
			if(temp>=0&&temp<=100)
			{
				attendance=temp;
				i=0;	
			}
			else
			{
				cout<<"Enter valid no. between 0to100 Please try again"<<endl;
			}
			}
			//best of 2 ca calculation
			if(ca1>ca2)
			{
				if(ca1>ca3)
				{
					if(ca3>ca2)
					{
						bo2ca=ca1+ca3;
					}
					else
					{
						bo2ca=ca1+ca2;
					}
				}
			}
			else
			{
			if(ca2>ca3)
			{
				if(ca1>ca3)
				{
					bo2ca=ca1+ca2;
				}
				else
				{
					bo2ca=ca2+ca3;
				}
			}
			else
			{
				if(ca1>ca2)
				{
					bo2ca=ca1+ca3;
				}
				else
					{
						bo2ca=ca2+ca3;
					}	
				}
			}
			//calculation of ca marks upon 25
			ffca=(bo2ca/60)*25;
			fca=(bo2ca/60)*25;
			if(ffca!=fca)
				fca=fca+1;
			//calculation of ete marks upon 50
			ete=(ete/70)*50;
			fete=ete;
			if(ete>0)
			{
			if(ete!=fete)
			fete=fete+1;
			}
			//calculation of mte marks upon 50
			mte=(mte/40)*20;
			fmte=mte;
			if(mte>0)
			{
			if(mte!=fmte)
			fmte=fmte+1;
			}
			//calculation of mte marks upon 5
			if(attendance>=90)
				fattendance=5;
			if(attendance>=85&&attendance<90)
				fattendance=4;
			if(attendance>=80&&attendance<85)
				fattendance=3;
			sub[j]=fca+fattendance+fmte+fete;
			cout<<"\n=============================================================\n\n";
			cout<<"Attendance marks:\t\t"<<fattendance<<"/"<<5<<endl;
			cout<<"Continuous Assesment marks:\t"<<fca<<"/"<<25<<endl;
			cout<<"Mid Term marks:\t\t\t"<<fmte<<"/"<<20<<endl;
			cout<<"End Term marks:\t\t\t"<<fete<<"/"<<50<<endl;
			cout<<"Overall marks Subject"<<j+1<<":\t\t"<<sub[j]<<"/"<<100<<endl;
			cout<<"\n=============================================================\n\n";
		
		break;
		case 2:
					i=1;
			while(i!=0)
			{
				cout<<"Enter the marks of CA1: ";
				cin>>temp;
				if(temp>=0&&temp<=30)
				{
					ca1=temp;
					i=0;	
				}
				else
				{
					cout<<"Enter valid no. between 0to30 Please try again"<<endl;
				}
			}
			i=1;
			while(i!=0)
			{
				cout<<"Enter the marks of CA2: ";
				cin>>temp;	
				if(temp>=0&&temp<=30)
				{
					ca2=temp;
					i=0;	
				}
				else
				{
					cout<<"Enter valid no. between 0to30 Please try again"<<endl;
				}
			}
			i=1;
			while(i!=0)
			{
				cout<<"Enter the marks of CA3: ";
				cin>>temp;
				if(temp>=0&&temp<=30)
				{
					ca3=temp;
					i=0;	
				}
				else
				{
					cout<<"Enter valid no. between 0to30 Please try again"<<endl;
				}
			}
			i=1;
			while(i!=0)
			{
				cout<<"Enter the marks of MTE: ";
				cin>>temp;
				if(temp>=-10&&temp<=40)
				{
					mte=temp;
					i=0;	
				}
			else
			{
				cout<<"Enter valid no. between -10to40 Please try again"<<endl;
			}
		}
		i=1;
		while(i!=0)
		{
			cout<<"Enter the marks of ETE: ";
			cin>>temp;
			if(temp>=-17.5&&temp<=70)
			{
				ete=temp;
				i=0;	
			}
			else
			{
				cout<<"Enter valid no. between -17.5to70 Please try again"<<endl;
			}
			}
			i=1;
			while(i!=0)
			{
			cout<<"Enter the percentage of Attendance: ";
			cin>>temp;
			if(temp>=0.0&&temp<=100.00)
			{
				attendance=temp;
				i=0;	
			}
			else
			{
				cout<<"Enter valid no. between 0to100 Please try again"<<endl;
			}
			}
			//best of 2 ca calculation
			if(ca1>ca2)
			{
				if(ca1>ca3)
				{
					if(ca3>ca2)
					{
						bo2ca=ca1+ca3;
					}
					else
					{
						bo2ca=ca1+ca2;
					}
				}
			}
			else
			{
			if(ca2>ca3)
			{
				if(ca1>ca3)
				{
					bo2ca=ca1+ca2;
				}
				else
				{
					bo2ca=ca2+ca3;
				}
			}
			else
			{
				if(ca1>ca2)
				{
					bo2ca=ca1+ca3;
				}
				else
					{
						bo2ca=ca2+ca3;
					}	
				}
			}
			//calculation of ca marks upon 25
			ffca=(bo2ca/60)*45;
			fca=(bo2ca/60)*45;
			if(ffca!=fca)
				fca=fca+1;
			//calculation of ete marks upon 50
			ete=(ete/70)*50;
			fete=ete;
			if(ete>0)
			{
			if(ete!=fete)
			fete=fete+1;
			}
			//calculation of mte marks upon 5
			ffattendance=(attendance/100)*5;
				fattendance=(attendance/100)*5;
			if(attendance>=90)
				fattendance=5;
			if(attendance>=85&&attendance<90)
				fattendance=4;
			if(attendance>=80&&attendance<85)
				fattendance=3;
			sub[j]=fca+fattendance+fete;
			cout<<"\n=============================================================\n\n";
			cout<<"Attendance marks:\t\t"<<fattendance<<"/"<<5<<endl;
			cout<<"Continuous Assesment marks:\t"<<fca<<"/"<<45<<endl;
			cout<<"Practical End Term marks:\t"<<fete<<"/"<<50<<endl;
			cout<<"Overall marks Subject "<<j+1<<":\t"<<sub[j]<<"/"<<100<<endl;
			cout<<"\n=============================================================\n\n";
			break;
		case 3:
			i=1;
			while(i!=0)
			{
				cout<<"Enter the marks of CA1: ";
				cin>>temp;
				if(temp>=0&&temp<=30)
				{
					ca1=temp;
					i=0;	
				}
				else
				{
					cout<<"Enter valid no. between 0to30 Please try again"<<endl;
				}
			}
			i=1;
			while(i!=0)
			{
				cout<<"Enter the marks of CA2: ";
				cin>>temp;	
				if(temp>=0&&temp<=30)
				{
					ca2=temp;
					i=0;	
				}
				else
				{
					cout<<"Enter valid no. between 0to30 Please try again"<<endl;
				}
			}
			i=1;
			while(i!=0)
			{
				cout<<"Enter the marks of CA3: ";
				cin>>temp;
				if(temp>=0&&temp<=30)
				{
					ca3=temp;
					i=0;	
				}
				else
				{
					cout<<"Enter valid no. between 0to30 Please try again"<<endl;
				}
			}
			i=1;
			while(i!=0)
			{
				cout<<"Enter the marks of MTE: ";
				cin>>temp;
				if(temp>=-10&&temp<=40)
				{
					mte=temp;
					i=0;	
				}
			else
			{
				cout<<"Enter valid no. between -10to40 Please try again"<<endl;
			}
		}
		i=1;
		while(i!=0)
		{
			cout<<"Enter the marks of ETE: ";
			cin>>temp;
			if(temp>=-17.5&&temp<=70)
			{
				ete=temp;
				i=0;	
			}
			else
			{
				cout<<"Enter valid no. between -17.5to70 Please try again"<<endl;
			}
			}
			i=1;
			while(i!=0)
			{
			cout<<"Enter the percentage of Attendance: ";
			cin>>temp;
			if(temp>=0&&temp<=100)
			{
				attendance=temp;
				i=0;	
			}
			else
			{
				cout<<"Enter valid no. between 0to100 Please try again"<<endl;
			}
			}
			//best of 2 ca calculation
			if(ca1>ca2)
			{
				if(ca1>ca3)
				{
					if(ca3>ca2)
					{
						bo2ca=ca1+ca3;
					}
					else
					{
						bo2ca=ca1+ca2;
					}
				}
			}
			else
			{
			if(ca2>ca3)
			{
				if(ca1>ca3)
				{
					bo2ca=ca1+ca2;
				}
				else
				{
					bo2ca=ca2+ca3;
				}
			}
			else
			{
				if(ca1>ca2)
				{
					bo2ca=ca1+ca3;
				}
				else
					{
						bo2ca=ca2+ca3;
					}	
				}
			}
			//calculation of ca marks upon 30
			ffca=(bo2ca/60)*30;
			fca=(bo2ca/60)*30;
			if(ffca!=fca)
				fca=fca+1;
			//calculation of ete marks upon 55
			ete=(ete/70)*55;
			fete=ete;
			if(ete>0)
			{
			if(ete!=fete)
			fete=fete+1;
			}
			//calculation of mte marks upon 15
			if(attendance>=90)
				attendance=5;
			if(attendance>=85&&attendance<90)
				attendance=4;
			if(attendance>=80&&attendance<85)
				attendance=3;
			attendance=(attendance/5)*15;
			fattendance=attendance;
			if(attendance!=fattendance)
			fattendance=fattendance+1;
			sub[j]=fca+fattendance+fete;
			cout<<"\n=============================================================\n\n";
			cout<<"Attendance marks:\t\t"<<fattendance<<"/"<<15<<endl;
			cout<<"Continuous Assesment marks:\t"<<fca<<"/"<<30<<endl;
			cout<<"Practical End Term marks:\t"<<fete<<"/"<<55<<endl;
			cout<<"Overall marks Subject "<<j+1<<":\t"<<sub[j]<<"/"<<100<<endl;
			cout<<"\n=============================================================\n\n";
		}
		}
		
		for(j=0;j<n;j++)
		{	
			sum=sum+sub[j];
		}
		cout<<endl<<sum<<endl;
		per=(sum/n);
		cg=per/10;
		cout<<"The Calculate CGPA of "<<n<<" Subject is: "<<cg<<" CGPA"<<endl;
		cout<<"The Calculate Percentage of "<<n<<" Subject is: "<<per<<"%"<<endl;
}
void etemark()
{
	float cg,per,ca1,ca2,ca3,ffca,mte,ete,bo2ca,ffattendance;
	int i,temp,fmte,fete,attendance,fca,fattendance,opt,j=1;
		cout<<"\nChoose the below three option";
		cout<<"\n1. ETE for Pass\t\t2. Desire Percent";
		cout<<"\nWaiting...\t\t";
		while(j!=0)
		{
			cin>>temp;
			if(temp==1||temp==2)
			{
				opt=temp;
				j=0;
			}	
			else
			{
				cout<<"Please choose valid option in between 1 to 2\t";
			}
		}
		cout<<"\n==========================================================\n";
		i=1;
		
		while(i!=0)
		{
			cout<<"Enter the marks of CA1: ";
			cin>>temp;
			if(temp>=0&&temp<=30)
			{
				ca1=temp;
				i=0;	
			}
			else
			{
				cout<<"Enter valid no. between 0to30 Please try again"<<endl;
			}
		}
		i=1;
		while(i!=0)
		{
			cout<<"Enter the marks of CA2: ";
			cin>>temp;
			if(temp>=0&&temp<=30)
			{
				ca2=temp;
				i=0;	
			}
			else
			{
				cout<<"Enter valid no. between 0to30 Please try again"<<endl;
			}
		}
		i=1;
		while(i!=0)
		{
			cout<<"Enter the marks of CA3: ";
			cin>>temp;
			if(temp>=0&&temp<=30)
			{
				ca3=temp;
				i=0;	
			}
			else
			{
				cout<<"Enter valid no. between 0to30 Please try again"<<endl;
			}
		}
		i=1;
		
		while(i!=0)
		{
			cout<<"Enter the marks of MTE: ";
			cin>>temp;
			if(temp>=-10&&temp<=40)
			{
				mte=temp;
				i=0;	
			}
			else
			{
				cout<<"Enter valid no. between -10to40 Please try again"<<endl;
			}
		}
		i=1;
		while(i!=0)
		{
			cout<<"Enter the percentage of Attendance: ";
			cin>>temp;
			if(temp>=0&&temp<=100)
			{
				attendance=temp;
				i=0;	
			}
			else
			{
				cout<<"Enter valid no. between 0to100 Please try again"<<endl;
			}
		}
		//best of 2 ca calculation
		if(ca1>ca2)
		{
			if(ca1>ca3)
			{
				if(ca3>ca2)
				{
					bo2ca=ca1+ca3;
				}
				else
				{
					bo2ca=ca1+ca2;
				}
			}
		}
		else
		{
			if(ca2>ca3)
			{
				if(ca1>ca3)
				{
					bo2ca=ca1+ca2;
				}
				else
				{
					bo2ca=ca2+ca3;
				}
			}
			else
			{
				if(ca1>ca2)
				{
					bo2ca=ca1+ca3;
				}
				else
				{
					bo2ca=ca2+ca3;
				}	
			}
		}
		ffca=(bo2ca/60)*25;
		fca=(bo2ca/60)*25;
		if(ffca!=fca)
		fca=fca+1;
		mte=(mte/40)*20;
		fmte=mte;
		if(mte>0)
		{
			if(mte!=fmte)
			fmte=fmte+1;
		}
		ffattendance=(attendance/100)*5;
		fattendance=(attendance/100)*5;
		if(attendance>=90)
			fattendance=5;
		if(attendance>=85&&attendance<90)
			fattendance=4;
		if(attendance>=80&&attendance<85)
			fattendance=3;
			/*calculation for the end term*/
		float ffete,diff;
		diff=21-mte;
		switch(opt)
		{
			case 1:
				cout<<"For pass the the paper Marks Required is: ";
				ete=40-(fca+fmte+fattendance);
				ffete=(ete/50)*70;
				if(ffete>70)
				{
					cout<<"Reapper";
				}
				if(ffete>diff)
					cout<<ffete<<"/70";
				else
				{
					cout<<21-mte<<"/70";
				}
				cout<<"\n=============================================================\n\n";
				break;
				
			case 2:
				cout<<"Write the desired percent ";
			int	i=1;
			int pp;
			
			while(i!=0)
			{
				cin>>temp;
			if(temp>=0&&temp<=100)
			{
				pp=temp;
				i=0;	
			}
			else
			{
				cout<<"Enter valid no. between 0to100 Please try again"<<endl;
			}
			}
				cout<<"For "<<pp<<"% in the paper Marks Required is: ";
				ete=pp-(fca+fmte+fattendance);
				ffete=(ete/50)*70;
				if(ffete>70)
				{
					cout<<"Not Possible At max you can Score 70 which make your Percentage"<<(70+fca+fmte+fattendance)<<"%";
				}
				if(ffete>(21-mte))
					cout<<ffete<<"/70";
				else
				{
					cout<<21-mte<<"/70";
				}
			break;
			}
}
