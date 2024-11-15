##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            =Function_and_return_value
ConfigurationName      =Debug
WorkspaceConfiguration =Debug
WorkspacePath          =C:\Users\Admin\Desktop\stm32Training\stm32Training
ProjectPath            =C:\Users\Admin\Desktop\stm32Training\stm32Training\Function_and_return_value
IntermediateDirectory  =$(ConfigurationName)
OutDir                 =$(IntermediateDirectory)
CurrentFileName        =
CurrentFilePath        =
CurrentFileFullPath    =
User                   =Admin
Date                   =11/14/2024
CodeLitePath           ="C:\Program Files\CodeLite"
LinkerName             =C:\cygwin64\bin\gcc.exe 
SharedObjectLinkerName =C:\cygwin64\bin\x86_64-pc-cygwin-g++.exe -shared -fPIC
ObjectSuffix           =.o
DependSuffix           =.o.d
PreprocessSuffix       =.i
DebugSwitch            =-g 
IncludeSwitch          =-I
LibrarySwitch          =-l
OutputSwitch           =-o 
LibraryPathSwitch      =-L
PreprocessorSwitch     =-D
SourceSwitch           =-c 
OutputDirectory        =C:\Users\Admin\Desktop\stm32Training\stm32Training\$(WorkspaceConfiguration)
OutputFile             =..\$(WorkspaceConfiguration)\$(ProjectName).exe
Preprocessors          =
ObjectSwitch           =-o 
ArchiveOutputSwitch    = 
PreprocessOnlySwitch   =-E
ObjectsFileList        ="Function_and_return_value.txt"
MakeDirCommand         =makedir
RcCmpOptions           = 
RcCompilerName         =windres
LinkOptions            =  -static
PCHCreateFlags         =
PCHUseFlags            =
IncludePath            =  $(IncludeSwitch). $(IncludeSwitch). 
RcIncludePath          = 
Libs                   = 
ArLibs                 =  
LibPath                = $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overridden using an environment variable
##
AR       = C:\cygwin64\bin\ar.exe rcu
CXX      = C:\cygwin64\bin\x86_64-pc-cygwin-g++.exe 
CC       = C:\cygwin64\bin\gcc.exe 
CXXFLAGS =  -gdwarf-2 -O0 -Wall $(Preprocessors)
CFLAGS   =  -O0 -gdwarf-2 -std=c99 -Wall $(Preprocessors)
ASFLAGS  = 
AS       = C:\cygwin64\bin\as.exe 


##
## User defined environment variables
##
CodeLiteDir=C:\Program Files\CodeLite


##
## Object Targets Lists 
##
Objects0=$(IntermediateDirectory)\main.c$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)\.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)\.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)
.PHONY: clean PrePreBuild PreBuild MakeIntermediateDirs all PostBuild 

MakeIntermediateDirs:
	@$(MakeDirCommand) "$(IntermediateDirectory)"
	@$(MakeDirCommand) "$(OutputDirectory)"


$(IntermediateDirectory)\.d:
	@echo Creating Intermediate Directory
	@$(MakeDirCommand) "$(IntermediateDirectory)"
	@echo Intermediate directories created
PreBuild:


##
## Objects
##
$(IntermediateDirectory)\main.c$(ObjectSuffix): main.c 
	$(CC) $(SourceSwitch) "C:\Users\Admin\Desktop\stm32Training\stm32Training\Function_and_return_value\main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)\main.c$(PreprocessSuffix): main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(IntermediateDirectory)\main.c$(PreprocessSuffix) "main.c"

##
## Clean
##
clean:
	@if exist "$(IntermediateDirectory)" rmdir /S /Q "$(IntermediateDirectory)"


