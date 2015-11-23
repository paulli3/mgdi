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

class layer
{
    public:
        layer();
        layer(int height);
        bind(int cmd,void * Event); //绑定事件
        unbind(int cmd);
    private:
        int x,y;
        int w,h;
        int ml,mr,mt,mb; //margin
        int pl,pr,pt,pb; //padding
        int blw,brw,btw,bbw; //边框宽度    
        int bls,brs,bts,bbs; //边框类型...
        int Events[5]; //事件列表
};
