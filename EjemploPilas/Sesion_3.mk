##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Sesion_3
ConfigurationName      :=Debug
WorkspaceConfiguration :=Debug
WorkspacePath          :=C:/Users/minig/OneDrive/Documentos/Sesion_1
ProjectPath            :=C:/Users/minig/OneDrive/Documentos/Sesion_1/Sesion_3
IntermediateDirectory  :=../build-$(WorkspaceConfiguration)/Sesion_3
OutDir                 :=$(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=minig
Date                   :=10/3/2024
CodeLitePath           :=C:/Users/minig/OneDrive/Documentos/codelite-amd64-17.0.0/codelite
MakeDirCommand         :=mkdir
LinkerName             :=g++
SharedObjectLinkerName :=g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.o.i
DebugSwitch            :=-gstab
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputDirectory        :=C:/Users/minig/OneDrive/Documentos/Sesion_1/build-$(WorkspaceConfiguration)/bin
OutputFile             :=..\build-$(WorkspaceConfiguration)\bin\$(ProjectName).exe
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E 
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
RcCmpOptions           := 
RcCompilerName         :=windres
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overridden using an environment variable
##
AR       := ar rcus
CXX      := g++
CC       := gcc
CXXFLAGS :=  -gdwarf-2 -O0 -Wall $(Preprocessors)
CFLAGS   :=  -gdwarf-2 -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := as


##
## User defined environment variables
##
CodeLiteDir:=E:\EEDD\codelite-amd64-17.0.0\codelite
Objects0=$(IntermediateDirectory)/src_Header Files_ClasePila.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_Header Files_ClaseNodoPila.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@if not exist "$(IntermediateDirectory)" $(MakeDirCommand) "$(IntermediateDirectory)"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "$(IntermediateDirectory)" $(MakeDirCommand) "$(IntermediateDirectory)"
	@if not exist "$(OutputDirectory)" $(MakeDirCommand) "$(OutputDirectory)"

$(IntermediateDirectory)/.d:
	@if not exist "$(IntermediateDirectory)" $(MakeDirCommand) "$(IntermediateDirectory)"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/src_Header Files_ClasePila.cpp$(ObjectSuffix): src/Header Files/ClasePila.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/minig/OneDrive/Documentos/Sesion_1/Sesion_3/src/Header Files/ClasePila.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_Header Files_ClasePila.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_Header Files_ClasePila.cpp$(PreprocessSuffix): src/Header Files/ClasePila.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_Header Files_ClasePila.cpp$(PreprocessSuffix) "src/Header Files/ClasePila.cpp"

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/minig/OneDrive/Documentos/Sesion_1/Sesion_3/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/src_Header Files_ClaseNodoPila.cpp$(ObjectSuffix): src/Header Files/ClaseNodoPila.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/minig/OneDrive/Documentos/Sesion_1/Sesion_3/src/Header Files/ClaseNodoPila.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_Header Files_ClaseNodoPila.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_Header Files_ClaseNodoPila.cpp$(PreprocessSuffix): src/Header Files/ClaseNodoPila.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_Header Files_ClaseNodoPila.cpp$(PreprocessSuffix) "src/Header Files/ClaseNodoPila.cpp"

##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


