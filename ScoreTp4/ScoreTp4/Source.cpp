#include"MyLibScore.h"
void MostarListaBase(std::vector<Puntaje*>p) {
	for (int i = 0; i < p.size(); i++) {
		Puntaje* p2 = p[i];
		cout << p2->nombre;
		cout << "= " << p2->puntos;
		cout << endl;
		cout << "level: " << p2->level << endl;
		cout << "muertes: " << p2->muertes << endl;
		cout << "tiempo en objetivos: " << p2->tiempoEnObjetivos << endl;
		cout << "asistencias " << p2->asistencias << endl;
	}

}
void MostarPuntos(std::vector<Puntaje*>p) {
	cout << "**********************highscore**********************"<<endl;
	
	for (int i = 0; i < p.size(); i++) {
		cout << p[i]->nombre;
		cout << p[i]->puntos;
		cout << endl;
	}

}
void MostarMayorMuertes(std::vector<Puntaje*>p) {
	cout << "**********************mayor puntos**********************"<<endl;
	for (int i = 0; i < p.size(); i++) {
		cout << p[i]->nombre;
		cout << p[i]->muertes;
		cout << endl;
	}

}
void MostarMayorAsistencia(std::vector<Puntaje*>p) {
	cout << "**********************mayor asistencia**********************"<<endl;
	for (int i = 0; i < p.size(); i++) {
		cout << p[i]->nombre;
		cout << p[i]->asistencias;
		cout << endl;
	}

}
void MostarMayorTiempoObjetivo(std::vector<Puntaje*>p) {
	cout << "**********************mayor tiempo objetivos**********************"<<endl;
	for (int i = 0; i < p.size(); i++) {
		cout << p[i]->nombre;
		cout << p[i]->tiempoEnObjetivos;
		cout << endl;
	}

}
void MostarPuntajePorLevel(std::vector<Puntaje*>p) {
	cout << "**********************puntaje por level**********************"<<endl;
	for (int i = 0; i < p.size(); i++) {
		cout << p[i]->nombre;
		cout << p[i]->puntos;
		switch (p[i]->level)
		{
		case Level::infierno:
			cout<<"infierno";
			break;
		case::Level::volskava:
			cout << "volskava";
		}
		cout << endl;
	}

}
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
	
	//std::vector<Puntaje*>vecBase=myLibScore.DevolverLista();
	std::vector<Puntaje*>vec=myLibScore.Highscore();
	std::vector<Puntaje*>vec2=myLibScore.MayorMuertes();
	std::vector<Puntaje*>vec3=myLibScore.MayorAsistencias();
	std::vector<Puntaje*>vec4=myLibScore.MayorTiempoEnObjetivos();
	std::vector<Puntaje*>vec5= myLibScore.PuntajesXLevel();
	
	//MostarListaBase(vecBase);
	MostarPuntos(vec);
	MostarMayorMuertes(vec2);
	MostarMayorAsistencia(vec3);
	MostarMayorTiempoObjetivo(vec4);
	MostarPuntajePorLevel(vec5);
	delete p;
	cin.get();
}
