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
       * @summary 发送对话消息
       *
       * @param tmpReq ChatMessagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatMessagesResponse
       */
      FutrueGenerator<Models::ChatMessagesResponse> chatMessagesWithSSE(const Models::ChatMessagesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 发送对话消息
       *
       * @param tmpReq ChatMessagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatMessagesResponse
       */
      Models::ChatMessagesResponse chatMessagesWithOptions(const Models::ChatMessagesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 发送对话消息
       *
       * @param request ChatMessagesRequest
       * @return ChatMessagesResponse
       */
      Models::ChatMessagesResponse chatMessages(const Models::ChatMessagesRequest &request);

      /**
       * @summary 停止对话
       *
       * @param request ChatMessagesTaskStopRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatMessagesTaskStopResponse
       */
      Models::ChatMessagesTaskStopResponse chatMessagesTaskStopWithOptions(const Models::ChatMessagesTaskStopRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 停止对话
       *
       * @param request ChatMessagesTaskStopRequest
       * @return ChatMessagesTaskStopResponse
       */
      Models::ChatMessagesTaskStopResponse chatMessagesTaskStop(const Models::ChatMessagesTaskStopRequest &request);

      /**
       * @summary 创建应用服务实例
       *
       * @param tmpReq CreateAppInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAppInstanceResponse
       */
      Models::CreateAppInstanceResponse createAppInstanceWithOptions(const Models::CreateAppInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建应用服务实例
       *
       * @param request CreateAppInstanceRequest
       * @return CreateAppInstanceResponse
       */
      Models::CreateAppInstanceResponse createAppInstance(const Models::CreateAppInstanceRequest &request);

      /**
       * @summary 创建自定义agent
       *
       * @param tmpReq CreateCustomAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCustomAgentResponse
       */
      Models::CreateCustomAgentResponse createCustomAgentWithOptions(const Models::CreateCustomAgentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建自定义agent
       *
       * @param request CreateCustomAgentRequest
       * @return CreateCustomAgentResponse
       */
      Models::CreateCustomAgentResponse createCustomAgent(const Models::CreateCustomAgentRequest &request);

      /**
       * @summary 删除应用服务实例
       *
       * @param request DeleteAppInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAppInstanceResponse
       */
      Models::DeleteAppInstanceResponse deleteAppInstanceWithOptions(const Models::DeleteAppInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除应用服务实例
       *
       * @param request DeleteAppInstanceRequest
       * @return DeleteAppInstanceResponse
       */
      Models::DeleteAppInstanceResponse deleteAppInstance(const Models::DeleteAppInstanceRequest &request);

      /**
       * @summary 删除Custom Agent
       *
       * @param request DeleteCustomAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomAgentResponse
       */
      Models::DeleteCustomAgentResponse deleteCustomAgentWithOptions(const Models::DeleteCustomAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除Custom Agent
       *
       * @param request DeleteCustomAgentRequest
       * @return DeleteCustomAgentResponse
       */
      Models::DeleteCustomAgentResponse deleteCustomAgent(const Models::DeleteCustomAgentRequest &request);

      /**
       * @summary 查询应用服务详情
       *
       * @param request DescribeAppInstanceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAppInstanceAttributeResponse
       */
      Models::DescribeAppInstanceAttributeResponse describeAppInstanceAttributeWithOptions(const Models::DescribeAppInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询应用服务详情
       *
       * @param request DescribeAppInstanceAttributeRequest
       * @return DescribeAppInstanceAttributeResponse
       */
      Models::DescribeAppInstanceAttributeResponse describeAppInstanceAttribute(const Models::DescribeAppInstanceAttributeRequest &request);

      /**
       * @summary 查询应用服务列表
       *
       * @param request DescribeAppInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAppInstancesResponse
       */
      Models::DescribeAppInstancesResponse describeAppInstancesWithOptions(const Models::DescribeAppInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询应用服务列表
       *
       * @param request DescribeAppInstancesRequest
       * @return DescribeAppInstancesResponse
       */
      Models::DescribeAppInstancesResponse describeAppInstances(const Models::DescribeAppInstancesRequest &request);

      /**
       * @summary 查询事件信息列表
       *
       * @param request DescribeEventsListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEventsListResponse
       */
      Models::DescribeEventsListResponse describeEventsListWithOptions(const Models::DescribeEventsListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询事件信息列表
       *
       * @param request DescribeEventsListRequest
       * @return DescribeEventsListResponse
       */
      Models::DescribeEventsListResponse describeEventsList(const Models::DescribeEventsListRequest &request);

      /**
       * @summary 查看实例认证信息
       *
       * @param request DescribeInstanceAuthInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceAuthInfoResponse
       */
      Models::DescribeInstanceAuthInfoResponse describeInstanceAuthInfoWithOptions(const Models::DescribeInstanceAuthInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看实例认证信息
       *
       * @param request DescribeInstanceAuthInfoRequest
       * @return DescribeInstanceAuthInfoResponse
       */
      Models::DescribeInstanceAuthInfoResponse describeInstanceAuthInfo(const Models::DescribeInstanceAuthInfoRequest &request);

      /**
       * @summary 查看服务连接信息
       *
       * @param request DescribeInstanceEndpointsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceEndpointsResponse
       */
      Models::DescribeInstanceEndpointsResponse describeInstanceEndpointsWithOptions(const Models::DescribeInstanceEndpointsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看服务连接信息
       *
       * @param request DescribeInstanceEndpointsRequest
       * @return DescribeInstanceEndpointsResponse
       */
      Models::DescribeInstanceEndpointsResponse describeInstanceEndpoints(const Models::DescribeInstanceEndpointsRequest &request);

      /**
       * @summary 查询服务白名单
       *
       * @param request DescribeInstanceIpWhitelistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceIpWhitelistResponse
       */
      Models::DescribeInstanceIpWhitelistResponse describeInstanceIpWhitelistWithOptions(const Models::DescribeInstanceIpWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询服务白名单
       *
       * @param request DescribeInstanceIpWhitelistRequest
       * @return DescribeInstanceIpWhitelistResponse
       */
      Models::DescribeInstanceIpWhitelistResponse describeInstanceIpWhitelist(const Models::DescribeInstanceIpWhitelistRequest &request);

      /**
       * @summary 查看实例RAG配置
       *
       * @param request DescribeInstanceRAGConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceRAGConfigResponse
       */
      Models::DescribeInstanceRAGConfigResponse describeInstanceRAGConfigWithOptions(const Models::DescribeInstanceRAGConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看实例RAG配置
       *
       * @param request DescribeInstanceRAGConfigRequest
       * @return DescribeInstanceRAGConfigResponse
       */
      Models::DescribeInstanceRAGConfigResponse describeInstanceRAGConfig(const Models::DescribeInstanceRAGConfigRequest &request);

      /**
       * @summary 查看实例SSL配置
       *
       * @param request DescribeInstanceSSLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceSSLResponse
       */
      Models::DescribeInstanceSSLResponse describeInstanceSSLWithOptions(const Models::DescribeInstanceSSLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看实例SSL配置
       *
       * @param request DescribeInstanceSSLRequest
       * @return DescribeInstanceSSLResponse
       */
      Models::DescribeInstanceSSLResponse describeInstanceSSL(const Models::DescribeInstanceSSLRequest &request);

      /**
       * @summary 查看实例存储配置
       *
       * @param request DescribeInstanceStorageConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceStorageConfigResponse
       */
      Models::DescribeInstanceStorageConfigResponse describeInstanceStorageConfigWithOptions(const Models::DescribeInstanceStorageConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看实例存储配置
       *
       * @param request DescribeInstanceStorageConfigRequest
       * @return DescribeInstanceStorageConfigResponse
       */
      Models::DescribeInstanceStorageConfigResponse describeInstanceStorageConfig(const Models::DescribeInstanceStorageConfigRequest &request);

      /**
       * @summary 获取会话列表
       *
       * @param request GetConversationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConversationsResponse
       */
      Models::GetConversationsResponse getConversationsWithOptions(const Models::GetConversationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取会话列表
       *
       * @param request GetConversationsRequest
       * @return GetConversationsResponse
       */
      Models::GetConversationsResponse getConversations(const Models::GetConversationsRequest &request);

      /**
       * @summary 查询CustomAgent
       *
       * @param request GetCustomAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCustomAgentResponse
       */
      Models::GetCustomAgentResponse getCustomAgentWithOptions(const Models::GetCustomAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询CustomAgent
       *
       * @param request GetCustomAgentRequest
       * @return GetCustomAgentResponse
       */
      Models::GetCustomAgentResponse getCustomAgent(const Models::GetCustomAgentRequest &request);

      /**
       * @summary 获取会话历史消息
       *
       * @param request GetMessagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMessagesResponse
       */
      Models::GetMessagesResponse getMessagesWithOptions(const Models::GetMessagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取会话历史消息
       *
       * @param request GetMessagesRequest
       * @return GetMessagesResponse
       */
      Models::GetMessagesResponse getMessages(const Models::GetMessagesRequest &request);

      /**
       * @summary 获取Custom Agent列表
       *
       * @param request ListCustomAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCustomAgentResponse
       */
      Models::ListCustomAgentResponse listCustomAgentWithOptions(const Models::ListCustomAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取Custom Agent列表
       *
       * @param request ListCustomAgentRequest
       * @return ListCustomAgentResponse
       */
      Models::ListCustomAgentResponse listCustomAgent(const Models::ListCustomAgentRequest &request);

      /**
       * @summary 获取专属Agent可用工具
       *
       * @param request ListCustomAgentToolsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCustomAgentToolsResponse
       */
      Models::ListCustomAgentToolsResponse listCustomAgentToolsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取专属Agent可用工具
       *
       * @return ListCustomAgentToolsResponse
       */
      Models::ListCustomAgentToolsResponse listCustomAgentTools();

      /**
       * @summary 修改Supabase Auth相关配置
       *
       * @param tmpReq ModifyInstanceAuthConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceAuthConfigResponse
       */
      Models::ModifyInstanceAuthConfigResponse modifyInstanceAuthConfigWithOptions(const Models::ModifyInstanceAuthConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改Supabase Auth相关配置
       *
       * @param request ModifyInstanceAuthConfigRequest
       * @return ModifyInstanceAuthConfigResponse
       */
      Models::ModifyInstanceAuthConfigResponse modifyInstanceAuthConfig(const Models::ModifyInstanceAuthConfigRequest &request);

      /**
       * @summary 修改实例RAG配置
       *
       * @param request ModifyInstanceConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceConfigResponse
       */
      Models::ModifyInstanceConfigResponse modifyInstanceConfigWithOptions(const Models::ModifyInstanceConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改实例RAG配置
       *
       * @param request ModifyInstanceConfigRequest
       * @return ModifyInstanceConfigResponse
       */
      Models::ModifyInstanceConfigResponse modifyInstanceConfig(const Models::ModifyInstanceConfigRequest &request);

      /**
       * @summary 修改服务白名单
       *
       * @param request ModifyInstanceIpWhitelistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceIpWhitelistResponse
       */
      Models::ModifyInstanceIpWhitelistResponse modifyInstanceIpWhitelistWithOptions(const Models::ModifyInstanceIpWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改服务白名单
       *
       * @param request ModifyInstanceIpWhitelistRequest
       * @return ModifyInstanceIpWhitelistResponse
       */
      Models::ModifyInstanceIpWhitelistResponse modifyInstanceIpWhitelist(const Models::ModifyInstanceIpWhitelistRequest &request);

      /**
       * @summary 修改实例RAG配置
       *
       * @param tmpReq ModifyInstanceRAGConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceRAGConfigResponse
       */
      Models::ModifyInstanceRAGConfigResponse modifyInstanceRAGConfigWithOptions(const Models::ModifyInstanceRAGConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改实例RAG配置
       *
       * @param request ModifyInstanceRAGConfigRequest
       * @return ModifyInstanceRAGConfigResponse
       */
      Models::ModifyInstanceRAGConfigResponse modifyInstanceRAGConfig(const Models::ModifyInstanceRAGConfigRequest &request);

      /**
       * @summary 修改实例SSL配置
       *
       * @param request ModifyInstanceSSLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceSSLResponse
       */
      Models::ModifyInstanceSSLResponse modifyInstanceSSLWithOptions(const Models::ModifyInstanceSSLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改实例SSL配置
       *
       * @param request ModifyInstanceSSLRequest
       * @return ModifyInstanceSSLResponse
       */
      Models::ModifyInstanceSSLResponse modifyInstanceSSL(const Models::ModifyInstanceSSLRequest &request);

      /**
       * @summary 修改实例存储配置
       *
       * @param tmpReq ModifyInstanceStorageConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceStorageConfigResponse
       */
      Models::ModifyInstanceStorageConfigResponse modifyInstanceStorageConfigWithOptions(const Models::ModifyInstanceStorageConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改实例存储配置
       *
       * @param request ModifyInstanceStorageConfigRequest
       * @return ModifyInstanceStorageConfigResponse
       */
      Models::ModifyInstanceStorageConfigResponse modifyInstanceStorageConfig(const Models::ModifyInstanceStorageConfigRequest &request);

      /**
       * @summary 消息终端用户反馈、点赞/点踩
       *
       * @param request ModifyMessagesFeedbacksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyMessagesFeedbacksResponse
       */
      Models::ModifyMessagesFeedbacksResponse modifyMessagesFeedbacksWithOptions(const Models::ModifyMessagesFeedbacksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 消息终端用户反馈、点赞/点踩
       *
       * @param request ModifyMessagesFeedbacksRequest
       * @return ModifyMessagesFeedbacksResponse
       */
      Models::ModifyMessagesFeedbacksResponse modifyMessagesFeedbacks(const Models::ModifyMessagesFeedbacksRequest &request);

      /**
       * @summary 重置实例密码
       *
       * @param request ResetInstancePasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetInstancePasswordResponse
       */
      Models::ResetInstancePasswordResponse resetInstancePasswordWithOptions(const Models::ResetInstancePasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重置实例密码
       *
       * @param request ResetInstancePasswordRequest
       * @return ResetInstancePasswordResponse
       */
      Models::ResetInstancePasswordResponse resetInstancePassword(const Models::ResetInstancePasswordRequest &request);

      /**
       * @summary 重启实例
       *
       * @param request RestartInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartInstanceResponse
       */
      Models::RestartInstanceResponse restartInstanceWithOptions(const Models::RestartInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重启实例
       *
       * @param request RestartInstanceRequest
       * @return RestartInstanceResponse
       */
      Models::RestartInstanceResponse restartInstance(const Models::RestartInstanceRequest &request);

      /**
       * @summary 启动实例
       *
       * @param request StartInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartInstanceResponse
       */
      Models::StartInstanceResponse startInstanceWithOptions(const Models::StartInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 启动实例
       *
       * @param request StartInstanceRequest
       * @return StartInstanceResponse
       */
      Models::StartInstanceResponse startInstance(const Models::StartInstanceRequest &request);

      /**
       * @summary 暂停实例
       *
       * @param request StopInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopInstanceResponse
       */
      Models::StopInstanceResponse stopInstanceWithOptions(const Models::StopInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 暂停实例
       *
       * @param request StopInstanceRequest
       * @return StopInstanceResponse
       */
      Models::StopInstanceResponse stopInstance(const Models::StopInstanceRequest &request);

      /**
       * @summary 更新Custom Agent
       *
       * @param tmpReq UpdateCustomAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCustomAgentResponse
       */
      Models::UpdateCustomAgentResponse updateCustomAgentWithOptions(const Models::UpdateCustomAgentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新Custom Agent
       *
       * @param request UpdateCustomAgentRequest
       * @return UpdateCustomAgentResponse
       */
      Models::UpdateCustomAgentResponse updateCustomAgent(const Models::UpdateCustomAgentRequest &request);
  };
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
