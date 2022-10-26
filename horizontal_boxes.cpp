#include <iostream>
#include<vector>
#include <string>
using namespace std;
int no_of_digits(int n)
{
    int count=0;
    while(n>0)
    {
        count++;
        n/=10;
    }
    return count;
}
void print_top_part(int n)
{
    if(n==1)
    {
        cout<<"\xda\xc4\xc4\xc4\xc4\xc4\xbf\n";
        return;
    }
    cout<<"\xda\xc4\xc4\xc4\xc4\xc4\xc2";
    for(int i=0;i<n-2;i++)
        cout<<"\xc4\xc4\xc4\xc4\xc4\xc2";
    cout<<"\xc4\xc4\xc4\xc4\xc4\xbf\n";
}
void print_middle_part(vector<int>& v)
{
    cout<<"\xb3";
    if(v.size()==1)
    {
        int digits=no_of_digits(v[0]);
        if(digits==1)
            cout<<"  "<<v[0]<<"  \xb3\n";
        else if(digits==2)
            cout<<" "<<v[0]<<"  \xb3\n";
        else
            cout<<" "<<v[0]<<" \xb3\n";
        return;
    }
    
    
    for(int i=0;i<v.size();i++)
    {
        int digits=no_of_digits(v[i]);
        if(digits==1)
            cout<<"  "<<v[i]<<"  \xb3";
        else if(digits==2)
            cout<<" "<<v[i]<<"  \xb3";
        else
            cout<<" "<<v[i]<<" \xb3";
    }
    cout<<"\n";
}
void print_last_part(int n)
{
    if(n==1)
    {
        cout<<"\xc0\xc4\xc4\xc4\xc4\xc4\xd9"; 
        return;
    }
    cout<<"\xc0\xc4\xc4\xc4\xc4\xc4"; 
    for(int i=0;i<n-2;i++)
        cout<<"\xc1\xc4\xc4\xc4\xc4\xc4"; 
    cout<<"\xc1\xc4\xc4\xc4\xc4\xc4\xd9"; 
}
void print_using_horizontal_boxes(vector<int>& v)
{
    print_top_part(v.size());
    print_middle_part(v);
    print_last_part(v.size());
}
int main()
{
    int n=20;
     vector<int> v(n);
    for(int i=0;i<n;i++)
        v[i]=i+1;
    
    cout<<"Vector has the following values: ";
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
    cout<<endl;
    
    print_using_horizontal_boxes(v);
}