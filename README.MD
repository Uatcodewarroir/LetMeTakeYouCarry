## Goal  
====   
#### 时间:2018.05.13  
#### 这个项目是建立一套转发的协议实现远程协作;  
#### 项目初期,开始只实现功能;  
#### 后期再说后来的话;  
  
简单介绍  
--------   
现在使用的是poco-1.7.9  
编译环境是x64, win10 64bits ,在项目文件下的  
`inc `包含头文件,  
`dll` 动态链接库 64  
`lib `静态库 64  
默认开发工具     
-----
VS2017最新版(保持最新)  


### 编译命令:  
buildwin.bat  
```  
 Usage:  
------  
buildwin VS_VERSION [ACTION] [LINKMODE] [CONFIGURATION] [PLATFORM] [SAMPLES] [TESTS] [TOOL]   
VS_VERSION:    "90|100|110|120|140|150"  
ACTION:        "build|rebuild|clean"   
LINKMODE:      "static_mt|static_md|shared|all"  
CONFIGURATION: "release|debug|both"   
PLATFORM:      "Win32|x64|WinCE|WEC2013"   
SAMPLES:       "samples|nosamples"   
TESTS:         "tests|notests"   
TOOL:          "devenv|vcexpress|wdexpress|msbuild"   

Default is build all.  
```    
###编译选项:  
clean   
>buildwin.cmd 150 clean

###build默认使用动态链接:


  