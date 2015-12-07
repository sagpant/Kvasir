#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Analog-to-Digital Converter
    namespace Adc0Sc1a{    ///<ADC status and control registers 1
        using Addr = Register::Address<0x4003b000,0xffffff00,0,unsigned>;
        ///Input channel select
        enum class AdchVal {
            v00000=0x00000000,     ///<When DIFF=0, DADP0 is selected as input; when DIFF=1, DAD0 is selected as input.
            v00001=0x00000001,     ///<When DIFF=0, DADP1 is selected as input; when DIFF=1, DAD1 is selected as input.
            v00010=0x00000002,     ///<When DIFF=0, DADP2 is selected as input; when DIFF=1, DAD2 is selected as input.
            v00011=0x00000003,     ///<When DIFF=0, DADP3 is selected as input; when DIFF=1, DAD3 is selected as input.
            v00100=0x00000004,     ///<When DIFF=0, AD4 is selected as input; when DIFF=1, it is reserved.
            v00101=0x00000005,     ///<When DIFF=0, AD5 is selected as input; when DIFF=1, it is reserved.
            v00110=0x00000006,     ///<When DIFF=0, AD6 is selected as input; when DIFF=1, it is reserved.
            v00111=0x00000007,     ///<When DIFF=0, AD7 is selected as input; when DIFF=1, it is reserved.
            v01000=0x00000008,     ///<When DIFF=0, AD8 is selected as input; when DIFF=1, it is reserved.
            v01001=0x00000009,     ///<When DIFF=0, AD9 is selected as input; when DIFF=1, it is reserved.
            v01010=0x0000000a,     ///<When DIFF=0, AD10 is selected as input; when DIFF=1, it is reserved.
            v01011=0x0000000b,     ///<When DIFF=0, AD11 is selected as input; when DIFF=1, it is reserved.
            v01100=0x0000000c,     ///<When DIFF=0, AD12 is selected as input; when DIFF=1, it is reserved.
            v01101=0x0000000d,     ///<When DIFF=0, AD13 is selected as input; when DIFF=1, it is reserved.
            v01110=0x0000000e,     ///<When DIFF=0, AD14 is selected as input; when DIFF=1, it is reserved.
            v01111=0x0000000f,     ///<When DIFF=0, AD15 is selected as input; when DIFF=1, it is reserved.
            v10000=0x00000010,     ///<When DIFF=0, AD16 is selected as input; when DIFF=1, it is reserved.
            v10001=0x00000011,     ///<When DIFF=0, AD17 is selected as input; when DIFF=1, it is reserved.
            v10010=0x00000012,     ///<When DIFF=0, AD18 is selected as input; when DIFF=1, it is reserved.
            v10011=0x00000013,     ///<When DIFF=0, AD19 is selected as input; when DIFF=1, it is reserved.
            v10100=0x00000014,     ///<When DIFF=0, AD20 is selected as input; when DIFF=1, it is reserved.
            v10101=0x00000015,     ///<When DIFF=0, AD21 is selected as input; when DIFF=1, it is reserved.
            v10110=0x00000016,     ///<When DIFF=0, AD22 is selected as input; when DIFF=1, it is reserved.
            v10111=0x00000017,     ///<When DIFF=0, AD23 is selected as input; when DIFF=1, it is reserved.
            v11010=0x0000001a,     ///<When DIFF=0, Temp sensor (single-ended) is selected as input; when DIFF=1, Temp sensor (differential) is selected as input.
            v11011=0x0000001b,     ///<When DIFF=0, Bandgap (single-ended) is selected as input; when DIFF=1, Bandgap (differential) is selected as input.
            v11101=0x0000001d,     ///<When DIFF=0, VREFSH is selected as input; when DIFF=1, -VREFSH (differential) is selected as input. Voltage reference selected is determined by the REFSEL bits in the SC2 register.
            v11110=0x0000001e,     ///<When DIFF=0, VREFSL is selected as input; when DIFF=1, it is reserved. Voltage reference selected is determined by the REFSEL bits in the SC2 register.
            v11111=0x0000001f,     ///<Module disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,AdchVal> adch{}; 
        namespace AdchValC{
            constexpr Register::FieldValue<decltype(adch),AdchVal::v00000> v00000{};
            constexpr Register::FieldValue<decltype(adch),AdchVal::v00001> v00001{};
            constexpr Register::FieldValue<decltype(adch),AdchVal::v00010> v00010{};
            constexpr Register::FieldValue<decltype(adch),AdchVal::v00011> v00011{};
            constexpr Register::FieldValue<decltype(adch),AdchVal::v00100> v00100{};
            constexpr Register::FieldValue<decltype(adch),AdchVal::v00101> v00101{};
            constexpr Register::FieldValue<decltype(adch),AdchVal::v00110> v00110{};
            constexpr Register::FieldValue<decltype(adch),AdchVal::v00111> v00111{};
            constexpr Register::FieldValue<decltype(adch),AdchVal::v01000> v01000{};
            constexpr Register::FieldValue<decltype(adch),AdchVal::v01001> v01001{};
            constexpr Register::FieldValue<decltype(adch),AdchVal::v01010> v01010{};
            constexpr Register::FieldValue<decltype(adch),AdchVal::v01011> v01011{};
            constexpr Register::FieldValue<decltype(adch),AdchVal::v01100> v01100{};
            constexpr Register::FieldValue<decltype(adch),AdchVal::v01101> v01101{};
            constexpr Register::FieldValue<decltype(adch),AdchVal::v01110> v01110{};
            constexpr Register::FieldValue<decltype(adch),AdchVal::v01111> v01111{};
            constexpr Register::FieldValue<decltype(adch),AdchVal::v10000> v10000{};
            constexpr Register::FieldValue<decltype(adch),AdchVal::v10001> v10001{};
            constexpr Register::FieldValue<decltype(adch),AdchVal::v10010> v10010{};
            constexpr Register::FieldValue<decltype(adch),AdchVal::v10011> v10011{};
            constexpr Register::FieldValue<decltype(adch),AdchVal::v10100> v10100{};
            constexpr Register::FieldValue<decltype(adch),AdchVal::v10101> v10101{};
            constexpr Register::FieldValue<decltype(adch),AdchVal::v10110> v10110{};
            constexpr Register::FieldValue<decltype(adch),AdchVal::v10111> v10111{};
            constexpr Register::FieldValue<decltype(adch),AdchVal::v11010> v11010{};
            constexpr Register::FieldValue<decltype(adch),AdchVal::v11011> v11011{};
            constexpr Register::FieldValue<decltype(adch),AdchVal::v11101> v11101{};
            constexpr Register::FieldValue<decltype(adch),AdchVal::v11110> v11110{};
            constexpr Register::FieldValue<decltype(adch),AdchVal::v11111> v11111{};
        }
        ///Differential mode enable
        enum class DiffVal {
            v0=0x00000000,     ///<Single-ended conversions and input channels are selected.
            v1=0x00000001,     ///<Differential conversions and input channels are selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,DiffVal> diff{}; 
        namespace DiffValC{
            constexpr Register::FieldValue<decltype(diff),DiffVal::v0> v0{};
            constexpr Register::FieldValue<decltype(diff),DiffVal::v1> v1{};
        }
        ///Interrupt enable
        enum class AienVal {
            v0=0x00000000,     ///<Conversion complete interrupt disabled.
            v1=0x00000001,     ///<Conversion complete interrupt enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,AienVal> aien{}; 
        namespace AienValC{
            constexpr Register::FieldValue<decltype(aien),AienVal::v0> v0{};
            constexpr Register::FieldValue<decltype(aien),AienVal::v1> v1{};
        }
        ///Conversion complete flag
        enum class CocoVal {
            v0=0x00000000,     ///<Conversion not completed.
            v1=0x00000001,     ///<Conversion completed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,CocoVal> coco{}; 
        namespace CocoValC{
            constexpr Register::FieldValue<decltype(coco),CocoVal::v0> v0{};
            constexpr Register::FieldValue<decltype(coco),CocoVal::v1> v1{};
        }
    }
    namespace Adc0Sc1b{    ///<ADC status and control registers 1
        using Addr = Register::Address<0x4003b004,0xffffff00,0,unsigned>;
        ///Input channel select
        enum class AdchVal {
            v00000=0x00000000,     ///<When DIFF=0, DADP0 is selected as input; when DIFF=1, DAD0 is selected as input.
            v00001=0x00000001,     ///<When DIFF=0, DADP1 is selected as input; when DIFF=1, DAD1 is selected as input.
            v00010=0x00000002,     ///<When DIFF=0, DADP2 is selected as input; when DIFF=1, DAD2 is selected as input.
            v00011=0x00000003,     ///<When DIFF=0, DADP3 is selected as input; when DIFF=1, DAD3 is selected as input.
            v00100=0x00000004,     ///<When DIFF=0, AD4 is selected as input; when DIFF=1, it is reserved.
            v00101=0x00000005,     ///<When DIFF=0, AD5 is selected as input; when DIFF=1, it is reserved.
            v00110=0x00000006,     ///<When DIFF=0, AD6 is selected as input; when DIFF=1, it is reserved.
            v00111=0x00000007,     ///<When DIFF=0, AD7 is selected as input; when DIFF=1, it is reserved.
            v01000=0x00000008,     ///<When DIFF=0, AD8 is selected as input; when DIFF=1, it is reserved.
            v01001=0x00000009,     ///<When DIFF=0, AD9 is selected as input; when DIFF=1, it is reserved.
            v01010=0x0000000a,     ///<When DIFF=0, AD10 is selected as input; when DIFF=1, it is reserved.
            v01011=0x0000000b,     ///<When DIFF=0, AD11 is selected as input; when DIFF=1, it is reserved.
            v01100=0x0000000c,     ///<When DIFF=0, AD12 is selected as input; when DIFF=1, it is reserved.
            v01101=0x0000000d,     ///<When DIFF=0, AD13 is selected as input; when DIFF=1, it is reserved.
            v01110=0x0000000e,     ///<When DIFF=0, AD14 is selected as input; when DIFF=1, it is reserved.
            v01111=0x0000000f,     ///<When DIFF=0, AD15 is selected as input; when DIFF=1, it is reserved.
            v10000=0x00000010,     ///<When DIFF=0, AD16 is selected as input; when DIFF=1, it is reserved.
            v10001=0x00000011,     ///<When DIFF=0, AD17 is selected as input; when DIFF=1, it is reserved.
            v10010=0x00000012,     ///<When DIFF=0, AD18 is selected as input; when DIFF=1, it is reserved.
            v10011=0x00000013,     ///<When DIFF=0, AD19 is selected as input; when DIFF=1, it is reserved.
            v10100=0x00000014,     ///<When DIFF=0, AD20 is selected as input; when DIFF=1, it is reserved.
            v10101=0x00000015,     ///<When DIFF=0, AD21 is selected as input; when DIFF=1, it is reserved.
            v10110=0x00000016,     ///<When DIFF=0, AD22 is selected as input; when DIFF=1, it is reserved.
            v10111=0x00000017,     ///<When DIFF=0, AD23 is selected as input; when DIFF=1, it is reserved.
            v11010=0x0000001a,     ///<When DIFF=0, Temp sensor (single-ended) is selected as input; when DIFF=1, Temp sensor (differential) is selected as input.
            v11011=0x0000001b,     ///<When DIFF=0, Bandgap (single-ended) is selected as input; when DIFF=1, Bandgap (differential) is selected as input.
            v11101=0x0000001d,     ///<When DIFF=0, VREFSH is selected as input; when DIFF=1, -VREFSH (differential) is selected as input. Voltage reference selected is determined by the REFSEL bits in the SC2 register.
            v11110=0x0000001e,     ///<When DIFF=0, VREFSL is selected as input; when DIFF=1, it is reserved. Voltage reference selected is determined by the REFSEL bits in the SC2 register.
            v11111=0x0000001f,     ///<Module disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,AdchVal> adch{}; 
        namespace AdchValC{
            constexpr Register::FieldValue<decltype(adch),AdchVal::v00000> v00000{};
            constexpr Register::FieldValue<decltype(adch),AdchVal::v00001> v00001{};
            constexpr Register::FieldValue<decltype(adch),AdchVal::v00010> v00010{};
            constexpr Register::FieldValue<decltype(adch),AdchVal::v00011> v00011{};
            constexpr Register::FieldValue<decltype(adch),AdchVal::v00100> v00100{};
            constexpr Register::FieldValue<decltype(adch),AdchVal::v00101> v00101{};
            constexpr Register::FieldValue<decltype(adch),AdchVal::v00110> v00110{};
            constexpr Register::FieldValue<decltype(adch),AdchVal::v00111> v00111{};
            constexpr Register::FieldValue<decltype(adch),AdchVal::v01000> v01000{};
            constexpr Register::FieldValue<decltype(adch),AdchVal::v01001> v01001{};
            constexpr Register::FieldValue<decltype(adch),AdchVal::v01010> v01010{};
            constexpr Register::FieldValue<decltype(adch),AdchVal::v01011> v01011{};
            constexpr Register::FieldValue<decltype(adch),AdchVal::v01100> v01100{};
            constexpr Register::FieldValue<decltype(adch),AdchVal::v01101> v01101{};
            constexpr Register::FieldValue<decltype(adch),AdchVal::v01110> v01110{};
            constexpr Register::FieldValue<decltype(adch),AdchVal::v01111> v01111{};
            constexpr Register::FieldValue<decltype(adch),AdchVal::v10000> v10000{};
            constexpr Register::FieldValue<decltype(adch),AdchVal::v10001> v10001{};
            constexpr Register::FieldValue<decltype(adch),AdchVal::v10010> v10010{};
            constexpr Register::FieldValue<decltype(adch),AdchVal::v10011> v10011{};
            constexpr Register::FieldValue<decltype(adch),AdchVal::v10100> v10100{};
            constexpr Register::FieldValue<decltype(adch),AdchVal::v10101> v10101{};
            constexpr Register::FieldValue<decltype(adch),AdchVal::v10110> v10110{};
            constexpr Register::FieldValue<decltype(adch),AdchVal::v10111> v10111{};
            constexpr Register::FieldValue<decltype(adch),AdchVal::v11010> v11010{};
            constexpr Register::FieldValue<decltype(adch),AdchVal::v11011> v11011{};
            constexpr Register::FieldValue<decltype(adch),AdchVal::v11101> v11101{};
            constexpr Register::FieldValue<decltype(adch),AdchVal::v11110> v11110{};
            constexpr Register::FieldValue<decltype(adch),AdchVal::v11111> v11111{};
        }
        ///Differential mode enable
        enum class DiffVal {
            v0=0x00000000,     ///<Single-ended conversions and input channels are selected.
            v1=0x00000001,     ///<Differential conversions and input channels are selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,DiffVal> diff{}; 
        namespace DiffValC{
            constexpr Register::FieldValue<decltype(diff),DiffVal::v0> v0{};
            constexpr Register::FieldValue<decltype(diff),DiffVal::v1> v1{};
        }
        ///Interrupt enable
        enum class AienVal {
            v0=0x00000000,     ///<Conversion complete interrupt disabled.
            v1=0x00000001,     ///<Conversion complete interrupt enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,AienVal> aien{}; 
        namespace AienValC{
            constexpr Register::FieldValue<decltype(aien),AienVal::v0> v0{};
            constexpr Register::FieldValue<decltype(aien),AienVal::v1> v1{};
        }
        ///Conversion complete flag
        enum class CocoVal {
            v0=0x00000000,     ///<Conversion not completed.
            v1=0x00000001,     ///<Conversion completed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,CocoVal> coco{}; 
        namespace CocoValC{
            constexpr Register::FieldValue<decltype(coco),CocoVal::v0> v0{};
            constexpr Register::FieldValue<decltype(coco),CocoVal::v1> v1{};
        }
    }
    namespace Adc0Cfg1{    ///<ADC configuration register 1
        using Addr = Register::Address<0x4003b008,0xffffff00,0,unsigned>;
        ///Input clock select
        enum class AdiclkVal {
            v00=0x00000000,     ///<Bus clock.
            v01=0x00000001,     ///<Bus clock divided by 2.
            v10=0x00000002,     ///<Alternate clock (ALTCLK).
            v11=0x00000003,     ///<Asynchronous clock (ADACK).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,AdiclkVal> adiclk{}; 
        namespace AdiclkValC{
            constexpr Register::FieldValue<decltype(adiclk),AdiclkVal::v00> v00{};
            constexpr Register::FieldValue<decltype(adiclk),AdiclkVal::v01> v01{};
            constexpr Register::FieldValue<decltype(adiclk),AdiclkVal::v10> v10{};
            constexpr Register::FieldValue<decltype(adiclk),AdiclkVal::v11> v11{};
        }
        ///Conversion mode selection
        enum class ModeVal {
            v00=0x00000000,     ///<When DIFF=0: It is single-ended 8-bit conversion; when DIFF=1, it is differential 9-bit conversion with 2's complement output.
            v01=0x00000001,     ///<When DIFF=0: It is single-ended 12-bit conversion; when DIFF=1, it is differential 13-bit conversion with 2's complement output.
            v10=0x00000002,     ///<When DIFF=0: It is single-ended 10-bit conversion; when DIFF=1, it is differential 11-bit conversion with 2's complement output.
            v11=0x00000003,     ///<When DIFF=0: It is single-ended 16-bit conversion; when DIFF=1, it is differential 16-bit conversion with 2's complement output .
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::v00> v00{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::v01> v01{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::v10> v10{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::v11> v11{};
        }
        ///Sample time configuration
        enum class AdlsmpVal {
            v0=0x00000000,     ///<Short sample time.
            v1=0x00000001,     ///<Long sample time.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,AdlsmpVal> adlsmp{}; 
        namespace AdlsmpValC{
            constexpr Register::FieldValue<decltype(adlsmp),AdlsmpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(adlsmp),AdlsmpVal::v1> v1{};
        }
        ///Clock divide select
        enum class AdivVal {
            v00=0x00000000,     ///<The divide ratio is 1 and the clock rate is input clock.
            v01=0x00000001,     ///<The divide ratio is 2 and the clock rate is (input clock)/2.
            v10=0x00000002,     ///<The divide ratio is 4 and the clock rate is (input clock)/4.
            v11=0x00000003,     ///<The divide ratio is 8 and the clock rate is (input clock)/8.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,AdivVal> adiv{}; 
        namespace AdivValC{
            constexpr Register::FieldValue<decltype(adiv),AdivVal::v00> v00{};
            constexpr Register::FieldValue<decltype(adiv),AdivVal::v01> v01{};
            constexpr Register::FieldValue<decltype(adiv),AdivVal::v10> v10{};
            constexpr Register::FieldValue<decltype(adiv),AdivVal::v11> v11{};
        }
        ///Low-power configuration
        enum class AdlpcVal {
            v0=0x00000000,     ///<Normal power configuration.
            v1=0x00000001,     ///<Low power configuration. The power is reduced at the expense of maximum clock speed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,AdlpcVal> adlpc{}; 
        namespace AdlpcValC{
            constexpr Register::FieldValue<decltype(adlpc),AdlpcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(adlpc),AdlpcVal::v1> v1{};
        }
    }
    namespace Adc0Cfg2{    ///<Configuration register 2
        using Addr = Register::Address<0x4003b00c,0xffffffe0,0,unsigned>;
        ///Long sample time select
        enum class AdlstsVal {
            v00=0x00000000,     ///<Default longest sample time (20 extra ADCK cycles; 24 ADCK cycles total).
            v01=0x00000001,     ///<12 extra ADCK cycles; 16 ADCK cycles total sample time.
            v10=0x00000002,     ///<6 extra ADCK cycles; 10 ADCK cycles total sample time.
            v11=0x00000003,     ///<2 extra ADCK cycles; 6 ADCK cycles total sample time.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,AdlstsVal> adlsts{}; 
        namespace AdlstsValC{
            constexpr Register::FieldValue<decltype(adlsts),AdlstsVal::v00> v00{};
            constexpr Register::FieldValue<decltype(adlsts),AdlstsVal::v01> v01{};
            constexpr Register::FieldValue<decltype(adlsts),AdlstsVal::v10> v10{};
            constexpr Register::FieldValue<decltype(adlsts),AdlstsVal::v11> v11{};
        }
        ///High speed configuration
        enum class AdhscVal {
            v0=0x00000000,     ///<Normal conversion sequence selected.
            v1=0x00000001,     ///<High speed conversion sequence selected (2 additional ADCK cycles to total conversion time).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,AdhscVal> adhsc{}; 
        namespace AdhscValC{
            constexpr Register::FieldValue<decltype(adhsc),AdhscVal::v0> v0{};
            constexpr Register::FieldValue<decltype(adhsc),AdhscVal::v1> v1{};
        }
        ///Asynchronous clock output enable
        enum class AdackenVal {
            v0=0x00000000,     ///<Asynchronous clock output disabled; Asynchronous clock only enabled if selected by ADICLK and a conversion is active.
            v1=0x00000001,     ///<Asynchronous clock and clock output enabled regardless of the state of the ADC.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,AdackenVal> adacken{}; 
        namespace AdackenValC{
            constexpr Register::FieldValue<decltype(adacken),AdackenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(adacken),AdackenVal::v1> v1{};
        }
        ///ADC Mux select
        enum class MuxselVal {
            v0=0x00000000,     ///<ADxxa channels are selected.
            v1=0x00000001,     ///<ADxxb channels are selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,MuxselVal> muxsel{}; 
        namespace MuxselValC{
            constexpr Register::FieldValue<decltype(muxsel),MuxselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(muxsel),MuxselVal::v1> v1{};
        }
    }
    namespace Adc0Ra{    ///<ADC data result register
        using Addr = Register::Address<0x4003b010,0xffff0000,0,unsigned>;
        ///Data result
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d{}; 
        namespace DValC{
        }
    }
    namespace Adc0Rb{    ///<ADC data result register
        using Addr = Register::Address<0x4003b014,0xffff0000,0,unsigned>;
        ///Data result
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d{}; 
        namespace DValC{
        }
    }
    namespace Adc0Cv1{    ///<Compare value registers
        using Addr = Register::Address<0x4003b018,0xffff0000,0,unsigned>;
        ///Compare value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cv{}; 
        namespace CvValC{
        }
    }
    namespace Adc0Cv2{    ///<Compare value registers
        using Addr = Register::Address<0x4003b01c,0xffff0000,0,unsigned>;
        ///Compare value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cv{}; 
        namespace CvValC{
        }
    }
    namespace Adc0Sc2{    ///<Status and control register 2
        using Addr = Register::Address<0x4003b020,0xffffff00,0,unsigned>;
        ///Voltage reference selection
        enum class RefselVal {
            v00=0x00000000,     ///<Default voltage reference pin pair (external pins VREFH and VREFL)
            v01=0x00000001,     ///<Alternate reference pair (VALTH and VALTL). This pair may be additional external pins or internal sources depending on MCU configuration. Consult the Chip Configuration information for details specific to this MCU.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,RefselVal> refsel{}; 
        namespace RefselValC{
            constexpr Register::FieldValue<decltype(refsel),RefselVal::v00> v00{};
            constexpr Register::FieldValue<decltype(refsel),RefselVal::v01> v01{};
        }
        ///DMA enable
        enum class DmaenVal {
            v0=0x00000000,     ///<DMA is disabled.
            v1=0x00000001,     ///<DMA is enabled and will assert the ADC DMA request during a ADC conversion complete event noted by the assertion of any of the ADC COCO flags.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,DmaenVal> dmaen{}; 
        namespace DmaenValC{
            constexpr Register::FieldValue<decltype(dmaen),DmaenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dmaen),DmaenVal::v1> v1{};
        }
        ///Compare function range enable
        enum class AcrenVal {
            v0=0x00000000,     ///<Range function disabled. Only the compare value 1 register (CV1) is compared.
            v1=0x00000001,     ///<Range function enabled. Both compare value registers (CV1 and CV2) are compared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,AcrenVal> acren{}; 
        namespace AcrenValC{
            constexpr Register::FieldValue<decltype(acren),AcrenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(acren),AcrenVal::v1> v1{};
        }
        ///Compare function greater than enable
        enum class AcfgtVal {
            v0=0x00000000,     ///<Configures less than threshold, outside range not inclusive and inside range not inclusive functionality based on the values placed in the CV1 and CV2 registers.
            v1=0x00000001,     ///<Configures greater than or equal to threshold, outside range inclusive and inside range inclusive functionality based on the values placed in the CV1 and CV2 registers.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,AcfgtVal> acfgt{}; 
        namespace AcfgtValC{
            constexpr Register::FieldValue<decltype(acfgt),AcfgtVal::v0> v0{};
            constexpr Register::FieldValue<decltype(acfgt),AcfgtVal::v1> v1{};
        }
        ///Compare function enable
        enum class AcfeVal {
            v0=0x00000000,     ///<Compare function disabled.
            v1=0x00000001,     ///<Compare function enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,AcfeVal> acfe{}; 
        namespace AcfeValC{
            constexpr Register::FieldValue<decltype(acfe),AcfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(acfe),AcfeVal::v1> v1{};
        }
        ///Conversion trigger select
        enum class AdtrgVal {
            v0=0x00000000,     ///<Software trigger selected.
            v1=0x00000001,     ///<Hardware trigger selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,AdtrgVal> adtrg{}; 
        namespace AdtrgValC{
            constexpr Register::FieldValue<decltype(adtrg),AdtrgVal::v0> v0{};
            constexpr Register::FieldValue<decltype(adtrg),AdtrgVal::v1> v1{};
        }
        ///Conversion active
        enum class AdactVal {
            v0=0x00000000,     ///<Conversion not in progress.
            v1=0x00000001,     ///<Conversion in progress.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,AdactVal> adact{}; 
        namespace AdactValC{
            constexpr Register::FieldValue<decltype(adact),AdactVal::v0> v0{};
            constexpr Register::FieldValue<decltype(adact),AdactVal::v1> v1{};
        }
    }
    namespace Adc0Sc3{    ///<Status and control register 3
        using Addr = Register::Address<0x4003b024,0xffffff30,0,unsigned>;
        ///Hardware average select
        enum class AvgsVal {
            v00=0x00000000,     ///<4 samples averaged.
            v01=0x00000001,     ///<8 samples averaged.
            v10=0x00000002,     ///<16 samples averaged.
            v11=0x00000003,     ///<32 samples averaged.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,AvgsVal> avgs{}; 
        namespace AvgsValC{
            constexpr Register::FieldValue<decltype(avgs),AvgsVal::v00> v00{};
            constexpr Register::FieldValue<decltype(avgs),AvgsVal::v01> v01{};
            constexpr Register::FieldValue<decltype(avgs),AvgsVal::v10> v10{};
            constexpr Register::FieldValue<decltype(avgs),AvgsVal::v11> v11{};
        }
        ///Hardware average enable
        enum class AvgeVal {
            v0=0x00000000,     ///<Hardware average function disabled.
            v1=0x00000001,     ///<Hardware average function enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,AvgeVal> avge{}; 
        namespace AvgeValC{
            constexpr Register::FieldValue<decltype(avge),AvgeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(avge),AvgeVal::v1> v1{};
        }
        ///Continuous conversion enable
        enum class AdcoVal {
            v0=0x00000000,     ///<One conversion or one set of conversions if the hardware average function is enabled (AVGE=1) after initiating a conversion.
            v1=0x00000001,     ///<Continuous conversions or sets of conversions if the hardware average function is enabled (AVGE=1) after initiating a conversion.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,AdcoVal> adco{}; 
        namespace AdcoValC{
            constexpr Register::FieldValue<decltype(adco),AdcoVal::v0> v0{};
            constexpr Register::FieldValue<decltype(adco),AdcoVal::v1> v1{};
        }
        ///Calibration failed flag
        enum class CalfVal {
            v0=0x00000000,     ///<Calibration completed normally.
            v1=0x00000001,     ///<Calibration failed. ADC accuracy specifications are not guaranteed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,CalfVal> calf{}; 
        namespace CalfValC{
            constexpr Register::FieldValue<decltype(calf),CalfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(calf),CalfVal::v1> v1{};
        }
        ///Calibration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cal{}; 
        namespace CalValC{
        }
    }
    namespace Adc0Ofs{    ///<ADC offset correction register
        using Addr = Register::Address<0x4003b028,0xffff0000,0,unsigned>;
        ///Offset error correction value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ofs{}; 
        namespace OfsValC{
        }
    }
    namespace Adc0Pg{    ///<ADC plus-side gain register
        using Addr = Register::Address<0x4003b02c,0xffff0000,0,unsigned>;
        ///Plus-side gain
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pg{}; 
        namespace PgValC{
        }
    }
    namespace Adc0Mg{    ///<ADC minus-side gain register
        using Addr = Register::Address<0x4003b030,0xffff0000,0,unsigned>;
        ///Minus-side gain
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mg{}; 
        namespace MgValC{
        }
    }
    namespace Adc0Clpd{    ///<ADC plus-side general calibration value register
        using Addr = Register::Address<0x4003b034,0xffffffc0,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> clpd{}; 
        namespace ClpdValC{
        }
    }
    namespace Adc0Clps{    ///<ADC plus-side general calibration value register
        using Addr = Register::Address<0x4003b038,0xffffffc0,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> clps{}; 
        namespace ClpsValC{
        }
    }
    namespace Adc0Clp4{    ///<ADC plus-side general calibration value register
        using Addr = Register::Address<0x4003b03c,0xfffffc00,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> clp4{}; 
        namespace Clp4ValC{
        }
    }
    namespace Adc0Clp3{    ///<ADC plus-side general calibration value register
        using Addr = Register::Address<0x4003b040,0xfffffe00,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> clp3{}; 
        namespace Clp3ValC{
        }
    }
    namespace Adc0Clp2{    ///<ADC plus-side general calibration value register
        using Addr = Register::Address<0x4003b044,0xffffff00,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> clp2{}; 
        namespace Clp2ValC{
        }
    }
    namespace Adc0Clp1{    ///<ADC plus-side general calibration value register
        using Addr = Register::Address<0x4003b048,0xffffff80,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> clp1{}; 
        namespace Clp1ValC{
        }
    }
    namespace Adc0Clp0{    ///<ADC plus-side general calibration value register
        using Addr = Register::Address<0x4003b04c,0xffffffc0,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> clp0{}; 
        namespace Clp0ValC{
        }
    }
    namespace Adc0Clmd{    ///<ADC minus-side general calibration value register
        using Addr = Register::Address<0x4003b054,0xffffffc0,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> clmd{}; 
        namespace ClmdValC{
        }
    }
    namespace Adc0Clms{    ///<ADC minus-side general calibration value register
        using Addr = Register::Address<0x4003b058,0xffffffc0,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> clms{}; 
        namespace ClmsValC{
        }
    }
    namespace Adc0Clm4{    ///<ADC minus-side general calibration value register
        using Addr = Register::Address<0x4003b05c,0xfffffc00,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> clm4{}; 
        namespace Clm4ValC{
        }
    }
    namespace Adc0Clm3{    ///<ADC minus-side general calibration value register
        using Addr = Register::Address<0x4003b060,0xfffffe00,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> clm3{}; 
        namespace Clm3ValC{
        }
    }
    namespace Adc0Clm2{    ///<ADC minus-side general calibration value register
        using Addr = Register::Address<0x4003b064,0xffffff00,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> clm2{}; 
        namespace Clm2ValC{
        }
    }
    namespace Adc0Clm1{    ///<ADC minus-side general calibration value register
        using Addr = Register::Address<0x4003b068,0xffffff80,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> clm1{}; 
        namespace Clm1ValC{
        }
    }
    namespace Adc0Clm0{    ///<ADC minus-side general calibration value register
        using Addr = Register::Address<0x4003b06c,0xffffffc0,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> clm0{}; 
        namespace Clm0ValC{
        }
    }
}