void update()
{
if(total==0)
{
cout<<"No data is entered"<<endl;
}
else{
string rollno;
cout<<"Enter the roll no of student which you want to update"<<endl;
cin>>rollno;
for(int i=0;i<total;i++)
{
if(rollno==roll_no[i])
{
cout<<"\nPrevious data"<<endl<<endl;
cout<<"Data of Student "<<i+1<<endl;
cout<<"Roll NO: "<<roll_no[i]<<endl;
cout<<"Name "<<name[i]<<endl;
cout<<"Class "<<Class[i]<<endl;
cout<<"Course "<<course[i]<<endl;
cout<<"Mobile NO "<<mobile_no[i]<<endl;
cout<<"Admission Year "<<admission_year[i]<<endl;
cout<<"\nEnter new data"<<endl<<endl;
cout<<"Enter Roll NO ";
cin>>roll_no[i];
cout<<"Enter Name: ";
cin>>name[i];
cout<<"Enter Class: ";
cin>>Class[i];
cout<<"Enter Course: ";
cin>>course[i];
cout<<"Enter Mobile NO: ";
cin>>mobile_no[i];
cout<<"Enter Admission Year: ";
cin>>admission_year[i];
}
}
}
}
