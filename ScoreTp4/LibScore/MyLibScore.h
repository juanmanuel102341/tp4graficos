#include<iostream>
using namespace std;
//#include<list>
#include<vector>
#include<string>
enum Level {
	infierno, volskava
};
struct Puntaje
{
	string nombre;
	int puntos,muertes,tiempoEnObjetivos,asistencias;
	Level level;
	};
 

class MyLibScore
{
public:
	
	//Puntaje*p;
	MyLibScore();
	void RegistrandoPuntaje(Puntaje* puntos);
	void MostrarLista();
	void MostrarHighscore();
	void MostarMayorMuertes();
	void MostrarMayorAsistencias();
	void MostarMayorTiempoEnObjetivos();
	void MostrarPuntajesXLevel();
	~MyLibScore();
	std::vector<Puntaje*>vec;

private:
	

};

