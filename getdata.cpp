void enter()
{
int ch=0;
cout<<"How many students do u want to enter??"<<endl;
cin>>ch;
if(total==0)
{
total=ch+total;
for(int i=0;i<ch;i++)
{
cout<<"\nEnter the Data of student "<<i+1<<endl<<endl;
cout<<"Enter Roll NO:: "<<endl;
cin>>roll_no[i];
cout<<"Enter Name: "<<endl;
cin>>name[i];
cout<<"Enter Class: "<<endl;
cin>>Class[i];
cout<<"Enter Course: "<<endl;
cin>>course[i];
cout<<"Enter Mobile NO: "<<endl;
cin>>mobile_no[i];
cout<<"Enter Admission Year: "<<endl;
cin>>admission_year[i];
}
}
else
{
for(int i=total;i<ch+total;i++)
//to store onward students data rather than storing double data()
{
cout<<"\nEnter the Data of student "<<i+1<<endl<<endl;
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
total=ch+total; //making choice
}
}
