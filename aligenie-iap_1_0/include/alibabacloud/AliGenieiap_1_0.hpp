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
       * @summary 应用使用时长上报
       *
       * @param tmpReq AppUseTimeReportRequest
       * @param headers AppUseTimeReportHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return AppUseTimeReportResponse
       */
      Models::AppUseTimeReportResponse appUseTimeReportWithOptions(const Models::AppUseTimeReportRequest &tmpReq, const Models::AppUseTimeReportHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 应用使用时长上报
       *
       * @param request AppUseTimeReportRequest
       * @return AppUseTimeReportResponse
       */
      Models::AppUseTimeReportResponse appUseTimeReport(const Models::AppUseTimeReportRequest &request);

      /**
       * @summary 三方领取回调接口
       *
       * @param tmpReq CallBackThirdRightSendPlanRequest
       * @param headers CallBackThirdRightSendPlanHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CallBackThirdRightSendPlanResponse
       */
      Models::CallBackThirdRightSendPlanResponse callBackThirdRightSendPlanWithOptions(const Models::CallBackThirdRightSendPlanRequest &tmpReq, const Models::CallBackThirdRightSendPlanHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 三方领取回调接口
       *
       * @param request CallBackThirdRightSendPlanRequest
       * @return CallBackThirdRightSendPlanResponse
       */
      Models::CallBackThirdRightSendPlanResponse callBackThirdRightSendPlan(const Models::CallBackThirdRightSendPlanRequest &request);

      /**
       * @summary 商业化移动屏三方app领卡校验
       *
       * @param tmpReq CheckThirdRightSendPlanRequest
       * @param headers CheckThirdRightSendPlanHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckThirdRightSendPlanResponse
       */
      Models::CheckThirdRightSendPlanResponse checkThirdRightSendPlanWithOptions(const Models::CheckThirdRightSendPlanRequest &tmpReq, const Models::CheckThirdRightSendPlanHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 商业化移动屏三方app领卡校验
       *
       * @param request CheckThirdRightSendPlanRequest
       * @return CheckThirdRightSendPlanResponse
       */
      Models::CheckThirdRightSendPlanResponse checkThirdRightSendPlan(const Models::CheckThirdRightSendPlanRequest &request);

      /**
       * @summary 创建提醒
       *
       * @param tmpReq CreateReminderRequest
       * @param headers CreateReminderHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateReminderResponse
       */
      Models::CreateReminderResponse createReminderWithOptions(const Models::CreateReminderRequest &tmpReq, const Models::CreateReminderHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建提醒
       *
       * @param request CreateReminderRequest
       * @return CreateReminderResponse
       */
      Models::CreateReminderResponse createReminder(const Models::CreateReminderRequest &request);

      /**
       * @summary 删除提醒
       *
       * @param tmpReq DeleteReminderRequest
       * @param headers DeleteReminderHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteReminderResponse
       */
      Models::DeleteReminderResponse deleteReminderWithOptions(const Models::DeleteReminderRequest &tmpReq, const Models::DeleteReminderHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除提醒
       *
       * @param request DeleteReminderRequest
       * @return DeleteReminderResponse
       */
      Models::DeleteReminderResponse deleteReminder(const Models::DeleteReminderRequest &request);

      /**
       * @summary 获取会员信息
       *
       * @param tmpReq GetAccountForAppRequest
       * @param headers GetAccountForAppHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAccountForAppResponse
       */
      Models::GetAccountForAppResponse getAccountForAppWithOptions(const Models::GetAccountForAppRequest &tmpReq, const Models::GetAccountForAppHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取会员信息
       *
       * @param request GetAccountForAppRequest
       * @return GetAccountForAppResponse
       */
      Models::GetAccountForAppResponse getAccountForApp(const Models::GetAccountForAppRequest &request);

      /**
       * @summary 获取应用配置
       *
       * @param tmpReq GetBusAppConfigRequest
       * @param headers GetBusAppConfigHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBusAppConfigResponse
       */
      Models::GetBusAppConfigResponse getBusAppConfigWithOptions(const Models::GetBusAppConfigRequest &tmpReq, const Models::GetBusAppConfigHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取应用配置
       *
       * @param request GetBusAppConfigRequest
       * @return GetBusAppConfigResponse
       */
      Models::GetBusAppConfigResponse getBusAppConfig(const Models::GetBusAppConfigRequest &request);

      /**
       * @summary 用户手机号获取
       *
       * @param tmpReq GetPhoneNumberRequest
       * @param headers GetPhoneNumberHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPhoneNumberResponse
       */
      Models::GetPhoneNumberResponse getPhoneNumberWithOptions(const Models::GetPhoneNumberRequest &tmpReq, const Models::GetPhoneNumberHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 用户手机号获取
       *
       * @param request GetPhoneNumberRequest
       * @return GetPhoneNumberResponse
       */
      Models::GetPhoneNumberResponse getPhoneNumber(const Models::GetPhoneNumberRequest &request);

      /**
       * @summary 查询提醒
       *
       * @param tmpReq GetReminderRequest
       * @param headers GetReminderHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetReminderResponse
       */
      Models::GetReminderResponse getReminderWithOptions(const Models::GetReminderRequest &tmpReq, const Models::GetReminderHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询提醒
       *
       * @param request GetReminderRequest
       * @return GetReminderResponse
       */
      Models::GetReminderResponse getReminder(const Models::GetReminderRequest &request);

      /**
       * @summary 查询提醒列表
       *
       * @param tmpReq ListRemindersRequest
       * @param headers ListRemindersHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRemindersResponse
       */
      Models::ListRemindersResponse listRemindersWithOptions(const Models::ListRemindersRequest &tmpReq, const Models::ListRemindersHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询提醒列表
       *
       * @param request ListRemindersRequest
       * @return ListRemindersResponse
       */
      Models::ListRemindersResponse listReminders(const Models::ListRemindersRequest &request);

      /**
       * @summary 拉取收银台
       *
       * @param tmpReq PullCashierRequest
       * @param headers PullCashierHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return PullCashierResponse
       */
      Models::PullCashierResponse pullCashierWithOptions(const Models::PullCashierRequest &tmpReq, const Models::PullCashierHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 拉取收银台
       *
       * @param request PullCashierRequest
       * @return PullCashierResponse
       */
      Models::PullCashierResponse pullCashier(const Models::PullCashierRequest &request);

      /**
       * @summary 猫精系统消息推送
       *
       * @param tmpReq PushNotificationsRequest
       * @param headers PushNotificationsHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return PushNotificationsResponse
       */
      Models::PushNotificationsResponse pushNotificationsWithOptions(const Models::PushNotificationsRequest &tmpReq, const Models::PushNotificationsHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 猫精系统消息推送
       *
       * @param request PushNotificationsRequest
       * @return PushNotificationsResponse
       */
      Models::PushNotificationsResponse pushNotifications(const Models::PushNotificationsRequest &request);

      /**
       * @summary 消息推送服务（普通版）
       *
       * @param tmpReq SendNotificationsRequest
       * @param headers SendNotificationsHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendNotificationsResponse
       */
      Models::SendNotificationsResponse sendNotificationsWithOptions(const Models::SendNotificationsRequest &tmpReq, const Models::SendNotificationsHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 消息推送服务（普通版）
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
       * @summary 更新提醒
       *
       * @param tmpReq UpdateReminderRequest
       * @param headers UpdateReminderHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateReminderResponse
       */
      Models::UpdateReminderResponse updateReminderWithOptions(const Models::UpdateReminderRequest &tmpReq, const Models::UpdateReminderHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新提醒
       *
       * @param request UpdateReminderRequest
       * @return UpdateReminderResponse
       */
      Models::UpdateReminderResponse updateReminder(const Models::UpdateReminderRequest &request);

      /**
       * @summary 视频类应用会员信息上报
       *
       * @param tmpReq VideoAppReportRequest
       * @param headers VideoAppReportHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return VideoAppReportResponse
       */
      Models::VideoAppReportResponse videoAppReportWithOptions(const Models::VideoAppReportRequest &tmpReq, const Models::VideoAppReportHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 视频类应用会员信息上报
       *
       * @param request VideoAppReportRequest
       * @return VideoAppReportResponse
       */
      Models::VideoAppReportResponse videoAppReport(const Models::VideoAppReportRequest &request);

      /**
       * @summary 猫精应用唤起
       *
       * @param request WakeUpAppRequest
       * @param headers WakeUpAppHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return WakeUpAppResponse
       */
      Models::WakeUpAppResponse wakeUpAppWithOptions(const Models::WakeUpAppRequest &request, const Models::WakeUpAppHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 猫精应用唤起
       *
       * @param request WakeUpAppRequest
       * @return WakeUpAppResponse
       */
      Models::WakeUpAppResponse wakeUpApp(const Models::WakeUpAppRequest &request);
  };
} // namespace AlibabaCloud
} // namespace AliGenieiap_1_0
#endif
