#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Interrupts
    namespace Nonedrqsel{    ///<DMA Request Selection Register
        using Addr = Register::Address<0x40031000,0x0000001f,0,unsigned>;
        ///The interrupt signal of the external interrupt ch.3 is output as a transfer request to the DMAC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> exint3{}; 
        namespace Exint3ValC{
        }
        ///The interrupt signal of the external interrupt ch.2 is output as a transfer request to the DMAC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> exint2{}; 
        namespace Exint2ValC{
        }
        ///The interrupt signal of the external interrupt ch.1 is output as a transfer request to the DMAC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> exint1{}; 
        namespace Exint1ValC{
        }
        ///The interrupt signal of the external interrupt ch.0 is output as a transfer request to the DMAC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> exint0{}; 
        namespace Exint0ValC{
        }
        ///The transmission interrupt signal of the MFS ch.7 is output as a transfer request to the DMAC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> mfs7tx{}; 
        namespace Mfs7txValC{
        }
        ///The reception interrupt signal of the MFS ch.7 is output as a transfer request to the DMAC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> mfs7rx{}; 
        namespace Mfs7rxValC{
        }
        ///The transmission interrupt signal of the MFS ch.6 is output as a transfer request to the DMAC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> mfs6tx{}; 
        namespace Mfs6txValC{
        }
        ///The reception interrupt signal of the MFS ch.6 is output as a transfer request to the DMAC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mfs6rx{}; 
        namespace Mfs6rxValC{
        }
        ///The transmission interrupt signal of the MFS ch.5 is output as a transfer request to the DMAC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mfs5tx{}; 
        namespace Mfs5txValC{
        }
        ///The reception interrupt signal of the MFS ch.5 is output as a transfer request to the DMAC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mfs5rx{}; 
        namespace Mfs5rxValC{
        }
        ///The transmission interrupt signal of the MFS ch.4 is output as a transfer request to the DMAC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> mfs4tx{}; 
        namespace Mfs4txValC{
        }
        ///The reception interrupt signal of the MFS ch.4 is output as a transfer request to the DMAC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mfs4rx{}; 
        namespace Mfs4rxValC{
        }
        ///The transmission interrupt signal of the MFS ch.3 is output as a transfer request to the DMAC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> mfs3tx{}; 
        namespace Mfs3txValC{
        }
        ///The reception interrupt signal of the MFS ch.3 is output as a transfer request to the DMAC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mfs3rx{}; 
        namespace Mfs3rxValC{
        }
        ///The transmission interrupt signal of the MFS ch.2 is output as a transfer request to the DMAC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mfs2tx{}; 
        namespace Mfs2txValC{
        }
        ///The reception interrupt signal of the MFS ch.2 is output as a transfer request to the DMAC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mfs2rx{}; 
        namespace Mfs2rxValC{
        }
        ///The transmission interrupt signal of the MFS ch.1 is output as a transfer request to the DMAC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> mfs1tx{}; 
        namespace Mfs1txValC{
        }
        ///The reception interrupt signal of the MFS ch.1 is output as a transfer request to the DMAC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mfs1rx{}; 
        namespace Mfs1rxValC{
        }
        ///The transmission interrupt signal of the MFS ch.0 is output as a transfer request to the DMAC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mfs0tx{}; 
        namespace Mfs0txValC{
        }
        ///The reception interrupt signal of the MFS ch.0 is output as a transfer request to the DMAC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mfs0rx{}; 
        namespace Mfs0rxValC{
        }
        ///The IRQ0 interrupt signal of the base timer ch.6 is output as a transfer request to the DMAC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> irq0bt6{}; 
        namespace Irq0bt6ValC{
        }
        ///The IRQ0 interrupt signal of the base timer ch.4 is output as a transfer request to the DMAC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> irq0bt4{}; 
        namespace Irq0bt4ValC{
        }
        ///The IRQ0 interrupt signal of the base timer ch.2 is output as a transfer request to the DMAC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> irq0bt2{}; 
        namespace Irq0bt2ValC{
        }
        ///The IRQ0 interrupt signal of the base timer ch.0 is output as a transfer request to the DMAC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> irq0bt0{}; 
        namespace Irq0bt0ValC{
        }
        ///The scan conversion interrupt signal of the A/D converter unit 2 is output as a transfer request to the DMAC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> adcscan2{}; 
        namespace Adcscan2ValC{
        }
        ///The scan conversion interrupt signal of the A/D converter unit 1 is output as a transfer request to the DMAC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> adcscan1{}; 
        namespace Adcscan1ValC{
        }
        ///The scan conversion interrupt signal of the A/D converter unit 0 is output as a transfer request to the DMAC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> adcscan0{}; 
        namespace Adcscan0ValC{
        }
    }
    namespace Noneirqcmode{    ///<Interrupt Factor Vector Relocate Setting Register
        using Addr = Register::Address<0x4003100c,0xfffffffe,0,unsigned>;
        ///Assigns the interrupt factor vector according to Table 1-1 in chapter "Interrupt B"
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> irqcmode{}; 
        namespace IrqcmodeValC{
        }
    }
    namespace Noneexc02mon{    ///<EXC02 Batch Read Register
        using Addr = Register::Address<0x40031010,0xfffffffc,0,unsigned>;
        ///Hardware watchdog timer interrupt request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hwint{}; 
        namespace HwintValC{
        }
        ///NMIX external pin interrupt request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nmi{}; 
        namespace NmiValC{
        }
    }
    namespace Noneirq00mon{    ///<IRQ00 Batch Read Register
        using Addr = Register::Address<0x40031014,0xfffffffe,0,unsigned>;
        ///Anomalous frequency detection by CSV interrupt request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fcsint{}; 
        namespace FcsintValC{
        }
    }
    namespace Noneirq01mon{    ///<IRQ01 Batch Read Register
        using Addr = Register::Address<0x40031018,0xfffffffe,0,unsigned>;
        ///Software watchdog timer interrupt request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swwdtint{}; 
        namespace SwwdtintValC{
        }
    }
    namespace Noneirq02mon{    ///<IRQ02 Batch Read Register
        using Addr = Register::Address<0x4003101c,0xfffffffe,0,unsigned>;
        ///Low voltage detection (LVD) interrupt request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lvdint{}; 
        namespace LvdintValC{
        }
    }
    namespace Noneirq03mon{    ///<IRQ03 Batch Read Register
        using Addr = Register::Address<0x40031020,0xfffff000,0,unsigned>;
        ///WFG timer 54 interrupt request in MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> wave2int3{}; 
        namespace Wave2int3ValC{
        }
        ///WFG timer 32 interrupt request in MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> wave2int2{}; 
        namespace Wave2int2ValC{
        }
        ///WFG timer 10 interrupt request in MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> wave2int1{}; 
        namespace Wave2int1ValC{
        }
        ///DTIF (motor emergency stop) interrupt request in MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> wave2int0{}; 
        namespace Wave2int0ValC{
        }
        ///WFG timer 54 interrupt request in MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wave1int3{}; 
        namespace Wave1int3ValC{
        }
        ///WFG timer 32 interrupt request in MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> wave1int2{}; 
        namespace Wave1int2ValC{
        }
        ///WFG timer 10 interrupt request in MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> wave1int1{}; 
        namespace Wave1int1ValC{
        }
        ///DTIF (motor emergency stop) interrupt request in MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wave1int0{}; 
        namespace Wave1int0ValC{
        }
        ///WFG timer 54 interrupt request in MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wave0int3{}; 
        namespace Wave0int3ValC{
        }
        ///WFG timer 32 interrupt request in MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wave0int2{}; 
        namespace Wave0int2ValC{
        }
        ///WFG timer 10 interrupt request in MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wave0int1{}; 
        namespace Wave0int1ValC{
        }
        ///DTIF (motor emergency stop) interrupt request in MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wave0int0{}; 
        namespace Wave0int0ValC{
        }
    }
    namespace Noneirq04mon{    ///<IRQ04 Batch Read Register
        using Addr = Register::Address<0x40031024,0xffffff00,0,unsigned>;
        ///Interrupt request of external interrupt ch.7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> extint7{}; 
        namespace Extint7ValC{
        }
        ///Interrupt request of external interrupt ch.6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> extint6{}; 
        namespace Extint6ValC{
        }
        ///Interrupt request of external interrupt ch.5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> extint5{}; 
        namespace Extint5ValC{
        }
        ///Interrupt request of external interrupt ch.4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> extint4{}; 
        namespace Extint4ValC{
        }
        ///Interrupt request of external interrupt ch.3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> extint3{}; 
        namespace Extint3ValC{
        }
        ///Interrupt request of external interrupt ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> extint2{}; 
        namespace Extint2ValC{
        }
        ///Interrupt request of external interrupt ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> extint1{}; 
        namespace Extint1ValC{
        }
        ///Interrupt request of external interrupt ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> extint0{}; 
        namespace Extint0ValC{
        }
    }
    namespace Noneirq05mon{    ///<IRQ05 Batch Read Register
        using Addr = Register::Address<0x40031028,0xff000000,0,unsigned>;
        ///Interrupt request of external interrupt ch.31
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> extint31{}; 
        namespace Extint31ValC{
        }
        ///Interrupt request of external interrupt ch.30
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> extint30{}; 
        namespace Extint30ValC{
        }
        ///Interrupt request of external interrupt ch.29
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> extint29{}; 
        namespace Extint29ValC{
        }
        ///Interrupt request of external interrupt ch.28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> extint28{}; 
        namespace Extint28ValC{
        }
        ///Interrupt request of external interrupt ch.27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> extint27{}; 
        namespace Extint27ValC{
        }
        ///Interrupt request of external interrupt ch.26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> extint26{}; 
        namespace Extint26ValC{
        }
        ///Interrupt request of external interrupt ch.25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> extint25{}; 
        namespace Extint25ValC{
        }
        ///Interrupt request of external interrupt ch.24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> extint24{}; 
        namespace Extint24ValC{
        }
        ///Interrupt request of external interrupt ch.23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> extint23{}; 
        namespace Extint23ValC{
        }
        ///Interrupt request of external interrupt ch.22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> extint22{}; 
        namespace Extint22ValC{
        }
        ///Interrupt request of external interrupt ch.21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> extint21{}; 
        namespace Extint21ValC{
        }
        ///Interrupt request of external interrupt ch.20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> extint20{}; 
        namespace Extint20ValC{
        }
        ///Interrupt request of external interrupt ch.19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> extint19{}; 
        namespace Extint19ValC{
        }
        ///Interrupt request of external interrupt ch.18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> extint18{}; 
        namespace Extint18ValC{
        }
        ///Interrupt request of external interrupt ch.17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> extint17{}; 
        namespace Extint17ValC{
        }
        ///Interrupt request of external interrupt ch.16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> extint16{}; 
        namespace Extint16ValC{
        }
        ///Interrupt request of external interrupt ch.15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> extint15{}; 
        namespace Extint15ValC{
        }
        ///Interrupt request of external interrupt ch.14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> extint14{}; 
        namespace Extint14ValC{
        }
        ///Interrupt request of external interrupt ch.13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> extint13{}; 
        namespace Extint13ValC{
        }
        ///Interrupt request of external interrupt ch.12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> extint12{}; 
        namespace Extint12ValC{
        }
        ///Interrupt request of external interrupt ch.11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> extint11{}; 
        namespace Extint11ValC{
        }
        ///Interrupt request of external interrupt ch.10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> extint10{}; 
        namespace Extint10ValC{
        }
        ///Interrupt request of external interrupt ch.9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> extint9{}; 
        namespace Extint9ValC{
        }
        ///Interrupt request of external interrupt ch.8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> extint8{}; 
        namespace Extint8ValC{
        }
    }
    namespace Noneirq06mon{    ///<IRQ06 Batch Read Register
        using Addr = Register::Address<0x4003102c,0xfff00000,0,unsigned>;
        ///PC match and RC match interrupt request of QPRC ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> qud2int5{}; 
        namespace Qud2int5ValC{
        }
        ///Interrupt request detected RC out of range of QPRC ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> qud2int4{}; 
        namespace Qud2int4ValC{
        }
        ///PC count invert interrupt request of QPRC ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> qud2int3{}; 
        namespace Qud2int3ValC{
        }
        ///Overflow/underflow/zero index interrupt request of QPRC ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> qud2int2{}; 
        namespace Qud2int2ValC{
        }
        ///PC and RC match interrupt request of QPRC ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> qud2int1{}; 
        namespace Qud2int1ValC{
        }
        ///PC match interrupt request of QPRC ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> qud2int0{}; 
        namespace Qud2int0ValC{
        }
        ///PC match and RC match interrupt request of QPRC ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> qud1int5{}; 
        namespace Qud1int5ValC{
        }
        ///Interrupt request detected RC out of range of QPRC ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> qud1int4{}; 
        namespace Qud1int4ValC{
        }
        ///PC count invert interrupt request of QPRC ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> qud1int3{}; 
        namespace Qud1int3ValC{
        }
        ///Overflow/underflow/zero index interrupt request of QPRC ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> qud1int2{}; 
        namespace Qud1int2ValC{
        }
        ///PC and RC match interrupt request of QPRC ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> qud1int1{}; 
        namespace Qud1int1ValC{
        }
        ///PC match interrupt request of QPRC ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> qud1int0{}; 
        namespace Qud1int0ValC{
        }
        ///PC match and RC match interrupt request of QPRC ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> qud0int5{}; 
        namespace Qud0int5ValC{
        }
        ///Interrupt request detected RC out of range of QPRC ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> qud0int4{}; 
        namespace Qud0int4ValC{
        }
        ///PC count invert interrupt request of QPRC ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> qud0int3{}; 
        namespace Qud0int3ValC{
        }
        ///Overflow/underflow/zero index interrupt request of QPRC ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> qud0int2{}; 
        namespace Qud0int2ValC{
        }
        ///PC and RC match interrupt request of QPRC ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> qud0int1{}; 
        namespace Qud0int1ValC{
        }
        ///PC match interrupt request of QPRC ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> qud0int0{}; 
        namespace Qud0int0ValC{
        }
        ///Dual timer TIMINT2 interrupt request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> timint2{}; 
        namespace Timint2ValC{
        }
        ///Dual timer TIMINT1 interrupt request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> timint1{}; 
        namespace Timint1ValC{
        }
    }
    namespace Noneirq07mon{    ///<IRQ07 Batch Read Register
        using Addr = Register::Address<0x40031030,0xfffffffc,0,unsigned>;
        ///Reception interrupt request of MFS channel 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        ///Reception interrupt request of MFS channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq08mon{    ///<IRQ08 Batch Read Register
        using Addr = Register::Address<0x40031034,0xfffffff0,0,unsigned>;
        ///Status interrupt request of MFS channel 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mfsint3{}; 
        namespace Mfsint3ValC{
        }
        ///Transmission interrupt request of MFS channel 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mfsint2{}; 
        namespace Mfsint2ValC{
        }
        ///Status interrupt request of MFS channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        ///Transmission interrupt request of MFS channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq09mon{    ///<IRQ09 Batch Read Register
        using Addr = Register::Address<0x40031038,0xfffffffc,0,unsigned>;
        ///Reception interrupt request of MFS channel 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        ///Reception interrupt request of MFS channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq10mon{    ///<IRQ10 Batch Read Register
        using Addr = Register::Address<0x4003103c,0xfffffff0,0,unsigned>;
        ///Status interrupt request of MFS channel 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mfsint3{}; 
        namespace Mfsint3ValC{
        }
        ///Transmission interrupt request of MFS channel 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mfsint2{}; 
        namespace Mfsint2ValC{
        }
        ///Status interrupt request of MFS channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        ///Transmission interrupt request of MFS channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq11mon{    ///<IRQ11 Batch Read Register
        using Addr = Register::Address<0x40031040,0xfffffffc,0,unsigned>;
        ///Reception interrupt request of MFS channel 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        ///Reception interrupt request of MFS channel 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq12mon{    ///<IRQ12 Batch Read Register
        using Addr = Register::Address<0x40031044,0xfffffff0,0,unsigned>;
        ///Status interrupt request of MFS channel 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mfsint3{}; 
        namespace Mfsint3ValC{
        }
        ///Transmission interrupt request of MFS channel 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mfsint2{}; 
        namespace Mfsint2ValC{
        }
        ///Status interrupt request of MFS channel 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        ///Transmission interrupt request of MFS channel 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq13mon{    ///<IRQ13 Batch Read Register
        using Addr = Register::Address<0x40031048,0xfffffffc,0,unsigned>;
        ///Reception interrupt request of MFS channel 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        ///Reception interrupt request of MFS channel 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq14mon{    ///<IRQ14 Batch Read Register
        using Addr = Register::Address<0x4003104c,0xfffffff0,0,unsigned>;
        ///Status interrupt request of MFS channel 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mfsint3{}; 
        namespace Mfsint3ValC{
        }
        ///Transmission interrupt request of MFS channel 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mfsint2{}; 
        namespace Mfsint2ValC{
        }
        ///Status interrupt request of MFS channel 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        ///Transmission interrupt request of MFS channel 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq15mon{    ///<IRQ15 Batch Read Register
        using Addr = Register::Address<0x40031050,0xfffffffc,0,unsigned>;
        ///Reception interrupt request of MFS channel 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        ///Reception interrupt request of MFS channel 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq16mon{    ///<IRQ16 Batch Read Register
        using Addr = Register::Address<0x40031054,0xfffffff0,0,unsigned>;
        ///Status interrupt request of MFS channel 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mfsint3{}; 
        namespace Mfsint3ValC{
        }
        ///Transmission interrupt request of MFS channel 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mfsint2{}; 
        namespace Mfsint2ValC{
        }
        ///Status interrupt request of MFS channel 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        ///Transmission interrupt request of MFS channel 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq17mon{    ///<IRQ17 Batch Read Register
        using Addr = Register::Address<0x40031058,0xfffffffc,0,unsigned>;
        ///Reception interrupt request of MFS channel 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        ///Reception interrupt request of MFS channel 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq18mon{    ///<IRQ18 Batch Read Register
        using Addr = Register::Address<0x4003105c,0xfffffff0,0,unsigned>;
        ///Status interrupt request of MFS channel 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mfsint3{}; 
        namespace Mfsint3ValC{
        }
        ///Transmission interrupt request of MFS channel 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mfsint2{}; 
        namespace Mfsint2ValC{
        }
        ///Status interrupt request of MFS channel 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        ///Transmission interrupt request of MFS channel 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq19mon{    ///<IRQ19 Batch Read Register
        using Addr = Register::Address<0x40031060,0xffffffec,0,unsigned>;
        ///Interrupt request of DMAC ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dmaint{}; 
        namespace DmaintValC{
        }
        ///Reception interrupt request of MFS channel 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        ///Reception interrupt request of MFS channel 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq20mon{    ///<IRQ20 Batch Read Register
        using Addr = Register::Address<0x40031064,0xffffffe0,0,unsigned>;
        ///Interrupt request of DMAC ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dmaint{}; 
        namespace DmaintValC{
        }
        ///Status interrupt request of MFS channel 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mfsint3{}; 
        namespace Mfsint3ValC{
        }
        ///Transmission interrupt request of MFS channel 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mfsint2{}; 
        namespace Mfsint2ValC{
        }
        ///Status interrupt request of MFS channel 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        ///Transmission interrupt request of MFS channel 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq21mon{    ///<IRQ21 Batch Read Register
        using Addr = Register::Address<0x40031068,0xffffffec,0,unsigned>;
        ///Interrupt request of DMAC ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dmaint{}; 
        namespace DmaintValC{
        }
        ///Reception interrupt request of MFS channel 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        ///Reception interrupt request of MFS channel 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq22mon{    ///<IRQ22 Batch Read Register
        using Addr = Register::Address<0x4003106c,0xffffffe0,0,unsigned>;
        ///Interrupt request of DMAC ch.3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dmaint{}; 
        namespace DmaintValC{
        }
        ///Status interrupt request of MFS channel 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mfsint3{}; 
        namespace Mfsint3ValC{
        }
        ///Transmission interrupt request of MFS channel 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mfsint2{}; 
        namespace Mfsint2ValC{
        }
        ///Status interrupt request of MFS channel 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        ///Transmission interrupt request of MFS channel 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq23mon{    ///<IRQ23 Batch Read Register
        using Addr = Register::Address<0x40031070,0xfffffe00,0,unsigned>;
        ///Interrupt request of PPG ch.20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ppgint8{}; 
        namespace Ppgint8ValC{
        }
        ///Interrupt request of PPG ch.18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ppgint7{}; 
        namespace Ppgint7ValC{
        }
        ///Interrupt request of PPG ch.16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ppgint6{}; 
        namespace Ppgint6ValC{
        }
        ///Interrupt request of PPG ch.12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ppgint5{}; 
        namespace Ppgint5ValC{
        }
        ///Interrupt request of PPG ch.10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ppgint4{}; 
        namespace Ppgint4ValC{
        }
        ///Interrupt request of PPG ch.8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ppgint3{}; 
        namespace Ppgint3ValC{
        }
        ///Interrupt request of PPG ch.4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ppgint2{}; 
        namespace Ppgint2ValC{
        }
        ///Interrupt request of PPG ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ppgint1{}; 
        namespace Ppgint1ValC{
        }
        ///Interrupt request of PPG ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ppgint0{}; 
        namespace Ppgint0ValC{
        }
    }
    namespace Noneirq24mon{    ///<IRQ24 Batch Read Register
        using Addr = Register::Address<0x40031074,0xffffffc8,0,unsigned>;
        ///RTC interrupt request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rtcint{}; 
        namespace RtcintValC{
        }
        ///Watch counter interrupt request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wcint{}; 
        namespace WcintValC{
        }
        ///Stabilization wait completion interrupt request for main PLL oscillation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mpllint{}; 
        namespace MpllintValC{
        }
        ///Stabilization wait completion interrupt request for sub-clock oscillation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> soscint{}; 
        namespace SoscintValC{
        }
        ///Stabilization wait completion interrupt request for main clock oscillation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> moscint{}; 
        namespace MoscintValC{
        }
    }
    namespace Noneirq25mon{    ///<IRQ25 Batch Read Register
        using Addr = Register::Address<0x40031078,0xffffffe0,0,unsigned>;
        ///Range comparison result interrupt request in the A/D converter unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> adcint4{}; 
        namespace Adcint4ValC{
        }
        ///Conversion result comparison interrupt request in the A/D converter unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> adcint3{}; 
        namespace Adcint3ValC{
        }
        ///FIFO overrun interrupt request in the A/D converter unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> adcint2{}; 
        namespace Adcint2ValC{
        }
        ///Scan conversion interrupt request in the A/D converter unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> adcint1{}; 
        namespace Adcint1ValC{
        }
        ///Priority conversion interrupt request in the A/D converter unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adcint0{}; 
        namespace Adcint0ValC{
        }
    }
    namespace Noneirq26mon{    ///<IRQ26 Batch Read Register
        using Addr = Register::Address<0x4003107c,0xffffffe0,0,unsigned>;
        ///Range comparison result interrupt request in the A/D converter unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> adcint4{}; 
        namespace Adcint4ValC{
        }
        ///Conversion result comparison interrupt request in the A/D converter unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> adcint3{}; 
        namespace Adcint3ValC{
        }
        ///FIFO overrun interrupt request in the A/D converter unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> adcint2{}; 
        namespace Adcint2ValC{
        }
        ///Scan conversion interrupt request in the A/D converter unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> adcint1{}; 
        namespace Adcint1ValC{
        }
        ///Priority conversion interrupt request in the A/D converter unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adcint0{}; 
        namespace Adcint0ValC{
        }
    }
    namespace Noneirq27mon{    ///<IRQ27 Batch Read Register
        using Addr = Register::Address<0x40031080,0xffffffc0,0,unsigned>;
        ///Interrupt request for LCD controller
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lcdcint{}; 
        namespace LcdcintValC{
        }
        ///Range comparison result interrupt request in the A/D converter unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> adcint4{}; 
        namespace Adcint4ValC{
        }
        ///Conversion result comparison interrupt request in the A/D converter unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> adcint3{}; 
        namespace Adcint3ValC{
        }
        ///FIFO overrun interrupt request in the A/D converter unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> adcint2{}; 
        namespace Adcint2ValC{
        }
        ///Scan conversion interrupt request in the A/D converter unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> adcint1{}; 
        namespace Adcint1ValC{
        }
        ///Priority conversion interrupt request in the A/D converter unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adcint0{}; 
        namespace Adcint0ValC{
        }
    }
    namespace Noneirq28mon{    ///<IRQ28 Batch Read Register
        using Addr = Register::Address<0x40031084,0xfffc0000,0,unsigned>;
        ///Zero detection interrupt request of the free run timer ch.2 in the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> frt2int5{}; 
        namespace Frt2int5ValC{
        }
        ///Zero detection interrupt request of the free run timer ch.1 in the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> frt2int4{}; 
        namespace Frt2int4ValC{
        }
        ///Zero detection interrupt request of the free run timer ch.0 in the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> frt2int3{}; 
        namespace Frt2int3ValC{
        }
        ///Peak value detection interrupt request of the free run timer ch.2 in the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> frt2int2{}; 
        namespace Frt2int2ValC{
        }
        ///Peak value detection interrupt request of the free run timer ch.1 in the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> frt2int1{}; 
        namespace Frt2int1ValC{
        }
        ///Peak value detection interrupt request of the free run timer ch.0 in the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> frt2int0{}; 
        namespace Frt2int0ValC{
        }
        ///Zero detection interrupt request of the free run timer ch.2 in the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> frt1int5{}; 
        namespace Frt1int5ValC{
        }
        ///Zero detection interrupt request of the free run timer ch.1 in the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> frt1int4{}; 
        namespace Frt1int4ValC{
        }
        ///Zero detection interrupt request of the free run timer ch.0 in the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frt1int3{}; 
        namespace Frt1int3ValC{
        }
        ///Peak value detection interrupt request of the free run timer ch.2 in the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> frt1int2{}; 
        namespace Frt1int2ValC{
        }
        ///Peak value detection interrupt request of the free run timer ch.1 in the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> frt1int1{}; 
        namespace Frt1int1ValC{
        }
        ///Peak value detection interrupt request of the free run timer ch.0 in the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> frt1int0{}; 
        namespace Frt1int0ValC{
        }
        ///Zero detection interrupt request of the free run timer ch.2 in the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> frt0int5{}; 
        namespace Frt0int5ValC{
        }
        ///Zero detection interrupt request of the free run timer ch.1 in the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> frt0int4{}; 
        namespace Frt0int4ValC{
        }
        ///Zero detection interrupt request of the free run timer ch.0 in the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> frt0int3{}; 
        namespace Frt0int3ValC{
        }
        ///Peak value detection interrupt request of the free run timer ch.2 in the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> frt0int2{}; 
        namespace Frt0int2ValC{
        }
        ///Peak value detection interrupt request of the free run timer ch.1 in the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> frt0int1{}; 
        namespace Frt0int1ValC{
        }
        ///Peak value detection interrupt request of the free run timer ch.0 in the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> frt0int0{}; 
        namespace Frt0int0ValC{
        }
    }
    namespace Noneirq29mon{    ///<IRQ29 Batch Read Register
        using Addr = Register::Address<0x40031088,0xfffff000,0,unsigned>;
        ///Interrupt request of the input capture ch.3 in the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> icu2int3{}; 
        namespace Icu2int3ValC{
        }
        ///Interrupt request of the input capture ch.2 in the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> icu2int2{}; 
        namespace Icu2int2ValC{
        }
        ///Interrupt request of the input capture ch.1 in the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> icu2int1{}; 
        namespace Icu2int1ValC{
        }
        ///Interrupt request of the input capture ch.0 in the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> icu2int0{}; 
        namespace Icu2int0ValC{
        }
        ///Interrupt request of the input capture ch.3 in the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> icu1int3{}; 
        namespace Icu1int3ValC{
        }
        ///Interrupt request of the input capture ch.2 in the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> icu1int2{}; 
        namespace Icu1int2ValC{
        }
        ///Interrupt request of the input capture ch.1 in the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> icu1int1{}; 
        namespace Icu1int1ValC{
        }
        ///Interrupt request of the input capture ch.0 in the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> icu1int0{}; 
        namespace Icu1int0ValC{
        }
        ///Interrupt request of the input capture ch.3 in the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> icu0int3{}; 
        namespace Icu0int3ValC{
        }
        ///Interrupt request of the input capture ch.2 in the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> icu0int2{}; 
        namespace Icu0int2ValC{
        }
        ///Interrupt request of the input capture ch.1 in the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> icu0int1{}; 
        namespace Icu0int1ValC{
        }
        ///Interrupt request of the input capture ch.0 in the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> icu0int0{}; 
        namespace Icu0int0ValC{
        }
    }
    namespace Noneirq30mon{    ///<IRQ30 Batch Read Register
        using Addr = Register::Address<0x4003108c,0xfffc0000,0,unsigned>;
        ///Interrupt request of the output compare ch.5 in the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ocu2int5{}; 
        namespace Ocu2int5ValC{
        }
        ///Interrupt request of the output compare ch.4 in the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ocu2int4{}; 
        namespace Ocu2int4ValC{
        }
        ///Interrupt request of the output compare ch.3 in the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ocu2int3{}; 
        namespace Ocu2int3ValC{
        }
        ///Interrupt request of the output compare ch.2 in the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ocu2int2{}; 
        namespace Ocu2int2ValC{
        }
        ///Interrupt request of the output compare ch.1 in the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ocu2int1{}; 
        namespace Ocu2int1ValC{
        }
        ///Interrupt request of the output compare ch.0 in the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ocu2int0{}; 
        namespace Ocu2int0ValC{
        }
        ///Interrupt request of the output compare ch.5 in the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ocu1int5{}; 
        namespace Ocu1int5ValC{
        }
        ///Interrupt request of the output compare ch.4 in the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ocu1int4{}; 
        namespace Ocu1int4ValC{
        }
        ///Interrupt request of the output compare ch.3 in the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ocu1int3{}; 
        namespace Ocu1int3ValC{
        }
        ///Interrupt request of the output compare ch.2 in the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ocu1int2{}; 
        namespace Ocu1int2ValC{
        }
        ///Interrupt request of the output compare ch.1 in the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ocu1int1{}; 
        namespace Ocu1int1ValC{
        }
        ///Interrupt request of the output compare ch.0 in the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ocu1int0{}; 
        namespace Ocu1int0ValC{
        }
        ///Interrupt request of the output compare ch.5 in the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ocu0int5{}; 
        namespace Ocu0int5ValC{
        }
        ///Interrupt request of the output compare ch.4 in the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ocu0int4{}; 
        namespace Ocu0int4ValC{
        }
        ///Interrupt request of the output compare ch.3 in the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ocu0int3{}; 
        namespace Ocu0int3ValC{
        }
        ///Interrupt request of the output compare ch.2 in the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ocu0int2{}; 
        namespace Ocu0int2ValC{
        }
        ///Interrupt request of the output compare ch.1 in the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ocu0int1{}; 
        namespace Ocu0int1ValC{
        }
        ///Interrupt request of the output compare ch.0 in the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ocu0int0{}; 
        namespace Ocu0int0ValC{
        }
    }
    namespace Noneirq31mon{    ///<IRQ31 Batch Read Register
        using Addr = Register::Address<0x40031090,0xf7ff0000,0,unsigned>;
        ///RDY/HANG interrupt request for f lash memory
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> flashint{}; 
        namespace FlashintValC{
        }
        ///IRQ1 interrupt request of the base timer ch.7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> btint15{}; 
        namespace Btint15ValC{
        }
        ///IRQ0 interrupt request of the base timer ch.7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> btint14{}; 
        namespace Btint14ValC{
        }
        ///IRQ1 interrupt request of the base timer ch.6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> btint13{}; 
        namespace Btint13ValC{
        }
        ///IRQ0 interrupt request of the base timer ch.6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> btint12{}; 
        namespace Btint12ValC{
        }
        ///IRQ1 interrupt request of the base timer ch.5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> btint11{}; 
        namespace Btint11ValC{
        }
        ///IRQ0 interrupt request of the base timer ch.5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> btint10{}; 
        namespace Btint10ValC{
        }
        ///IRQ1 interrupt request of the base timer ch.4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> btint9{}; 
        namespace Btint9ValC{
        }
        ///IRQ0 interrupt request of the base timer ch.4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> btint8{}; 
        namespace Btint8ValC{
        }
        ///IRQ1 interrupt request of the base timer ch.3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> btint7{}; 
        namespace Btint7ValC{
        }
        ///IRQ0 interrupt request of the base timer ch.3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> btint6{}; 
        namespace Btint6ValC{
        }
        ///IRQ1 interrupt request of the base timer ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> btint5{}; 
        namespace Btint5ValC{
        }
        ///IRQ0 interrupt request of the base timer ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> btint4{}; 
        namespace Btint4ValC{
        }
        ///IRQ1 interrupt request of the base timer ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> btint3{}; 
        namespace Btint3ValC{
        }
        ///IRQ0 interrupt request of the base timer ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> btint2{}; 
        namespace Btint2ValC{
        }
        ///IRQ1 interrupt request of the base timer ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btint1{}; 
        namespace Btint1ValC{
        }
        ///IRQ0 interrupt request of the base timer ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btint0{}; 
        namespace Btint0ValC{
        }
    }
    namespace Nonercintsel0{    ///<Interrupt Factor Selection Register 0
        using Addr = Register::Address<0x40031210,0x00000000,0,unsigned>;
        ///Select the interrupt factor for the interrupt vector No.22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> intsel3{}; 
        namespace Intsel3ValC{
        }
        ///Select the interrupt factor for the interrupt vector No.21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> intsel2{}; 
        namespace Intsel2ValC{
        }
        ///Select the interrupt factor for the interrupt vector No.20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> intsel1{}; 
        namespace Intsel1ValC{
        }
        ///Select the interrupt factor for the interrupt vector No.19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> intsel0{}; 
        namespace Intsel0ValC{
        }
    }
    namespace Nonercintsel1{    ///<Interrupt Factor Selection Register 1
        using Addr = Register::Address<0x40031214,0x00000000,0,unsigned>;
        ///Select the interrupt factor for the interrupt vector No.26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> intsel7{}; 
        namespace Intsel7ValC{
        }
        ///Select the interrupt factor for the interrupt vector No.25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> intsel6{}; 
        namespace Intsel6ValC{
        }
        ///Select the interrupt factor for the interrupt vector No.24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> intsel5{}; 
        namespace Intsel5ValC{
        }
        ///Select the interrupt factor for the interrupt vector No.23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> intsel4{}; 
        namespace Intsel4ValC{
        }
    }
}