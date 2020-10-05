//But : Calculer le salaire hebdomadaire d'un employer selon le nombre de commission et son pourcentage
//Auteur : Maxime Béland
//Date : 5 Octobre 2020

#include<iostream>

using namespace std;

int main()
{
	//Déclaration des variables
	const float POURCENT = 7.5; //Représente le pourcentage des commission qui est compté.
	const int SALAIRE_INITIAL = 250; //Représente le salaire fixe avant commission.
	int montantCommission; //Représente le montant de la commission.
	float tempo; //Varaible servant a stocker temporairement des données.
	float total = 0; //Variable qui permet de stocket l'addition représentant l'addition des montant lié aux commissions
	float salaireHebdo; //Variable servant à donner a l'utilisateur le salaire hebdomadaire finale.

	//Initialisation des variables
	cout << "Entrez le montant de la commission : ";
	cin >> montantCommission;



	int cpt = 0; //Initialisation du compteur de la boucle.
	while (montantCommission != -1) //Regarde si le nombre entré n'est pas -1. car si c'est -1 le programme doit arreter.
	{
		if ( montantCommission >=0 ) //s'assure que la variable écrite par l'utilisateur est positive
		{
		tempo = montantCommission * 7.5 / 100; //Calcul permettant de savoir le montant de chaque commission
		total = total + tempo; //Permet de calculer le total des commissions selon l'avancement de la boucle.




		}
		else //Si le nombre entrée est négatif et pas -1
		{
			cout << "Le nombre entré n'est pas positif, afin de continuer, vous devez entrez un nombre positif." << endl; //La boucle renvoie directement à la question concernant le montant de la commission.
		}		
		cout << "Entrez le montant de la commission : "; //Question initial
		cin >> montantCommission;
		cpt = cpt++; //Compte le nombre de répétition de la boucle
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
-2						Nombre négatif
400 567 7000				847.525

*/