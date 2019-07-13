/*
 * MCP3425A0T.h
 *
 *  Created on: 04.06.2019
 *      Author: robert
 */

#ifndef SRC_MCP3425A0T_H_
#define SRC_MCP3425A0T_H_

#include "CommonDataTypes.h"

#define  MCP3425A0TMeasurementData_t int

typedef struct MCP3425A0TConfig_t {
	int pinId;
} MCP3425A0TConfig_t;



void MCP3425A0T_Init();

bool MCP3425A0T_GeMeasurementData(MCP3425A0TMeasurementData_t *measurementData);


#endif /* SRC_MCP3425A0T_H_ */
