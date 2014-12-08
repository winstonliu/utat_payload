extern "C"{
#include <arv.h>
}
#include "uavcamera.h"

class Teledyne: public Uavcam {

	public: 
		Teledyne();
		~Teledyne();	
		
		int initCamSetting();
		int sendTrigger();
		char* getBuffer();

	private:
		ArvGc *genicam;

};
