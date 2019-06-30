#pragma once

namespace SigNAS3_Nanotech {
    using namespace System;
    using namespace System::Collections::Generic;

    value struct settings
    {
        int vendor;
        int type;
        int subtype;
        int ifMode;
        int blockSize;
        int pageSize;
        bool edoMode;
        int baseClock;

        int core;
        int io;
        bool vRef;
        bool reset;

        List<int>^ targSel;

        int lunTarg;
        int blockLun;
        int lunSeparat;

        String^ nandID;

        int totalBB;
        int badBlockByte;
        int codeLength;
        int bitCorrectability;
        int erase;
        int program;
        int read;
    };
}