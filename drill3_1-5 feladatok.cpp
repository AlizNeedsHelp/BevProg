#include "std_lib_facilities.h"

int main(){

cout << "Adjon meg két számot!" << endl;
cout <<"Ha ki szeretne lépni adja meg a '|' karaktert vagy folytassa a számolást egy karakter megnyomásával !"<<endl;

	
	char w;
	const double megengedett_kulonbseg=1.0/100;
	while(w != '|'){//barackhu1 segítségével végre működik
		
		double elso_szam;
		double masodik_szam;
		double kulonbseg=abs(elso_szam-masodik_szam);//abszolút értékben hogy pozitív legyen a különbség pl:4-9=|-5| azaz 5

		cout << "elso_szam = ";
		
		cin >> elso_szam;
		
		cout << "masodik_szam = ";
		
		cin >> masodik_szam;

		if (elso_szam<masodik_szam){
			cout << "A kisebb szam a/az: " << elso_szam << endl;
			
			cout << "A nagyobb szám a/az: " << masodik_szam << endl;

		}
		else if (elso_szam>masodik_szam){
			cout << "A kisebb szam a/az: " << masodik_szam << endl;
			
			cout << "A nagyobb szám a/az: " << elso_szam << endl;
		}

		else if(elso_szam == masodik_szam){
		
			cout << "A szamok egyformak" << endl;
		
		}

		if(kulonbseg<megengedett_kulonbseg){
			cout<<"A ket szam majdnem egyforma"<<endl;
		}


		cin>>w;//a két szám beírása után folytatom egy karakter benyomásával, vagy kilépek "|"-vel
	}
	return 0;
}
