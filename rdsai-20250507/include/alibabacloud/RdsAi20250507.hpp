// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_RDSAI20250507_HPP_
#define ALIBABACLOUD_RDSAI20250507_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/RdsAi20250507Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/RdsAi20250507.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Sends a conversation message.
       *
       * @param tmpReq ChatMessagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatMessagesResponse
       */
      FutureGenerator<Models::ChatMessagesResponse> chatMessagesWithSSE(const Models::ChatMessagesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends a conversation message.
       *
       * @param tmpReq ChatMessagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatMessagesResponse
       */
      Models::ChatMessagesResponse chatMessagesWithOptions(const Models::ChatMessagesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends a conversation message.
       *
       * @param request ChatMessagesRequest
       * @return ChatMessagesResponse
       */
      Models::ChatMessagesResponse chatMessages(const Models::ChatMessagesRequest &request);

      /**
       * @summary Stops a conversation.
       *
       * @param request ChatMessagesTaskStopRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatMessagesTaskStopResponse
       */
      Models::ChatMessagesTaskStopResponse chatMessagesTaskStopWithOptions(const Models::ChatMessagesTaskStopRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a conversation.
       *
       * @param request ChatMessagesTaskStopRequest
       * @return ChatMessagesTaskStopResponse
       */
      Models::ChatMessagesTaskStopResponse chatMessagesTaskStop(const Models::ChatMessagesTaskStopRequest &request);

      /**
       * @summary Creates a custom API key.
       *
       * @description ### Applicable engine
       * [RDS AI Assistant Ultimate Edition](https://www.alibabacloud.com/help/en/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
       *
       * @param request CreateApiKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateApiKeyResponse
       */
      Models::CreateApiKeyResponse createApiKeyWithOptions(const Models::CreateApiKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom API key.
       *
       * @description ### Applicable engine
       * [RDS AI Assistant Ultimate Edition](https://www.alibabacloud.com/help/en/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
       *
       * @param request CreateApiKeyRequest
       * @return CreateApiKeyResponse
       */
      Models::CreateApiKeyResponse createApiKey(const Models::CreateApiKeyRequest &request);

      /**
       * @summary Creates an RDS Supabase instance.
       *
       * @description ### Supported Engine  
       * RDS PostgreSQL  
       * ### Related Function Documentation  
       * >Warning: This API operation involves a Fee. Carefully read the related Function Documentation before performing this operation.
       *
       * @param tmpReq CreateAppInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAppInstanceResponse
       */
      Models::CreateAppInstanceResponse createAppInstanceWithOptions(const Models::CreateAppInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an RDS Supabase instance.
       *
       * @description ### Supported Engine  
       * RDS PostgreSQL  
       * ### Related Function Documentation  
       * >Warning: This API operation involves a Fee. Carefully read the related Function Documentation before performing this operation.
       *
       * @param request CreateAppInstanceRequest
       * @return CreateAppInstanceResponse
       */
      Models::CreateAppInstanceResponse createAppInstance(const Models::CreateAppInstanceRequest &request);

      /**
       * @summary Creates a user-specific agent.
       *
       * @param tmpReq CreateCustomAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCustomAgentResponse
       */
      Models::CreateCustomAgentResponse createCustomAgentWithOptions(const Models::CreateCustomAgentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a user-specific agent.
       *
       * @param request CreateCustomAgentRequest
       * @return CreateCustomAgentResponse
       */
      Models::CreateCustomAgentResponse createCustomAgent(const Models::CreateCustomAgentRequest &request);

      /**
       * @summary Creates a batch instance inspection task.
       *
       * @param request CreateInspectionTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInspectionTaskResponse
       */
      Models::CreateInspectionTaskResponse createInspectionTaskWithOptions(const Models::CreateInspectionTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a batch instance inspection task.
       *
       * @param request CreateInspectionTaskRequest
       * @return CreateInspectionTaskResponse
       */
      Models::CreateInspectionTaskResponse createInspectionTask(const Models::CreateInspectionTaskRequest &request);

      /**
       * @summary 触发 MO 用量明细 CSV 异步导出任务
       *
       * @description ### 适用引擎
       * [RDS AI 助手旗舰版](https://help.aliyun.com/zh/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
       *
       * @param request CreateMOUsageDetailExportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMOUsageDetailExportResponse
       */
      Models::CreateMOUsageDetailExportResponse createMOUsageDetailExportWithOptions(const Models::CreateMOUsageDetailExportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 触发 MO 用量明细 CSV 异步导出任务
       *
       * @description ### 适用引擎
       * [RDS AI 助手旗舰版](https://help.aliyun.com/zh/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
       *
       * @param request CreateMOUsageDetailExportRequest
       * @return CreateMOUsageDetailExportResponse
       */
      Models::CreateMOUsageDetailExportResponse createMOUsageDetailExport(const Models::CreateMOUsageDetailExportRequest &request);

      /**
       * @summary Creates a sandbox template.
       *
       * @description ### Applicable engine
       * RDS Supabase
       * ### Related documentation
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param request CreateSandboxTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSandboxTemplateResponse
       */
      Models::CreateSandboxTemplateResponse createSandboxTemplateWithOptions(const Models::CreateSandboxTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a sandbox template.
       *
       * @description ### Applicable engine
       * RDS Supabase
       * ### Related documentation
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param request CreateSandboxTemplateRequest
       * @return CreateSandboxTemplateResponse
       */
      Models::CreateSandboxTemplateResponse createSandboxTemplate(const Models::CreateSandboxTemplateRequest &request);

      /**
       * @summary Creates a scheduled inspection configuration for batch instances.
       *
       * @description ### Applicable engine
       * RDS PostgreSQL
       * ### Related feature documentation
       * >Warning: This API operation incurs fees. Read the related feature documentation before you perform this operation.
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param request CreateScheduledTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateScheduledTaskResponse
       */
      Models::CreateScheduledTaskResponse createScheduledTaskWithOptions(const Models::CreateScheduledTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a scheduled inspection configuration for batch instances.
       *
       * @description ### Applicable engine
       * RDS PostgreSQL
       * ### Related feature documentation
       * >Warning: This API operation incurs fees. Read the related feature documentation before you perform this operation.
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param request CreateScheduledTaskRequest
       * @return CreateScheduledTaskResponse
       */
      Models::CreateScheduledTaskResponse createScheduledTask(const Models::CreateScheduledTaskRequest &request);

      /**
       * @summary Create a user-defined skill.
       *
       * @param tmpReq CreateSkillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSkillResponse
       */
      Models::CreateSkillResponse createSkillWithOptions(const Models::CreateSkillRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a user-defined skill.
       *
       * @param request CreateSkillRequest
       * @return CreateSkillResponse
       */
      Models::CreateSkillResponse createSkill(const Models::CreateSkillRequest &request);

      /**
       * @summary Deletes a custom API key.
       *
       * @description ### Applicable engine
       * [RDS AI Assistant Enterprise Edition](https://help.aliyun.com/zh/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
       *
       * @param request DeleteApiKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteApiKeyResponse
       */
      Models::DeleteApiKeyResponse deleteApiKeyWithOptions(const Models::DeleteApiKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom API key.
       *
       * @description ### Applicable engine
       * [RDS AI Assistant Enterprise Edition](https://help.aliyun.com/zh/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
       *
       * @param request DeleteApiKeyRequest
       * @return DeleteApiKeyResponse
       */
      Models::DeleteApiKeyResponse deleteApiKey(const Models::DeleteApiKeyRequest &request);

      /**
       * @summary Deletes an RDS AI application instance.
       *
       * @description ### Applicable DPI engine
       * RDS PostgreSQL
       * ### Related feature documentation
       * >Warning: This API operation incurs fees. Read the related feature documentation carefully before you perform this operation.
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       * >Notice: Deleting an RDS Supabase project does not automatically delete the ApsaraDB RDS for PostgreSQL instance or the Internet NAT gateway that were created with the project. You must [manual release the instance](https://help.aliyun.com/document_detail/96749.html) and delete the [Internet NAT gateway](https://help.aliyun.com/document_detail/121139.html) and [EIP](https://help.aliyun.com/document_detail/121527.html).
       *
       * @param request DeleteAppInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAppInstanceResponse
       */
      Models::DeleteAppInstanceResponse deleteAppInstanceWithOptions(const Models::DeleteAppInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an RDS AI application instance.
       *
       * @description ### Applicable DPI engine
       * RDS PostgreSQL
       * ### Related feature documentation
       * >Warning: This API operation incurs fees. Read the related feature documentation carefully before you perform this operation.
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       * >Notice: Deleting an RDS Supabase project does not automatically delete the ApsaraDB RDS for PostgreSQL instance or the Internet NAT gateway that were created with the project. You must [manual release the instance](https://help.aliyun.com/document_detail/96749.html) and delete the [Internet NAT gateway](https://help.aliyun.com/document_detail/121139.html) and [EIP](https://help.aliyun.com/document_detail/121527.html).
       *
       * @param request DeleteAppInstanceRequest
       * @return DeleteAppInstanceResponse
       */
      Models::DeleteAppInstanceResponse deleteAppInstance(const Models::DeleteAppInstanceRequest &request);

      /**
       * @summary Deletes the dedicated agent created by a user.
       *
       * @param request DeleteCustomAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomAgentResponse
       */
      Models::DeleteCustomAgentResponse deleteCustomAgentWithOptions(const Models::DeleteCustomAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the dedicated agent created by a user.
       *
       * @param request DeleteCustomAgentRequest
       * @return DeleteCustomAgentResponse
       */
      Models::DeleteCustomAgentResponse deleteCustomAgent(const Models::DeleteCustomAgentRequest &request);

      /**
       * @summary Deletes a sandbox template.
       *
       * @description ### Applicable engine
       * RDS Supabase
       * ### Related documentation
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param request DeleteSandboxTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSandboxTemplateResponse
       */
      Models::DeleteSandboxTemplateResponse deleteSandboxTemplateWithOptions(const Models::DeleteSandboxTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a sandbox template.
       *
       * @description ### Applicable engine
       * RDS Supabase
       * ### Related documentation
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param request DeleteSandboxTemplateRequest
       * @return DeleteSandboxTemplateResponse
       */
      Models::DeleteSandboxTemplateResponse deleteSandboxTemplate(const Models::DeleteSandboxTemplateRequest &request);

      /**
       * @summary Deletes a specified inspection configuration.
       *
       * @param request DeleteScheduledTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteScheduledTaskResponse
       */
      Models::DeleteScheduledTaskResponse deleteScheduledTaskWithOptions(const Models::DeleteScheduledTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified inspection configuration.
       *
       * @param request DeleteScheduledTaskRequest
       * @return DeleteScheduledTaskResponse
       */
      Models::DeleteScheduledTaskResponse deleteScheduledTask(const Models::DeleteScheduledTaskRequest &request);

      /**
       * @summary Deletes the specified skill.
       *
       * @param request DeleteSkillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSkillResponse
       */
      Models::DeleteSkillResponse deleteSkillWithOptions(const Models::DeleteSkillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the specified skill.
       *
       * @param request DeleteSkillRequest
       * @return DeleteSkillResponse
       */
      Models::DeleteSkillResponse deleteSkill(const Models::DeleteSkillRequest &request);

      /**
       * @summary Queries the details of an RDS AI application instance.
       *
       * @description ### Applicable engine
       * RDS PostgreSQL
       * ### Related documentation
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param request DescribeAppInstanceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAppInstanceAttributeResponse
       */
      Models::DescribeAppInstanceAttributeResponse describeAppInstanceAttributeWithOptions(const Models::DescribeAppInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an RDS AI application instance.
       *
       * @description ### Applicable engine
       * RDS PostgreSQL
       * ### Related documentation
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param request DescribeAppInstanceAttributeRequest
       * @return DescribeAppInstanceAttributeResponse
       */
      Models::DescribeAppInstanceAttributeResponse describeAppInstanceAttribute(const Models::DescribeAppInstanceAttributeRequest &request);

      /**
       * @summary This API retrieves a list of RDS AI application instances.
       *
       * @description ### Supported engines
       * RDS PostgreSQL
       * ### Related documentation
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param request DescribeAppInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAppInstancesResponse
       */
      Models::DescribeAppInstancesResponse describeAppInstancesWithOptions(const Models::DescribeAppInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API retrieves a list of RDS AI application instances.
       *
       * @description ### Supported engines
       * RDS PostgreSQL
       * ### Related documentation
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param request DescribeAppInstancesRequest
       * @return DescribeAppInstancesResponse
       */
      Models::DescribeAppInstancesResponse describeAppInstances(const Models::DescribeAppInstancesRequest &request);

      /**
       * @summary Queries the list of supported sandbox templates.
       *
       * @description ### Applicable engine
       * RDS Supabase
       * ### Related documentation
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param request DescribeCommonSandboxTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCommonSandboxTemplatesResponse
       */
      Models::DescribeCommonSandboxTemplatesResponse describeCommonSandboxTemplatesWithOptions(const Models::DescribeCommonSandboxTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of supported sandbox templates.
       *
       * @description ### Applicable engine
       * RDS Supabase
       * ### Related documentation
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param request DescribeCommonSandboxTemplatesRequest
       * @return DescribeCommonSandboxTemplatesResponse
       */
      Models::DescribeCommonSandboxTemplatesResponse describeCommonSandboxTemplates(const Models::DescribeCommonSandboxTemplatesRequest &request);

      /**
       * @summary This API retrieves the list of events.
       *
       * @param request DescribeEventsListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEventsListResponse
       */
      Models::DescribeEventsListResponse describeEventsListWithOptions(const Models::DescribeEventsListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API retrieves the list of events.
       *
       * @param request DescribeEventsListRequest
       * @return DescribeEventsListResponse
       */
      Models::DescribeEventsListResponse describeEventsList(const Models::DescribeEventsListRequest &request);

      /**
       * @summary Queries the authentication information of an RDS AI application instance.
       *
       * @description ### Applicable engine
       * RDS PostgreSQL
       * ### Related documentation
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param request DescribeInstanceAuthInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceAuthInfoResponse
       */
      Models::DescribeInstanceAuthInfoResponse describeInstanceAuthInfoWithOptions(const Models::DescribeInstanceAuthInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the authentication information of an RDS AI application instance.
       *
       * @description ### Applicable engine
       * RDS PostgreSQL
       * ### Related documentation
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param request DescribeInstanceAuthInfoRequest
       * @return DescribeInstanceAuthInfoResponse
       */
      Models::DescribeInstanceAuthInfoResponse describeInstanceAuthInfo(const Models::DescribeInstanceAuthInfoRequest &request);

      /**
       * @summary Queries the endpoint information of an RDS AI application instance.
       *
       * @description ### Applicable engine
       * RDS PostgreSQL
       * ### Related documentation
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param request DescribeInstanceEndpointsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceEndpointsResponse
       */
      Models::DescribeInstanceEndpointsResponse describeInstanceEndpointsWithOptions(const Models::DescribeInstanceEndpointsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the endpoint information of an RDS AI application instance.
       *
       * @description ### Applicable engine
       * RDS PostgreSQL
       * ### Related documentation
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param request DescribeInstanceEndpointsRequest
       * @return DescribeInstanceEndpointsResponse
       */
      Models::DescribeInstanceEndpointsResponse describeInstanceEndpoints(const Models::DescribeInstanceEndpointsRequest &request);

      /**
       * @summary Queries the IP whitelist of an ApsaraDB RDS AI application instance.
       *
       * @description ### Applicable engine
       * RDS PostgreSQL
       * ### Related documentation
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param request DescribeInstanceIpWhitelistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceIpWhitelistResponse
       */
      Models::DescribeInstanceIpWhitelistResponse describeInstanceIpWhitelistWithOptions(const Models::DescribeInstanceIpWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the IP whitelist of an ApsaraDB RDS AI application instance.
       *
       * @description ### Applicable engine
       * RDS PostgreSQL
       * ### Related documentation
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param request DescribeInstanceIpWhitelistRequest
       * @return DescribeInstanceIpWhitelistResponse
       */
      Models::DescribeInstanceIpWhitelistResponse describeInstanceIpWhitelist(const Models::DescribeInstanceIpWhitelistRequest &request);

      /**
       * @summary Queries the RAG Agent configuration of an RDS AI application instance.
       *
       * @param request DescribeInstanceRAGConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceRAGConfigResponse
       */
      Models::DescribeInstanceRAGConfigResponse describeInstanceRAGConfigWithOptions(const Models::DescribeInstanceRAGConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the RAG Agent configuration of an RDS AI application instance.
       *
       * @param request DescribeInstanceRAGConfigRequest
       * @return DescribeInstanceRAGConfigResponse
       */
      Models::DescribeInstanceRAGConfigResponse describeInstanceRAGConfig(const Models::DescribeInstanceRAGConfigRequest &request);

      /**
       * @summary Queries the SSL configuration of an RDS AI application instance.
       *
       * @description ### Supported engine
       * RDS PostgreSQL
       * ### Related documentation
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param request DescribeInstanceSSLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceSSLResponse
       */
      Models::DescribeInstanceSSLResponse describeInstanceSSLWithOptions(const Models::DescribeInstanceSSLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the SSL configuration of an RDS AI application instance.
       *
       * @description ### Supported engine
       * RDS PostgreSQL
       * ### Related documentation
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param request DescribeInstanceSSLRequest
       * @return DescribeInstanceSSLResponse
       */
      Models::DescribeInstanceSSLResponse describeInstanceSSL(const Models::DescribeInstanceSSLRequest &request);

      /**
       * @summary Queries the storage configuration of an RDS AI application instance.
       *
       * @description ### Applicable engine
       * RDS PostgreSQL
       * ### Related documentation
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       * > Currently, only Object Storage Service (OSS) is supported.
       *
       * @param request DescribeInstanceStorageConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceStorageConfigResponse
       */
      Models::DescribeInstanceStorageConfigResponse describeInstanceStorageConfigWithOptions(const Models::DescribeInstanceStorageConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the storage configuration of an RDS AI application instance.
       *
       * @description ### Applicable engine
       * RDS PostgreSQL
       * ### Related documentation
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       * > Currently, only Object Storage Service (OSS) is supported.
       *
       * @param request DescribeInstanceStorageConfigRequest
       * @return DescribeInstanceStorageConfigResponse
       */
      Models::DescribeInstanceStorageConfigResponse describeInstanceStorageConfig(const Models::DescribeInstanceStorageConfigRequest &request);

      /**
       * @summary Queries the token usage records of RDS AI Assistant Ultimate Edition.
       *
       * @description ### Applicable engine
       * [RDS AI Assistant Ultimate Edition](https://www.alibabacloud.com/help/en/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
       *
       * @param request DescribeMOTokenUsageDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMOTokenUsageDetailResponse
       */
      Models::DescribeMOTokenUsageDetailResponse describeMOTokenUsageDetailWithOptions(const Models::DescribeMOTokenUsageDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the token usage records of RDS AI Assistant Ultimate Edition.
       *
       * @description ### Applicable engine
       * [RDS AI Assistant Ultimate Edition](https://www.alibabacloud.com/help/en/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
       *
       * @param request DescribeMOTokenUsageDetailRequest
       * @return DescribeMOTokenUsageDetailResponse
       */
      Models::DescribeMOTokenUsageDetailResponse describeMOTokenUsageDetail(const Models::DescribeMOTokenUsageDetailRequest &request);

      /**
       * @summary 查询 MO 用量明细 CSV 异步导出任务的状态/下载链接
       *
       * @description ### 适用引擎
       * [RDS AI 助手旗舰版](https://help.aliyun.com/zh/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
       *
       * @param request DescribeMOUsageDetailExportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMOUsageDetailExportResponse
       */
      Models::DescribeMOUsageDetailExportResponse describeMOUsageDetailExportWithOptions(const Models::DescribeMOUsageDetailExportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询 MO 用量明细 CSV 异步导出任务的状态/下载链接
       *
       * @description ### 适用引擎
       * [RDS AI 助手旗舰版](https://help.aliyun.com/zh/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
       *
       * @param request DescribeMOUsageDetailExportRequest
       * @return DescribeMOUsageDetailExportResponse
       */
      Models::DescribeMOUsageDetailExportResponse describeMOUsageDetailExport(const Models::DescribeMOUsageDetailExportRequest &request);

      /**
       * @summary View basic information and usage for the RDS AI Assistant Ultimate Edition.
       *
       * @description ### Supported engines
       * [RDS AI Assistant Enterprise Edition](https://help.aliyun.com/zh/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
       *
       * @param request DescribeModelOperatorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeModelOperatorResponse
       */
      Models::DescribeModelOperatorResponse describeModelOperatorWithOptions(const Models::DescribeModelOperatorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary View basic information and usage for the RDS AI Assistant Ultimate Edition.
       *
       * @description ### Supported engines
       * [RDS AI Assistant Enterprise Edition](https://help.aliyun.com/zh/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
       *
       * @param request DescribeModelOperatorRequest
       * @return DescribeModelOperatorResponse
       */
      Models::DescribeModelOperatorResponse describeModelOperator(const Models::DescribeModelOperatorRequest &request);

      /**
       * @summary Queries instance monitoring data of an ApsaraDB RDS AI Assistant Ultimate Edition instance.
       *
       * @description ### Applicable engine
       * [RDS AI Assistant Ultimate Edition](https://www.alibabacloud.com/help/en/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
       *
       * @param tmpReq DescribeMonitorDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMonitorDataResponse
       */
      Models::DescribeMonitorDataResponse describeMonitorDataWithOptions(const Models::DescribeMonitorDataRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries instance monitoring data of an ApsaraDB RDS AI Assistant Ultimate Edition instance.
       *
       * @description ### Applicable engine
       * [RDS AI Assistant Ultimate Edition](https://www.alibabacloud.com/help/en/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
       *
       * @param request DescribeMonitorDataRequest
       * @return DescribeMonitorDataResponse
       */
      Models::DescribeMonitorDataResponse describeMonitorData(const Models::DescribeMonitorDataRequest &request);

      /**
       * @summary Queries the list of sandbox templates used to create Supabase sandboxes.
       *
       * @description ### Applicable engine
       * RDS Supabase
       * ### Related documentation
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param request DescribeSandboxTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSandboxTemplatesResponse
       */
      Models::DescribeSandboxTemplatesResponse describeSandboxTemplatesWithOptions(const Models::DescribeSandboxTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of sandbox templates used to create Supabase sandboxes.
       *
       * @description ### Applicable engine
       * RDS Supabase
       * ### Related documentation
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param request DescribeSandboxTemplatesRequest
       * @return DescribeSandboxTemplatesResponse
       */
      Models::DescribeSandboxTemplatesResponse describeSandboxTemplates(const Models::DescribeSandboxTemplatesRequest &request);

      /**
       * @summary Describes the whitelist of an RDS AI Assistant Enterprise Edition instance.
       *
       * @description ### Supported engine
       * [RDS AI Assistant Enterprise Edition](https://help.aliyun.com/zh/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
       *
       * @param request DescribeWhitelistIpsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWhitelistIpsResponse
       */
      Models::DescribeWhitelistIpsResponse describeWhitelistIpsWithOptions(const Models::DescribeWhitelistIpsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Describes the whitelist of an RDS AI Assistant Enterprise Edition instance.
       *
       * @description ### Supported engine
       * [RDS AI Assistant Enterprise Edition](https://help.aliyun.com/zh/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
       *
       * @param request DescribeWhitelistIpsRequest
       * @return DescribeWhitelistIpsResponse
       */
      Models::DescribeWhitelistIpsResponse describeWhitelistIps(const Models::DescribeWhitelistIpsRequest &request);

      /**
       * @summary Disables the sandbox feature and Edge Routine capabilities for a Supabase instance. Note: This operation deletes all sandboxes and edge functions of the instance. Fully assess business risks before performing this operation.
       *
       * @description Disables the sandbox feature and Edge Routine capabilities for a Supabase instance.
       * >Notice: This operation deletes all sandboxes and edge functions of the Supabase instance. Fully assess business risks before performing this operation.
       *
       * @param request DisableAgentRuntimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableAgentRuntimeResponse
       */
      Models::DisableAgentRuntimeResponse disableAgentRuntimeWithOptions(const Models::DisableAgentRuntimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the sandbox feature and Edge Routine capabilities for a Supabase instance. Note: This operation deletes all sandboxes and edge functions of the instance. Fully assess business risks before performing this operation.
       *
       * @description Disables the sandbox feature and Edge Routine capabilities for a Supabase instance.
       * >Notice: This operation deletes all sandboxes and edge functions of the Supabase instance. Fully assess business risks before performing this operation.
       *
       * @param request DisableAgentRuntimeRequest
       * @return DisableAgentRuntimeResponse
       */
      Models::DisableAgentRuntimeResponse disableAgentRuntime(const Models::DisableAgentRuntimeRequest &request);

      /**
       * @summary Enables the sandbox and Edge Routine capabilities for a Supabase instance. Read the operation description before you call this operation.
       *
       * @description During the public preview, the sandbox and Edge Routine features are free of charge.
       * ### Before you begin
       * Before using this feature, you must complete [service-linked role authorization](https://api.aliyun.com/api/ResourceManager/2020-03-31/CreateServiceLinkedRole?spm=api-workbench.API%20Document.0.0.4ea75094rJgPzK&RegionId=cn-beijing&tab=DEBUG&params=%7B%2522ServiceName%2522:%2522supabase.rdsai.aliyuncs.com%2522%7D&sdkStyle=old). The service-linked role used is [AliyunServiceRoleForRDSAISupabase](https://www.alibabacloud.com/help/en/ram/product-overview/services-that-work-with-service-linked-roles).
       *
       * @param request EnableAgentRuntimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableAgentRuntimeResponse
       */
      Models::EnableAgentRuntimeResponse enableAgentRuntimeWithOptions(const Models::EnableAgentRuntimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the sandbox and Edge Routine capabilities for a Supabase instance. Read the operation description before you call this operation.
       *
       * @description During the public preview, the sandbox and Edge Routine features are free of charge.
       * ### Before you begin
       * Before using this feature, you must complete [service-linked role authorization](https://api.aliyun.com/api/ResourceManager/2020-03-31/CreateServiceLinkedRole?spm=api-workbench.API%20Document.0.0.4ea75094rJgPzK&RegionId=cn-beijing&tab=DEBUG&params=%7B%2522ServiceName%2522:%2522supabase.rdsai.aliyuncs.com%2522%7D&sdkStyle=old). The service-linked role used is [AliyunServiceRoleForRDSAISupabase](https://www.alibabacloud.com/help/en/ram/product-overview/services-that-work-with-service-linked-roles).
       *
       * @param request EnableAgentRuntimeRequest
       * @return EnableAgentRuntimeResponse
       */
      Models::EnableAgentRuntimeResponse enableAgentRuntime(const Models::EnableAgentRuntimeRequest &request);

      /**
       * @summary GetAvailableLLMModels
       *
       * @description ### 适用引擎
       * RDS SUPABASE
       *
       * @param request GetAvailableLLMModelsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAvailableLLMModelsResponse
       */
      Models::GetAvailableLLMModelsResponse getAvailableLLMModelsWithOptions(const Models::GetAvailableLLMModelsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary GetAvailableLLMModels
       *
       * @description ### 适用引擎
       * RDS SUPABASE
       *
       * @param request GetAvailableLLMModelsRequest
       * @return GetAvailableLLMModelsResponse
       */
      Models::GetAvailableLLMModelsResponse getAvailableLLMModels(const Models::GetAvailableLLMModelsRequest &request);

      /**
       * @summary Queries the historical conversations of a user.
       *
       * @param request GetConversationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConversationsResponse
       */
      Models::GetConversationsResponse getConversationsWithOptions(const Models::GetConversationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the historical conversations of a user.
       *
       * @param request GetConversationsRequest
       * @return GetConversationsResponse
       */
      Models::GetConversationsResponse getConversations(const Models::GetConversationsRequest &request);

      /**
       * @summary Retrieves details for a specified custom agent.
       *
       * @param request GetCustomAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCustomAgentResponse
       */
      Models::GetCustomAgentResponse getCustomAgentWithOptions(const Models::GetCustomAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves details for a specified custom agent.
       *
       * @param request GetCustomAgentRequest
       * @return GetCustomAgentResponse
       */
      Models::GetCustomAgentResponse getCustomAgent(const Models::GetCustomAgentRequest &request);

      /**
       * @summary Retrieves the details of an inspection report by report ID.
       *
       * @param request GetInspectionReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInspectionReportResponse
       */
      Models::GetInspectionReportResponse getInspectionReportWithOptions(const Models::GetInspectionReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of an inspection report by report ID.
       *
       * @param request GetInspectionReportRequest
       * @return GetInspectionReportResponse
       */
      Models::GetInspectionReportResponse getInspectionReport(const Models::GetInspectionReportRequest &request);

      /**
       * @summary Retrieves a list of messages in a specific conversation.
       *
       * @param request GetMessagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMessagesResponse
       */
      Models::GetMessagesResponse getMessagesWithOptions(const Models::GetMessagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of messages in a specific conversation.
       *
       * @param request GetMessagesRequest
       * @return GetMessagesResponse
       */
      Models::GetMessagesResponse getMessages(const Models::GetMessagesRequest &request);

      /**
       * @summary Obtain RDS AI Assistant Ultimate order information
       *
       * @description ### Applicable DPI engine
       *
       * @param request GetModelOperatorOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetModelOperatorOrderResponse
       */
      Models::GetModelOperatorOrderResponse getModelOperatorOrderWithOptions(const Models::GetModelOperatorOrderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain RDS AI Assistant Ultimate order information
       *
       * @description ### Applicable DPI engine
       *
       * @param request GetModelOperatorOrderRequest
       * @return GetModelOperatorOrderResponse
       */
      Models::GetModelOperatorOrderResponse getModelOperatorOrder(const Models::GetModelOperatorOrderRequest &request);

      /**
       * @summary Queries the IDs of all instances that are included by a specified scheduled inspection configuration.
       *
       * @param request GetScheduledInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetScheduledInstancesResponse
       */
      Models::GetScheduledInstancesResponse getScheduledInstancesWithOptions(const Models::GetScheduledInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the IDs of all instances that are included by a specified scheduled inspection configuration.
       *
       * @param request GetScheduledInstancesRequest
       * @return GetScheduledInstancesResponse
       */
      Models::GetScheduledInstancesResponse getScheduledInstances(const Models::GetScheduledInstancesRequest &request);

      /**
       * @summary Queries all inspection reports under a specified scheduled task, with support for time range filtering and pagination.
       *
       * @param request GetScheduledReportsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetScheduledReportsResponse
       */
      Models::GetScheduledReportsResponse getScheduledReportsWithOptions(const Models::GetScheduledReportsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all inspection reports under a specified scheduled task, with support for time range filtering and pagination.
       *
       * @param request GetScheduledReportsRequest
       * @return GetScheduledReportsResponse
       */
      Models::GetScheduledReportsResponse getScheduledReports(const Models::GetScheduledReportsRequest &request);

      /**
       * @summary Obtains the details of a specified skill. You can obtain the details of user-defined skills or the system preset skills.
       *
       * @param request GetSkillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSkillResponse
       */
      Models::GetSkillResponse getSkillWithOptions(const Models::GetSkillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the details of a specified skill. You can obtain the details of user-defined skills or the system preset skills.
       *
       * @param request GetSkillRequest
       * @return GetSkillResponse
       */
      Models::GetSkillResponse getSkill(const Models::GetSkillRequest &request);

      /**
       * @summary Queries the list of individual inspection reports for all non-scheduled tasks under a specified user, with pagination support.
       *
       * @param request GetStandAloneReportsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetStandAloneReportsResponse
       */
      Models::GetStandAloneReportsResponse getStandAloneReportsWithOptions(const Models::GetStandAloneReportsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of individual inspection reports for all non-scheduled tasks under a specified user, with pagination support.
       *
       * @param request GetStandAloneReportsRequest
       * @return GetStandAloneReportsResponse
       */
      Models::GetStandAloneReportsResponse getStandAloneReports(const Models::GetStandAloneReportsRequest &request);

      /**
       * @summary Queries custom API keys.
       *
       * @description ### Applicable engine
       * [RDS AI Assistant Ultimate Edition](https://www.alibabacloud.com/help/en/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
       *
       * @param request ListApiKeysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApiKeysResponse
       */
      Models::ListApiKeysResponse listApiKeysWithOptions(const Models::ListApiKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries custom API keys.
       *
       * @description ### Applicable engine
       * [RDS AI Assistant Ultimate Edition](https://www.alibabacloud.com/help/en/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
       *
       * @param request ListApiKeysRequest
       * @return ListApiKeysResponse
       */
      Models::ListApiKeysResponse listApiKeys(const Models::ListApiKeysRequest &request);

      /**
       * @summary Lists your custom agents.
       *
       * @param request ListCustomAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCustomAgentResponse
       */
      Models::ListCustomAgentResponse listCustomAgentWithOptions(const Models::ListCustomAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists your custom agents.
       *
       * @param request ListCustomAgentRequest
       * @return ListCustomAgentResponse
       */
      Models::ListCustomAgentResponse listCustomAgent(const Models::ListCustomAgentRequest &request);

      /**
       * @summary Queries the custom agent tools of the user.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCustomAgentToolsResponse
       */
      Models::ListCustomAgentToolsResponse listCustomAgentToolsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the custom agent tools of the user.
       *
       * @return ListCustomAgentToolsResponse
       */
      Models::ListCustomAgentToolsResponse listCustomAgentTools();

      /**
       * @summary ListLLMTokenUsage
       *
       * @description ### 适用引擎
       * RDS SUPABASE
       *
       * @param request ListLLMTokenUsageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLLMTokenUsageResponse
       */
      Models::ListLLMTokenUsageResponse listLLMTokenUsageWithOptions(const Models::ListLLMTokenUsageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ListLLMTokenUsage
       *
       * @description ### 适用引擎
       * RDS SUPABASE
       *
       * @param request ListLLMTokenUsageRequest
       * @return ListLLMTokenUsageResponse
       */
      Models::ListLLMTokenUsageResponse listLLMTokenUsage(const Models::ListLLMTokenUsageRequest &request);

      /**
       * @summary Queries the list of basic information about all inspection configurations under a specified user UID.
       *
       * @param request ListScheduledTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListScheduledTasksResponse
       */
      Models::ListScheduledTasksResponse listScheduledTasksWithOptions(const Models::ListScheduledTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of basic information about all inspection configurations under a specified user UID.
       *
       * @param request ListScheduledTasksRequest
       * @return ListScheduledTasksResponse
       */
      Models::ListScheduledTasksResponse listScheduledTasks(const Models::ListScheduledTasksRequest &request);

      /**
       * @summary Obtains the user-defined skills and all system preset skills of the current user.
       *
       * @param request ListSkillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSkillResponse
       */
      Models::ListSkillResponse listSkillWithOptions(const Models::ListSkillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the user-defined skills and all system preset skills of the current user.
       *
       * @param request ListSkillRequest
       * @return ListSkillResponse
       */
      Models::ListSkillResponse listSkill(const Models::ListSkillRequest &request);

      /**
       * @summary Modifies the modules of an RDS AI application instance.
       *
       * @description ### Applicable engine
       * RDS PostgreSQL
       * ### Related documentation
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param tmpReq ModifyAppInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAppInstanceResponse
       */
      Models::ModifyAppInstanceResponse modifyAppInstanceWithOptions(const Models::ModifyAppInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the modules of an RDS AI application instance.
       *
       * @description ### Applicable engine
       * RDS PostgreSQL
       * ### Related documentation
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param request ModifyAppInstanceRequest
       * @return ModifyAppInstanceResponse
       */
      Models::ModifyAppInstanceResponse modifyAppInstance(const Models::ModifyAppInstanceRequest &request);

      /**
       * @summary Modifies the authentication configuration of an RDS AI application instance.
       *
       * @description ### Applicable engine
       * RDS PostgreSQL
       * ### Related documentation
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param tmpReq ModifyInstanceAuthConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceAuthConfigResponse
       */
      Models::ModifyInstanceAuthConfigResponse modifyInstanceAuthConfigWithOptions(const Models::ModifyInstanceAuthConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the authentication configuration of an RDS AI application instance.
       *
       * @description ### Applicable engine
       * RDS PostgreSQL
       * ### Related documentation
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param request ModifyInstanceAuthConfigRequest
       * @return ModifyInstanceAuthConfigResponse
       */
      Models::ModifyInstanceAuthConfigResponse modifyInstanceAuthConfig(const Models::ModifyInstanceAuthConfigRequest &request);

      /**
       * @summary Modifies the general configurations of an instance, such as network EIP and NAT configurations.
       *
       * @param request ModifyInstanceConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceConfigResponse
       */
      Models::ModifyInstanceConfigResponse modifyInstanceConfigWithOptions(const Models::ModifyInstanceConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the general configurations of an instance, such as network EIP and NAT configurations.
       *
       * @param request ModifyInstanceConfigRequest
       * @return ModifyInstanceConfigResponse
       */
      Models::ModifyInstanceConfigResponse modifyInstanceConfig(const Models::ModifyInstanceConfigRequest &request);

      /**
       * @summary Modifies the IP whitelist of an ApsaraDB RDS AI application instance.
       *
       * @description ### Applicable engine
       * RDS PostgreSQL
       * ### Related documentation
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param request ModifyInstanceIpWhitelistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceIpWhitelistResponse
       */
      Models::ModifyInstanceIpWhitelistResponse modifyInstanceIpWhitelistWithOptions(const Models::ModifyInstanceIpWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the IP whitelist of an ApsaraDB RDS AI application instance.
       *
       * @description ### Applicable engine
       * RDS PostgreSQL
       * ### Related documentation
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param request ModifyInstanceIpWhitelistRequest
       * @return ModifyInstanceIpWhitelistResponse
       */
      Models::ModifyInstanceIpWhitelistResponse modifyInstanceIpWhitelist(const Models::ModifyInstanceIpWhitelistRequest &request);

      /**
       * @summary Modifies the RAG Agent configuration of an RDS AI application instance.
       *
       * @param tmpReq ModifyInstanceRAGConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceRAGConfigResponse
       */
      Models::ModifyInstanceRAGConfigResponse modifyInstanceRAGConfigWithOptions(const Models::ModifyInstanceRAGConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the RAG Agent configuration of an RDS AI application instance.
       *
       * @param request ModifyInstanceRAGConfigRequest
       * @return ModifyInstanceRAGConfigResponse
       */
      Models::ModifyInstanceRAGConfigResponse modifyInstanceRAGConfig(const Models::ModifyInstanceRAGConfigRequest &request);

      /**
       * @summary Modifies the SSL configuration of an RDS AI application instance.
       *
       * @description ### Applicable engine
       * RDS PostgreSQL
       * ### Related documentation
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param request ModifyInstanceSSLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceSSLResponse
       */
      Models::ModifyInstanceSSLResponse modifyInstanceSSLWithOptions(const Models::ModifyInstanceSSLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the SSL configuration of an RDS AI application instance.
       *
       * @description ### Applicable engine
       * RDS PostgreSQL
       * ### Related documentation
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param request ModifyInstanceSSLRequest
       * @return ModifyInstanceSSLResponse
       */
      Models::ModifyInstanceSSLResponse modifyInstanceSSL(const Models::ModifyInstanceSSLRequest &request);

      /**
       * @summary Modifies the storage configuration of an RDS AI application instance.
       *
       * @description ### Applicable engine
       * RDS PostgreSQL
       * ### Related documentation
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       * > Currently, only Object Storage Service (OSS) is supported.
       *
       * @param tmpReq ModifyInstanceStorageConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceStorageConfigResponse
       */
      Models::ModifyInstanceStorageConfigResponse modifyInstanceStorageConfigWithOptions(const Models::ModifyInstanceStorageConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the storage configuration of an RDS AI application instance.
       *
       * @description ### Applicable engine
       * RDS PostgreSQL
       * ### Related documentation
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       * > Currently, only Object Storage Service (OSS) is supported.
       *
       * @param request ModifyInstanceStorageConfigRequest
       * @return ModifyInstanceStorageConfigResponse
       */
      Models::ModifyInstanceStorageConfigResponse modifyInstanceStorageConfig(const Models::ModifyInstanceStorageConfigRequest &request);

      /**
       * @summary Batch modifies the SSL configurations of RDS AI application instances.
       *
       * @description ### Applicable engine
       * RDS PostgreSQL
       * ### Related documentation
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param tmpReq ModifyInstancesSSLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstancesSSLResponse
       */
      Models::ModifyInstancesSSLResponse modifyInstancesSSLWithOptions(const Models::ModifyInstancesSSLRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Batch modifies the SSL configurations of RDS AI application instances.
       *
       * @description ### Applicable engine
       * RDS PostgreSQL
       * ### Related documentation
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param request ModifyInstancesSSLRequest
       * @return ModifyInstancesSSLResponse
       */
      Models::ModifyInstancesSSLResponse modifyInstancesSSL(const Models::ModifyInstancesSSLRequest &request);

      /**
       * @summary Modifies the returned messages.
       *
       * @param request ModifyMessagesFeedbacksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyMessagesFeedbacksResponse
       */
      Models::ModifyMessagesFeedbacksResponse modifyMessagesFeedbacksWithOptions(const Models::ModifyMessagesFeedbacksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the returned messages.
       *
       * @param request ModifyMessagesFeedbacksRequest
       * @return ModifyMessagesFeedbacksResponse
       */
      Models::ModifyMessagesFeedbacksResponse modifyMessagesFeedbacks(const Models::ModifyMessagesFeedbacksRequest &request);

      /**
       * @summary Modifies a sandbox template.
       *
       * @description ### Applicable engine
       * RDS Supabase
       * ### Related documentation
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param request ModifySandboxTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySandboxTemplateResponse
       */
      Models::ModifySandboxTemplateResponse modifySandboxTemplateWithOptions(const Models::ModifySandboxTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a sandbox template.
       *
       * @description ### Applicable engine
       * RDS Supabase
       * ### Related documentation
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param request ModifySandboxTemplateRequest
       * @return ModifySandboxTemplateResponse
       */
      Models::ModifySandboxTemplateResponse modifySandboxTemplate(const Models::ModifySandboxTemplateRequest &request);

      /**
       * @summary Modifies an existing inspection configuration.
       *
       * @param request ModifyScheduledTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyScheduledTaskResponse
       */
      Models::ModifyScheduledTaskResponse modifyScheduledTaskWithOptions(const Models::ModifyScheduledTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an existing inspection configuration.
       *
       * @param request ModifyScheduledTaskRequest
       * @return ModifyScheduledTaskResponse
       */
      Models::ModifyScheduledTaskResponse modifyScheduledTask(const Models::ModifyScheduledTaskRequest &request);

      /**
       * @summary Modifies the IP whitelist for an RDS AI Assistant Enterprise Edition instance.
       *
       * @description ### Applicable engines
       * [RDS AI Assistant Enterprise Edition](https://help.aliyun.com/zh/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
       *
       * @param request ModifyWhitelistIpsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyWhitelistIpsResponse
       */
      Models::ModifyWhitelistIpsResponse modifyWhitelistIpsWithOptions(const Models::ModifyWhitelistIpsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the IP whitelist for an RDS AI Assistant Enterprise Edition instance.
       *
       * @description ### Applicable engines
       * [RDS AI Assistant Enterprise Edition](https://help.aliyun.com/zh/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
       *
       * @param request ModifyWhitelistIpsRequest
       * @return ModifyWhitelistIpsResponse
       */
      Models::ModifyWhitelistIpsResponse modifyWhitelistIps(const Models::ModifyWhitelistIpsRequest &request);

      /**
       * @summary Renames an API key.
       *
       * @description ### Applicable engines
       * [RDS AI Assistant (Ultimate Edition)](https://help.aliyun.com/zh/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
       *
       * @param request RenameApiKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenameApiKeyResponse
       */
      Models::RenameApiKeyResponse renameApiKeyWithOptions(const Models::RenameApiKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renames an API key.
       *
       * @description ### Applicable engines
       * [RDS AI Assistant (Ultimate Edition)](https://help.aliyun.com/zh/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
       *
       * @param request RenameApiKeyRequest
       * @return RenameApiKeyResponse
       */
      Models::RenameApiKeyResponse renameApiKey(const Models::RenameApiKeyRequest &request);

      /**
       * @summary Resets an API key.
       *
       * @description ### Applicable engines
       * [RDS AI Assistant (Ultimate Edition)](https://help.aliyun.com/zh/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
       *
       * @param request ResetApiKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetApiKeyResponse
       */
      Models::ResetApiKeyResponse resetApiKeyWithOptions(const Models::ResetApiKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets an API key.
       *
       * @description ### Applicable engines
       * [RDS AI Assistant (Ultimate Edition)](https://help.aliyun.com/zh/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
       *
       * @param request ResetApiKeyRequest
       * @return ResetApiKeyResponse
       */
      Models::ResetApiKeyResponse resetApiKey(const Models::ResetApiKeyRequest &request);

      /**
       * @summary Resets the keys of an RDS AI instance, including AnonKey, ServiceKey, and JwtSecret. After the reset, the old keys and secret become invalid immediately. Ensure that your applications are adapted accordingly.
       *
       * @description ### Applicable engine
       * RDS PostgreSQL
       * ### Related documentation
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param request ResetInstanceKeysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetInstanceKeysResponse
       */
      Models::ResetInstanceKeysResponse resetInstanceKeysWithOptions(const Models::ResetInstanceKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets the keys of an RDS AI instance, including AnonKey, ServiceKey, and JwtSecret. After the reset, the old keys and secret become invalid immediately. Ensure that your applications are adapted accordingly.
       *
       * @description ### Applicable engine
       * RDS PostgreSQL
       * ### Related documentation
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param request ResetInstanceKeysRequest
       * @return ResetInstanceKeysResponse
       */
      Models::ResetInstanceKeysResponse resetInstanceKeys(const Models::ResetInstanceKeysRequest &request);

      /**
       * @summary Resets the logon password and database access password of an ApsaraDB RDS AI application instance.
       *
       * @description ### Applicable engine
       * RDS PostgreSQL
       * ### Related documentation
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       * > Currently, only the password of the RDS Supabase Dashboard user can be reset.
       *
       * @param request ResetInstancePasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetInstancePasswordResponse
       */
      Models::ResetInstancePasswordResponse resetInstancePasswordWithOptions(const Models::ResetInstancePasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets the logon password and database access password of an ApsaraDB RDS AI application instance.
       *
       * @description ### Applicable engine
       * RDS PostgreSQL
       * ### Related documentation
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       * > Currently, only the password of the RDS Supabase Dashboard user can be reset.
       *
       * @param request ResetInstancePasswordRequest
       * @return ResetInstancePasswordResponse
       */
      Models::ResetInstancePasswordResponse resetInstancePassword(const Models::ResetInstancePasswordRequest &request);

      /**
       * @summary Restarts an ApsaraDB RDS AI application instance that is in the Running state.
       *
       * @description ### Applicable engine
       * RDS PostgreSQL
       * ### Related documentation
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param request RestartInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartInstanceResponse
       */
      Models::RestartInstanceResponse restartInstanceWithOptions(const Models::RestartInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts an ApsaraDB RDS AI application instance that is in the Running state.
       *
       * @description ### Applicable engine
       * RDS PostgreSQL
       * ### Related documentation
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param request RestartInstanceRequest
       * @return RestartInstanceResponse
       */
      Models::RestartInstanceResponse restartInstance(const Models::RestartInstanceRequest &request);

      /**
       * @summary Starts an RDS AI application instance that is in the Stopped state.
       *
       * @description ### Applicable engine
       * RDS PostgreSQL
       * ### Related feature documentation
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param request StartInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartInstanceResponse
       */
      Models::StartInstanceResponse startInstanceWithOptions(const Models::StartInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts an RDS AI application instance that is in the Stopped state.
       *
       * @description ### Applicable engine
       * RDS PostgreSQL
       * ### Related feature documentation
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param request StartInstanceRequest
       * @return StartInstanceResponse
       */
      Models::StartInstanceResponse startInstance(const Models::StartInstanceRequest &request);

      /**
       * @summary Pauses an RDS AI application instance that is in the Running state.
       *
       * @description ### Applicable engine
       * RDS PostgreSQL
       * ### Related documentation
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param request StopInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopInstanceResponse
       */
      Models::StopInstanceResponse stopInstanceWithOptions(const Models::StopInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Pauses an RDS AI application instance that is in the Running state.
       *
       * @description ### Applicable engine
       * RDS PostgreSQL
       * ### Related documentation
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param request StopInstanceRequest
       * @return StopInstanceResponse
       */
      Models::StopInstanceResponse stopInstance(const Models::StopInstanceRequest &request);

      /**
       * @summary Modify the API KEY Quota
       *
       * @description ### Supported engine
       * [RDS AI Assistant Ultimate Edition](https://help.aliyun.com/zh/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
       *
       * @param tmpReq UpdateApiKeyQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateApiKeyQuotaResponse
       */
      Models::UpdateApiKeyQuotaResponse updateApiKeyQuotaWithOptions(const Models::UpdateApiKeyQuotaRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify the API KEY Quota
       *
       * @description ### Supported engine
       * [RDS AI Assistant Ultimate Edition](https://help.aliyun.com/zh/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
       *
       * @param request UpdateApiKeyQuotaRequest
       * @return UpdateApiKeyQuotaResponse
       */
      Models::UpdateApiKeyQuotaResponse updateApiKeyQuota(const Models::UpdateApiKeyQuotaRequest &request);

      /**
       * @summary Updates a custom agent.
       *
       * @param tmpReq UpdateCustomAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCustomAgentResponse
       */
      Models::UpdateCustomAgentResponse updateCustomAgentWithOptions(const Models::UpdateCustomAgentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a custom agent.
       *
       * @param request UpdateCustomAgentRequest
       * @return UpdateCustomAgentResponse
       */
      Models::UpdateCustomAgentResponse updateCustomAgent(const Models::UpdateCustomAgentRequest &request);

      /**
       * @summary Updates the alert threshold percentage for API keys.
       *
       * @description ### Applicable engines
       * [RDS AI Assistant Enterprise Edition](https://help.aliyun.com/zh/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
       *
       * @param tmpReq UpdateMOQuotaAlertThresholdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMOQuotaAlertThresholdResponse
       */
      Models::UpdateMOQuotaAlertThresholdResponse updateMOQuotaAlertThresholdWithOptions(const Models::UpdateMOQuotaAlertThresholdRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the alert threshold percentage for API keys.
       *
       * @description ### Applicable engines
       * [RDS AI Assistant Enterprise Edition](https://help.aliyun.com/zh/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
       *
       * @param request UpdateMOQuotaAlertThresholdRequest
       * @return UpdateMOQuotaAlertThresholdResponse
       */
      Models::UpdateMOQuotaAlertThresholdResponse updateMOQuotaAlertThreshold(const Models::UpdateMOQuotaAlertThresholdRequest &request);

      /**
       * @summary Updates the information about a specified skill.
       *
       * @param tmpReq UpdateSkillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSkillResponse
       */
      Models::UpdateSkillResponse updateSkillWithOptions(const Models::UpdateSkillRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information about a specified skill.
       *
       * @param request UpdateSkillRequest
       * @return UpdateSkillResponse
       */
      Models::UpdateSkillResponse updateSkill(const Models::UpdateSkillRequest &request);
  };
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
