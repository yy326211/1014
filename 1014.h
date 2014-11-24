#include<iostream>
using namespace std;
extern int a[10000]={0};
void sort(int b[],int i)
{
	if(i!=0)
	{
	int temp=0;
	for(int j=0;j<i;j++)
	{		
		for(int k=j+1;k<i;k++)
		{			
			if(b[k]<=b[j])
            {
				temp=b[j];
				b[j]=b[k];
				b[k]=temp;
			}
		}
	}
	for(int j=0;j<i-1;j++)
		cout<<b[j]<<",";
		cout<<b[i-1]<<endl;
	}
	else
		cout<<"No elements."<<endl;
	for(int j=0;j<i;j++)
		a[j]=b[j];
}
void insertnum(int num,int i)
{
	if(i!=0)
	{
	for(int j=0;j<i;j++)
	{
		if(num<a[j])
		{			
			for(int k=i;k>j;k--)
				a[k]=a[k-1];
			a[j]=num;
			break;
		}
		else
		{
			a[i]=num;
		}
	}
	for(int j=0;j<i;j++)
		cout<<a[j]<<",";
		cout<<a[i]<<endl;
	}
	else
		cout<<num<<endl;
}
void deletenum(int num,int i)
{
	for(int j=0;j<i;j++)
	{
		if(a[j]==num)
		{
			for(int k=j;k<i-1;k++)
				a[k]=a[k+1];
			i--;
			j--;
		}
		
	}
	if(i>1)
	{
		for(int j=0;j<i-1;j++)
		cout<<a[j]<<",";
		cout<<a[i-1]<<endl;
	}
	else
	    cout<<"No elements."<<endl;
}
int main()
{
	
	int i=0,insert=0,del=0;
	while(cin>>a[i])
	{
		if(a[i]==-1)
			break;
		i++;
	}
	cin>>insert;
	cin>>del;
	sort(a,i);
	insertnum(insert,i);
	i=i+1;
	deletenum(del,i);
	system("pause");
	return 0;
}