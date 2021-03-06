/**
 * \file  map.h
 * \brief Classe que representa um campo de batalha.
 *
 * \author Luis Gustavo Souza Silva (luisgustavodd@hotmail.com)
 * \date 25/01/2012
 */
#ifndef MAP_H
#define	MAP_H

#include <SDL/SDL.h>
#include <string>
#include <vector>

#include "exception.h"
#include "video.h"
#include "window.h"
#include "boundingrectangle.h"
#include "imageset.h"
#include "enviromentelement.h"

using namespace std;

typedef int Unit;

class Map
{
private:
	virtual void loadWaves() = 0;
	virtual void loadEnviroment() = 0;
public:    
    void init();
    void shutdown();
    void draw(Canvas * canvas);
    void NextWave();
    vector<Unit>& Wave();
    int	 getWavesLeft();
	void reset();
	
	vector<EnviromentElement> enviromentElements;
	vector< vector<Unit> > waves;
	int currentWave;
};
#endif

