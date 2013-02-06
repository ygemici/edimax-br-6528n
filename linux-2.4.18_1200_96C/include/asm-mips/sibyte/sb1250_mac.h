/*  *********************************************************************
    *  SB1250 Board Support Package
    *  
    *  MAC constants and macros			File: sb1250_mac.h
    *  
    *  This module contains constants and macros for the SB1250's
    *  ethernet controllers.
    *  
    *  SB1250 specification level:  0.2 plus errata as of 4/10/2001
    *  
    *  Author:  Mitch Lichtenberg (mitch@sibyte.com)
    *  
    *********************************************************************  
    *
    *  Copyright 2000,2001
    *  Broadcom Corporation. All rights reserved.
    *  
    *  This program is free software; you can redistribute it and/or 
    *  modify it under the terms of the GNU General Public License as 
    *  published by the Free Software Foundation; either version 2 of 
    *  the License, or (at your option) any later version.
    *
    *  This program is distributed in the hope that it will be useful,
    *  but WITHOUT ANY WARRANTY; without even the implied warranty of
    *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    *  GNU General Public License for more details.
    *
    *  You should have received a copy of the GNU General Public License
    *  along with this program; if not, write to the Free Software
    *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, 
    *  MA 02111-1307 USA
    ********************************************************************* */


#ifndef _SB1250_MAC_H
#define _SB1250_MAC_H

#include "sb1250_defs.h"

/*  *********************************************************************
    *  Ethernet MAC Registers
    ********************************************************************* */

/*
 * MAC Configuration Register (Table 9-13)
 * Register: MAC_CFG_0
 * Register: MAC_CFG_1
 * Register: MAC_CFG_2
 */


/* Updated to spec 0.2 */

#define M_MAC_RESERVED0             _SB_MAKEMASK1(0)
#define M_MAC_TX_HOLD_SOP_EN        _SB_MAKEMASK1(1)
#define M_MAC_RETRY_EN              _SB_MAKEMASK1(2)
#define M_MAC_RET_DRPREQ_EN         _SB_MAKEMASK1(3)
#define M_MAC_RET_UFL_EN            _SB_MAKEMASK1(4)
#define M_MAC_BURST_EN              _SB_MAKEMASK1(5)

#define S_MAC_TX_PAUSE              _SB_MAKE64(6)
#define M_MAC_TX_PAUSE_CNT          _SB_MAKEMASK(3,S_MAC_TX_PAUSE)
#define V_MAC_TX_PAUSE_CNT(x)       _SB_MAKEVALUE(x,S_MAC_TX_PAUSE)

#define K_MAC_TX_PAUSE_CNT_512      0
#define K_MAC_TX_PAUSE_CNT_1K       1
#define K_MAC_TX_PAUSE_CNT_2K       2
#define K_MAC_TX_PAUSE_CNT_4K       3
#define K_MAC_TX_PAUSE_CNT_8K       4
#define K_MAC_TX_PAUSE_CNT_16K      5
#define K_MAC_TX_PAUSE_CNT_32K      6
#define K_MAC_TX_PAUSE_CNT_64K      7

#define V_MAC_TX_PAUSE_CNT_512      V_MAC_TX_PAUSE_CNT(K_MAC_TX_PAUSE_CNT_512)
#define V_MAC_TX_PAUSE_CNT_1K       V_MAC_TX_PAUSE_CNT(K_MAC_TX_PAUSE_CNT_1K)
#define V_MAC_TX_PAUSE_CNT_2K       V_MAC_TX_PAUSE_CNT(K_MAC_TX_PAUSE_CNT_2K)
#define V_MAC_TX_PAUSE_CNT_4K       V_MAC_TX_PAUSE_CNT(K_MAC_TX_PAUSE_CNT_4K)
#define V_MAC_TX_PAUSE_CNT_8K       V_MAC_TX_PAUSE_CNT(K_MAC_TX_PAUSE_CNT_8K)
#define V_MAC_TX_PAUSE_CNT_16K      V_MAC_TX_PAUSE_CNT(K_MAC_TX_PAUSE_CNT_16K)
#define V_MAC_TX_PAUSE_CNT_32K      V_MAC_TX_PAUSE_CNT(K_MAC_TX_PAUSE_CNT_32K)
#define V_MAC_TX_PAUSE_CNT_64K      V_MAC_TX_PAUSE_CNT(K_MAC_TX_PAUSE_CNT_64K)

#define M_MAC_RESERVED1             _SB_MAKEMASK(8,9)

#define M_MAC_AP_STAT_EN            _SB_MAKEMASK1(17)
#define M_MAC_RESERVED2		    _SB_MAKEMASK1(18)
#define M_MAC_DRP_ERRPKT_EN         _SB_MAKEMASK1(19)
#define M_MAC_DRP_FCSERRPKT_EN      _SB_MAKEMASK1(20)
#define M_MAC_DRP_CODEERRPKT_EN     _SB_MAKEMASK1(21)
#define M_MAC_DRP_DRBLERRPKT_EN     _SB_MAKEMASK1(22)
#define M_MAC_DRP_RNTPKT_EN         _SB_MAKEMASK1(23)
#define M_MAC_DRP_OSZPKT_EN         _SB_MAKEMASK1(24)
#define M_MAC_DRP_LENERRPKT_EN      _SB_MAKEMASK1(25)

#define M_MAC_RESERVED3             _SB_MAKEMASK(6,26)

#define M_MAC_BYPASS_SEL            _SB_MAKEMASK1(32)
#define M_MAC_HDX_EN                _SB_MAKEMASK1(33)

#define S_MAC_SPEED_SEL             _SB_MAKE64(34)
#define M_MAC_SPEED_SEL             _SB_MAKEMASK(2,S_MAC_SPEED_SEL)
#define V_MAC_SPEED_SEL(x)	    _SB_MAKEVALUE(x,S_MAC_SPEED_SEL)
#define G_MAC_SPEED_SEL(x)	    _SB_GETVALUE(x,S_MAC_SPEED_SEL,M_MAC_SPEED_SEL)

#define K_MAC_SPEED_SEL_10MBPS      0
#define K_MAC_SPEED_SEL_100MBPS     1
#define K_MAC_SPEED_SEL_1000MBPS    2
#define K_MAC_SPEED_SEL_RESERVED    3

#define V_MAC_SPEED_SEL_10MBPS      V_MAC_SPEED_SEL(K_MAC_SPEED_SEL_10MBPS)
#define V_MAC_SPEED_SEL_100MBPS     V_MAC_SPEED_SEL(K_MAC_SPEED_SEL_100MBPS)
#define V_MAC_SPEED_SEL_1000MBPS    V_MAC_SPEED_SEL(K_MAC_SPEED_SEL_1000MBPS)
#define V_MAC_SPEED_SEL_RESERVED    V_MAC_SPEED_SEL(K_MAC_SPEED_SEL_RESERVED)

#define M_MAC_TX_CLK_EDGE_SEL       _SB_MAKEMASK1(36)
#define M_MAC_LOOPBACK_SEL          _SB_MAKEMASK1(37)
#define M_MAC_FAST_SYNC             _SB_MAKEMASK1(38)
#define M_MAC_SS_EN                 _SB_MAKEMASK1(39)

#define S_MAC_BYPASS_CFG	    _SB_MAKE64(40)
#define M_MAC_BYPASS_CFG            _SB_MAKEMASK(2,S_MAC_BYPASS_CFG)
#define V_MAC_BYPASS_CFG(x)         _SB_MAKEVALUE(x,S_MAC_BYPASS_CFG)
#define G_MAC_BYPASS_CFG(x)         _SB_GETVALUE(x,S_MAC_BYPASS_CFG,M_MAC_BYPASS_CFG)

#define K_MAC_BYPASS_GMII	    0
#define K_MAC_BYPASS_ENCODED        1
#define K_MAC_BYPASS_SOP            2
#define K_MAC_BYPASS_EOP            3

#define M_MAC_BYPASS_16             _SB_MAKEMASK1(42)
#define M_MAC_BYPASS_FCS_CHK	    _SB_MAKEMASK1(43)

#define M_MAC_RESERVED4	    	    _SB_MAKEMASK(2,44)

#define S_MAC_BYPASS_IFG            _SB_MAKE64(46)
#define M_MAC_BYPASS_IFG            _SB_MAKEMASK(8,S_MAC_BYPASS_IFG)
#define V_MAC_BYPASS_IFG(x)	    _SB_MAKEVALUE(x,S_MAC_BYPASS_IFG)
#define G_MAC_BYPASS_IFG(x)	    _SB_GETVALUE(x,S_MAC_BYPASS_IFG,M_MAC_BYPASS_IFG)

#define K_MAC_FC_CMD_DISABLED       0
#define K_MAC_FC_CMD_ENABLED        1
#define K_MAC_FC_CMD_ENAB_FALSECARR 2

#define V_MAC_FC_CMD_DISABLED       V_MAC_FC_CMD(K_MAC_FC_CMD_DISABLED)
#define V_MAC_FC_CMD_ENABLED        V_MAC_FC_CMD(K_MAC_FC_CMD_ENABLED)
#define V_MAC_FC_CMD_ENAB_FALSECARR V_MAC_FC_CMD(K_MAC_FC_CMD_ENAB_FALSECARR)

#define M_MAC_FC_SEL                _SB_MAKEMASK1(54)

#define S_MAC_FC_CMD                _SB_MAKE64(55)
#define M_MAC_FC_CMD                _SB_MAKEMASK(2,S_MAC_FC_CMD)
#define V_MAC_FC_CMD(x)	            _SB_MAKEVALUE(x,S_MAC_FC_CMD)
#define G_MAC_FC_CMD(x)	            _SB_GETVALUE(x,S_MAC_FC_CMD,M_MAC_FC_CMD)

#define S_MAC_RX_CH_SEL             _SB_MAKE64(57)
#define M_MAC_RX_CH_SEL             _SB_MAKEMASK(7,S_MAC_RX_CH_SEL)
#define V_MAC_RX_CH_SEL(x)          _SB_MAKEVALUE(x,S_MAC_RX_CH_SEL)
#define G_MAC_RX_CH_SEL(x)          _SB_GETVALUE(x,S_MAC_RX_CH_SEL,M_MAC_RX_CH_SEL)


/*
 * MAC Enable Registers
 * Register: MAC_ENABLE_0
 * Register: MAC_ENABLE_1
 * Register: MAC_ENABLE_2
 */

#define M_MAC_RXDMA_EN0	            _SB_MAKEMASK1(0)
#define M_MAC_RXDMA_EN1	            _SB_MAKEMASK1(1)
#define M_MAC_TXDMA_EN0	            _SB_MAKEMASK1(4)
#define M_MAC_TXDMA_EN1	            _SB_MAKEMASK1(5)

#define M_MAC_PORT_RESET            _SB_MAKEMASK1(8)

#define M_MAC_RX_ENABLE             _SB_MAKEMASK1(10)
#define M_MAC_TX_ENABLE             _SB_MAKEMASK1(11)
#define M_MAC_BYP_RX_ENABLE         _SB_MAKEMASK1(12)
#define M_MAC_BYP_TX_ENABLE         _SB_MAKEMASK1(13)

/*
 * MAC DMA Control Register
 * Register: MAC_TXD_CTL_0
 * Register: MAC_TXD_CTL_1
 * Register: MAC_TXD_CTL_2
 */

#define S_MAC_TXD_WEIGHT0	    _SB_MAKE64(0)
#define M_MAC_TXD_WEIGHT0	    _SB_MAKEMASK(4,S_MAC_TXD_WEIGHT0)
#define V_MAC_TXD_WEIGHT0(x)        _SB_MAKEVALUE(x,S_MAC_TXD_WEIGHT0)
#define G_MAC_TXD_WEIGHT0(x)        _SB_GETVALUE(x,S_MAC_TXD_WEIGHT0,M_MAC_TXD_WEIGHT0)

#define S_MAC_TXD_WEIGHT1	    _SB_MAKE64(4)
#define M_MAC_TXD_WEIGHT1	    _SB_MAKEMASK(4,S_MAC_TXD_WEIGHT1)
#define V_MAC_TXD_WEIGHT1(x)        _SB_MAKEVALUE(x,S_MAC_TXD_WEIGHT1)
#define G_MAC_TXD_WEIGHT1(x)        _SB_GETVALUE(x,S_MAC_TXD_WEIGHT1,M_MAC_TXD_WEIGHT1)

/*
 * MAC Fifo Threshhold registers (Table 9-14)
 * Register: MAC_THRSH_CFG_0
 * Register: MAC_THRSH_CFG_1
 * Register: MAC_THRSH_CFG_2
 */

#define S_MAC_TX_WR_THRSH           _SB_MAKE64(0)
#define M_MAC_TX_WR_THRSH           _SB_MAKEMASK(6,S_MAC_TX_WR_THRSH)
#define V_MAC_TX_WR_THRSH(x)        _SB_MAKEVALUE(x,S_MAC_TX_WR_THRSH)
#define G_MAC_TX_WR_THRSH(x)        _SB_GETVALUE(x,S_MAC_TX_WR_THRSH,M_MAC_TX_WR_THRSH)

#define S_MAC_TX_RD_THRSH           _SB_MAKE64(8)
#define M_MAC_TX_RD_THRSH           _SB_MAKEMASK(6,S_MAC_TX_RD_THRSH)
#define V_MAC_TX_RD_THRSH(x)        _SB_MAKEVALUE(x,S_MAC_TX_RD_THRSH)
#define G_MAC_TX_RD_THRSH(x)        _SB_GETVALUE(x,S_MAC_TX_RD_THRSH,M_MAC_TX_RD_THRSH)

#define S_MAC_TX_RL_THRSH           _SB_MAKE64(16)
#define M_MAC_TX_RL_THRSH           _SB_MAKEMASK(4,S_MAC_TX_RL_THRSH)
#define V_MAC_TX_RL_THRSH(x)        _SB_MAKEVALUE(x,S_MAC_TX_RL_THRSH)
#define G_MAC_TX_RL_THRSH(x)        _SB_GETVALUE(x,S_MAC_TX_RL_THRSH,M_MAC_TX_RL_THRSH)

#define S_MAC_RX_PL_THRSH           _SB_MAKE64(24)
#define M_MAC_RX_PL_THRSH           _SB_MAKEMASK(6,S_MAC_RX_PL_THRSH)
#define V_MAC_RX_PL_THRSH(x)        _SB_MAKEVALUE(x,S_MAC_RX_PL_THRSH)
#define G_MAC_RX_PL_THRSH(x)        _SB_GETVALUE(x,S_MAC_RX_PL_THRSH,M_MAC_RX_PL_THRSH)

#define S_MAC_RX_RD_THRSH           _SB_MAKE64(32)
#define M_MAC_RX_RD_THRSH           _SB_MAKEMASK(6,S_MAC_RX_RD_THRSH)
#define V_MAC_RX_RD_THRSH(x)        _SB_MAKEVALUE(x,S_MAC_RX_RD_THRSH)
#define G_MAC_RX_RD_THRSH(x)        _SB_GETVALUE(x,S_MAC_RX_RD_THRSH,M_MAC_RX_RD_THRSH)

#define S_MAC_RX_RL_THRSH           _SB_MAKE64(40)
#define M_MAC_RX_RL_THRSH           _SB_MAKEMASK(6,S_MAC_RX_RL_THRSH)
#define V_MAC_RX_RL_THRSH(x)        _SB_MAKEVALUE(x,S_MAC_RX_RL_THRSH)
#define G_MAC_RX_RL_THRSH(x)        _SB_GETVALUE(x,S_MAC_RX_RL_THRSH,M_MAC_RX_RL_THRSH)

/*
 * MAC Frame Configuration Registers (Table 9-15)
 * Register: MAC_FRAME_CFG_0
 * Register: MAC_FRAME_CFG_1
 * Register: MAC_FRAME_CFG_2
 */

#define S_MAC_IFG_RX                _SB_MAKE64(0)
#define M_MAC_IFG_RX                _SB_MAKEMASK(6,S_MAC_IFG_RX)
#define V_MAC_IFG_RX(x)             _SB_MAKEVALUE(x,S_MAC_IFG_RX)
#define G_MAC_IFG_RX(x)             _SB_GETVALUE(x,S_MAC_IFG_RX,M_MAC_IFG_RX)

#define S_MAC_IFG_TX                _SB_MAKE64(6)
#define M_MAC_IFG_TX                _SB_MAKEMASK(6,S_MAC_IFG_TX)
#define V_MAC_IFG_TX(x)             _SB_MAKEVALUE(x,S_MAC_IFG_TX)
#define G_MAC_IFG_TX(x)             _SB_GETVALUE(x,S_MAC_IFG_TX,M_MAC_IFG_TX)

#define S_MAC_IFG_THRSH             _SB_MAKE64(12)
#define M_MAC_IFG_THRSH             _SB_MAKEMASK(6,S_MAC_IFG_THRSH)
#define V_MAC_IFG_THRSH(x)          _SB_MAKEVALUE(x,S_MAC_IFG_THRSH)
#define G_MAC_IFG_THRSH(x)          _SB_GETVALUE(x,S_MAC_IFG_THRSH,M_MAC_IFG_THRSH)

#define S_MAC_BACKOFF_SEL           _SB_MAKE64(18)
#define M_MAC_BACKOFF_SEL           _SB_MAKEMASK(4,S_MAC_BACKOFF_SEL)
#define V_MAC_BACKOFF_SEL(x)        _SB_MAKEVALUE(x,S_MAC_BACKOFF_SEL)
#define G_MAC_BACKOFF_SEL(x)        _SB_GETVALUE(x,S_MAC_BACKOFF_SEL,M_MAC_BACKOFF_SEL)

#define S_MAC_LFSR_SEED             _SB_MAKE64(22)
#define M_MAC_LFSR_SEED             _SB_MAKEMASK(8,S_MAC_LFSR_SEED)
#define V_MAC_LFSR_SEED(x)          _SB_MAKEVALUE(x,S_MAC_LFSR_SEED)
#define G_MAC_LFSR_SEED(x)          _SB_GETVALUE(x,S_MAC_LFSR_SEED,M_MAC_LFSR_SEED)

#define S_MAC_SLOT_SIZE             _SB_MAKE64(30)
#define M_MAC_SLOT_SIZE             _SB_MAKEMASK(10,S_MAC_SLOT_SIZE)
#define V_MAC_SLOT_SIZE(x)          _SB_MAKEVALUE(x,S_MAC_SLOT_SIZE)
#define G_MAC_SLOT_SIZE(x)          _SB_GETVALUE(x,S_MAC_SLOT_SIZE,M_MAC_SLOT_SIZE)

#define S_MAC_MIN_FRAMESZ           _SB_MAKE64(40)
#define M_MAC_MIN_FRAMESZ           _SB_MAKEMASK(8,S_MAC_MIN_FRAMESZ)
#define V_MAC_MIN_FRAMESZ(x)        _SB_MAKEVALUE(x,S_MAC_MIN_FRAMESZ)
#define G_MAC_MIN_FRAMESZ(x)        _SB_GETVALUE(x,S_MAC_MIN_FRAMESZ,M_MAC_MIN_FRAMESZ)

#define S_MAC_MAX_FRAMESZ           _SB_MAKE64(48)
#define M_MAC_MAX_FRAMESZ           _SB_MAKEMASK(16,S_MAC_MAX_FRAMESZ)
#define V_MAC_MAX_FRAMESZ(x)        _SB_MAKEVALUE(x,S_MAC_MAX_FRAMESZ)
#define G_MAC_MAX_FRAMESZ(x)        _SB_GETVALUE(x,S_MAC_MAX_FRAMESZ,M_MAC_MAX_FRAMESZ)

/*
 * These constants are used to configure the fields within the Frame
 * Configuration Register.  
 */

#define K_MAC_IFG_RX_10             _SB_MAKE64(18)
#define K_MAC_IFG_RX_100            _SB_MAKE64(18)
#define K_MAC_IFG_RX_1000           _SB_MAKE64(6)

#define K_MAC_IFG_TX_10             _SB_MAKE64(20)
#define K_MAC_IFG_TX_100            _SB_MAKE64(20)
#define K_MAC_IFG_TX_1000           _SB_MAKE64(8)

#define K_MAC_IFG_THRSH_10          _SB_MAKE64(12)
#define K_MAC_IFG_THRSH_100         _SB_MAKE64(12)
#define K_MAC_IFG_THRSH_1000        _SB_MAKE64(4)

#define K_MAC_SLOT_SIZE_10          _SB_MAKE64(0)
#define K_MAC_SLOT_SIZE_100         _SB_MAKE64(0)
#define K_MAC_SLOT_SIZE_1000        _SB_MAKE64(0)

#define V_MAC_IFG_RX_10        V_MAC_IFG_RX(K_MAC_IFG_RX_10)
#define V_MAC_IFG_RX_100       V_MAC_IFG_RX(K_MAC_IFG_RX_100)
#define V_MAC_IFG_RX_1000      V_MAC_IFG_RX(K_MAC_IFG_RX_1000)

#define V_MAC_IFG_TX_10        V_MAC_IFG_TX(K_MAC_IFG_TX_10)
#define V_MAC_IFG_TX_100       V_MAC_IFG_TX(K_MAC_IFG_TX_100)
#define V_MAC_IFG_TX_1000      V_MAC_IFG_TX(K_MAC_IFG_TX_1000)

#define V_MAC_IFG_THRSH_10     V_MAC_IFG_THRSH(K_MAC_IFG_THRSH_10)
#define V_MAC_IFG_THRSH_100    V_MAC_IFG_THRSH(K_MAC_IFG_THRSH_100)
#define V_MAC_IFG_THRSH_1000   V_MAC_IFG_THRSH(K_MAC_IFG_THRSH_1000)

#define V_MAC_SLOT_SIZE_10     V_MAC_SLOT_SIZE(K_MAC_SLOT_SIZE_10)
#define V_MAC_SLOT_SIZE_100    V_MAC_SLOT_SIZE(K_MAC_SLOT_SIZE_100)
#define V_MAC_SLOT_SIZE_1000   V_MAC_SLOT_SIZE(K_MAC_SLOT_SIZE_1000)

#define K_MAC_MIN_FRAMESZ_DEFAULT   _SB_MAKE64(64)
#define K_MAC_MAX_FRAMESZ_DEFAULT   _SB_MAKE64(1518)

#define V_MAC_MIN_FRAMESZ_DEFAULT   V_MAC_MIN_FRAMESZ(K_MAC_MIN_FRAMESZ_DEFAULT)
#define V_MAC_MAX_FRAMESZ_DEFAULT   V_MAC_MAX_FRAMESZ(K_MAC_MAX_FRAMESZ_DEFAULT)

/*
 * MAC VLAN Tag Registers (Table 9-16)
 * Register: MAC_VLANTAG_0
 * Register: MAC_VLANTAG_1
 * Register: MAC_VLANTAG_2
 */

/* No bit fields: lower 32 bits of register are the tags */

/*
 * MAC Status Registers (Table 9-17)
 * Also used for the MAC Interrupt Mask Register (Table 9-18)
 * Register: MAC_STATUS_0
 * Register: MAC_STATUS_1
 * Register: MAC_STATUS_2
 * Register: MAC_INT_MASK_0
 * Register: MAC_INT_MASK_1
 * Register: MAC_INT_MASK_2
 */

/* 
 * Use these constants to shift the appropriate channel
 * into the CH0 position so the same tests can be used
 * on each channel.
 */

#define S_MAC_RX_CH0                _SB_MAKE64(0)
#define S_MAC_RX_CH1                _SB_MAKE64(8)
#define S_MAC_TX_CH0                _SB_MAKE64(16)
#define S_MAC_TX_CH1                _SB_MAKE64(24)

#define S_MAC_TXCHANNELS	    _SB_MAKE64(16)	/* this is 1st TX chan */
#define S_MAC_CHANWIDTH             _SB_MAKE64(8)	/* bits between channels */

/*
 *  These are the same as RX channel 0.  The idea here
 *  is that you'll use one of the "S_" things above
 *  and pass just the six bits to a DMA-channel-specific ISR
 */
#define M_MAC_INT_CHANNEL           _SB_MAKEMASK(8,0)
#define M_MAC_INT_EOP_COUNT         _SB_MAKEMASK1(0)
#define M_MAC_INT_EOP_TIMER         _SB_MAKEMASK1(1)
#define M_MAC_INT_EOP_SEEN          _SB_MAKEMASK1(2)
#define M_MAC_INT_HWM               _SB_MAKEMASK1(3)
#define M_MAC_INT_LWM               _SB_MAKEMASK1(4)
#define M_MAC_INT_DSCR              _SB_MAKEMASK1(5)
#define M_MAC_INT_ERR               _SB_MAKEMASK1(6)
#define M_MAC_INT_DZERO             _SB_MAKEMASK1(7)	/* only for TX channels */


#define M_MAC_RX_UNDRFL             _SB_MAKEMASK1(40)
#define M_MAC_RX_OVRFL              _SB_MAKEMASK1(41)
#define M_MAC_TX_UNDRFL             _SB_MAKEMASK1(42)
#define M_MAC_TX_OVRFL              _SB_MAKEMASK1(43)
#define M_MAC_LTCOL_ERR             _SB_MAKEMASK1(44)
#define M_MAC_EXCOL_ERR             _SB_MAKEMASK1(45)
#define M_MAC_CNTR_OVRFL_ERR        _SB_MAKEMASK1(46)

#define S_MAC_COUNTER_ADDR          _SB_MAKE64(47)
#define M_MAC_COUNTER_ADDR          _SB_MAKEMASK(5,S_MAC_COUNTER_ADDR)
#define V_MAC_COUNTER_ADDR(x)       _SB_MAKEVALUE(x,S_MAC_COUNTER_ADDR)
#define G_MAC_COUNTER_ADDR(x)       _SB_GETVALUE(x,S_MAC_COUNTER_ADDR,M_MAC_COUNTER_ADDR)

/*
 * MAC Fifo Pointer Registers (Table 9-19)    [Debug register]
 * Register: MAC_FIFO_PTRS_0
 * Register: MAC_FIFO_PTRS_1
 * Register: MAC_FIFO_PTRS_2
 */

#define S_MAC_TX_WRPTR              _SB_MAKE64(0)
#define M_MAC_TX_WRPTR              _SB_MAKEMASK(6,S_MAC_TX_WRPTR)
#define V_MAC_TX_WRPTR(x)           _SB_MAKEVALUE(x,S_MAC_TX_WRPTR)
#define G_MAC_TX_WRPTR(x)           _SB_GETVALUE(x,S_MAC_TX_WRPTR,M_MAC_TX_WRPTR)

#define S_MAC_TX_RDPTR              _SB_MAKE64(8)
#define M_MAC_TX_RDPTR              _SB_MAKEMASK(6,S_MAC_TX_RDPTR)
#define V_MAC_TX_RDPTR(x)           _SB_MAKEVALUE(x,S_MAC_TX_RDPTR)
#define G_MAC_TX_RDPTR(x)           _SB_GETVALUE(x,S_MAC_TX_RDPTR,M_MAC_TX_RDPTR)

#define S_MAC_RX_WRPTR              _SB_MAKE64(16)
#define M_MAC_RX_WRPTR              _SB_MAKEMASK(6,S_MAC_RX_WRPTR)
#define V_MAC_RX_WRPTR(x)           _SB_MAKEVALUE(x,S_MAC_RX_WRPTR)
#define G_MAC_RX_WRPTR(x)           _SB_GETVALUE(x,S_MAC_RX_WRPTR,M_MAC_TX_WRPTR)

#define S_MAC_RX_RDPTR              _SB_MAKE64(24)
#define M_MAC_RX_RDPTR              _SB_MAKEMASK(6,S_MAC_RX_RDPTR)
#define V_MAC_RX_RDPTR(x)           _SB_MAKEVALUE(x,S_MAC_RX_RDPTR)
#define G_MAC_RX_RDPTR(x)           _SB_GETVALUE(x,S_MAC_RX_RDPTR,M_MAC_TX_RDPTR)

/*
 * MAC Fifo End Of Packet Count Registers (Table 9-20)  [Debug register]
 * Register: MAC_EOPCNT_0
 * Register: MAC_EOPCNT_1
 * Register: MAC_EOPCNT_2
 */

#define S_MAC_TX_EOP_COUNTER        _SB_MAKE64(0)
#define M_MAC_TX_EOP_COUNTER        _SB_MAKEMASK(6,S_MAC_TX_EOP_COUNTER)
#define V_MAC_TX_EOP_COUNTER(x)     _SB_MAKEVALUE(x,S_MAC_TX_EOP_COUNTER)
#define G_MAC_TX_EOP_COUNTER(x)     _SB_GETVALUE(x,S_MAC_TX_EOP_COUNTER,M_MAC_TX_EOP_COUNTER)

#define S_MAC_RX_EOP_COUNTER        _SB_MAKE64(8)
#define M_MAC_RX_EOP_COUNTER        _SB_MAKEMASK(6,S_MAC_RX_EOP_COUNTER)
#define V_MAC_RX_EOP_COUNTER(x)     _SB_MAKEVALUE(x,S_MAC_RX_EOP_COUNTER)
#define G_MAC_RX_EOP_COUNTER(x)     _SB_GETVALUE(x,S_MAC_RX_EOP_COUNTER,M_MAC_RX_EOP_COUNTER)

/*
 * MAC Recieve Address Filter Exact Match Registers (Table 9-21)
 * Registers: MAC_ADDR0_0 through MAC_ADDR7_0
 * Registers: MAC_ADDR0_1 through MAC_ADDR7_1
 * Registers: MAC_ADDR0_2 through MAC_ADDR7_2
 */

/* No bitfields */

/*
 * MAC Recieve Address Filter Hash Match Registers (Table 9-22)
 * Registers: MAC_HASH0_0 through MAC_HASH7_0
 * Registers: MAC_HASH0_1 through MAC_HASH7_1
 * Registers: MAC_HASH0_2 through MAC_HASH7_2
 */

/* No bitfields */

/*
 * MAC Transmit Source Address Registers (Table 9-23)
 * Register: MAC_ETHERNET_ADDR_0
 * Register: MAC_ETHERNET_ADDR_1
 * Register: MAC_ETHERNET_ADDR_2
 */

/* No bitfields */

/*
 * MAC Packet Type Configuration Register
 * Register: MAC_TYPE_CFG_0
 * Register: MAC_TYPE_CFG_1
 * Register: MAC_TYPE_CFG_2
 */

#define S_TYPECFG_TYPESIZE      _SB_MAKE64(16)

#define S_TYPECFG_TYPE0		_SB_MAKE64(0)
#define M_TYPECFG_TYPE0         _SB_MAKEMASK(16,S_TYPECFG_TYPE0)
#define V_TYPECFG_TYPE0(x)      _SB_MAKEVALUE(x,S_TYPECFG_TYPE0)
#define G_TYPECFG_TYPE0(x)      _SB_GETVALUE(x,S_TYPECFG_TYPE0,M_TYPECFG_TYPE0)

#define S_TYPECFG_TYPE1		_SB_MAKE64(0)
#define M_TYPECFG_TYPE1         _SB_MAKEMASK(16,S_TYPECFG_TYPE1)
#define V_TYPECFG_TYPE1(x)      _SB_MAKEVALUE(x,S_TYPECFG_TYPE1)
#define G_TYPECFG_TYPE1(x)      _SB_GETVALUE(x,S_TYPECFG_TYPE1,M_TYPECFG_TYPE1)

#define S_TYPECFG_TYPE2		_SB_MAKE64(0)
#define M_TYPECFG_TYPE2         _SB_MAKEMASK(16,S_TYPECFG_TYPE2)
#define V_TYPECFG_TYPE2(x)      _SB_MAKEVALUE(x,S_TYPECFG_TYPE2)
#define G_TYPECFG_TYPE2(x)      _SB_GETVALUE(x,S_TYPECFG_TYPE2,M_TYPECFG_TYPE2)

#define S_TYPECFG_TYPE3		_SB_MAKE64(0)
#define M_TYPECFG_TYPE3         _SB_MAKEMASK(16,S_TYPECFG_TYPE3)
#define V_TYPECFG_TYPE3(x)      _SB_MAKEVALUE(x,S_TYPECFG_TYPE3)
#define G_TYPECFG_TYPE3(x)      _SB_GETVALUE(x,S_TYPECFG_TYPE3,M_TYPECFG_TYPE3)

/*
 * MAC Receive Address Filter Control Registers (Table 9-24)
 * Register: MAC_ADFILTER_CFG_0
 * Register: MAC_ADFILTER_CFG_1
 * Register: MAC_ADFILTER_CFG_2
 */

#define M_MAC_ALLPKT_EN	        _SB_MAKEMASK1(0)
#define M_MAC_UCAST_EN          _SB_MAKEMASK1(1)
#define M_MAC_UCAST_INV         _SB_MAKEMASK1(2)
#define M_MAC_MCAST_EN          _SB_MAKEMASK1(3)
#define M_MAC_MCAST_INV         _SB_MAKEMASK1(4)
#define M_MAC_BCAST_EN          _SB_MAKEMASK1(5)
#define M_MAC_DIRECT_INV        _SB_MAKEMASK1(6)

#define S_MAC_IPHDR_OFFSET      _SB_MAKE64(8)
#define M_MAC_IPHDR_OFFSET      _SB_MAKEMASK(8,S_MAC_IPHDR_OFFSET)
#define V_MAC_IPHDR_OFFSET(x)	_SB_MAKEVALUE(x,S_MAC_IPHDR_OFFSET)
#define G_MAC_IPHDR_OFFSET(x)	_SB_GETVALUE(x,S_MAC_IPHDR_OFFSET,M_MAC_IPHDR_OFFSET)

/*
 * MAC Receive Channel Select Registers (Table 9-25)
 */

/* no bitfields */

/*
 * MAC MII Management Interface Registers (Table 9-26)
 * Register: MAC_MDIO_0
 * Register: MAC_MDIO_1
 * Register: MAC_MDIO_2
 */

#define S_MAC_MDC		0
#define S_MAC_MDIO_DIR		1
#define S_MAC_MDIO_OUT		2
#define S_MAC_GENC		3
#define S_MAC_MDIO_IN		4

#define M_MAC_MDC		_SB_MAKEMASK1(S_MAC_MDC)
#define M_MAC_MDIO_DIR		_SB_MAKEMASK1(S_MAC_MDIO_DIR)
#define M_MAC_MDIO_DIR_INPUT	_SB_MAKEMASK1(S_MAC_MDIO_DIR)
#define M_MAC_MDIO_OUT		_SB_MAKEMASK1(S_MAC_MDIO_OUT)
#define M_MAC_GENC		_SB_MAKEMASK1(S_MAC_GENC)
#define M_MAC_MDIO_IN		_SB_MAKEMASK1(S_MAC_MDIO_IN)

#endif
