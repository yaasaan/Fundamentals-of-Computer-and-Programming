
#include <iostream>
#include <conio.h>
#include <string>
#include <ctime>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <cmath>
#include <stdlib.h>
using namespace std;
int main()
{
	int allfinalscores[100];
	string allusernames[100];
	int x = 0;

	string sentences[10];
	sentences[0] = "Lionel Messi";
	sentences[1] = "Luis Suarez";
	sentences[2] = "Antoine Griezmann";
	sentences[3] = "Marc Andre Ter Stegen";
	sentences[4] = "Ousmane Dembele";
	sentences[5] = "Sergio Busquets";
	sentences[6] = "Gerard Pique";
	sentences[7] = "Jordi Alba";
	sentences[8] = "Sergi Roberto";
	sentences[9] = "Frenkie De Jong";

yasan:

	srand((unsigned)time(NULL));
	int y = rand() % 10;
	string sentence;
	sentence = sentences[y];

	cout <<endl<< "--------------WELCOME-------------- " << endl <<endl<< "Enter Username =========>  ";
	string username;
	cin >> username;
	allusernames[x] = username;
	cout <<endl<< "*********** Lets Go! *********** " << endl<<endl;

	string z;
	int lengthz = sentence.length();
	for (int i = 0; i < lengthz; i++)
	{
		if (sentence[i] == ' ')
			z += ' ';
		else
			z += '-';
	}

	cout <<"    "<< z << endl;

	clock_t time;
	time = clock();

	int score = 5;

	string rep;
	int lengthrep;
	for (; score != 0;)
	{
		char let;
		cout << "New Letter : ";
		cin >> let;
		cout << endl;
		lengthrep = rep.length();
		

		if (let<'A' || let>'z') {
			cout << "Please enter an English letter ! " << endl << "Score = " << score << endl;
			cout << "***********************************" << endl;
			continue;
		}
		int b = 0;

		for (int i = 0; i < lengthrep; i++) {
			if (rep[i] == let)
			{
				cout << "Sorry!" << endl << "This letter has already is imported" << endl << "Score = " << score << endl;
				b++;
				cout << "***********************************" << endl;
				break;
			}
		}
		if (b != 0) {
			continue;
		}

		char let2;
		if (islower(let)) {
			let2 = toupper(let);
		}

		if (isupper(let)) {
			let2 = tolower(let);
		}
		rep += let;
		rep += let2;

		int c = 0;

		for (int i = 0; i < lengthz; i++)
		{

			if (sentence[i] == let)
			{
				z[i] = let;
				c++;
			}
			if (sentence[i] == let2) {
				z[i] = let2;
				c++;
			}
		}
	
		cout << "    " << z << endl ;
		
		if (c != 0)
		{
			cout << "Good Job!" << endl << "Score = " << score << endl;
			cout << "***********************************" << endl;
		}
		if (c == 0) {

			cout << "Sorry this leter does not exist ! " << endl << "Score = " << --score << endl;

			if (score == 5) {
				cout << "__________   " << endl;
				cout << "|            " << endl;
				cout << "|            " << endl;
				cout << "|            " << endl;
				cout << "|            " << endl;
				cout << "|            " << endl;
				cout << "|            " << endl;
				cout << "|   (oo)     " << endl;
				cout << "|   -|-      " << endl;
				cout << "|   //       " << endl<<endl;
			}
			if (score == 4) {
				cout << "__________   " << endl;
				cout << "|    ___||___" << endl;
				cout << "|   /       /" << endl;
				cout << "|  /_______/ " << endl;
				cout << "|            " << endl;
				cout << "|            " << endl;
				cout << "|            " << endl;
				cout << "|   (oo)     " << endl;
				cout << "|   -|-      " << endl;
				cout << "|   //       " << endl << endl;
			}
			if (score == 3) {
				cout << "__________   " << endl;
				cout << "|       ||   " << endl;
				cout << "|    ___||___" << endl;
				cout << "|   /       /" << endl;
				cout << "|  /_______/ " << endl;
				cout << "|            " << endl;
				cout << "|            " << endl;
				cout << "|   (oo)     " << endl;
				cout << "|   -|-      " << endl;
				cout << "|   //       " << endl << endl;
			}
			if (score == 2) {
				cout << "__________   " << endl;
				cout << "|       ||   " << endl;
				cout << "|       ||   " << endl;
				cout << "|    ___||___" << endl;
				cout << "|   /       /" << endl;
				cout << "|  /_______/ " << endl;
				cout << "|            " << endl;
				cout << "|   (oo)     " << endl;
				cout << "|   -|-      " << endl;
				cout << "|   //       " << endl << endl;
			}
			if (score == 1) {
				cout << "__________   " << endl;
				cout << "|       ||   " << endl;
				cout << "|       ||   " << endl;
				cout << "|       ||   " << endl;
				cout << "|    ___||___" << endl;
				cout << "|   /       /" << endl;
				cout << "|  /_______/ " << endl;
				cout << "|   (oo)     " << endl;
				cout << "|   -|-      " << endl;
				cout << "|   //       " << endl << endl;
			}
			if (score == 0) {
				cout << "__________   " << endl;
				cout << "|       ||   " << endl;
				cout << "|       ||   " << endl;
				cout << "|       ||   " << endl;
				cout << "|       ||   " << endl;
				cout << "|    ___||___" << endl;
				cout << "|   /       /" << endl;
				cout << "|  /_______/ " << endl;
				cout << "|   -|-      " << endl;
				cout << "|   //   (**)" << endl << endl;
				
			}
			cout << "***********************************" << endl;
		}

		if (z == sentence && score > 0) {

			time = clock() - time;
			time = (int)time / CLOCKS_PER_SEC;
			cout << "Congratulations!" << endl<< "You have won " << username << endl;
			

			int finalscore, f;
			float logt = (log(time) / 2);
			f = (int)(score * 1000);
			finalscore = (int)(f / logt);

			cout << "Final score : " << finalscore << endl;
			cout << "***********************************" << endl;
			allfinalscores[x] = finalscore;
			break;
		}
	}
	if (score == 0)
	{
		int finalscore = 0;
		allfinalscores[x] = finalscore;
		cout << "GAME OVER " << username << endl;
	}

	int empty;
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < x; j++) {
			if (allfinalscores[j] > allfinalscores[j + 1])
			{
				empty = allfinalscores[j];
				allfinalscores[j] = allfinalscores[j + 1];
				allfinalscores[j + 1] = empty;
				allusernames[j].swap(allusernames[j + 1]);
			}
		}
	}
	cout << "ScoreBoard : " << endl;
	for (int i = x, r = 1; i >= 0; r++, i--)
	{
		cout << allusernames[i] << " is number => " << r << " <= with " << allfinalscores[i] << " score!" << endl;
	}
	cout << "***********************************" << endl;
	cout << "Play again ?" << endl << "yes  or no ?" << endl;
	string ans;
	cin >> ans;
	if (ans == "yes")
	{
		++x;
		goto yasan;
	}
	if (ans == "no")
	{
		cout << "Have fun";
		exit(0);
	}
	_getch();
}
