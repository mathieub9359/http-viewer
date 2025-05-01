BUILD_DIR="../build"
SEPERATOR=""

if [ ! -d ../build ]; then
    mkdir $BUILD_DIR
    echo "Build directory created"
    echo $SEPERATOR
fi

cd $BUILD_DIR

echo "Building with cmake..."
cmake .. 

    echo $SEPERATOR

echo "Compiling..."
make

    echo $SEPERATOR

echo "Running application..."
../build/http-viewer