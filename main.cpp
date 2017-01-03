#include <iostream>
using namespace std;
double celsius,fahrenheit,cm,m,km,cm2,m2,km2;
//lungime//
double convertCmM(){cm = cm / 100;}

double convertCmKm(){cm = cm / 100000;}

double convertMcm(){m = m * 100;}

double convertMkm(){m = m / 1000;}

double convertKmCm(){km = km * 100000;}

double convertKmM(){km = km * 1000;}
//arie//
  double convertCmM2(){cm2 = cm2 / 10000;}

  double convertCmKm2(){cm2 = cm2 / 10000000000;}

  double convertMcm2(){m2 = m2 * 10000;}

  double convertMkm2(){m2 = m2 / 1000000;}

  double convertKmCm2(){km2 = km2 * 10000000000;}

  double convertKmM2(){km2 = km2* 1000000;}
//temperatura//
double convertF(){celsius = ((fahrenheit - 32) * 5) / 9;}

double convertC(){fahrenheit = (((celsius * 9) / 5) + 32);}


int main()
{
	unsigned short choice;

	cout << "Apasa '1' pentru a converti Lungimea." << endl;
	cout << "Apasa '2' pentru a converti Aria." << endl;
	cout << "Apasa '3' pentru a converti Volum." << endl;
	cout << "Apasa '4' pentru a converti Timp." << endl;
	cout << "Apasa '5' pentru a converti Viteza." << endl;
	cout << "Apasa '6' pentru a converti Temperatura." << endl;
	cout << "Apasa '7' pentru a converti Masa." << endl;
	cout << "Apasa '8' pentru a converti Energie." << endl;
	cout << "Apasa '9' pentru a converti Presiune." << endl;
	cout << "Apasa '10' pentru a converti Densitate." << endl;
	cout << "Apasa '11' pentru a converti Consum combustibil." << endl;
	cin >> choice;

	switch (choice)
{
    case 1:

	    unsigned short c1;

         cout << "Apasa '1' pentru a converti Centrimetri in Metri." << endl;
	     cout << "Apasa '2' pentru a converti Centrimetri in Kilmetri." << endl;
	     cout << "Apasa '3' pentru a converti Metri in Centimetri." << endl;
	     cout << "Apasa '4' pentru a converti Metri in Kilmetri." << endl;
	     cout << "Apasa '5' pentru a converti Kilometri in Centimetri." << endl;
	     cout << "Apasa '6' pentru a converti Kilometri in Metri." << endl;
         cin>> c1;
       switch (c1)
          {

	      case 1:

	      cout << "Scrie lungimea in Centimetri.\n";

	      cin >> cm;
	      convertCmM();

	      cout << "\n";
	      cout << "Lungimea in Metri este " << cm << ".\n";

	      cout << endl;
	      break;

	      case 2:

	      cout << "Scrie lungimea in Centimetri.\n";

	      cin >> cm;
	      convertCmKm();

	      cout << "\n";
	      cout << "Lungimea in Kilometri este " << cm << ".\n";
          cout << endl;
	      break;

	      case 3:

	      cout << "Scrie lungimea in Metri.\n";

	      cin >> m;
	      convertMcm();

	      cout << "\n";
	      cout << "Lungimea in Centimetri este " << m << ".\n";
          cout << endl;
	      break;

          case 4:

	      cout << "Scrie lungimea in Metri.\n";

	      cin >> m;
	      convertMkm();

	      cout << "\n";
	      cout << "Lungimea in Kilometri este " << m << ".\n";
          cout << endl;
	      break;

          case 5:

	      cout << "Scrie lungimea in Kilometri.\n";

	      cin >> km;
	      convertKmCm();

	      cout << "\n";
	      cout << "Lungimea in Centimetri este " << km << ".\n";
          cout << endl;
	      break;

          case 6:

	      cout << "Scrie lungimea in Kilometri.\n";

	      cin >> km;
	      convertKmM();

	      cout << "\n";
	      cout << "Lungimea in Centimetri este " << km << ".\n";
          cout << endl;
	      break;

	      default:

	      cout << "Ai ales gresit!" << endl;
	      cout << "Inchide programul si repeta procesul." << endl;
	      break;
          }
          break;

    case 2:
         unsigned short c2;

         cout << "Apasa '1' pentru a converti Centrimetri2 in Metri2." << endl;
	     cout << "Apasa '2' pentru a converti Centrimetri2 in Kilmetri2." << endl;
	     cout << "Apasa '3' pentru a converti Metri2 in Centimetri2." << endl;
	     cout << "Apasa '4' pentru a converti Metri2 in Kilmetri2." << endl;
	     cout << "Apasa '5' pentru a converti Kilometri2 in Centimetri2." << endl;
	     cout << "Apasa '6' pentru a converti Kilometri2 in Metri2." << endl;
         cin>> c2;
       switch (c2)
          {

	      case 1:

	      cout << "Scrie lungimea in Centimetri2.\n";

	      cin >> cm2;
	      convertCmM2();

	      cout << "\n";
	      cout << "Lungimea in Metri2 este " << cm2 << ".\n";

	      cout << endl;
	      break;

	      case 2:

	      cout << "Scrie lungimea in Centimetri2.\n";

	      cin >> cm2;
	      convertCmKm2();

	      cout << "\n";
	      cout << "Lungimea in Kilometri2 este " << cm2 << ".\n";
          cout << endl;
	      break;

	      case 3:

	      cout << "Scrie lungimea in Metri2.\n";

	      cin >> m2;
	      convertMcm2();

	      cout << "\n";
	      cout << "Lungimea in Centimetri2 este " << m2 << ".\n";
          cout << endl;
	      break;

          case 4:

	      cout << "Scrie lungimea in Metri2.\n";

	      cin >> m2;
	      convertMkm2();

	      cout << "\n";
	      cout << "Lungimea in Kilometri2 este " << m2 << ".\n";
          cout << endl;
	      break;

          case 5:

	      cout << "Scrie lungimea in Kilometri2.\n";

	      cin >> km2;
	      convertKmCm2();

	      cout << "\n";
	      cout << "Lungimea in Centimetri2 este " << km2 << ".\n";
          cout << endl;
	      break;

          case 6:

	      cout << "Scrie lungimea in Kilometri2.\n";

	      cin >> km2;
	      convertKmM2();

	      cout << "\n";
	      cout << "Lungimea in Centimetri2 este " << km2 << ".\n";
          cout << endl;
	      break;

	      default:

	      cout << "Ai ales gresit!" << endl;
	      cout << "Inchide programul si repeta procesul." << endl;
	      break;
          }
          break;

    case 6:

	    unsigned short c6;

         cout << "Apasa '1' pentru a converti Celsius in Fahrenheit." << endl;
	     cout << "Apasa '2' pentru a converti Fahrenheit in Celsius." << endl;
         cin>> c6;
        switch (c6)
          {

	      case 1:

	      cout << "Scrie temperatura in Celsius.\n";

	      cin >> celsius;
	      convertC();

	      cout << "\n";
	      cout << "Temperatura in Fahrenheit este " << fahrenheit << ".\n";

	      cout << endl;
	      break;

	      case 2:

	      cout << "Scrie temperatura in in Fahrenheit.\n";

	      cin >> fahrenheit;
	      convertF();

	      cout << "\n";
	      cout << "Temperatura in Celsius este " << celsius << ".\n";
          cout << endl;
	      break;

	      default:

	      cout << "Ai ales gresit!" << endl;
	      cout << "Inchide programul si repeta procesul." << endl;
	      break;
          }
          break;
}

	return 0;
}
