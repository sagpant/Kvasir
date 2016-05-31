#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//USB Clock
    namespace UsbclkUccr{    ///<USB Clock Control Register
        using Addr = Register::Address<0x40036000,0xfffffffc,0x00000000,unsigned char>;
        ///USB clock selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ucsel{}; 
        ///USB clock output enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ucen{}; 
    }
    namespace UsbclkUpcr1{    ///<USB-PLL Control Register 1
        using Addr = Register::Address<0x40036004,0xfffffffc,0x00000000,unsigned char>;
        ///USB-PLL input clock selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> upinc{}; 
        ///USB-PLL oscillation enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> upllen{}; 
    }
    namespace UsbclkUpcr2{    ///<USB-PLL Control Register 2
        using Addr = Register::Address<0x40036008,0xfffffff8,0x00000000,unsigned char>;
        ///USB-PLL oscillation stabilization wait time setting bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> upowt{}; 
    }
    namespace UsbclkUpcr3{    ///<USB-PLL Control Register 3
        using Addr = Register::Address<0x4003600c,0xffffffe0,0x00000000,unsigned char>;
        ///Frequency division ratio (K) setting bit of the USB-PLL clock 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> upllk{}; 
    }
    namespace UsbclkUpcr4{    ///<USB-PLL Control Register 4
        using Addr = Register::Address<0x40036010,0xffffff80,0x00000000,unsigned char>;
        ///Frequency division ratio (N) setting bit of the USB-PLL clock 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> uplln{}; 
    }
    namespace UsbclkUpcr5{    ///<USB-PLL Control Register 5
        using Addr = Register::Address<0x40036024,0xfffffff0,0x00000000,unsigned char>;
        ///Frequency division ratio (M) setting bit of the USB-PLL clock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> upllm{}; 
    }
    namespace UsbclkUpStr{    ///<USB-PLL Status Register
        using Addr = Register::Address<0x40036014,0xfffffffe,0x00000000,unsigned char>;
        ///USB-PLL oscillation stabilization bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> uprdy{}; 
    }
    namespace UsbclkUpintEnr{    ///<USB-PLL Interrupt Source Enable Register
        using Addr = Register::Address<0x40036018,0xfffffffe,0x00000000,unsigned char>;
        ///USB-PLL oscillation stabilization wait complete interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> upcse{}; 
    }
    namespace UsbclkUpintStr{    ///<USB-PLL Interrupt Source Status Register
        using Addr = Register::Address<0x40036020,0xfffffffe,0x00000000,unsigned char>;
        ///USB-PLL interrupt source status bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> upcsi{}; 
    }
    namespace UsbclkUpintClr{    ///<USB-PLL Interrupt Source Clear Register
        using Addr = Register::Address<0x4003601c,0xfffffffe,0x00000000,unsigned char>;
        ///USB-PLL oscillation stabilization interrupt source clear bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> upcsc{}; 
    }
    namespace UsbclkUsben{    ///<USB Enable Register
        using Addr = Register::Address<0x40036030,0xfffffffe,0x00000000,unsigned char>;
        ///USB enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usben{}; 
    }
}
