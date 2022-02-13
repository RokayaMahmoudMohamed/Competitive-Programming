#include <iostream>
#include <vector>
#include<queue>
using namespace std;
string s;
int main()
{
	int n;
	vector<int>m;
	queue<int >q;
	while (cin >> n)
	{
		if (n == 0)
			return 0;
		for (int j = 1; j <= n; j++)
			q.push(j);
		while (q.size() > 1)
		{
			m.push_back(q.front());
			q.pop();
			q.push(q.front());
			q.pop();
		}
		cout << "Discarded cards:";
		for (int j = 0; j < m.size(); j++)
		{
			cout << " " << m[j];
			if (j + 1 < m.size())
				cout << ",";
		}
		cout << "\n";
		cout << "Remaining card:";
		cout << " " << q.front();
		q.pop();
		cout << "\n";
 
		m.clear();
 
	}
 
	return 0;
}
