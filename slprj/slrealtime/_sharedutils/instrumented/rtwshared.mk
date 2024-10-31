###########################################################################
## Makefile generated for component 'rtwshared'. 
## 
## Makefile     : rtwshared.mk
## Generated on : Mon Apr 01 17:42:17 2024
## Final product: ./rtwshared.a
## Product type : static library
## 
###########################################################################

###########################################################################
## MACROS
###########################################################################

# Macro Descriptions:
# PRODUCT_NAME            Name of the system to build
# MAKEFILE                Name of this makefile
# MODELLIB                Static library target

PRODUCT_NAME              = rtwshared
MAKEFILE                  = rtwshared.mk
MATLAB_ROOT               = C:/PROGRA~1/MATLAB/R2022b
MATLAB_BIN                = C:/PROGRA~1/MATLAB/R2022b/bin
MATLAB_ARCH_BIN           = $(MATLAB_BIN)/win64
START_DIR                 = C:/Users/My-Dell-PC/Desktop/HandControllerBoard/SimulationControllerDesign/Test01
SOLVER                    = 
SOLVER_OBJ                = 
CLASSIC_INTERFACE         = 0
TGT_FCN_LIB               = ISO_C++
MODEL_HAS_DYNAMICALLY_LOADED_SFCNS = 
RELATIVE_PATH_TO_ANCHOR   = ../../../..
C_STANDARD_OPTS           = 
CPP_STANDARD_OPTS         = 
MODELLIB                  = rtwshared.a

###########################################################################
## TOOLCHAIN SPECIFICATIONS
###########################################################################

# Toolchain Name:          Simulink Real-Time Toolchain
# Supported Version(s):    
# ToolchainInfo Version:   2022b
# Specification Revision:  1.0
# 
#-------------------------------------------
# Macros assumed to be defined elsewhere
#-------------------------------------------

# SLREALTIME_QNX_SP_ROOT
# SLREALTIME_QNX_VERSION

#-----------
# MACROS
#-----------

QCC_TARGET             = gcc_ntox86_64

TOOLCHAIN_SRCS = 
TOOLCHAIN_INCS = 
TOOLCHAIN_LIBS = -L$(MATLAB_ROOT)/toolbox/slrealtime/target/win64/target/lib -ltraceparser -lpps -lslrealtime_kernel -lslrealtime_platform -lslrealtime_rtps -lsocket -lboost_system -lboost_log -lpci -lopenblas -lpcap

#------------------------
# BUILD TOOL COMMANDS
#------------------------

# C Compiler: QNX C Compiler
CC = qcc

# Linker: QCC Linker
LD = q++

# C++ Compiler: QNX C++ Compiler
CPP = q++

# C++ Linker: QCC C++ Linker
CPP_LD = q++

# Archiver: QNX Archiver
AR = ntox86_64-gcc-ar

# Builder: GMAKE Utility
MAKE = make


#-------------------------
# Directives/Utilities
#-------------------------

CDEBUG              = -g -O0 -finstrument-functions
C_OUTPUT_FLAG       = -o
LDDEBUG             = -g
OUTPUT_FLAG         = -o
CPPDEBUG            = -g -O0 -finstrument-functions
CPP_OUTPUT_FLAG     = -o
CPPLDDEBUG          = -g
OUTPUT_FLAG         = -o
ARDEBUG             =
STATICLIB_OUTPUT_FLAG =
RM                  = @del /F
ECHO                = @echo
MV                  = @move
RUN                 =

#--------------------------------------
# "Faster Runs" Build Configuration
#--------------------------------------

ARFLAGS              = ruvs
CFLAGS               = -c -V$(QCC_TARGET) -g \
                       -O2 -fwrapv
CPPFLAGS             = -c -V$(QCC_TARGET) -g -std=gnu++14 -stdlib=libstdc++ \
                       -O2 -fwrapv
CPP_LDFLAGS          = -V$(QCC_TARGET) -g -std=gnu++14 -stdlib=libstdc++
CPP_SHAREDLIB_LDFLAGS  = -V$(QCC_TARGET) -shared -Wl,--no-undefined -g
LDFLAGS              = -V$(QCC_TARGET) -g -std=gnu++14 -stdlib=libstdc++
MAKE_FLAGS           = -f $(MAKEFILE)
SHAREDLIB_LDFLAGS    = -V$(QCC_TARGET) -shared -Wl,--no-undefined -g



###########################################################################
## OUTPUT INFO
###########################################################################

PRODUCT = ./rtwshared.a
PRODUCT_TYPE = "static library"
BUILD_TYPE = "Model Reference Library"

###########################################################################
## INCLUDE PATHS
###########################################################################

INCLUDES_BUILDINFO = -I$(START_DIR) -I$(START_DIR)/slprj/slrealtime/_sharedutils -I$(MATLAB_ROOT)/toolbox/slrealtime/simulink/blocks/dist/include -I$(MATLAB_ROOT)/toolbox/slrealtime/target/kernel/dist/include -I$(MATLAB_ROOT)/extern/include -I$(MATLAB_ROOT)/simulink/include -I$(MATLAB_ROOT)/rtw/c/src -I$(MATLAB_ROOT)/rtw/c/src/ext_mode/common

INCLUDES = $(INCLUDES_BUILDINFO)

###########################################################################
## DEFINES
###########################################################################

DEFINES_ = -DSIMULINK_REAL_TIME -D_QNX_SOURCE
DEFINES_BUILD_ARGS = -DINTEGER_CODE=0 -DEXT_MODE=1
DEFINES_CUSTOM = 
DEFINES_STANDARD = -DNRT -DUSE_RTMODEL

DEFINES = $(DEFINES_) $(DEFINES_BUILD_ARGS) $(DEFINES_CUSTOM) $(DEFINES_STANDARD)

###########################################################################
## SOURCE FILES
###########################################################################

SRCS = $(START_DIR)/slprj/slrealtime/_sharedutils/rtGetInf.cpp $(START_DIR)/slprj/slrealtime/_sharedutils/rtGetNaN.cpp $(START_DIR)/slprj/slrealtime/_sharedutils/rt_nonfinite.cpp $(START_DIR)/slprj/slrealtime/_sharedutils/rt_zcfcn.cpp $(START_DIR)/slprj/slrealtime/_sharedutils/binsearch_u32d.cpp $(START_DIR)/slprj/slrealtime/_sharedutils/intrp_NSplcd.cpp $(START_DIR)/slprj/slrealtime/_sharedutils/look_SplNBinSZcd.cpp $(START_DIR)/slprj/slrealtime/_sharedutils/plook_binx.cpp $(START_DIR)/slprj/slrealtime/_sharedutils/rt_Spline2Derivd.cpp $(START_DIR)/slprj/slrealtime/_sharedutils/look_SplNBinXZcd.cpp $(START_DIR)/slprj/slrealtime/_sharedutils/look1_bingxpw.cpp $(START_DIR)/slprj/slrealtime/_sharedutils/akimaCoefficients_double.c $(START_DIR)/slprj/slrealtime/_sharedutils/akimaDerivative_double.c $(START_DIR)/slprj/slrealtime/_sharedutils/akimaEvaluation_double.c $(START_DIR)/slprj/slrealtime/_sharedutils/akimaFiniteDiffs_double.c $(START_DIR)/slprj/slrealtime/_sharedutils/akimaHermiteBasis_double.c $(START_DIR)/slprj/slrealtime/_sharedutils/akimaStrides.c $(START_DIR)/slprj/slrealtime/_sharedutils/akimaUtils_double.c $(START_DIR)/slprj/slrealtime/_sharedutils/akimaWorkspace.c $(START_DIR)/slprj/slrealtime/_sharedutils/look_SplNBinCZcd.cpp $(START_DIR)/slprj/slrealtime/_sharedutils/plook_binc.cpp $(START_DIR)/slprj/slrealtime/_sharedutils/look1_binlxpw.cpp

ALL_SRCS = $(SRCS)

###########################################################################
## OBJECTS
###########################################################################

OBJS = rtGetInf.o rtGetNaN.o rt_nonfinite.o rt_zcfcn.o binsearch_u32d.o intrp_NSplcd.o look_SplNBinSZcd.o plook_binx.o rt_Spline2Derivd.o look_SplNBinXZcd.o look1_bingxpw.o akimaCoefficients_double.o akimaDerivative_double.o akimaEvaluation_double.o akimaFiniteDiffs_double.o akimaHermiteBasis_double.o akimaStrides.o akimaUtils_double.o akimaWorkspace.o look_SplNBinCZcd.o plook_binc.o look1_binlxpw.o

ALL_OBJS = $(OBJS)

###########################################################################
## PREBUILT OBJECT FILES
###########################################################################

PREBUILT_OBJS = 

###########################################################################
## LIBRARIES
###########################################################################

LIBS = 

###########################################################################
## SYSTEM LIBRARIES
###########################################################################

SYSTEM_LIBS = 

###########################################################################
## ADDITIONAL TOOLCHAIN FLAGS
###########################################################################

#---------------
# C Compiler
#---------------

CFLAGS_BASIC = $(DEFINES) $(INCLUDES)

CFLAGS += $(CFLAGS_BASIC)

#-----------------
# C++ Compiler
#-----------------

CPPFLAGS_BASIC = $(DEFINES) $(INCLUDES)

CPPFLAGS += $(CPPFLAGS_BASIC)

###########################################################################
## INLINED COMMANDS
###########################################################################

###########################################################################
## PHONY TARGETS
###########################################################################

.PHONY : all build clean info prebuild


all : build
	@echo "### Successfully generated all binary outputs."


build : prebuild $(PRODUCT)


prebuild : 


###########################################################################
## FINAL TARGET
###########################################################################

#---------------------------------
# Create a static library         
#---------------------------------

$(PRODUCT) : $(OBJS) $(PREBUILT_OBJS)
	@echo "### Creating static library "$(PRODUCT)" ..."
	$(AR) $(ARFLAGS)  $(PRODUCT) $(OBJS)
	@echo "### Created: $(PRODUCT)"


###########################################################################
## INTERMEDIATE TARGETS
###########################################################################

#---------------------
# SOURCE-TO-OBJECT
#---------------------

%.o : %.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : %.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(START_DIR)/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(START_DIR)/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


rtGetInf.o : $(START_DIR)/slprj/slrealtime/_sharedutils/rtGetInf.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


rtGetNaN.o : $(START_DIR)/slprj/slrealtime/_sharedutils/rtGetNaN.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


rt_nonfinite.o : $(START_DIR)/slprj/slrealtime/_sharedutils/rt_nonfinite.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


rt_zcfcn.o : $(START_DIR)/slprj/slrealtime/_sharedutils/rt_zcfcn.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


binsearch_u32d.o : $(START_DIR)/slprj/slrealtime/_sharedutils/binsearch_u32d.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


intrp_NSplcd.o : $(START_DIR)/slprj/slrealtime/_sharedutils/intrp_NSplcd.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


look_SplNBinSZcd.o : $(START_DIR)/slprj/slrealtime/_sharedutils/look_SplNBinSZcd.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


plook_binx.o : $(START_DIR)/slprj/slrealtime/_sharedutils/plook_binx.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


rt_Spline2Derivd.o : $(START_DIR)/slprj/slrealtime/_sharedutils/rt_Spline2Derivd.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


look_SplNBinXZcd.o : $(START_DIR)/slprj/slrealtime/_sharedutils/look_SplNBinXZcd.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


look1_bingxpw.o : $(START_DIR)/slprj/slrealtime/_sharedutils/look1_bingxpw.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


akimaCoefficients_double.o : $(START_DIR)/slprj/slrealtime/_sharedutils/akimaCoefficients_double.c
	$(CC) $(CFLAGS) -o $@ $<


akimaDerivative_double.o : $(START_DIR)/slprj/slrealtime/_sharedutils/akimaDerivative_double.c
	$(CC) $(CFLAGS) -o $@ $<


akimaEvaluation_double.o : $(START_DIR)/slprj/slrealtime/_sharedutils/akimaEvaluation_double.c
	$(CC) $(CFLAGS) -o $@ $<


akimaFiniteDiffs_double.o : $(START_DIR)/slprj/slrealtime/_sharedutils/akimaFiniteDiffs_double.c
	$(CC) $(CFLAGS) -o $@ $<


akimaHermiteBasis_double.o : $(START_DIR)/slprj/slrealtime/_sharedutils/akimaHermiteBasis_double.c
	$(CC) $(CFLAGS) -o $@ $<


akimaStrides.o : $(START_DIR)/slprj/slrealtime/_sharedutils/akimaStrides.c
	$(CC) $(CFLAGS) -o $@ $<


akimaUtils_double.o : $(START_DIR)/slprj/slrealtime/_sharedutils/akimaUtils_double.c
	$(CC) $(CFLAGS) -o $@ $<


akimaWorkspace.o : $(START_DIR)/slprj/slrealtime/_sharedutils/akimaWorkspace.c
	$(CC) $(CFLAGS) -o $@ $<


look_SplNBinCZcd.o : $(START_DIR)/slprj/slrealtime/_sharedutils/look_SplNBinCZcd.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


plook_binc.o : $(START_DIR)/slprj/slrealtime/_sharedutils/plook_binc.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


look1_binlxpw.o : $(START_DIR)/slprj/slrealtime/_sharedutils/look1_binlxpw.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


###########################################################################
## DEPENDENCIES
###########################################################################

$(ALL_OBJS) : rtw_proj.tmw


###########################################################################
## MISCELLANEOUS TARGETS
###########################################################################

info : 
	@echo "### PRODUCT = $(PRODUCT)"
	@echo "### PRODUCT_TYPE = $(PRODUCT_TYPE)"
	@echo "### BUILD_TYPE = $(BUILD_TYPE)"
	@echo "### INCLUDES = $(INCLUDES)"
	@echo "### DEFINES = $(DEFINES)"
	@echo "### ALL_SRCS = $(ALL_SRCS)"
	@echo "### ALL_OBJS = $(ALL_OBJS)"
	@echo "### LIBS = $(LIBS)"
	@echo "### MODELREF_LIBS = $(MODELREF_LIBS)"
	@echo "### SYSTEM_LIBS = $(SYSTEM_LIBS)"
	@echo "### TOOLCHAIN_LIBS = $(TOOLCHAIN_LIBS)"
	@echo "### CFLAGS = $(CFLAGS)"
	@echo "### LDFLAGS = $(LDFLAGS)"
	@echo "### SHAREDLIB_LDFLAGS = $(SHAREDLIB_LDFLAGS)"
	@echo "### CPPFLAGS = $(CPPFLAGS)"
	@echo "### CPP_LDFLAGS = $(CPP_LDFLAGS)"
	@echo "### CPP_SHAREDLIB_LDFLAGS = $(CPP_SHAREDLIB_LDFLAGS)"
	@echo "### ARFLAGS = $(ARFLAGS)"
	@echo "### MAKE_FLAGS = $(MAKE_FLAGS)"


clean : 
	$(ECHO) "### Deleting all derived files..."
	$(RM) $(subst /,\,$(PRODUCT))
	$(RM) $(subst /,\,$(ALL_OBJS))
	$(ECHO) "### Deleted all derived files."


