cmake_minimum_required(VERSION 3.20)

project(AETHER VERSION 0.1.0)

add_subdirectory(JUCE)

juce_add_plugin(AETHER
    COMPANY_NAME "Club $V"
    BUNDLE_ID com.clubsv.aether

    IS_SYNTH TRUE
    NEEDS_MIDI_INPUT TRUE
    NEEDS_MIDI_OUTPUT FALSE
    IS_MIDI_EFFECT FALSE

    COPY_PLUGIN_AFTER_BUILD TRUE

    PLUGIN_MANUFACTURER_CODE CLSV
    PLUGIN_CODE AETH

    FORMATS VST3 Standalone

    PRODUCT_NAME "AETHER"
)

target_sources(AETHER PRIVATE
    Source/PluginProcessor.cpp
    Source/PluginEditor.cpp
)

target_link_libraries(AETHER PRIVATE
    juce::juce_audio_utils
)

target_compile_definitions(AETHER PRIVATE
    JUCE_WEB_BROWSER=0
    JUCE_USE_CURL=0
)
