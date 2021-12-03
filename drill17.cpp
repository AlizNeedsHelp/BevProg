#include "std_lib_facilities.h"

void print_array10(ostream& os, int* a)
{
     for(int i =0; i < 10; ++i)
        os<<a[i]<<"\n";
}

void print_array(ostream& os, int*a ,int n)
{
    for(int i =0; i < n; ++i)
            os<<a[i]<<"\n";

}
 void print_vector(ostream& os, vector<int> v) {
    for (int i = 0; i<v.size(); ++i)
        os << v[i] << "\n";
}



int main()
{ 
    int* a = new int [10]; //1

    for(int i =0; i < 10; ++i) //2
        {cout<<a[i]<<" ";}
        cout<<"\n";
    delete[] a; //3

   int* b = new int[10]; //5

    for(int i=0; i < 10;++i)
        {b[i]=100+i;}
   print_array10(cout,b);
   delete[] b;

cout<<endl;
    int* c = new int[11];
     for(int i=0; i < 11;++i)
        {c[i]=100+i;
        cout<<c[i]<<"\n";}
    delete[] c;     //6

     int* d = new int[20];
     for(int i=0 ; i < 20; ++i){
        d[i]=100+i;
     }
    print_array(cout,d,20);
    cout<<endl;
    delete[] d;         //8
cout<<endl;
    vector<int> v;
    for (int i = 0; i<10; ++i)
        v.push_back(100+i);
    print_vector(cout,v);

    cout << "\n";
    vector<int> v2;
    for (int i = 0; i<11; ++i)
        v2.push_back(100+i);
    print_vector(cout,v2);

    cout << "\n";
    vector<int> v3;
    for (int i = 0; i<20; ++i)
        v3.push_back(100+i);
    print_vector(cout,v3);     //10

    cout<<endl<<endl;

    int s=7;
    int* p1=&s;

    cout<<p1<<" "<<s; //2.part 2
    cout<<endl;

   int* p2 = new int [7];
    for (int i=0; i < 7; ++i)
    {
        p2[i]=pow(2,i);
    }
    print_array(cout,p2,7);
    delete[] p2;
    cout<<endl;

    int* p3 = p2;
    p1=p2;
    p3=p2;
     cout << "p1: " << p1 << "\n";
    cout << "*p1: " << *p1 << "\n";
    cout << "p2: " << p2 << "\n";
    cout << "*p2: " << *p2 << "\n";
    delete[] p2;

       p1 = new int [7];
    for (int i=0; i < 7; ++i)
    {
        p1[i]=pow(2,i);
    }

    p2= new int [10];
for (int i = 0; i<10; ++i)
        p2[i] = p1[i];
    print_array(cout,p2,10);
    delete[] p2;

  vector<int> vec1;
    for (int i = 0; i<10; ++i)
        vec1.push_back(pow(2,i));
    vector<int> vec2;
    for (int i = 0; i<vec1.size(); ++i)
        vec2.push_back(vec1[i]);
    print_vector(cout,vec2);

    return 0;
}