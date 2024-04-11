
void show()
{
if(total==0)
{
cout<<"No Data is Entered"<<endl;
}
else
{
for(int i=0;i<total;i++)
{
cout<<"\nData of Student "<<i+1<<endl<<endl;
cout<<"Roll NO "<<roll_no[i]<<endl;
cout<<"Name "<<name[i]<<endl;
cout<<"Class "<<Class[i]<<endl;
cout<<"Course "<<course[i]<<endl;
cout<<"Mobile NO "<<mobile_no[i]<<endl;
cout<<"Admission Year "<<admission_year[i]<<endl;
}
}
}
