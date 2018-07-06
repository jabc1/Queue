# Queue
结构化模板

typedef struct
{
    u8 boardType;                        //板的类型
    u8 object;                           //0x01升级APP区标志 0x00 升级IAP标志 
    u16 ver;                             //版本信息
    u16 crc16;                           //crc16校验
    u32 upDataLen;                       //升级包长度
    u16 noceUpDateLen;                  //单次更新的长度
    u32 updateAddr;                     //更新地址
    u8*  binFile;
    bool upDataFalg_IAP;                //更新IAP程序标志
    bool upDateFalg_APP;                //更新IAP程序标志
      
}UpData_Type;
 UpData_Type *pData;
  pData = (UpData_Type *)buff;




