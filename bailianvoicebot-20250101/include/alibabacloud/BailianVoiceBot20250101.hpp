// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_BAILIANVOICEBOT20250101_HPP_
#define ALIBABACLOUD_BAILIANVOICEBOT20250101_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/BailianVoiceBot20250101Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/BailianVoiceBot20250101.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BailianVoiceBot20250101
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 创建软电话测试通话
       *
       * @param request BridgeWebCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BridgeWebCallResponse
       */
      Models::BridgeWebCallResponse bridgeWebCallWithOptions(const Models::BridgeWebCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建软电话测试通话
       *
       * @param request BridgeWebCallRequest
       * @return BridgeWebCallResponse
       */
      Models::BridgeWebCallResponse bridgeWebCall(const Models::BridgeWebCallRequest &request);

      /**
       * @summary 创建应用
       *
       * @param request CreateApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateApplicationResponse
       */
      Models::CreateApplicationResponse createApplicationWithOptions(const Models::CreateApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建应用
       *
       * @param request CreateApplicationRequest
       * @return CreateApplicationResponse
       */
      Models::CreateApplicationResponse createApplication(const Models::CreateApplicationRequest &request);

      /**
       * @summary 创景场景版本
       *
       * @param tmpReq CreateApplicationVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateApplicationVersionResponse
       */
      Models::CreateApplicationVersionResponse createApplicationVersionWithOptions(const Models::CreateApplicationVersionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创景场景版本
       *
       * @param request CreateApplicationVersionRequest
       * @return CreateApplicationVersionResponse
       */
      Models::CreateApplicationVersionResponse createApplicationVersion(const Models::CreateApplicationVersionRequest &request);

      /**
       * @summary 创建克隆音
       *
       * @param request CreateCloneVoiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCloneVoiceResponse
       */
      Models::CreateCloneVoiceResponse createCloneVoiceWithOptions(const Models::CreateCloneVoiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建克隆音
       *
       * @param request CreateCloneVoiceRequest
       * @return CreateCloneVoiceResponse
       */
      Models::CreateCloneVoiceResponse createCloneVoice(const Models::CreateCloneVoiceRequest &request);

      /**
       * @summary 创建变量
       *
       * @param request CreateVariableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVariableResponse
       */
      Models::CreateVariableResponse createVariableWithOptions(const Models::CreateVariableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建变量
       *
       * @param request CreateVariableRequest
       * @return CreateVariableResponse
       */
      Models::CreateVariableResponse createVariable(const Models::CreateVariableRequest &request);

      /**
       * @summary 删除应用
       *
       * @param request DeleteApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteApplicationResponse
       */
      Models::DeleteApplicationResponse deleteApplicationWithOptions(const Models::DeleteApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除应用
       *
       * @param request DeleteApplicationRequest
       * @return DeleteApplicationResponse
       */
      Models::DeleteApplicationResponse deleteApplication(const Models::DeleteApplicationRequest &request);

      /**
       * @summary 删除场景
       *
       * @param request DeleteCloneVoiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCloneVoiceResponse
       */
      Models::DeleteCloneVoiceResponse deleteCloneVoiceWithOptions(const Models::DeleteCloneVoiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除场景
       *
       * @param request DeleteCloneVoiceRequest
       * @return DeleteCloneVoiceResponse
       */
      Models::DeleteCloneVoiceResponse deleteCloneVoice(const Models::DeleteCloneVoiceRequest &request);

      /**
       * @summary 删除变量
       *
       * @param request DeleteVariableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVariableResponse
       */
      Models::DeleteVariableResponse deleteVariableWithOptions(const Models::DeleteVariableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除变量
       *
       * @param request DeleteVariableRequest
       * @return DeleteVariableResponse
       */
      Models::DeleteVariableResponse deleteVariable(const Models::DeleteVariableRequest &request);

      /**
       * @summary 获取文件上传信息
       *
       * @param request GenerateFileUploadParamsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateFileUploadParamsResponse
       */
      Models::GenerateFileUploadParamsResponse generateFileUploadParamsWithOptions(const Models::GenerateFileUploadParamsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取文件上传信息
       *
       * @param request GenerateFileUploadParamsRequest
       * @return GenerateFileUploadParamsResponse
       */
      Models::GenerateFileUploadParamsResponse generateFileUploadParams(const Models::GenerateFileUploadParamsRequest &request);

      /**
       * @summary Get应用
       *
       * @param request GetApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApplicationResponse
       */
      Models::GetApplicationResponse getApplicationWithOptions(const Models::GetApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get应用
       *
       * @param request GetApplicationRequest
       * @return GetApplicationResponse
       */
      Models::GetApplicationResponse getApplication(const Models::GetApplicationRequest &request);

      /**
       * @summary 获取数据通道凭证
       *
       * @param request GetDataChannelCredentialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataChannelCredentialResponse
       */
      Models::GetDataChannelCredentialResponse getDataChannelCredentialWithOptions(const Models::GetDataChannelCredentialRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取数据通道凭证
       *
       * @param request GetDataChannelCredentialRequest
       * @return GetDataChannelCredentialResponse
       */
      Models::GetDataChannelCredentialResponse getDataChannelCredential(const Models::GetDataChannelCredentialRequest &request);

      /**
       * @summary 查询应用
       *
       * @param request ListApplicationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApplicationsResponse
       */
      Models::ListApplicationsResponse listApplicationsWithOptions(const Models::ListApplicationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询应用
       *
       * @param request ListApplicationsRequest
       * @return ListApplicationsResponse
       */
      Models::ListApplicationsResponse listApplications(const Models::ListApplicationsRequest &request);

      /**
       * @summary 获取实例详情
       *
       * @param request ListCloneVoiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCloneVoiceResponse
       */
      Models::ListCloneVoiceResponse listCloneVoiceWithOptions(const Models::ListCloneVoiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实例详情
       *
       * @param request ListCloneVoiceRequest
       * @return ListCloneVoiceResponse
       */
      Models::ListCloneVoiceResponse listCloneVoice(const Models::ListCloneVoiceRequest &request);

      /**
       * @summary 获取变量列表
       *
       * @param request ListVariableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVariableResponse
       */
      Models::ListVariableResponse listVariableWithOptions(const Models::ListVariableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取变量列表
       *
       * @param request ListVariableRequest
       * @return ListVariableResponse
       */
      Models::ListVariableResponse listVariable(const Models::ListVariableRequest &request);

      /**
       * @summary 发布版本
       *
       * @param request PublishApplicationVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishApplicationVersionResponse
       */
      Models::PublishApplicationVersionResponse publishApplicationVersionWithOptions(const Models::PublishApplicationVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 发布版本
       *
       * @param request PublishApplicationVersionRequest
       * @return PublishApplicationVersionResponse
       */
      Models::PublishApplicationVersionResponse publishApplicationVersion(const Models::PublishApplicationVersionRequest &request);

      /**
       * @summary 修改应用
       *
       * @param request UpdateApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateApplicationResponse
       */
      Models::UpdateApplicationResponse updateApplicationWithOptions(const Models::UpdateApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改应用
       *
       * @param request UpdateApplicationRequest
       * @return UpdateApplicationResponse
       */
      Models::UpdateApplicationResponse updateApplication(const Models::UpdateApplicationRequest &request);

      /**
       * @summary 修改场景版本
       *
       * @param tmpReq UpdateApplicationVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateApplicationVersionResponse
       */
      Models::UpdateApplicationVersionResponse updateApplicationVersionWithOptions(const Models::UpdateApplicationVersionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改场景版本
       *
       * @param request UpdateApplicationVersionRequest
       * @return UpdateApplicationVersionResponse
       */
      Models::UpdateApplicationVersionResponse updateApplicationVersion(const Models::UpdateApplicationVersionRequest &request);

      /**
       * @summary 更新实例
       *
       * @param request UpdateCloneVoiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCloneVoiceResponse
       */
      Models::UpdateCloneVoiceResponse updateCloneVoiceWithOptions(const Models::UpdateCloneVoiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新实例
       *
       * @param request UpdateCloneVoiceRequest
       * @return UpdateCloneVoiceResponse
       */
      Models::UpdateCloneVoiceResponse updateCloneVoice(const Models::UpdateCloneVoiceRequest &request);

      /**
       * @summary 更新变量
       *
       * @param request UpdateVariableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateVariableResponse
       */
      Models::UpdateVariableResponse updateVariableWithOptions(const Models::UpdateVariableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新变量
       *
       * @param request UpdateVariableRequest
       * @return UpdateVariableResponse
       */
      Models::UpdateVariableResponse updateVariable(const Models::UpdateVariableRequest &request);
  };
} // namespace AlibabaCloud
} // namespace BailianVoiceBot20250101
#endif
