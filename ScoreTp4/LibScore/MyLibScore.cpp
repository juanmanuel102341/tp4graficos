#include"MyLibScore.h"

MyLibScore::MyLibScore() {
	//cout << "iniciando" << endl;
}
MyLibScore::~MyLibScore() {

}
void MyLibScore::RegistrandoPuntaje(Puntaje* puntos) {
	//cout << "registrando puntaje" << endl;
	vec.push_back(puntos);
}
void MyLibScore::MostrarLista() {
	//cout << p->puntos;
	
	
	for (int i = 0; i < vec.size();i++) {
		Puntaje* p = vec[i];
		cout << p->nombre;
		cout <<"= " <<p->puntos;
		cout << endl;
		cout <<"level: "<<p->level << endl;
		cout <<"muertes: "<<p->muertes << endl;
		cout << "tiempo en objetivos: " << p->tiempoEnObjetivos << endl;
		cout << "asistencias " << p->asistencias << endl;
	}
}
void MyLibScore::MostrarHighscore() {
	std::vector<Puntaje*>vec2=vec;
	Puntaje* mayor;
	for (int i = 0; i < vec2.size(); i++) {
		mayor = vec2[i];
	//	cout << "*************base*****************" << mayor->puntos<<endl;
		for (int i2 =i ; i2 < vec2.size(); i2++) {
		//	cout << "a: " << mayor->puntos << endl;
			//cout << "b: " << vec2[i2]->puntos << endl;
			if (mayor->puntos < vec2[i2]->puntos) {
				Puntaje* aux = mayor;
				vec2[i] = vec2[i2];
				vec2[i2] = aux;
				mayor = vec2[i];
				//cout << "es mayor b " << endl;
				//cout << "**************nueva lista****" << endl;
					
			}
		}
	//	for (int i3 = 0; i3 < vec2.size(); i3++) {
		//	cout << vec2[i3]->puntos;
		//}
		
	}
	
	for (int i = 0; i < vec2.size(); i++) {
		cout << vec2[i]->nombre;
		cout << " " << vec2[i]->puntos;
		cout << endl;
	}
}
void MyLibScore::MostarMayorMuertes() {
	std::vector<Puntaje*>vec2 = vec;
	Puntaje* mayor;
	//cout << "tam "<<vec2.size();
	for (int i = 0; i < vec2.size(); i++) {
		mayor = vec2[i];
			//cout << "*************base*****************" << mayor->muertes << endl;
		for (int i2 = i; i2 < vec2.size(); i2++) {
			//cout << "a: " << mayor->muertes << endl;
	      //cout << "b: " << vec2[i2]->muertes << endl;
			if (mayor->muertes < vec2[i2]->muertes) {
				Puntaje* aux = mayor;
				vec2[i] = vec2[i2];
				vec2[i2] = aux;
				mayor = vec2[i];
			//	cout << "es mayor b " << endl;
				}
		}
//		cout << "**************nueva lista****" << endl;
	//	for (int i3 = 0; i3 < vec2.size(); i3++) {
		//	cout << vec2[i3]->muertes;
		//}
	}
	for (int i3 = 0; i3 < vec2.size(); i3++) {
		cout << vec2[i3]->nombre;
		cout << vec2[i3]->muertes;
		cout << endl;
	}
}
void MyLibScore::MostrarMayorAsistencias(){
	std::vector<Puntaje*>vec2 = vec;
	Puntaje* mayor;
	for (int i = 0; i < vec2.size(); i++) {
		mayor = vec2[i];
		for (int i2 = i; i2 < vec2.size(); i2++) {
			if (mayor->asistencias < vec2[i2]->asistencias) {
				Puntaje* aux = mayor;
				vec2[i] = vec2[i2];
				vec2[i2] = aux;
				mayor = vec2[i];
			}
		}
	}
	for (int i3 = 0; i3 < vec2.size(); i3++) {
		cout << vec2[i3]->nombre;
		cout << vec2[i3]->asistencias;
		cout << endl;
	}
}
void MyLibScore::MostarMayorTiempoEnObjetivos(){
	std::vector<Puntaje*>vec2 = vec;
	Puntaje* mayor;
	for (int i = 0; i < vec2.size(); i++) {
		mayor = vec2[i];
		for (int i2 = i; i2 < vec2.size(); i2++) {
			if (mayor->tiempoEnObjetivos < vec2[i2]->tiempoEnObjetivos) {
				Puntaje* aux = mayor;
				vec2[i] = vec2[i2];
				vec2[i2] = aux;
				mayor = vec2[i];
			}
		}
	}
	for (int i3 = 0; i3 < vec2.size(); i3++) {
		cout << vec2[i3]->nombre;
		cout << vec2[i3]->tiempoEnObjetivos;
		cout << endl;
	}
}
void MyLibScore::MostrarPuntajesXLevel(){
	std::vector<Puntaje*>vec2 = vec;
	std::vector<Puntaje*>vecLevel;
	Puntaje* mayor;
	cout << "level: VOLSKAVA" << endl;
	for (int i = 0; i < vec2.size(); i++) {
		if (vec2[i]->level == Level::volskava) {
		
			vecLevel.push_back(vec2[i]);
		}
	}
	for (int i = 0; i < vecLevel.size(); i++) {
		mayor = vecLevel[i];
		for (int i2 = i; i2 < vecLevel.size(); i2++) {
			if (mayor->puntos < vecLevel[i2]->puntos) {
				Puntaje* aux = mayor;
				vecLevel[i] = vecLevel[i2];
				vecLevel[i2] = aux;
				mayor = vecLevel[i];
			}
		}
	}

	for (int i = 0; i < vecLevel.size(); i ++ ) {
		cout << vecLevel[i]->nombre;
		cout << vecLevel[i]->puntos;
		cout << endl;
	}
	vecLevel.clear();
	cout << "level: INFIERNO" << endl;
	for (int i = 0; i < vec2.size(); i++) {
		if (vec2[i]->level == Level::infierno) {
	
			vecLevel.push_back(vec2[i]);
		}
	}
	for (int i = 0; i < vecLevel.size(); i++) {
		mayor = vecLevel[i];
		for (int i2 = i; i2 < vecLevel.size(); i2++) {
			if (mayor->puntos < vecLevel[i2]->puntos) {
				Puntaje* aux = mayor;
				vecLevel[i] = vecLevel[i2];
				vecLevel[i2] = aux;
				mayor = vecLevel[i];
			}
		}
	}
	for (int i = 0; i < vecLevel.size(); i++) {
		cout << vecLevel[i]->nombre;
		cout << vecLevel[i]->puntos;
		cout << endl;
	}
	vecLevel.clear();



}