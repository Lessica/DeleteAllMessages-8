export ARCHS = armv7 armv7s arm64
SDKVERSION = 8.1
include theos/makefiles/common.mk

TWEAK_NAME = DeleteAllMessages8
DeleteAllMessages8_FILES = Tweak.xm
DeleteAllMessages8_FRAMEWORKS = UIKit CoreGraphics Foundation ChatKit
DeleteAllMessages8_PRIVATE_FRAMEWORKS = ChatKit
include $(THEOS_MAKE_PATH)/tweak.mk
