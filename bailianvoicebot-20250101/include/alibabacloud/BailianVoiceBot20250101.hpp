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
       * @summary 创建实例
       *
       * @param tmpReq CreateVocabularyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVocabularyResponse
       */
      Models::CreateVocabularyResponse createVocabularyWithOptions(const Models::CreateVocabularyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建实例
       *
       * @param request CreateVocabularyRequest
       * @return CreateVocabularyResponse
       */
      Models::CreateVocabularyResponse createVocabulary(const Models::CreateVocabularyRequest &request);

      /**
       * @summary 创建实例
       *
       * @param tmpReq CreateVoiceAccessProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVoiceAccessProfileResponse
       */
      Models::CreateVoiceAccessProfileResponse createVoiceAccessProfileWithOptions(const Models::CreateVoiceAccessProfileRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建实例
       *
       * @param request CreateVoiceAccessProfileRequest
       * @return CreateVoiceAccessProfileResponse
       */
      Models::CreateVoiceAccessProfileResponse createVoiceAccessProfile(const Models::CreateVoiceAccessProfileRequest &request);

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
       * @summary 删除场景
       *
       * @param request DeleteVocabularyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVocabularyResponse
       */
      Models::DeleteVocabularyResponse deleteVocabularyWithOptions(const Models::DeleteVocabularyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除场景
       *
       * @param request DeleteVocabularyRequest
       * @return DeleteVocabularyResponse
       */
      Models::DeleteVocabularyResponse deleteVocabulary(const Models::DeleteVocabularyRequest &request);

      /**
       * @summary 删除三方语音配置
       *
       * @param request DeleteVoiceAccessProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVoiceAccessProfileResponse
       */
      Models::DeleteVoiceAccessProfileResponse deleteVoiceAccessProfileWithOptions(const Models::DeleteVoiceAccessProfileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除三方语音配置
       *
       * @param request DeleteVoiceAccessProfileRequest
       * @return DeleteVoiceAccessProfileResponse
       */
      Models::DeleteVoiceAccessProfileResponse deleteVoiceAccessProfile(const Models::DeleteVoiceAccessProfileRequest &request);

      /**
       * @summary 禁用消息订阅
       *
       * @param request DisableSubscriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableSubscriptionResponse
       */
      Models::DisableSubscriptionResponse disableSubscriptionWithOptions(const Models::DisableSubscriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 禁用消息订阅
       *
       * @param request DisableSubscriptionRequest
       * @return DisableSubscriptionResponse
       */
      Models::DisableSubscriptionResponse disableSubscription(const Models::DisableSubscriptionRequest &request);

      /**
       * @summary 导出热词
       *
       * @param tmpReq ExportVocabularyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportVocabularyResponse
       */
      Models::ExportVocabularyResponse exportVocabularyWithOptions(const Models::ExportVocabularyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 导出热词
       *
       * @param request ExportVocabularyRequest
       * @return ExportVocabularyResponse
       */
      Models::ExportVocabularyResponse exportVocabulary(const Models::ExportVocabularyRequest &request);

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
       * @summary 获取MQ配置
       *
       * @param request GetSubscriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSubscriptionResponse
       */
      Models::GetSubscriptionResponse getSubscriptionWithOptions(const Models::GetSubscriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取MQ配置
       *
       * @param request GetSubscriptionRequest
       * @return GetSubscriptionResponse
       */
      Models::GetSubscriptionResponse getSubscription(const Models::GetSubscriptionRequest &request);

      /**
       * @summary 获取实例详情
       *
       * @param request GetVocabularyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVocabularyResponse
       */
      Models::GetVocabularyResponse getVocabularyWithOptions(const Models::GetVocabularyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实例详情
       *
       * @param request GetVocabularyRequest
       * @return GetVocabularyResponse
       */
      Models::GetVocabularyResponse getVocabulary(const Models::GetVocabularyRequest &request);

      /**
       * @summary 导入热词
       *
       * @param request ImportVocabularyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportVocabularyResponse
       */
      Models::ImportVocabularyResponse importVocabularyWithOptions(const Models::ImportVocabularyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 导入热词
       *
       * @param request ImportVocabularyRequest
       * @return ImportVocabularyResponse
       */
      Models::ImportVocabularyResponse importVocabulary(const Models::ImportVocabularyRequest &request);

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
       * @summary 获取背景音列表
       *
       * @param request ListBackgroundMusicsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBackgroundMusicsResponse
       */
      Models::ListBackgroundMusicsResponse listBackgroundMusicsWithOptions(const Models::ListBackgroundMusicsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取背景音列表
       *
       * @param request ListBackgroundMusicsRequest
       * @return ListBackgroundMusicsResponse
       */
      Models::ListBackgroundMusicsResponse listBackgroundMusics(const Models::ListBackgroundMusicsRequest &request);

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
       * @summary 获取克隆音色可用模型列表
       *
       * @param request ListCloneVoiceModelsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCloneVoiceModelsResponse
       */
      Models::ListCloneVoiceModelsResponse listCloneVoiceModelsWithOptions(const Models::ListCloneVoiceModelsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取克隆音色可用模型列表
       *
       * @param request ListCloneVoiceModelsRequest
       * @return ListCloneVoiceModelsResponse
       */
      Models::ListCloneVoiceModelsResponse listCloneVoiceModels(const Models::ListCloneVoiceModelsRequest &request);

      /**
       * @summary 获取对话模型列表
       *
       * @param request ListNluModelsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNluModelsResponse
       */
      Models::ListNluModelsResponse listNluModelsWithOptions(const Models::ListNluModelsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取对话模型列表
       *
       * @param request ListNluModelsRequest
       * @return ListNluModelsResponse
       */
      Models::ListNluModelsResponse listNluModels(const Models::ListNluModelsRequest &request);

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
       * @summary 获取实例详情
       *
       * @param request ListVocabularyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVocabularyResponse
       */
      Models::ListVocabularyResponse listVocabularyWithOptions(const Models::ListVocabularyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实例详情
       *
       * @param request ListVocabularyRequest
       * @return ListVocabularyResponse
       */
      Models::ListVocabularyResponse listVocabulary(const Models::ListVocabularyRequest &request);

      /**
       * @summary 获取三方语音配置列表
       *
       * @param request ListVoiceAccessProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVoiceAccessProfileResponse
       */
      Models::ListVoiceAccessProfileResponse listVoiceAccessProfileWithOptions(const Models::ListVoiceAccessProfileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取三方语音配置列表
       *
       * @param request ListVoiceAccessProfileRequest
       * @return ListVoiceAccessProfileResponse
       */
      Models::ListVoiceAccessProfileResponse listVoiceAccessProfile(const Models::ListVoiceAccessProfileRequest &request);

      /**
       * @summary 获取引擎列表
       *
       * @param request ListVoiceEnginesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVoiceEnginesResponse
       */
      Models::ListVoiceEnginesResponse listVoiceEnginesWithOptions(const Models::ListVoiceEnginesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取引擎列表
       *
       * @param request ListVoiceEnginesRequest
       * @return ListVoiceEnginesResponse
       */
      Models::ListVoiceEnginesResponse listVoiceEngines(const Models::ListVoiceEnginesRequest &request);

      /**
       * @summary 获取音色列表
       *
       * @param request ListVoicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVoicesResponse
       */
      Models::ListVoicesResponse listVoicesWithOptions(const Models::ListVoicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取音色列表
       *
       * @param request ListVoicesRequest
       * @return ListVoicesResponse
       */
      Models::ListVoicesResponse listVoices(const Models::ListVoicesRequest &request);

      /**
       * @summary 试听
       *
       * @param tmpReq PreviewVoiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PreviewVoiceResponse
       */
      Models::PreviewVoiceResponse previewVoiceWithOptions(const Models::PreviewVoiceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 试听
       *
       * @param request PreviewVoiceRequest
       * @return PreviewVoiceResponse
       */
      Models::PreviewVoiceResponse previewVoice(const Models::PreviewVoiceRequest &request);

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
       * @summary 创建或更新MQ配置
       *
       * @param tmpReq UpdateSubscriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSubscriptionResponse
       */
      Models::UpdateSubscriptionResponse updateSubscriptionWithOptions(const Models::UpdateSubscriptionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建或更新MQ配置
       *
       * @param request UpdateSubscriptionRequest
       * @return UpdateSubscriptionResponse
       */
      Models::UpdateSubscriptionResponse updateSubscription(const Models::UpdateSubscriptionRequest &request);

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

      /**
       * @summary 更新实例
       *
       * @param tmpReq UpdateVocabularyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateVocabularyResponse
       */
      Models::UpdateVocabularyResponse updateVocabularyWithOptions(const Models::UpdateVocabularyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新实例
       *
       * @param request UpdateVocabularyRequest
       * @return UpdateVocabularyResponse
       */
      Models::UpdateVocabularyResponse updateVocabulary(const Models::UpdateVocabularyRequest &request);

      /**
       * @summary 更新三方语音配置
       *
       * @param tmpReq UpdateVoiceAccessProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateVoiceAccessProfileResponse
       */
      Models::UpdateVoiceAccessProfileResponse updateVoiceAccessProfileWithOptions(const Models::UpdateVoiceAccessProfileRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新三方语音配置
       *
       * @param request UpdateVoiceAccessProfileRequest
       * @return UpdateVoiceAccessProfileResponse
       */
      Models::UpdateVoiceAccessProfileResponse updateVoiceAccessProfile(const Models::UpdateVoiceAccessProfileRequest &request);
  };
} // namespace AlibabaCloud
} // namespace BailianVoiceBot20250101
#endif
