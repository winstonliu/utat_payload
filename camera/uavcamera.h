#pragma once

class Uavcam {

	public: 
		long bufsize; 

		Uavcam(){}
		virtual ~Uavcam(){}
		
		virtual int initCamSetting() = 0;
		virtual int sendTrigger() = 0;
		virtual char* getBuffer() = 0;
	protected:
		char* buffer;
};