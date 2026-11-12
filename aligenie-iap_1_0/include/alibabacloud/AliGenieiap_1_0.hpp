// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_ALIGENIEIAP_1_0_HPP_
#define ALIBABACLOUD_ALIGENIEIAP_1_0_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/AliGenieiap_1_0Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/AliGenieiap_1_0.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieiap_1_0
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Used to report application usage duration on Tmall Genie devices.
       *
       * @param tmpReq AppUseTimeReportRequest
       * @param headers AppUseTimeReportHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return AppUseTimeReportResponse
       */
      Models::AppUseTimeReportResponse appUseTimeReportWithOptions(const Models::AppUseTimeReportRequest &tmpReq, const Models::AppUseTimeReportHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Used to report application usage duration on Tmall Genie devices.
       *
       * @param request AppUseTimeReportRequest
       * @return AppUseTimeReportResponse
       */
      Models::AppUseTimeReportResponse appUseTimeReport(const Models::AppUseTimeReportRequest &request);

      /**
       * @summary Third-party membership redemption callback API.
       *
       * @param tmpReq CallBackThirdRightSendPlanRequest
       * @param headers CallBackThirdRightSendPlanHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CallBackThirdRightSendPlanResponse
       */
      Models::CallBackThirdRightSendPlanResponse callBackThirdRightSendPlanWithOptions(const Models::CallBackThirdRightSendPlanRequest &tmpReq, const Models::CallBackThirdRightSendPlanHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Third-party membership redemption callback API.
       *
       * @param request CallBackThirdRightSendPlanRequest
       * @return CallBackThirdRightSendPlanResponse
       */
      Models::CallBackThirdRightSendPlanResponse callBackThirdRightSendPlan(const Models::CallBackThirdRightSendPlanRequest &request);

      /**
       * @summary Commercial mobile screen third-party app card issuance validation.
       *
       * @param tmpReq CheckThirdRightSendPlanRequest
       * @param headers CheckThirdRightSendPlanHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckThirdRightSendPlanResponse
       */
      Models::CheckThirdRightSendPlanResponse checkThirdRightSendPlanWithOptions(const Models::CheckThirdRightSendPlanRequest &tmpReq, const Models::CheckThirdRightSendPlanHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Commercial mobile screen third-party app card issuance validation.
       *
       * @param request CheckThirdRightSendPlanRequest
       * @return CheckThirdRightSendPlanResponse
       */
      Models::CheckThirdRightSendPlanResponse checkThirdRightSendPlan(const Models::CheckThirdRightSendPlanRequest &request);

      /**
       * @summary Used to create a reminder on a Tmall Genie device.
       *
       * @param tmpReq CreateReminderRequest
       * @param headers CreateReminderHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateReminderResponse
       */
      Models::CreateReminderResponse createReminderWithOptions(const Models::CreateReminderRequest &tmpReq, const Models::CreateReminderHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Used to create a reminder on a Tmall Genie device.
       *
       * @param request CreateReminderRequest
       * @return CreateReminderResponse
       */
      Models::CreateReminderResponse createReminder(const Models::CreateReminderRequest &request);

      /**
       * @summary 携程订单状态变更推送
       *
       * @param request CtripOrderPushRequest
       * @param headers CtripOrderPushHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CtripOrderPushResponse
       */
      Models::CtripOrderPushResponse ctripOrderPushWithOptions(const Models::CtripOrderPushRequest &request, const Models::CtripOrderPushHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 携程订单状态变更推送
       *
       * @param request CtripOrderPushRequest
       * @return CtripOrderPushResponse
       */
      Models::CtripOrderPushResponse ctripOrderPush(const Models::CtripOrderPushRequest &request);

      /**
       * @summary User deletes a reminder created on a Tmall Genie device.
       *
       * @param tmpReq DeleteReminderRequest
       * @param headers DeleteReminderHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteReminderResponse
       */
      Models::DeleteReminderResponse deleteReminderWithOptions(const Models::DeleteReminderRequest &tmpReq, const Models::DeleteReminderHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary User deletes a reminder created on a Tmall Genie device.
       *
       * @param request DeleteReminderRequest
       * @return DeleteReminderResponse
       */
      Models::DeleteReminderResponse deleteReminder(const Models::DeleteReminderRequest &request);

      /**
       * @summary Used by developers to obtain membership information in business scenarios that depend on CatGenie Membership.
       *
       * @param tmpReq GetAccountForAppRequest
       * @param headers GetAccountForAppHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAccountForAppResponse
       */
      Models::GetAccountForAppResponse getAccountForAppWithOptions(const Models::GetAccountForAppRequest &tmpReq, const Models::GetAccountForAppHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Used by developers to obtain membership information in business scenarios that depend on CatGenie Membership.
       *
       * @param request GetAccountForAppRequest
       * @return GetAccountForAppResponse
       */
      Models::GetAccountForAppResponse getAccountForApp(const Models::GetAccountForAppRequest &request);

      /**
       * @summary Obtain application configuration.
       *
       * @param tmpReq GetBusAppConfigRequest
       * @param headers GetBusAppConfigHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBusAppConfigResponse
       */
      Models::GetBusAppConfigResponse getBusAppConfigWithOptions(const Models::GetBusAppConfigRequest &tmpReq, const Models::GetBusAppConfigHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain application configuration.
       *
       * @param request GetBusAppConfigRequest
       * @return GetBusAppConfigResponse
       */
      Models::GetBusAppConfigResponse getBusAppConfig(const Models::GetBusAppConfigRequest &request);

      /**
       * @summary Obtain the phone number bound to the user\\"s Maojing device. You must first request this capability on the Maojing Skill Application Platform and obtain user authorization on the device side.
       *
       * @param tmpReq GetPhoneNumberRequest
       * @param headers GetPhoneNumberHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPhoneNumberResponse
       */
      Models::GetPhoneNumberResponse getPhoneNumberWithOptions(const Models::GetPhoneNumberRequest &tmpReq, const Models::GetPhoneNumberHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the phone number bound to the user\\"s Maojing device. You must first request this capability on the Maojing Skill Application Platform and obtain user authorization on the device side.
       *
       * @param request GetPhoneNumberRequest
       * @return GetPhoneNumberResponse
       */
      Models::GetPhoneNumberResponse getPhoneNumber(const Models::GetPhoneNumberRequest &request);

      /**
       * @summary User retrieves reminders created on Tmall Genie devices.
       *
       * @param tmpReq GetReminderRequest
       * @param headers GetReminderHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetReminderResponse
       */
      Models::GetReminderResponse getReminderWithOptions(const Models::GetReminderRequest &tmpReq, const Models::GetReminderHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary User retrieves reminders created on Tmall Genie devices.
       *
       * @param request GetReminderRequest
       * @return GetReminderResponse
       */
      Models::GetReminderResponse getReminder(const Models::GetReminderRequest &request);

      /**
       * @summary The User batch retrieves reminders created on Tmall Genie devices.
       *
       * @param tmpReq ListRemindersRequest
       * @param headers ListRemindersHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRemindersResponse
       */
      Models::ListRemindersResponse listRemindersWithOptions(const Models::ListRemindersRequest &tmpReq, const Models::ListRemindersHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The User batch retrieves reminders created on Tmall Genie devices.
       *
       * @param request ListRemindersRequest
       * @return ListRemindersResponse
       */
      Models::ListRemindersResponse listReminders(const Models::ListRemindersRequest &request);

      /**
       * @summary The user launches the checkout page on a Tmall Genie device.
       *
       * @param tmpReq PullCashierRequest
       * @param headers PullCashierHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return PullCashierResponse
       */
      Models::PullCashierResponse pullCashierWithOptions(const Models::PullCashierRequest &tmpReq, const Models::PullCashierHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The user launches the checkout page on a Tmall Genie device.
       *
       * @param request PullCashierRequest
       * @return PullCashierResponse
       */
      Models::PullCashierResponse pullCashier(const Models::PullCashierRequest &request);

      /**
       * @summary Execute the message push feature of Tmall Genie. You must first request the capability and configure the message template on the Tmall Genie Skill Application Platform.
       *
       * @param tmpReq PushNotificationsRequest
       * @param headers PushNotificationsHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return PushNotificationsResponse
       */
      Models::PushNotificationsResponse pushNotificationsWithOptions(const Models::PushNotificationsRequest &tmpReq, const Models::PushNotificationsHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Execute the message push feature of Tmall Genie. You must first request the capability and configure the message template on the Tmall Genie Skill Application Platform.
       *
       * @param request PushNotificationsRequest
       * @return PushNotificationsResponse
       */
      Models::PushNotificationsResponse pushNotifications(const Models::PushNotificationsRequest &request);

      /**
       * @summary Execute the message push feature of Tmall Genie. You must first request the capability and configure the message template in the Tmall Genie Skill Application Platform.
       *
       * @param tmpReq SendNotificationsRequest
       * @param headers SendNotificationsHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendNotificationsResponse
       */
      Models::SendNotificationsResponse sendNotificationsWithOptions(const Models::SendNotificationsRequest &tmpReq, const Models::SendNotificationsHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Execute the message push feature of Tmall Genie. You must first request the capability and configure the message template in the Tmall Genie Skill Application Platform.
       *
       * @param request SendNotificationsRequest
       * @return SendNotificationsResponse
       */
      Models::SendNotificationsResponse sendNotifications(const Models::SendNotificationsRequest &request);

      /**
       * @summary 三方即时信息数据变更事件推送
       *
       * @param request ThirdImmediateMsgPushRequest
       * @param headers ThirdImmediateMsgPushHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ThirdImmediateMsgPushResponse
       */
      Models::ThirdImmediateMsgPushResponse thirdImmediateMsgPushWithOptions(const Models::ThirdImmediateMsgPushRequest &request, const Models::ThirdImmediateMsgPushHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 三方即时信息数据变更事件推送
       *
       * @param request ThirdImmediateMsgPushRequest
       * @return ThirdImmediateMsgPushResponse
       */
      Models::ThirdImmediateMsgPushResponse thirdImmediateMsgPush(const Models::ThirdImmediateMsgPushRequest &request);

      /**
       * @summary The user updates a reminder created on a Tmall Genie device.
       *
       * @param tmpReq UpdateReminderRequest
       * @param headers UpdateReminderHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateReminderResponse
       */
      Models::UpdateReminderResponse updateReminderWithOptions(const Models::UpdateReminderRequest &tmpReq, const Models::UpdateReminderHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The user updates a reminder created on a Tmall Genie device.
       *
       * @param request UpdateReminderRequest
       * @return UpdateReminderResponse
       */
      Models::UpdateReminderResponse updateReminder(const Models::UpdateReminderRequest &request);

      /**
       * @summary Used by developers to report membership information in scenarios involving membership collaboration with CatGenie.
       *
       * @param tmpReq VideoAppReportRequest
       * @param headers VideoAppReportHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return VideoAppReportResponse
       */
      Models::VideoAppReportResponse videoAppReportWithOptions(const Models::VideoAppReportRequest &tmpReq, const Models::VideoAppReportHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Used by developers to report membership information in scenarios involving membership collaboration with CatGenie.
       *
       * @param request VideoAppReportRequest
       * @return VideoAppReportResponse
       */
      Models::VideoAppReportResponse videoAppReport(const Models::VideoAppReportRequest &request);

      /**
       * @summary On a smart speaker with a screen, proactively launch the MeowGenie screen-display application. You must first request this capability on the MeowGenie skill application platform.
       *
       * @param request WakeUpAppRequest
       * @param headers WakeUpAppHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return WakeUpAppResponse
       */
      Models::WakeUpAppResponse wakeUpAppWithOptions(const Models::WakeUpAppRequest &request, const Models::WakeUpAppHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary On a smart speaker with a screen, proactively launch the MeowGenie screen-display application. You must first request this capability on the MeowGenie skill application platform.
       *
       * @param request WakeUpAppRequest
       * @return WakeUpAppResponse
       */
      Models::WakeUpAppResponse wakeUpApp(const Models::WakeUpAppRequest &request);
  };
} // namespace AlibabaCloud
} // namespace AliGenieiap_1_0
#endif
