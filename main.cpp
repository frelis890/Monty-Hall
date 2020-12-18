#include <iostream>
#include <random>
#include <string>
#include <cmath>

using namespace std;

int main() {

int m,n,p,w,z,s,i;
int zmiana=0;
int brak=0;
int zmiana_g=0;
int zmiana_b=0;
int brak_g=0;
int brak_b=0;
double zmiana_proc;
double brak_proc;

srand(time(NULL));
cout << "Ile powtórzeń chcesz zainicjować?" << endl;
cin >> s; 

for (i=0; i<s; i++) {

m = rand()%4;
if (m == 0) {
	m = m + 1;
}
//cout << "Liczba m: " <<m<<endl;
n = rand()%4;
if (n ==0) {
	n = n + 1;
}
cout << "\n\n--------------------" << endl;
cout << "\nWybierz liczbę między 1 a 3:" << endl;
cout << "Liczba wybrana to: "<< n << endl;

if (m == n) {
	p = rand()%11;
	//cout << "Liczba p: " <<p<<endl;
	if (m == 1) {
		if (p<=5) {
			cout << "\nUjawniamy jedną kozę za drzwiami nr " << 2;
			w = 3;}
	  	else if (p>5) {
			cout << "\nUjawniamy jedną kozę za drzwiami nr " <<3;
			w = 2;}
	}	  
  	else if (m == 2) {
	  	if (p<=5) {
			  cout << "\nUjawniamy jedną kozę za drzwiami nr " <<1;
			  w = 3;}
	  	else if (p > 5) {
			  cout << "\nUjawniamy jedną kozę za drzwiami nr " <<3;
			  w = 1;}
	}
  	else if (m == 3) {
	  	if (p<=5) {
			  cout << "\nUjawniamy jedną kozę za drzwiami nr " <<1;
			  w = 2;}
	  	else if (p>5) {
			  cout << "\nUjawniamy jedną kozę za drzwiami nr " <<2;
			  w = 1;}
	}
}
else {
	if (m == 1 && n == 2) {
		cout << "\nUjawniamy jedną kozę za drzwiami nr " <<3;
		w = 1;
	}
	else if (m == 1 && n == 3) {
		cout << "\nUjawniamy jedną kozę za drzwiami nr " <<2;
		w = 1;
	}
	else if (m == 2 && n == 1) {
		cout << "\nUjawniamy jedną kozę za drzwiami nr " <<3;
		w = 2;
	}
	else if (m == 2 && n == 3) {
		cout << "\nUjawniamy jedną kozę za drzwiami nr " <<1;
		w = 2;
	}
	else if (m == 3 && n == 1) {
		cout << "\nUjawniamy jedną kozę za drzwiami nr " <<2;
		w = 3;
	}
	else if (m == 3 && n == 2) {
		cout << "\nUjawniamy jedną kozę za drzwiami nr " <<1;
		w = 3;
	}
}

cout << "\n\nCzy chcesz zmienić wybór drzwi? (t/n)" << endl;
z = rand()%2;
//cout << z << endl;

if (z == 1) {
	cout << "t" << endl;
	cout << "\nWybierasz więc drzwi nr " << w << ".";
	if (w == m) {
		cout << "\n\nŚwietny wybór! Wygrałeś! Samochód był za drzwiami nr "<<m<<".";
		zmiana_g++;
	}
	else if (w != m) {
		cout << "\n\nNie był to dobry wybór. Samochód był za drzwiami nr "<<m<<". Otrzymujesz kozę.";
		zmiana_b++;
	}
	zmiana++;
}
else if ( z == 0) {
	cout << "n" << endl;
	cout << "\nPozostajesz więc przy wyborze drzwi nr " << n << ".";
	if (n == m) {
		cout << "\n\nŚwietny wybór! Wygrałeś! Samochód był za drzwiami nr "<<m<<".";
		brak_g++;
	}
	else if (n != m) {
		cout << "\n\nNie był to dobry wybór. Samochód był za drzwiami nr "<<m<<". Otrzymujesz kozę.";
		brak_b++;
	}
	brak++;
}
}

zmiana_proc = (zmiana_g * 100)/ zmiana;
brak_proc = (brak_g * 100)/ brak;

cout << "\n\nPODSUMOWANIE" << endl;
cout << "\nIlość powtórzeń: " << s << endl;
cout << "Zmian wyboru: " << zmiana << endl;
cout << "Zmian zakończonych sukcesem: " << zmiana_g << endl;
cout << "Zmian zakończonych klęską: " << zmiana_b << endl;
cout << "Braku zmian: " << brak << endl;
cout << "Braku zmian zakończonych sukcesem: " << brak_g << endl;
cout << "Braku zmian zakończonych klęską: " << brak_b << endl;
cout << "\nProcent zmian zakończonych sukcesem: "<< zmiana_proc << "%"<<endl;
cout <<"Procent braku zmian zakończonych sukcesem: "<< brak_proc << "%"<<endl;
}