#pragma once
class Creature;							// there start f.d. classes
class World;
class Effect;
class Item;
class Map;
class Object;

class Collection;
class CollectionCreature;
class CollectionItem;
class CollectionObject;
class CollectionMap;
class CollectionWorld;
class CollectionEffect;
class Universe;

#include <iostream>						// some default shit
#include <vector>
#include <Windows.h>
#include <thread>
#include <time.h>

#define GLEW_STATIC						// openGL stuff
#include <GLEW/glew.h>
#include <GLFW/glfw3.h>
								// *** default stuff end here ***
								// data/ start
#include "macro.h"						// macros stuff
								// classes
#include "status.h"						// Shit for major or minor classes
#include "health.h"						
#include "parts.h"
#include "coordinate.h"

								// major/minor classes
#include "creature.h"						// minor
#include "world.h"						// major
#include "effect.h"						// minor
#include "item.h"						// minor
#include "map.h"						// part of world class
#include "object.h"						// minor
#include "collections.h"					// classes of vector with minor classes
#include "universe.h"						// main class
										
								// end of data/ and start of engine/
#include "input.h"
#include "OGLWindow.h"						// openGL includes starts here
#include "openGL.h"						// main window class of openGL

								// engine includes start there
#include "loop.h"						// loop.h is main loop.
#include "engine.h"						// engine launch there. engine(). Giant struct with parameters
								// go in future


