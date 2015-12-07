#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//USART1
    namespace Noneusart1Rbr{    ///<USART1_RBR
        using Addr = Register::Address<0x40040000,0xfffffe00,0,unsigned>;
        ///RD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> rd{}; 
        namespace RdValC{
        }
    }
    namespace Noneusart1Tbr{    ///<USART1_TBR
        using Addr = Register::Address<0x40040000,0xfffffe00,0,unsigned>;
        ///TD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> td{}; 
        namespace TdValC{
        }
    }
    namespace Noneusart1Ier{    ///<USART1_IER
        using Addr = Register::Address<0x40040004,0xfffffff0,0,unsigned>;
        ///RFTLI_RTOIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rftliRtoie{}; 
        namespace RftlirtoieValC{
        }
        ///TFTLIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tftlie{}; 
        namespace TftlieValC{
        }
        ///RLSIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rlsie{}; 
        namespace RlsieValC{
        }
        ///MODSIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> modsie{}; 
        namespace ModsieValC{
        }
    }
    namespace Noneusart1Iir{    ///<USART1_IIR
        using Addr = Register::Address<0x40040008,0xfffffff0,0,unsigned>;
        ///NIP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nip{}; 
        namespace NipValC{
        }
        ///IID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> iid{}; 
        namespace IidValC{
        }
    }
    namespace Noneusart1Fcr{    ///<USART1_FCR
        using Addr = Register::Address<0x4004000c,0xfffffc08,0,unsigned>;
        ///FME
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fme{}; 
        namespace FmeValC{
        }
        ///RFR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rfr{}; 
        namespace RfrValC{
        }
        ///TFR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tfr{}; 
        namespace TfrValC{
        }
        ///TFTL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> tftl{}; 
        namespace TftlValC{
        }
        ///RFTL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> rftl{}; 
        namespace RftlValC{
        }
        ///URTXEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> urtxen{}; 
        namespace UrtxenValC{
        }
        ///URRXEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> urrxen{}; 
        namespace UrrxenValC{
        }
    }
    namespace Noneusart1Lcr{    ///<USART1_LCR
        using Addr = Register::Address<0x40040010,0xffffff80,0,unsigned>;
        ///WLS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> wls{}; 
        namespace WlsValC{
        }
        ///NSB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> nsb{}; 
        namespace NsbValC{
        }
        ///PBE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pbe{}; 
        namespace PbeValC{
        }
        ///EPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epe{}; 
        namespace EpeValC{
        }
        ///SPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> spe{}; 
        namespace SpeValC{
        }
        ///BCB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> bcb{}; 
        namespace BcbValC{
        }
    }
    namespace Noneusart1Modcr{    ///<USART1_MODCR
        using Addr = Register::Address<0x40040014,0xfffffff8,0,unsigned>;
        ///DTR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dtr{}; 
        namespace DtrValC{
        }
        ///RTS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rts{}; 
        namespace RtsValC{
        }
        ///HFCEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hfcen{}; 
        namespace HfcenValC{
        }
    }
    namespace Noneusart1Lsr{    ///<USART1_LSR
        using Addr = Register::Address<0x40040018,0xfffffe00,0,unsigned>;
        ///RFDR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rfdr{}; 
        namespace RfdrValC{
        }
        ///OEI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> oei{}; 
        namespace OeiValC{
        }
        ///PEI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pei{}; 
        namespace PeiValC{
        }
        ///FEI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> fei{}; 
        namespace FeiValC{
        }
        ///BII
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> bii{}; 
        namespace BiiValC{
        }
        ///TXFEMPT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> txfempt{}; 
        namespace TxfemptValC{
        }
        ///TXEMPT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> txempt{}; 
        namespace TxemptValC{
        }
        ///ERRRX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> errrx{}; 
        namespace ErrrxValC{
        }
        ///RSADDEF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rsaddef{}; 
        namespace RsaddefValC{
        }
    }
    namespace Noneusart1Modsr{    ///<USART1_MODSR
        using Addr = Register::Address<0x4004001c,0xffffff00,0,unsigned>;
        ///DCTS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dcts{}; 
        namespace DctsValC{
        }
        ///DDSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ddsr{}; 
        namespace DdsrValC{
        }
        ///DRI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dri{}; 
        namespace DriValC{
        }
        ///DDCD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ddcd{}; 
        namespace DdcdValC{
        }
        ///CTSS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ctss{}; 
        namespace CtssValC{
        }
        ///DSRS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dsrs{}; 
        namespace DsrsValC{
        }
        ///RIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ris{}; 
        namespace RisValC{
        }
        ///DCDS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dcds{}; 
        namespace DcdsValC{
        }
    }
    namespace Noneusart1Tpr{    ///<USART1_TPR
        using Addr = Register::Address<0x40040020,0xffff0000,0,unsigned>;
        ///RTOIC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> rtoic{}; 
        namespace RtoicValC{
        }
        ///RTOIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rtoie{}; 
        namespace RtoieValC{
        }
        ///TG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> tg{}; 
        namespace TgValC{
        }
    }
    namespace Noneusart1Mdr{    ///<USART1_MDR
        using Addr = Register::Address<0x40040024,0xffffffc8,0,unsigned>;
        ///MODE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> mode{}; 
        namespace ModeValC{
        }
        ///TRSM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> trsm{}; 
        namespace TrsmValC{
        }
        ///TXDMAEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txdmaen{}; 
        namespace TxdmaenValC{
        }
        ///RXDMAEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rxdmaen{}; 
        namespace RxdmaenValC{
        }
    }
    namespace Noneusart1Irdacr{    ///<USART1_IrDACR
        using Addr = Register::Address<0x40040028,0xffff00c0,0,unsigned>;
        ///IrDAEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> irdaen{}; 
        namespace IrdaenValC{
        }
        ///IrDALP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> irdalp{}; 
        namespace IrdalpValC{
        }
        ///TXSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txsel{}; 
        namespace TxselValC{
        }
        ///LB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> lb{}; 
        namespace LbValC{
        }
        ///TXINV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txinv{}; 
        namespace TxinvValC{
        }
        ///RXINV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rxinv{}; 
        namespace RxinvValC{
        }
        ///IrDAPSC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> irdapsc{}; 
        namespace IrdapscValC{
        }
    }
    namespace Noneusart1Rs485cr{    ///<USART1_RS485CR
        using Addr = Register::Address<0x4004002c,0xffff00f8,0,unsigned>;
        ///TXENP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txenp{}; 
        namespace TxenpValC{
        }
        ///RSNMM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rsnmm{}; 
        namespace RsnmmValC{
        }
        ///RSAAD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rsaad{}; 
        namespace RsaadValC{
        }
        ///ADDMATCH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> addmatch{}; 
        namespace AddmatchValC{
        }
    }
    namespace Noneusart1Syncr{    ///<USART1_SYNCR
        using Addr = Register::Address<0x40040030,0xfffffff2,0,unsigned>;
        ///CLKEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clken{}; 
        namespace ClkenValC{
        }
        ///CPS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cps{}; 
        namespace CpsValC{
        }
        ///CPO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cpo{}; 
        namespace CpoValC{
        }
    }
    namespace Noneusart1Fsr{    ///<USART1_FSR
        using Addr = Register::Address<0x40040034,0xffffe0e0,0,unsigned>;
        ///TXFS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> txfs{}; 
        namespace TxfsValC{
        }
        ///RXFS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> rxfs{}; 
        namespace RxfsValC{
        }
    }
    namespace Noneusart1Dlr{    ///<USART1_DLR
        using Addr = Register::Address<0x40040038,0xffff0000,0,unsigned>;
        ///BRD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> brd{}; 
        namespace BrdValC{
        }
    }
    namespace Noneusart1Degtstr{    ///<USART1_DEGTSTR
        using Addr = Register::Address<0x40040040,0xfffffffc,0,unsigned>;
        ///LBM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> lbm{}; 
        namespace LbmValC{
        }
    }
}