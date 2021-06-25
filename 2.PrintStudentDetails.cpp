#include<iostream>
#include<cstring>
using namespace std;
class Students
{
    int roll_no;
    float total_marks;
    string name;
public:
    void set_data(Students *)
    {
        cout<<"Enter the details of student: "<<endl;
        cout<<"Enter the Name: "<<endl;
        cin>>name;
        cout<<"Enter Roll No: "<<endl;
        cin>>roll_no;
        cout<<"Enter Total Marks: "<<endl;
        cin>>total_marks;
    }
    void get_data(Students *)
    {
        cout<<"Details of  the student: "<<endl;
        cout<<"Name: ";
        cout<<name<<endl;
        cout<<"Roll No: ";
        cout<<roll_no<<endl;
        cout<<"Total Marks: ";
        cout<<total_marks<<endl;
    }
    static void Sortbyroll(Students *ptr, int n);
    static void Sortbymarks(Students *ptr, int n);
    static void Sortbynames(Students *ptr, int n);
};
void Students::Sortbyroll(Students *ptr, int n)
{
    Students temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(ptr[i].roll_no > ptr[j].roll_no)
            {
                temp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = temp;
            }
        }
    }
}
void Students::Sortbymarks(Students *ptr, int n)
{
    Students temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(ptr[i].total_marks > ptr[j].total_marks)
            {
                temp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = temp;
            }
        }
    }
}
void swap(Students a, Students b)
{
    Students temp = a;
    a = b;
    b = temp;
}
void Students:: Sortbynames(Students *ptr,int n)
{
    Students temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(ptr[i].name > ptr[j].name)
            {
                temp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = temp;
            }
        }
    }
}
int main()
{
    int n;
    cout<<"Enter the no. of students: "<<endl;
    cin>>n;
    Students *ptr = new Students[n];
    for(int i=0; i<n ; i++)
    {
        ptr[i].set_data(ptr);
    }
    cout<<"*******"<<endl;
    for(int i=0;i<n;i++ )
    {
        ptr[i].get_data(ptr);
    }
    int ch;
    cout<<"\nEnter your chhoice to sort data by\n1.Roll no\n2.Marks\n3.Name\n";
    cin>>ch;
    if(ch==1)
    {
        Students :: Sortbyroll(ptr,n);
    }
    else if(ch==2)
    {
        Students :: Sortbymarks(ptr,n);
    }
    else if(ch==3)
    {
        Students :: Sortbynames(ptr,n);
    }
    else
    {
        cout<<"Your input is not correct ";
        return 0;
    } 
    cout<<"*******"<<endl;
    cout<<"\nThe sorted data is : ";
    for(int i=0;i<n;i++)
    ptr[i].get_data(ptr);
    cout<<endl;
    delete []ptr;
    return 0;
}
