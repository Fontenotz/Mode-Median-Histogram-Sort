#include<iostream.h>
#include<time.h>
#include<stdlib.h>

int x[25];
int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0;

void find_mode();
void find_median();
void histogram();

int main()
{
	srand(time(0));
	int temp;

	for(int n=0;n<25;n++)
	{
		x[n]=rand()%11;
	}

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

	find_median();
	find_mode();
	histogram();

	return 0;
}


void find_mode()
{

	//Counts the numbers generated
	for(int l=0;l<25;l++)
	{
		if (x[l]==0)
		{
			a++;
		}

		else if (x[l]==1)
		{
			b++;
		}

		else if (x[l]==2)
		{
			c++;
		}

		else if (x[l]==3)
		{
			d++;
		}

		else if (x[l]==4)
		{
			e++;
		}

		else if (x[l]==5)
		{
			f++;
		}

		else if (x[l]==6)
		{
			g++;
		}

		else if (x[l]==7)
		{
			h++;
		}

		else if (x[l]==8)
		{
			i++;
		}

		else if (x[l]==9)
		{
			j++;
		}

		else 
		{
			k++;
		}
	}
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


}


void find_median()
{
	cout<<"The median is: "<<x[13]<<endl;
	
}

void histogram()
{
	int m[10]={0,0,0,0,0,0,0,0,0,0};

	cout<<"0s  ";
	for (m[0]=0;m[0]<a;m[0]++)
			{
					cout<<"*";
			}
			cout<<endl;

	cout<<"1s  ";
	for (m[1]=0;m[1]<b;m[1]++)
			{
					cout<<"*";
			}
		cout<<endl;

	cout<<"2s  ";
	for (m[2]=0;m[2]<c;m[2]++)
			{
					cout<<"*";
			}
		cout<<endl;

	cout<<"3s  ";
	for (m[3]=0;m[3]<d;m[3]++)
			{
					cout<<"*";
			}
		cout<<endl;

	cout<<"4s  ";
	for (m[4]=0;m[4]<e;m[4]++)
			{
					cout<<"*";
			}
		cout<<endl;

	cout<<"5s  ";
	for (m[5]=0;m[5]<f;m[5]++)
			{
					cout<<"*";
			}
		cout<<endl;

	cout<<"6s  ";
	for (m[6]=0;m[6]<g;m[6]++)
			{
					cout<<"*";
			}
		cout<<endl;

	cout<<"7s  ";
	for (m[7]=0;m[7]<h;m[7]++)
			{
					cout<<"*";
			}
		cout<<endl;

	cout<<"8s  ";
	for (m[8]=0;m[8]<i;m[8]++)
			{
					cout<<"*";
			}
		cout<<endl;

	cout<<"9s  ";
	for (m[9]=0;m[9]<j;m[9]++)
			{
					cout<<"*";
			}
		cout<<endl;

	cout<<"10s ";
	for (m[10]=0;m[10]<k;m[10]++)
			{
					cout<<"*";
			}
		cout<<endl;
}
