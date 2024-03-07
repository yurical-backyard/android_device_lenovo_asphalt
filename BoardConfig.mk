#
# Copyright (C) 2024 Paranoid Android
#
# SPDX-License-Identifier: Apache-2.0
#

DEVICE_PATH := device/lenovo/asphalt

# HIDL
DEVICE_MANIFEST_FILE += \
    $(DEVICE_PATH)/vintf/manifest_cape.xml

# Recovery
TARGET_RECOVERY_FSTAB := $(DEVICE_PATH)/rootdir/etc/fstab.qcom

# SEPolicy
SYSTEM_EXT_PRIVATE_SEPOLICY_DIRS += $(DEVICE_PATH)/sepolicy/private
BOARD_VENDOR_SEPOLICY_DIRS += $(DEVICE_PATH)/sepolicy/vendor
