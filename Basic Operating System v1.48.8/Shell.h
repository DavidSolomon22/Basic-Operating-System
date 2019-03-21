#pragma once
#include"Procesy.h"
#include"Procesor_Manager.h"
#include"cond.h"

extern PCB_tree drzewko;

class Shell {
private:

	bool condition = true;               // warunek do zakonczenia dzialania programu - komenda exit
	std::string line;                    // pobrana linia
	std::vector<std::string> cmd;        // vector do ktorego wpisujemy pod kolejne indeksy komende i argumenty oddzielone spacja

	bool is_unshort(std::string);		 // sprawdza czy wpisana liczba w postaci stringa miesci sie w zakresie liczby typu unshort

	void fill_cmd_vec();                 // wypelnia vector wpisana komenda
	bool stob(std::string);              // string to bool
	unsigned short stous(std::string);   // string to unsigned short
	void display_help();                 // wyswietla wszystkie komendy
	void call_method();                  // wywoluje funkcje z innych modulow po wpisaniu komendy

public:

	void run();                          // petla while w ktorej dziala program

};
