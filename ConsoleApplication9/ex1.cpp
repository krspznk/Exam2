#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

struct ClassRoom
{
public:
	int No;
	float D;
	float W;
};

void InputInformation(vector<ClassRoom>& R, int No)
{
	ClassRoom temp;
	for (int i = 0; i < No; i++)
	{
		cout << "Enter information for " << i + 1 << " room:" << endl;
		cout << "Nomber of room: "; cin >> temp.No;
		cout << "length: "; cin >> temp.D;
		cout << "width: "; cin >> temp.W;
		R.push_back(temp);
	}
}

void OutputInformation(vector<ClassRoom>& R, int No)
{
	cout << setw(10) << "Number" << setw(10) << "length" << setw(10) << "width" << endl;
	for (int i = 0; i < No; i++)
	{
		cout << setw(10) << R[i].No << setw(10) << R[i].D << setw(10) << R[i].W << endl;
	}
}

int main()
{
	int No, K;
	vector<ClassRoom> R;
	vector <int> Comp;
	cout << "Enter number of rooms: ";
	cin >> No;

	InputInformation(R, No);

	cout << "Enter amoung of computers: ";
	cin >> K;

	for (int i = 0; i < No; i++)
	{
		if ((R[i].D * R[i].W) >= K * 3)
			Comp.push_back(R[i].No);
	}

	cout << "\nClassRoom: " << endl;
	OutputInformation(R, No);

	cout << "\nComp: " << endl;
	cout << setw(10) << "Amoung" << endl;
	for (int i = 0; i < Comp.size(); i++)
		cout << setw(7) << Comp[i];
	cout << endl;

	return 0;
}
