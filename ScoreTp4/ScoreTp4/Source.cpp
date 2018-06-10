#include"MyLibScore.h"

int main() {

	MyLibScore myLibScore;

	Puntaje* p = new Puntaje;
	p->nombre = "jose";
	p->puntos = 6000;
	p->muertes = 20;
	p->asistencias = 8;
	p->tiempoEnObjetivos = 60;
	p->level=Level::infierno;
	myLibScore.RegistrandoPuntaje(p);

	Puntaje* p2 = new Puntaje;
	p2->nombre = "francisco";
	p2->puntos = 3000;
	p2->muertes = 10;
	p2->asistencias = 15;
	p2->tiempoEnObjetivos = 120;
	p2->level = Level::infierno;
	myLibScore.RegistrandoPuntaje(p2);
	
	Puntaje* p3 = new Puntaje;
	p3->nombre = "calixto";
	p3->puntos = 2000;
	p3->muertes = 24;
	p3->asistencias = 5;
	p3->tiempoEnObjetivos = 80;
	p3->level = Level::volskava;
	myLibScore.RegistrandoPuntaje(p3);

	Puntaje* p4 = new Puntaje;
	p4->nombre = "pedro";
	p4->puntos = 1200;
	p4->muertes = 14;
	p4->asistencias = 12;
	p4->tiempoEnObjetivos = 100;
	p4->level = Level::infierno;
	myLibScore.RegistrandoPuntaje(p4);
	
	Puntaje* p5= new Puntaje;
	p5->nombre = "tiburcio";
	p5->puntos = 4000;
	p5->muertes = 19;
	p5->asistencias = 13;
	p5->tiempoEnObjetivos = 78;
	p5->level = Level::volskava;
	myLibScore.RegistrandoPuntaje(p5);
	
	//myLibScore.MostrarLista();
	myLibScore.MostrarHighscore();
	//myLibScore.MostarMayorMuertes();
	//myLibScore.MostrarMayorAsistencias();
	//myLibScore.MostarMayorTiempoEnObjetivos();
	//myLibScore.MostrarPuntajesXLevel();
	delete p;
	cin.get();
}