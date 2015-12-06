include "event.h"

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
