#ifndef LineArray_h
#define LineArray_h

#include <Arduino.h>
///@brief Class for DemoClass
class LineArray
{
	public:
		LineArray();
		void setPort(int pin);
		int getValue();
		String getBINValue();
		boolean checkBIN(String val);
	private:
		int DataPin;
		uint8_t Sensor_Data[3];
		String fillZero(String bin);
};

#endif
