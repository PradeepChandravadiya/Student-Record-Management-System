void Delete()
{
if(total==0)
{
cout<<"No data is entered yet"<<endl;
}
else
{
int a;
cout<<"Are you Sure to Delete Data?"<<endl;
cout<<"Press 1 to delete all record"<<endl;
cin>>a;
if(a==1)
{
total=0;
cout<<"All record is deleted..!!"<<endl;
}
else
{
cout<<"Please Press 1 to Delete All Record"<<endl;
}
}
}
