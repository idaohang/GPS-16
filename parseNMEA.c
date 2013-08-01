#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "parseNMEA.h"

static int nextDelim(char *stringToParse)
{
	int i = 0;
	while (*stringToParse != ',' && *stringToParse != '\0' && *stringToParse != '*'){
		i++;
		stringToParse++;
	}
	return i;
}

void parseNMEA(GPGGA *in,char *strToParse)
{
	int delim = 0, end = 0, ex = 0;
	delim = (int)strlen(strToParse);

	end = nextDelim(strToParse);
	ex += end+1;
	strncpy(in->MessageID, strToParse, end);
	in->MessageID[end]='\0';
	strToParse += (end+1);
	
	end = nextDelim(strToParse);
	ex += end+1;
	strncpy(in->UTCTime, strToParse, end);
	in->UTCTime[end]='\0';
	strToParse += (end+1);
	
	end = nextDelim(strToParse);
	ex += end+1;
	strncpy(in->Latitude, strToParse, end);
	in->Latitude[end]='\0';
	strToParse += (end+1);
	
	end = nextDelim(strToParse);
	ex += end+1;
	strncpy(in->NSIndicator, strToParse, end);
	in->NSIndicator[end]='\0';
	strToParse += (end+1);
	
	end = nextDelim(strToParse);
	ex += end+1;
	strncpy(in->Longitude, strToParse, end);
	in->Longitude[end]='\0';
	strToParse += (end+1);
	
	end = nextDelim(strToParse);
	ex += end+1;
	strncpy(in->EWIndicator, strToParse, end);
	in->EWIndicator[end]='\0';
	strToParse += (end+1);
	
	end = nextDelim(strToParse);
	ex += end+1;
	strncpy(in->PositionFixIndicator, strToParse, end);
	in->PositionFixIndicator[end]='\0';
	strToParse += (end+1);
	
	end = nextDelim(strToParse);
	ex += end+1;
	strncpy(in->SatellitesUsed, strToParse, end);
	in->SatellitesUsed[end]='\0';
	strToParse += (end+1);
	
	end = nextDelim(strToParse);
	ex += end+1;
	strncpy(in->HDOP, strToParse, end);
	in->HDOP[end]='\0';
	strToParse += (end+1);
	
	end = nextDelim(strToParse);
	ex += end+1;
	strncpy(in->MSLAltitude, strToParse, end);
	in->MSLAltitude[end]='\0';
	strToParse += (end+1);
	
	end = nextDelim(strToParse);
	ex += end+1;
	strncpy(in->MSLUnits, strToParse, end);
	in->MSLUnits[end]='\0';
	strToParse += (end+1);
	
	end = nextDelim(strToParse);
	ex += end+1;
	strncpy(in->GeoidSeparation, strToParse, end);
	in->GeoidSeparation[end]='\0';
	strToParse += (end+1);

	end = nextDelim(strToParse);
	ex += end+1;
	strncpy(in->GeoidUnits, strToParse, end);
	in->GeoidUnits[end]='\0';
	strToParse += (end+1);
	
	end = nextDelim(strToParse);
	ex += end+1;
	strncpy(in->AgeOfDiffCorr, strToParse, end);
	in->AgeOfDiffCorr[end]='\0';
	strToParse += (end+1);
	
	end = nextDelim(strToParse);
	ex += end+1;
	strncpy(in->DiffRefStationID, strToParse, end);
	in->DiffRefStationID[end]='\0';
	strToParse += (end+1);
	
	end = nextDelim(strToParse);
	ex += end+1;
	strncpy(in->Checksum, strToParse, end);
	in->Checksum[end]='\0';
	strToParse += (end+1);
	
}

