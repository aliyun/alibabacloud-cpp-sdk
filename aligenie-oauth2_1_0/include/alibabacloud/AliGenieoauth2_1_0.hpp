// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_ALIGENIEOAUTH2_1_0_HPP_
#define ALIBABACLOUD_ALIGENIEOAUTH2_1_0_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/AliGenieoauth2_1_0Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/AliGenieoauth2_1_0.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieoauth2_1_0
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 创建播放列表
       *
       * @param tmpReq CreatePlayingListRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePlayingListResponse
       */
      Models::CreatePlayingListResponse createPlayingListWithOptions(const Models::CreatePlayingListRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建播放列表
       *
       * @param request CreatePlayingListRequest
       * @return CreatePlayingListResponse
       */
      Models::CreatePlayingListResponse createPlayingList(const Models::CreatePlayingListRequest &request);

      /**
       * @summary 执行场景
       *
       * @param request ExecuteSceneRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteSceneResponse
       */
      Models::ExecuteSceneResponse executeSceneWithOptions(const Models::ExecuteSceneRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 执行场景
       *
       * @param request ExecuteSceneRequest
       * @return ExecuteSceneResponse
       */
      Models::ExecuteSceneResponse executeScene(const Models::ExecuteSceneRequest &request);

      /**
       * @summary 执行场景（全屋）
       *
       * @param request ExecuteSmartHomeSceneRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteSmartHomeSceneResponse
       */
      Models::ExecuteSmartHomeSceneResponse executeSmartHomeSceneWithOptions(const Models::ExecuteSmartHomeSceneRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 执行场景（全屋）
       *
       * @param request ExecuteSmartHomeSceneRequest
       * @return ExecuteSmartHomeSceneResponse
       */
      Models::ExecuteSmartHomeSceneResponse executeSmartHomeScene(const Models::ExecuteSmartHomeSceneRequest &request);

      /**
       * @summary 获取场景列表
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSceneListResponse
       */
      Models::GetSceneListResponse getSceneListWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取场景列表
       *
       * @return GetSceneListResponse
       */
      Models::GetSceneListResponse getSceneList();

      /**
       * @summary 获取场景列表（全屋）
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSmartHomeSceneListResponse
       */
      Models::GetSmartHomeSceneListResponse getSmartHomeSceneListWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取场景列表（全屋）
       *
       * @return GetSmartHomeSceneListResponse
       */
      Models::GetSmartHomeSceneListResponse getSmartHomeSceneList();

      /**
       * @summary 获取
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserBasicInfoResponse
       */
      Models::GetUserBasicInfoResponse getUserBasicInfoWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取
       *
       * @return GetUserBasicInfoResponse
       */
      Models::GetUserBasicInfoResponse getUserBasicInfo();

      /**
       * @summary 获取天猫精灵用户绑定的手机号
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserPhoneResponse
       */
      Models::GetUserPhoneResponse getUserPhoneWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取天猫精灵用户绑定的手机号
       *
       * @return GetUserPhoneResponse
       */
      Models::GetUserPhoneResponse getUserPhone();

      /**
       * @summary OAuth2令牌撤销端点
       *
       * @param request OAuth2RevocationEndpointRequest
       * @param headers OAuth2RevocationEndpointHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return OAuth2RevocationEndpointResponse
       */
      Models::OAuth2RevocationEndpointResponse oAuth2RevocationEndpointWithOptions(const Models::OAuth2RevocationEndpointRequest &request, const Models::OAuth2RevocationEndpointHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary OAuth2令牌撤销端点
       *
       * @param request OAuth2RevocationEndpointRequest
       * @return OAuth2RevocationEndpointResponse
       */
      Models::OAuth2RevocationEndpointResponse oAuth2RevocationEndpoint(const Models::OAuth2RevocationEndpointRequest &request);

      /**
       * @summary OAuth2令牌端点
       *
       * @param request OAuth2TokenEndpointRequest
       * @param headers OAuth2TokenEndpointHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return OAuth2TokenEndpointResponse
       */
      Models::OAuth2TokenEndpointResponse oAuth2TokenEndpointWithOptions(const Models::OAuth2TokenEndpointRequest &request, const Models::OAuth2TokenEndpointHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary OAuth2令牌端点
       *
       * @param request OAuth2TokenEndpointRequest
       * @return OAuth2TokenEndpointResponse
       */
      Models::OAuth2TokenEndpointResponse oAuth2TokenEndpoint(const Models::OAuth2TokenEndpointRequest &request);

      /**
       * @summary 推送设备通知
       *
       * @param tmpReq PushDeviceNotificationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PushDeviceNotificationResponse
       */
      Models::PushDeviceNotificationResponse pushDeviceNotificationWithOptions(const Models::PushDeviceNotificationRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 推送设备通知
       *
       * @param request PushDeviceNotificationRequest
       * @return PushDeviceNotificationResponse
       */
      Models::PushDeviceNotificationResponse pushDeviceNotification(const Models::PushDeviceNotificationRequest &request);

      /**
       * @summary 查询设备列表
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDeviceListResponse
       */
      Models::QueryDeviceListResponse queryDeviceListWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询设备列表
       *
       * @return QueryDeviceListResponse
       */
      Models::QueryDeviceListResponse queryDeviceList();
  };
} // namespace AlibabaCloud
} // namespace AliGenieoauth2_1_0
#endif
