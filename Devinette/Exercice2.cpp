//But : 
//Auteur : Maxime B�land
//Date : 5 Octobre 2020
#include <time.h>
#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	int iRandom; // permet de m�moriser le nombre choisi al�atoirement par l�ordinateur
	srand(time(0)); // pour activer l�al�atoire dans le programme
	iRandom = rand() % 101; // l�ordinateur calcule un nombre al�atoire entre 0 et 100 et le stocke dans iRandom
	int nombre;

	cout << "Essayez de devinez le nombre : ";
	cin >> nombre;

	int cpt = 1;
	while (nombre >= 0 && nombre <= 100 && cpt <= 5)
	{

		if (nombre == iRandom)
		{
			cout << "GG you won, may god have mercy on your soul. Le nombre �tait : " << iRandom;
		}
		else
		{
			cout << "Tu n'as pas trouv� le nombre.";

			if (iRandom > nombre)
			{
				cout << "Le nombre chercher est sup�rieur � " << nombre << endl;
			}
			if (iRandom < nombre)
			{
				cout << "Le nombre chercher est inf�rieur � " << nombre << endl;
			}
		}
			
		cout << "Vous �tes � votre " << cpt << "/5" << endl;
		
		cout << "Essayez de devinez le nombre : ";
		cin >> nombre;
		cpt++;
	}

	return 0;
}