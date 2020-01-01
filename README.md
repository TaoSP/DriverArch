# DriverArch
Driver Architecture, embedded software ...
Version: V1.0.0  2020-01-01 Created

工作中学习记录, 嵌入式系统软件架构

DriverArchitecture/trunk
|—— bin           //
|—— build         //
|—— Include       // 公共头文件
     —— osa         // operate system abstract layer 封装操作系统接口, 跨OS
     —— prc         // platform resource center 跨平台
     —— pdc         // peripheral driver center
     —— pdi         // peripheral driver interface
|—— Libs          //
|—— OS            // 操作系统
|—— Src           // 源文件
     —— Drv         // 内核态驱动
         —— OSA
         —— PRC
         —— PDC
	 —— User        // 用户态接口
         —— PDI
	 —— App         // 应用程序
|—— Tools         // 工具


# Done
