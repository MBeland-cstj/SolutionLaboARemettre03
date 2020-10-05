//But : Calculer le salaire hebdomadaire d'un employer selon le nombre de commission et son pourcentage
//Auteur : Maxime B�land
//Date : 5 Octobre 2020

#include<iostream>

using namespace std;

int main()
{
	//D�claration des variables
	const float POURCENT = 7.5; //Repr�sente le pourcentage des commission qui est compt�.
	const int SALAIRE_INITIAL = 250; //Repr�sente le salaire fixe avant commission.
	int montantCommission; //Repr�sente le montant de la commission.
	float tempo; //Varaible servant a stocker temporairement des donn�es.
	float total = 0; //Variable qui permet de stocket l'addition repr�sentant l'addition des montant li� aux commissions
	float salaireHebdo; //Variable servant � donner a l'utilisateur le salaire hebdomadaire finale.

	//Initialisation des variables
	cout << "Entrez le montant de la commission : ";
	cin >> montantCommission;



	int cpt = 0; //Initialisation du compteur de la boucle.
	while (montantCommission != -1) //Regarde si le nombre entr� n'est pas -1. car si c'est -1 le programme doit arreter.
	{
		if ( montantCommission >=0 ) //s'assure que la variable �crite par l'utilisateur est positive
		{
		tempo = montantCommission * 7.5 / 100; //Calcul permettant de savoir le montant de chaque commission
		total = total + tempo; //Permet de calculer le total des commissions selon l'avancement de la boucle.




		}
		else //Si le nombre entr�e est n�gatif et pas -1
		{
			cout << "Le nombre entr� n'est pas positif, afin de continuer, vous devez entrez un nombre positif." << endl; //La boucle renvoie directement � la question concernant le montant de la commission.
		}		
		cout << "Entrez le montant de la commission : "; //Question initial
		cin >> montantCommission;
		cpt = cpt++; //Compte le nombre de r�p�tition de la boucle
	}
	salaireHebdo = SALAIRE_INITIAL + total; //Calcul du salaire hebdomadaire de l'employer avec son 250$.

	cout << "Voici le salaire hebdomadaire de l'employer en question : " << salaireHebdo; //Message final.




	return 0;
}

//Plan de test : 
/*
Montant commision		salaireHebdo
69 232 420 -1				304.07
-1							0
-2						Nombre n�gatif
400 567 7000				847.525

*/