#include <bits/stdc++.h>
using namespace std;

int main(){

	int T, i = 0;
	bool f = false;
	while(cin >> T && T != 0){

		i++;
		if(f) cout << "\n";
		cout << "Cidade# " << i << ":\n";
		map<int,int> Map;
		T++;
		int p = 0, c = 0, H, C;
		double M;

		while(T > 1){
			cin >> H >> C;
			M = (double)C/H;
			Map[M] += H;

			p += H;
			c += C;

			T--;
		}
		bool ok = false;
		for(auto &x : Map){
			if(ok) cout << " ";
			cout << x.second << "-" << floor(x.first);

			ok = true;
		}
			double aux = ((double)c/p)*100;
			int out = aux;
			aux = out/100.0;
			printf("\nConsumo medio: %.2lf m3.\n", aux);
			f = true;
	}	


}