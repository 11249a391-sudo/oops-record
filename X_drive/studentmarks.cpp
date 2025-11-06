#include<iostream>
using namespace std;
class student
{
    int rollno;
    char sname[100];
    int sub_marks[5];
    float per;
    public:
    void getdata();
    void dis_piay();
};

void student::getdata()
{
    cout<<"enter your roll no\n";
    cin>>rollno;
    cout<<"enter student name\n";
    for(int i=0;i<5;i++)
        {
            cin>>sub_marks[1];

        }
}
void student::calc_display()
{
    cout<<"the rool no is:"<<rollno<<"\n";
    cout<<"the student name is:"<<sname<<"\n";
    per=0.0;
    for(int i=o;i<5;i++)
    {
     cout<<"marks of the sub_marks["<<i<<"]:"<<sub_marks[1]<<"\n";
     per=per+sub_marks[1];
    }
    per=per/5.0;
    cout<<"total markes in %"<<per<<"\n";
    if ( sub_marks[0]<50 || sub_marks[1] < 50 || sub_marks[2]<50 || sub_marks[3]<50 || sub_marks[4]<50 )
    {
        cout <<"over semester result is : fail";
    }   
        else
    {
        cout <<"overall semester result is : pass";
    }    
}
int main()
{
    student s;
    s.getdata ();
    s.calc_display();
    return 0;
}
