#!/bin/bash
#Removing any previous build artifacts, if there are any
./cleanBuildArtifacts.sh

cmake -H. -Bbuild 
cmake --build build/