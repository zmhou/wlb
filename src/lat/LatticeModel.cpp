/*
 * LatticeModel.cpp
 * Andreas Bülling, 2012
 * andreas@bulling.se
 *
 * Abstract mother class for the lattice models.
 */

#include "LatticeModel.h"

LatticeModel::LatticeModel() {
	e = NULL;
	UDIRS = -1;
	DIM = -1;
}

LatticeModel::~LatticeModel() {
	//Empty
}

