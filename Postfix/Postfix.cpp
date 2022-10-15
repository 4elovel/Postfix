#include <iostream>
#include <vector>

using namespace std;

class My_vec
{
public:
	vector <int> vec;
	My_vec(int a, int b, int c) {
		vec.push_back(a);
		vec.push_back(b);
		vec.push_back(c);
	}

	My_vec operator--(int unvalid_index) {
		for (size_t i = 0; i < this->vec.size(); i++)
		{
			this->vec[i] -= 1;
		}
		return *this;
	}
	void print() {
		for (size_t i = 0; i < this->vec.size(); i++)
		{
			cout << this->vec[i] << " ";
		}
		cout << endl;
	}
};

int main()
{
	My_vec vec(7,2,3);
	vec.print();
	vec--;
	vec.print();
}
