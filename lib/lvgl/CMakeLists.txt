project("lvgl_lib")

add_library(${PROJECT_NAME} INTERFACE)

set(INCLUDES
    ${CMAKE_CURRENT_SOURCE_DIR}
)

target_sources(${PROJECT_NAME} INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}/fonts/lv_font_profont_12.c
    ${CMAKE_CURRENT_SOURCE_DIR}/fonts/lv_font_profont_24.c
    ${CMAKE_CURRENT_SOURCE_DIR}/fonts/lv_font_haxrcorp4089_16.c
    ${CMAKE_CURRENT_SOURCE_DIR}/fonts/lv_font_helvetica_bold_12.c
)

target_compile_options(${PROJECT_NAME} INTERFACE
)

target_include_directories(${PROJECT_NAME} INTERFACE ${INCLUDES})

set(CONFIG_LV_BUILD_DEMOS OFF) # for demos
set(CONFIG_LV_BUILD_EXAMPLES OFF) # for examples
set(CONFIG_LV_USE_THORVG_INTERNAL OFF) # for ThorVG
set(LV_BUILD_CONF_PATH ${CMAKE_CURRENT_SOURCE_DIR}/lv_conf.h CACHE STRING "" FORCE)

add_subdirectory(lvgl)

target_link_libraries(${PROJECT_NAME} INTERFACE
    lvgl
)
