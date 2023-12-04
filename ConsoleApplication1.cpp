#include<iostream>
#include<vector>

using namespace std;

void backtrack(std::vector<int>& elements, std::vector<int>& current, std::vector<bool>& used) 
{
	if (elements.empty()) 
	{
		for (int num:current) 
		{
			std::cout << num << "";
		}
		std::cout << "\n";
		return;
	}
	for (int i = 0; i < elements.size(); i++) 
	{
		if (!used[i]) 
		{
			int chosen = elements[i];
			current.push_back(chosen);
			used[i] = true;
			
			cout << "Calling backtrack with chosen = " << chosen << endl;

			backtrack(elements, current, used);

			used[i] = false;
			current.pop_back();
		}
	}
}
int main()
{
	std::vector<int> elements = {1,2,3};
	std::vector<int> current;
	std::vector<bool> used(elements.size(), false);
	backtrack(elements, current, used);
	return 0;
}