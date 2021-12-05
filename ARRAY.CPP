#include<iostream.h>
int main()
{
int array[100],num,i;
cout<<"enter number of elements";
cin>>num;
cout<<"enter"<<num<<"integers";
for(i=0; i<num; ++i)
{
cin>>array[i];
}
cout<<"array content";
for(i=0; i<num; ++i)
{
cout<<*(array+i)<<" ";
}
return 0;
}
