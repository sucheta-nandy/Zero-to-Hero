//Grupo 28
//Lluís Cañellas Salesa
//Celia Martínez Graves


#include <iostream>
#include <vector>

using namespace std;

void N_reinas(vector<int> sol, int k, int& s, vector<bool>& filas, vector<bool>& d_asc, vector<bool>& d_desc, int size);
bool es_solucion(vector<int> sol, int k, vector<bool> filas, vector<bool> d_asc, vector<bool> d_desc, int size);
bool es_completable(vector<int> sol, int k, vector<bool> filas, vector<bool> d_asc, vector<bool> d_desc, int size);
bool no_ataca(vector<int> sol, int k, vector<bool> filas, vector<bool> d_asc, vector<bool> d_desc, int size);
int diag_desc(int x, int y);
int diag_asc(int x, int y);

int main(){

	int m;
	cin >> m;

	for (int i = 0; i < m; i++){
		int s = 0;	//Numero de soluciones encontradas

		int n = 1;
		cin >> n;
		vector<int> sol(n,0);
		vector<bool> filas(n);
		vector<bool> d_asc(n * 2 -1);
		vector<bool> d_desc(n * 2 - 1);
		N_reinas(sol, 0, s, filas, d_asc, d_desc, n);
		cout << s << endl;
	}
	return 0;
}

void N_reinas(vector<int> sol, int k, int& s, vector<bool>& filas, vector<bool>& d_asc, vector<bool>& d_desc, int size){

	for (int i = 0; i < size; i++){
		if (!filas[i] && !d_desc[diag_desc(k, i) + size - 1] && !d_asc[diag_asc(k, i)]){
			sol[k] = i;
			if (k == size - 1)
			//if (es_solucion(sol, k, filas, d_asc, d_desc, size))
				s++;
			else{
			//else if (es_completable(sol, k, filas, d_asc, d_desc,size)){
				filas[i] = true;
				d_asc[diag_asc(k, i)] = true;
				d_desc[diag_desc(k, i) + size - 1] = true;
				N_reinas(sol, k + 1, s, filas, d_asc, d_desc,size);
				filas[i] = false;
				d_asc[diag_asc(k, i)] = false;
				d_desc[diag_desc(k, i) + size - 1] = false;
			}
		}
	}
}

bool no_ataca(vector<int> sol, int k, vector<bool> filas, vector<bool> d_asc, vector<bool> d_desc, int size){
	return (!filas[sol[k]] && !d_asc[diag_asc(k, sol[k])] && !d_desc[diag_desc(k, sol[k]) + size - 1]);
}

bool es_solucion(vector<int> sol, int k, vector<bool> filas, vector<bool> d_asc, vector<bool> d_desc, int size){
	return((k == size - 1));
	//return((k == size - 1) && no_ataca(sol, k, filas, d_asc, d_desc,size));
}

bool es_completable(vector<int> sol, int k, vector<bool> filas, vector<bool> d_asc, vector<bool> d_desc, int size){
	return((k < size - 1));
	//return((k < size- 1) && no_ataca(sol, k, filas, d_asc, d_desc,size));
}

int diag_desc(int x, int y){
	return (x - y);
}

int diag_asc(int x, int y){
	return (x + y);
}