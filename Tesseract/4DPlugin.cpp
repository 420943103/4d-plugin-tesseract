/* --------------------------------------------------------------------------------
 #
 #	4DPlugin.c
 #	source generated by 4D Plugin Wizard
 #	Project : tesseract
 #	author : miyako
 #	12/05/20
 #
 # --------------------------------------------------------------------------------*/


#include "4DPluginAPI.h"
#include "4DPlugin.h"

#include "functions_tocr.h"

void PluginMain(int32_t selector, PA_PluginParameters params)
{
	try
	{
		int32_t pProcNum = selector;
		sLONG_PTR *pResult = (sLONG_PTR *)params->fResult;
		PackagePtr pParams = (PackagePtr)params->fParameters;

		CommandDispatcher(pProcNum, pResult, pParams); 
	}
	catch(...)
	{

	}
}

void CommandDispatcher (int32_t pProcNum, sLONG_PTR *pResult, PackagePtr pParams)
{
	switch(pProcNum)
	{
			
	// --- OCR
			
		case 1 :
			OCR_Set_language_folder(pResult, pParams);
			break;
			
		case 2 :
			OCR_Get_timeout(pResult, pParams);
			break;
			
		case 3 :
			OCR_SET_TIMEOUT(pResult, pParams);
			break;
			
		case 4 :
			OCR_Read_image_text(pResult, pParams);
			break;
			
		case 5 :
			OCR_Get_language_folder(pResult, pParams);
			break;

	}
}

