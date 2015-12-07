#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General Purpose Input_Output Port (PJ)
    namespace Nonedata{    ///<PJ Data Register
        using Addr = Register::Address<0x400c0900,0xffffff00,0,unsigned>;
        ///PJ0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pj0{}; 
        namespace Pj0ValC{
        }
        ///PJ1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pj1{}; 
        namespace Pj1ValC{
        }
        ///PJ2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pj2{}; 
        namespace Pj2ValC{
        }
        ///PJ3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pj3{}; 
        namespace Pj3ValC{
        }
        ///PJ4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pj4{}; 
        namespace Pj4ValC{
        }
        ///PJ5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pj5{}; 
        namespace Pj5ValC{
        }
        ///PJ6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pj6{}; 
        namespace Pj6ValC{
        }
        ///PJ7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pj7{}; 
        namespace Pj7ValC{
        }
    }
    namespace Nonecr{    ///<PJ Control Register
        using Addr = Register::Address<0x400c0904,0xffffff00,0,unsigned>;
        ///PJ0C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pj0c{}; 
        namespace Pj0cValC{
        }
        ///PJ1C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pj1c{}; 
        namespace Pj1cValC{
        }
        ///PJ2C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pj2c{}; 
        namespace Pj2cValC{
        }
        ///PJ3C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pj3c{}; 
        namespace Pj3cValC{
        }
        ///PJ4C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pj4c{}; 
        namespace Pj4cValC{
        }
        ///PJ5C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pj5c{}; 
        namespace Pj5cValC{
        }
        ///PJ6C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pj6c{}; 
        namespace Pj6cValC{
        }
        ///PJ7C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pj7c{}; 
        namespace Pj7cValC{
        }
    }
    namespace Nonefr2{    ///<PJ Function Register 2
        using Addr = Register::Address<0x400c090c,0xffffff7f,0,unsigned>;
        ///PJ7F2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pj7f2{}; 
        namespace Pj7f2ValC{
        }
    }
    namespace Nonefr3{    ///<PJ Function Register 3
        using Addr = Register::Address<0x400c0910,0xffffff3f,0,unsigned>;
        ///PJ6F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pj6f3{}; 
        namespace Pj6f3ValC{
        }
        ///PJ7F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pj7f3{}; 
        namespace Pj7f3ValC{
        }
    }
    namespace Nonepup{    ///<PJ Pull-Up Control Register
        using Addr = Register::Address<0x400c092c,0xffffff00,0,unsigned>;
        ///PJ0UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pj0up{}; 
        namespace Pj0upValC{
        }
        ///PJ1UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pj1up{}; 
        namespace Pj1upValC{
        }
        ///PJ2UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pj2up{}; 
        namespace Pj2upValC{
        }
        ///PJ3UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pj3up{}; 
        namespace Pj3upValC{
        }
        ///PJ4UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pj4up{}; 
        namespace Pj4upValC{
        }
        ///PJ5UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pj5up{}; 
        namespace Pj5upValC{
        }
        ///PJ6UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pj6up{}; 
        namespace Pj6upValC{
        }
        ///PJ7UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pj7up{}; 
        namespace Pj7upValC{
        }
    }
    namespace Noneie{    ///<PJ Input Enable Control Register
        using Addr = Register::Address<0x400c0938,0xffffff00,0,unsigned>;
        ///PJ0IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pj0ie{}; 
        namespace Pj0ieValC{
        }
        ///PJ1IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pj1ie{}; 
        namespace Pj1ieValC{
        }
        ///PJ2IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pj2ie{}; 
        namespace Pj2ieValC{
        }
        ///PJ3IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pj3ie{}; 
        namespace Pj3ieValC{
        }
        ///PJ4IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pj4ie{}; 
        namespace Pj4ieValC{
        }
        ///PJ5IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pj5ie{}; 
        namespace Pj5ieValC{
        }
        ///PJ6IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pj6ie{}; 
        namespace Pj6ieValC{
        }
        ///PJ7IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pj7ie{}; 
        namespace Pj7ieValC{
        }
    }
}