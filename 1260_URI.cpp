#include <bits/stdc++.h>
using namespace std;

struct info{

	string tree;
	double number;

};

int main(){

	int cases;
	bool ok = false;
	scanf("%d\n", &cases);

	while(cases > 0){

		map<string, int> Map;
		double t = 0;
		string s;
		while(getline(cin, s)){

			if(s == "\0") break;

			Map[s] += 1;
			t++;

		}

		if(ok) cout << "\n";
		ok = true;

		cout << fixed;
		cout.precision(4);

		for(auto x : Map) cout << x.first << " " << (x.second)/t*100 << "\n";

		cases--;
	}
	


}