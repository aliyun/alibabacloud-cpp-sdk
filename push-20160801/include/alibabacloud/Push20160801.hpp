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
       * @summary 绑定别名
       *
       * @param request BindAliasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindAliasResponse
       */
      Models::BindAliasResponse bindAliasWithOptions(const Models::BindAliasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 绑定别名
       *
       * @param request BindAliasRequest
       * @return BindAliasResponse
       */
      Models::BindAliasResponse bindAlias(const Models::BindAliasRequest &request);

      /**
       * @summary 绑定手机号码
       *
       * @param request BindPhoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindPhoneResponse
       */
      Models::BindPhoneResponse bindPhoneWithOptions(const Models::BindPhoneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 绑定手机号码
       *
       * @param request BindPhoneRequest
       * @return BindPhoneResponse
       */
      Models::BindPhoneResponse bindPhone(const Models::BindPhoneRequest &request);

      /**
       * @summary 绑定标签
       *
       * @param request BindTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindTagResponse
       */
      Models::BindTagResponse bindTagWithOptions(const Models::BindTagRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 绑定标签
       *
       * @param request BindTagRequest
       * @return BindTagResponse
       */
      Models::BindTagResponse bindTag(const Models::BindTagRequest &request);

      /**
       * @summary 取消定时推送任务
       *
       * @param request CancelPushRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelPushResponse
       */
      Models::CancelPushResponse cancelPushWithOptions(const Models::CancelPushRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 取消定时推送任务
       *
       * @param request CancelPushRequest
       * @return CancelPushResponse
       */
      Models::CancelPushResponse cancelPush(const Models::CancelPushRequest &request);

      /**
       * @param request CheckCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckCertificateResponse
       */
      Models::CheckCertificateResponse checkCertificateWithOptions(const Models::CheckCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CheckCertificateRequest
       * @return CheckCertificateResponse
       */
      Models::CheckCertificateResponse checkCertificate(const Models::CheckCertificateRequest &request);

      /**
       * @deprecated OpenAPI CheckDevice is deprecated, please use Push::2016-08-01::CheckDevices instead.
       *
       * @summary 【废弃】验证设备有效性
       *
       * @param request CheckDeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckDeviceResponse
       */
      Models::CheckDeviceResponse checkDeviceWithOptions(const Models::CheckDeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI CheckDevice is deprecated, please use Push::2016-08-01::CheckDevices instead.
       *
       * @summary 【废弃】验证设备有效性
       *
       * @param request CheckDeviceRequest
       * @return CheckDeviceResponse
       */
      Models::CheckDeviceResponse checkDevice(const Models::CheckDeviceRequest &request);

      /**
       * @summary 批量检查设备有效性
       *
       * @param request CheckDevicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckDevicesResponse
       */
      Models::CheckDevicesResponse checkDevicesWithOptions(const Models::CheckDevicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量检查设备有效性
       *
       * @param request CheckDevicesRequest
       * @return CheckDevicesResponse
       */
      Models::CheckDevicesResponse checkDevices(const Models::CheckDevicesRequest &request);

      /**
       * @summary 完成持续推送任务
       *
       * @param request CompleteContinuouslyPushRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CompleteContinuouslyPushResponse
       */
      Models::CompleteContinuouslyPushResponse completeContinuouslyPushWithOptions(const Models::CompleteContinuouslyPushRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 完成持续推送任务
       *
       * @param request CompleteContinuouslyPushRequest
       * @return CompleteContinuouslyPushResponse
       */
      Models::CompleteContinuouslyPushResponse completeContinuouslyPush(const Models::CompleteContinuouslyPushRequest &request);

      /**
       * @summary 持续推送
       *
       * @param request ContinuouslyPushRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ContinuouslyPushResponse
       */
      Models::ContinuouslyPushResponse continuouslyPushWithOptions(const Models::ContinuouslyPushRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 持续推送
       *
       * @param request ContinuouslyPushRequest
       * @return ContinuouslyPushResponse
       */
      Models::ContinuouslyPushResponse continuouslyPush(const Models::ContinuouslyPushRequest &request);

      /**
       * @deprecated OpenAPI ListSummaryApps is deprecated, please use Mhub::2017-08-25::ListApps instead.
       *
       * @summary 【废弃】查询用户已创建的app列表
       *
       * @param request ListSummaryAppsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSummaryAppsResponse
       */
      Models::ListSummaryAppsResponse listSummaryAppsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ListSummaryApps is deprecated, please use Mhub::2017-08-25::ListApps instead.
       *
       * @summary 【废弃】查询用户已创建的app列表
       *
       * @return ListSummaryAppsResponse
       */
      Models::ListSummaryAppsResponse listSummaryApps();

      /**
       * @summary 获取标签列表
       *
       * @param request ListTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagsResponse
       */
      Models::ListTagsResponse listTagsWithOptions(const Models::ListTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取标签列表
       *
       * @param request ListTagsRequest
       * @return ListTagsResponse
       */
      Models::ListTagsResponse listTags(const Models::ListTagsRequest &request);

      /**
       * @summary 批量推送
       *
       * @param request MassPushRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MassPushResponse
       */
      Models::MassPushResponse massPushWithOptions(const Models::MassPushRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量推送
       *
       * @param request MassPushRequest
       * @return MassPushResponse
       */
      Models::MassPushResponse massPush(const Models::MassPushRequest &request);

      /**
       * @summary 高级推送接口
       *
       * @param request PushRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PushResponse
       */
      Models::PushResponse pushWithOptions(const Models::PushRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 高级推送接口
       *
       * @param request PushRequest
       * @return PushResponse
       */
      Models::PushResponse push(const Models::PushRequest &request);

      /**
       * @summary 推送消息给Android设备
       *
       * @param request PushMessageToAndroidRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PushMessageToAndroidResponse
       */
      Models::PushMessageToAndroidResponse pushMessageToAndroidWithOptions(const Models::PushMessageToAndroidRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 推送消息给Android设备
       *
       * @param request PushMessageToAndroidRequest
       * @return PushMessageToAndroidResponse
       */
      Models::PushMessageToAndroidResponse pushMessageToAndroid(const Models::PushMessageToAndroidRequest &request);

      /**
       * @summary 推送消息给iOS设备
       *
       * @param request PushMessageToiOSRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PushMessageToiOSResponse
       */
      Models::PushMessageToiOSResponse pushMessageToiOSWithOptions(const Models::PushMessageToiOSRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 推送消息给iOS设备
       *
       * @param request PushMessageToiOSRequest
       * @return PushMessageToiOSResponse
       */
      Models::PushMessageToiOSResponse pushMessageToiOS(const Models::PushMessageToiOSRequest &request);

      /**
       * @summary 推送通知给Android设备
       *
       * @param request PushNoticeToAndroidRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PushNoticeToAndroidResponse
       */
      Models::PushNoticeToAndroidResponse pushNoticeToAndroidWithOptions(const Models::PushNoticeToAndroidRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 推送通知给Android设备
       *
       * @param request PushNoticeToAndroidRequest
       * @return PushNoticeToAndroidResponse
       */
      Models::PushNoticeToAndroidResponse pushNoticeToAndroid(const Models::PushNoticeToAndroidRequest &request);

      /**
       * @summary 推送通知给iOS设备
       *
       * @param request PushNoticeToiOSRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PushNoticeToiOSResponse
       */
      Models::PushNoticeToiOSResponse pushNoticeToiOSWithOptions(const Models::PushNoticeToiOSRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 推送通知给iOS设备
       *
       * @param request PushNoticeToiOSRequest
       * @return PushNoticeToiOSResponse
       */
      Models::PushNoticeToiOSResponse pushNoticeToiOS(const Models::PushNoticeToiOSRequest &request);

      /**
       * @summary 查询别名
       *
       * @param request QueryAliasesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAliasesResponse
       */
      Models::QueryAliasesResponse queryAliasesWithOptions(const Models::QueryAliasesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询别名
       *
       * @param request QueryAliasesRequest
       * @return QueryAliasesResponse
       */
      Models::QueryAliasesResponse queryAliases(const Models::QueryAliasesRequest &request);

      /**
       * @summary 查询设备详情
       *
       * @param request QueryDeviceInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDeviceInfoResponse
       */
      Models::QueryDeviceInfoResponse queryDeviceInfoWithOptions(const Models::QueryDeviceInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询设备详情
       *
       * @param request QueryDeviceInfoRequest
       * @return QueryDeviceInfoResponse
       */
      Models::QueryDeviceInfoResponse queryDeviceInfo(const Models::QueryDeviceInfoRequest &request);

      /**
       * @summary 设备新增与留存
       *
       * @param request QueryDeviceStatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDeviceStatResponse
       */
      Models::QueryDeviceStatResponse queryDeviceStatWithOptions(const Models::QueryDeviceStatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 设备新增与留存
       *
       * @param request QueryDeviceStatRequest
       * @return QueryDeviceStatResponse
       */
      Models::QueryDeviceStatResponse queryDeviceStat(const Models::QueryDeviceStatRequest &request);

      /**
       * @summary 通过账户查询设备列表
       *
       * @param request QueryDevicesByAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDevicesByAccountResponse
       */
      Models::QueryDevicesByAccountResponse queryDevicesByAccountWithOptions(const Models::QueryDevicesByAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通过账户查询设备列表
       *
       * @param request QueryDevicesByAccountRequest
       * @return QueryDevicesByAccountResponse
       */
      Models::QueryDevicesByAccountResponse queryDevicesByAccount(const Models::QueryDevicesByAccountRequest &request);

      /**
       * @summary 通过别名查询设备列表
       *
       * @param request QueryDevicesByAliasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDevicesByAliasResponse
       */
      Models::QueryDevicesByAliasResponse queryDevicesByAliasWithOptions(const Models::QueryDevicesByAliasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通过别名查询设备列表
       *
       * @param request QueryDevicesByAliasRequest
       * @return QueryDevicesByAliasResponse
       */
      Models::QueryDevicesByAliasResponse queryDevicesByAlias(const Models::QueryDevicesByAliasRequest &request);

      /**
       * @param request QueryPushRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryPushRecordsResponse
       */
      Models::QueryPushRecordsResponse queryPushRecordsWithOptions(const Models::QueryPushRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryPushRecordsRequest
       * @return QueryPushRecordsResponse
       */
      Models::QueryPushRecordsResponse queryPushRecords(const Models::QueryPushRecordsRequest &request);

      /**
       * @summary App维度推送统计
       *
       * @param request QueryPushStatByAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryPushStatByAppResponse
       */
      Models::QueryPushStatByAppResponse queryPushStatByAppWithOptions(const Models::QueryPushStatByAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary App维度推送统计
       *
       * @param request QueryPushStatByAppRequest
       * @return QueryPushStatByAppResponse
       */
      Models::QueryPushStatByAppResponse queryPushStatByApp(const Models::QueryPushStatByAppRequest &request);

      /**
       * @summary 任务维度推送统计
       *
       * @param request QueryPushStatByMsgRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryPushStatByMsgResponse
       */
      Models::QueryPushStatByMsgResponse queryPushStatByMsgWithOptions(const Models::QueryPushStatByMsgRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 任务维度推送统计
       *
       * @param request QueryPushStatByMsgRequest
       * @return QueryPushStatByMsgResponse
       */
      Models::QueryPushStatByMsgResponse queryPushStatByMsg(const Models::QueryPushStatByMsgRequest &request);

      /**
       * @summary 查询标签列表
       *
       * @param request QueryTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTagsResponse
       */
      Models::QueryTagsResponse queryTagsWithOptions(const Models::QueryTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询标签列表
       *
       * @param request QueryTagsRequest
       * @return QueryTagsResponse
       */
      Models::QueryTagsResponse queryTags(const Models::QueryTagsRequest &request);

      /**
       * @summary 去重设备统计
       *
       * @param request QueryUniqueDeviceStatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryUniqueDeviceStatResponse
       */
      Models::QueryUniqueDeviceStatResponse queryUniqueDeviceStatWithOptions(const Models::QueryUniqueDeviceStatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 去重设备统计
       *
       * @param request QueryUniqueDeviceStatRequest
       * @return QueryUniqueDeviceStatResponse
       */
      Models::QueryUniqueDeviceStatResponse queryUniqueDeviceStat(const Models::QueryUniqueDeviceStatRequest &request);

      /**
       * @summary 删除标签
       *
       * @param request RemoveTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveTagResponse
       */
      Models::RemoveTagResponse removeTagWithOptions(const Models::RemoveTagRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除标签
       *
       * @param request RemoveTagRequest
       * @return RemoveTagResponse
       */
      Models::RemoveTagResponse removeTag(const Models::RemoveTagRequest &request);

      /**
       * @summary 解绑别名
       *
       * @param request UnbindAliasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindAliasResponse
       */
      Models::UnbindAliasResponse unbindAliasWithOptions(const Models::UnbindAliasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 解绑别名
       *
       * @param request UnbindAliasRequest
       * @return UnbindAliasResponse
       */
      Models::UnbindAliasResponse unbindAlias(const Models::UnbindAliasRequest &request);

      /**
       * @summary 解绑手机号码
       *
       * @param request UnbindPhoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindPhoneResponse
       */
      Models::UnbindPhoneResponse unbindPhoneWithOptions(const Models::UnbindPhoneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 解绑手机号码
       *
       * @param request UnbindPhoneRequest
       * @return UnbindPhoneResponse
       */
      Models::UnbindPhoneResponse unbindPhone(const Models::UnbindPhoneRequest &request);

      /**
       * @summary 绑定标签
       *
       * @param request UnbindTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindTagResponse
       */
      Models::UnbindTagResponse unbindTagWithOptions(const Models::UnbindTagRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 绑定标签
       *
       * @param request UnbindTagRequest
       * @return UnbindTagResponse
       */
      Models::UnbindTagResponse unbindTag(const Models::UnbindTagRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
