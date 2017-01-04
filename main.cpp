#include <iostream>
using namespace std;
double celsius,fahrenheit,cm,m,km,cm2,m2,km2,cm3,m3,km3,sec,mi,h,kh;
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
//volum//
double convertCmM3(){cm3 = cm3 / 1000000;}

double convertCmKm3(){cm3 = cm3 / 1000000000000;}

double convertMcm3(){m3 = m3 * 1000000;}

double convertMkm3(){m3 = m3 / 1000000000 ;}

double convertKmCm3(){km3 = km3 * 1000000000000;}

double convertKmM3(){km3 = km3 * 1000000000;}
//timp/
    double convertSecMin(){sec = sec / 60;}

    double convertSecH(){sec = sec / 3600;}

    double convertMinSec(){mi = mi * 60;}

    double convertMinH(){mi = mi / 60;}

    double convertHsec(){h = h * 3600;}

    double convertHmin(){h = h * 60;}
 //viteza//
double convertKhMlh(){kh = kh / 1.609344;}
double convertKhMs() {kh = kh * 0.27777777777778;}
//temperatura//
double convertF(){celsius = ((fahrenheit - 32) * 5) / 9;}

double convertC(){fahrenheit = (((celsius * 9) / 5) + 32);}


int main()
{
Begin:	unsigned short choice;

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

B1:	    unsigned short c1;

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
	      cout<<endl;
	      goto B1;
          }
          break;

case 2:
  B2:       unsigned short c2;

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

	      cout << "Scrie aria in Centimetri2.\n";

	      cin >> cm2;
	      convertCmM2();

	      cout << "\n";
	      cout << "Aria in Metri2 este " << cm2 << ".\n";

	      cout << endl;
	      break;

	      case 2:

	      cout << "Scrie aria in Centimetri2.\n";

	      cin >> cm2;
	      convertCmKm2();

	      cout << "\n";
	      cout << "Aria in Kilometri2 este " << cm2 << ".\n";
          cout << endl;
	      break;

	      case 3:

	      cout << "Scrie aria in Metri2.\n";

	      cin >> m2;
	      convertMcm2();

	      cout << "\n";
	      cout << "Aria in Centimetri2 este " << m2 << ".\n";
          cout << endl;
	      break;

          case 4:

	      cout << "Scrie aria in Metri2.\n";

	      cin >> m2;
	      convertMkm2();

	      cout << "\n";
	      cout << "Aria in Kilometri2 este " << m2 << ".\n";
          cout << endl;
	      break;

          case 5:

	      cout << "Scrie aria in Kilometri2.\n";

	      cin >> km2;
	      convertKmCm2();

	      cout << "\n";
	      cout << "Aria in Centimetri2 este " << km2 << ".\n";
          cout << endl;
	      break;

          case 6:

	      cout << "Scrie aria in Kilometri2.\n";

	      cin >> km2;
	      convertKmM2();

	      cout << "\n";
	      cout << "Aria in Centimetri2 este " << km2 << ".\n";
          cout << endl;
	      break;

	      default:

	      cout << "Ai ales gresit!" << endl;
	      cout<<endl;
	      goto B2;
          }
          break;

case 3:
   B3:      unsigned short c3;

         cout << "Apasa '1' pentru a converti Centrimetri3 in Metri3." << endl;
	     cout << "Apasa '2' pentru a converti Centrimetri3 in Kilmetri3." << endl;
	     cout << "Apasa '3' pentru a converti Metri3 in Centimetri3." << endl;
	     cout << "Apasa '4' pentru a converti Metri3 in Kilmetri3." << endl;
	     cout << "Apasa '5' pentru a converti Kilometri3 in Centimetri3." << endl;
	     cout << "Apasa '6' pentru a converti Kilometri3 in Metri3." << endl;
         cin>> c3;
       switch (c3)
          {

	      case 1:

	      cout << "Scrie volumul in Centimetri3.\n";

	      cin >> cm3;
	      convertCmM3();

	      cout << "\n";
	      cout << "Volumul in Metri3 este " << cm3 << ".\n";

	      cout << endl;
	      break;

	      case 2:

	      cout << "Scrie volumul in Centimetri3.\n";

	      cin >> cm3;
	      convertCmKm3();

	      cout << "\n";
	      cout << "Volumul in Kilometri3 este " << cm3 << ".\n";
          cout << endl;
	      break;

	      case 3:

	      cout << "Scrie volumul in Metri3.\n";

	      cin >> m3;
	      convertMcm3();

	      cout << "\n";
	      cout << "Volumul in Centimetri3 este " << m3 << ".\n";
          cout << endl;
	      break;

          case 4:

	      cout << "Scrie volumul in Metri3.\n";

	      cin >> m3;
	      convertMkm3();

	      cout << "\n";
	      cout << "Volumul in Kilometri3 este " << m3 << ".\n";
          cout << endl;
	      break;

          case 5:

	      cout << "Scrie volumul in Kilometri3.\n";

	      cin >> km3;
	      convertKmCm3();

	      cout << "\n";
	      cout << "Volumul in Centimetri3 este " << km3 << ".\n";
          cout << endl;
	      break;

          case 6:

	      cout << "Scrie volumul in Kilometri3.\n";

	      cin >> km3;
	      convertKmM3();

	      cout << "\n";
	      cout << "Volumul in Centimetri3 este " << km3 << ".\n";
          cout << endl;
	      break;

	      default:

	      cout << "Ai ales gresit!" << endl;
	      cout<<endl;
	      goto B3;
          }
          break;

case 4:

B4:	    unsigned short c4;

         cout << "Apasa '1' pentru a converti Secunde in Minute." << endl;
	     cout << "Apasa '2' pentru a converti Secunde in Ore." << endl;
	     cout << "Apasa '3' pentru a converti Minute in Secunde." << endl;
	     cout << "Apasa '4' pentru a converti Minute in Ore." << endl;
	     cout << "Apasa '5' pentru a converti Ore in Secunde." << endl;
	     cout << "Apasa '6' pentru a converti Ore in Minute." << endl;
         cin>> c4;
       switch (c4)
          {

	      case 1:

	      cout << "Scrie timpul in Secunde.\n";

	      cin >> sec;
	      convertSecMin();

	      cout << "\n";
	      cout << "Timpul in Minute este " << sec << ".\n";

	      cout << endl;
	      break;

	      case 2:

	      cout << "Scrie timpul in Secunde.\n";

	      cin >> sec;
	      convertSecH();

	      cout << "\n";
	      cout << "Timpul in Ore este " << sec << ".\n";
          cout << endl;
	      break;

	      case 3:

	      cout << "Scrie timpul in Minute.\n";

	      cin >> mi;
	      convertMinSec();

	      cout << "\n";
	      cout << "Timpul in Secunde este " << mi << ".\n";
          cout << endl;
	      break;

          case 4:

	      cout << "Scrie timpul in Minute.\n";

	      cin >> mi;
	      convertMinH();

	      cout << "\n";
	      cout << "Timpul in Ore este " << mi << ".\n";
          cout << endl;
	      break;

          case 5:

	      cout << "Scrie timpul in Ore.\n";

	      cin >> h;
	      convertHsec();

	      cout << "\n";
	      cout << "Timpul in Secunde este " << h << ".\n";
          cout << endl;
	      break;

          case 6:

	      cout << "Scrie timpul in Ore.\n";

	      cin >> h;
	      convertHmin();

	      cout << "\n";
	      cout << "Timpul in Minute este " << h << ".\n";
          cout << endl;
	      break;

	      default:

	      cout << "Ai ales gresit!" << endl;
	      cout<<endl;
	      goto B4;
          }
          break;

case 5:

B5:	    unsigned short c5;

         cout << "Apasa '1' pentru a converti Kilometri/ora in Mile/ora." << endl;
	     cout << "Apasa '2' pentru a converti Kilometri/ora in Metri/secunda." << endl;
	     cin>> c5;
       switch (c5)
          {
          case 1:

	      cout << "Scrie viteza in Kilometri/ora.\n";

	      cin >> kh;
	      convertKhMlh();

	      cout << "\n";
	      cout << "Viteza in Mile/ora este " << kh << ".\n";
          cout << endl;
	      break;

          case 2:

	      cout << "Scrie viteza in Kilometri/ora.\n";

	      cin >> kh;
	      convertKhMs();

	      cout << "\n";
	      cout << "Viteza in Metri/secunda este " << kh << ".\n";
          cout << endl;
	      break;

	      default:

	      cout << "Ai ales gresit!" << endl;
	      cout<<endl;
	      goto B5;
          }
          break;

case 6:

	B6:    unsigned short c6;

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

	      cout << "Scrie temperatura in Fahrenheit.\n";

	      cin >> fahrenheit;
	      convertF();

	      cout << "\n";
	      cout << "Temperatura in Celsius este " << celsius << ".\n";
          cout << endl;
	      break;

	      default:

	      cout << "Ai ales gresit!" << endl;
	      cout<<endl;
	      goto B6;
          }
          break;

	      default:

	      cout << "Ai ales gresit!" << endl;
	      cout<<endl;
	      goto Begin;

}
	return 0;
}
