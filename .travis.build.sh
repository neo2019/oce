#! /bin/sh
set -e

ncpus=1
if test -x /usr/bin/getconf; then
    ncpus=$(/usr/bin/getconf _NPROCESSORS_ONLN)
fi

echo "Timestamp" && date
cmake -DOCE_ENABLE_DEB_FLAG:BOOL=OFF \
      -DCMAKE_BUILD_TYPE:STRING=Release \
      -DOCE_USE_TCL_TEST_FRAMEWORK:BOOL=OFF \
      -DOCE_TESTING:BOOL=OFF \
      -DOCE_DRAW:BOOL=OFF \
      -DOCE_VISUALISATION:BOOL=OFF \
      -DOCE_OCAF:BOOL=OFF \
      -DOCE_DATAEXCHANGE:BOOL=OFF \
      -DOCE_USE_PCH:BOOL=ON \
      -DOCE_WITH_GL2PS:BOOL=OFF \
      -DOCE_WITH_FREEIMAGE:BOOL=OFF \
      -DOCE_MULTITHREAD_LIBRARY:STRING=NONE \
      ..
echo ""
echo "Timestamp" && date
echo "Starting build with -j$ncpus ..."
# travis-ci truncates when there are more than 10,000 lines of output.
# Builds generate around 9,000 lines of output, trim them to see test
# results.
make -j$ncpus | grep Built

# Run OCE tests
#echo "Timestamp" && date
#make test

# Run OCCT tests, but overwrite DrawLaunchTests.draw to write
# an XML summary file at a specified location
#cat > DrawLaunchTests.draw <<EOT
#testgrid -outdir occt -xml summary.xml -refresh 300
#exit
#EOT

#echo "Timestamp" && date
#cmake -P DrawLaunchTests.cmake || true
#echo "Timestamp" && date

