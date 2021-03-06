/*
 * Copyright (C) 2019 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ANDROID_HARDWARE_CAS_V1_1_TYPE_CONVERT_H
#define ANDROID_HARDWARE_CAS_V1_1_TYPE_CONVERT_H

#include <android/hardware/cas/1.0/types.h>
#include <android/hardware/cas/1.2/types.h>
#include <media/cas/CasAPI.h>
#include <media/stagefright/MediaErrors.h>
#include <utils/String8.h>

namespace android {
namespace hardware {
namespace cas {
namespace V1_1 {
namespace implementation {

using ::android::hardware::cas::V1_0::Status;

Status toStatus(status_t legacyStatus);

V1_2::Status toStatus_1_2(status_t legacyStatus);

String8 sessionIdToString(const CasSessionId& sessionId);

}  // namespace implementation
}  // namespace V1_1
}  // namespace cas
}  // namespace hardware
}  // namespace android

#endif  // ANDROID_HARDWARE_CAS_V1_1_TYPE_CONVERT_H
