#ifndef Spawn_TeamWeapon_H
#define Spawn_TeamWeapon_H
#pragma warning (disable:4786)
//-----------------------------------------------------------------------------
//
//  Name:     Spawn_TeamWeapon.h
//
//  Desc:     Définie le spawn d'une arme d'un bot meurt pour sa team
//
//-----------------------------------------------------------------------------
#include <iosfwd>
#include <cassert>
#include "2D/Vector2D.h"

class Spawn_TeamWeapon
{
protected:

	Vector2D m_vPos; // Position du spawn
	double m_dRadius; // Radius pour le trigger
	int m_iGraphIndex; // Index du graphe de l'objet

public:

	Spawn_TeamWeapon(Vector2D pos, double r, int GraphIndex):
		m_vPos(pos),
		m_dRadius(r),
		m_iGraphIndex(GraphIndex)
	{}

	~Spawn_TeamWeapon() {}

	Vector2D GetPosition() { return m_vPos; } // Position du spawn
	double GetRadius() { return m_dRadius; } // Radius pour le trigger
	int GetGraphIndex() { return m_iGraphIndex; } // Index du graphe de l'objet

};




#endif