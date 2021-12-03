#include "std_lib_facilities.h"
const int gas = 11;
int ga[gas] = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512, };

vector<int> gv;   //vector

void print_ar(const int ai[], int n) {
    for (int i = 0; i<n; ++i) cout << ai[i] << " ";
}

void f(int ai[], int n) {
    const int las = 10;
    int la[las];
    for (int i = 0; i<las; ++i) la[i] = ga[i];
    print_ar(la,las);
    cout << "\n";
    int* p = new int[n];
    for (int i = 0; i<n; ++i) p[i] = ai[i];
    print_ar(p,n);
    cout << "\n";
    delete[] p;
}
 //////////////////////////////////////////////////////////////////////////////
void print_vec(const vector<int>& v) {    //vector
    for (int i = 0; i<v.size(); ++i)
        cout << v[i] << " ";
}

void f(const vector<int>& v) {    //vektor
    vector<int> lv(v.size());
    lv = gv;
    print_vec(lv);
    cout << "\n";
    vector<int> lv2(v);
    print_vec(lv2);
    cout << "\n";
}

void init_gv(vector<int>& v) {      //vektor
    for (int i = 0; i<10; ++i)
        v.push_back(pow(2,i));
}
/////////////////////////////////////////////////////////////////

int main()
try {
    f(ga,gas);
    const int las = 10;
    int aa[las] = { 1 };
    for (int i = 1; i<las; ++i) aa[i] = aa[i-1]*(i+1);
    f(aa,las);
/////////////////////////////////////
init_gv(gv);             //vektor
    f(gv);
    vector<int> vv;
    vv.push_back(1);
    for (int i = 1; i<10; ++i)
        vv.push_back((i+1)*vv[i-1]);
    f(vv);
return 0;




}
catch (exception& e) {
    cerr << "exception: " << e.what() << endl;
}
catch (...) {
    cerr << "exception\n";
}