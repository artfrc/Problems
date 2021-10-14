#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

bool Crescente(int a, int b){

	return a < b;

}

bool Decrescente(int a, int b){

	return a > b;

}

int main(){

	int N, Q, caso = 0;

	while(cin >> N >> Q && N != 0 && Q != 0){
		caso++;
		vi marmores;
		vector< pair<int,int> > pares;
		int n_marmore, consulta;
		while(N > 0){
			cin >> n_marmore;
			marmores.push_back(n_marmore);
			N--;
		}
		
		sort(marmores.begin(), marmores.end(), Crescente);
		
		while(Q > 0){
			cin >> consulta;
			int flag = 0;
			while(flag < marmores.size() && marmores[flag] != consulta) flag++;

			flag++;

			if(flag > marmores.size()) flag = -1;

			pair<int,int> p(consulta, flag);
			pares.push_back(p); 						
						
			Q--;
		}

		int cont = 0;
		cout << "CASE# " << caso << ":\n";
		while(cont < pares.size()){
			if(pares[cont].second == -1) cout << pares[cont].first << " not found" << endl;
			else					     cout << pares[cont].first << " found at " << pares[cont].second << endl;	
		
			cont++;
		}
		
		pares.clear();	
		marmores.clear();

	}


	return 0;
}