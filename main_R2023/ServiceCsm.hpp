#pragma once
/******************************************************************************/
/* File   : ServiceCsm.hpp                                                    */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "infServiceCsm_ServiceNvM_Types.hpp"
#include "CfgServiceCsm.hpp"
#include "ServiceCsm_core.hpp"
#include "infServiceCsm_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_ServiceCsm:
      INTERFACES_EXPORTED_SERVICECSM
      public abstract_module
   ,  public class_ServiceCsm_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstModule_TypeAbstract* lptrNvMBlocksRom = (ConstModule_TypeAbstract*)NULL_PTR;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, SERVICECSM_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, SERVICECSM_CONST,       SERVICECSM_APPL_CONST) lptrNvMBlocksRomModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   SERVICECSM_CONFIG_DATA, SERVICECSM_APPL_CONST) lptrCfgModule
      );
      FUNC(void, SERVICECSM_CODE) DeInitFunction (void);
      FUNC(void, SERVICECSM_CODE) MainFunction   (void);
      SERVICECSM_CORE_FUNCTIONALITIES
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern VAR(module_ServiceCsm, SERVICECSM_VAR) ServiceCsm;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

