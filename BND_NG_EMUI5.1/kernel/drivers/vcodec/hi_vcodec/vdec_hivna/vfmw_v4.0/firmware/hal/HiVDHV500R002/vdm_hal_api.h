#ifndef _VDM_HAL_API_HEADER_
#define _VDM_HAL_API_HEADER_

#include "basedef.h"
#include "mem_manage.h"
#include "vfmw.h"
#include "vdm_hal_local.h"
#include "vfmw_intf.h"

VOID VDMHAL_IMP_ResetVdm(SINT32 VdhId);
VOID VDMHAL_IMP_GlbReset(VOID);
VOID VDMHAL_IMP_ClearIntState(SINT32 VdhId);
SINT32 VDMHAL_IMP_CheckReg(REG_ID_E reg_id, SINT32 VdhId);
VOID VDMHAL_IMP_StartHwRepair(SINT32 VdhId);
VOID VDMHAL_IMP_StartHwDecode(SINT32 VdhId);
SINT32 VDMHAL_IMP_PrepareDec(OMXVDH_REG_CFG_S *pVdhRegCfg);
SINT32 VDMHAL_IMP_IsVdmReady(SINT32 VdhId);    //loop for isr
SINT32 VDMHAL_IMP_PrepareRepair(OMXVDH_REG_CFG_S *pVdhRegCfg);
SINT32 VDMHAL_IMP_BackupInfo(VOID);
VOID VDMHAL_IMP_GetCharacter(VOID);
VOID VDMHAL_IMP_WriteScdEMARID(VOID);
VOID VDMHAL_IMP_Init(VOID);
VOID VDMHAL_IMP_DeInit(VOID);

VOID VDMHAL_ISR(SINT32 VdhId);
VOID VDMHAL_AfterDec(OMXVDH_REG_CFG_S *pVdhRegCfg);
VOID VDMHAL_ActivateVDH(OMXVDH_REG_CFG_S *pVdhRegCfg);
VOID VDMHAL_GetRegState(VDMHAL_BACKUP_S *pVdmRegState);
SINT32 VDMHAL_IsVdmRun(SINT32 VdhId);

SINT32 VDMHAL_PrepareSleep(VOID);
VOID VDMHAL_ForceSleep(VOID);
VOID VDMHAL_ExitSleep(VOID);
VDMDRV_SLEEP_STAGE_E VDMHAL_GetSleepStage(VOID);
VOID VDMHAL_SetSleepStage(VDMDRV_SLEEP_STAGE_E sleepState);

#endif
