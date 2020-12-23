#################
#Phoenix-EAS-Pelt#
##################

# Clean out folder
rm -rf '/media/system/root1/cosmos_lavender/out'

# Set defaults
cd "/media/system/root1/cosmos_lavender"
wd=$(pwd)
out=$wd/out
HOME="/media/system/root1/"
BUILD="/media/system/root1/cosmos_lavender"

CROSS_COMPILE_PATH=${HOME}/aarch64-maestro-linux-android/bin/aarch64-maestro--linux-gnu-
CROSS_COMPILE32_PATH=${HOME}/arm-maestro-linux-gnueabi/bin/arm-maestro-linux-gnueabi-

# Set kernel source workspace
cd $BUILD

# Export ARCH <arm, arm64, x86, x86_64>
export ARCH=arm64

# Export SUBARCH <arm, arm64, x86, x86_64>
export SUBARCH=arm64

# Set kernal name

# export LOCALVERSION=-

# Export Username
export KBUILD_BUILD_USER=KazuDante

# Export Machine name
export KBUILD_BUILD_HOST=xdadevelopers

# Compiler String
CLANG=/media/system/root1/aosp-clang/bin/clang
export KBUILD_COMPILER_STRING="$(${CLANG} --version | head -n 1 | perl -pe 's/\(http.*?\)//gs' | sed -e 's/  */ /g')"

# Make and Clean
make O=$out clean
make O=$out mrproper

# Make <defconfig>
make O=$out ARCH=arm64 lavender_defconfig
DATE_START=$(date +"%s")

# Build Kernel
make -j$(nproc --all) Image.gz-dtb O=$out
                                   ARCH=arm64 \
                                   CC=$CLANG \
                                   CLANG_TRIPLE=aarch64-linux-gnu \
                                   CROSS_COMPILE_ARM32=${CROSS_COMPILE32_PATH} \
                                   CROSS_COMPILE=${CROSS_COMPILE_PATH}

DATE_END=$(date +"%s")
DIFF=$(($DATE_END - $DATE_START))
echo "Time: $(($DIFF / 60)) minute(s) and $(($DIFF % 60)) seconds."
# mounting to browser
cd "/media/system/root1/cosmos_lavender/out/arch/arm64/boot"
python3 -m http.server 3333
