/*
_______e$$$$$$$$$$e_______
______$$$$$$$$$$$$$$______
_____d$$$$$$$$$$$$$$b_____
_____$$$$$$$$$$$$$$$$_____
____4$$$$$$$$$$$$$$$$F____
____4$$$$$$$$$$$$$$$$F____
____$$$$"_"$$$$"_"$$$$$_____
_____$$F___4$$F___4$$_____
_____'$F____ 4$F___4$"_____
______$$___$$$$___$$______
______4$$$$$^$$$$$P_____
_______$$$$F__4$$$$_______
________"$$$ee$$$"________
________._*$$$$F_._________
_________$_____.$_________
_________"$$$$$$"_________
__________^$$$$___________
_4$$c_______""_______.$$r_
_^$$$b______________e$$$"_
_d$$$$$e__________z$$$$$b_
4$$$*$$$$$c____.$$$$$*$$$r
_""____^*$$$be$$$*"____^"_
__________"$$$$"__________
________.d$$P$$$b_________
_______d$$P___^$$$b_______
___.ed$$$"______"$$$be.___
_$$$$$$P__________*$$$$$$_
4$$$$$P____________$$$$$$"
_"*$$$"____________^$$P_
*/

/* ________/ /\ \___/ /\ \_____| |_____| |\ \____| |_____| |   | |___
__________/ /__\ \_/_/__\ \____| |_____| |_\ \___| |_____| |___| |___
_________/ /___\ \/ /___\ \____| |_____| |__\ \__| |_____|  ___  |___
________/ /______________\ \___| |_____| |___\ \_| |_____| |   | |___
_______/ /________________\ \__| |_____| |____\ \| |_____| |   | |___
*/
#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int n, res = 0;
	cin >> n;
	int l, r;
	map<pair<int, int>, int> M;
	for (int i = 0; i < n; i ++) {
		cin >> l >> r;
		int x = __gcd(l, r);
		if (M.find({l/abs(x), r/abs(x)}) == M.end()) {
			res ++;
		}
		M[{l/abs(x), r/abs(x)}] ++;
	}	
	cout << res;
}
