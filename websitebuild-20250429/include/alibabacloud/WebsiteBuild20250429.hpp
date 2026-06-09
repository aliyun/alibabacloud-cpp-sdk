// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_WEBSITEBUILD20250429_HPP_
#define ALIBABACLOUD_WEBSITEBUILD20250429_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/WebsiteBuild20250429Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/WebsiteBuild20250429.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 分配Supabase实例
       *
       * @param request AllocateSupabaseForAdminRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AllocateSupabaseForAdminResponse
       */
      Models::AllocateSupabaseForAdminResponse allocateSupabaseForAdminWithOptions(const Models::AllocateSupabaseForAdminRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分配Supabase实例
       *
       * @param request AllocateSupabaseForAdminRequest
       * @return AllocateSupabaseForAdminResponse
       */
      Models::AllocateSupabaseForAdminResponse allocateSupabaseForAdmin(const Models::AllocateSupabaseForAdminRequest &request);

      /**
       * @summary 批量校验资源计量
       *
       * @param request BatchCheckResourceMeasureRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchCheckResourceMeasureResponse
       */
      Models::BatchCheckResourceMeasureResponse batchCheckResourceMeasureWithOptions(const Models::BatchCheckResourceMeasureRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量校验资源计量
       *
       * @param request BatchCheckResourceMeasureRequest
       * @return BatchCheckResourceMeasureResponse
       */
      Models::BatchCheckResourceMeasureResponse batchCheckResourceMeasure(const Models::BatchCheckResourceMeasureRequest &request);

      /**
       * @summary Bind Application Domain
       *
       * @param request BindAppDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindAppDomainResponse
       */
      Models::BindAppDomainResponse bindAppDomainWithOptions(const Models::BindAppDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Bind Application Domain
       *
       * @param request BindAppDomainRequest
       * @return BindAppDomainResponse
       */
      Models::BindAppDomainResponse bindAppDomain(const Models::BindAppDomainRequest &request);

      /**
       * @summary 校验资源计量
       *
       * @param request CheckResourceMeasureRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckResourceMeasureResponse
       */
      Models::CheckResourceMeasureResponse checkResourceMeasureWithOptions(const Models::CheckResourceMeasureRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 校验资源计量
       *
       * @param request CheckResourceMeasureRequest
       * @return CheckResourceMeasureResponse
       */
      Models::CheckResourceMeasureResponse checkResourceMeasure(const Models::CheckResourceMeasureRequest &request);

      /**
       * @summary 校验用户资源计量
       *
       * @param request CheckUserResourceMeasureRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckUserResourceMeasureResponse
       */
      Models::CheckUserResourceMeasureResponse checkUserResourceMeasureWithOptions(const Models::CheckUserResourceMeasureRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 校验用户资源计量
       *
       * @param request CheckUserResourceMeasureRequest
       * @return CheckUserResourceMeasureResponse
       */
      Models::CheckUserResourceMeasureResponse checkUserResourceMeasure(const Models::CheckUserResourceMeasureRequest &request);

      /**
       * @summary 试用转正
       *
       * @param request ConfirmAppInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfirmAppInstanceResponse
       */
      Models::ConfirmAppInstanceResponse confirmAppInstanceWithOptions(const Models::ConfirmAppInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 试用转正
       *
       * @param request ConfirmAppInstanceRequest
       * @return ConfirmAppInstanceResponse
       */
      Models::ConfirmAppInstanceResponse confirmAppInstance(const Models::ConfirmAppInstanceRequest &request);

      /**
       * @summary 复制插件配置
       *
       * @param request CopyAppPluginConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CopyAppPluginConfigResponse
       */
      Models::CopyAppPluginConfigResponse copyAppPluginConfigWithOptions(const Models::CopyAppPluginConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 复制插件配置
       *
       * @param request CopyAppPluginConfigRequest
       * @return CopyAppPluginConfigResponse
       */
      Models::CopyAppPluginConfigResponse copyAppPluginConfig(const Models::CopyAppPluginConfigRequest &request);

      /**
       * @summary 异步发起AI员工对话
       *
       * @param request CreateAIStaffChatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAIStaffChatResponse
       */
      Models::CreateAIStaffChatResponse createAIStaffChatWithOptions(const Models::CreateAIStaffChatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 异步发起AI员工对话
       *
       * @param request CreateAIStaffChatRequest
       * @return CreateAIStaffChatResponse
       */
      Models::CreateAIStaffChatResponse createAIStaffChat(const Models::CreateAIStaffChatRequest &request);

      /**
       * @summary 创建AI员工会话
       *
       * @param request CreateAIStaffConversationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAIStaffConversationResponse
       */
      Models::CreateAIStaffConversationResponse createAIStaffConversationWithOptions(const Models::CreateAIStaffConversationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建AI员工会话
       *
       * @param request CreateAIStaffConversationRequest
       * @return CreateAIStaffConversationResponse
       */
      Models::CreateAIStaffConversationResponse createAIStaffConversation(const Models::CreateAIStaffConversationRequest &request);

      /**
       * @summary 创建应用助手智能体
       *
       * @param request CreateAppAssistantAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAppAssistantAgentResponse
       */
      Models::CreateAppAssistantAgentResponse createAppAssistantAgentWithOptions(const Models::CreateAppAssistantAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建应用助手智能体
       *
       * @param request CreateAppAssistantAgentRequest
       * @return CreateAppAssistantAgentResponse
       */
      Models::CreateAppAssistantAgentResponse createAppAssistantAgent(const Models::CreateAppAssistantAgentRequest &request);

      /**
       * @summary 生成应用助手SSO免登
       *
       * @param request CreateAppAssistantAgentSsoLoginRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAppAssistantAgentSsoLoginResponse
       */
      Models::CreateAppAssistantAgentSsoLoginResponse createAppAssistantAgentSsoLoginWithOptions(const Models::CreateAppAssistantAgentSsoLoginRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 生成应用助手SSO免登
       *
       * @param request CreateAppAssistantAgentSsoLoginRequest
       * @return CreateAppAssistantAgentSsoLoginResponse
       */
      Models::CreateAppAssistantAgentSsoLoginResponse createAppAssistantAgentSsoLogin(const Models::CreateAppAssistantAgentSsoLoginRequest &request);

      /**
       * @summary 万小智发起AI对话
       *
       * @param request CreateAppChatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAppChatResponse
       */
      FutureGenerator<Models::CreateAppChatResponse> createAppChatWithSSE(const Models::CreateAppChatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 万小智发起AI对话
       *
       * @param request CreateAppChatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAppChatResponse
       */
      Models::CreateAppChatResponse createAppChatWithOptions(const Models::CreateAppChatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 万小智发起AI对话
       *
       * @param request CreateAppChatRequest
       * @return CreateAppChatResponse
       */
      Models::CreateAppChatResponse createAppChat(const Models::CreateAppChatRequest &request);

      /**
       * @summary Create a website instance
       *
       * @param tmpReq CreateAppInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAppInstanceResponse
       */
      Models::CreateAppInstanceResponse createAppInstanceWithOptions(const Models::CreateAppInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a website instance
       *
       * @param request CreateAppInstanceRequest
       * @return CreateAppInstanceResponse
       */
      Models::CreateAppInstanceResponse createAppInstance(const Models::CreateAppInstanceRequest &request);

      /**
       * @summary SSO ticket
       *
       * @param request CreateAppInstanceTicketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAppInstanceTicketResponse
       */
      Models::CreateAppInstanceTicketResponse createAppInstanceTicketWithOptions(const Models::CreateAppInstanceTicketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary SSO ticket
       *
       * @param request CreateAppInstanceTicketRequest
       * @return CreateAppInstanceTicketResponse
       */
      Models::CreateAppInstanceTicketResponse createAppInstanceTicket(const Models::CreateAppInstanceTicketRequest &request);

      /**
       * @summary 应用实例创建 LLM 网关 API-KEY
       *
       * @param request CreateAppLlmApiKeyForPartnerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAppLlmApiKeyForPartnerResponse
       */
      Models::CreateAppLlmApiKeyForPartnerResponse createAppLlmApiKeyForPartnerWithOptions(const Models::CreateAppLlmApiKeyForPartnerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 应用实例创建 LLM 网关 API-KEY
       *
       * @param request CreateAppLlmApiKeyForPartnerRequest
       * @return CreateAppLlmApiKeyForPartnerResponse
       */
      Models::CreateAppLlmApiKeyForPartnerResponse createAppLlmApiKeyForPartner(const Models::CreateAppLlmApiKeyForPartnerRequest &request);

      /**
       * @summary Activate the Wanxiaozhi Inspiration Value service
       *
       * @param request CreateAppTokenServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAppTokenServiceResponse
       */
      Models::CreateAppTokenServiceResponse createAppTokenServiceWithOptions(const Models::CreateAppTokenServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Activate the Wanxiaozhi Inspiration Value service
       *
       * @param request CreateAppTokenServiceRequest
       * @return CreateAppTokenServiceResponse
       */
      Models::CreateAppTokenServiceResponse createAppTokenService(const Models::CreateAppTokenServiceRequest &request);

      /**
       * @summary 提交创建Logo任务
       *
       * @param request CreateLogoTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLogoTaskResponse
       */
      Models::CreateLogoTaskResponse createLogoTaskWithOptions(const Models::CreateLogoTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交创建Logo任务
       *
       * @param request CreateLogoTaskRequest
       * @return CreateLogoTaskResponse
       */
      Models::CreateLogoTaskResponse createLogoTask(const Models::CreateLogoTaskRequest &request);

      /**
       * @summary 创建素材中心文件夹
       *
       * @param request CreateMaterialDirectoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMaterialDirectoryResponse
       */
      Models::CreateMaterialDirectoryResponse createMaterialDirectoryWithOptions(const Models::CreateMaterialDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建素材中心文件夹
       *
       * @param request CreateMaterialDirectoryRequest
       * @return CreateMaterialDirectoryResponse
       */
      Models::CreateMaterialDirectoryResponse createMaterialDirectory(const Models::CreateMaterialDirectoryRequest &request);

      /**
       * @summary Delete the SSL certificate of a domain
       *
       * @param request DeleteAppDomainCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAppDomainCertificateResponse
       */
      Models::DeleteAppDomainCertificateResponse deleteAppDomainCertificateWithOptions(const Models::DeleteAppDomainCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete the SSL certificate of a domain
       *
       * @param request DeleteAppDomainCertificateRequest
       * @return DeleteAppDomainCertificateResponse
       */
      Models::DeleteAppDomainCertificateResponse deleteAppDomainCertificate(const Models::DeleteAppDomainCertificateRequest &request);

      /**
       * @summary Delete the domain redirection rules
       *
       * @param request DeleteAppDomainRedirectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAppDomainRedirectResponse
       */
      Models::DeleteAppDomainRedirectResponse deleteAppDomainRedirectWithOptions(const Models::DeleteAppDomainRedirectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete the domain redirection rules
       *
       * @param request DeleteAppDomainRedirectRequest
       * @return DeleteAppDomainRedirectResponse
       */
      Models::DeleteAppDomainRedirectResponse deleteAppDomainRedirect(const Models::DeleteAppDomainRedirectRequest &request);

      /**
       * @summary 删除文件
       *
       * @param request DeleteAppFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAppFileResponse
       */
      Models::DeleteAppFileResponse deleteAppFileWithOptions(const Models::DeleteAppFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除文件
       *
       * @param request DeleteAppFileRequest
       * @return DeleteAppFileResponse
       */
      Models::DeleteAppFileResponse deleteAppFile(const Models::DeleteAppFileRequest &request);

      /**
       * @summary 删除文件
       *
       * @param request DeleteAppInstanceFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAppInstanceFileResponse
       */
      Models::DeleteAppInstanceFileResponse deleteAppInstanceFileWithOptions(const Models::DeleteAppInstanceFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除文件
       *
       * @param request DeleteAppInstanceFileRequest
       * @return DeleteAppInstanceFileResponse
       */
      Models::DeleteAppInstanceFileResponse deleteAppInstanceFile(const Models::DeleteAppInstanceFileRequest &request);

      /**
       * @summary 删除Supabase密钥
       *
       * @param request DeleteAppSupabaseSecretsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAppSupabaseSecretsResponse
       */
      Models::DeleteAppSupabaseSecretsResponse deleteAppSupabaseSecretsWithOptions(const Models::DeleteAppSupabaseSecretsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除Supabase密钥
       *
       * @param request DeleteAppSupabaseSecretsRequest
       * @return DeleteAppSupabaseSecretsResponse
       */
      Models::DeleteAppSupabaseSecretsResponse deleteAppSupabaseSecrets(const Models::DeleteAppSupabaseSecretsRequest &request);

      /**
       * @summary 删除素材中心文件夹
       *
       * @param request DeleteMaterialDirectoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMaterialDirectoryResponse
       */
      Models::DeleteMaterialDirectoryResponse deleteMaterialDirectoryWithOptions(const Models::DeleteMaterialDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除素材中心文件夹
       *
       * @param request DeleteMaterialDirectoryRequest
       * @return DeleteMaterialDirectoryResponse
       */
      Models::DeleteMaterialDirectoryResponse deleteMaterialDirectory(const Models::DeleteMaterialDirectoryRequest &request);

      /**
       * @summary 删除素材生产任务
       *
       * @param tmpReq DeleteMaterialTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMaterialTaskResponse
       */
      Models::DeleteMaterialTaskResponse deleteMaterialTaskWithOptions(const Models::DeleteMaterialTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除素材生产任务
       *
       * @param request DeleteMaterialTaskRequest
       * @return DeleteMaterialTaskResponse
       */
      Models::DeleteMaterialTaskResponse deleteMaterialTask(const Models::DeleteMaterialTaskRequest &request);

      /**
       * @summary Query the DNS resolution records of a domain
       *
       * @param request DescribeAppDomainDnsRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAppDomainDnsRecordResponse
       */
      Models::DescribeAppDomainDnsRecordResponse describeAppDomainDnsRecordWithOptions(const Models::DescribeAppDomainDnsRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the DNS resolution records of a domain
       *
       * @param request DescribeAppDomainDnsRecordRequest
       * @return DescribeAppDomainDnsRecordResponse
       */
      Models::DescribeAppDomainDnsRecordResponse describeAppDomainDnsRecord(const Models::DescribeAppDomainDnsRecordRequest &request);

      /**
       * @summary DispatchConsoleAPIForPartner
       *
       * @param request DispatchConsoleAPIForPartnerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DispatchConsoleAPIForPartnerResponse
       */
      Models::DispatchConsoleAPIForPartnerResponse dispatchConsoleAPIForPartnerWithOptions(const Models::DispatchConsoleAPIForPartnerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DispatchConsoleAPIForPartner
       *
       * @param request DispatchConsoleAPIForPartnerRequest
       * @return DispatchConsoleAPIForPartnerResponse
       */
      Models::DispatchConsoleAPIForPartnerResponse dispatchConsoleAPIForPartner(const Models::DispatchConsoleAPIForPartnerRequest &request);

      /**
       * @summary 编辑插件配置
       *
       * @param request EditPluginConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EditPluginConfigResponse
       */
      Models::EditPluginConfigResponse editPluginConfigWithOptions(const Models::EditPluginConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 编辑插件配置
       *
       * @param request EditPluginConfigRequest
       * @return EditPluginConfigResponse
       */
      Models::EditPluginConfigResponse editPluginConfig(const Models::EditPluginConfigRequest &request);

      /**
       * @summary 导出素材文件
       *
       * @param tmpReq ExportMaterialFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportMaterialFileResponse
       */
      Models::ExportMaterialFileResponse exportMaterialFileWithOptions(const Models::ExportMaterialFileRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 导出素材文件
       *
       * @param request ExportMaterialFileRequest
       * @return ExportMaterialFileResponse
       */
      Models::ExportMaterialFileResponse exportMaterialFile(const Models::ExportMaterialFileRequest &request);

      /**
       * @summary 获取AI员工站点预览地址
       *
       * @param request GetAIStaffPreviewUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAIStaffPreviewUrlResponse
       */
      Models::GetAIStaffPreviewUrlResponse getAIStaffPreviewUrlWithOptions(const Models::GetAIStaffPreviewUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取AI员工站点预览地址
       *
       * @param request GetAIStaffPreviewUrlRequest
       * @return GetAIStaffPreviewUrlResponse
       */
      Models::GetAIStaffPreviewUrlResponse getAIStaffPreviewUrl(const Models::GetAIStaffPreviewUrlRequest &request);

      /**
       * @summary 获取代码工作区详情
       *
       * @param request GetAppCodeWorkspaceDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppCodeWorkspaceDetailResponse
       */
      Models::GetAppCodeWorkspaceDetailResponse getAppCodeWorkspaceDetailWithOptions(const Models::GetAppCodeWorkspaceDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取代码工作区详情
       *
       * @param request GetAppCodeWorkspaceDetailRequest
       * @return GetAppCodeWorkspaceDetailResponse
       */
      Models::GetAppCodeWorkspaceDetailResponse getAppCodeWorkspaceDetail(const Models::GetAppCodeWorkspaceDetailRequest &request);

      /**
       * @summary 获取对话详情
       *
       * @param request GetAppConversationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppConversationResponse
       */
      Models::GetAppConversationResponse getAppConversationWithOptions(const Models::GetAppConversationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取对话详情
       *
       * @param request GetAppConversationRequest
       * @return GetAppConversationResponse
       */
      Models::GetAppConversationResponse getAppConversation(const Models::GetAppConversationRequest &request);

      /**
       * @summary 获取会话锁定状态
       *
       * @param request GetAppConversationLockStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppConversationLockStatusResponse
       */
      Models::GetAppConversationLockStatusResponse getAppConversationLockStatusWithOptions(const Models::GetAppConversationLockStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取会话锁定状态
       *
       * @param request GetAppConversationLockStatusRequest
       * @return GetAppConversationLockStatusResponse
       */
      Models::GetAppConversationLockStatusResponse getAppConversationLockStatus(const Models::GetAppConversationLockStatusRequest &request);

      /**
       * @summary 查询数据库表结构
       *
       * @param request GetAppDatabaseTableSchemasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppDatabaseTableSchemasResponse
       */
      Models::GetAppDatabaseTableSchemasResponse getAppDatabaseTableSchemasWithOptions(const Models::GetAppDatabaseTableSchemasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询数据库表结构
       *
       * @param request GetAppDatabaseTableSchemasRequest
       * @return GetAppDatabaseTableSchemasResponse
       */
      Models::GetAppDatabaseTableSchemasResponse getAppDatabaseTableSchemas(const Models::GetAppDatabaseTableSchemasRequest &request);

      /**
       * @summary 读取文件及修改时间
       *
       * @param request GetAppFileContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppFileContentResponse
       */
      Models::GetAppFileContentResponse getAppFileContentWithOptions(const Models::GetAppFileContentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 读取文件及修改时间
       *
       * @param request GetAppFileContentRequest
       * @return GetAppFileContentResponse
       */
      Models::GetAppFileContentResponse getAppFileContent(const Models::GetAppFileContentRequest &request);

      /**
       * @summary Query Application Instance Details
       *
       * @param request GetAppInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppInstanceResponse
       */
      Models::GetAppInstanceResponse getAppInstanceWithOptions(const Models::GetAppInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Application Instance Details
       *
       * @param request GetAppInstanceRequest
       * @return GetAppInstanceResponse
       */
      Models::GetAppInstanceResponse getAppInstance(const Models::GetAppInstanceRequest &request);

      /**
       * @summary GetAppInstanceEntitlement
       *
       * @param request GetAppInstanceEntitlementRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppInstanceEntitlementResponse
       */
      Models::GetAppInstanceEntitlementResponse getAppInstanceEntitlementWithOptions(const Models::GetAppInstanceEntitlementRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary GetAppInstanceEntitlement
       *
       * @param request GetAppInstanceEntitlementRequest
       * @return GetAppInstanceEntitlementResponse
       */
      Models::GetAppInstanceEntitlementResponse getAppInstanceEntitlement(const Models::GetAppInstanceEntitlementRequest &request);

      /**
       * @summary Query application instance information
       *
       * @param request GetAppInstanceForAdminRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppInstanceForAdminResponse
       */
      Models::GetAppInstanceForAdminResponse getAppInstanceForAdminWithOptions(const Models::GetAppInstanceForAdminRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query application instance information
       *
       * @param request GetAppInstanceForAdminRequest
       * @return GetAppInstanceForAdminResponse
       */
      Models::GetAppInstanceForAdminResponse getAppInstanceForAdmin(const Models::GetAppInstanceForAdminRequest &request);

      /**
       * @summary Query instance details
       *
       * @param request GetAppInstanceForPartnerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppInstanceForPartnerResponse
       */
      Models::GetAppInstanceForPartnerResponse getAppInstanceForPartnerWithOptions(const Models::GetAppInstanceForPartnerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query instance details
       *
       * @param request GetAppInstanceForPartnerRequest
       * @return GetAppInstanceForPartnerResponse
       */
      Models::GetAppInstanceForPartnerResponse getAppInstanceForPartner(const Models::GetAppInstanceForPartnerRequest &request);

      /**
       * @summary 获取应用临时短链
       *
       * @param request GetAppInstanceTempShortUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppInstanceTempShortUrlResponse
       */
      Models::GetAppInstanceTempShortUrlResponse getAppInstanceTempShortUrlWithOptions(const Models::GetAppInstanceTempShortUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取应用临时短链
       *
       * @param request GetAppInstanceTempShortUrlRequest
       * @return GetAppInstanceTempShortUrlResponse
       */
      Models::GetAppInstanceTempShortUrlResponse getAppInstanceTempShortUrl(const Models::GetAppInstanceTempShortUrlRequest &request);

      /**
       * @summary 生码-获取插件配置信息
       *
       * @param request GetAppPluginConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppPluginConfigResponse
       */
      Models::GetAppPluginConfigResponse getAppPluginConfigWithOptions(const Models::GetAppPluginConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 生码-获取插件配置信息
       *
       * @param request GetAppPluginConfigRequest
       * @return GetAppPluginConfigResponse
       */
      Models::GetAppPluginConfigResponse getAppPluginConfig(const Models::GetAppPluginConfigRequest &request);

      /**
       * @summary 发布状态查询
       *
       * @param request GetAppPublishStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppPublishStatusResponse
       */
      Models::GetAppPublishStatusResponse getAppPublishStatusWithOptions(const Models::GetAppPublishStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 发布状态查询
       *
       * @param request GetAppPublishStatusRequest
       * @return GetAppPublishStatusResponse
       */
      Models::GetAppPublishStatusResponse getAppPublishStatus(const Models::GetAppPublishStatusRequest &request);

      /**
       * @summary 查询万小智推荐商品
       *
       * @param request GetAppRecommendedCommoditiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppRecommendedCommoditiesResponse
       */
      Models::GetAppRecommendedCommoditiesResponse getAppRecommendedCommoditiesWithOptions(const Models::GetAppRecommendedCommoditiesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询万小智推荐商品
       *
       * @param request GetAppRecommendedCommoditiesRequest
       * @return GetAppRecommendedCommoditiesResponse
       */
      Models::GetAppRecommendedCommoditiesResponse getAppRecommendedCommodities(const Models::GetAppRecommendedCommoditiesRequest &request);

      /**
       * @summary 需求查询
       *
       * @param request GetAppRequirementRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppRequirementResponse
       */
      Models::GetAppRequirementResponse getAppRequirementWithOptions(const Models::GetAppRequirementRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 需求查询
       *
       * @param request GetAppRequirementRequest
       * @return GetAppRequirementResponse
       */
      Models::GetAppRequirementResponse getAppRequirement(const Models::GetAppRequirementRequest &request);

      /**
       * @summary 获取沙箱预览地址
       *
       * @param request GetAppSandboxPreviewUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppSandboxPreviewUrlResponse
       */
      Models::GetAppSandboxPreviewUrlResponse getAppSandboxPreviewUrlWithOptions(const Models::GetAppSandboxPreviewUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取沙箱预览地址
       *
       * @param request GetAppSandboxPreviewUrlRequest
       * @return GetAppSandboxPreviewUrlResponse
       */
      Models::GetAppSandboxPreviewUrlResponse getAppSandboxPreviewUrl(const Models::GetAppSandboxPreviewUrlRequest &request);

      /**
       * @summary 查询SEO索引状态
       *
       * @param request GetAppSeoStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppSeoStatusResponse
       */
      Models::GetAppSeoStatusResponse getAppSeoStatusWithOptions(const Models::GetAppSeoStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询SEO索引状态
       *
       * @param request GetAppSeoStatusRequest
       * @return GetAppSeoStatusResponse
       */
      Models::GetAppSeoStatusResponse getAppSeoStatus(const Models::GetAppSeoStatusRequest &request);

      /**
       * @summary SEO索引图表
       *
       * @param request GetAppSeoTrendsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppSeoTrendsResponse
       */
      Models::GetAppSeoTrendsResponse getAppSeoTrendsWithOptions(const Models::GetAppSeoTrendsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary SEO索引图表
       *
       * @param request GetAppSeoTrendsRequest
       * @return GetAppSeoTrendsResponse
       */
      Models::GetAppSeoTrendsResponse getAppSeoTrends(const Models::GetAppSeoTrendsRequest &request);

      /**
       * @summary 获取站点地图
       *
       * @param request GetAppSitemapRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppSitemapResponse
       */
      Models::GetAppSitemapResponse getAppSitemapWithOptions(const Models::GetAppSitemapRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取站点地图
       *
       * @param request GetAppSitemapRequest
       * @return GetAppSitemapResponse
       */
      Models::GetAppSitemapResponse getAppSitemap(const Models::GetAppSitemapRequest &request);

      /**
       * @summary Supabase认证设置查询
       *
       * @param request GetAppSupabaseAuthConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppSupabaseAuthConfigResponse
       */
      Models::GetAppSupabaseAuthConfigResponse getAppSupabaseAuthConfigWithOptions(const Models::GetAppSupabaseAuthConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Supabase认证设置查询
       *
       * @param request GetAppSupabaseAuthConfigRequest
       * @return GetAppSupabaseAuthConfigResponse
       */
      Models::GetAppSupabaseAuthConfigResponse getAppSupabaseAuthConfig(const Models::GetAppSupabaseAuthConfigRequest &request);

      /**
       * @summary 获取Supabase实例信息
       *
       * @param request GetAppSupabaseInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppSupabaseInstanceResponse
       */
      Models::GetAppSupabaseInstanceResponse getAppSupabaseInstanceWithOptions(const Models::GetAppSupabaseInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取Supabase实例信息
       *
       * @param request GetAppSupabaseInstanceRequest
       * @return GetAppSupabaseInstanceResponse
       */
      Models::GetAppSupabaseInstanceResponse getAppSupabaseInstance(const Models::GetAppSupabaseInstanceRequest &request);

      /**
       * @summary 查询Supabase密钥
       *
       * @param request GetAppSupabaseSecretsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppSupabaseSecretsResponse
       */
      Models::GetAppSupabaseSecretsResponse getAppSupabaseSecretsWithOptions(const Models::GetAppSupabaseSecretsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Supabase密钥
       *
       * @param request GetAppSupabaseSecretsRequest
       * @return GetAppSupabaseSecretsResponse
       */
      Models::GetAppSupabaseSecretsResponse getAppSupabaseSecrets(const Models::GetAppSupabaseSecretsRequest &request);

      /**
       * @summary 模板详情查询
       *
       * @param request GetAppTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppTemplateResponse
       */
      Models::GetAppTemplateResponse getAppTemplateWithOptions(const Models::GetAppTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 模板详情查询
       *
       * @param request GetAppTemplateRequest
       * @return GetAppTemplateResponse
       */
      Models::GetAppTemplateResponse getAppTemplate(const Models::GetAppTemplateRequest &request);

      /**
       * @summary 查询万小智灵感值服务
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppTokenServiceResponse
       */
      Models::GetAppTokenServiceResponse getAppTokenServiceWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询万小智灵感值服务
       *
       * @return GetAppTokenServiceResponse
       */
      Models::GetAppTokenServiceResponse getAppTokenService();

      /**
       * @summary 获取工作区目录结构
       *
       * @param request GetAppWorkspaceDirectoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppWorkspaceDirectoryResponse
       */
      Models::GetAppWorkspaceDirectoryResponse getAppWorkspaceDirectoryWithOptions(const Models::GetAppWorkspaceDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取工作区目录结构
       *
       * @param request GetAppWorkspaceDirectoryRequest
       * @return GetAppWorkspaceDirectoryResponse
       */
      Models::GetAppWorkspaceDirectoryResponse getAppWorkspaceDirectory(const Models::GetAppWorkspaceDirectoryRequest &request);

      /**
       * @summary 查询Logo创建任务
       *
       * @param request GetCreateLogoTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCreateLogoTaskResponse
       */
      Models::GetCreateLogoTaskResponse getCreateLogoTaskWithOptions(const Models::GetCreateLogoTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Logo创建任务
       *
       * @param request GetCreateLogoTaskRequest
       * @return GetCreateLogoTaskResponse
       */
      Models::GetCreateLogoTaskResponse getCreateLogoTask(const Models::GetCreateLogoTaskRequest &request);

      /**
       * @summary 提供给服务商的域名查询接口
       *
       * @param request GetDomainInfoForPartnerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDomainInfoForPartnerResponse
       */
      Models::GetDomainInfoForPartnerResponse getDomainInfoForPartnerWithOptions(const Models::GetDomainInfoForPartnerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提供给服务商的域名查询接口
       *
       * @param request GetDomainInfoForPartnerRequest
       * @return GetDomainInfoForPartnerResponse
       */
      Models::GetDomainInfoForPartnerResponse getDomainInfoForPartner(const Models::GetDomainInfoForPartnerRequest &request);

      /**
       * @summary 查询域名备案信息
       *
       * @param request GetIcpFilingInfoForPartnerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIcpFilingInfoForPartnerResponse
       */
      Models::GetIcpFilingInfoForPartnerResponse getIcpFilingInfoForPartnerWithOptions(const Models::GetIcpFilingInfoForPartnerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询域名备案信息
       *
       * @param request GetIcpFilingInfoForPartnerRequest
       * @return GetIcpFilingInfoForPartnerResponse
       */
      Models::GetIcpFilingInfoForPartnerResponse getIcpFilingInfoForPartner(const Models::GetIcpFilingInfoForPartnerRequest &request);

      /**
       * @summary 查询LLM Proxy配置
       *
       * @param request GetLlmProxyConfigForAdminRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLlmProxyConfigForAdminResponse
       */
      Models::GetLlmProxyConfigForAdminResponse getLlmProxyConfigForAdminWithOptions(const Models::GetLlmProxyConfigForAdminRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询LLM Proxy配置
       *
       * @param request GetLlmProxyConfigForAdminRequest
       * @return GetLlmProxyConfigForAdminResponse
       */
      Models::GetLlmProxyConfigForAdminResponse getLlmProxyConfigForAdmin(const Models::GetLlmProxyConfigForAdminRequest &request);

      /**
       * @summary 获取小程序授权链接
       *
       * @param request GetMiniAppAuthUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMiniAppAuthUrlResponse
       */
      Models::GetMiniAppAuthUrlResponse getMiniAppAuthUrlWithOptions(const Models::GetMiniAppAuthUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取小程序授权链接
       *
       * @param request GetMiniAppAuthUrlRequest
       * @return GetMiniAppAuthUrlResponse
       */
      Models::GetMiniAppAuthUrlResponse getMiniAppAuthUrl(const Models::GetMiniAppAuthUrlRequest &request);

      /**
       * @summary 查询站点绑定的小程序
       *
       * @param tmpReq GetMiniAppBindingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMiniAppBindingResponse
       */
      Models::GetMiniAppBindingResponse getMiniAppBindingWithOptions(const Models::GetMiniAppBindingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询站点绑定的小程序
       *
       * @param request GetMiniAppBindingRequest
       * @return GetMiniAppBindingResponse
       */
      Models::GetMiniAppBindingResponse getMiniAppBinding(const Models::GetMiniAppBindingRequest &request);

      /**
       * @summary 根据条件查询应用实例绑定的小程序
       *
       * @param request GetMiniAppBindingForAdminRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMiniAppBindingForAdminResponse
       */
      Models::GetMiniAppBindingForAdminResponse getMiniAppBindingForAdminWithOptions(const Models::GetMiniAppBindingForAdminRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据条件查询应用实例绑定的小程序
       *
       * @param request GetMiniAppBindingForAdminRequest
       * @return GetMiniAppBindingForAdminResponse
       */
      Models::GetMiniAppBindingForAdminResponse getMiniAppBindingForAdmin(const Models::GetMiniAppBindingForAdminRequest &request);

      /**
       * @summary 生成文件上传策略
       *
       * @param request GetOssUploadPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOssUploadPolicyResponse
       */
      Models::GetOssUploadPolicyResponse getOssUploadPolicyWithOptions(const Models::GetOssUploadPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 生成文件上传策略
       *
       * @param request GetOssUploadPolicyRequest
       * @return GetOssUploadPolicyResponse
       */
      Models::GetOssUploadPolicyResponse getOssUploadPolicy(const Models::GetOssUploadPolicyRequest &request);

      /**
       * @summary 获取临时下载地址
       *
       * @param request GetTempDownloadUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTempDownloadUrlResponse
       */
      Models::GetTempDownloadUrlResponse getTempDownloadUrlWithOptions(const Models::GetTempDownloadUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取临时下载地址
       *
       * @param request GetTempDownloadUrlRequest
       * @return GetTempDownloadUrlResponse
       */
      Models::GetTempDownloadUrlResponse getTempDownloadUrl(const Models::GetTempDownloadUrlRequest &request);

      /**
       * @summary 通过授权码得到accessToken
       *
       * @param request GetUserAccessTokenForPartnerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserAccessTokenForPartnerResponse
       */
      Models::GetUserAccessTokenForPartnerResponse getUserAccessTokenForPartnerWithOptions(const Models::GetUserAccessTokenForPartnerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通过授权码得到accessToken
       *
       * @param request GetUserAccessTokenForPartnerRequest
       * @return GetUserAccessTokenForPartnerResponse
       */
      Models::GetUserAccessTokenForPartnerResponse getUserAccessTokenForPartner(const Models::GetUserAccessTokenForPartnerRequest &request);

      /**
       * @summary 合作伙伴获取用户SLR角色授权临时凭证
       *
       * @param request GetUserTmpIdentityForPartnerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserTmpIdentityForPartnerResponse
       */
      Models::GetUserTmpIdentityForPartnerResponse getUserTmpIdentityForPartnerWithOptions(const Models::GetUserTmpIdentityForPartnerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 合作伙伴获取用户SLR角色授权临时凭证
       *
       * @param request GetUserTmpIdentityForPartnerRequest
       * @return GetUserTmpIdentityForPartnerResponse
       */
      Models::GetUserTmpIdentityForPartnerResponse getUserTmpIdentityForPartner(const Models::GetUserTmpIdentityForPartnerRequest &request);

      /**
       * @summary 检查AccessToken
       *
       * @param request IntrospectAppInstanceTicketForPreviewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return IntrospectAppInstanceTicketForPreviewResponse
       */
      Models::IntrospectAppInstanceTicketForPreviewResponse introspectAppInstanceTicketForPreviewWithOptions(const Models::IntrospectAppInstanceTicketForPreviewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 检查AccessToken
       *
       * @param request IntrospectAppInstanceTicketForPreviewRequest
       * @return IntrospectAppInstanceTicketForPreviewResponse
       */
      Models::IntrospectAppInstanceTicketForPreviewResponse introspectAppInstanceTicketForPreview(const Models::IntrospectAppInstanceTicketForPreviewRequest &request);

      /**
       * @summary 获取AI员工对话增量SSE事件
       *
       * @param request ListAIStaffChatEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAIStaffChatEventsResponse
       */
      Models::ListAIStaffChatEventsResponse listAIStaffChatEventsWithOptions(const Models::ListAIStaffChatEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取AI员工对话增量SSE事件
       *
       * @param request ListAIStaffChatEventsRequest
       * @return ListAIStaffChatEventsResponse
       */
      Models::ListAIStaffChatEventsResponse listAIStaffChatEvents(const Models::ListAIStaffChatEventsRequest &request);

      /**
       * @summary 分页查询AI员工对话消息列表
       *
       * @param request ListAIStaffChatMessagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAIStaffChatMessagesResponse
       */
      Models::ListAIStaffChatMessagesResponse listAIStaffChatMessagesWithOptions(const Models::ListAIStaffChatMessagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分页查询AI员工对话消息列表
       *
       * @param request ListAIStaffChatMessagesRequest
       * @return ListAIStaffChatMessagesResponse
       */
      Models::ListAIStaffChatMessagesResponse listAIStaffChatMessages(const Models::ListAIStaffChatMessagesRequest &request);

      /**
       * @summary 查询应用助手智能体列表
       *
       * @param request ListAppAssistantAgentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAppAssistantAgentsResponse
       */
      Models::ListAppAssistantAgentsResponse listAppAssistantAgentsWithOptions(const Models::ListAppAssistantAgentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询应用助手智能体列表
       *
       * @param request ListAppAssistantAgentsRequest
       * @return ListAppAssistantAgentsResponse
       */
      Models::ListAppAssistantAgentsResponse listAppAssistantAgents(const Models::ListAppAssistantAgentsRequest &request);

      /**
       * @summary 查询指定聊天的消息列表
       *
       * @param request ListAppChatMessagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAppChatMessagesResponse
       */
      Models::ListAppChatMessagesResponse listAppChatMessagesWithOptions(const Models::ListAppChatMessagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询指定聊天的消息列表
       *
       * @param request ListAppChatMessagesRequest
       * @return ListAppChatMessagesResponse
       */
      Models::ListAppChatMessagesResponse listAppChatMessages(const Models::ListAppChatMessagesRequest &request);

      /**
       * @deprecated OpenAPI ListAppCommoditySpecificationsForPartner is deprecated, please use WebsiteBuild::2025-04-29::ListAppCommoditySpecificationsV2ForPartner instead.
       *
       * @summary 获取商品配置信息
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAppCommoditySpecificationsForPartnerResponse
       */
      Models::ListAppCommoditySpecificationsForPartnerResponse listAppCommoditySpecificationsForPartnerWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ListAppCommoditySpecificationsForPartner is deprecated, please use WebsiteBuild::2025-04-29::ListAppCommoditySpecificationsV2ForPartner instead.
       *
       * @summary 获取商品配置信息
       *
       * @return ListAppCommoditySpecificationsForPartnerResponse
       */
      Models::ListAppCommoditySpecificationsForPartnerResponse listAppCommoditySpecificationsForPartner();

      /**
       * @summary 网站信息查询
       *
       * @param request ListAppCommoditySpecificationsV2ForPartnerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAppCommoditySpecificationsV2ForPartnerResponse
       */
      Models::ListAppCommoditySpecificationsV2ForPartnerResponse listAppCommoditySpecificationsV2ForPartnerWithOptions(const Models::ListAppCommoditySpecificationsV2ForPartnerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 网站信息查询
       *
       * @param request ListAppCommoditySpecificationsV2ForPartnerRequest
       * @return ListAppCommoditySpecificationsV2ForPartnerResponse
       */
      Models::ListAppCommoditySpecificationsV2ForPartnerResponse listAppCommoditySpecificationsV2ForPartner(const Models::ListAppCommoditySpecificationsV2ForPartnerRequest &request);

      /**
       * @summary 分页查询对话消息列表
       *
       * @param request ListAppConversationMessagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAppConversationMessagesResponse
       */
      Models::ListAppConversationMessagesResponse listAppConversationMessagesWithOptions(const Models::ListAppConversationMessagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分页查询对话消息列表
       *
       * @param request ListAppConversationMessagesRequest
       * @return ListAppConversationMessagesResponse
       */
      Models::ListAppConversationMessagesResponse listAppConversationMessages(const Models::ListAppConversationMessagesRequest &request);

      /**
       * @summary 搜索对话列表
       *
       * @param request ListAppConversationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAppConversationsResponse
       */
      Models::ListAppConversationsResponse listAppConversationsWithOptions(const Models::ListAppConversationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 搜索对话列表
       *
       * @param request ListAppConversationsRequest
       * @return ListAppConversationsResponse
       */
      Models::ListAppConversationsResponse listAppConversations(const Models::ListAppConversationsRequest &request);

      /**
       * @summary Query the list of domain redirection rules
       *
       * @param request ListAppDomainRedirectRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAppDomainRedirectRecordsResponse
       */
      Models::ListAppDomainRedirectRecordsResponse listAppDomainRedirectRecordsWithOptions(const Models::ListAppDomainRedirectRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the list of domain redirection rules
       *
       * @param request ListAppDomainRedirectRecordsRequest
       * @return ListAppDomainRedirectRecordsResponse
       */
      Models::ListAppDomainRedirectRecordsResponse listAppDomainRedirectRecords(const Models::ListAppDomainRedirectRecordsRequest &request);

      /**
       * @summary List all domain names under the application instance
       *
       * @param request ListAppInstanceDomainsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAppInstanceDomainsResponse
       */
      Models::ListAppInstanceDomainsResponse listAppInstanceDomainsWithOptions(const Models::ListAppInstanceDomainsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List all domain names under the application instance
       *
       * @param request ListAppInstanceDomainsRequest
       * @return ListAppInstanceDomainsResponse
       */
      Models::ListAppInstanceDomainsResponse listAppInstanceDomains(const Models::ListAppInstanceDomainsRequest &request);

      /**
       * @summary Website Instance List Query
       *
       * @param tmpReq ListAppInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAppInstancesResponse
       */
      Models::ListAppInstancesResponse listAppInstancesWithOptions(const Models::ListAppInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Website Instance List Query
       *
       * @param request ListAppInstancesRequest
       * @return ListAppInstancesResponse
       */
      Models::ListAppInstancesResponse listAppInstances(const Models::ListAppInstancesRequest &request);

      /**
       * @summary 获取码农插件配置列表
       *
       * @param request ListAppPluginConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAppPluginConfigsResponse
       */
      Models::ListAppPluginConfigsResponse listAppPluginConfigsWithOptions(const Models::ListAppPluginConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取码农插件配置列表
       *
       * @param request ListAppPluginConfigsRequest
       * @return ListAppPluginConfigsResponse
       */
      Models::ListAppPluginConfigsResponse listAppPluginConfigs(const Models::ListAppPluginConfigsRequest &request);

      /**
       * @summary 应用插件列表
       *
       * @param request ListAppPluginsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAppPluginsResponse
       */
      Models::ListAppPluginsResponse listAppPluginsWithOptions(const Models::ListAppPluginsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 应用插件列表
       *
       * @param request ListAppPluginsRequest
       * @return ListAppPluginsResponse
       */
      Models::ListAppPluginsResponse listAppPlugins(const Models::ListAppPluginsRequest &request);

      /**
       * @summary 发布历史查询
       *
       * @param request ListAppPublishHistoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAppPublishHistoryResponse
       */
      Models::ListAppPublishHistoryResponse listAppPublishHistoryWithOptions(const Models::ListAppPublishHistoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 发布历史查询
       *
       * @param request ListAppPublishHistoryRequest
       * @return ListAppPublishHistoryResponse
       */
      Models::ListAppPublishHistoryResponse listAppPublishHistory(const Models::ListAppPublishHistoryRequest &request);

      /**
       * @summary 字典列表查询
       *
       * @param request ListAppTemplateDictsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAppTemplateDictsResponse
       */
      Models::ListAppTemplateDictsResponse listAppTemplateDictsWithOptions(const Models::ListAppTemplateDictsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 字典列表查询
       *
       * @param request ListAppTemplateDictsRequest
       * @return ListAppTemplateDictsResponse
       */
      Models::ListAppTemplateDictsResponse listAppTemplateDicts(const Models::ListAppTemplateDictsRequest &request);

      /**
       * @summary 模板列表查询
       *
       * @param request ListAppTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAppTemplatesResponse
       */
      Models::ListAppTemplatesResponse listAppTemplatesWithOptions(const Models::ListAppTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 模板列表查询
       *
       * @param request ListAppTemplatesRequest
       * @return ListAppTemplatesResponse
       */
      Models::ListAppTemplatesResponse listAppTemplates(const Models::ListAppTemplatesRequest &request);

      /**
       * @summary 查询支付宝ISV插件配置
       *
       * @param request ListIsvPaymentPluginConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIsvPaymentPluginConfigsResponse
       */
      Models::ListIsvPaymentPluginConfigsResponse listIsvPaymentPluginConfigsWithOptions(const Models::ListIsvPaymentPluginConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询支付宝ISV插件配置
       *
       * @param request ListIsvPaymentPluginConfigsRequest
       * @return ListIsvPaymentPluginConfigsResponse
       */
      Models::ListIsvPaymentPluginConfigsResponse listIsvPaymentPluginConfigs(const Models::ListIsvPaymentPluginConfigsRequest &request);

      /**
       * @summary Modify the configuration of a building instance
       *
       * @param request ModifyAppInstanceSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAppInstanceSpecResponse
       */
      Models::ModifyAppInstanceSpecResponse modifyAppInstanceSpecWithOptions(const Models::ModifyAppInstanceSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify the configuration of a building instance
       *
       * @param request ModifyAppInstanceSpecRequest
       * @return ModifyAppInstanceSpecResponse
       */
      Models::ModifyAppInstanceSpecResponse modifyAppInstanceSpec(const Models::ModifyAppInstanceSpecRequest &request);

      /**
       * @summary 修改素材中心文件夹
       *
       * @param request ModifyMaterialDirectoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyMaterialDirectoryResponse
       */
      Models::ModifyMaterialDirectoryResponse modifyMaterialDirectoryWithOptions(const Models::ModifyMaterialDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改素材中心文件夹
       *
       * @param request ModifyMaterialDirectoryRequest
       * @return ModifyMaterialDirectoryResponse
       */
      Models::ModifyMaterialDirectoryResponse modifyMaterialDirectory(const Models::ModifyMaterialDirectoryRequest &request);

      /**
       * @summary 修改素材文件
       *
       * @param request ModifyMaterialFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyMaterialFileResponse
       */
      Models::ModifyMaterialFileResponse modifyMaterialFileWithOptions(const Models::ModifyMaterialFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改素材文件
       *
       * @param request ModifyMaterialFileRequest
       * @return ModifyMaterialFileResponse
       */
      Models::ModifyMaterialFileResponse modifyMaterialFile(const Models::ModifyMaterialFileRequest &request);

      /**
       * @summary 修改素材文件状态
       *
       * @param tmpReq ModifyMaterialFileStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyMaterialFileStatusResponse
       */
      Models::ModifyMaterialFileStatusResponse modifyMaterialFileStatusWithOptions(const Models::ModifyMaterialFileStatusRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改素材文件状态
       *
       * @param request ModifyMaterialFileStatusRequest
       * @return ModifyMaterialFileStatusResponse
       */
      Models::ModifyMaterialFileStatusResponse modifyMaterialFileStatus(const Models::ModifyMaterialFileStatusRequest &request);

      /**
       * @summary 移动素材中心文件夹
       *
       * @param request MoveMaterialDirectoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MoveMaterialDirectoryResponse
       */
      Models::MoveMaterialDirectoryResponse moveMaterialDirectoryWithOptions(const Models::MoveMaterialDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 移动素材中心文件夹
       *
       * @param request MoveMaterialDirectoryRequest
       * @return MoveMaterialDirectoryResponse
       */
      Models::MoveMaterialDirectoryResponse moveMaterialDirectory(const Models::MoveMaterialDirectoryRequest &request);

      /**
       * @summary 移动素材文件
       *
       * @param tmpReq MoveMaterialFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MoveMaterialFileResponse
       */
      Models::MoveMaterialFileResponse moveMaterialFileWithOptions(const Models::MoveMaterialFileRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 移动素材文件
       *
       * @param request MoveMaterialFileRequest
       * @return MoveMaterialFileResponse
       */
      Models::MoveMaterialFileResponse moveMaterialFile(const Models::MoveMaterialFileRequest &request);

      /**
       * @summary 合作伙伴操作应用
       *
       * @param request OperateAppInstanceForPartnerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateAppInstanceForPartnerResponse
       */
      Models::OperateAppInstanceForPartnerResponse operateAppInstanceForPartnerWithOptions(const Models::OperateAppInstanceForPartnerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 合作伙伴操作应用
       *
       * @param request OperateAppInstanceForPartnerRequest
       * @return OperateAppInstanceForPartnerResponse
       */
      Models::OperateAppInstanceForPartnerResponse operateAppInstanceForPartner(const Models::OperateAppInstanceForPartnerRequest &request);

      /**
       * @summary 合作伙伴操作应用服务
       *
       * @param request OperateAppServiceForPartnerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateAppServiceForPartnerResponse
       */
      Models::OperateAppServiceForPartnerResponse operateAppServiceForPartnerWithOptions(const Models::OperateAppServiceForPartnerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 合作伙伴操作应用服务
       *
       * @param request OperateAppServiceForPartnerRequest
       * @return OperateAppServiceForPartnerResponse
       */
      Models::OperateAppServiceForPartnerResponse operateAppServiceForPartner(const Models::OperateAppServiceForPartnerRequest &request);

      /**
       * @summary 切换模板点赞统计
       *
       * @param request OperateAppTemplateLikeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateAppTemplateLikeResponse
       */
      Models::OperateAppTemplateLikeResponse operateAppTemplateLikeWithOptions(const Models::OperateAppTemplateLikeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 切换模板点赞统计
       *
       * @param request OperateAppTemplateLikeRequest
       * @return OperateAppTemplateLikeResponse
       */
      Models::OperateAppTemplateLikeResponse operateAppTemplateLike(const Models::OperateAppTemplateLikeRequest &request);

      /**
       * @summary 通用Supabase操作
       *
       * @param request OperateSupabaseForAdminRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateSupabaseForAdminResponse
       */
      Models::OperateSupabaseForAdminResponse operateSupabaseForAdminWithOptions(const Models::OperateSupabaseForAdminRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通用Supabase操作
       *
       * @param request OperateSupabaseForAdminRequest
       * @return OperateSupabaseForAdminResponse
       */
      Models::OperateSupabaseForAdminResponse operateSupabaseForAdmin(const Models::OperateSupabaseForAdminRequest &request);

      /**
       * @summary 发布应用实例
       *
       * @param request PublishAppInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishAppInstanceResponse
       */
      Models::PublishAppInstanceResponse publishAppInstanceWithOptions(const Models::PublishAppInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 发布应用实例
       *
       * @param request PublishAppInstanceRequest
       * @return PublishAppInstanceResponse
       */
      Models::PublishAppInstanceResponse publishAppInstance(const Models::PublishAppInstanceRequest &request);

      /**
       * @summary 推送资源计量数据
       *
       * @param request PushResourceMeasureRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PushResourceMeasureResponse
       */
      Models::PushResourceMeasureResponse pushResourceMeasureWithOptions(const Models::PushResourceMeasureRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 推送资源计量数据
       *
       * @param request PushResourceMeasureRequest
       * @return PushResourceMeasureResponse
       */
      Models::PushResourceMeasureResponse pushResourceMeasure(const Models::PushResourceMeasureRequest &request);

      /**
       * @summary 查询灵感值获取明细
       *
       * @param request QueryInspirationAccountDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryInspirationAccountDetailsResponse
       */
      Models::QueryInspirationAccountDetailsResponse queryInspirationAccountDetailsWithOptions(const Models::QueryInspirationAccountDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询灵感值获取明细
       *
       * @param request QueryInspirationAccountDetailsRequest
       * @return QueryInspirationAccountDetailsResponse
       */
      Models::QueryInspirationAccountDetailsResponse queryInspirationAccountDetails(const Models::QueryInspirationAccountDetailsRequest &request);

      /**
       * @summary 查询灵感值余额总览
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryInspirationBalanceResponse
       */
      Models::QueryInspirationBalanceResponse queryInspirationBalanceWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询灵感值余额总览
       *
       * @return QueryInspirationBalanceResponse
       */
      Models::QueryInspirationBalanceResponse queryInspirationBalance();

      /**
       * @summary 查询灵感值消耗明细
       *
       * @param request QueryInspirationConsumeRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryInspirationConsumeRecordsResponse
       */
      Models::QueryInspirationConsumeRecordsResponse queryInspirationConsumeRecordsWithOptions(const Models::QueryInspirationConsumeRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询灵感值消耗明细
       *
       * @param request QueryInspirationConsumeRecordsRequest
       * @return QueryInspirationConsumeRecordsResponse
       */
      Models::QueryInspirationConsumeRecordsResponse queryInspirationConsumeRecords(const Models::QueryInspirationConsumeRecordsRequest &request);

      /**
       * @summary 查询素材中心文件夹树结构
       *
       * @param request QueryMaterialDirectoryTreeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMaterialDirectoryTreeResponse
       */
      Models::QueryMaterialDirectoryTreeResponse queryMaterialDirectoryTreeWithOptions(const Models::QueryMaterialDirectoryTreeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询素材中心文件夹树结构
       *
       * @param request QueryMaterialDirectoryTreeRequest
       * @return QueryMaterialDirectoryTreeResponse
       */
      Models::QueryMaterialDirectoryTreeResponse queryMaterialDirectoryTree(const Models::QueryMaterialDirectoryTreeRequest &request);

      /**
       * @summary 查询素材文件详情
       *
       * @param request QueryMaterialFileDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMaterialFileDetailResponse
       */
      Models::QueryMaterialFileDetailResponse queryMaterialFileDetailWithOptions(const Models::QueryMaterialFileDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询素材文件详情
       *
       * @param request QueryMaterialFileDetailRequest
       * @return QueryMaterialFileDetailResponse
       */
      Models::QueryMaterialFileDetailResponse queryMaterialFileDetail(const Models::QueryMaterialFileDetailRequest &request);

      /**
       * @summary Query Material File List
       *
       * @param tmpReq QueryMaterialFileListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMaterialFileListResponse
       */
      Models::QueryMaterialFileListResponse queryMaterialFileListWithOptions(const Models::QueryMaterialFileListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Material File List
       *
       * @param request QueryMaterialFileListRequest
       * @return QueryMaterialFileListResponse
       */
      Models::QueryMaterialFileListResponse queryMaterialFileList(const Models::QueryMaterialFileListRequest &request);

      /**
       * @summary 查询素材中心文件概要信息
       *
       * @param tmpReq QueryMaterialFileSummaryInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMaterialFileSummaryInfoResponse
       */
      Models::QueryMaterialFileSummaryInfoResponse queryMaterialFileSummaryInfoWithOptions(const Models::QueryMaterialFileSummaryInfoRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询素材中心文件概要信息
       *
       * @param request QueryMaterialFileSummaryInfoRequest
       * @return QueryMaterialFileSummaryInfoResponse
       */
      Models::QueryMaterialFileSummaryInfoResponse queryMaterialFileSummaryInfo(const Models::QueryMaterialFileSummaryInfoRequest &request);

      /**
       * @summary 查询素材生产任务详情
       *
       * @param request QueryMaterialTaskDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMaterialTaskDetailResponse
       */
      Models::QueryMaterialTaskDetailResponse queryMaterialTaskDetailWithOptions(const Models::QueryMaterialTaskDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询素材生产任务详情
       *
       * @param request QueryMaterialTaskDetailRequest
       * @return QueryMaterialTaskDetailResponse
       */
      Models::QueryMaterialTaskDetailResponse queryMaterialTaskDetail(const Models::QueryMaterialTaskDetailRequest &request);

      /**
       * @summary 查询素材生产任务列表
       *
       * @param tmpReq QueryMaterialTaskListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMaterialTaskListResponse
       */
      Models::QueryMaterialTaskListResponse queryMaterialTaskListWithOptions(const Models::QueryMaterialTaskListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询素材生产任务列表
       *
       * @param request QueryMaterialTaskListRequest
       * @return QueryMaterialTaskListResponse
       */
      Models::QueryMaterialTaskListResponse queryMaterialTaskList(const Models::QueryMaterialTaskListRequest &request);

      /**
       * @summary 查询Supabase Auth配置信息
       *
       * @param request QuerySupabaseAuthConfigsForAdminRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySupabaseAuthConfigsForAdminResponse
       */
      Models::QuerySupabaseAuthConfigsForAdminResponse querySupabaseAuthConfigsForAdminWithOptions(const Models::QuerySupabaseAuthConfigsForAdminRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Supabase Auth配置信息
       *
       * @param request QuerySupabaseAuthConfigsForAdminRequest
       * @return QuerySupabaseAuthConfigsForAdminResponse
       */
      Models::QuerySupabaseAuthConfigsForAdminResponse querySupabaseAuthConfigsForAdmin(const Models::QuerySupabaseAuthConfigsForAdminRequest &request);

      /**
       * @summary 查询Supabase配置信息
       *
       * @param request QuerySupabaseConfigsForAdminRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySupabaseConfigsForAdminResponse
       */
      Models::QuerySupabaseConfigsForAdminResponse querySupabaseConfigsForAdminWithOptions(const Models::QuerySupabaseConfigsForAdminRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Supabase配置信息
       *
       * @param request QuerySupabaseConfigsForAdminRequest
       * @return QuerySupabaseConfigsForAdminResponse
       */
      Models::QuerySupabaseConfigsForAdminResponse querySupabaseConfigsForAdmin(const Models::QuerySupabaseConfigsForAdminRequest &request);

      /**
       * @summary 查询Supabase实例信息
       *
       * @param request QuerySupabaseInstanceInfoForAdminRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySupabaseInstanceInfoForAdminResponse
       */
      Models::QuerySupabaseInstanceInfoForAdminResponse querySupabaseInstanceInfoForAdminWithOptions(const Models::QuerySupabaseInstanceInfoForAdminRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Supabase实例信息
       *
       * @param request QuerySupabaseInstanceInfoForAdminRequest
       * @return QuerySupabaseInstanceInfoForAdminResponse
       */
      Models::QuerySupabaseInstanceInfoForAdminResponse querySupabaseInstanceInfoForAdmin(const Models::QuerySupabaseInstanceInfoForAdminRequest &request);

      /**
       * @summary 重新连接AI对话
       *
       * @param request ReconnectAppChatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReconnectAppChatResponse
       */
      FutureGenerator<Models::ReconnectAppChatResponse> reconnectAppChatWithSSE(const Models::ReconnectAppChatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重新连接AI对话
       *
       * @param request ReconnectAppChatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReconnectAppChatResponse
       */
      Models::ReconnectAppChatResponse reconnectAppChatWithOptions(const Models::ReconnectAppChatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重新连接AI对话
       *
       * @param request ReconnectAppChatRequest
       * @return ReconnectAppChatResponse
       */
      Models::ReconnectAppChatResponse reconnectAppChat(const Models::ReconnectAppChatRequest &request);

      /**
       * @summary Refresh ticket
       *
       * @param request RefreshAppInstanceTicketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefreshAppInstanceTicketResponse
       */
      Models::RefreshAppInstanceTicketResponse refreshAppInstanceTicketWithOptions(const Models::RefreshAppInstanceTicketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Refresh ticket
       *
       * @param request RefreshAppInstanceTicketRequest
       * @return RefreshAppInstanceTicketResponse
       */
      Models::RefreshAppInstanceTicketResponse refreshAppInstanceTicket(const Models::RefreshAppInstanceTicketRequest &request);

      /**
       * @summary 渠道业务退款接口
       *
       * @param request RefundAppInstanceForPartnerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefundAppInstanceForPartnerResponse
       */
      Models::RefundAppInstanceForPartnerResponse refundAppInstanceForPartnerWithOptions(const Models::RefundAppInstanceForPartnerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 渠道业务退款接口
       *
       * @param request RefundAppInstanceForPartnerRequest
       * @return RefundAppInstanceForPartnerResponse
       */
      Models::RefundAppInstanceForPartnerResponse refundAppInstanceForPartner(const Models::RefundAppInstanceForPartnerRequest &request);

      /**
       * @summary Renewal of website building instance
       *
       * @param request RenewAppInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewAppInstanceResponse
       */
      Models::RenewAppInstanceResponse renewAppInstanceWithOptions(const Models::RenewAppInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renewal of website building instance
       *
       * @param request RenewAppInstanceRequest
       * @return RenewAppInstanceResponse
       */
      Models::RenewAppInstanceResponse renewAppInstance(const Models::RenewAppInstanceRequest &request);

      /**
       * @summary 续期/刷新沙箱环境
       *
       * @param request RenewAppSandboxRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewAppSandboxResponse
       */
      Models::RenewAppSandboxResponse renewAppSandboxWithOptions(const Models::RenewAppSandboxRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 续期/刷新沙箱环境
       *
       * @param request RenewAppSandboxRequest
       * @return RenewAppSandboxResponse
       */
      Models::RenewAppSandboxResponse renewAppSandbox(const Models::RenewAppSandboxRequest &request);

      /**
       * @summary 代码快照回滚
       *
       * @param request RollbackAppCodeSnapshotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RollbackAppCodeSnapshotResponse
       */
      Models::RollbackAppCodeSnapshotResponse rollbackAppCodeSnapshotWithOptions(const Models::RollbackAppCodeSnapshotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 代码快照回滚
       *
       * @param request RollbackAppCodeSnapshotRequest
       * @return RollbackAppCodeSnapshotResponse
       */
      Models::RollbackAppCodeSnapshotResponse rollbackAppCodeSnapshot(const Models::RollbackAppCodeSnapshotRequest &request);

      /**
       * @summary 回滚应用实例发布
       *
       * @param request RollbackAppInstancePublishRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RollbackAppInstancePublishResponse
       */
      Models::RollbackAppInstancePublishResponse rollbackAppInstancePublishWithOptions(const Models::RollbackAppInstancePublishRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 回滚应用实例发布
       *
       * @param request RollbackAppInstancePublishRequest
       * @return RollbackAppInstancePublishResponse
       */
      Models::RollbackAppInstancePublishResponse rollbackAppInstancePublish(const Models::RollbackAppInstancePublishRequest &request);

      /**
       * @summary 保存需求
       *
       * @param request SaveAppRequirementRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveAppRequirementResponse
       */
      Models::SaveAppRequirementResponse saveAppRequirementWithOptions(const Models::SaveAppRequirementRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 保存需求
       *
       * @param request SaveAppRequirementRequest
       * @return SaveAppRequirementResponse
       */
      Models::SaveAppRequirementResponse saveAppRequirement(const Models::SaveAppRequirementRequest &request);

      /**
       * @summary 保存Supabase密钥
       *
       * @param request SaveAppSupabaseSecretsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveAppSupabaseSecretsResponse
       */
      Models::SaveAppSupabaseSecretsResponse saveAppSupabaseSecretsWithOptions(const Models::SaveAppSupabaseSecretsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 保存Supabase密钥
       *
       * @param request SaveAppSupabaseSecretsRequest
       * @return SaveAppSupabaseSecretsResponse
       */
      Models::SaveAppSupabaseSecretsResponse saveAppSupabaseSecrets(const Models::SaveAppSupabaseSecretsRequest &request);

      /**
       * @summary 图片检索
       *
       * @param tmpReq SearchImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchImageResponse
       */
      Models::SearchImageResponse searchImageWithOptions(const Models::SearchImageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 图片检索
       *
       * @param request SearchImageRequest
       * @return SearchImageResponse
       */
      Models::SearchImageResponse searchImage(const Models::SearchImageRequest &request);

      /**
       * @summary Set the SSL certificate for a domain
       *
       * @param request SetAppDomainCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetAppDomainCertificateResponse
       */
      Models::SetAppDomainCertificateResponse setAppDomainCertificateWithOptions(const Models::SetAppDomainCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Set the SSL certificate for a domain
       *
       * @param request SetAppDomainCertificateRequest
       * @return SetAppDomainCertificateResponse
       */
      Models::SetAppDomainCertificateResponse setAppDomainCertificate(const Models::SetAppDomainCertificateRequest &request);

      /**
       * @summary 提交SEO索引
       *
       * @param request SubmitAppSeoIndexRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitAppSeoIndexResponse
       */
      Models::SubmitAppSeoIndexResponse submitAppSeoIndexWithOptions(const Models::SubmitAppSeoIndexRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交SEO索引
       *
       * @param request SubmitAppSeoIndexRequest
       * @return SubmitAppSeoIndexResponse
       */
      Models::SubmitAppSeoIndexResponse submitAppSeoIndex(const Models::SubmitAppSeoIndexRequest &request);

      /**
       * @summary 提交素材生产任务
       *
       * @param request SubmitMaterialTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitMaterialTaskResponse
       */
      Models::SubmitMaterialTaskResponse submitMaterialTaskWithOptions(const Models::SubmitMaterialTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交素材生产任务
       *
       * @param request SubmitMaterialTaskRequest
       * @return SubmitMaterialTaskResponse
       */
      Models::SubmitMaterialTaskResponse submitMaterialTask(const Models::SubmitMaterialTaskRequest &request);

      /**
       * @summary 切换到指定对话
       *
       * @param request SwitchAppConversationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchAppConversationResponse
       */
      Models::SwitchAppConversationResponse switchAppConversationWithOptions(const Models::SwitchAppConversationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 切换到指定对话
       *
       * @param request SwitchAppConversationRequest
       * @return SwitchAppConversationResponse
       */
      Models::SwitchAppConversationResponse switchAppConversation(const Models::SwitchAppConversationRequest &request);

      /**
       * @summary 合作伙伴同步应用实例
       *
       * @param tmpReq SyncAppInstanceForPartnerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SyncAppInstanceForPartnerResponse
       */
      Models::SyncAppInstanceForPartnerResponse syncAppInstanceForPartnerWithOptions(const Models::SyncAppInstanceForPartnerRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 合作伙伴同步应用实例
       *
       * @param request SyncAppInstanceForPartnerRequest
       * @return SyncAppInstanceForPartnerResponse
       */
      Models::SyncAppInstanceForPartnerResponse syncAppInstanceForPartner(const Models::SyncAppInstanceForPartnerRequest &request);

      /**
       * @summary Unbind Application Domain
       *
       * @param request UnbindAppDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindAppDomainResponse
       */
      Models::UnbindAppDomainResponse unbindAppDomainWithOptions(const Models::UnbindAppDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbind Application Domain
       *
       * @param request UnbindAppDomainRequest
       * @return UnbindAppDomainResponse
       */
      Models::UnbindAppDomainResponse unbindAppDomain(const Models::UnbindAppDomainRequest &request);

      /**
       * @summary 更新消息内容
       *
       * @param request UpdateAppChatMessageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAppChatMessageResponse
       */
      Models::UpdateAppChatMessageResponse updateAppChatMessageWithOptions(const Models::UpdateAppChatMessageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新消息内容
       *
       * @param request UpdateAppChatMessageRequest
       * @return UpdateAppChatMessageResponse
       */
      Models::UpdateAppChatMessageResponse updateAppChatMessage(const Models::UpdateAppChatMessageRequest &request);

      /**
       * @summary 编辑JSX代码
       *
       * @param request UpdateAppCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAppCodeResponse
       */
      Models::UpdateAppCodeResponse updateAppCodeWithOptions(const Models::UpdateAppCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 编辑JSX代码
       *
       * @param request UpdateAppCodeRequest
       * @return UpdateAppCodeResponse
       */
      Models::UpdateAppCodeResponse updateAppCode(const Models::UpdateAppCodeRequest &request);

      /**
       * @summary 更新文件
       *
       * @param request UpdateAppFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAppFileResponse
       */
      Models::UpdateAppFileResponse updateAppFileWithOptions(const Models::UpdateAppFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新文件
       *
       * @param request UpdateAppFileRequest
       * @return UpdateAppFileResponse
       */
      Models::UpdateAppFileResponse updateAppFile(const Models::UpdateAppFileRequest &request);

      /**
       * @summary 建站实例变配
       *
       * @param tmpReq UpdateAppInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAppInstanceResponse
       */
      Models::UpdateAppInstanceResponse updateAppInstanceWithOptions(const Models::UpdateAppInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 建站实例变配
       *
       * @param request UpdateAppInstanceRequest
       * @return UpdateAppInstanceResponse
       */
      Models::UpdateAppInstanceResponse updateAppInstance(const Models::UpdateAppInstanceRequest &request);

      /**
       * @summary Update SEO Index Status
       *
       * @description WanXiaoZhi 2.0 AI Conversation
       *
       * @param request UpdateAppSeoStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAppSeoStatusResponse
       */
      Models::UpdateAppSeoStatusResponse updateAppSeoStatusWithOptions(const Models::UpdateAppSeoStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update SEO Index Status
       *
       * @description WanXiaoZhi 2.0 AI Conversation
       *
       * @param request UpdateAppSeoStatusRequest
       * @return UpdateAppSeoStatusResponse
       */
      Models::UpdateAppSeoStatusResponse updateAppSeoStatus(const Models::UpdateAppSeoStatusRequest &request);

      /**
       * @summary Supabase认证配置更新
       *
       * @param request UpdateAppSupabaseAuthConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAppSupabaseAuthConfigResponse
       */
      Models::UpdateAppSupabaseAuthConfigResponse updateAppSupabaseAuthConfigWithOptions(const Models::UpdateAppSupabaseAuthConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Supabase认证配置更新
       *
       * @param request UpdateAppSupabaseAuthConfigRequest
       * @return UpdateAppSupabaseAuthConfigResponse
       */
      Models::UpdateAppSupabaseAuthConfigResponse updateAppSupabaseAuthConfig(const Models::UpdateAppSupabaseAuthConfigRequest &request);

      /**
       * @summary 更新Supabase密钥
       *
       * @param request UpdateAppSupabaseSecretRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAppSupabaseSecretResponse
       */
      Models::UpdateAppSupabaseSecretResponse updateAppSupabaseSecretWithOptions(const Models::UpdateAppSupabaseSecretRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新Supabase密钥
       *
       * @param request UpdateAppSupabaseSecretRequest
       * @return UpdateAppSupabaseSecretResponse
       */
      Models::UpdateAppSupabaseSecretResponse updateAppSupabaseSecret(const Models::UpdateAppSupabaseSecretRequest &request);

      /**
       * @summary 更新绑定小程序信息
       *
       * @param request UpdateMiniAppBindingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMiniAppBindingResponse
       */
      Models::UpdateMiniAppBindingResponse updateMiniAppBindingWithOptions(const Models::UpdateMiniAppBindingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新绑定小程序信息
       *
       * @param request UpdateMiniAppBindingRequest
       * @return UpdateMiniAppBindingResponse
       */
      Models::UpdateMiniAppBindingResponse updateMiniAppBinding(const Models::UpdateMiniAppBindingRequest &request);

      /**
       * @summary 上传到站点根目录
       *
       * @param request UploadAppSiteValidationFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadAppSiteValidationFileResponse
       */
      Models::UploadAppSiteValidationFileResponse uploadAppSiteValidationFileWithOptions(const Models::UploadAppSiteValidationFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 上传到站点根目录
       *
       * @param request UploadAppSiteValidationFileRequest
       * @return UploadAppSiteValidationFileResponse
       */
      Models::UploadAppSiteValidationFileResponse uploadAppSiteValidationFile(const Models::UploadAppSiteValidationFileRequest &request);

      /**
       * @summary 上传素材文件
       *
       * @param request UploadMaterialFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadMaterialFileResponse
       */
      Models::UploadMaterialFileResponse uploadMaterialFileWithOptions(const Models::UploadMaterialFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 上传素材文件
       *
       * @param request UploadMaterialFileRequest
       * @return UploadMaterialFileResponse
       */
      Models::UploadMaterialFileResponse uploadMaterialFile(const Models::UploadMaterialFileRequest &request);
  };
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
