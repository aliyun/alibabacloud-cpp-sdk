// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_PUSH20160801_HPP_
#define ALIBABACLOUD_PUSH20160801_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Push20160801Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Push20160801.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Attach an alias to a device.
       *
       * @description You can attach up to 10 aliases in a single request. The attachment takes effect immediately.
       *
       * @param request BindAliasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindAliasResponse
       */
      Models::BindAliasResponse bindAliasWithOptions(const Models::BindAliasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attach an alias to a device.
       *
       * @description You can attach up to 10 aliases in a single request. The attachment takes effect immediately.
       *
       * @param request BindAliasRequest
       * @return BindAliasResponse
       */
      Models::BindAliasResponse bindAlias(const Models::BindAliasRequest &request);

      /**
       * @summary Attaches a device to a phone number.
       *
       * @param request BindPhoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindPhoneResponse
       */
      Models::BindPhoneResponse bindPhoneWithOptions(const Models::BindPhoneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attaches a device to a phone number.
       *
       * @param request BindPhoneRequest
       * @return BindPhoneResponse
       */
      Models::BindPhoneResponse bindPhone(const Models::BindPhoneRequest &request);

      /**
       * @summary Binds tags to specified device targets. Tag bindings take effect within 10 minutes.
       *
       * @param request BindTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindTagResponse
       */
      Models::BindTagResponse bindTagWithOptions(const Models::BindTagRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds tags to specified device targets. Tag bindings take effect within 10 minutes.
       *
       * @param request BindTagRequest
       * @return BindTagResponse
       */
      Models::BindTagResponse bindTag(const Models::BindTagRequest &request);

      /**
       * @summary Cancels a scheduled push task that has not yet been executed.
       *
       * @param request CancelPushRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelPushResponse
       */
      Models::CancelPushResponse cancelPushWithOptions(const Models::CancelPushRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels a scheduled push task that has not yet been executed.
       *
       * @param request CancelPushRequest
       * @return CancelPushResponse
       */
      Models::CancelPushResponse cancelPush(const Models::CancelPushRequest &request);

      /**
       * @summary Checks the expiration time and current status of the iOS certificate for a specified app.
       *
       * @description - If the returned ExpireTime value is later than the current timestamp, the certificate is not necessarily valid. Also verify that the Status is OK.
       * - The REVOKED status originates from the Apple Push Notification service (APNs) server. If a certificate has a REVOKED status, at least one push notification to APNs has failed in the corresponding environment.
       *
       * @param request CheckCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckCertificateResponse
       */
      Models::CheckCertificateResponse checkCertificateWithOptions(const Models::CheckCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks the expiration time and current status of the iOS certificate for a specified app.
       *
       * @description - If the returned ExpireTime value is later than the current timestamp, the certificate is not necessarily valid. Also verify that the Status is OK.
       * - The REVOKED status originates from the Apple Push Notification service (APNs) server. If a certificate has a REVOKED status, at least one push notification to APNs has failed in the corresponding environment.
       *
       * @param request CheckCertificateRequest
       * @return CheckCertificateResponse
       */
      Models::CheckCertificateResponse checkCertificate(const Models::CheckCertificateRequest &request);

      /**
       * @deprecated OpenAPI CheckDevice is deprecated, please use Push::2016-08-01::CheckDevices instead.
       *
       * @summary Validates the specified (device).
       *
       * @param request CheckDeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckDeviceResponse
       */
      Models::CheckDeviceResponse checkDeviceWithOptions(const Models::CheckDeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI CheckDevice is deprecated, please use Push::2016-08-01::CheckDevices instead.
       *
       * @summary Validates the specified (device).
       *
       * @param request CheckDeviceRequest
       * @return CheckDeviceResponse
       */
      Models::CheckDeviceResponse checkDevice(const Models::CheckDeviceRequest &request);

      /**
       * @summary Validate a specified group of devices.
       *
       * @param request CheckDevicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckDevicesResponse
       */
      Models::CheckDevicesResponse checkDevicesWithOptions(const Models::CheckDevicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Validate a specified group of devices.
       *
       * @param request CheckDevicesRequest
       * @return CheckDevicesResponse
       */
      Models::CheckDevicesResponse checkDevices(const Models::CheckDevicesRequest &request);

      /**
       * @summary Manually ends a continuous push task.
       *
       * @description If you do not call this operation, the continuous push task automatically ends when it reaches its time-to-live (TTL).
       *
       * @param request CompleteContinuouslyPushRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CompleteContinuouslyPushResponse
       */
      Models::CompleteContinuouslyPushResponse completeContinuouslyPushWithOptions(const Models::CompleteContinuouslyPushRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Manually ends a continuous push task.
       *
       * @description If you do not call this operation, the continuous push task automatically ends when it reaches its time-to-live (TTL).
       *
       * @param request CompleteContinuouslyPushRequest
       * @return CompleteContinuouslyPushResponse
       */
      Models::CompleteContinuouslyPushResponse completeContinuouslyPush(const Models::CompleteContinuouslyPushRequest &request);

      /**
       * @summary Executes a predefined continuous push task.
       *
       * @description This API addresses the limitations of the [Push Advanced Push API](https://help.aliyun.com/document_detail/2249916.html), where push-by-device, push-by-account, and push-by-alias operations each have a maximum target count per single call.
       * - You can use continuous push when your scenario requires sending the same message to many devices. In this case, you can call the continuous push API repeatedly, each time specifying a group of targets for aggregation (the current limit is 1,000 targets per call for device, account, or alias pushes). The total number of pushes for the same MessageId is restricted to 10,000. If you need a higher limit, contact technical support to evaluate your specific scenario.
       * - Before using this API, you must first call the Push API with Target set to TBD (To Be Determined) and include your message content. This returns a MessageId from the push system. You can then use this MessageId to repeatedly call the continuous push API, specifying different target groups to deliver the same message.
       * - After calling the Push API with Target set to TBD and obtaining a MessageId, the message is stored in the push system for 24 hours by default. You can use this API to push to specified targets at any time before expiration. Pushes are not allowed after expiration or after reaching the total push limit.
       * - Each call to this API sends the message immediately. Scheduled pushes are not supported.
       *
       * @param request ContinuouslyPushRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ContinuouslyPushResponse
       */
      Models::ContinuouslyPushResponse continuouslyPushWithOptions(const Models::ContinuouslyPushRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Executes a predefined continuous push task.
       *
       * @description This API addresses the limitations of the [Push Advanced Push API](https://help.aliyun.com/document_detail/2249916.html), where push-by-device, push-by-account, and push-by-alias operations each have a maximum target count per single call.
       * - You can use continuous push when your scenario requires sending the same message to many devices. In this case, you can call the continuous push API repeatedly, each time specifying a group of targets for aggregation (the current limit is 1,000 targets per call for device, account, or alias pushes). The total number of pushes for the same MessageId is restricted to 10,000. If you need a higher limit, contact technical support to evaluate your specific scenario.
       * - Before using this API, you must first call the Push API with Target set to TBD (To Be Determined) and include your message content. This returns a MessageId from the push system. You can then use this MessageId to repeatedly call the continuous push API, specifying different target groups to deliver the same message.
       * - After calling the Push API with Target set to TBD and obtaining a MessageId, the message is stored in the push system for 24 hours by default. You can use this API to push to specified targets at any time before expiration. Pushes are not allowed after expiration or after reaching the total push limit.
       * - Each call to this API sends the message immediately. Scheduled pushes are not supported.
       *
       * @param request ContinuouslyPushRequest
       * @return ContinuouslyPushResponse
       */
      Models::ContinuouslyPushResponse continuouslyPush(const Models::ContinuouslyPushRequest &request);

      /**
       * @deprecated OpenAPI ListSummaryApps is deprecated, please use Mhub::2017-08-25::ListApps instead.
       *
       * @summary Retrieve the list of all applications associated with your Alibaba Cloud account.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSummaryAppsResponse
       */
      Models::ListSummaryAppsResponse listSummaryAppsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ListSummaryApps is deprecated, please use Mhub::2017-08-25::ListApps instead.
       *
       * @summary Retrieve the list of all applications associated with your Alibaba Cloud account.
       *
       * @return ListSummaryAppsResponse
       */
      Models::ListSummaryAppsResponse listSummaryApps();

      /**
       * @summary Queries the tags of an app. A maximum of 100 records are returned.
       *
       * @param request ListTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagsResponse
       */
      Models::ListTagsResponse listTagsWithOptions(const Models::ListTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags of an app. A maximum of 100 records are returned.
       *
       * @param request ListTagsRequest
       * @return ListTagsResponse
       */
      Models::ListTagsResponse listTags(const Models::ListTagsRequest &request);

      /**
       * @summary Push different messages/notifications to different devices in batch.
       *
       * @description **Before using this API, make sure you fully understand the [billing methods and pricing](https://help.aliyun.com/document_detail/434638.html) of the EMAS Mobile Push service.**
       * In certain business scenarios, you may need to push different messages to different devices in a very short time. When the number of devices and messages is extremely large, this can generate high QPS and reach the QPS limit per source IP, causing some pushes to fail.
       * This API is designed to address this problem. It supports up to 100 independent push tasks in a single call, effectively reducing QPS through request aggregation and improving the stability and success rate of large-scale unicast pushes. Batch push is limited to 500 calls per second per account.
       * Each independent push task only supports three types of push targets: device, account, and alias, and does not currently support SMS integration configuration.
       * > The SDK must be upgraded to version 3.11.0 or later.
       * ## PushTask Properties
       * - The PushTask property format is: PushTask.N.Property. It includes:
       *     - Push target (destination)
       *     - Push configuration (config)
       *     - iOS notification task configuration
       *     - Android notification task configuration
       *     - Android auxiliary popup configuration
       *     - HarmonyOS notification task configuration 
       *     - Push control
       * - Each PushTask represents an independent push task, with a maximum of 100 supported. Push-related configurations are consistent with the Push API.
       * - The PushTask.N.Target parameter only supports three types: DEVICE, ACCOUNT, and ALIAS.
       * - PushTask does not support SMS integration configuration.
       * - The product of parent nodes and child nodes cannot exceed 10,000; otherwise, the parameters are considered invalid.
       *
       * @param request MassPushRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MassPushResponse
       */
      Models::MassPushResponse massPushWithOptions(const Models::MassPushRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Push different messages/notifications to different devices in batch.
       *
       * @description **Before using this API, make sure you fully understand the [billing methods and pricing](https://help.aliyun.com/document_detail/434638.html) of the EMAS Mobile Push service.**
       * In certain business scenarios, you may need to push different messages to different devices in a very short time. When the number of devices and messages is extremely large, this can generate high QPS and reach the QPS limit per source IP, causing some pushes to fail.
       * This API is designed to address this problem. It supports up to 100 independent push tasks in a single call, effectively reducing QPS through request aggregation and improving the stability and success rate of large-scale unicast pushes. Batch push is limited to 500 calls per second per account.
       * Each independent push task only supports three types of push targets: device, account, and alias, and does not currently support SMS integration configuration.
       * > The SDK must be upgraded to version 3.11.0 or later.
       * ## PushTask Properties
       * - The PushTask property format is: PushTask.N.Property. It includes:
       *     - Push target (destination)
       *     - Push configuration (config)
       *     - iOS notification task configuration
       *     - Android notification task configuration
       *     - Android auxiliary popup configuration
       *     - HarmonyOS notification task configuration 
       *     - Push control
       * - Each PushTask represents an independent push task, with a maximum of 100 supported. Push-related configurations are consistent with the Push API.
       * - The PushTask.N.Target parameter only supports three types: DEVICE, ACCOUNT, and ALIAS.
       * - PushTask does not support SMS integration configuration.
       * - The product of parent nodes and child nodes cannot exceed 10,000; otherwise, the parameters are considered invalid.
       *
       * @param request MassPushRequest
       * @return MassPushResponse
       */
      Models::MassPushResponse massPush(const Models::MassPushRequest &request);

      /**
       * @summary Pushes notifications in batch by using the advanced push API V2.
       *
       * @description Before using this operation, make sure that you fully understand the [billing method and pricing](https://help.aliyun.com/document_detail/434638.html) of EMAS Mobile Push.
       *
       * @param tmpReq MassPushV2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return MassPushV2Response
       */
      Models::MassPushV2Response massPushV2WithOptions(const Models::MassPushV2Request &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Pushes notifications in batch by using the advanced push API V2.
       *
       * @description Before using this operation, make sure that you fully understand the [billing method and pricing](https://help.aliyun.com/document_detail/434638.html) of EMAS Mobile Push.
       *
       * @param request MassPushV2Request
       * @return MassPushV2Response
       */
      Models::MassPushV2Response massPushV2(const Models::MassPushV2Request &request);

      /**
       * @summary Advanced Push API that pushes notifications or messages to different device endpoints. This API provides rich push customization parameters to implement push behavior in different scenarios.
       *
       * @description **Please ensure that you have fully understood the [billing methods and pricing](https://help.aliyun.com/document_detail/434638.html) of the EMAS Mobile Push product before using this API.**
       * This API differentiates between Android, iOS, and HarmonyOS platforms. For push calls on different platforms, you need to pass the corresponding platform\\"s AppKey.
       *
       * @param tmpReq PushRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PushResponse
       */
      Models::PushResponse pushWithOptions(const Models::PushRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Advanced Push API that pushes notifications or messages to different device endpoints. This API provides rich push customization parameters to implement push behavior in different scenarios.
       *
       * @description **Please ensure that you have fully understood the [billing methods and pricing](https://help.aliyun.com/document_detail/434638.html) of the EMAS Mobile Push product before using this API.**
       * This API differentiates between Android, iOS, and HarmonyOS platforms. For push calls on different platforms, you need to pass the corresponding platform\\"s AppKey.
       *
       * @param request PushRequest
       * @return PushResponse
       */
      Models::PushResponse push(const Models::PushRequest &request);

      /**
       * @summary Sends a message to an Android device through the Alibaba Cloud Mobile Push proprietary channel. After the app on the device receives the message, it must handle subsequent actions, such as implementing business logic or displaying a local notification.
       *
       * @description **This operation will be deprecated soon. Use the [advanced push API](https://help.aliyun.com/document_detail/2249916.html), which provides enhanced push capabilities. To achieve the same result, set the `DeviceType` parameter to `ANDROID` and the `PushType` parameter to `MESSAGE` in the advanced push API.**
       * **Before using this operation, review the [billing methods and pricing](https://help.aliyun.com/document_detail/434638.html) for EMAS Mobile Push.**
       * By default, this operation sends messages only to online devices. If a device is offline, set the `StoreOffline` parameter. The push system then stores the message and delivers it automatically when the device comes online.
       *
       * @param request PushMessageToAndroidRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PushMessageToAndroidResponse
       */
      Models::PushMessageToAndroidResponse pushMessageToAndroidWithOptions(const Models::PushMessageToAndroidRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends a message to an Android device through the Alibaba Cloud Mobile Push proprietary channel. After the app on the device receives the message, it must handle subsequent actions, such as implementing business logic or displaying a local notification.
       *
       * @description **This operation will be deprecated soon. Use the [advanced push API](https://help.aliyun.com/document_detail/2249916.html), which provides enhanced push capabilities. To achieve the same result, set the `DeviceType` parameter to `ANDROID` and the `PushType` parameter to `MESSAGE` in the advanced push API.**
       * **Before using this operation, review the [billing methods and pricing](https://help.aliyun.com/document_detail/434638.html) for EMAS Mobile Push.**
       * By default, this operation sends messages only to online devices. If a device is offline, set the `StoreOffline` parameter. The push system then stores the message and delivers it automatically when the device comes online.
       *
       * @param request PushMessageToAndroidRequest
       * @return PushMessageToAndroidResponse
       */
      Models::PushMessageToAndroidResponse pushMessageToAndroid(const Models::PushMessageToAndroidRequest &request);

      /**
       * @summary Pushes messages to iOS devices. These messages are delivered through the proprietary channel of Alibaba Cloud Mobile Push. After the app on a device receives a message, it must handle subsequent actions, such as implementing business behaviors or creating local notifications.
       *
       * @description **This API is deprecated. Use the [advanced push API](https://help.aliyun.com/document_detail/2249916.html) for more push capabilities. In that API, set the push platform `DeviceType` to `iOS` and the push type `PushType` to `MESSAGE` to achieve the same effect.**
       * **Before you use this API, review the [billing methods and pricing](https://help.aliyun.com/document_detail/434638.html) for EMAS Mobile Push.**
       * By default, this API sends messages only to online devices. If a device is offline, you can set the `StoreOffline` parameter. The push system then saves the message and automatically delivers it when the device comes back online.
       *
       * @param request PushMessageToiOSRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PushMessageToiOSResponse
       */
      Models::PushMessageToiOSResponse pushMessageToiOSWithOptions(const Models::PushMessageToiOSRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Pushes messages to iOS devices. These messages are delivered through the proprietary channel of Alibaba Cloud Mobile Push. After the app on a device receives a message, it must handle subsequent actions, such as implementing business behaviors or creating local notifications.
       *
       * @description **This API is deprecated. Use the [advanced push API](https://help.aliyun.com/document_detail/2249916.html) for more push capabilities. In that API, set the push platform `DeviceType` to `iOS` and the push type `PushType` to `MESSAGE` to achieve the same effect.**
       * **Before you use this API, review the [billing methods and pricing](https://help.aliyun.com/document_detail/434638.html) for EMAS Mobile Push.**
       * By default, this API sends messages only to online devices. If a device is offline, you can set the `StoreOffline` parameter. The push system then saves the message and automatically delivers it when the device comes back online.
       *
       * @param request PushMessageToiOSRequest
       * @return PushMessageToiOSResponse
       */
      Models::PushMessageToiOSResponse pushMessageToiOS(const Models::PushMessageToiOSRequest &request);

      /**
       * @summary Sends a notification to Android devices. The notification appears directly in the device’s notification tray and may be delivered through Alibaba Cloud’s proprietary channel or the device manufacturer’s channel, depending on the scenario.
       *
       * @description **This operation is deprecated. Use the [Advanced Push API](https://help.aliyun.com/document_detail/2249916.html) instead. In that API, set the `DeviceType` parameter to `ANDROID` and the `PushType` parameter to `NOTICE`.**
       * **Before using this operation, review the [pricing and billing model](https://help.aliyun.com/document_detail/434638.html) for EMAS Mobile Push.**
       *
       * @param request PushNoticeToAndroidRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PushNoticeToAndroidResponse
       */
      Models::PushNoticeToAndroidResponse pushNoticeToAndroidWithOptions(const Models::PushNoticeToAndroidRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends a notification to Android devices. The notification appears directly in the device’s notification tray and may be delivered through Alibaba Cloud’s proprietary channel or the device manufacturer’s channel, depending on the scenario.
       *
       * @description **This operation is deprecated. Use the [Advanced Push API](https://help.aliyun.com/document_detail/2249916.html) instead. In that API, set the `DeviceType` parameter to `ANDROID` and the `PushType` parameter to `NOTICE`.**
       * **Before using this operation, review the [pricing and billing model](https://help.aliyun.com/document_detail/434638.html) for EMAS Mobile Push.**
       *
       * @param request PushNoticeToAndroidRequest
       * @return PushNoticeToAndroidResponse
       */
      Models::PushNoticeToAndroidResponse pushNoticeToAndroid(const Models::PushNoticeToAndroidRequest &request);

      /**
       * @summary Send a notification to iOS devices. The notification uses Apple’s APNs channel and appears directly in the device notification center.
       *
       * @description **This operation is deprecated. Use the [Advanced Push API](https://help.aliyun.com/document_detail/2249916.html) instead. Set the `DeviceType` parameter to `iOS` and the `PushType` parameter to `NOTICE`.**
       * **Before you use this operation, review the [pricing and billing model](https://help.aliyun.com/document_detail/434638.html) for EMAS Mobile Push.**
       *
       * @param request PushNoticeToiOSRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PushNoticeToiOSResponse
       */
      Models::PushNoticeToiOSResponse pushNoticeToiOSWithOptions(const Models::PushNoticeToiOSRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Send a notification to iOS devices. The notification uses Apple’s APNs channel and appears directly in the device notification center.
       *
       * @description **This operation is deprecated. Use the [Advanced Push API](https://help.aliyun.com/document_detail/2249916.html) instead. Set the `DeviceType` parameter to `iOS` and the `PushType` parameter to `NOTICE`.**
       * **Before you use this operation, review the [pricing and billing model](https://help.aliyun.com/document_detail/434638.html) for EMAS Mobile Push.**
       *
       * @param request PushNoticeToiOSRequest
       * @return PushNoticeToiOSResponse
       */
      Models::PushNoticeToiOSResponse pushNoticeToiOS(const Models::PushNoticeToiOSRequest &request);

      /**
       * @summary Sends a push notification by using the advanced push API V2.
       *
       * @description **Before you use this operation, make sure that you fully understand the [billing rules and pricing](https://help.aliyun.com/document_detail/434638.html) of EMAS mobile push.**
       * This operation differentiates between the Android, iOS, and HarmonyOS platforms. To send push notifications to different platforms, pass in the AppKey that corresponds to the target platform.
       *
       * @param tmpReq PushV2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return PushV2Response
       */
      Models::PushV2Response pushV2WithOptions(const Models::PushV2Request &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends a push notification by using the advanced push API V2.
       *
       * @description **Before you use this operation, make sure that you fully understand the [billing rules and pricing](https://help.aliyun.com/document_detail/434638.html) of EMAS mobile push.**
       * This operation differentiates between the Android, iOS, and HarmonyOS platforms. To send push notifications to different platforms, pass in the AppKey that corresponds to the target platform.
       *
       * @param request PushV2Request
       * @return PushV2Response
       */
      Models::PushV2Response pushV2(const Models::PushV2Request &request);

      /**
       * @summary Query the list of aliases attached to a specified device.
       *
       * @param request QueryAliasesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAliasesResponse
       */
      Models::QueryAliasesResponse queryAliasesWithOptions(const Models::QueryAliasesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the list of aliases attached to a specified device.
       *
       * @param request QueryAliasesRequest
       * @return QueryAliasesResponse
       */
      Models::QueryAliasesResponse queryAliases(const Models::QueryAliasesRequest &request);

      /**
       * @summary Query details of a specified device.
       *
       * @param request QueryDeviceInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDeviceInfoResponse
       */
      Models::QueryDeviceInfoResponse queryDeviceInfoWithOptions(const Models::QueryDeviceInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query details of a specified device.
       *
       * @param request QueryDeviceInfoRequest
       * @return QueryDeviceInfoResponse
       */
      Models::QueryDeviceInfoResponse queryDeviceInfo(const Models::QueryDeviceInfoRequest &request);

      /**
       * @summary Queries device statistics by application dimension.
       *
       * @description > Currently, this API supports only daily data. The daily dimension lets you query data for up to 31 days. Days are calculated based on UTC+8.
       *
       * @param request QueryDeviceStatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDeviceStatResponse
       */
      Models::QueryDeviceStatResponse queryDeviceStatWithOptions(const Models::QueryDeviceStatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries device statistics by application dimension.
       *
       * @description > Currently, this API supports only daily data. The daily dimension lets you query data for up to 31 days. Days are calculated based on UTC+8.
       *
       * @param request QueryDeviceStatRequest
       * @return QueryDeviceStatResponse
       */
      Models::QueryDeviceStatResponse queryDeviceStat(const Models::QueryDeviceStatRequest &request);

      /**
       * @summary Retrieve the list of devices associated with an account using the account name.
       *
       * @param request QueryDevicesByAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDevicesByAccountResponse
       */
      Models::QueryDevicesByAccountResponse queryDevicesByAccountWithOptions(const Models::QueryDevicesByAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve the list of devices associated with an account using the account name.
       *
       * @param request QueryDevicesByAccountRequest
       * @return QueryDevicesByAccountResponse
       */
      Models::QueryDevicesByAccountResponse queryDevicesByAccount(const Models::QueryDevicesByAccountRequest &request);

      /**
       * @summary Query the list of devices by alias.
       *
       * @param request QueryDevicesByAliasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDevicesByAliasResponse
       */
      Models::QueryDevicesByAliasResponse queryDevicesByAliasWithOptions(const Models::QueryDevicesByAliasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the list of devices by alias.
       *
       * @param request QueryDevicesByAliasRequest
       * @return QueryDevicesByAliasResponse
       */
      Models::QueryDevicesByAliasResponse queryDevicesByAlias(const Models::QueryDevicesByAliasRequest &request);

      /**
       * @summary You can query push records with pagination and basic filtering.
       *
       * @param request QueryPushRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryPushRecordsResponse
       */
      Models::QueryPushRecordsResponse queryPushRecordsWithOptions(const Models::QueryPushRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can query push records with pagination and basic filtering.
       *
       * @param request QueryPushRecordsRequest
       * @return QueryPushRecordsResponse
       */
      Models::QueryPushRecordsResponse queryPushRecords(const Models::QueryPushRecordsRequest &request);

      /**
       * @summary Query push statistics for an app.
       *
       * @param request QueryPushStatByAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryPushStatByAppResponse
       */
      Models::QueryPushStatByAppResponse queryPushStatByAppWithOptions(const Models::QueryPushStatByAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query push statistics for an app.
       *
       * @param request QueryPushStatByAppRequest
       * @return QueryPushStatByAppResponse
       */
      Models::QueryPushStatByAppResponse queryPushStatByApp(const Models::QueryPushStatByAppRequest &request);

      /**
       * @summary Queries push statistics for a message.
       *
       * @param request QueryPushStatByMsgRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryPushStatByMsgResponse
       */
      Models::QueryPushStatByMsgResponse queryPushStatByMsgWithOptions(const Models::QueryPushStatByMsgRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries push statistics for a message.
       *
       * @param request QueryPushStatByMsgRequest
       * @return QueryPushStatByMsgResponse
       */
      Models::QueryPushStatByMsgResponse queryPushStatByMsg(const Models::QueryPushStatByMsgRequest &request);

      /**
       * @summary Queries tags for a specified object, such as a device, account, or alias.
       *
       * @param request QueryTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTagsResponse
       */
      Models::QueryTagsResponse queryTagsWithOptions(const Models::QueryTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries tags for a specified object, such as a device, account, or alias.
       *
       * @param request QueryTagsRequest
       * @return QueryTagsResponse
       */
      Models::QueryTagsResponse queryTags(const Models::QueryTagsRequest &request);

      /**
       * @summary Obtain deduplicated device statistics for an app.
       *
       * @description > This operation returns data only at the daily granularity. You can query up to 31 days of data. Deduplicated device counts reset on the first day of each month.
       *
       * @param request QueryUniqueDeviceStatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryUniqueDeviceStatResponse
       */
      Models::QueryUniqueDeviceStatResponse queryUniqueDeviceStatWithOptions(const Models::QueryUniqueDeviceStatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain deduplicated device statistics for an app.
       *
       * @description > This operation returns data only at the daily granularity. You can query up to 31 days of data. Deduplicated device counts reset on the first day of each month.
       *
       * @param request QueryUniqueDeviceStatRequest
       * @return QueryUniqueDeviceStatResponse
       */
      Models::QueryUniqueDeviceStatResponse queryUniqueDeviceStat(const Models::QueryUniqueDeviceStatRequest &request);

      /**
       * @summary Removes a tag from an app.
       *
       * @description Deleting a tag takes time. The time required depends on the number of tagged resources. Do not immediately recreate a tag with the same name after you delete it. Wait at least 5 minutes before you recreate a tag in the same app. If you delete multiple tags, wait at least 5 minutes for each deleted tag before you recreate them.
       *
       * @param request RemoveTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveTagResponse
       */
      Models::RemoveTagResponse removeTagWithOptions(const Models::RemoveTagRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a tag from an app.
       *
       * @description Deleting a tag takes time. The time required depends on the number of tagged resources. Do not immediately recreate a tag with the same name after you delete it. Wait at least 5 minutes before you recreate a tag in the same app. If you delete multiple tags, wait at least 5 minutes for each deleted tag before you recreate them.
       *
       * @param request RemoveTagRequest
       * @return RemoveTagResponse
       */
      Models::RemoveTagResponse removeTag(const Models::RemoveTagRequest &request);

      /**
       * @summary Unbinds an alias. The change takes effect immediately.
       *
       * @param request UnbindAliasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindAliasResponse
       */
      Models::UnbindAliasResponse unbindAliasWithOptions(const Models::UnbindAliasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbinds an alias. The change takes effect immediately.
       *
       * @param request UnbindAliasRequest
       * @return UnbindAliasResponse
       */
      Models::UnbindAliasResponse unbindAlias(const Models::UnbindAliasRequest &request);

      /**
       * @summary Unbind the mobile phone number from a specified device.
       *
       * @param request UnbindPhoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindPhoneResponse
       */
      Models::UnbindPhoneResponse unbindPhoneWithOptions(const Models::UnbindPhoneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbind the mobile phone number from a specified device.
       *
       * @param request UnbindPhoneRequest
       * @return UnbindPhoneResponse
       */
      Models::UnbindPhoneResponse unbindPhone(const Models::UnbindPhoneRequest &request);

      /**
       * @summary Unbinds one or more tags from a specified target.
       *
       * @param request UnbindTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindTagResponse
       */
      Models::UnbindTagResponse unbindTagWithOptions(const Models::UnbindTagRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbinds one or more tags from a specified target.
       *
       * @param request UnbindTagRequest
       * @return UnbindTagResponse
       */
      Models::UnbindTagResponse unbindTag(const Models::UnbindTagRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
