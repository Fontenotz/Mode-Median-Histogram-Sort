#include<iostream.h>
#include<time.h>
#include<stdlib.h>
#include<iomanip.h>

int x[25];
int newx[25];
int m[10];
int number[11];

void find_mode();
void find_median();
void histogram();
void sortem();
void scroll();

int main()
{
	srand(time(0));

	for(int n=0;n<25;n++)
	{
		x[n]=rand()%11;
	}
	
	sortem();
	find_median();
	find_mode();
	histogram();
	sortem();

	cout<<"To see the data scroll, "<<endl;
	system("pause");
	scroll();
	
	return 0;
}


void sortem()
{
	int temp;
	for(int o=0;o<25;o++)
		{
			for(int p=o+1;p<25;p++)
			{
				if (x[p]<x[o])
				{
					temp=x[p];
					x[p]=x[o];
					x[o]=temp;
				}
			}
		}

	cout<<"Numbers from low to high: "<<endl;
	for(int q=0;q<25;q++)
	{
		cout<<x[q]<<"  ";
	}
	cout<<endl;
}


void find_median()
{
	cout<<"The median is: "<<x[13]<<endl;
	
}


void find_mode()
{
	for (int y=0;y<25;y++)
	{
		newx[y]=x[y];
	}
	int temp;
	//Counts the numbers generated
	for(int l=0;l<25;l++)
	{
		if (newx[l]==0)
			number[0]++;
		else if (newx[l]==1)
			number[1]++;
		else if (newx[l]==2)
			number[2]++;
		else if (newx[l]==3)
			number[3]++;
		else if (newx[l]==4)
			number[4]++;
		else if (newx[l]==5)
			number[5]++;
		else if (newx[l]==6)
			number[6]++;
		else if (newx[l]==7)
			number[7]++;
		else if (newx[l]==8)
			number[8]++;
		else if (newx[l]==9)
			number[9]++;
		else //(x[l]==10)
			number[10]++;
	}
/*
	for(int o=0;o<11;o++)
	{
		for(int p=o+1;p<11;p++)
		{
			if (number[p]<number[o])
			{
				temp=number[p];
				number[p]=number[o];
				number[o]=temp;
			}
		}
	}

	
		for(int q=0;q<11;q++)
			{
				cout<<number[q]<<"  ";
			}
		cout<<endl;


		//Figures out which has the most numbers
		
		if (a>b && a>c && a>d && a>e && a>f && a>g && a>h && a>i && a>j && a>k)
		{
			cout<<"The mode is: 0"<<endl;
		}

		else if (b>a && b>c && b>d && b>e && b>f && b>g && b>h && b>i && b>j && b>k)
		{
			cout<<"The mode is: 1"<<endl;
		}

		else if (c>b && c>a && c>d && c>e && c>f && c>g && c>h && c>i && c>j && c>k)
		{
			cout<<"The mode is: 2"<<endl;
		}

		else if (d>b && d>c && d>a && d>e && d>f && d>g && d>h && d>i && d>j && d>k)
		{
			cout<<"The mode is: 3"<<endl;
		}

		else if (e>b && e>c && e>d && e>a && e>f && e>g && e>h && e>i && e>j && e>k)
		{
			cout<<"The mode is: 4"<<endl;
		}

		else if (f>b && f>c && f>d && f>e && f>a && f>g && f>h && f>i && f>j && f>k)
		{
			cout<<"The mode is: 5"<<endl;
		}

		else if (g>b && g>c && g>d && g>e && g>f && g>a && g>h && g>i && g>j && g>k)
		{
			cout<<"The mode is: 6"<<endl;
		}

		else if (h>b && h>c && h>d && h>e && h>f && h>g && h>a && h>i && h>j && h>k)
		{
			cout<<"The mode is: 7"<<endl;
		}

		else if (i>b && i>c && i>d && i>e && i>f && i>g && i>h && i>a && i>j && i>k)
		{
			cout<<"The mode is: 8"<<endl;
		}

		else if (j>b && j>c && j>d && j>e && j>f && j>g && j>h && j>i && j>a && j>j)
		{
			cout<<"The mode is: 9"<<endl;
		}

		else if (k>b && k>c && k>d && k>e && k>f && k>g && k>h && k>i && k>j && k>a)
		{
			cout<<"The mode is: 10"<<endl;
		}

		else
		{
			cout<<"The mode is not any particular number."<<endl;
		}
*/

}


void histogram()
{
	cout<<"0s  ";
	for (m[0]=0;m[0]<number[0];m[0]++)
			{
					cout<<"*";
			}
			cout<<endl;

	cout<<"1s  ";
	for (m[1]=0;m[1]<number[1];m[1]++)
			{
					cout<<"*";
			}
		cout<<endl;

	cout<<"2s  ";
	for (m[2]=0;m[2]<number[2];m[2]++)
			{
					cout<<"*";
			}
		cout<<endl;

	cout<<"3s  ";
	for (m[3]=0;m[3]<number[3];m[3]++)
			{
					cout<<"*";
			}
		cout<<endl;

	cout<<"4s  ";
	for (m[4]=0;m[4]<number[4];m[4]++)
			{
					cout<<"*";
			}
		cout<<endl;

	cout<<"5s  ";
	for (m[5]=0;m[5]<number[5];m[5]++)
			{
					cout<<"*";
			}
		cout<<endl;

	cout<<"6s  ";
	for (m[6]=0;m[6]<number[6];m[6]++)
			{
					cout<<"*";
			}
		cout<<endl;

	cout<<"7s  ";
	for (m[7]=0;m[7]<number[7];m[7]++)
			{
					cout<<"*";
			}
		cout<<endl;

	cout<<"8s  ";
	for (m[8]=0;m[8]<number[8];m[8]++)
			{
					cout<<"*";
			}
		cout<<endl;

	cout<<"9s  ";
	for (m[9]=0;m[9]<number[9];m[9]++)
			{
					cout<<"*";
			}
		cout<<endl;

	cout<<"10s ";
	for (m[10]=0;m[10]<number[10];m[10]++)
			{
					cout<<"*";
			}
		cout<<endl;
		cout<<endl;
}


void scroll()
{
	for(int y=80;y>0;y--)
	{
		system("cls");
		cout<<setw(y)<<x[0];
		if (y<=80)
			cout<<" "<<x[1];
		if (y<=78)
			cout<<" "<<x[2];
		if (y<=76)
			cout<<" "<<x[3];
		if (y<=74)
			cout<<" "<<x[4];
		if (y<=72)
			cout<<" "<<x[5];
		if (y<=70)
			cout<<" "<<x[6];
		if (y<=68)
			cout<<" "<<x[7];
		if (y<=66)
			cout<<" "<<x[8];
		if (y<=64)
			cout<<" "<<x[9];
		if (y<=62)
			cout<<" "<<x[10];
		if (y<=60)
			cout<<" "<<x[11];
		if (y<=58)
			cout<<" "<<x[12];
		if (y<=56)
			cout<<" "<<x[13];
		if (y<=54)
			cout<<" "<<x[14];
		if (y<=52)
			cout<<" "<<x[15];
		if (y<=50)
			cout<<" "<<x[16];
		if (y<=48)
			cout<<" "<<x[17];
		if (y<=46)
			cout<<" "<<x[18];
		if (y<=44)
			cout<<" "<<x[19];
		if (y<=42)
			cout<<" "<<x[20];
		if (y<=40)
			cout<<" "<<x[21];
		if (y<=38)
			cout<<" "<<x[22];
		if (y<=36)
			cout<<" "<<x[23];
		if (y<=34)
			cout<<" "<<x[24];
		
		cout<<endl;
	}
	scroll();
}

