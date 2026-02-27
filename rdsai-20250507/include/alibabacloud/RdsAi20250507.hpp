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
       * @summary Sends chat messages.
       *
       * @param tmpReq ChatMessagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatMessagesResponse
       */
      FutureGenerator<Models::ChatMessagesResponse> chatMessagesWithSSE(const Models::ChatMessagesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends chat messages.
       *
       * @param tmpReq ChatMessagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatMessagesResponse
       */
      Models::ChatMessagesResponse chatMessagesWithOptions(const Models::ChatMessagesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends chat messages.
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
       * @summary Creates an RDS Supabase instance.
       *
       * @description ### [](#)Supported database engine
       * RDS PostgreSQL
       * ### [](#)References
       * >  Fees of an instance are changed if the call is successful. Before you call this operation, carefully read the related topics.
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param tmpReq CreateAppInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAppInstanceResponse
       */
      Models::CreateAppInstanceResponse createAppInstanceWithOptions(const Models::CreateAppInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an RDS Supabase instance.
       *
       * @description ### [](#)Supported database engine
       * RDS PostgreSQL
       * ### [](#)References
       * >  Fees of an instance are changed if the call is successful. Before you call this operation, carefully read the related topics.
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param request CreateAppInstanceRequest
       * @return CreateAppInstanceResponse
       */
      Models::CreateAppInstanceResponse createAppInstance(const Models::CreateAppInstanceRequest &request);

      /**
       * @summary Creates a dedicated agent.
       *
       * @param tmpReq CreateCustomAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCustomAgentResponse
       */
      Models::CreateCustomAgentResponse createCustomAgentWithOptions(const Models::CreateCustomAgentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a dedicated agent.
       *
       * @param request CreateCustomAgentRequest
       * @return CreateCustomAgentResponse
       */
      Models::CreateCustomAgentResponse createCustomAgent(const Models::CreateCustomAgentRequest &request);

      /**
       * @summary 创建一个批量实例巡检任务
       *
       * @param request CreateInspectionTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInspectionTaskResponse
       */
      Models::CreateInspectionTaskResponse createInspectionTaskWithOptions(const Models::CreateInspectionTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建一个批量实例巡检任务
       *
       * @param request CreateInspectionTaskRequest
       * @return CreateInspectionTaskResponse
       */
      Models::CreateInspectionTaskResponse createInspectionTask(const Models::CreateInspectionTaskRequest &request);

      /**
       * @summary 创建一个新的批量实例巡检任务
       *
       * @param request CreateScheduledTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateScheduledTaskResponse
       */
      Models::CreateScheduledTaskResponse createScheduledTaskWithOptions(const Models::CreateScheduledTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建一个新的批量实例巡检任务
       *
       * @param request CreateScheduledTaskRequest
       * @return CreateScheduledTaskResponse
       */
      Models::CreateScheduledTaskResponse createScheduledTask(const Models::CreateScheduledTaskRequest &request);

      /**
       * @summary 创建Skill
       *
       * @param tmpReq CreateSkillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSkillResponse
       */
      Models::CreateSkillResponse createSkillWithOptions(const Models::CreateSkillRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建Skill
       *
       * @param request CreateSkillRequest
       * @return CreateSkillResponse
       */
      Models::CreateSkillResponse createSkill(const Models::CreateSkillRequest &request);

      /**
       * @summary Deletes an RDS Supabase instance.
       *
       * @description ### [](#)Supported database engine
       * RDS PostgreSQL
       * ### [](#)References
       * >  Fees of an instance are changed if the call is successful. Before you call this operation, carefully read the related topics.
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       * >  If you delete an RDS Supabase instance, the created RDS for PostgreSQL instance and the created NAT gateway are not automatically deleted. You must manually release the instance and delete the Internet NAT gateway and EIP.
       *
       * @param request DeleteAppInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAppInstanceResponse
       */
      Models::DeleteAppInstanceResponse deleteAppInstanceWithOptions(const Models::DeleteAppInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an RDS Supabase instance.
       *
       * @description ### [](#)Supported database engine
       * RDS PostgreSQL
       * ### [](#)References
       * >  Fees of an instance are changed if the call is successful. Before you call this operation, carefully read the related topics.
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       * >  If you delete an RDS Supabase instance, the created RDS for PostgreSQL instance and the created NAT gateway are not automatically deleted. You must manually release the instance and delete the Internet NAT gateway and EIP.
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
       * @summary 删除指定的巡检任务
       *
       * @param request DeleteScheduledTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteScheduledTaskResponse
       */
      Models::DeleteScheduledTaskResponse deleteScheduledTaskWithOptions(const Models::DeleteScheduledTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除指定的巡检任务
       *
       * @param request DeleteScheduledTaskRequest
       * @return DeleteScheduledTaskResponse
       */
      Models::DeleteScheduledTaskResponse deleteScheduledTask(const Models::DeleteScheduledTaskRequest &request);

      /**
       * @summary 删除Skill
       *
       * @param request DeleteSkillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSkillResponse
       */
      Models::DeleteSkillResponse deleteSkillWithOptions(const Models::DeleteSkillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除Skill
       *
       * @param request DeleteSkillRequest
       * @return DeleteSkillResponse
       */
      Models::DeleteSkillResponse deleteSkill(const Models::DeleteSkillRequest &request);

      /**
       * @summary Queries the details of an RDS Supabase instance.
       *
       * @description ### [](#)Supported database engine
       * RDS PostgreSQL
       * ### [](#)References
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param request DescribeAppInstanceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAppInstanceAttributeResponse
       */
      Models::DescribeAppInstanceAttributeResponse describeAppInstanceAttributeWithOptions(const Models::DescribeAppInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an RDS Supabase instance.
       *
       * @description ### [](#)Supported database engine
       * RDS PostgreSQL
       * ### [](#)References
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param request DescribeAppInstanceAttributeRequest
       * @return DescribeAppInstanceAttributeResponse
       */
      Models::DescribeAppInstanceAttributeResponse describeAppInstanceAttribute(const Models::DescribeAppInstanceAttributeRequest &request);

      /**
       * @summary Queries the RDS Supabase instances.
       *
       * @description ### [](#)Supported database engine
       * RDS PostgreSQL
       * ### [](#)References
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param request DescribeAppInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAppInstancesResponse
       */
      Models::DescribeAppInstancesResponse describeAppInstancesWithOptions(const Models::DescribeAppInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the RDS Supabase instances.
       *
       * @description ### [](#)Supported database engine
       * RDS PostgreSQL
       * ### [](#)References
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param request DescribeAppInstancesRequest
       * @return DescribeAppInstancesResponse
       */
      Models::DescribeAppInstancesResponse describeAppInstances(const Models::DescribeAppInstancesRequest &request);

      /**
       * @summary Queries the events.
       *
       * @param request DescribeEventsListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEventsListResponse
       */
      Models::DescribeEventsListResponse describeEventsListWithOptions(const Models::DescribeEventsListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the events.
       *
       * @param request DescribeEventsListRequest
       * @return DescribeEventsListResponse
       */
      Models::DescribeEventsListResponse describeEventsList(const Models::DescribeEventsListRequest &request);

      /**
       * @summary Queries the authentication information about an RDS Supabase instance.
       *
       * @description ### [](#)Supported database engine
       * RDS PostgreSQL
       * ### [](#)References
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param request DescribeInstanceAuthInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceAuthInfoResponse
       */
      Models::DescribeInstanceAuthInfoResponse describeInstanceAuthInfoWithOptions(const Models::DescribeInstanceAuthInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the authentication information about an RDS Supabase instance.
       *
       * @description ### [](#)Supported database engine
       * RDS PostgreSQL
       * ### [](#)References
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param request DescribeInstanceAuthInfoRequest
       * @return DescribeInstanceAuthInfoResponse
       */
      Models::DescribeInstanceAuthInfoResponse describeInstanceAuthInfo(const Models::DescribeInstanceAuthInfoRequest &request);

      /**
       * @summary Queries the endpoint of an RDS Supabase instance.
       *
       * @description ### [](#)Supported database engine
       * RDS PostgreSQL
       * ### [](#)References
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param request DescribeInstanceEndpointsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceEndpointsResponse
       */
      Models::DescribeInstanceEndpointsResponse describeInstanceEndpointsWithOptions(const Models::DescribeInstanceEndpointsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the endpoint of an RDS Supabase instance.
       *
       * @description ### [](#)Supported database engine
       * RDS PostgreSQL
       * ### [](#)References
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param request DescribeInstanceEndpointsRequest
       * @return DescribeInstanceEndpointsResponse
       */
      Models::DescribeInstanceEndpointsResponse describeInstanceEndpoints(const Models::DescribeInstanceEndpointsRequest &request);

      /**
       * @summary Queries the IP address whitelists of an RDS Supabase instance.
       *
       * @description ### [](#)Supported database engine
       * RDS PostgreSQL
       * ### [](#)References
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param request DescribeInstanceIpWhitelistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceIpWhitelistResponse
       */
      Models::DescribeInstanceIpWhitelistResponse describeInstanceIpWhitelistWithOptions(const Models::DescribeInstanceIpWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the IP address whitelists of an RDS Supabase instance.
       *
       * @description ### [](#)Supported database engine
       * RDS PostgreSQL
       * ### [](#)References
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param request DescribeInstanceIpWhitelistRequest
       * @return DescribeInstanceIpWhitelistResponse
       */
      Models::DescribeInstanceIpWhitelistResponse describeInstanceIpWhitelist(const Models::DescribeInstanceIpWhitelistRequest &request);

      /**
       * @summary Queries the RAG agent configurations of an RDS Supabase instance.
       *
       * @param request DescribeInstanceRAGConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceRAGConfigResponse
       */
      Models::DescribeInstanceRAGConfigResponse describeInstanceRAGConfigWithOptions(const Models::DescribeInstanceRAGConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the RAG agent configurations of an RDS Supabase instance.
       *
       * @param request DescribeInstanceRAGConfigRequest
       * @return DescribeInstanceRAGConfigResponse
       */
      Models::DescribeInstanceRAGConfigResponse describeInstanceRAGConfig(const Models::DescribeInstanceRAGConfigRequest &request);

      /**
       * @summary Queries the SSL settings of an RDS Supabase instance.
       *
       * @description ### [](#)Supported database engine
       * RDS PostgreSQL
       * ### [](#)References
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param request DescribeInstanceSSLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceSSLResponse
       */
      Models::DescribeInstanceSSLResponse describeInstanceSSLWithOptions(const Models::DescribeInstanceSSLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the SSL settings of an RDS Supabase instance.
       *
       * @description ### [](#)Supported database engine
       * RDS PostgreSQL
       * ### [](#)References
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param request DescribeInstanceSSLRequest
       * @return DescribeInstanceSSLResponse
       */
      Models::DescribeInstanceSSLResponse describeInstanceSSL(const Models::DescribeInstanceSSLRequest &request);

      /**
       * @summary Queries the storage configurations of an RDS Supabase instance.
       *
       * @description ### [](#)Supported database engine
       * RDS PostgreSQL
       * ### [](#)References
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       * >  Only Object Storage Service (OSS) is supported for the storage of RDS Supabase.
       *
       * @param request DescribeInstanceStorageConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceStorageConfigResponse
       */
      Models::DescribeInstanceStorageConfigResponse describeInstanceStorageConfigWithOptions(const Models::DescribeInstanceStorageConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the storage configurations of an RDS Supabase instance.
       *
       * @description ### [](#)Supported database engine
       * RDS PostgreSQL
       * ### [](#)References
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       * >  Only Object Storage Service (OSS) is supported for the storage of RDS Supabase.
       *
       * @param request DescribeInstanceStorageConfigRequest
       * @return DescribeInstanceStorageConfigResponse
       */
      Models::DescribeInstanceStorageConfigResponse describeInstanceStorageConfig(const Models::DescribeInstanceStorageConfigRequest &request);

      /**
       * @summary Queries the history conversations of a user.
       *
       * @param request GetConversationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConversationsResponse
       */
      Models::GetConversationsResponse getConversationsWithOptions(const Models::GetConversationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the history conversations of a user.
       *
       * @param request GetConversationsRequest
       * @return GetConversationsResponse
       */
      Models::GetConversationsResponse getConversations(const Models::GetConversationsRequest &request);

      /**
       * @summary Queries the dedicated agents created by a user.
       *
       * @param request GetCustomAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCustomAgentResponse
       */
      Models::GetCustomAgentResponse getCustomAgentWithOptions(const Models::GetCustomAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the dedicated agents created by a user.
       *
       * @param request GetCustomAgentRequest
       * @return GetCustomAgentResponse
       */
      Models::GetCustomAgentResponse getCustomAgent(const Models::GetCustomAgentRequest &request);

      /**
       * @summary 获取巡检任务报告结果
       *
       * @param request GetInspectionReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInspectionReportResponse
       */
      Models::GetInspectionReportResponse getInspectionReportWithOptions(const Models::GetInspectionReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取巡检任务报告结果
       *
       * @param request GetInspectionReportRequest
       * @return GetInspectionReportResponse
       */
      Models::GetInspectionReportResponse getInspectionReport(const Models::GetInspectionReportRequest &request);

      /**
       * @summary Queries specific conversation messages.
       *
       * @param request GetMessagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMessagesResponse
       */
      Models::GetMessagesResponse getMessagesWithOptions(const Models::GetMessagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries specific conversation messages.
       *
       * @param request GetMessagesRequest
       * @return GetMessagesResponse
       */
      Models::GetMessagesResponse getMessages(const Models::GetMessagesRequest &request);

      /**
       * @summary 查询指定定时任务配置中包含的所有实例ID列表，支持分页
       *
       * @param request GetScheduledInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetScheduledInstancesResponse
       */
      Models::GetScheduledInstancesResponse getScheduledInstancesWithOptions(const Models::GetScheduledInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询指定定时任务配置中包含的所有实例ID列表，支持分页
       *
       * @param request GetScheduledInstancesRequest
       * @return GetScheduledInstancesResponse
       */
      Models::GetScheduledInstancesResponse getScheduledInstances(const Models::GetScheduledInstancesRequest &request);

      /**
       * @summary 获取定时任务的所有巡检报告，支持分页
       *
       * @param request GetScheduledReportsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetScheduledReportsResponse
       */
      Models::GetScheduledReportsResponse getScheduledReportsWithOptions(const Models::GetScheduledReportsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取定时任务的所有巡检报告，支持分页
       *
       * @param request GetScheduledReportsRequest
       * @return GetScheduledReportsResponse
       */
      Models::GetScheduledReportsResponse getScheduledReports(const Models::GetScheduledReportsRequest &request);

      /**
       * @summary 获取Skill详情
       *
       * @param request GetSkillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSkillResponse
       */
      Models::GetSkillResponse getSkillWithOptions(const Models::GetSkillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取Skill详情
       *
       * @param request GetSkillRequest
       * @return GetSkillResponse
       */
      Models::GetSkillResponse getSkill(const Models::GetSkillRequest &request);

      /**
       * @summary 查询指定用户下所有非定时任务的单独巡检报告列表，支持分页
       *
       * @param request GetStandAloneReportsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetStandAloneReportsResponse
       */
      Models::GetStandAloneReportsResponse getStandAloneReportsWithOptions(const Models::GetStandAloneReportsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询指定用户下所有非定时任务的单独巡检报告列表，支持分页
       *
       * @param request GetStandAloneReportsRequest
       * @return GetStandAloneReportsResponse
       */
      Models::GetStandAloneReportsResponse getStandAloneReports(const Models::GetStandAloneReportsRequest &request);

      /**
       * @summary Queries the dedicated agents created by a user.
       *
       * @param request ListCustomAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCustomAgentResponse
       */
      Models::ListCustomAgentResponse listCustomAgentWithOptions(const Models::ListCustomAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the dedicated agents created by a user.
       *
       * @param request ListCustomAgentRequest
       * @return ListCustomAgentResponse
       */
      Models::ListCustomAgentResponse listCustomAgent(const Models::ListCustomAgentRequest &request);

      /**
       * @summary Queries the custom agent tools of the user.
       *
       * @param request ListCustomAgentToolsRequest
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
       * @summary 查询指定用户UID下所有巡检任务的基本信息列表
       *
       * @param request ListScheduledTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListScheduledTasksResponse
       */
      Models::ListScheduledTasksResponse listScheduledTasksWithOptions(const Models::ListScheduledTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询指定用户UID下所有巡检任务的基本信息列表
       *
       * @param request ListScheduledTasksRequest
       * @return ListScheduledTasksResponse
       */
      Models::ListScheduledTasksResponse listScheduledTasks(const Models::ListScheduledTasksRequest &request);

      /**
       * @summary 获取Skill列表
       *
       * @param request ListSkillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSkillResponse
       */
      Models::ListSkillResponse listSkillWithOptions(const Models::ListSkillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取Skill列表
       *
       * @param request ListSkillRequest
       * @return ListSkillResponse
       */
      Models::ListSkillResponse listSkill(const Models::ListSkillRequest &request);

      /**
       * @summary Modifies the authentication configurations of an RDS Supabase instance.
       *
       * @description ### [](#)Supported database engine
       * RDS PostgreSQL
       * ### [](#)References
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param tmpReq ModifyInstanceAuthConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceAuthConfigResponse
       */
      Models::ModifyInstanceAuthConfigResponse modifyInstanceAuthConfigWithOptions(const Models::ModifyInstanceAuthConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the authentication configurations of an RDS Supabase instance.
       *
       * @description ### [](#)Supported database engine
       * RDS PostgreSQL
       * ### [](#)References
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param request ModifyInstanceAuthConfigRequest
       * @return ModifyInstanceAuthConfigResponse
       */
      Models::ModifyInstanceAuthConfigResponse modifyInstanceAuthConfig(const Models::ModifyInstanceAuthConfigRequest &request);

      /**
       * @summary Modifies the general configurations of an instance, such as the EIP and NAT settings.
       *
       * @param request ModifyInstanceConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceConfigResponse
       */
      Models::ModifyInstanceConfigResponse modifyInstanceConfigWithOptions(const Models::ModifyInstanceConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the general configurations of an instance, such as the EIP and NAT settings.
       *
       * @param request ModifyInstanceConfigRequest
       * @return ModifyInstanceConfigResponse
       */
      Models::ModifyInstanceConfigResponse modifyInstanceConfig(const Models::ModifyInstanceConfigRequest &request);

      /**
       * @summary Modifies the IP address whitelist of an RDS Supabase instance.
       *
       * @description ### [](#)Supported database engine
       * RDS PostgreSQL
       * ### [](#)References
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param request ModifyInstanceIpWhitelistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceIpWhitelistResponse
       */
      Models::ModifyInstanceIpWhitelistResponse modifyInstanceIpWhitelistWithOptions(const Models::ModifyInstanceIpWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the IP address whitelist of an RDS Supabase instance.
       *
       * @description ### [](#)Supported database engine
       * RDS PostgreSQL
       * ### [](#)References
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param request ModifyInstanceIpWhitelistRequest
       * @return ModifyInstanceIpWhitelistResponse
       */
      Models::ModifyInstanceIpWhitelistResponse modifyInstanceIpWhitelist(const Models::ModifyInstanceIpWhitelistRequest &request);

      /**
       * @summary Modifies the RAG agent configurations of an RDS Supabase instance.
       *
       * @param tmpReq ModifyInstanceRAGConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceRAGConfigResponse
       */
      Models::ModifyInstanceRAGConfigResponse modifyInstanceRAGConfigWithOptions(const Models::ModifyInstanceRAGConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the RAG agent configurations of an RDS Supabase instance.
       *
       * @param request ModifyInstanceRAGConfigRequest
       * @return ModifyInstanceRAGConfigResponse
       */
      Models::ModifyInstanceRAGConfigResponse modifyInstanceRAGConfig(const Models::ModifyInstanceRAGConfigRequest &request);

      /**
       * @summary Modifies the SSL settings of an RDS Supabase instance.
       *
       * @description ### [](#)Supported database engine
       * RDS PostgreSQL
       * ### [](#)References
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param request ModifyInstanceSSLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceSSLResponse
       */
      Models::ModifyInstanceSSLResponse modifyInstanceSSLWithOptions(const Models::ModifyInstanceSSLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the SSL settings of an RDS Supabase instance.
       *
       * @description ### [](#)Supported database engine
       * RDS PostgreSQL
       * ### [](#)References
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param request ModifyInstanceSSLRequest
       * @return ModifyInstanceSSLResponse
       */
      Models::ModifyInstanceSSLResponse modifyInstanceSSL(const Models::ModifyInstanceSSLRequest &request);

      /**
       * @summary Modifies the storage configurations of an RDS Supabase instance.
       *
       * @description ### [](#)Supported database engine
       * RDS PostgreSQL
       * ### [](#)References
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       * >  Only Object Storage Service (OSS) is supported for the storage of RDS Supabase.
       *
       * @param tmpReq ModifyInstanceStorageConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceStorageConfigResponse
       */
      Models::ModifyInstanceStorageConfigResponse modifyInstanceStorageConfigWithOptions(const Models::ModifyInstanceStorageConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the storage configurations of an RDS Supabase instance.
       *
       * @description ### [](#)Supported database engine
       * RDS PostgreSQL
       * ### [](#)References
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       * >  Only Object Storage Service (OSS) is supported for the storage of RDS Supabase.
       *
       * @param request ModifyInstanceStorageConfigRequest
       * @return ModifyInstanceStorageConfigResponse
       */
      Models::ModifyInstanceStorageConfigResponse modifyInstanceStorageConfig(const Models::ModifyInstanceStorageConfigRequest &request);

      /**
       * @summary Modifies the SSL settings of RDS Supabase instances in batches.
       *
       * @description ### [](#)Supported database engine
       * RDS PostgreSQL
       * ### [](#)References
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param tmpReq ModifyInstancesSSLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstancesSSLResponse
       */
      Models::ModifyInstancesSSLResponse modifyInstancesSSLWithOptions(const Models::ModifyInstancesSSLRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the SSL settings of RDS Supabase instances in batches.
       *
       * @description ### [](#)Supported database engine
       * RDS PostgreSQL
       * ### [](#)References
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
       * @summary 修改已存在的巡检任务信息
       *
       * @param request ModifyScheduledTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyScheduledTaskResponse
       */
      Models::ModifyScheduledTaskResponse modifyScheduledTaskWithOptions(const Models::ModifyScheduledTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改已存在的巡检任务信息
       *
       * @param request ModifyScheduledTaskRequest
       * @return ModifyScheduledTaskResponse
       */
      Models::ModifyScheduledTaskResponse modifyScheduledTask(const Models::ModifyScheduledTaskRequest &request);

      /**
       * @summary Resets the logon password of the RDS Supabase instance and the access password of the database.
       *
       * @description ### [](#)Supported database engine
       * RDS PostgreSQL
       * ### [](#)References
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       * >  You can only change the password of a RDS Supabase Dashboard user.
       *
       * @param request ResetInstancePasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetInstancePasswordResponse
       */
      Models::ResetInstancePasswordResponse resetInstancePasswordWithOptions(const Models::ResetInstancePasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets the logon password of the RDS Supabase instance and the access password of the database.
       *
       * @description ### [](#)Supported database engine
       * RDS PostgreSQL
       * ### [](#)References
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       * >  You can only change the password of a RDS Supabase Dashboard user.
       *
       * @param request ResetInstancePasswordRequest
       * @return ResetInstancePasswordResponse
       */
      Models::ResetInstancePasswordResponse resetInstancePassword(const Models::ResetInstancePasswordRequest &request);

      /**
       * @summary Restarts an RDS Supabase instance that is in the Running state.
       *
       * @description ### [](#)Supported database engine
       * RDS PostgreSQL
       * ### [](#)References
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param request RestartInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartInstanceResponse
       */
      Models::RestartInstanceResponse restartInstanceWithOptions(const Models::RestartInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts an RDS Supabase instance that is in the Running state.
       *
       * @description ### [](#)Supported database engine
       * RDS PostgreSQL
       * ### [](#)References
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param request RestartInstanceRequest
       * @return RestartInstanceResponse
       */
      Models::RestartInstanceResponse restartInstance(const Models::RestartInstanceRequest &request);

      /**
       * @summary Starts a stopped RDS Supabase instance.
       *
       * @description ### [](#)Supported database engine
       * RDS PostgreSQL
       * ### [](#)References
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param request StartInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartInstanceResponse
       */
      Models::StartInstanceResponse startInstanceWithOptions(const Models::StartInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a stopped RDS Supabase instance.
       *
       * @description ### [](#)Supported database engine
       * RDS PostgreSQL
       * ### [](#)References
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param request StartInstanceRequest
       * @return StartInstanceResponse
       */
      Models::StartInstanceResponse startInstance(const Models::StartInstanceRequest &request);

      /**
       * @summary Stops a running RDS Supabase instance.
       *
       * @description ### [](#)Supported database engine
       * RDS PostgreSQL
       * ### [](#)References
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param request StopInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopInstanceResponse
       */
      Models::StopInstanceResponse stopInstanceWithOptions(const Models::StopInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a running RDS Supabase instance.
       *
       * @description ### [](#)Supported database engine
       * RDS PostgreSQL
       * ### [](#)References
       * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
       *
       * @param request StopInstanceRequest
       * @return StopInstanceResponse
       */
      Models::StopInstanceResponse stopInstance(const Models::StopInstanceRequest &request);

      /**
       * @summary Updates the custom agent.
       *
       * @param tmpReq UpdateCustomAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCustomAgentResponse
       */
      Models::UpdateCustomAgentResponse updateCustomAgentWithOptions(const Models::UpdateCustomAgentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the custom agent.
       *
       * @param request UpdateCustomAgentRequest
       * @return UpdateCustomAgentResponse
       */
      Models::UpdateCustomAgentResponse updateCustomAgent(const Models::UpdateCustomAgentRequest &request);

      /**
       * @summary 更新Skill
       *
       * @param tmpReq UpdateSkillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSkillResponse
       */
      Models::UpdateSkillResponse updateSkillWithOptions(const Models::UpdateSkillRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新Skill
       *
       * @param request UpdateSkillRequest
       * @return UpdateSkillResponse
       */
      Models::UpdateSkillResponse updateSkill(const Models::UpdateSkillRequest &request);
  };
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
