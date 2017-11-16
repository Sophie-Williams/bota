#pragma once

// default
#include <iostream>
#include <map>
#include <vector>
#include <fstream>
#include <memory>

// own headers:
// *** DATA ***
// variables/
#include "variables.h"						// first, we need init data/variables
#include "macros.h"							// there a 3 files: includes.h, macros.h, variables.h
// /class/sysClass
// logs
#include "log.h"							// log class
#include "clients.h"						// there must be a clients
#include "AIagent.h"						// there must be a AI
// defaultParts								// default parts, maybe need delete this
// minor parts
#include "coordinates.h"					// coordinate
#include "healthPoints.h"					// health points.
#include "material.h"						// material. Wood etc
#include "OFD.h"							// damage system (base)
// major parts
#include "worldParts.h"						// parts of wolrd
// Entity(minor)
#include "creature.h"						// active objects (have AI or client module)
#include "effect.h"							// effect. Area (buff, damage, heal etc)
#include "item.h"							// All items can be equiped
#include "object.h"							// Objects - part of map (static) and moving (dynamic)
// there some collections:
#include "collections.h"					// collection of entity(minor). Maybe need delete this
// Entity(major)
#include "map"								// Local area. Maybe need delete this. Or map can be header of collections of some boolshit.
#include "region.h"							// True local area.
#include "world.h"							// Global entity. Not a god object.
// loop
// logic
// physic
// graphic
#include "openGL.h"
