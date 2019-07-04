cmake_minimum_required (VERSION 2.6) 
 
set (PROJECT encryptions) 

project (${PROJECT}) 

set (CMAKE_CXX_STANDARD 11)
set (CMAKE_CXX_STANDARD_REQUIRED ON)
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin) 

set (HEADERS 
	Encryptions-master/Encryptions/AES_Const.h
	Encryptions-master/Encryptions/AES.h
	Encryptions-master/common/cryptomath.h
	Encryptions-master/common/includes.h
	Encryptions-master/Encryptions/SymAlg.h
	Encoder.h)
 
set (SOURCES 
	Encryptions-master/Encryptions/AES.cpp
	Encryptions-master/common/includes.cpp
	Encryptions-master/Encryptions/SymAlg.cpp
	Encoder.cpp
	main.cpp) 
 
add_executable (${PROJECT} ${HEADERS} ${SOURCES})