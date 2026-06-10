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
       * @summary Assign a Supabase instance to a resource
       *
       * @description Query the Supabase instance information corresponding to the resource
       *
       * @param request AllocateSupabaseForAdminRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AllocateSupabaseForAdminResponse
       */
      Models::AllocateSupabaseForAdminResponse allocateSupabaseForAdminWithOptions(const Models::AllocateSupabaseForAdminRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Assign a Supabase instance to a resource
       *
       * @description Query the Supabase instance information corresponding to the resource
       *
       * @param request AllocateSupabaseForAdminRequest
       * @return AllocateSupabaseForAdminResponse
       */
      Models::AllocateSupabaseForAdminResponse allocateSupabaseForAdmin(const Models::AllocateSupabaseForAdminRequest &request);

      /**
       * @summary Batch check resource usage
       *
       * @description Operation resource-related Supabase instance information
       *
       * @param request BatchCheckResourceMeasureRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchCheckResourceMeasureResponse
       */
      Models::BatchCheckResourceMeasureResponse batchCheckResourceMeasureWithOptions(const Models::BatchCheckResourceMeasureRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Batch check resource usage
       *
       * @description Operation resource-related Supabase instance information
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
       * @summary Check resource usage
       *
       * @description Query the Supabase instance information corresponding to the resource
       *
       * @param request CheckResourceMeasureRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckResourceMeasureResponse
       */
      Models::CheckResourceMeasureResponse checkResourceMeasureWithOptions(const Models::CheckResourceMeasureRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Check resource usage
       *
       * @description Query the Supabase instance information corresponding to the resource
       *
       * @param request CheckResourceMeasureRequest
       * @return CheckResourceMeasureResponse
       */
      Models::CheckResourceMeasureResponse checkResourceMeasure(const Models::CheckResourceMeasureRequest &request);

      /**
       * @summary Validate user resource metering
       *
       * @description Query the Supabase instance information corresponding to the resource
       *
       * @param request CheckUserResourceMeasureRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckUserResourceMeasureResponse
       */
      Models::CheckUserResourceMeasureResponse checkUserResourceMeasureWithOptions(const Models::CheckUserResourceMeasureRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Validate user resource metering
       *
       * @description Query the Supabase instance information corresponding to the resource
       *
       * @param request CheckUserResourceMeasureRequest
       * @return CheckUserResourceMeasureResponse
       */
      Models::CheckUserResourceMeasureResponse checkUserResourceMeasure(const Models::CheckUserResourceMeasureRequest &request);

      /**
       * @summary 试用转正
       *
       * @description 查询应用实例信息
       *
       * @param request ConfirmAppInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfirmAppInstanceResponse
       */
      Models::ConfirmAppInstanceResponse confirmAppInstanceWithOptions(const Models::ConfirmAppInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 试用转正
       *
       * @description 查询应用实例信息
       *
       * @param request ConfirmAppInstanceRequest
       * @return ConfirmAppInstanceResponse
       */
      Models::ConfirmAppInstanceResponse confirmAppInstance(const Models::ConfirmAppInstanceRequest &request);

      /**
       * @summary 复制插件配置
       *
       * @description 获取生码插件配置信息
       *
       * @param request CopyAppPluginConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CopyAppPluginConfigResponse
       */
      Models::CopyAppPluginConfigResponse copyAppPluginConfigWithOptions(const Models::CopyAppPluginConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 复制插件配置
       *
       * @description 获取生码插件配置信息
       *
       * @param request CopyAppPluginConfigRequest
       * @return CopyAppPluginConfigResponse
       */
      Models::CopyAppPluginConfigResponse copyAppPluginConfig(const Models::CopyAppPluginConfigRequest &request);

      /**
       * @summary Initiate an AI employee conversation asynchronously
       *
       * @description Wan Xiaozhi 2.0 AI conversation
       *
       * @param request CreateAIStaffChatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAIStaffChatResponse
       */
      Models::CreateAIStaffChatResponse createAIStaffChatWithOptions(const Models::CreateAIStaffChatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initiate an AI employee conversation asynchronously
       *
       * @description Wan Xiaozhi 2.0 AI conversation
       *
       * @param request CreateAIStaffChatRequest
       * @return CreateAIStaffChatResponse
       */
      Models::CreateAIStaffChatResponse createAIStaffChat(const Models::CreateAIStaffChatRequest &request);

      /**
       * @summary Create an AI agent session
       *
       * @description Wan Xiaozhi 2.0 API for creating an AI session
       *
       * @param request CreateAIStaffConversationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAIStaffConversationResponse
       */
      Models::CreateAIStaffConversationResponse createAIStaffConversationWithOptions(const Models::CreateAIStaffConversationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create an AI agent session
       *
       * @description Wan Xiaozhi 2.0 API for creating an AI session
       *
       * @param request CreateAIStaffConversationRequest
       * @return CreateAIStaffConversationResponse
       */
      Models::CreateAIStaffConversationResponse createAIStaffConversation(const Models::CreateAIStaffConversationRequest &request);

      /**
       * @summary Create Application Assistant Agent
       *
       * @description Obtain the configuration information of the code generation plugin
       *
       * @param request CreateAppAssistantAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAppAssistantAgentResponse
       */
      Models::CreateAppAssistantAgentResponse createAppAssistantAgentWithOptions(const Models::CreateAppAssistantAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create Application Assistant Agent
       *
       * @description Obtain the configuration information of the code generation plugin
       *
       * @param request CreateAppAssistantAgentRequest
       * @return CreateAppAssistantAgentResponse
       */
      Models::CreateAppAssistantAgentResponse createAppAssistantAgent(const Models::CreateAppAssistantAgentRequest &request);

      /**
       * @summary Generate application assistant SSO logon
       *
       * @description Obtain the configuration information of the code generation plugin
       *
       * @param request CreateAppAssistantAgentSsoLoginRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAppAssistantAgentSsoLoginResponse
       */
      Models::CreateAppAssistantAgentSsoLoginResponse createAppAssistantAgentSsoLoginWithOptions(const Models::CreateAppAssistantAgentSsoLoginRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generate application assistant SSO logon
       *
       * @description Obtain the configuration information of the code generation plugin
       *
       * @param request CreateAppAssistantAgentSsoLoginRequest
       * @return CreateAppAssistantAgentSsoLoginResponse
       */
      Models::CreateAppAssistantAgentSsoLoginResponse createAppAssistantAgentSsoLogin(const Models::CreateAppAssistantAgentSsoLoginRequest &request);

      /**
       * @summary Wan Xiaozhi initiates an AI conversation
       *
       * @param request CreateAppChatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAppChatResponse
       */
      FutureGenerator<Models::CreateAppChatResponse> createAppChatWithSSE(const Models::CreateAppChatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Wan Xiaozhi initiates an AI conversation
       *
       * @param request CreateAppChatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAppChatResponse
       */
      Models::CreateAppChatResponse createAppChatWithOptions(const Models::CreateAppChatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Wan Xiaozhi initiates an AI conversation
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
       * @summary Create an LLM gateway API key for an application instance
       *
       * @description Obtain the configuration information of the code generation plugin
       *
       * @param request CreateAppLlmApiKeyForPartnerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAppLlmApiKeyForPartnerResponse
       */
      Models::CreateAppLlmApiKeyForPartnerResponse createAppLlmApiKeyForPartnerWithOptions(const Models::CreateAppLlmApiKeyForPartnerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create an LLM gateway API key for an application instance
       *
       * @description Obtain the configuration information of the code generation plugin
       *
       * @param request CreateAppLlmApiKeyForPartnerRequest
       * @return CreateAppLlmApiKeyForPartnerResponse
       */
      Models::CreateAppLlmApiKeyForPartnerResponse createAppLlmApiKeyForPartner(const Models::CreateAppLlmApiKeyForPartnerRequest &request);

      /**
       * @summary Activate the Wanxiao Zhi Inspiration Value service
       *
       * @description Obtain the configuration information of the code generation plugin
       *
       * @param request CreateAppTokenServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAppTokenServiceResponse
       */
      Models::CreateAppTokenServiceResponse createAppTokenServiceWithOptions(const Models::CreateAppTokenServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Activate the Wanxiao Zhi Inspiration Value service
       *
       * @description Obtain the configuration information of the code generation plugin
       *
       * @param request CreateAppTokenServiceRequest
       * @return CreateAppTokenServiceResponse
       */
      Models::CreateAppTokenServiceResponse createAppTokenService(const Models::CreateAppTokenServiceRequest &request);

      /**
       * @summary Commit a job to create a logo.
       *
       * @param request CreateLogoTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLogoTaskResponse
       */
      Models::CreateLogoTaskResponse createLogoTaskWithOptions(const Models::CreateLogoTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Commit a job to create a logo.
       *
       * @param request CreateLogoTaskRequest
       * @return CreateLogoTaskResponse
       */
      Models::CreateLogoTaskResponse createLogoTask(const Models::CreateLogoTaskRequest &request);

      /**
       * @summary Create a subfolder under the parent folder.
       *
       * @param request CreateMaterialDirectoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMaterialDirectoryResponse
       */
      Models::CreateMaterialDirectoryResponse createMaterialDirectoryWithOptions(const Models::CreateMaterialDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a subfolder under the parent folder.
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
       * @description 查询应用实例信息
       *
       * @param request DeleteAppFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAppFileResponse
       */
      Models::DeleteAppFileResponse deleteAppFileWithOptions(const Models::DeleteAppFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除文件
       *
       * @description 查询应用实例信息
       *
       * @param request DeleteAppFileRequest
       * @return DeleteAppFileResponse
       */
      Models::DeleteAppFileResponse deleteAppFile(const Models::DeleteAppFileRequest &request);

      /**
       * @summary Delete file
       *
       * @description Query application instance information
       *
       * @param request DeleteAppInstanceFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAppInstanceFileResponse
       */
      Models::DeleteAppInstanceFileResponse deleteAppInstanceFileWithOptions(const Models::DeleteAppInstanceFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete file
       *
       * @description Query application instance information
       *
       * @param request DeleteAppInstanceFileRequest
       * @return DeleteAppInstanceFileResponse
       */
      Models::DeleteAppInstanceFileResponse deleteAppInstanceFile(const Models::DeleteAppInstanceFileRequest &request);

      /**
       * @summary Delete Supabase key
       *
       * @description Operation resource corresponds to the supabase instance information
       *
       * @param request DeleteAppSupabaseSecretsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAppSupabaseSecretsResponse
       */
      Models::DeleteAppSupabaseSecretsResponse deleteAppSupabaseSecretsWithOptions(const Models::DeleteAppSupabaseSecretsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete Supabase key
       *
       * @description Operation resource corresponds to the supabase instance information
       *
       * @param request DeleteAppSupabaseSecretsRequest
       * @return DeleteAppSupabaseSecretsResponse
       */
      Models::DeleteAppSupabaseSecretsResponse deleteAppSupabaseSecrets(const Models::DeleteAppSupabaseSecretsRequest &request);

      /**
       * @summary Delete a material folder
       *
       * @param request DeleteMaterialDirectoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMaterialDirectoryResponse
       */
      Models::DeleteMaterialDirectoryResponse deleteMaterialDirectoryWithOptions(const Models::DeleteMaterialDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete a material folder
       *
       * @param request DeleteMaterialDirectoryRequest
       * @return DeleteMaterialDirectoryResponse
       */
      Models::DeleteMaterialDirectoryResponse deleteMaterialDirectory(const Models::DeleteMaterialDirectoryRequest &request);

      /**
       * @summary Delete Material Generation Job
       *
       * @param tmpReq DeleteMaterialTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMaterialTaskResponse
       */
      Models::DeleteMaterialTaskResponse deleteMaterialTaskWithOptions(const Models::DeleteMaterialTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete Material Generation Job
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
       * @summary Edit plugin configuration.
       *
       * @param request EditPluginConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EditPluginConfigResponse
       */
      Models::EditPluginConfigResponse editPluginConfigWithOptions(const Models::EditPluginConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Edit plugin configuration.
       *
       * @param request EditPluginConfigRequest
       * @return EditPluginConfigResponse
       */
      Models::EditPluginConfigResponse editPluginConfig(const Models::EditPluginConfigRequest &request);

      /**
       * @summary Export material files
       *
       * @param tmpReq ExportMaterialFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportMaterialFileResponse
       */
      Models::ExportMaterialFileResponse exportMaterialFileWithOptions(const Models::ExportMaterialFileRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Export material files
       *
       * @param request ExportMaterialFileRequest
       * @return ExportMaterialFileResponse
       */
      Models::ExportMaterialFileResponse exportMaterialFile(const Models::ExportMaterialFileRequest &request);

      /**
       * @summary WanXiaoZhi 2.0 - Obtain Site Preview URL
       *
       * @description WanXiaoZhi 2.0 - Obtain Site Preview URL
       *
       * @param request GetAIStaffPreviewUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAIStaffPreviewUrlResponse
       */
      Models::GetAIStaffPreviewUrlResponse getAIStaffPreviewUrlWithOptions(const Models::GetAIStaffPreviewUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary WanXiaoZhi 2.0 - Obtain Site Preview URL
       *
       * @description WanXiaoZhi 2.0 - Obtain Site Preview URL
       *
       * @param request GetAIStaffPreviewUrlRequest
       * @return GetAIStaffPreviewUrlResponse
       */
      Models::GetAIStaffPreviewUrlResponse getAIStaffPreviewUrl(const Models::GetAIStaffPreviewUrlRequest &request);

      /**
       * @summary Retrieve code workspace details
       *
       * @description Query application instance information
       *
       * @param request GetAppCodeWorkspaceDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppCodeWorkspaceDetailResponse
       */
      Models::GetAppCodeWorkspaceDetailResponse getAppCodeWorkspaceDetailWithOptions(const Models::GetAppCodeWorkspaceDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve code workspace details
       *
       * @description Query application instance information
       *
       * @param request GetAppCodeWorkspaceDetailRequest
       * @return GetAppCodeWorkspaceDetailResponse
       */
      Models::GetAppCodeWorkspaceDetailResponse getAppCodeWorkspaceDetail(const Models::GetAppCodeWorkspaceDetailRequest &request);

      /**
       * @summary Retrieve conversation details
       *
       * @description Wan Xiaozhi 2.0 API for creating an AI session
       *
       * @param request GetAppConversationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppConversationResponse
       */
      Models::GetAppConversationResponse getAppConversationWithOptions(const Models::GetAppConversationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve conversation details
       *
       * @description Wan Xiaozhi 2.0 API for creating an AI session
       *
       * @param request GetAppConversationRequest
       * @return GetAppConversationResponse
       */
      Models::GetAppConversationResponse getAppConversation(const Models::GetAppConversationRequest &request);

      /**
       * @summary Obtain session lock status
       *
       * @description Wan Xiaozhi 2.0 API for creating AI sessions
       *
       * @param request GetAppConversationLockStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppConversationLockStatusResponse
       */
      Models::GetAppConversationLockStatusResponse getAppConversationLockStatusWithOptions(const Models::GetAppConversationLockStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain session lock status
       *
       * @description Wan Xiaozhi 2.0 API for creating AI sessions
       *
       * @param request GetAppConversationLockStatusRequest
       * @return GetAppConversationLockStatusResponse
       */
      Models::GetAppConversationLockStatusResponse getAppConversationLockStatus(const Models::GetAppConversationLockStatusRequest &request);

      /**
       * @summary 查询数据库表结构
       *
       * @description 查询应用实例信息
       *
       * @param request GetAppDatabaseTableSchemasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppDatabaseTableSchemasResponse
       */
      Models::GetAppDatabaseTableSchemasResponse getAppDatabaseTableSchemasWithOptions(const Models::GetAppDatabaseTableSchemasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询数据库表结构
       *
       * @description 查询应用实例信息
       *
       * @param request GetAppDatabaseTableSchemasRequest
       * @return GetAppDatabaseTableSchemasResponse
       */
      Models::GetAppDatabaseTableSchemasResponse getAppDatabaseTableSchemas(const Models::GetAppDatabaseTableSchemasRequest &request);

      /**
       * @summary 读取文件及修改时间
       *
       * @description 获取生码插件配置信息
       *
       * @param request GetAppFileContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppFileContentResponse
       */
      Models::GetAppFileContentResponse getAppFileContentWithOptions(const Models::GetAppFileContentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 读取文件及修改时间
       *
       * @description 获取生码插件配置信息
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
       * @description Query application instance information
       *
       * @param request GetAppInstanceEntitlementRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppInstanceEntitlementResponse
       */
      Models::GetAppInstanceEntitlementResponse getAppInstanceEntitlementWithOptions(const Models::GetAppInstanceEntitlementRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary GetAppInstanceEntitlement
       *
       * @description Query application instance information
       *
       * @param request GetAppInstanceEntitlementRequest
       * @return GetAppInstanceEntitlementResponse
       */
      Models::GetAppInstanceEntitlementResponse getAppInstanceEntitlement(const Models::GetAppInstanceEntitlementRequest &request);

      /**
       * @summary Query application instance information
       *
       * @description 查询应用实例信息
       *
       * @param request GetAppInstanceForAdminRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppInstanceForAdminResponse
       */
      Models::GetAppInstanceForAdminResponse getAppInstanceForAdminWithOptions(const Models::GetAppInstanceForAdminRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query application instance information
       *
       * @description 查询应用实例信息
       *
       * @param request GetAppInstanceForAdminRequest
       * @return GetAppInstanceForAdminResponse
       */
      Models::GetAppInstanceForAdminResponse getAppInstanceForAdmin(const Models::GetAppInstanceForAdminRequest &request);

      /**
       * @summary Query instance details
       *
       * @description Obtain the configuration information of the code generation plugin
       *
       * @param request GetAppInstanceForPartnerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppInstanceForPartnerResponse
       */
      Models::GetAppInstanceForPartnerResponse getAppInstanceForPartnerWithOptions(const Models::GetAppInstanceForPartnerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query instance details
       *
       * @description Obtain the configuration information of the code generation plugin
       *
       * @param request GetAppInstanceForPartnerRequest
       * @return GetAppInstanceForPartnerResponse
       */
      Models::GetAppInstanceForPartnerResponse getAppInstanceForPartner(const Models::GetAppInstanceForPartnerRequest &request);

      /**
       * @summary Obtain a temporary short URL for the application
       *
       * @description Obtain configuration information of the code generation plugin
       *
       * @param request GetAppInstanceTempShortUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppInstanceTempShortUrlResponse
       */
      Models::GetAppInstanceTempShortUrlResponse getAppInstanceTempShortUrlWithOptions(const Models::GetAppInstanceTempShortUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain a temporary short URL for the application
       *
       * @description Obtain configuration information of the code generation plugin
       *
       * @param request GetAppInstanceTempShortUrlRequest
       * @return GetAppInstanceTempShortUrlResponse
       */
      Models::GetAppInstanceTempShortUrlResponse getAppInstanceTempShortUrl(const Models::GetAppInstanceTempShortUrlRequest &request);

      /**
       * @summary Obtain plugin configuration information.
       *
       * @description Obtain the configuration information of the code generation plugin.
       *
       * @param request GetAppPluginConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppPluginConfigResponse
       */
      Models::GetAppPluginConfigResponse getAppPluginConfigWithOptions(const Models::GetAppPluginConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain plugin configuration information.
       *
       * @description Obtain the configuration information of the code generation plugin.
       *
       * @param request GetAppPluginConfigRequest
       * @return GetAppPluginConfigResponse
       */
      Models::GetAppPluginConfigResponse getAppPluginConfig(const Models::GetAppPluginConfigRequest &request);

      /**
       * @summary Query publishing status
       *
       * @description Obtain the configuration information of the code generation plugin
       *
       * @param request GetAppPublishStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppPublishStatusResponse
       */
      Models::GetAppPublishStatusResponse getAppPublishStatusWithOptions(const Models::GetAppPublishStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query publishing status
       *
       * @description Obtain the configuration information of the code generation plugin
       *
       * @param request GetAppPublishStatusRequest
       * @return GetAppPublishStatusResponse
       */
      Models::GetAppPublishStatusResponse getAppPublishStatus(const Models::GetAppPublishStatusRequest &request);

      /**
       * @summary Query recommended products
       *
       * @description Obtain barcode generation plugin configuration information
       *
       * @param request GetAppRecommendedCommoditiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppRecommendedCommoditiesResponse
       */
      Models::GetAppRecommendedCommoditiesResponse getAppRecommendedCommoditiesWithOptions(const Models::GetAppRecommendedCommoditiesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query recommended products
       *
       * @description Obtain barcode generation plugin configuration information
       *
       * @param request GetAppRecommendedCommoditiesRequest
       * @return GetAppRecommendedCommoditiesResponse
       */
      Models::GetAppRecommendedCommoditiesResponse getAppRecommendedCommodities(const Models::GetAppRecommendedCommoditiesRequest &request);

      /**
       * @summary Requirement query
       *
       * @description Obtain barcode generation plugin configuration information
       *
       * @param request GetAppRequirementRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppRequirementResponse
       */
      Models::GetAppRequirementResponse getAppRequirementWithOptions(const Models::GetAppRequirementRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Requirement query
       *
       * @description Obtain barcode generation plugin configuration information
       *
       * @param request GetAppRequirementRequest
       * @return GetAppRequirementResponse
       */
      Models::GetAppRequirementResponse getAppRequirement(const Models::GetAppRequirementRequest &request);

      /**
       * @summary Obtain sandbox preview URL
       *
       * @description Wan Xiaozhi 2.0 - Obtain site preview URL
       *
       * @param request GetAppSandboxPreviewUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppSandboxPreviewUrlResponse
       */
      Models::GetAppSandboxPreviewUrlResponse getAppSandboxPreviewUrlWithOptions(const Models::GetAppSandboxPreviewUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain sandbox preview URL
       *
       * @description Wan Xiaozhi 2.0 - Obtain site preview URL
       *
       * @param request GetAppSandboxPreviewUrlRequest
       * @return GetAppSandboxPreviewUrlResponse
       */
      Models::GetAppSandboxPreviewUrlResponse getAppSandboxPreviewUrl(const Models::GetAppSandboxPreviewUrlRequest &request);

      /**
       * @summary Query SEO index status
       *
       * @description Obtain the configuration information of the code generation plugin
       *
       * @param request GetAppSeoStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppSeoStatusResponse
       */
      Models::GetAppSeoStatusResponse getAppSeoStatusWithOptions(const Models::GetAppSeoStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query SEO index status
       *
       * @description Obtain the configuration information of the code generation plugin
       *
       * @param request GetAppSeoStatusRequest
       * @return GetAppSeoStatusResponse
       */
      Models::GetAppSeoStatusResponse getAppSeoStatus(const Models::GetAppSeoStatusRequest &request);

      /**
       * @summary SEO Index Chart
       *
       * @description Obtain plugin configuration information
       *
       * @param request GetAppSeoTrendsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppSeoTrendsResponse
       */
      Models::GetAppSeoTrendsResponse getAppSeoTrendsWithOptions(const Models::GetAppSeoTrendsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary SEO Index Chart
       *
       * @description Obtain plugin configuration information
       *
       * @param request GetAppSeoTrendsRequest
       * @return GetAppSeoTrendsResponse
       */
      Models::GetAppSeoTrendsResponse getAppSeoTrends(const Models::GetAppSeoTrendsRequest &request);

      /**
       * @summary Retrieve site map
       *
       * @description Retrieve QR code plugin configuration information
       *
       * @param request GetAppSitemapRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppSitemapResponse
       */
      Models::GetAppSitemapResponse getAppSitemapWithOptions(const Models::GetAppSitemapRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve site map
       *
       * @description Retrieve QR code plugin configuration information
       *
       * @param request GetAppSitemapRequest
       * @return GetAppSitemapResponse
       */
      Models::GetAppSitemapResponse getAppSitemap(const Models::GetAppSitemapRequest &request);

      /**
       * @summary Query Supabase authentication settings
       *
       * @description Query the auth configuration information of the Supabase instance corresponding to the resource.
       *
       * @param request GetAppSupabaseAuthConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppSupabaseAuthConfigResponse
       */
      Models::GetAppSupabaseAuthConfigResponse getAppSupabaseAuthConfigWithOptions(const Models::GetAppSupabaseAuthConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Supabase authentication settings
       *
       * @description Query the auth configuration information of the Supabase instance corresponding to the resource.
       *
       * @param request GetAppSupabaseAuthConfigRequest
       * @return GetAppSupabaseAuthConfigResponse
       */
      Models::GetAppSupabaseAuthConfigResponse getAppSupabaseAuthConfig(const Models::GetAppSupabaseAuthConfigRequest &request);

      /**
       * @summary Obtain Supabase instance information
       *
       * @description Query application instance information
       *
       * @param request GetAppSupabaseInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppSupabaseInstanceResponse
       */
      Models::GetAppSupabaseInstanceResponse getAppSupabaseInstanceWithOptions(const Models::GetAppSupabaseInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain Supabase instance information
       *
       * @description Query application instance information
       *
       * @param request GetAppSupabaseInstanceRequest
       * @return GetAppSupabaseInstanceResponse
       */
      Models::GetAppSupabaseInstanceResponse getAppSupabaseInstance(const Models::GetAppSupabaseInstanceRequest &request);

      /**
       * @summary Query Supabase keys
       *
       * @description The supabase instance information corresponding to the operated resource
       *
       * @param request GetAppSupabaseSecretsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppSupabaseSecretsResponse
       */
      Models::GetAppSupabaseSecretsResponse getAppSupabaseSecretsWithOptions(const Models::GetAppSupabaseSecretsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Supabase keys
       *
       * @description The supabase instance information corresponding to the operated resource
       *
       * @param request GetAppSupabaseSecretsRequest
       * @return GetAppSupabaseSecretsResponse
       */
      Models::GetAppSupabaseSecretsResponse getAppSupabaseSecrets(const Models::GetAppSupabaseSecretsRequest &request);

      /**
       * @summary Query template details
       *
       * @description Obtain the configuration information of the code generation plugin
       *
       * @param request GetAppTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppTemplateResponse
       */
      Models::GetAppTemplateResponse getAppTemplateWithOptions(const Models::GetAppTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query template details
       *
       * @description Obtain the configuration information of the code generation plugin
       *
       * @param request GetAppTemplateRequest
       * @return GetAppTemplateResponse
       */
      Models::GetAppTemplateResponse getAppTemplate(const Models::GetAppTemplateRequest &request);

      /**
       * @summary Query the Wan Xiaozhi Inspiration Value service
       *
       * @description Obtain the configuration information of the code generation plugin
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppTokenServiceResponse
       */
      Models::GetAppTokenServiceResponse getAppTokenServiceWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the Wan Xiaozhi Inspiration Value service
       *
       * @description Obtain the configuration information of the code generation plugin
       *
       * @return GetAppTokenServiceResponse
       */
      Models::GetAppTokenServiceResponse getAppTokenService();

      /**
       * @summary Obtain the workspace directory structure
       *
       * @description Query application instance information
       *
       * @param request GetAppWorkspaceDirectoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppWorkspaceDirectoryResponse
       */
      Models::GetAppWorkspaceDirectoryResponse getAppWorkspaceDirectoryWithOptions(const Models::GetAppWorkspaceDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the workspace directory structure
       *
       * @description Query application instance information
       *
       * @param request GetAppWorkspaceDirectoryRequest
       * @return GetAppWorkspaceDirectoryResponse
       */
      Models::GetAppWorkspaceDirectoryResponse getAppWorkspaceDirectory(const Models::GetAppWorkspaceDirectoryRequest &request);

      /**
       * @summary Query the Logo creation job
       *
       * @param request GetCreateLogoTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCreateLogoTaskResponse
       */
      Models::GetCreateLogoTaskResponse getCreateLogoTaskWithOptions(const Models::GetCreateLogoTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the Logo creation job
       *
       * @param request GetCreateLogoTaskRequest
       * @return GetCreateLogoTaskResponse
       */
      Models::GetCreateLogoTaskResponse getCreateLogoTask(const Models::GetCreateLogoTaskRequest &request);

      /**
       * @summary Domain name query API provided to service providers
       *
       * @param request GetDomainInfoForPartnerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDomainInfoForPartnerResponse
       */
      Models::GetDomainInfoForPartnerResponse getDomainInfoForPartnerWithOptions(const Models::GetDomainInfoForPartnerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Domain name query API provided to service providers
       *
       * @param request GetDomainInfoForPartnerRequest
       * @return GetDomainInfoForPartnerResponse
       */
      Models::GetDomainInfoForPartnerResponse getDomainInfoForPartner(const Models::GetDomainInfoForPartnerRequest &request);

      /**
       * @summary Query ICP filing information of a domain name
       *
       * @param request GetIcpFilingInfoForPartnerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIcpFilingInfoForPartnerResponse
       */
      Models::GetIcpFilingInfoForPartnerResponse getIcpFilingInfoForPartnerWithOptions(const Models::GetIcpFilingInfoForPartnerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query ICP filing information of a domain name
       *
       * @param request GetIcpFilingInfoForPartnerRequest
       * @return GetIcpFilingInfoForPartnerResponse
       */
      Models::GetIcpFilingInfoForPartnerResponse getIcpFilingInfoForPartner(const Models::GetIcpFilingInfoForPartnerRequest &request);

      /**
       * @summary Query LLM Proxy configuration
       *
       * @description Query the Supabase instance configuration information corresponding to the resource.
       *
       * @param request GetLlmProxyConfigForAdminRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLlmProxyConfigForAdminResponse
       */
      Models::GetLlmProxyConfigForAdminResponse getLlmProxyConfigForAdminWithOptions(const Models::GetLlmProxyConfigForAdminRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query LLM Proxy configuration
       *
       * @description Query the Supabase instance configuration information corresponding to the resource.
       *
       * @param request GetLlmProxyConfigForAdminRequest
       * @return GetLlmProxyConfigForAdminResponse
       */
      Models::GetLlmProxyConfigForAdminResponse getLlmProxyConfigForAdmin(const Models::GetLlmProxyConfigForAdminRequest &request);

      /**
       * @summary Obtain miniapp authorization link
       *
       * @param request GetMiniAppAuthUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMiniAppAuthUrlResponse
       */
      Models::GetMiniAppAuthUrlResponse getMiniAppAuthUrlWithOptions(const Models::GetMiniAppAuthUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain miniapp authorization link
       *
       * @param request GetMiniAppAuthUrlRequest
       * @return GetMiniAppAuthUrlResponse
       */
      Models::GetMiniAppAuthUrlResponse getMiniAppAuthUrl(const Models::GetMiniAppAuthUrlRequest &request);

      /**
       * @summary Query the miniapp attached to a site
       *
       * @description Obtain the QR code plugin configuration information
       *
       * @param tmpReq GetMiniAppBindingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMiniAppBindingResponse
       */
      Models::GetMiniAppBindingResponse getMiniAppBindingWithOptions(const Models::GetMiniAppBindingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the miniapp attached to a site
       *
       * @description Obtain the QR code plugin configuration information
       *
       * @param request GetMiniAppBindingRequest
       * @return GetMiniAppBindingResponse
       */
      Models::GetMiniAppBindingResponse getMiniAppBinding(const Models::GetMiniAppBindingRequest &request);

      /**
       * @summary Query the miniapp attached to an application instance based on conditions
       *
       * @param request GetMiniAppBindingForAdminRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMiniAppBindingForAdminResponse
       */
      Models::GetMiniAppBindingForAdminResponse getMiniAppBindingForAdminWithOptions(const Models::GetMiniAppBindingForAdminRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the miniapp attached to an application instance based on conditions
       *
       * @param request GetMiniAppBindingForAdminRequest
       * @return GetMiniAppBindingForAdminResponse
       */
      Models::GetMiniAppBindingForAdminResponse getMiniAppBindingForAdmin(const Models::GetMiniAppBindingForAdminRequest &request);

      /**
       * @summary 生成文件上传策略
       *
       * @description 获取生码插件配置信息
       *
       * @param request GetOssUploadPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOssUploadPolicyResponse
       */
      Models::GetOssUploadPolicyResponse getOssUploadPolicyWithOptions(const Models::GetOssUploadPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 生成文件上传策略
       *
       * @description 获取生码插件配置信息
       *
       * @param request GetOssUploadPolicyRequest
       * @return GetOssUploadPolicyResponse
       */
      Models::GetOssUploadPolicyResponse getOssUploadPolicy(const Models::GetOssUploadPolicyRequest &request);

      /**
       * @summary 获取临时下载地址
       *
       * @description 获取生码插件配置信息
       *
       * @param request GetTempDownloadUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTempDownloadUrlResponse
       */
      Models::GetTempDownloadUrlResponse getTempDownloadUrlWithOptions(const Models::GetTempDownloadUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取临时下载地址
       *
       * @description 获取生码插件配置信息
       *
       * @param request GetTempDownloadUrlRequest
       * @return GetTempDownloadUrlResponse
       */
      Models::GetTempDownloadUrlResponse getTempDownloadUrl(const Models::GetTempDownloadUrlRequest &request);

      /**
       * @summary Exchange temporary AccessKey for accessToken
       *
       * @param request GetUserAccessTokenForPartnerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserAccessTokenForPartnerResponse
       */
      Models::GetUserAccessTokenForPartnerResponse getUserAccessTokenForPartnerWithOptions(const Models::GetUserAccessTokenForPartnerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Exchange temporary AccessKey for accessToken
       *
       * @param request GetUserAccessTokenForPartnerRequest
       * @return GetUserAccessTokenForPartnerResponse
       */
      Models::GetUserAccessTokenForPartnerResponse getUserAccessTokenForPartner(const Models::GetUserAccessTokenForPartnerRequest &request);

      /**
       * @summary Partnership obtains temporary credentials for User SLR role authorization
       *
       * @param request GetUserTmpIdentityForPartnerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserTmpIdentityForPartnerResponse
       */
      Models::GetUserTmpIdentityForPartnerResponse getUserTmpIdentityForPartnerWithOptions(const Models::GetUserTmpIdentityForPartnerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Partnership obtains temporary credentials for User SLR role authorization
       *
       * @param request GetUserTmpIdentityForPartnerRequest
       * @return GetUserTmpIdentityForPartnerResponse
       */
      Models::GetUserTmpIdentityForPartnerResponse getUserTmpIdentityForPartner(const Models::GetUserTmpIdentityForPartnerRequest &request);

      /**
       * @summary Introspection analysis of免登 accessToken
       *
       * @param request IntrospectAppInstanceTicketForPreviewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return IntrospectAppInstanceTicketForPreviewResponse
       */
      Models::IntrospectAppInstanceTicketForPreviewResponse introspectAppInstanceTicketForPreviewWithOptions(const Models::IntrospectAppInstanceTicketForPreviewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Introspection analysis of免登 accessToken
       *
       * @param request IntrospectAppInstanceTicketForPreviewRequest
       * @return IntrospectAppInstanceTicketForPreviewResponse
       */
      Models::IntrospectAppInstanceTicketForPreviewResponse introspectAppInstanceTicketForPreview(const Models::IntrospectAppInstanceTicketForPreviewRequest &request);

      /**
       * @summary Obtain incremental SSE events of AI employee conversations
       *
       * @description Wan Xiaozhi 2.0 – Retrieve streaming output results of AI sessions
       *
       * @param request ListAIStaffChatEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAIStaffChatEventsResponse
       */
      Models::ListAIStaffChatEventsResponse listAIStaffChatEventsWithOptions(const Models::ListAIStaffChatEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain incremental SSE events of AI employee conversations
       *
       * @description Wan Xiaozhi 2.0 – Retrieve streaming output results of AI sessions
       *
       * @param request ListAIStaffChatEventsRequest
       * @return ListAIStaffChatEventsResponse
       */
      Models::ListAIStaffChatEventsResponse listAIStaffChatEvents(const Models::ListAIStaffChatEventsRequest &request);

      /**
       * @summary Paged query of AI employee conversation message list
       *
       * @description Wan Xiaozhi 2.0 - API for querying AI session history information
       *
       * @param request ListAIStaffChatMessagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAIStaffChatMessagesResponse
       */
      Models::ListAIStaffChatMessagesResponse listAIStaffChatMessagesWithOptions(const Models::ListAIStaffChatMessagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Paged query of AI employee conversation message list
       *
       * @description Wan Xiaozhi 2.0 - API for querying AI session history information
       *
       * @param request ListAIStaffChatMessagesRequest
       * @return ListAIStaffChatMessagesResponse
       */
      Models::ListAIStaffChatMessagesResponse listAIStaffChatMessages(const Models::ListAIStaffChatMessagesRequest &request);

      /**
       * @summary Query the list of application assistant agents
       *
       * @description Query application instance information
       *
       * @param request ListAppAssistantAgentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAppAssistantAgentsResponse
       */
      Models::ListAppAssistantAgentsResponse listAppAssistantAgentsWithOptions(const Models::ListAppAssistantAgentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the list of application assistant agents
       *
       * @description Query application instance information
       *
       * @param request ListAppAssistantAgentsRequest
       * @return ListAppAssistantAgentsResponse
       */
      Models::ListAppAssistantAgentsResponse listAppAssistantAgents(const Models::ListAppAssistantAgentsRequest &request);

      /**
       * @summary Query the message list of a specified chat
       *
       * @description Wan Xiaozhi 2.0 - AI session history information query API
       *
       * @param request ListAppChatMessagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAppChatMessagesResponse
       */
      Models::ListAppChatMessagesResponse listAppChatMessagesWithOptions(const Models::ListAppChatMessagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the message list of a specified chat
       *
       * @description Wan Xiaozhi 2.0 - AI session history information query API
       *
       * @param request ListAppChatMessagesRequest
       * @return ListAppChatMessagesResponse
       */
      Models::ListAppChatMessagesResponse listAppChatMessages(const Models::ListAppChatMessagesRequest &request);

      /**
       * @deprecated OpenAPI ListAppCommoditySpecificationsForPartner is deprecated, please use WebsiteBuild::2025-04-29::ListAppCommoditySpecificationsV2ForPartner instead.
       *
       * @summary Product information data
       *
       * @description Obtain the configuration information of the code generation plugin
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAppCommoditySpecificationsForPartnerResponse
       */
      Models::ListAppCommoditySpecificationsForPartnerResponse listAppCommoditySpecificationsForPartnerWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ListAppCommoditySpecificationsForPartner is deprecated, please use WebsiteBuild::2025-04-29::ListAppCommoditySpecificationsV2ForPartner instead.
       *
       * @summary Product information data
       *
       * @description Obtain the configuration information of the code generation plugin
       *
       * @return ListAppCommoditySpecificationsForPartnerResponse
       */
      Models::ListAppCommoditySpecificationsForPartnerResponse listAppCommoditySpecificationsForPartner();

      /**
       * @summary Query website building product details
       *
       * @description Obtain the configuration information of the code generation plugin
       *
       * @param request ListAppCommoditySpecificationsV2ForPartnerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAppCommoditySpecificationsV2ForPartnerResponse
       */
      Models::ListAppCommoditySpecificationsV2ForPartnerResponse listAppCommoditySpecificationsV2ForPartnerWithOptions(const Models::ListAppCommoditySpecificationsV2ForPartnerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query website building product details
       *
       * @description Obtain the configuration information of the code generation plugin
       *
       * @param request ListAppCommoditySpecificationsV2ForPartnerRequest
       * @return ListAppCommoditySpecificationsV2ForPartnerResponse
       */
      Models::ListAppCommoditySpecificationsV2ForPartnerResponse listAppCommoditySpecificationsV2ForPartner(const Models::ListAppCommoditySpecificationsV2ForPartnerRequest &request);

      /**
       * @summary Paged query of conversation message list
       *
       * @description Wan Xiaozhi 2.0 - AI session history information query API
       *
       * @param request ListAppConversationMessagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAppConversationMessagesResponse
       */
      Models::ListAppConversationMessagesResponse listAppConversationMessagesWithOptions(const Models::ListAppConversationMessagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Paged query of conversation message list
       *
       * @description Wan Xiaozhi 2.0 - AI session history information query API
       *
       * @param request ListAppConversationMessagesRequest
       * @return ListAppConversationMessagesResponse
       */
      Models::ListAppConversationMessagesResponse listAppConversationMessages(const Models::ListAppConversationMessagesRequest &request);

      /**
       * @summary Search session list
       *
       * @description Wan Xiaozhi 2.0 Create AI Session API
       *
       * @param request ListAppConversationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAppConversationsResponse
       */
      Models::ListAppConversationsResponse listAppConversationsWithOptions(const Models::ListAppConversationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Search session list
       *
       * @description Wan Xiaozhi 2.0 Create AI Session API
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
       * @summary Retrieve the list of Code Farmer plugin configurations
       *
       * @description Retrieve the configuration information of the code generation plugin
       *
       * @param request ListAppPluginConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAppPluginConfigsResponse
       */
      Models::ListAppPluginConfigsResponse listAppPluginConfigsWithOptions(const Models::ListAppPluginConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve the list of Code Farmer plugin configurations
       *
       * @description Retrieve the configuration information of the code generation plugin
       *
       * @param request ListAppPluginConfigsRequest
       * @return ListAppPluginConfigsResponse
       */
      Models::ListAppPluginConfigsResponse listAppPluginConfigs(const Models::ListAppPluginConfigsRequest &request);

      /**
       * @summary List of code generation plugins
       *
       * @description Obtain configuration information of code generation plugins
       *
       * @param request ListAppPluginsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAppPluginsResponse
       */
      Models::ListAppPluginsResponse listAppPluginsWithOptions(const Models::ListAppPluginsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List of code generation plugins
       *
       * @description Obtain configuration information of code generation plugins
       *
       * @param request ListAppPluginsRequest
       * @return ListAppPluginsResponse
       */
      Models::ListAppPluginsResponse listAppPlugins(const Models::ListAppPluginsRequest &request);

      /**
       * @summary Query publish history
       *
       * @description Query application instance information
       *
       * @param request ListAppPublishHistoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAppPublishHistoryResponse
       */
      Models::ListAppPublishHistoryResponse listAppPublishHistoryWithOptions(const Models::ListAppPublishHistoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query publish history
       *
       * @description Query application instance information
       *
       * @param request ListAppPublishHistoryRequest
       * @return ListAppPublishHistoryResponse
       */
      Models::ListAppPublishHistoryResponse listAppPublishHistory(const Models::ListAppPublishHistoryRequest &request);

      /**
       * @summary Query dictionary list
       *
       * @description Query application instance information
       *
       * @param request ListAppTemplateDictsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAppTemplateDictsResponse
       */
      Models::ListAppTemplateDictsResponse listAppTemplateDictsWithOptions(const Models::ListAppTemplateDictsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query dictionary list
       *
       * @description Query application instance information
       *
       * @param request ListAppTemplateDictsRequest
       * @return ListAppTemplateDictsResponse
       */
      Models::ListAppTemplateDictsResponse listAppTemplateDicts(const Models::ListAppTemplateDictsRequest &request);

      /**
       * @summary Query template list
       *
       * @description Obtain barcode generation plugin configuration information
       *
       * @param request ListAppTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAppTemplatesResponse
       */
      Models::ListAppTemplatesResponse listAppTemplatesWithOptions(const Models::ListAppTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query template list
       *
       * @description Obtain barcode generation plugin configuration information
       *
       * @param request ListAppTemplatesRequest
       * @return ListAppTemplatesResponse
       */
      Models::ListAppTemplatesResponse listAppTemplates(const Models::ListAppTemplatesRequest &request);

      /**
       * @summary Query Alipay ISV plugin configuration
       *
       * @description Obtain barcode generation plugin configuration information
       *
       * @param request ListIsvPaymentPluginConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIsvPaymentPluginConfigsResponse
       */
      Models::ListIsvPaymentPluginConfigsResponse listIsvPaymentPluginConfigsWithOptions(const Models::ListIsvPaymentPluginConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Alipay ISV plugin configuration
       *
       * @description Obtain barcode generation plugin configuration information
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
       * @summary Modify a material folder
       *
       * @param request ModifyMaterialDirectoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyMaterialDirectoryResponse
       */
      Models::ModifyMaterialDirectoryResponse modifyMaterialDirectoryWithOptions(const Models::ModifyMaterialDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify a material folder
       *
       * @param request ModifyMaterialDirectoryRequest
       * @return ModifyMaterialDirectoryResponse
       */
      Models::ModifyMaterialDirectoryResponse modifyMaterialDirectory(const Models::ModifyMaterialDirectoryRequest &request);

      /**
       * @summary Modify a material file
       *
       * @param request ModifyMaterialFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyMaterialFileResponse
       */
      Models::ModifyMaterialFileResponse modifyMaterialFileWithOptions(const Models::ModifyMaterialFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify a material file
       *
       * @param request ModifyMaterialFileRequest
       * @return ModifyMaterialFileResponse
       */
      Models::ModifyMaterialFileResponse modifyMaterialFile(const Models::ModifyMaterialFileRequest &request);

      /**
       * @summary Modify the status of a material file
       *
       * @param tmpReq ModifyMaterialFileStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyMaterialFileStatusResponse
       */
      Models::ModifyMaterialFileStatusResponse modifyMaterialFileStatusWithOptions(const Models::ModifyMaterialFileStatusRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify the status of a material file
       *
       * @param request ModifyMaterialFileStatusRequest
       * @return ModifyMaterialFileStatusResponse
       */
      Models::ModifyMaterialFileStatusResponse modifyMaterialFileStatus(const Models::ModifyMaterialFileStatusRequest &request);

      /**
       * @summary Shift material folder
       *
       * @param request MoveMaterialDirectoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MoveMaterialDirectoryResponse
       */
      Models::MoveMaterialDirectoryResponse moveMaterialDirectoryWithOptions(const Models::MoveMaterialDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Shift material folder
       *
       * @param request MoveMaterialDirectoryRequest
       * @return MoveMaterialDirectoryResponse
       */
      Models::MoveMaterialDirectoryResponse moveMaterialDirectory(const Models::MoveMaterialDirectoryRequest &request);

      /**
       * @summary Shift material files
       *
       * @param tmpReq MoveMaterialFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MoveMaterialFileResponse
       */
      Models::MoveMaterialFileResponse moveMaterialFileWithOptions(const Models::MoveMaterialFileRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Shift material files
       *
       * @param request MoveMaterialFileRequest
       * @return MoveMaterialFileResponse
       */
      Models::MoveMaterialFileResponse moveMaterialFile(const Models::MoveMaterialFileRequest &request);

      /**
       * @summary Operate application for Partnership
       *
       * @param request OperateAppInstanceForPartnerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateAppInstanceForPartnerResponse
       */
      Models::OperateAppInstanceForPartnerResponse operateAppInstanceForPartnerWithOptions(const Models::OperateAppInstanceForPartnerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Operate application for Partnership
       *
       * @param request OperateAppInstanceForPartnerRequest
       * @return OperateAppInstanceForPartnerResponse
       */
      Models::OperateAppInstanceForPartnerResponse operateAppInstanceForPartner(const Models::OperateAppInstanceForPartnerRequest &request);

      /**
       * @summary Partnership operates application services.
       *
       * @param request OperateAppServiceForPartnerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateAppServiceForPartnerResponse
       */
      Models::OperateAppServiceForPartnerResponse operateAppServiceForPartnerWithOptions(const Models::OperateAppServiceForPartnerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Partnership operates application services.
       *
       * @param request OperateAppServiceForPartnerRequest
       * @return OperateAppServiceForPartnerResponse
       */
      Models::OperateAppServiceForPartnerResponse operateAppServiceForPartner(const Models::OperateAppServiceForPartnerRequest &request);

      /**
       * @summary Switch template like statistics
       *
       * @description Obtain barcode generation plugin configuration information
       *
       * @param request OperateAppTemplateLikeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateAppTemplateLikeResponse
       */
      Models::OperateAppTemplateLikeResponse operateAppTemplateLikeWithOptions(const Models::OperateAppTemplateLikeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Switch template like statistics
       *
       * @description Obtain barcode generation plugin configuration information
       *
       * @param request OperateAppTemplateLikeRequest
       * @return OperateAppTemplateLikeResponse
       */
      Models::OperateAppTemplateLikeResponse operateAppTemplateLike(const Models::OperateAppTemplateLikeRequest &request);

      /**
       * @summary Supabase instance information corresponding to the operation resource
       *
       * @description Supabase instance information corresponding to the operation resource
       *
       * @param request OperateSupabaseForAdminRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateSupabaseForAdminResponse
       */
      Models::OperateSupabaseForAdminResponse operateSupabaseForAdminWithOptions(const Models::OperateSupabaseForAdminRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Supabase instance information corresponding to the operation resource
       *
       * @description Supabase instance information corresponding to the operation resource
       *
       * @param request OperateSupabaseForAdminRequest
       * @return OperateSupabaseForAdminResponse
       */
      Models::OperateSupabaseForAdminResponse operateSupabaseForAdmin(const Models::OperateSupabaseForAdminRequest &request);

      /**
       * @summary Publish application instance
       *
       * @description Query application instance information
       *
       * @param request PublishAppInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishAppInstanceResponse
       */
      Models::PublishAppInstanceResponse publishAppInstanceWithOptions(const Models::PublishAppInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Publish application instance
       *
       * @description Query application instance information
       *
       * @param request PublishAppInstanceRequest
       * @return PublishAppInstanceResponse
       */
      Models::PublishAppInstanceResponse publishAppInstance(const Models::PublishAppInstanceRequest &request);

      /**
       * @summary Push resource metering data
       *
       * @description Query the Supabase instance information corresponding to the resource
       *
       * @param request PushResourceMeasureRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PushResourceMeasureResponse
       */
      Models::PushResourceMeasureResponse pushResourceMeasureWithOptions(const Models::PushResourceMeasureRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Push resource metering data
       *
       * @description Query the Supabase instance information corresponding to the resource
       *
       * @param request PushResourceMeasureRequest
       * @return PushResourceMeasureResponse
       */
      Models::PushResourceMeasureResponse pushResourceMeasure(const Models::PushResourceMeasureRequest &request);

      /**
       * @summary Query the details of inspiration value acquisition (quota account list, including expiration mark)
       *
       * @description Query the Supabase instance information corresponding to the resource
       *
       * @param request QueryInspirationAccountDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryInspirationAccountDetailsResponse
       */
      Models::QueryInspirationAccountDetailsResponse queryInspirationAccountDetailsWithOptions(const Models::QueryInspirationAccountDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the details of inspiration value acquisition (quota account list, including expiration mark)
       *
       * @description Query the Supabase instance information corresponding to the resource
       *
       * @param request QueryInspirationAccountDetailsRequest
       * @return QueryInspirationAccountDetailsResponse
       */
      Models::QueryInspirationAccountDetailsResponse queryInspirationAccountDetails(const Models::QueryInspirationAccountDetailsRequest &request);

      /**
       * @summary Query the overview of inspiration balance
       *
       * @description Query the Supabase instance information corresponding to the resource
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryInspirationBalanceResponse
       */
      Models::QueryInspirationBalanceResponse queryInspirationBalanceWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the overview of inspiration balance
       *
       * @description Query the Supabase instance information corresponding to the resource
       *
       * @return QueryInspirationBalanceResponse
       */
      Models::QueryInspirationBalanceResponse queryInspirationBalance();

      /**
       * @summary Query inspiration value consumption details
       *
       * @description Obtain the configuration information of the code generation plugin
       *
       * @param request QueryInspirationConsumeRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryInspirationConsumeRecordsResponse
       */
      Models::QueryInspirationConsumeRecordsResponse queryInspirationConsumeRecordsWithOptions(const Models::QueryInspirationConsumeRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query inspiration value consumption details
       *
       * @description Obtain the configuration information of the code generation plugin
       *
       * @param request QueryInspirationConsumeRecordsRequest
       * @return QueryInspirationConsumeRecordsResponse
       */
      Models::QueryInspirationConsumeRecordsResponse queryInspirationConsumeRecords(const Models::QueryInspirationConsumeRecordsRequest &request);

      /**
       * @summary Query the material folder tree
       *
       * @param request QueryMaterialDirectoryTreeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMaterialDirectoryTreeResponse
       */
      Models::QueryMaterialDirectoryTreeResponse queryMaterialDirectoryTreeWithOptions(const Models::QueryMaterialDirectoryTreeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the material folder tree
       *
       * @param request QueryMaterialDirectoryTreeRequest
       * @return QueryMaterialDirectoryTreeResponse
       */
      Models::QueryMaterialDirectoryTreeResponse queryMaterialDirectoryTree(const Models::QueryMaterialDirectoryTreeRequest &request);

      /**
       * @summary Query Material File Details
       *
       * @param request QueryMaterialFileDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMaterialFileDetailResponse
       */
      Models::QueryMaterialFileDetailResponse queryMaterialFileDetailWithOptions(const Models::QueryMaterialFileDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Material File Details
       *
       * @param request QueryMaterialFileDetailRequest
       * @return QueryMaterialFileDetailResponse
       */
      Models::QueryMaterialFileDetailResponse queryMaterialFileDetail(const Models::QueryMaterialFileDetailRequest &request);

      /**
       * @summary Query the list of material files
       *
       * @param tmpReq QueryMaterialFileListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMaterialFileListResponse
       */
      Models::QueryMaterialFileListResponse queryMaterialFileListWithOptions(const Models::QueryMaterialFileListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the list of material files
       *
       * @param request QueryMaterialFileListRequest
       * @return QueryMaterialFileListResponse
       */
      Models::QueryMaterialFileListResponse queryMaterialFileList(const Models::QueryMaterialFileListRequest &request);

      /**
       * @summary Query file overview
       *
       * @param tmpReq QueryMaterialFileSummaryInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMaterialFileSummaryInfoResponse
       */
      Models::QueryMaterialFileSummaryInfoResponse queryMaterialFileSummaryInfoWithOptions(const Models::QueryMaterialFileSummaryInfoRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query file overview
       *
       * @param request QueryMaterialFileSummaryInfoRequest
       * @return QueryMaterialFileSummaryInfoResponse
       */
      Models::QueryMaterialFileSummaryInfoResponse queryMaterialFileSummaryInfo(const Models::QueryMaterialFileSummaryInfoRequest &request);

      /**
       * @summary Query the details of a Material generation Job
       *
       * @param request QueryMaterialTaskDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMaterialTaskDetailResponse
       */
      Models::QueryMaterialTaskDetailResponse queryMaterialTaskDetailWithOptions(const Models::QueryMaterialTaskDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the details of a Material generation Job
       *
       * @param request QueryMaterialTaskDetailRequest
       * @return QueryMaterialTaskDetailResponse
       */
      Models::QueryMaterialTaskDetailResponse queryMaterialTaskDetail(const Models::QueryMaterialTaskDetailRequest &request);

      /**
       * @summary Query the list of Material generation Jobs
       *
       * @param tmpReq QueryMaterialTaskListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMaterialTaskListResponse
       */
      Models::QueryMaterialTaskListResponse queryMaterialTaskListWithOptions(const Models::QueryMaterialTaskListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the list of Material generation Jobs
       *
       * @param request QueryMaterialTaskListRequest
       * @return QueryMaterialTaskListResponse
       */
      Models::QueryMaterialTaskListResponse queryMaterialTaskList(const Models::QueryMaterialTaskListRequest &request);

      /**
       * @summary Query the auth configuration information of the Supabase instance corresponding to the resource
       *
       * @description Query the auth configuration information of the Supabase instance corresponding to the resource
       *
       * @param request QuerySupabaseAuthConfigsForAdminRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySupabaseAuthConfigsForAdminResponse
       */
      Models::QuerySupabaseAuthConfigsForAdminResponse querySupabaseAuthConfigsForAdminWithOptions(const Models::QuerySupabaseAuthConfigsForAdminRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the auth configuration information of the Supabase instance corresponding to the resource
       *
       * @description Query the auth configuration information of the Supabase instance corresponding to the resource
       *
       * @param request QuerySupabaseAuthConfigsForAdminRequest
       * @return QuerySupabaseAuthConfigsForAdminResponse
       */
      Models::QuerySupabaseAuthConfigsForAdminResponse querySupabaseAuthConfigsForAdmin(const Models::QuerySupabaseAuthConfigsForAdminRequest &request);

      /**
       * @summary Query the Supabase instance configuration information corresponding to the resource.
       *
       * @description Query the Supabase instance configuration information corresponding to the resource.
       *
       * @param request QuerySupabaseConfigsForAdminRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySupabaseConfigsForAdminResponse
       */
      Models::QuerySupabaseConfigsForAdminResponse querySupabaseConfigsForAdminWithOptions(const Models::QuerySupabaseConfigsForAdminRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the Supabase instance configuration information corresponding to the resource.
       *
       * @description Query the Supabase instance configuration information corresponding to the resource.
       *
       * @param request QuerySupabaseConfigsForAdminRequest
       * @return QuerySupabaseConfigsForAdminResponse
       */
      Models::QuerySupabaseConfigsForAdminResponse querySupabaseConfigsForAdmin(const Models::QuerySupabaseConfigsForAdminRequest &request);

      /**
       * @summary Query the Supabase instance information corresponding to the resource
       *
       * @description Query the Supabase instance information corresponding to the resource
       *
       * @param request QuerySupabaseInstanceInfoForAdminRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySupabaseInstanceInfoForAdminResponse
       */
      Models::QuerySupabaseInstanceInfoForAdminResponse querySupabaseInstanceInfoForAdminWithOptions(const Models::QuerySupabaseInstanceInfoForAdminRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the Supabase instance information corresponding to the resource
       *
       * @description Query the Supabase instance information corresponding to the resource
       *
       * @param request QuerySupabaseInstanceInfoForAdminRequest
       * @return QuerySupabaseInstanceInfoForAdminResponse
       */
      Models::QuerySupabaseInstanceInfoForAdminResponse querySupabaseInstanceInfoForAdmin(const Models::QuerySupabaseInstanceInfoForAdminRequest &request);

      /**
       * @summary Reconnect AI conversation
       *
       * @description Obtain QR code plugin Configuration Information
       *
       * @param request ReconnectAppChatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReconnectAppChatResponse
       */
      FutureGenerator<Models::ReconnectAppChatResponse> reconnectAppChatWithSSE(const Models::ReconnectAppChatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reconnect AI conversation
       *
       * @description Obtain QR code plugin Configuration Information
       *
       * @param request ReconnectAppChatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReconnectAppChatResponse
       */
      Models::ReconnectAppChatResponse reconnectAppChatWithOptions(const Models::ReconnectAppChatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reconnect AI conversation
       *
       * @description Obtain QR code plugin Configuration Information
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
       * @summary Refund for channel partner website building service.
       *
       * @param request RefundAppInstanceForPartnerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefundAppInstanceForPartnerResponse
       */
      Models::RefundAppInstanceForPartnerResponse refundAppInstanceForPartnerWithOptions(const Models::RefundAppInstanceForPartnerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Refund for channel partner website building service.
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
       * @summary Renewal/Purge Sandbox Environment
       *
       * @description Obtain the configuration information of the code generation plugin
       *
       * @param request RenewAppSandboxRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewAppSandboxResponse
       */
      Models::RenewAppSandboxResponse renewAppSandboxWithOptions(const Models::RenewAppSandboxRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renewal/Purge Sandbox Environment
       *
       * @description Obtain the configuration information of the code generation plugin
       *
       * @param request RenewAppSandboxRequest
       * @return RenewAppSandboxResponse
       */
      Models::RenewAppSandboxResponse renewAppSandbox(const Models::RenewAppSandboxRequest &request);

      /**
       * @summary Code snapshot rollback
       *
       * @description Obtain the configuration information of the code generation plugin
       *
       * @param request RollbackAppCodeSnapshotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RollbackAppCodeSnapshotResponse
       */
      Models::RollbackAppCodeSnapshotResponse rollbackAppCodeSnapshotWithOptions(const Models::RollbackAppCodeSnapshotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Code snapshot rollback
       *
       * @description Obtain the configuration information of the code generation plugin
       *
       * @param request RollbackAppCodeSnapshotRequest
       * @return RollbackAppCodeSnapshotResponse
       */
      Models::RollbackAppCodeSnapshotResponse rollbackAppCodeSnapshot(const Models::RollbackAppCodeSnapshotRequest &request);

      /**
       * @summary Roll back application instance deployment
       *
       * @description Query application instance information
       *
       * @param request RollbackAppInstancePublishRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RollbackAppInstancePublishResponse
       */
      Models::RollbackAppInstancePublishResponse rollbackAppInstancePublishWithOptions(const Models::RollbackAppInstancePublishRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Roll back application instance deployment
       *
       * @description Query application instance information
       *
       * @param request RollbackAppInstancePublishRequest
       * @return RollbackAppInstancePublishResponse
       */
      Models::RollbackAppInstancePublishResponse rollbackAppInstancePublish(const Models::RollbackAppInstancePublishRequest &request);

      /**
       * @summary Save requirements
       *
       * @description Obtain barcode generation plugin configuration information
       *
       * @param request SaveAppRequirementRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveAppRequirementResponse
       */
      Models::SaveAppRequirementResponse saveAppRequirementWithOptions(const Models::SaveAppRequirementRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Save requirements
       *
       * @description Obtain barcode generation plugin configuration information
       *
       * @param request SaveAppRequirementRequest
       * @return SaveAppRequirementResponse
       */
      Models::SaveAppRequirementResponse saveAppRequirement(const Models::SaveAppRequirementRequest &request);

      /**
       * @summary Save Supabase key
       *
       * @description The supabase instance information corresponding to the operation resource
       *
       * @param request SaveAppSupabaseSecretsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveAppSupabaseSecretsResponse
       */
      Models::SaveAppSupabaseSecretsResponse saveAppSupabaseSecretsWithOptions(const Models::SaveAppSupabaseSecretsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Save Supabase key
       *
       * @description The supabase instance information corresponding to the operation resource
       *
       * @param request SaveAppSupabaseSecretsRequest
       * @return SaveAppSupabaseSecretsResponse
       */
      Models::SaveAppSupabaseSecretsResponse saveAppSupabaseSecrets(const Models::SaveAppSupabaseSecretsRequest &request);

      /**
       * @summary Image retrieval
       *
       * @param tmpReq SearchImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchImageResponse
       */
      Models::SearchImageResponse searchImageWithOptions(const Models::SearchImageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Image retrieval
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
       * @description 获取生码插件配置信息
       *
       * @param request SubmitAppSeoIndexRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitAppSeoIndexResponse
       */
      Models::SubmitAppSeoIndexResponse submitAppSeoIndexWithOptions(const Models::SubmitAppSeoIndexRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交SEO索引
       *
       * @description 获取生码插件配置信息
       *
       * @param request SubmitAppSeoIndexRequest
       * @return SubmitAppSeoIndexResponse
       */
      Models::SubmitAppSeoIndexResponse submitAppSeoIndex(const Models::SubmitAppSeoIndexRequest &request);

      /**
       * @summary Submit a Material Generation Job
       *
       * @param request SubmitMaterialTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitMaterialTaskResponse
       */
      Models::SubmitMaterialTaskResponse submitMaterialTaskWithOptions(const Models::SubmitMaterialTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submit a Material Generation Job
       *
       * @param request SubmitMaterialTaskRequest
       * @return SubmitMaterialTaskResponse
       */
      Models::SubmitMaterialTaskResponse submitMaterialTask(const Models::SubmitMaterialTaskRequest &request);

      /**
       * @summary 切换到指定对话
       *
       * @description 万小智2.0创建AI会话接口
       *
       * @param request SwitchAppConversationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchAppConversationResponse
       */
      Models::SwitchAppConversationResponse switchAppConversationWithOptions(const Models::SwitchAppConversationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 切换到指定对话
       *
       * @description 万小智2.0创建AI会话接口
       *
       * @param request SwitchAppConversationRequest
       * @return SwitchAppConversationResponse
       */
      Models::SwitchAppConversationResponse switchAppConversation(const Models::SwitchAppConversationRequest &request);

      /**
       * @summary Partnership synchronizes application instance
       *
       * @param tmpReq SyncAppInstanceForPartnerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SyncAppInstanceForPartnerResponse
       */
      Models::SyncAppInstanceForPartnerResponse syncAppInstanceForPartnerWithOptions(const Models::SyncAppInstanceForPartnerRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Partnership synchronizes application instance
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
       * @summary Update message content
       *
       * @description Wan Xiaozhi 2.0 - AI session history query API
       *
       * @param request UpdateAppChatMessageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAppChatMessageResponse
       */
      Models::UpdateAppChatMessageResponse updateAppChatMessageWithOptions(const Models::UpdateAppChatMessageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update message content
       *
       * @description Wan Xiaozhi 2.0 - AI session history query API
       *
       * @param request UpdateAppChatMessageRequest
       * @return UpdateAppChatMessageResponse
       */
      Models::UpdateAppChatMessageResponse updateAppChatMessage(const Models::UpdateAppChatMessageRequest &request);

      /**
       * @summary Edit JSX Code
       *
       * @description Retrieve the configuration information of the code generation plugin
       *
       * @param request UpdateAppCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAppCodeResponse
       */
      Models::UpdateAppCodeResponse updateAppCodeWithOptions(const Models::UpdateAppCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Edit JSX Code
       *
       * @description Retrieve the configuration information of the code generation plugin
       *
       * @param request UpdateAppCodeRequest
       * @return UpdateAppCodeResponse
       */
      Models::UpdateAppCodeResponse updateAppCode(const Models::UpdateAppCodeRequest &request);

      /**
       * @summary Update file
       *
       * @description Obtain the configuration information of the code generation plugin
       *
       * @param request UpdateAppFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAppFileResponse
       */
      Models::UpdateAppFileResponse updateAppFileWithOptions(const Models::UpdateAppFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update file
       *
       * @description Obtain the configuration information of the code generation plugin
       *
       * @param request UpdateAppFileRequest
       * @return UpdateAppFileResponse
       */
      Models::UpdateAppFileResponse updateAppFile(const Models::UpdateAppFileRequest &request);

      /**
       * @summary Upgrade/Downgrade website instance.
       *
       * @description Query application instance information
       *
       * @param tmpReq UpdateAppInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAppInstanceResponse
       */
      Models::UpdateAppInstanceResponse updateAppInstanceWithOptions(const Models::UpdateAppInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrade/Downgrade website instance.
       *
       * @description Query application instance information
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
       * @summary Update Supabase authentication configuration
       *
       * @description Query the auth configuration information of the Supabase instance corresponding to the resource
       *
       * @param request UpdateAppSupabaseAuthConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAppSupabaseAuthConfigResponse
       */
      Models::UpdateAppSupabaseAuthConfigResponse updateAppSupabaseAuthConfigWithOptions(const Models::UpdateAppSupabaseAuthConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update Supabase authentication configuration
       *
       * @description Query the auth configuration information of the Supabase instance corresponding to the resource
       *
       * @param request UpdateAppSupabaseAuthConfigRequest
       * @return UpdateAppSupabaseAuthConfigResponse
       */
      Models::UpdateAppSupabaseAuthConfigResponse updateAppSupabaseAuthConfig(const Models::UpdateAppSupabaseAuthConfigRequest &request);

      /**
       * @summary Update Supabase key
       *
       * @description Operation resource corresponds to the supabase instance information
       *
       * @param request UpdateAppSupabaseSecretRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAppSupabaseSecretResponse
       */
      Models::UpdateAppSupabaseSecretResponse updateAppSupabaseSecretWithOptions(const Models::UpdateAppSupabaseSecretRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update Supabase key
       *
       * @description Operation resource corresponds to the supabase instance information
       *
       * @param request UpdateAppSupabaseSecretRequest
       * @return UpdateAppSupabaseSecretResponse
       */
      Models::UpdateAppSupabaseSecretResponse updateAppSupabaseSecret(const Models::UpdateAppSupabaseSecretRequest &request);

      /**
       * @summary Update miniapp binding information
       *
       * @param request UpdateMiniAppBindingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMiniAppBindingResponse
       */
      Models::UpdateMiniAppBindingResponse updateMiniAppBindingWithOptions(const Models::UpdateMiniAppBindingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update miniapp binding information
       *
       * @param request UpdateMiniAppBindingRequest
       * @return UpdateMiniAppBindingResponse
       */
      Models::UpdateMiniAppBindingResponse updateMiniAppBinding(const Models::UpdateMiniAppBindingRequest &request);

      /**
       * @summary Upload to the site root directory
       *
       * @description Obtain the configuration information of the code generation plugin
       *
       * @param request UploadAppSiteValidationFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadAppSiteValidationFileResponse
       */
      Models::UploadAppSiteValidationFileResponse uploadAppSiteValidationFileWithOptions(const Models::UploadAppSiteValidationFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upload to the site root directory
       *
       * @description Obtain the configuration information of the code generation plugin
       *
       * @param request UploadAppSiteValidationFileRequest
       * @return UploadAppSiteValidationFileResponse
       */
      Models::UploadAppSiteValidationFileResponse uploadAppSiteValidationFile(const Models::UploadAppSiteValidationFileRequest &request);

      /**
       * @summary Upload material files
       *
       * @param request UploadMaterialFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadMaterialFileResponse
       */
      Models::UploadMaterialFileResponse uploadMaterialFileWithOptions(const Models::UploadMaterialFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upload material files
       *
       * @param request UploadMaterialFileRequest
       * @return UploadMaterialFileResponse
       */
      Models::UploadMaterialFileResponse uploadMaterialFile(const Models::UploadMaterialFileRequest &request);
  };
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
