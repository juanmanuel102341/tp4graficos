#include<iostream>
using namespace std;
#include<list>

class MyLibScore
{
public:
	struct Puntaje
	{
		string nombre;
		int puntos;
	};
	MyLibScore();
	void RegistrandoPuntaje(Puntaje puntos);
	~MyLibScore();
	list<Puntaje>lista;

private:

};

