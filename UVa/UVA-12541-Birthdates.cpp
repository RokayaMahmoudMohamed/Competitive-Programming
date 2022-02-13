#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
struct person{
	string name;
	int day;
	int month;
	int year;
};
bool comp(const person &frist, const person &second)
{
	if (frist.year != second.year)
		return frist.year <second.year;

	else if (frist.month != second.month)
		return frist.month <second.month;

	else 	return frist.day<= second.day;
}
int main()
{
    int t;
	cin >> t;
	vector<person> v(t);
	for (int i = 0; i < t; i++)
	{
		cin >> v[i].name >> v[i].day >> v[i].month >> v[i].year;
	}
	sort(v.begin(), v.end(), comp);


	cout << v[t - 1].name << endl << v[0].name << endl;
	return 0;

}
