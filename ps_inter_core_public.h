/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2016
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/*****************************************************************************
 *
 * Filename:
 * ---------
 * ps_inter_core_public.h
 *
 * Project:
 * --------
 *
 * Description:
 * ------------
 *   This file contains inter core definitions.
 *
 * Author:
 * -------
 * -------
 *
 *****************************************************************************/

#ifndef __PS_INTER_CORE_PUBLIC_H__
#define __PS_INTER_CORE_PUBLIC_H__

/*****************************************************************************
* Operator ID definition
*****************************************************************************/
typedef enum
{
    OPERATOR_ID_DCM,             // Docomo
    OPERATOR_ID_TMO,             // TMO
    OPERATOR_ID_VZW,             // Verizon Wireless
    OPERATOR_ID_CMCC,            // CMCC
    OPERATOR_ID_SKT,             // SK Telecom
    OPERATOR_ID_CU,              // China Unicom
    OPERATOR_ID_ATT,             // AT&T
    OPERATOR_ID_LGUP,            // LG U+
    OPERATOR_ID_RJIL,            // Reliance Jio Infocomm Limited
    OPERATOR_ID_KDDI,            // KDDI
    OPERATOR_ID_SPRINT,          // Sprint
    OPERATOR_ID_CT,              // China Telecom
    OPERATOR_ID_FIRSTNET,        // FirstNet
    OPERATOR_ID_CUSTOM_HSR_NW,   // Custom HSR network
    OPERATOR_ID_AIRTEL,          // Airtel
    OPERATOR_ID_DTAC,            // DTAC
    OPERATOR_ID_SMARTFREN,       // Smartfren
    OPERATOR_ID_TWM,             // TWM
    OPERATOR_ID_TESTSIM,         // TESTSIM
    OPERATOR_ID_NOKIA_OYJ,       // Nokia Oyj
    OPERATOR_ID_SMARTONE,        // SmarTone
    OPERATOR_ID_FET,             // FET, Taiwan
    OPERATOR_ID_PLUS,            // Plus, Poland
    OPERATOR_ID_BOUYGUES,        // Bouygues, France
    OPERATOR_ID_OPTUS,           // Optus, Australia
    OPERATOR_ID_USCC,            // U.S. Cellular
    OPERATOR_ID_RKT,             // RAKUTEN, JP

// Please add new operator ID's before OPERATOR_ID_OTHER
    OPERATOR_ID_OTHER            // Other operator
} operator_id_enum;

#endif /* _PS_INTER_CORE_PUBLIC_H_ */
