#ifndef ZZ_Liste_chainee_h
#define ZZ_Liste_chainee_h

#define I 3
#define J 3 

int K=2;
typedef struct liste
{	int valeur;
	int ligne;
	int colonne;
	struct donnee * suivant;
}liste_t;
float * tab (int tabsize);
float min (float matrice[I][J]);
float max (float  matrice[I][J]);
void petitK( float  matrice[I][J]);








#endif