namespace Event
{
    enum EventType{
        Click           = 0x001,
        DbClick         = 0x002,
        RClick          = 0x003,
        DbRClick        = 0x004,
        MouseEnter      = 0x101,
        MouseMove       = 0x102,
        MouseOut        = 0x103
    }

    class ClickEventParam{
        int x=0,y=0;
        EventType type;
    };

    class MouseEventParam{
        int x=0,y=0;
        EventType type;
    };

    class KeyEventParam{
    
    };

    typedef void (*ClickEventFun)(ClickEventParam* Param); //定义函数型的指针回调类型
}

