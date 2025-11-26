// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_BAILIANMODELONCHIP20240816_HPP_
#define ALIBABACLOUD_BAILIANMODELONCHIP20240816_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/BailianModelOnChip20240816Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/BailianModelOnChip20240816.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BailianModelOnChip20240816
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 主动交互消息传递
       *
       * @param request ActiveInteractionCreateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ActiveInteractionCreateResponse
       */
      Models::ActiveInteractionCreateResponse activeInteractionCreateWithOptions(const Models::ActiveInteractionCreateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 主动交互消息传递
       *
       * @param request ActiveInteractionCreateRequest
       * @return ActiveInteractionCreateResponse
       */
      Models::ActiveInteractionCreateResponse activeInteractionCreate(const Models::ActiveInteractionCreateRequest &request);

      /**
       * @summary 主动交互消息生成eu
       *
       * @param request ActiveInteractionEuCreateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ActiveInteractionEuCreateResponse
       */
      Models::ActiveInteractionEuCreateResponse activeInteractionEuCreateWithOptions(const Models::ActiveInteractionEuCreateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 主动交互消息生成eu
       *
       * @param request ActiveInteractionEuCreateRequest
       * @return ActiveInteractionEuCreateResponse
       */
      Models::ActiveInteractionEuCreateResponse activeInteractionEuCreate(const Models::ActiveInteractionEuCreateRequest &request);

      /**
       * @summary 设备注册
       *
       * @param request DeviceRegisterRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeviceRegisterResponse
       */
      Models::DeviceRegisterResponse deviceRegisterWithOptions(const Models::DeviceRegisterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 设备注册
       *
       * @param request DeviceRegisterRequest
       * @return DeviceRegisterResponse
       */
      Models::DeviceRegisterResponse deviceRegister(const Models::DeviceRegisterRequest &request);

      /**
       * @summary 获取网关校验Token
       *
       * @param request GetTokenRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTokenResponse
       */
      Models::GetTokenResponse getTokenWithOptions(const Models::GetTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取网关校验Token
       *
       * @param request GetTokenRequest
       * @return GetTokenResponse
       */
      Models::GetTokenResponse getToken(const Models::GetTokenRequest &request);

      /**
       * @summary 模型类型识别
       *
       * @param tmpReq ModelTypeDetermineRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelTypeDetermineResponse
       */
      Models::ModelTypeDetermineResponse modelTypeDetermineWithOptions(const Models::ModelTypeDetermineRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 模型类型识别
       *
       * @param request ModelTypeDetermineRequest
       * @return ModelTypeDetermineResponse
       */
      Models::ModelTypeDetermineResponse modelTypeDetermine(const Models::ModelTypeDetermineRequest &request);

      /**
       * @summary 音频-供机械臂调用
       *
       * @param request OmniRealtimeConversationEURequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return OmniRealtimeConversationEUResponse
       */
      Models::OmniRealtimeConversationEUResponse omniRealtimeConversationEUWithOptions(const Models::OmniRealtimeConversationEURequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 音频-供机械臂调用
       *
       * @param request OmniRealtimeConversationEURequest
       * @return OmniRealtimeConversationEUResponse
       */
      Models::OmniRealtimeConversationEUResponse omniRealtimeConversationEU(const Models::OmniRealtimeConversationEURequest &request);
  };
} // namespace AlibabaCloud
} // namespace BailianModelOnChip20240816
#endif
