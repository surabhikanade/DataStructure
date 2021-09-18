#include <iostream>
using namespace std;

int main() {
	int n, m1, p1, m2, p2;
	cin >> n >> m1 >> p1 >> m2 >> p2;

	int min_cost = -1;

	for (int i=0; m1*i <= n; i++) 
	{
		int count2 = n - i*m1;

		if (count2%m2 == 0) 
		{
			int cost = p1 * i + p2 * (count2/m2);
            
			min_cost = (cost < min_cost || min_cost == -1) ? cost : min_cost;
		}
	}
	if (min_cost != -1)
		cout << min_cost << endl;
	else
		cout << "Invalid inputs" << endl;
}