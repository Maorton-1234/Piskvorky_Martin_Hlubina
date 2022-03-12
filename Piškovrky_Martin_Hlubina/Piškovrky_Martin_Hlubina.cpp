#include <iostream>
using namespace std;

string X = "X", O = "O", vyherca;
int pole, tah = 0;
int P1, P2, P3, P4, P5, P6, P7, P8, P9;
bool remiza = false;

string Plocha[3][3]{
		{"1","2","3"},
		{"4","5","6"},
		{"7","8","9"} };

void zapisovanie_X() {
	cin >> pole;
	switch (pole) {
	case 1:
		if (P1 != 1) {
			Plocha[0][0] = X;
			P1 = 1;
		}
		else if (P1 == 1) {
			cout << "Miesto nieje volne" << endl;

			zapisovanie_X();
		}
		break;
	case 2:
		if (P2 != 1) {
			Plocha[0][1] = X;
			P2 = 1;
		}
		else if (P2 == 1) {
			cout << "Miesto nieje volne" << endl;

			zapisovanie_X();
		}
		break;
	case 3:
		if (P3 != 1) {
			Plocha[0][2] = X;
			P3 = 1;
		}
		else if (P3 == 1) {
			cout << "Miesto nieje volne" << endl;

			zapisovanie_X();
		}
		break;
	case 4:
		if (P4 != 1) {
			Plocha[1][0] = X;
			P4 = 1;
		}
		else if (P4 == 1) {
			cout << "Miesto nieje volne" << endl;

			zapisovanie_X();
		}
		break;
	case 5:
		if (P5 != 1) {
			Plocha[1][1] = X;
			P5 = 1;
		}
		else if (P5 == 1) {
			cout << "Miesto nieje volne" << endl;

			zapisovanie_X();
		}
		break;
	case 6:
		if (P6 != 1) {
			Plocha[1][2] = X;
			P6 = 1;
		}
		else if (P6 == 1) {
			cout << "Miesto nieje volne" << endl;

			zapisovanie_X();
		}
		break;
	case 7:
		if (P7 != 1) {
			Plocha[2][0] = X;
			P7 = 1;
		}
		else if (P7 == 1) {
			cout << "Miesto nieje volne" << endl;

			zapisovanie_X();
		}
		break;
	case 8:
		if (P8 != 1) {
			Plocha[2][1] = X;
			P8 = 1;
		}
		else if (P8 == 1) {
			cout << "Miesto nieje volne" << endl;

			zapisovanie_X();
		}
		break;
	case 9:
		if (P9 != 1) {
			Plocha[2][2] = X;
			P9 = 1;
		}
		else if (P9 == 1) {
			cout << "Miesto nieje volne" << endl;

			zapisovanie_X();
		}
		break;
	default:
		cout << "Zle cislo, zadajte novu hodnotu" << endl;
		cin >> pole;
		zapisovanie_X();
		break;
	}
}

void zapisovanie_O() {
	cin >> pole;
	switch (pole) {
	case 1:
		if (P1 != 1) {
			Plocha[0][0] = O;
			P1 = 1;
		}
		else if (P1 == 1) {
			cout << "Miesto nieje volne" << endl;
			zapisovanie_O();
		}
		break;
	case 2:
		if (P2 != 1) {
			Plocha[0][1] = O;
			P2 = 1;
		}
		else if (P2 == 1) {
			cout << "Miesto nieje volne" << endl;
			zapisovanie_O();
		}
		break;
	case 3:
		if (P3 != 1) {
			Plocha[0][2] = O;
			P3 = 1;
		}
		else if (P3 == 1) {
			cout << "Miesto nieje volne" << endl;
			zapisovanie_O();
		}
		break;
	case 4:
		if (P4 != 1) {
			Plocha[1][0] = O;
			P4 = 1;
		}
		else if (P4 == 1) {
			cout << "Miesto nieje volne" << endl;
			zapisovanie_O();
		}
		break;
	case 5:
		if (P5 != 1) {
			Plocha[1][1] = O;
			P5 = 1;
		}
		else if (P5 == 1) {
			cout << "Miesto nieje volne" << endl;
			zapisovanie_O();
		}
		break;
	case 6:
		if (P6 != 1) {
			Plocha[1][2] = O;
			P6 = 1;
		}
		else if (P6 == 1) {
			cout << "Miesto nieje volne" << endl;
			zapisovanie_O();
		}
		break;
	case 7:
		if (P7 != 1) {
			Plocha[2][0] = O;
			P7 = 1;
		}
		else if (P7 == 1) {
			cout << "Miesto nieje volne" << endl;
			zapisovanie_O();
		}
		break;
	case 8:
		if (P8 != 1) {
			Plocha[2][1] = O;
			P8 = 1;
		}
		else if (P8 == 1) {
			cout << "Miesto nieje volne" << endl;
			zapisovanie_O();
		}
		break;
	case 9:
		if (P9 != 1) {
			Plocha[2][2] = O;
			P9 = 1;
		}
		else if (P9 == 1) {
			cout << "Miesto nieje volne" << endl;
			zapisovanie_O();
		}
		break;
	default:
		cout << "Zle cislo, zadajte novu hodnotu" << endl;
		cin >> pole;
		zapisovanie_O();
		break;
	}
}

void vypis() {
	cout << "\n" << Plocha[0][0] << "|" << Plocha[0][1] << "|" << Plocha[0][2] << endl << Plocha[1][0] << "|" << Plocha[1][1] << "|" << Plocha[1][2] << endl << Plocha[2][0] << "|" << Plocha[2][1] << "|" << Plocha[2][2];
}

bool kontrola() {
	for (int i = 0; i < 3; i++)
	{
		if (Plocha[i][0] == Plocha[i][1] && Plocha[i][0] == Plocha[i][2] || Plocha[0][i] == Plocha[1][i] && Plocha[0][i] == Plocha[2][i])
			return true;
	}
	if (Plocha[0][0] == Plocha[1][1] && Plocha[0][0] == Plocha[2][2] || Plocha[0][2] == Plocha[1][1] && Plocha[1][1] == Plocha[2][0]) {
		return true;
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (Plocha[i][j] != "X" && Plocha[i][j] != "O")
			{
				return false;
			}
		}
	}
	remiza = true;
	return false;
}

int main() {
	vypis();
	while (!kontrola()) {
		cout << "\n\t\tNa tahu je hrac X" << endl;
		zapisovanie_X();
		cout << "\n\n"; vypis(); cout << "\n";
		vyherca = X, tah++;
		if (kontrola())
			break;
		if (tah >= 9)
			break;
		cout << "\t\tNa tahu je hrac O" << endl;
		zapisovanie_O();
		cout << "\n\n"; vypis(); cout << "\n";
		vyherca = O; tah++;
		if (kontrola())
			break;
		


	}
	cout << "\n\t\tKONIEC HRY" << endl;
	if (tah >= 9) {
		cout << "Je to remiza" << endl;
	}
	else {
		cout << "Vyhral hrac " << vyherca << endl;
	};
}