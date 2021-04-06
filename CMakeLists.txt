cmake_minimum_required(VERSION 3.0)
project(Helloworld)

find_package(ECM REQUIRED NO_MODULE)

set(CMAKE_MODULE_PATH ${ECM_MODULE_PATH} ${ECM_KDE_MODULE_DIR} ${CMAKE_MODULE_PATH})

include(KDEInstallDirs)
include(KDECMakeSettings)
include(KDECompilerSettings)

find_package(KF5Plasma REQUIRED)
find_package(Qt5 ${REQUIRED_QT_VERSION} CONFIG REQUIRED Quick)
find_package(KF5 ${KF5_MIN_VERSION} REQUIRED COMPONENTS Plasma)

plasma_install_package(plasmoid org.kde.Helloworld)

add_subdirectory(src)
