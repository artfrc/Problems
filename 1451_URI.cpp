#include <bits/stdc++.h>
using namespace std;

int main(){

	string s;

	while(cin >> s){

		int i = 0;
		string ans, aux;
		bool flag = false;
		while(i < s.size()){

			if(s[i] == '[' && !flag) flag = true;

			else if(s[i] == '[' && flag){

				aux.append(ans);
				ans = aux;
				aux.erase(0);

			}else if(s[i] == ']' && flag){

				aux.append(ans);
				ans = aux;
				aux.erase(0);
				flag = false;

			}else if(s[i] == ']' && !flag){
			}else if(flag){

				aux += s[i];

			}else{

				ans += s[i];

			}

			i++;

		}
		if(flag){
			aux.append(ans);
			ans = aux;
		}
		else{
			ans.append(aux);			
		}

		cout << ans << endl;

	}


}