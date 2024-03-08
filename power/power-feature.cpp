/*
 * Copyright (C) 2024 Paranoid Android
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <aidl/vendor/aospa/power/BnPowerFeature.h>
#include <android-base/file.h>
#include <android-base/logging.h>

#define DT2W_ENABLE_PATH "/proc/gesture_control"

using ::android::base::WriteStringToFile;

namespace aidl {
namespace vendor {
namespace aospa {
namespace power {

bool setDeviceSpecificFeature(Feature feature, bool enabled) {
    switch (feature) {
        case Feature::DOUBLE_TAP: {
            WriteStringToFile(enabled ? "1" : "0", DT2W_ENABLE_PATH);
            return true;
        }
        default:
            return false;
    }
}

}  // namespace power
}  // namespace aospa
}  // namespace vendor
}  // namespace aidl
