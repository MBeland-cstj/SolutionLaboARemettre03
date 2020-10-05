//But : 
//Auteur : Maxime Béland
//Date : 5 Octobre 2020
#include <time.h>
#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	int iRandom; // permet de mémoriser le nombre choisi aléatoirement par l’ordinateur
	srand(time(0)); // pour activer l’aléatoire dans le programme
	iRandom = rand() % 101; // l’ordinateur calcule un nombre aléatoire entre 0 et 100 et le stocke dans iRandom
	int nombre;

	cout << "Essayez de devinez le nombre : ";
	cin >> nombre;

	int cpt = 1;
	while (nombre >= 0 && nombre <= 100 && cpt <= 5)
	{

		if (nombre == iRandom)
		{
			cout << "GG you won, may god have mercy on your soul. Le nombre était : " << iRandom;
		}
		else
		{
			cout << "Tu n'as pas trouvé le nombre.";

			if (iRandom > nombre)
			{
				cout << "Le nombre chercher est supérieur à " << nombre << endl;
			}
			if (iRandom < nombre)
			{
				cout << "Le nombre chercher est inférieur à " << nombre << endl;
			}
		}
			
		cout << "Vous êtes à votre " << cpt << "/5" << endl;
		
		cout << "Essayez de devinez le nombre : ";
		cin >> nombre;
		cpt++;
	}

	return 0;
}