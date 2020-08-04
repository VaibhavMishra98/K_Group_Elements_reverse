#include<iostream>
using namespace std;

void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
void reverse(int a[],int low,int high)
{

     int n=sizeof(a)/sizeof(a[0]);
 while(low<high)
    {

        swap(a[low],a[high]);

    low++;
    high--;
    }
}
int main()
{
    int i,a[]={10,20,30,40,50,60};
    int n=sizeof(a)/sizeof(a[0]);
    int k;
    cin>>k;
    for(i=0;i<n;i=i+k)
    {
    reverse(a,i,i+k-1) ;}
    for(i=0;i<n;i++)
    cout<< a[i]<<" ";
}

