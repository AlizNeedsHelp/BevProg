#include "std_lib_facilities.h"

int main(){
	
	cout << "Adjon meg egy értéket és egy mértékegységet (m, cm, in, ft)!" << endl;

	char w;
	
    vector<double> szamok;

    vector<double> meter;

    double max = 0;

    string egyseg;

    double cm = 0.01, in = 0.0254, ft = 0.3048;

    double osszeg = 0;

	while(w != '|'){
		
        double ertek;

        cout << "Érték = ";
            
        cin >> ertek >> egyseg;

		if(egyseg == "m" || egyseg == "cm" || egyseg == "in" || egyseg == "ft"){
            
            if (egyseg == "m")
            {
                meter.push_back(ertek);
            }
            else if (egyseg == "cm")
            {
                meter.push_back(ertek * cm);
            }
            else if (egyseg == "in")
            {
                meter.push_back(ertek * in);
            }
            else if (egyseg == "ft")
            {
                meter.push_back(ertek * ft);
            }

            szamok.push_back(ertek);

            for(int i = 0; i < szamok.size(); i++){

                if(max < szamok[i]) max = szamok[i];

            }

            double min = max;

            for(int i = 0; i < szamok.size(); i++){

                if(min > szamok[i]) min = szamok[i];

            }

            cout << "Az eddigi legkisebb szám: " << min << "\nAz eddigi legnagyobb szám: " << max << endl;

        }
        else{

            cout << "Nem elfogadható egység!! Próbálja újra!"<< endl;

        }

		cout << "Ha ki szeretne lépni írja be a '|', a folytatáshoz pedig bármenyik karaktert! " << endl;
		
		cin >> w;

	}

    for (int i = 0; i < meter.size(); ++i)
    {
        osszeg = osszeg + meter[i];
    }

    cout << "A megadott értékek összege: "  << osszeg << endl;

    sort(meter);

    for (int i = 0; i < meter.size(); ++i)
    {
        cout << meter[i] << " m    ";
    }

    cout << endl;

	return 0;

}
