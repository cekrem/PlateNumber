#!/bin/sh
# This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.4.3/Targets/iOS/run.sh.
# WARNING: Changes might be lost if you edit this file directly.
set -e
cd "`dirname "$0"`"


case $1 in
debug)
    echo "Opening Xcode"
##if #(Cocoapods:Defined)
#    pod install
#    open -aXcode "#(Project.Name).xcworkspace"
##else
    open -aXcode "PlateNumber.xcodeproj"
##endif
    exit $?
    ;;
uninstall)
    echo "Uninstalling com.apps.platenumber"
    "/usr/local/share/uno/Packages/UnoCore/1.4.3/prebuilt/iOS/bin/ios-deploy" -9 -1 "com.apps.platenumber"
    exit $?
    ;;
esac

##if #(Cocoapods:Defined)
#pod install
#"#(Base.Directory)/bin/ios-deploy" --noninteractive --debug --bundle "build/Build/Products/#(Pbxproj.Configuration)-iphoneos/#(Project.Name).app" "$#"
##else
"/usr/local/share/uno/Packages/UnoCore/1.4.3/prebuilt/iOS/bin/ios-deploy" --noninteractive --debug --bundle "build/Release-iphoneos/PlateNumber.app" "$@"
##endif
