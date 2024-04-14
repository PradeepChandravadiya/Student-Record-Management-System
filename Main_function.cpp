int main() //main function, execution of program starts from here
{
int value;
while(true) //always in Loop
{
cout<<"\nPress 1 to Enter data"<<endl<<endl;
cout<<"Press 2 to Show data"<<endl<<endl;
cout<<"Press 3 to Search data"<<endl<<endl;
cout<<"Press 4 to Update data"<<endl<<endl;
cout<<"Press 5 to Delete data"<<endl<<endl;
cout<<"Press 6 to Quit"<<endl<<endl;
cin>>value;
switch(value)
{
case 1:
enter();
break;
case 2:
show();
break;
case 3:
search();
break;
case 4:
update();
break;
case 5:
Delete();
break;
case 6:
exit(0);
break;
default:
cout<<"Invalid input"<<endl;
break;
}
}
}
