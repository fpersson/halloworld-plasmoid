set(plasmoidplugin_SRCS
        plugin.cpp
        plugin.h
        helloworld.cpp
        helloworld.h)

add_library(plasmoidplugin SHARED ${plasmoidplugin_SRCS})

target_link_libraries(plasmoidplugin Qt5::Quick KF5::Plasma)

install(TARGETS plasmoidplugin DESTINATION ${QML_INSTALL_DIR}/Helloworld)
install(FILES qmldir DESTINATION ${QML_INSTALL_DIR}/Helloworld)
