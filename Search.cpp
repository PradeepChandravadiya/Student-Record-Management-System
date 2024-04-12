void search()
{
if(total==0)
{
cout<<"No data is entered"<<endl;
}
else
{
string rollno;
cout<<"Enter the roll no of student"<<endl;
cin>>rollno;
for(int i=0;i<total;i++)
{
if(rollno==roll_no[i])
{
cout<<"Roll NO "<<roll_no[i]<<endl;
cout<<"Name "<<name[i]<<endl;
cout<<"Class "<<Class[i]<<endl;
cout<<"Course "<<course[i]<<endl;
cout<<"Mobile NO "<<mobile_no[i]<<endl;
cout<<"Admission Year "<<admission_year[i]<<endl;
}
}
}
}
