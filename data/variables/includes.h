#pragma once
class Creature;											// forward declaration
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

#include <iostream>										// default stuff			
#include <vector>
#include <Windows.h>
#include <thread>
#include <time.h>

#define GLEW_STATIC										// openGL define
#include <GLEW/glew.h>										// openGL stuff
#include <GLFW/glfw3.h>

#include "macro.h"										// data/ stuff
#include "variables.h"									
#include "status.h"						
#include "health.h"						
#include "parts.h"
#include "coordinate.h"								
#include "creature.h"					
#include "world.h"						
#include "effect.h"						
#include "item.h"						
#include "map.h"						
#include "object.h"						
#include "collections.h"				
#include "universe.h"

#include "input.h"										// engine/ stuff
#include "OGLWindow.h"					
#include "openGL.h"						
#include "logicLoop.h"
#include "physicLoop.h"
#include "core.h"						
#include "engine.h"						
