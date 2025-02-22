/*  ===========================================================================
 *
 *   This file is part of HISE.
 *   Copyright 2016 Christoph Hart
 *
 *   HISE is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   HISE is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with HISE.  If not, see <http://www.gnu.org/licenses/>.
 *
 *   Commercial licenses for using HISE in an closed source project are
 *   available on request. Please visit the project's website to get more
 *   information about commercial licensing:
 *
 *   http://www.hise.audio/
 *
 *   HISE is based on the JUCE library,
 *   which must be separately licensed for closed source applications:
 *
 *   http://www.juce.com
 *
 *   ===========================================================================
 */

 namespace hise { using namespace juce;
 
// This is a autogenerated file that contains the template for the plugin exporter .jucer file

static const unsigned char projectTemplate_jucer_lines[] = R"(
<?xml version="1.0" encoding="UTF-8"?>

<JUCERPROJECT id="Tw64Zd" name="%NAME%" projectType="audioplug" version="%VERSION%"
              bundleIdentifier="%BUNDLE_ID%" includeBinaryInAppConfig="1" buildVST="%BUILD_VST%"
              buildVST3="%BUILD_VST3%" buildAU="%BUILD_AU%" buildAUv3="%BUILD_AUV3%" buildStandalone="%BUILD_AUV3%" buildRTAS="0" buildAAX="%BUILD_AAX%" pluginName="%NAME%"
              pluginDesc="%NAME%" pluginManufacturer="%COMPANY%" pluginManufacturerCode="%MC%"
              pluginCode="%PC%" pluginChannelConfigs="%CHANNEL_CONFIG%" pluginIsSynth="%PLUGINISSYNTH%"
              pluginWantsMidiIn="%PLUGINWANTSMIDIIN%" pluginProducesMidiOut="%PLUGIN_PRODUCES_MIDI_OUT%" pluginIsMidiEffectPlugin="%PLUGINISMIDIFX%"
              pluginEditorRequiresKeys="1" pluginAUExportPrefix="DemoProjectAU"
              pluginRTASCategory="" aaxIdentifier="%AAX_IDENTIFIER%"
              pluginAAXCategory="%AAX_CATEGORY%" pluginVST3Category="%VST3_CATEGORY%" jucerVersion="5.2.0"
              companyName="%COMPANY%" companyWebsite="%COMPANY_WEBSITE%" companyCopyright="%COMPANY_COPYRIGHT%"
   displaySplashScreen="0"
     reportAppUsage="0" splashScreenColour="Dark" enableIAA="1" cppLanguageStandard="17">
  <MAINGROUP id="SLR7uY" name="%NAME%">
    <GROUP id="{122C85F1-8B09-257A-B636-113E3EAC258A}" name="Source">
       <FILE id="KmyOlv" name="infoError.png" compile="0" resource="1" file="Source/Images/infoError.png"/>
      <FILE id="CNpA5r" name="infoInfo.png" compile="0" resource="1" file="Source/Images/infoInfo.png"/>
      <FILE id="MjbOy3" name="infoQuestion.png" compile="0" resource="1"
            file="Source/Images/infoQuestion.png"/>
      <FILE id="zsTpOz" name="infoWarning.png" compile="0" resource="1" file="Source/Images/infoWarning.png"/>
      <FILE id="jJzDA2" name="CopyProtection.cpp" compile="1" resource="0" file="Source/CopyProtection.cpp"/>
      <FILE id="AOT2K8" name="Plugin.cpp" compile="1" resource="0" file="Source/Plugin.cpp"/>
      <FILE id="esGQuC" name="PresetData.cpp" compile="1" resource="0" file="Source/PresetData.cpp"/>
      <FILE id="q8WZ82" name="PresetData.h" compile="0" resource="0" file="Source/PresetData.h"/>
      %ADDITIONAL_FILES%
    </GROUP>
  </MAINGROUP>
  <EXPORTFORMATS>
    <%VS_VERSION% targetFolder="Builds/%TARGET_FOLDER%" vstLegacyFolder="%VSTSDK_FOLDER%" vst3Folder="%VSTSDK3_FOLDER%" aaxFolder="%AAX_PATH%" 
            IPP1ALibrary="%IPP_1A%" extraDefs="%PLUGIN_CHANNEL_AMOUNT%&#10;%EXTRA_DEFINES_WIN%&#10;%PERFETTO_INCLUDE_WIN%" extraCompilerFlags="/bigobj /cgthreads8 %MSVC_WARNINGS% %PERFETTO_COMPILER_FLAGS_WIN%">
      <CONFIGURATIONS>
        <CONFIGURATION name="Debug" winWarningLevel="1" generateManifest="1" winArchitecture="x64"
                       isDebug="1" optimisation="1" targetName="%NAME% Debug" headerPath="%FAUST_HEADER_PATH% C:/Program Files/Common Files/fftw3\"
                       libraryPath="%AAX_DEBUG_LIB%;%WIN_STATIC_LIB_FOLDER_D64% C:/Program Files/Common Files/fftw3\" binaryPath="Compiled/" useRuntimeLibDLL="0" prebuildCommand="%PREBUILD_COMMAND%"/>
        <CONFIGURATION name="Release" winWarningLevel="1" generateManifest="1"
                       winArchitecture="x64" isDebug="0" optimisation="3" targetName="%NAME%" headerPath="%FAUST_HEADER_PATH% C:/Program Files/Common Files/fftw3\"
                       libraryPath="%AAX_RELEASE_LIB%;%WIN_STATIC_LIB_FOLDER_R64% C:/Program Files/Common Files/fftw3\" binaryPath="Compiled/" linkTimeOptimisation="%LINK_TIME_OPTIMISATION%" useRuntimeLibDLL="0" prebuildCommand="%PREBUILD_COMMAND%"%STRIP_SYMBOLS_WIN%/>
      </CONFIGURATIONS>
      <MODULEPATHS>
        <MODULEPATH id="juce_core" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_events" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_graphics" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_data_structures" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_dsp" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_gui_basics" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_gui_extra" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_cryptography" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_audio_basics" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_audio_devices" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_audio_formats" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_audio_processors" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_audio_plugin_client" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_product_unlocking" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_audio_utils" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_opengl" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_osc" path="%JUCE_PATH%"/>
        <MODULEPATH id="hi_dsp_library" path="%HISE_PATH%"/>
        <MODULEPATH id="hi_faust" path="%HISE_PATH%"/>
        <MODULEPATH id="hi_faust_types" path="%HISE_PATH%"/>
        <MODULEPATH id="hi_frontend" path="%HISE_PATH%"/>
        <MODULEPATH id="hi_scripting" path="%HISE_PATH%"/>
        <MODULEPATH id="hi_core" path="%HISE_PATH%"/>
        <MODULEPATH id="hi_lac" path="%HISE_PATH%"/>
        <MODULEPATH id="hi_zstd" path="%HISE_PATH%"/>
        <MODULEPATH id="hi_rlottie" path="%HISE_PATH%"/>
        <MODULEPATH id="hi_streaming" path="%HISE_PATH%"/>
        <MODULEPATH id="hi_tools" path="%HISE_PATH%"/>
        <MODULEPATH id="hi_snex" path="%HISE_PATH%"/>
		<MODULEPATH id="melatonin_blur" path="%HISE_PATH%"/>
        %LORIS_MODULEPATH%
      </MODULEPATHS>
    </%VS_VERSION%>
    <XCODE_MAC targetFolder="Builds/MacOSX"  vstLegacyFolder="%VSTSDK_FOLDER%" vst3Folder="%VSTSDK3_FOLDER%"  aaxFolder="%AAX_PATH%" extraCompilerFlags="-Wno-reorder -Wno-inconsistent-missing-override  -fno-aligned-allocation"
               extraLinkerFlags="%IPP_COMPILER_FLAGS% %OSX_STATIC_LIBS%" extraDefs="%PLUGIN_CHANNEL_AMOUNT%&#10;%EXTRA_DEFINES_OSX%&#10;%PERFETTO_INCLUDE_MACOS%" hardenedRuntime="0" hardenedRuntimeOptions="com.apple.security.cs.allow-jit,com.apple.security.cs.allow-unsigned-executable-memory,com.apple.security.device.audio-input" xcodeValidArchs="%ARM_ARCH%"  externalLibraries="%BEATPORT_LIB_MACOS%">
                
      <CONFIGURATIONS>
        <CONFIGURATION name="Debug" osxSDK="default" osxCompatibility="10.9 SDK" osxArchitecture="%MACOS_ARCHITECTURE%"
                       isDebug="1" optimisation="1" enablePluginBinaryCopyStep="%COPY_PLUGIN%" targetName="%NAME% Debug" headerPath="%IPP_HEADER%;%FAUST_HEADER_PATH%"
                       libraryPath="%IPP_LIBRARY%;%AAX_DEBUG_LIB%;%BEATPORT_DEBUG_LIB%" cppLibType="libc++"/>
        <CONFIGURATION name="Release" osxSDK="default" osxCompatibility="10.9 SDK" osxArchitecture="%MACOS_ARCHITECTURE%"
                       isDebug="0" optimisation="3" enablePluginBinaryCopyStep="%COPY_PLUGIN%" targetName="%NAME%" headerPath="%IPP_HEADER%;%FAUST_HEADER_PATH%"
                       libraryPath="%IPP_LIBRARY%;%AAX_RELEASE_LIB%;%BEATPORT_RELEASE_LIB%" cppLibType="libc++" linkTimeOptimisation="%LINK_TIME_OPTIMISATION%"
                       %STRIP_SYMBOLS_MACOS%/>
      </CONFIGURATIONS>
      <MODULEPATHS>
        <MODULEPATH id="juce_product_unlocking" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_gui_extra" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_gui_basics" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_graphics" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_events" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_data_structures" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_dsp" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_cryptography" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_core" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_audio_utils" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_audio_processors" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_audio_plugin_client" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_audio_formats" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_audio_devices" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_audio_basics" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_opengl" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_osc" path="%JUCE_PATH%"/>
        <MODULEPATH id="hi_dsp_library" path="%HISE_PATH%"/>
        <MODULEPATH id="hi_faust" path="%HISE_PATH%"/>
        <MODULEPATH id="hi_faust_types" path="%HISE_PATH%"/>
        <MODULEPATH id="hi_frontend" path="%HISE_PATH%"/>
        <MODULEPATH id="hi_scripting" path="%HISE_PATH%"/>
        <MODULEPATH id="hi_core" path="%HISE_PATH%"/>
        <MODULEPATH id="hi_lac" path="%HISE_PATH%"/>
        <MODULEPATH id="hi_zstd" path="%HISE_PATH%"/>
        <MODULEPATH id="hi_rlottie" path="%HISE_PATH%"/>
        <MODULEPATH id="hi_streaming" path="%HISE_PATH%"/>
        <MODULEPATH id="hi_tools" path="%HISE_PATH%"/>
        <MODULEPATH id="hi_snex" path="%HISE_PATH%"/>
		<MODULEPATH id="melatonin_blur" path="%HISE_PATH%"/>
        %LORIS_MODULEPATH%
      </MODULEPATHS>
    </XCODE_MAC>
    <XCODE_IPHONE targetFolder="Builds/iOS" iosScreenOrientation="landscape" extraCompilerFlags="-Wno-reorder -Wno-inconsistent-missing-override -fno-aligned-allocation" extraLinkerFlags="%OSX_STATIC_LIBS%" extraDefs="%EXTRA_DEFINES_IOS%&#10;USE_IPP=0&#10;HISE_IOS=1&#10;JUCE_USE_CUSTOM_PLUGIN_STANDALONE_APP=1&#10;USE_VDSP_FFT=1" %ICON_FILE% 
                  UIStatusBarHidden="1" iosBackgroundAudio="1" iosBackgroundBle="0"
    customXcodeResourceFolders="../Samples\n../Images\nEmbeddedResources\n../UserPresets"
    iosAppGroups="%USE_APP_GROUPS%" iosAppGroupsId="%APP_GROUP_ID%"
    iosAppExtensionDuplicateResourcesFolder="0"
    iosDevelopmentTeamID="%DEVELOPMENT_TEAM_ID%" iosDeviceFamily="%TARGET_FAMILY%">
      <CONFIGURATIONS>
        <CONFIGURATION name="Debug" iosCompatibility="9.0" isDebug="1" optimisation="1"
                       targetName="%NAME%_Debug" headerPath="%FAUST_HEADER_PATH%" cppLanguageStandard="c++11" cppLibType="libc++"/>
        <CONFIGURATION name="Release" iosCompatibility="9.0" isDebug="0" optimisation="3"
                       targetName="%NAME%" headerPath="%FAUST_HEADER_PATH%" cppLanguageStandard="c++11" cppLibType="libc++"
                       linkTimeOptimisation="%LINK_TIME_OPTIMISATION%" />
      </CONFIGURATIONS>
      <MODULEPATHS>
        <MODULEPATH id="juce_product_unlocking" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_gui_extra" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_gui_basics" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_graphics" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_events" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_data_structures" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_dsp" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_cryptography" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_core" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_audio_utils" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_audio_processors" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_audio_plugin_client" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_audio_formats" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_audio_devices" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_audio_basics" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_opengl" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_osc" path="%JUCE_PATH%"/>
        <MODULEPATH id="hi_scripting" path="%HISE_PATH%"/>
        <MODULEPATH id="hi_frontend" path="%HISE_PATH%"/>
        <MODULEPATH id="hi_dsp_library" path="%HISE_PATH%"/>
        <MODULEPATH id="hi_faust" path="%HISE_PATH%"/>
        <MODULEPATH id="hi_faust_types" path="%HISE_PATH%"/>
        <MODULEPATH id="hi_core" path="%HISE_PATH%"/>
        <MODULEPATH id="hi_lac" path="%HISE_PATH%"/>
        <MODULEPATH id="hi_rlottie" path="%HISE_PATH%"/>
        <MODULEPATH id="hi_zstd" path="%HISE_PATH%"/>
        <MODULEPATH id="hi_streaming" path="%HISE_PATH%"/>
        <MODULEPATH id="hi_tools" path="%HISE_PATH%"/>
        <MODULEPATH id="hi_snex" path="%HISE_PATH%"/>
		<MODULEPATH id="melatonin_blur" path="%HISE_PATH%"/>
        %LORIS_MODULEPATH%
      </MODULEPATHS>
    </XCODE_IPHONE>)"
    R"(
    <LINUX_MAKE targetFolder="Builds/LinuxMakefile" vstLegacyFolder="%VSTSDK_FOLDER%" extraLinkerFlags="-flto=auto&#10;-fuse-ld=gold&#10;%IPP_COMPILER_FLAGS%" extraCompilerFlags="-fpermissive" extraDefs="%PLUGIN_CHANNEL_AMOUNT%&#10;%EXTRA_DEFINES_LINUX%&#10;JUCE_DISABLE_NATIVE_FILECHOOSERS=1" linuxExtraPkgConfig="%LINUX_GUI_LIBS%">
      <CONFIGURATIONS>
        <CONFIGURATION name="Debug" isDebug="1" optimisation="1" linkTimeOptimisation="0"
                       targetName="%NAME% Debug" headerPath="%IPP_HEADER%;%FAUST_HEADER_PATH%" libraryPath="%IPP_LIBRARY%"/>
        <CONFIGURATION name="Release" isDebug="0" optimisation="3" linkTimeOptimisation="%LINK_TIME_OPTIMISATION%"
                       targetName="%NAME%" headerPath="%IPP_HEADER%;%FAUST_HEADER_PATH%" libraryPath="%IPP_LIBRARY%"/>
      </CONFIGURATIONS>
      <MODULEPATHS>
        <MODULEPATH id="juce_product_unlocking" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_gui_extra" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_gui_basics" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_graphics" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_events" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_data_structures" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_dsp" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_cryptography" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_core" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_audio_utils" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_audio_processors" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_audio_plugin_client" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_audio_formats" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_audio_devices" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_audio_basics" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_opengl" path="%JUCE_PATH%"/>
        <MODULEPATH id="juce_osc" path="%JUCE_PATH%"/>
        <MODULEPATH id="hi_streaming" path="%HISE_PATH%"/>
        <MODULEPATH id="hi_scripting" path="%HISE_PATH%"/>
        <MODULEPATH id="hi_lac" path="%HISE_PATH%"/>
        <MODULEPATH id="hi_frontend" path="%HISE_PATH%"/>
        <MODULEPATH id="hi_dsp_library" path="%HISE_PATH%"/>
        <MODULEPATH id="hi_faust" path="%HISE_PATH%"/>
        <MODULEPATH id="hi_faust_types" path="%HISE_PATH%"/>
        <MODULEPATH id="hi_zstd" path="%HISE_PATH%"/>
        <MODULEPATH id="hi_rlottie" path="%HISE_PATH%"/>
        <MODULEPATH id="hi_core" path="%HISE_PATH%"/>
        <MODULEPATH id="hi_tools" path="%HISE_PATH%"/>
        <MODULEPATH id="hnode_jit" path="%HISE_PATH%"/>
		<MODULEPATH id="melatonin_blur" path="%HISE_PATH%"/>
        %LORIS_MODULEPATH%
      </MODULEPATHS>
    </LINUX_MAKE>
  </EXPORTFORMATS>
  <MODULES>
    <MODULE id="hi_core" showAllCode="1" useLocalCopy="0"/>
    <MODULE id="hi_frontend" showAllCode="1" useLocalCopy="0"/>
    <MODULE id="hi_scripting" showAllCode="1" useLocalCopy="0"/>
    <MODULE id="hi_dsp_library" showAllCode="1" useLocalCopy="0"/>
    <MODULE id="hi_faust" showAllCode="1" useLocalCopy="0"/>
    <MODULE id="hi_faust_types" showAllCode="1" useLocalCopy="0"/>
    <MODULE id="hi_lac" showAllCode="1" useLocalCopy="0"/>
    <MODULE id="hi_zstd" showAllCode="1" useLocalCopy="0"/>
    <MODULE id="hi_rlottie" showAllCode="1" useLocalCopy="0"/>
    <MODULE id="hi_streaming" showAllCode="1" useLocalCopy="0"/>
    <MODULE id="hi_tools" showAllCode="1" useLocalCopy="0"/>
    <MODULE id="juce_audio_basics" showAllCode="1" useLocalCopy="0"/>
    <MODULE id="juce_audio_devices" showAllCode="1" useLocalCopy="0"/>
    <MODULE id="juce_dsp" showAllCode="1" useLocalCopy="0"/>
    <MODULE id="juce_audio_formats" showAllCode="1" useLocalCopy="0"/>
    <MODULE id="juce_audio_plugin_client" showAllCode="1" useLocalCopy="0"/>
    <MODULE id="juce_audio_processors" showAllCode="1" useLocalCopy="0"/>
    <MODULE id="juce_audio_utils" showAllCode="1" useLocalCopy="0"/>
    <MODULE id="juce_core" showAllCode="1" useLocalCopy="0"/>
    <MODULE id="juce_cryptography" showAllCode="1" useLocalCopy="0"/>
    <MODULE id="juce_data_structures" showAllCode="1" useLocalCopy="0"/>
    <MODULE id="juce_events" showAllCode="1" useLocalCopy="0"/>
    <MODULE id="juce_graphics" showAllCode="1" useLocalCopy="0"/>
    <MODULE id="juce_gui_basics" showAllCode="1" useLocalCopy="0"/>
    <MODULE id="juce_gui_extra" showAllCode="1" useLocalCopy="0"/>
    <MODULE id="juce_product_unlocking" showAllCode="1" useLocalCopy="0"/>
    <MODULE id="juce_opengl" showAllCode="1" useLocalCopy="0"/>
    <MODULE id="juce_osc" showAllCode="1" useLocalCopy="0"/>
    <MODULE id="hi_snex" showAllCode="1" useLocalCopy="0" useGlobalPath="0"/>
	<MODULE id="melatonin_blur" showAllCode="1" useLocalCopy="0" useGlobalPath="0"/>
    %LORIS_MODULEINFO%
  </MODULES>
  <JUCEOPTIONS JUCE_QUICKTIME="disabled" USE_BACKEND="disabled" USE_FRONTEND="enabled" USE_RAW_FRONTEND="%USE_RAW_FRONTEND%" HI_EXPORT_DSP_LIBRARY="disabled" HISE_ENABLE_MIDI_INPUT_FOR_FX="%ENABLE_MIDI_INPUT_FX%" PROCESS_SOUND_GENERATORS_IN_FX_PLUGIN="%PROCESS_SOUND_GENERATORS_IN_FX_PLUGIN%" HISE_MIDIFX_PLUGIN="%HISE_MIDIFX_PLUGIN%" USE_COPY_PROTECTION="%USE_COPY_PROTECTION%" IS_STANDALONE_APP="disabled"
               USE_IPP="%USE_IPP%" FRONTEND_IS_PLUGIN="%FRONTEND_IS_PLUGIN%" USE_CUSTOM_FRONTEND_TOOLBAR="%USE_CUSTOM_FRONTEND_TOOLBAR%" IS_STANDALONE_FRONTEND="%IS_STANDALONE_FRONTEND%"  USE_GLITCH_DETECTION = "enabled" ENABLE_PLOTTER="disabled" ENABLE_SCRIPTING_SAFE_CHECKS="disabled"
               ENABLE_ALL_PEAK_METERS="disabled" USE_SPLASH_SCREEN="%USE_SPLASH_SCREEN%" HISE_OVERWRITE_OLD_USER_PRESETS="%OVERWRITE_OLD_USER_PRESETS%" HI_SUPPORT_MONO_CHANNEL_LAYOUT="%SUPPORT_MONO%" HI_SUPPORT_FULL_DYNAMICS_HLAC="%SUPPORT_FULL_DYNAMICS%" ENABLE_CONSOLE_OUTPUT="disabled" HI_ENABLE_LEGACY_CPU_SUPPORT="%LEGACY_CPU_SUPPORT%" HISE_INCLUDE_FAUST="%HISE_INCLUDE_FAUST%" HISE_USE_SYSTEM_APP_DATA_FOLDER="%USE_GLOBAL_APP_FOLDER%"  HISE_INCLUDE_RLOTTIE="enabled" HLAC_MEASURE_DECODING_PERFORMANCE="disabled" HLAC_DEBUG_LOG="disabled" HLAC_INCLUDE_TEST_SUITE="disabled" STANDALONE_STREAMING="disabled"
                 JUCE_ASSERTION_FIRFILTER="disabled" JUCE_WEB_BROWSER="disabled" JUCE_USE_CURL="enabled" JUCE_LOAD_CURL_SYMBOLS_LAZILY="enabled" JUCE_DSP_USE_INTEL_MKL="disabled" JUCE_DSP_USE_SHARED_FFTW="enabled" JUCE_DSP_USE_STATIC_FFTW="disabled"  HISE_USE_CUSTOM_EXPANSION_TYPE="%USE_CUSTOM_EXPANSION_TYPE%" READ_ONLY_FACTORY_PRESETS="%READ_ONLY_FACTORY_PRESETS%"  JUCE_HEADLESS_PLUGIN_CLIENT="%JUCE_HEADLESS_PLUGIN_CLIENT%" HISE_INCLUDE_LORIS="%HISE_INCLUDE_LORIS%"/>
         
</JUCERPROJECT>)";

const char* projectTemplate_jucer = (const char*)projectTemplate_jucer_lines;

} // namespace hise
