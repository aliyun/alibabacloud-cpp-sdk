// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_ROCKETMQ20220801_HPP_
#define ALIBABACLOUD_ROCKETMQ20220801_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/RocketMQ20220801Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/RocketMQ20220801.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Adds a backup mapping task.
       *
       * @param request AddDisasterRecoveryItemRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddDisasterRecoveryItemResponse
       */
      Models::AddDisasterRecoveryItemResponse addDisasterRecoveryItemWithOptions(const string &planId, const Models::AddDisasterRecoveryItemRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a backup mapping task.
       *
       * @param request AddDisasterRecoveryItemRequest
       * @return AddDisasterRecoveryItemResponse
       */
      Models::AddDisasterRecoveryItemResponse addDisasterRecoveryItem(const string &planId, const Models::AddDisasterRecoveryItemRequest &request);

      /**
       * @summary Modifies the resource group of an instance.
       *
       * @param request ChangeResourceGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroupWithOptions(const Models::ChangeResourceGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the resource group of an instance.
       *
       * @param request ChangeResourceGroupRequest
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroup(const Models::ChangeResourceGroupRequest &request);

      /**
       * @summary 创建 Agent 诊断会话
       *
       * @param request CreateAgentConversationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAgentConversationResponse
       */
      Models::CreateAgentConversationResponse createAgentConversationWithOptions(const Models::CreateAgentConversationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建 Agent 诊断会话
       *
       * @param request CreateAgentConversationRequest
       * @return CreateAgentConversationResponse
       */
      Models::CreateAgentConversationResponse createAgentConversation(const Models::CreateAgentConversationRequest &request);

      /**
       * @summary Creates a consumer group (ConsumerGroup) for ApsaraMQ for RocketMQ. A consumer group is a load balancing group in ApsaraMQ for RocketMQ that contains multiple consumers with consistent consumption behavior. Consumers must subscribe to related topics by specifying a consumer group to implement message subscription.
       *
       * @description >Notice: The OpenAPI operations provided by Alibaba Cloud are management APIs used to manage and query Alibaba Cloud service resources. Use these operations only in the management link. Do not use them in the core data link for sending and receiving messages, as this may introduce risks to the link.
       *
       * @param request CreateConsumerGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateConsumerGroupResponse
       */
      Models::CreateConsumerGroupResponse createConsumerGroupWithOptions(const string &instanceId, const string &consumerGroupId, const Models::CreateConsumerGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a consumer group (ConsumerGroup) for ApsaraMQ for RocketMQ. A consumer group is a load balancing group in ApsaraMQ for RocketMQ that contains multiple consumers with consistent consumption behavior. Consumers must subscribe to related topics by specifying a consumer group to implement message subscription.
       *
       * @description >Notice: The OpenAPI operations provided by Alibaba Cloud are management APIs used to manage and query Alibaba Cloud service resources. Use these operations only in the management link. Do not use them in the core data link for sending and receiving messages, as this may introduce risks to the link.
       *
       * @param request CreateConsumerGroupRequest
       * @return CreateConsumerGroupResponse
       */
      Models::CreateConsumerGroupResponse createConsumerGroup(const string &instanceId, const string &consumerGroupId, const Models::CreateConsumerGroupRequest &request);

      /**
       * @summary Creates a backup plan.
       *
       * @param request CreateDisasterRecoveryPlanRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDisasterRecoveryPlanResponse
       */
      Models::CreateDisasterRecoveryPlanResponse createDisasterRecoveryPlanWithOptions(const Models::CreateDisasterRecoveryPlanRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a backup plan.
       *
       * @param request CreateDisasterRecoveryPlanRequest
       * @return CreateDisasterRecoveryPlanResponse
       */
      Models::CreateDisasterRecoveryPlanResponse createDisasterRecoveryPlan(const Models::CreateDisasterRecoveryPlanRequest &request);

      /**
       * @summary Creates an ApsaraMQ for RocketMQ 5.x series instance.
       *
       * @description >Notice: The OpenAPI provided by Alibaba Cloud is a management and control API used to manage and query resources of Alibaba Cloud services. Integrate it only into the management and control link. Do not rely on OpenAPI in the core data link for message sending and receiving. Otherwise, risks may occur on the link.
       *
       * @param request CreateInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstanceWithOptions(const Models::CreateInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an ApsaraMQ for RocketMQ 5.x series instance.
       *
       * @description >Notice: The OpenAPI provided by Alibaba Cloud is a management and control API used to manage and query resources of Alibaba Cloud services. Integrate it only into the management and control link. Do not rely on OpenAPI in the core data link for message sending and receiving. Otherwise, risks may occur on the link.
       *
       * @param request CreateInstanceRequest
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstance(const Models::CreateInstanceRequest &request);

      /**
       * @summary Creates an access account for an instance.
       *
       * @param request CreateInstanceAccountRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceAccountResponse
       */
      Models::CreateInstanceAccountResponse createInstanceAccountWithOptions(const string &instanceId, const Models::CreateInstanceAccountRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an access account for an instance.
       *
       * @param request CreateInstanceAccountRequest
       * @return CreateInstanceAccountResponse
       */
      Models::CreateInstanceAccountResponse createInstanceAccount(const string &instanceId, const Models::CreateInstanceAccountRequest &request);

      /**
       * @summary Creates access permissions for a specified instance.
       *
       * @param request CreateInstanceAclRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceAclResponse
       */
      Models::CreateInstanceAclResponse createInstanceAclWithOptions(const string &instanceId, const string &username, const Models::CreateInstanceAclRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates access permissions for a specified instance.
       *
       * @param request CreateInstanceAclRequest
       * @return CreateInstanceAclResponse
       */
      Models::CreateInstanceAclResponse createInstanceAcl(const string &instanceId, const string &username, const Models::CreateInstanceAclRequest &request);

      /**
       * @summary 创建实例巡检配置
       *
       * @param request CreateInstanceInspectionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceInspectionResponse
       */
      Models::CreateInstanceInspectionResponse createInstanceInspectionWithOptions(const string &instanceId, const Models::CreateInstanceInspectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建实例巡检配置
       *
       * @param request CreateInstanceInspectionRequest
       * @return CreateInstanceInspectionResponse
       */
      Models::CreateInstanceInspectionResponse createInstanceInspection(const string &instanceId, const Models::CreateInstanceInspectionRequest &request);

      /**
       * @summary Creates an IP address whitelist for access control.
       *
       * @param request CreateInstanceIpWhitelistRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceIpWhitelistResponse
       */
      Models::CreateInstanceIpWhitelistResponse createInstanceIpWhitelistWithOptions(const string &instanceId, const Models::CreateInstanceIpWhitelistRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an IP address whitelist for access control.
       *
       * @param request CreateInstanceIpWhitelistRequest
       * @return CreateInstanceIpWhitelistResponse
       */
      Models::CreateInstanceIpWhitelistResponse createInstanceIpWhitelist(const string &instanceId, const Models::CreateInstanceIpWhitelistRequest &request);

      /**
       * @summary Creates a topic for ApsaraMQ for RocketMQ. A topic is the top-level container for message transmission and storage in ApsaraMQ for RocketMQ and is used to identify messages of the same business logic. In the messaging model, producers send messages to topics, and consumers consume messages by subscribing to specified topics.
       *
       * @param request CreateTopicRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTopicResponse
       */
      Models::CreateTopicResponse createTopicWithOptions(const string &instanceId, const string &topicName, const Models::CreateTopicRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a topic for ApsaraMQ for RocketMQ. A topic is the top-level container for message transmission and storage in ApsaraMQ for RocketMQ and is used to identify messages of the same business logic. In the messaging model, producers send messages to topics, and consumers consume messages by subscribing to specified topics.
       *
       * @param request CreateTopicRequest
       * @return CreateTopicResponse
       */
      Models::CreateTopicResponse createTopic(const string &instanceId, const string &topicName, const Models::CreateTopicRequest &request);

      /**
       * @summary 删除 Agent 诊断会话
       *
       * @param request DeleteAgentConversationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAgentConversationResponse
       */
      Models::DeleteAgentConversationResponse deleteAgentConversationWithOptions(const string &conversationId, const Models::DeleteAgentConversationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除 Agent 诊断会话
       *
       * @param request DeleteAgentConversationRequest
       * @return DeleteAgentConversationResponse
       */
      Models::DeleteAgentConversationResponse deleteAgentConversation(const string &conversationId, const Models::DeleteAgentConversationRequest &request);

      /**
       * @summary Deletes a specified consumer group.
       *
       * @description >Notice: OpenAPI operations provided by Alibaba Cloud are management API operations used to manage and query resources of Alibaba Cloud services. Integrate these operations only into management workflows. Do not rely on OpenAPI operations in the core data link for message sending and receiving. Otherwise, risks may occur in the workflows.
       * After you delete a specified consumer group, consumer clients with the identity of the consumer group cannot consume messages. Invoke this operation with caution.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteConsumerGroupResponse
       */
      Models::DeleteConsumerGroupResponse deleteConsumerGroupWithOptions(const string &instanceId, const string &consumerGroupId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified consumer group.
       *
       * @description >Notice: OpenAPI operations provided by Alibaba Cloud are management API operations used to manage and query resources of Alibaba Cloud services. Integrate these operations only into management workflows. Do not rely on OpenAPI operations in the core data link for message sending and receiving. Otherwise, risks may occur in the workflows.
       * After you delete a specified consumer group, consumer clients with the identity of the consumer group cannot consume messages. Invoke this operation with caution.
       *
       * @return DeleteConsumerGroupResponse
       */
      Models::DeleteConsumerGroupResponse deleteConsumerGroup(const string &instanceId, const string &consumerGroupId);

      /**
       * @summary Deletes the subscription of a consumer group.
       *
       * @param request DeleteConsumerGroupSubscriptionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteConsumerGroupSubscriptionResponse
       */
      Models::DeleteConsumerGroupSubscriptionResponse deleteConsumerGroupSubscriptionWithOptions(const string &instanceId, const string &consumerGroupId, const Models::DeleteConsumerGroupSubscriptionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the subscription of a consumer group.
       *
       * @param request DeleteConsumerGroupSubscriptionRequest
       * @return DeleteConsumerGroupSubscriptionResponse
       */
      Models::DeleteConsumerGroupSubscriptionResponse deleteConsumerGroupSubscription(const string &instanceId, const string &consumerGroupId, const Models::DeleteConsumerGroupSubscriptionRequest &request);

      /**
       * @summary Deletes a backup mapping task.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDisasterRecoveryItemResponse
       */
      Models::DeleteDisasterRecoveryItemResponse deleteDisasterRecoveryItemWithOptions(const string &planId, const string &itemId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a backup mapping task.
       *
       * @return DeleteDisasterRecoveryItemResponse
       */
      Models::DeleteDisasterRecoveryItemResponse deleteDisasterRecoveryItem(const string &planId, const string &itemId);

      /**
       * @summary Deletes a backup plan.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDisasterRecoveryPlanResponse
       */
      Models::DeleteDisasterRecoveryPlanResponse deleteDisasterRecoveryPlanWithOptions(const string &planId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a backup plan.
       *
       * @return DeleteDisasterRecoveryPlanResponse
       */
      Models::DeleteDisasterRecoveryPlanResponse deleteDisasterRecoveryPlan(const string &planId);

      /**
       * @summary Releases an instance.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * *   After an instance is deleted, the instance cannot be restored. Exercise caution when you call this operation.
       * *   This operation is used to delete a pay-as-you-go instance. A subscription instance is automatically released after it expires. You do not need to manually delete a subscription instance.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstanceWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases an instance.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * *   After an instance is deleted, the instance cannot be restored. Exercise caution when you call this operation.
       * *   This operation is used to delete a pay-as-you-go instance. A subscription instance is automatically released after it expires. You do not need to manually delete a subscription instance.
       *
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstance(const string &instanceId);

      /**
       * @summary Deletes the access account information for a specified instance.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInstanceAccountResponse
       */
      Models::DeleteInstanceAccountResponse deleteInstanceAccountWithOptions(const string &instanceId, const string &username, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the access account information for a specified instance.
       *
       * @return DeleteInstanceAccountResponse
       */
      Models::DeleteInstanceAccountResponse deleteInstanceAccount(const string &instanceId, const string &username);

      /**
       * @summary Deletes the permissions of a specified account for a specified resource in a specified instance.
       *
       * @param request DeleteInstanceAclRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInstanceAclResponse
       */
      Models::DeleteInstanceAclResponse deleteInstanceAclWithOptions(const string &instanceId, const string &username, const Models::DeleteInstanceAclRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the permissions of a specified account for a specified resource in a specified instance.
       *
       * @param request DeleteInstanceAclRequest
       * @return DeleteInstanceAclResponse
       */
      Models::DeleteInstanceAclResponse deleteInstanceAcl(const string &instanceId, const string &username, const Models::DeleteInstanceAclRequest &request);

      /**
       * @summary 关闭实例巡检配置
       *
       * @param request DeleteInstanceInspectionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInstanceInspectionResponse
       */
      Models::DeleteInstanceInspectionResponse deleteInstanceInspectionWithOptions(const string &instanceId, const Models::DeleteInstanceInspectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 关闭实例巡检配置
       *
       * @param request DeleteInstanceInspectionRequest
       * @return DeleteInstanceInspectionResponse
       */
      Models::DeleteInstanceInspectionResponse deleteInstanceInspection(const string &instanceId, const Models::DeleteInstanceInspectionRequest &request);

      /**
       * @summary Deletes a specified global IP whitelist under a specified instance.
       *
       * @param tmpReq DeleteInstanceIpWhitelistRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInstanceIpWhitelistResponse
       */
      Models::DeleteInstanceIpWhitelistResponse deleteInstanceIpWhitelistWithOptions(const string &instanceId, const Models::DeleteInstanceIpWhitelistRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified global IP whitelist under a specified instance.
       *
       * @param request DeleteInstanceIpWhitelistRequest
       * @return DeleteInstanceIpWhitelistResponse
       */
      Models::DeleteInstanceIpWhitelistResponse deleteInstanceIpWhitelist(const string &instanceId, const Models::DeleteInstanceIpWhitelistRequest &request);

      /**
       * @summary Deletes a specified topic.
       *
       * @description Deleting a topic clears all publish-subscribe relationships under the topic. Call this operation with caution.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTopicResponse
       */
      Models::DeleteTopicResponse deleteTopicWithOptions(const string &instanceId, const string &topicName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified topic.
       *
       * @description Deleting a topic clears all publish-subscribe relationships under the topic. Call this operation with caution.
       *
       * @return DeleteTopicResponse
       */
      Models::DeleteTopicResponse deleteTopic(const string &instanceId, const string &topicName);

      /**
       * @summary Performs a specified operation on a specified migration task.
       *
       * @param request ExecuteMigrationOperationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteMigrationOperationResponse
       */
      Models::ExecuteMigrationOperationResponse executeMigrationOperationWithOptions(const string &migrationId, const string &stageType, const string &operationId, const Models::ExecuteMigrationOperationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a specified operation on a specified migration task.
       *
       * @param request ExecuteMigrationOperationRequest
       * @return ExecuteMigrationOperationResponse
       */
      Models::ExecuteMigrationOperationResponse executeMigrationOperation(const string &migrationId, const string &stageType, const string &operationId, const Models::ExecuteMigrationOperationRequest &request);

      /**
       * @summary Completes the current migration stage for a specified migration task.
       *
       * @param request FinishMigrationStageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return FinishMigrationStageResponse
       */
      Models::FinishMigrationStageResponse finishMigrationStageWithOptions(const string &migrationId, const string &stageType, const Models::FinishMigrationStageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Completes the current migration stage for a specified migration task.
       *
       * @param request FinishMigrationStageRequest
       * @return FinishMigrationStageResponse
       */
      Models::FinishMigrationStageResponse finishMigrationStage(const string &migrationId, const string &stageType, const Models::FinishMigrationStageRequest &request);

      /**
       * @summary 查询 Agent 诊断会话详情
       *
       * @param request GetAgentConversationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentConversationResponse
       */
      Models::GetAgentConversationResponse getAgentConversationWithOptions(const string &conversationId, const Models::GetAgentConversationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询 Agent 诊断会话详情
       *
       * @param request GetAgentConversationRequest
       * @return GetAgentConversationResponse
       */
      Models::GetAgentConversationResponse getAgentConversation(const string &conversationId, const Models::GetAgentConversationRequest &request);

      /**
       * @summary 订阅 Agent 诊断会话事件
       *
       * @param request GetAgentConversationEventsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentConversationEventsResponse
       */
      FutureGenerator<Models::GetAgentConversationEventsResponse> getAgentConversationEventsWithSSE(const string &conversationId, const Models::GetAgentConversationEventsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 订阅 Agent 诊断会话事件
       *
       * @param request GetAgentConversationEventsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentConversationEventsResponse
       */
      Models::GetAgentConversationEventsResponse getAgentConversationEventsWithOptions(const string &conversationId, const Models::GetAgentConversationEventsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 订阅 Agent 诊断会话事件
       *
       * @param request GetAgentConversationEventsRequest
       * @return GetAgentConversationEventsResponse
       */
      Models::GetAgentConversationEventsResponse getAgentConversationEvents(const string &conversationId, const Models::GetAgentConversationEventsRequest &request);

      /**
       * @summary 查询 Agent 诊断会话时间线
       *
       * @param request GetAgentConversationTimelineRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentConversationTimelineResponse
       */
      Models::GetAgentConversationTimelineResponse getAgentConversationTimelineWithOptions(const string &conversationId, const Models::GetAgentConversationTimelineRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询 Agent 诊断会话时间线
       *
       * @param request GetAgentConversationTimelineRequest
       * @return GetAgentConversationTimelineResponse
       */
      Models::GetAgentConversationTimelineResponse getAgentConversationTimeline(const string &conversationId, const Models::GetAgentConversationTimelineRequest &request);

      /**
       * @summary Queries the time range in which a consumer offset can be reset for a topic.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConsumeTimespanResponse
       */
      Models::GetConsumeTimespanResponse getConsumeTimespanWithOptions(const string &instanceId, const string &consumerGroupId, const string &topicName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the time range in which a consumer offset can be reset for a topic.
       *
       * @return GetConsumeTimespanResponse
       */
      Models::GetConsumeTimespanResponse getConsumeTimespan(const string &instanceId, const string &consumerGroupId, const string &topicName);

      /**
       * @summary Retrieves the details of a specified consumer group.
       *
       * @description >Notice: The OpenAPI provided by Alibaba Cloud is a management and control API used to manage and query related resources of Alibaba Cloud services. It is recommended only for integration in management and control data links. Using OpenAPI in the core data link for message sending and receiving is strictly prohibited. Otherwise, risks may occur in the data link.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConsumerGroupResponse
       */
      Models::GetConsumerGroupResponse getConsumerGroupWithOptions(const string &instanceId, const string &consumerGroupId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a specified consumer group.
       *
       * @description >Notice: The OpenAPI provided by Alibaba Cloud is a management and control API used to manage and query related resources of Alibaba Cloud services. It is recommended only for integration in management and control data links. Using OpenAPI in the core data link for message sending and receiving is strictly prohibited. Otherwise, risks may occur in the data link.
       *
       * @return GetConsumerGroupResponse
       */
      Models::GetConsumerGroupResponse getConsumerGroup(const string &instanceId, const string &consumerGroupId);

      /**
       * @summary Queries the message accumulation of a consumer group.
       *
       * @param request GetConsumerGroupLagRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConsumerGroupLagResponse
       */
      Models::GetConsumerGroupLagResponse getConsumerGroupLagWithOptions(const string &instanceId, const string &consumerGroupId, const Models::GetConsumerGroupLagRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the message accumulation of a consumer group.
       *
       * @param request GetConsumerGroupLagRequest
       * @return GetConsumerGroupLagResponse
       */
      Models::GetConsumerGroupLagResponse getConsumerGroupLag(const string &instanceId, const string &consumerGroupId, const Models::GetConsumerGroupLagRequest &request);

      /**
       * @summary Queries the subscriptions of a consumer group.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConsumerGroupSubscriptionResponse
       */
      Models::GetConsumerGroupSubscriptionResponse getConsumerGroupSubscriptionWithOptions(const string &instanceId, const string &consumerGroupId, const string &topicName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the subscriptions of a consumer group.
       *
       * @return GetConsumerGroupSubscriptionResponse
       */
      Models::GetConsumerGroupSubscriptionResponse getConsumerGroupSubscription(const string &instanceId, const string &consumerGroupId, const string &topicName);

      /**
       * @summary Queries the stack information about a consumer.
       *
       * @param request GetConsumerStackRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConsumerStackResponse
       */
      Models::GetConsumerStackResponse getConsumerStackWithOptions(const string &instanceId, const string &consumerGroupId, const Models::GetConsumerStackRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the stack information about a consumer.
       *
       * @param request GetConsumerStackRequest
       * @return GetConsumerStackResponse
       */
      Models::GetConsumerStackResponse getConsumerStack(const string &instanceId, const string &consumerGroupId, const Models::GetConsumerStackRequest &request);

      /**
       * @summary Queries the details of a backup plan mapping.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDisasterRecoveryItemResponse
       */
      Models::GetDisasterRecoveryItemResponse getDisasterRecoveryItemWithOptions(const string &planId, const string &itemId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a backup plan mapping.
       *
       * @return GetDisasterRecoveryItemResponse
       */
      Models::GetDisasterRecoveryItemResponse getDisasterRecoveryItem(const string &planId, const string &itemId);

      /**
       * @summary Queries the details of a backup plan.
       *
       * @description Before querying, make sure you have created a Global Replicator backup plan. Before using Global Replicator, your account must have the AliyunServiceRoleForRMQDisasterRecovery service-linked role. This role is used to grant authorization for ApsaraMQ for RocketMQ to access the EventBridge event bus. The system typically creates this role automatically the first time you use the associated feature. If automatic creation failed, create the role manually.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDisasterRecoveryPlanResponse
       */
      Models::GetDisasterRecoveryPlanResponse getDisasterRecoveryPlanWithOptions(const string &planId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a backup plan.
       *
       * @description Before querying, make sure you have created a Global Replicator backup plan. Before using Global Replicator, your account must have the AliyunServiceRoleForRMQDisasterRecovery service-linked role. This role is used to grant authorization for ApsaraMQ for RocketMQ to access the EventBridge event bus. The system typically creates this role automatically the first time you use the associated feature. If automatic creation failed, create the role manually.
       *
       * @return GetDisasterRecoveryPlanResponse
       */
      Models::GetDisasterRecoveryPlanResponse getDisasterRecoveryPlan(const string &planId);

      /**
       * @summary Retrieves the details of a specified instance.
       *
       * @description >Notice: The OpenAPI operations provided by Alibaba Cloud are management APIs used to manage and query Alibaba Cloud service resources. Use them only in management and control workflows. Do not rely on OpenAPI in core data link workflows for message sending and receiving, as this may introduce risks to the data link.</notice>
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceResponse
       */
      Models::GetInstanceResponse getInstanceWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a specified instance.
       *
       * @description >Notice: The OpenAPI operations provided by Alibaba Cloud are management APIs used to manage and query Alibaba Cloud service resources. Use them only in management and control workflows. Do not rely on OpenAPI in core data link workflows for message sending and receiving, as this may introduce risks to the data link.</notice>
       *
       * @return GetInstanceResponse
       */
      Models::GetInstanceResponse getInstance(const string &instanceId);

      /**
       * @summary Retrieves the account details for a specified instance.
       *
       * @param request GetInstanceAccountRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceAccountResponse
       */
      Models::GetInstanceAccountResponse getInstanceAccountWithOptions(const string &instanceId, const Models::GetInstanceAccountRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the account details for a specified instance.
       *
       * @param request GetInstanceAccountRequest
       * @return GetInstanceAccountResponse
       */
      Models::GetInstanceAccountResponse getInstanceAccount(const string &instanceId, const Models::GetInstanceAccountRequest &request);

      /**
       * @summary Queries information about the access control list (ACL) of an instance.
       *
       * @param request GetInstanceAclRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceAclResponse
       */
      Models::GetInstanceAclResponse getInstanceAclWithOptions(const string &instanceId, const string &username, const Models::GetInstanceAclRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about the access control list (ACL) of an instance.
       *
       * @param request GetInstanceAclRequest
       * @return GetInstanceAclResponse
       */
      Models::GetInstanceAclResponse getInstanceAcl(const string &instanceId, const string &username, const Models::GetInstanceAclRequest &request);

      /**
       * @summary 查询实例巡检配置
       *
       * @param request GetInstanceInspectionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceInspectionResponse
       */
      Models::GetInstanceInspectionResponse getInstanceInspectionWithOptions(const string &instanceId, const Models::GetInstanceInspectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询实例巡检配置
       *
       * @param request GetInstanceInspectionRequest
       * @return GetInstanceInspectionResponse
       */
      Models::GetInstanceInspectionResponse getInstanceInspection(const string &instanceId, const Models::GetInstanceInspectionRequest &request);

      /**
       * @summary 查询实例风险诊断报告
       *
       * @param request GetInstanceInspectionReportRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceInspectionReportResponse
       */
      Models::GetInstanceInspectionReportResponse getInstanceInspectionReportWithOptions(const string &reportId, const Models::GetInstanceInspectionReportRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询实例风险诊断报告
       *
       * @param request GetInstanceInspectionReportRequest
       * @return GetInstanceInspectionReportResponse
       */
      Models::GetInstanceInspectionReportResponse getInstanceInspectionReport(const string &reportId, const Models::GetInstanceInspectionReportRequest &request);

      /**
       * @summary 查询实例巡检结果
       *
       * @param request GetInstanceInspectionRunRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceInspectionRunResponse
       */
      Models::GetInstanceInspectionRunResponse getInstanceInspectionRunWithOptions(const string &instanceId, const string &runId, const Models::GetInstanceInspectionRunRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询实例巡检结果
       *
       * @param request GetInstanceInspectionRunRequest
       * @return GetInstanceInspectionRunResponse
       */
      Models::GetInstanceInspectionRunResponse getInstanceInspectionRun(const string &instanceId, const string &runId, const Models::GetInstanceInspectionRunRequest &request);

      /**
       * @summary Queries the information about the IP address whitelist of an instance.
       *
       * @param tmpReq GetInstanceIpWhitelistRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceIpWhitelistResponse
       */
      Models::GetInstanceIpWhitelistResponse getInstanceIpWhitelistWithOptions(const string &instanceId, const Models::GetInstanceIpWhitelistRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the IP address whitelist of an instance.
       *
       * @param request GetInstanceIpWhitelistRequest
       * @return GetInstanceIpWhitelistResponse
       */
      Models::GetInstanceIpWhitelistResponse getInstanceIpWhitelist(const string &instanceId, const Models::GetInstanceIpWhitelistRequest &request);

      /**
       * @summary Retrieves the details of a specified message.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMessageDetailResponse
       */
      Models::GetMessageDetailResponse getMessageDetailWithOptions(const string &instanceId, const string &topicName, const string &messageId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a specified message.
       *
       * @return GetMessageDetailResponse
       */
      Models::GetMessageDetailResponse getMessageDetail(const string &instanceId, const string &topicName, const string &messageId);

      /**
       * @summary Retrieves the details of a specified topic.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTopicResponse
       */
      Models::GetTopicResponse getTopicWithOptions(const string &instanceId, const string &topicName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a specified topic.
       *
       * @return GetTopicResponse
       */
      Models::GetTopicResponse getTopic(const string &instanceId, const string &topicName);

      /**
       * @summary Retrieves the message trace for a specified message in a specified topic.
       *
       * @param request GetTraceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTraceResponse
       */
      Models::GetTraceResponse getTraceWithOptions(const string &instanceId, const string &topicName, const string &messageId, const Models::GetTraceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the message trace for a specified message in a specified topic.
       *
       * @param request GetTraceRequest
       * @return GetTraceResponse
       */
      Models::GetTraceResponse getTrace(const string &instanceId, const string &topicName, const string &messageId, const Models::GetTraceRequest &request);

      /**
       * @summary 查询 Agent 诊断会话列表
       *
       * @param request ListAgentConversationsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAgentConversationsResponse
       */
      Models::ListAgentConversationsResponse listAgentConversationsWithOptions(const Models::ListAgentConversationsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询 Agent 诊断会话列表
       *
       * @param request ListAgentConversationsRequest
       * @return ListAgentConversationsResponse
       */
      Models::ListAgentConversationsResponse listAgentConversations(const Models::ListAgentConversationsRequest &request);

      /**
       * @summary Queries supported zones.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAvailableZonesResponse
       */
      Models::ListAvailableZonesResponse listAvailableZonesWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries supported zones.
       *
       * @return ListAvailableZonesResponse
       */
      Models::ListAvailableZonesResponse listAvailableZones();

      /**
       * @summary Retrieves the connection information for clients in a specified consumer group.
       *
       * @param request ListConsumerConnectionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConsumerConnectionsResponse
       */
      Models::ListConsumerConnectionsResponse listConsumerConnectionsWithOptions(const string &instanceId, const string &consumerGroupId, const Models::ListConsumerConnectionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the connection information for clients in a specified consumer group.
       *
       * @param request ListConsumerConnectionsRequest
       * @return ListConsumerConnectionsResponse
       */
      Models::ListConsumerConnectionsResponse listConsumerConnections(const string &instanceId, const string &consumerGroupId, const Models::ListConsumerConnectionsRequest &request);

      /**
       * @summary Lists the subscription relationships for a consumer group.
       *
       * @param request ListConsumerGroupSubscriptionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConsumerGroupSubscriptionsResponse
       */
      Models::ListConsumerGroupSubscriptionsResponse listConsumerGroupSubscriptionsWithOptions(const string &instanceId, const string &consumerGroupId, const Models::ListConsumerGroupSubscriptionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the subscription relationships for a consumer group.
       *
       * @param request ListConsumerGroupSubscriptionsRequest
       * @return ListConsumerGroupSubscriptionsResponse
       */
      Models::ListConsumerGroupSubscriptionsResponse listConsumerGroupSubscriptions(const string &instanceId, const string &consumerGroupId, const Models::ListConsumerGroupSubscriptionsRequest &request);

      /**
       * @summary Queries the list of consumer groups under a specified instance.
       *
       * @description >Notice: The OpenAPI provided by Alibaba Cloud is a management and control API used to manage and query related resources of Alibaba Cloud services. It is recommended only for integration in management and control links. Using OpenAPI in the core data link for message sending and receiving is strictly prohibited. Otherwise, risks may occur in the link.
       *
       * @param request ListConsumerGroupsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConsumerGroupsResponse
       */
      Models::ListConsumerGroupsResponse listConsumerGroupsWithOptions(const string &instanceId, const Models::ListConsumerGroupsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of consumer groups under a specified instance.
       *
       * @description >Notice: The OpenAPI provided by Alibaba Cloud is a management and control API used to manage and query related resources of Alibaba Cloud services. It is recommended only for integration in management and control links. Using OpenAPI in the core data link for message sending and receiving is strictly prohibited. Otherwise, risks may occur in the link.
       *
       * @param request ListConsumerGroupsRequest
       * @return ListConsumerGroupsResponse
       */
      Models::ListConsumerGroupsResponse listConsumerGroups(const string &instanceId, const Models::ListConsumerGroupsRequest &request);

      /**
       * @summary Queries the list of consumer offset synchronization checkpoints.
       *
       * @description Before you call this operation, create a Global Replicator backup plan and add topic mapping items to the plan. Then use the corresponding planId, itemId, and source instance ID to query consumer offset synchronization checkpoints. To use Global Replicator, make sure that your account has the AliyunServiceRoleForRMQDisasterRecovery service-linked role. The system typically performs automatic creation of this role when you first use the associated feature.
       *
       * @param request ListDisasterRecoveryCheckpointsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDisasterRecoveryCheckpointsResponse
       */
      Models::ListDisasterRecoveryCheckpointsResponse listDisasterRecoveryCheckpointsWithOptions(const string &planId, const string &itemId, const Models::ListDisasterRecoveryCheckpointsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of consumer offset synchronization checkpoints.
       *
       * @description Before you call this operation, create a Global Replicator backup plan and add topic mapping items to the plan. Then use the corresponding planId, itemId, and source instance ID to query consumer offset synchronization checkpoints. To use Global Replicator, make sure that your account has the AliyunServiceRoleForRMQDisasterRecovery service-linked role. The system typically performs automatic creation of this role when you first use the associated feature.
       *
       * @param request ListDisasterRecoveryCheckpointsRequest
       * @return ListDisasterRecoveryCheckpointsResponse
       */
      Models::ListDisasterRecoveryCheckpointsResponse listDisasterRecoveryCheckpoints(const string &planId, const string &itemId, const Models::ListDisasterRecoveryCheckpointsRequest &request);

      /**
       * @summary Queries the list of backup mapping tasks.
       *
       * @param request ListDisasterRecoveryItemsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDisasterRecoveryItemsResponse
       */
      Models::ListDisasterRecoveryItemsResponse listDisasterRecoveryItemsWithOptions(const string &planId, const Models::ListDisasterRecoveryItemsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of backup mapping tasks.
       *
       * @param request ListDisasterRecoveryItemsRequest
       * @return ListDisasterRecoveryItemsResponse
       */
      Models::ListDisasterRecoveryItemsResponse listDisasterRecoveryItems(const string &planId, const Models::ListDisasterRecoveryItemsRequest &request);

      /**
       * @summary Queries a list of backup plans.
       *
       * @param request ListDisasterRecoveryPlansRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDisasterRecoveryPlansResponse
       */
      Models::ListDisasterRecoveryPlansResponse listDisasterRecoveryPlansWithOptions(const Models::ListDisasterRecoveryPlansRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of backup plans.
       *
       * @param request ListDisasterRecoveryPlansRequest
       * @return ListDisasterRecoveryPlansResponse
       */
      Models::ListDisasterRecoveryPlansResponse listDisasterRecoveryPlans(const Models::ListDisasterRecoveryPlansRequest &request);

      /**
       * @summary 查询巡检模板列表
       *
       * @param request ListInspectionTemplatesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInspectionTemplatesResponse
       */
      Models::ListInspectionTemplatesResponse listInspectionTemplatesWithOptions(const Models::ListInspectionTemplatesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询巡检模板列表
       *
       * @param request ListInspectionTemplatesRequest
       * @return ListInspectionTemplatesResponse
       */
      Models::ListInspectionTemplatesResponse listInspectionTemplates(const Models::ListInspectionTemplatesRequest &request);

      /**
       * @summary Retrieves the access accounts for a specified instance.
       *
       * @param request ListInstanceAccountRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstanceAccountResponse
       */
      Models::ListInstanceAccountResponse listInstanceAccountWithOptions(const string &instanceId, const Models::ListInstanceAccountRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the access accounts for a specified instance.
       *
       * @param request ListInstanceAccountRequest
       * @return ListInstanceAccountResponse
       */
      Models::ListInstanceAccountResponse listInstanceAccount(const string &instanceId, const Models::ListInstanceAccountRequest &request);

      /**
       * @summary Queries the access control lists (ACLs) of an instance.
       *
       * @param request ListInstanceAclRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstanceAclResponse
       */
      Models::ListInstanceAclResponse listInstanceAclWithOptions(const string &instanceId, const Models::ListInstanceAclRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the access control lists (ACLs) of an instance.
       *
       * @param request ListInstanceAclRequest
       * @return ListInstanceAclResponse
       */
      Models::ListInstanceAclResponse listInstanceAcl(const string &instanceId, const Models::ListInstanceAclRequest &request);

      /**
       * @summary 查询巡检项关联资源
       *
       * @param request ListInstanceInspectionResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstanceInspectionResourcesResponse
       */
      Models::ListInstanceInspectionResourcesResponse listInstanceInspectionResourcesWithOptions(const string &instanceId, const Models::ListInstanceInspectionResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询巡检项关联资源
       *
       * @param request ListInstanceInspectionResourcesRequest
       * @return ListInstanceInspectionResourcesResponse
       */
      Models::ListInstanceInspectionResourcesResponse listInstanceInspectionResources(const string &instanceId, const Models::ListInstanceInspectionResourcesRequest &request);

      /**
       * @summary 查询实例巡检历史
       *
       * @param request ListInstanceInspectionRunsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstanceInspectionRunsResponse
       */
      Models::ListInstanceInspectionRunsResponse listInstanceInspectionRunsWithOptions(const string &instanceId, const Models::ListInstanceInspectionRunsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询实例巡检历史
       *
       * @param request ListInstanceInspectionRunsRequest
       * @return ListInstanceInspectionRunsResponse
       */
      Models::ListInstanceInspectionRunsResponse listInstanceInspectionRuns(const string &instanceId, const Models::ListInstanceInspectionRunsRequest &request);

      /**
       * @summary 分页查询已配置的实例诊断；仅返回配置摘要
       *
       * @param request ListInstanceInspectionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstanceInspectionsResponse
       */
      Models::ListInstanceInspectionsResponse listInstanceInspectionsWithOptions(const Models::ListInstanceInspectionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分页查询已配置的实例诊断；仅返回配置摘要
       *
       * @param request ListInstanceInspectionsRequest
       * @return ListInstanceInspectionsResponse
       */
      Models::ListInstanceInspectionsResponse listInstanceInspections(const Models::ListInstanceInspectionsRequest &request);

      /**
       * @summary Queries the IP address whitelists of an instance.
       *
       * @param request ListInstanceIpWhitelistRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstanceIpWhitelistResponse
       */
      Models::ListInstanceIpWhitelistResponse listInstanceIpWhitelistWithOptions(const string &instanceId, const Models::ListInstanceIpWhitelistRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the IP address whitelists of an instance.
       *
       * @param request ListInstanceIpWhitelistRequest
       * @return ListInstanceIpWhitelistResponse
       */
      Models::ListInstanceIpWhitelistResponse listInstanceIpWhitelist(const string &instanceId, const Models::ListInstanceIpWhitelistRequest &request);

      /**
       * @summary Queries the list of all ApsaraMQ for RocketMQ instances in a specified region.
       *
       * @description >Notice: The OpenAPI operations provided by Alibaba Cloud are management API operations that are used to manage and query resources of Alibaba Cloud services. Integrate OpenAPI operations only into the management data link. Do not use OpenAPI operations in the core data link for sending and receiving messages. Otherwise, risks may occur on the data link.
       *
       * @param tmpReq ListInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstancesWithOptions(const Models::ListInstancesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of all ApsaraMQ for RocketMQ instances in a specified region.
       *
       * @description >Notice: The OpenAPI operations provided by Alibaba Cloud are management API operations that are used to manage and query resources of Alibaba Cloud services. Integrate OpenAPI operations only into the management data link. Do not use OpenAPI operations in the core data link for sending and receiving messages. Otherwise, risks may occur on the data link.
       *
       * @param request ListInstancesRequest
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstances(const Models::ListInstancesRequest &request);

      /**
       * @summary Queries a list of messages.
       *
       * @param request ListMessagesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMessagesResponse
       */
      Models::ListMessagesResponse listMessagesWithOptions(const string &instanceId, const string &topicName, const Models::ListMessagesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of messages.
       *
       * @param request ListMessagesRequest
       * @return ListMessagesResponse
       */
      Models::ListMessagesResponse listMessages(const string &instanceId, const string &topicName, const Models::ListMessagesRequest &request);

      /**
       * @summary Query Monitoring Items List
       *
       * @param request ListMetricMetaRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMetricMetaResponse
       */
      Models::ListMetricMetaResponse listMetricMetaWithOptions(const Models::ListMetricMetaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Monitoring Items List
       *
       * @param request ListMetricMetaRequest
       * @return ListMetricMetaResponse
       */
      Models::ListMetricMetaResponse listMetricMeta(const Models::ListMetricMetaRequest &request);

      /**
       * @summary Queries the list of migration operations.
       *
       * @param tmpReq ListMigrationOperationsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMigrationOperationsResponse
       */
      Models::ListMigrationOperationsResponse listMigrationOperationsWithOptions(const string &migrationId, const string &stageType, const Models::ListMigrationOperationsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of migration operations.
       *
       * @param request ListMigrationOperationsRequest
       * @return ListMigrationOperationsResponse
       */
      Models::ListMigrationOperationsResponse listMigrationOperations(const string &migrationId, const string &stageType, const Models::ListMigrationOperationsRequest &request);

      /**
       * @summary Queries the list of migration tasks.
       *
       * @param request ListMigrationsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMigrationsResponse
       */
      Models::ListMigrationsResponse listMigrationsWithOptions(const Models::ListMigrationsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of migration tasks.
       *
       * @param request ListMigrationsRequest
       * @return ListMigrationsResponse
       */
      Models::ListMigrationsResponse listMigrations(const Models::ListMigrationsRequest &request);

      /**
       * @summary Queries the list of regions.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRegionsResponse
       */
      Models::ListRegionsResponse listRegionsWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of regions.
       *
       * @return ListRegionsResponse
       */
      Models::ListRegionsResponse listRegions();

      /**
       * @summary Queries the tags that are added to resources.
       *
       * @param request ListTagResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags that are added to resources.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Queries the subscriptions of a specific topic.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTopicSubscriptionsResponse
       */
      Models::ListTopicSubscriptionsResponse listTopicSubscriptionsWithOptions(const string &instanceId, const string &topicName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the subscriptions of a specific topic.
       *
       * @return ListTopicSubscriptionsResponse
       */
      Models::ListTopicSubscriptionsResponse listTopicSubscriptions(const string &instanceId, const string &topicName);

      /**
       * @summary Queries the list of topics in a specified instance.
       *
       * @param tmpReq ListTopicsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTopicsResponse
       */
      Models::ListTopicsResponse listTopicsWithOptions(const string &instanceId, const Models::ListTopicsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of topics in a specified instance.
       *
       * @param request ListTopicsRequest
       * @return ListTopicsResponse
       */
      Models::ListTopicsResponse listTopics(const string &instanceId, const Models::ListTopicsRequest &request);

      /**
       * @summary Queries the list of message traces under a specified topic.
       *
       * @param request ListTracesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTracesResponse
       */
      Models::ListTracesResponse listTracesWithOptions(const string &instanceId, const string &topicName, const Models::ListTracesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of message traces under a specified topic.
       *
       * @param request ListTracesRequest
       * @return ListTracesResponse
       */
      Models::ListTracesResponse listTraces(const string &instanceId, const string &topicName, const Models::ListTracesRequest &request);

      /**
       * @summary Resets the consumer offset of a consumer group. If you reset a consumer offset, the offset from which a consumer starts to consume messages is changed. If faults occur or wrong messages are consumed during message consumption, you can reset the consumer offset to roll back the consumption to a specific offset for reconsumption. You can also reset the consumer offset to the latest offset and temporarily leave the accumulated messages unhandled.
       *
       * @param request ResetConsumeOffsetRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetConsumeOffsetResponse
       */
      Models::ResetConsumeOffsetResponse resetConsumeOffsetWithOptions(const string &instanceId, const string &consumerGroupId, const string &topicName, const Models::ResetConsumeOffsetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets the consumer offset of a consumer group. If you reset a consumer offset, the offset from which a consumer starts to consume messages is changed. If faults occur or wrong messages are consumed during message consumption, you can reset the consumer offset to roll back the consumption to a specific offset for reconsumption. You can also reset the consumer offset to the latest offset and temporarily leave the accumulated messages unhandled.
       *
       * @param request ResetConsumeOffsetRequest
       * @return ResetConsumeOffsetResponse
       */
      Models::ResetConsumeOffsetResponse resetConsumeOffset(const string &instanceId, const string &consumerGroupId, const string &topicName, const Models::ResetConsumeOffsetRequest &request);

      /**
       * @summary 响应 Agent 诊断交互
       *
       * @param request RespondAgentConversationActionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RespondAgentConversationActionResponse
       */
      Models::RespondAgentConversationActionResponse respondAgentConversationActionWithOptions(const string &conversationId, const string &actionId, const Models::RespondAgentConversationActionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 响应 Agent 诊断交互
       *
       * @param request RespondAgentConversationActionRequest
       * @return RespondAgentConversationActionResponse
       */
      Models::RespondAgentConversationActionResponse respondAgentConversationAction(const string &conversationId, const string &actionId, const Models::RespondAgentConversationActionRequest &request);

      /**
       * @summary 立即执行实例巡检
       *
       * @param request RunInstanceInspectionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunInstanceInspectionResponse
       */
      Models::RunInstanceInspectionResponse runInstanceInspectionWithOptions(const string &instanceId, const Models::RunInstanceInspectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 立即执行实例巡检
       *
       * @param request RunInstanceInspectionRequest
       * @return RunInstanceInspectionResponse
       */
      Models::RunInstanceInspectionResponse runInstanceInspection(const string &instanceId, const Models::RunInstanceInspectionRequest &request);

      /**
       * @summary 发送 Agent 诊断消息
       *
       * @param request SendAgentConversationMessageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendAgentConversationMessageResponse
       */
      FutureGenerator<Models::SendAgentConversationMessageResponse> sendAgentConversationMessageWithSSE(const string &conversationId, const Models::SendAgentConversationMessageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 发送 Agent 诊断消息
       *
       * @param request SendAgentConversationMessageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendAgentConversationMessageResponse
       */
      Models::SendAgentConversationMessageResponse sendAgentConversationMessageWithOptions(const string &conversationId, const Models::SendAgentConversationMessageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 发送 Agent 诊断消息
       *
       * @param request SendAgentConversationMessageRequest
       * @return SendAgentConversationMessageResponse
       */
      Models::SendAgentConversationMessageResponse sendAgentConversationMessage(const string &conversationId, const Models::SendAgentConversationMessageRequest &request);

      /**
       * @summary Starts a topic mapping of a Global Replicator task.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartDisasterRecoveryItemResponse
       */
      Models::StartDisasterRecoveryItemResponse startDisasterRecoveryItemWithOptions(const string &planId, const string &itemId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a topic mapping of a Global Replicator task.
       *
       * @return StartDisasterRecoveryItemResponse
       */
      Models::StartDisasterRecoveryItemResponse startDisasterRecoveryItem(const string &planId, const string &itemId);

      /**
       * @summary 引导 Agent 诊断会话执行
       *
       * @param request SteerAgentConversationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SteerAgentConversationResponse
       */
      Models::SteerAgentConversationResponse steerAgentConversationWithOptions(const string &conversationId, const Models::SteerAgentConversationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 引导 Agent 诊断会话执行
       *
       * @param request SteerAgentConversationRequest
       * @return SteerAgentConversationResponse
       */
      Models::SteerAgentConversationResponse steerAgentConversation(const string &conversationId, const Models::SteerAgentConversationRequest &request);

      /**
       * @summary 停止 Agent 诊断会话执行
       *
       * @param request StopAgentConversationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopAgentConversationResponse
       */
      Models::StopAgentConversationResponse stopAgentConversationWithOptions(const string &conversationId, const Models::StopAgentConversationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 停止 Agent 诊断会话执行
       *
       * @param request StopAgentConversationRequest
       * @return StopAgentConversationResponse
       */
      Models::StopAgentConversationResponse stopAgentConversation(const string &conversationId, const Models::StopAgentConversationRequest &request);

      /**
       * @summary Stops a topic mapping of a Global Replicator task.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopDisasterRecoveryItemResponse
       */
      Models::StopDisasterRecoveryItemResponse stopDisasterRecoveryItemWithOptions(const string &planId, const string &itemId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a topic mapping of a Global Replicator task.
       *
       * @return StopDisasterRecoveryItemResponse
       */
      Models::StopDisasterRecoveryItemResponse stopDisasterRecoveryItem(const string &planId, const string &itemId);

      /**
       * @summary Synchronize Disaster Recovery Plan Consumption Progress
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SyncDisasterRecoveryCheckpointResponse
       */
      Models::SyncDisasterRecoveryCheckpointResponse syncDisasterRecoveryCheckpointWithOptions(const string &planId, const string &itemId, const string &checkpointId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Synchronize Disaster Recovery Plan Consumption Progress
       *
       * @return SyncDisasterRecoveryCheckpointResponse
       */
      Models::SyncDisasterRecoveryCheckpointResponse syncDisasterRecoveryCheckpoint(const string &planId, const string &itemId, const string &checkpointId);

      /**
       * @summary Creates resource tags.
       *
       * @param request TagResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates resource tags.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Removes tags from resources.
       *
       * @param request UntagResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags from resources.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary 重命名 Agent 诊断会话
       *
       * @param request UpdateAgentConversationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAgentConversationResponse
       */
      Models::UpdateAgentConversationResponse updateAgentConversationWithOptions(const string &conversationId, const Models::UpdateAgentConversationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重命名 Agent 诊断会话
       *
       * @param request UpdateAgentConversationRequest
       * @return UpdateAgentConversationResponse
       */
      Models::UpdateAgentConversationResponse updateAgentConversation(const string &conversationId, const Models::UpdateAgentConversationRequest &request);

      /**
       * @summary 更新 Agent 诊断会话分享范围
       *
       * @param request UpdateAgentConversationShareScopeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAgentConversationShareScopeResponse
       */
      Models::UpdateAgentConversationShareScopeResponse updateAgentConversationShareScopeWithOptions(const string &conversationId, const Models::UpdateAgentConversationShareScopeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新 Agent 诊断会话分享范围
       *
       * @param request UpdateAgentConversationShareScopeRequest
       * @return UpdateAgentConversationShareScopeResponse
       */
      Models::UpdateAgentConversationShareScopeResponse updateAgentConversationShareScope(const string &conversationId, const Models::UpdateAgentConversationShareScopeRequest &request);

      /**
       * @summary Updates the basic information and consumption retry policy of a consumer group.
       *
       * @description >Notice: The OpenAPI provided by Alibaba Cloud is a management and control API used to manage and query resources of Alibaba Cloud services. It is recommended only for integration in management and control links. Do not use OpenAPI in the core data link for sending and receiving messages. Otherwise, risks may occur on the data link.
       *
       * @param request UpdateConsumerGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateConsumerGroupResponse
       */
      Models::UpdateConsumerGroupResponse updateConsumerGroupWithOptions(const string &instanceId, const string &consumerGroupId, const Models::UpdateConsumerGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the basic information and consumption retry policy of a consumer group.
       *
       * @description >Notice: The OpenAPI provided by Alibaba Cloud is a management and control API used to manage and query resources of Alibaba Cloud services. It is recommended only for integration in management and control links. Do not use OpenAPI in the core data link for sending and receiving messages. Otherwise, risks may occur on the data link.
       *
       * @param request UpdateConsumerGroupRequest
       * @return UpdateConsumerGroupResponse
       */
      Models::UpdateConsumerGroupResponse updateConsumerGroup(const string &instanceId, const string &consumerGroupId, const Models::UpdateConsumerGroupRequest &request);

      /**
       * @summary Updates a topic mapping in a global message backup plan.
       *
       * @param request UpdateDisasterRecoveryItemRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDisasterRecoveryItemResponse
       */
      Models::UpdateDisasterRecoveryItemResponse updateDisasterRecoveryItemWithOptions(const string &planId, const string &itemId, const Models::UpdateDisasterRecoveryItemRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a topic mapping in a global message backup plan.
       *
       * @param request UpdateDisasterRecoveryItemRequest
       * @return UpdateDisasterRecoveryItemResponse
       */
      Models::UpdateDisasterRecoveryItemResponse updateDisasterRecoveryItem(const string &planId, const string &itemId, const Models::UpdateDisasterRecoveryItemRequest &request);

      /**
       * @summary Modifies a global message backup plan.
       *
       * @param request UpdateDisasterRecoveryPlanRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDisasterRecoveryPlanResponse
       */
      Models::UpdateDisasterRecoveryPlanResponse updateDisasterRecoveryPlanWithOptions(const string &planId, const Models::UpdateDisasterRecoveryPlanRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a global message backup plan.
       *
       * @param request UpdateDisasterRecoveryPlanRequest
       * @return UpdateDisasterRecoveryPlanResponse
       */
      Models::UpdateDisasterRecoveryPlanResponse updateDisasterRecoveryPlan(const string &planId, const Models::UpdateDisasterRecoveryPlanRequest &request);

      /**
       * @summary Updates the basic information and specification configurations of an ApsaraMQ for RocketMQ instance.
       *
       * @description >Notice: The OpenAPI provided by Alibaba Cloud is a management and control API used to manage and query resources of Alibaba Cloud services. It is recommended only for integration in management and control paths. Do not use OpenAPI in the core data link for sending and receiving messages. Otherwise, risks may occur on the link.
       *
       * @param request UpdateInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceResponse
       */
      Models::UpdateInstanceResponse updateInstanceWithOptions(const string &instanceId, const Models::UpdateInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the basic information and specification configurations of an ApsaraMQ for RocketMQ instance.
       *
       * @description >Notice: The OpenAPI provided by Alibaba Cloud is a management and control API used to manage and query resources of Alibaba Cloud services. It is recommended only for integration in management and control paths. Do not use OpenAPI in the core data link for sending and receiving messages. Otherwise, risks may occur on the link.
       *
       * @param request UpdateInstanceRequest
       * @return UpdateInstanceResponse
       */
      Models::UpdateInstanceResponse updateInstance(const string &instanceId, const Models::UpdateInstanceRequest &request);

      /**
       * @summary Updates the information of a specified account under a specified instance.
       *
       * @param request UpdateInstanceAccountRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceAccountResponse
       */
      Models::UpdateInstanceAccountResponse updateInstanceAccountWithOptions(const string &instanceId, const string &username, const Models::UpdateInstanceAccountRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information of a specified account under a specified instance.
       *
       * @param request UpdateInstanceAccountRequest
       * @return UpdateInstanceAccountResponse
       */
      Models::UpdateInstanceAccountResponse updateInstanceAccount(const string &instanceId, const string &username, const Models::UpdateInstanceAccountRequest &request);

      /**
       * @summary Updates the permissions on the resources of a specific instance for a specific user.
       *
       * @param request UpdateInstanceAclRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceAclResponse
       */
      Models::UpdateInstanceAclResponse updateInstanceAclWithOptions(const string &instanceId, const string &username, const Models::UpdateInstanceAclRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the permissions on the resources of a specific instance for a specific user.
       *
       * @param request UpdateInstanceAclRequest
       * @return UpdateInstanceAclResponse
       */
      Models::UpdateInstanceAclResponse updateInstanceAcl(const string &instanceId, const string &username, const Models::UpdateInstanceAclRequest &request);

      /**
       * @summary 修改实例巡检配置
       *
       * @param request UpdateInstanceInspectionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceInspectionResponse
       */
      Models::UpdateInstanceInspectionResponse updateInstanceInspectionWithOptions(const string &instanceId, const Models::UpdateInstanceInspectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改实例巡检配置
       *
       * @param request UpdateInstanceInspectionRequest
       * @return UpdateInstanceInspectionResponse
       */
      Models::UpdateInstanceInspectionResponse updateInstanceInspection(const string &instanceId, const Models::UpdateInstanceInspectionRequest &request);

      /**
       * @summary Updates the remarks for a topic.
       *
       * @param request UpdateTopicRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTopicResponse
       */
      Models::UpdateTopicResponse updateTopicWithOptions(const string &instanceId, const string &topicName, const Models::UpdateTopicRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the remarks for a topic.
       *
       * @param request UpdateTopicRequest
       * @return UpdateTopicResponse
       */
      Models::UpdateTopicResponse updateTopic(const string &instanceId, const string &topicName, const Models::UpdateTopicRequest &request);

      /**
       * @summary 上传 Agent 会话客户端日志
       *
       * @param request UploadAgentConversationLogRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadAgentConversationLogResponse
       */
      Models::UploadAgentConversationLogResponse uploadAgentConversationLogWithOptions(const string &conversationId, const Models::UploadAgentConversationLogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 上传 Agent 会话客户端日志
       *
       * @param request UploadAgentConversationLogRequest
       * @return UploadAgentConversationLogResponse
       */
      Models::UploadAgentConversationLogResponse uploadAgentConversationLog(const string &conversationId, const Models::UploadAgentConversationLogRequest &request);

      /**
       * @summary Verifies the consumption status of a message in a specific topic on a specific instance.
       *
       * @param request VerifyConsumeMessageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifyConsumeMessageResponse
       */
      Models::VerifyConsumeMessageResponse verifyConsumeMessageWithOptions(const string &instanceId, const string &topicName, const string &messageId, const Models::VerifyConsumeMessageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies the consumption status of a message in a specific topic on a specific instance.
       *
       * @param request VerifyConsumeMessageRequest
       * @return VerifyConsumeMessageResponse
       */
      Models::VerifyConsumeMessageResponse verifyConsumeMessage(const string &instanceId, const string &topicName, const string &messageId, const Models::VerifyConsumeMessageRequest &request);

      /**
       * @summary Tests whether messages can be sent to a specified topic in an instance.
       *
       * @param request VerifySendMessageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifySendMessageResponse
       */
      Models::VerifySendMessageResponse verifySendMessageWithOptions(const string &instanceId, const string &topicName, const Models::VerifySendMessageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Tests whether messages can be sent to a specified topic in an instance.
       *
       * @param request VerifySendMessageRequest
       * @return VerifySendMessageResponse
       */
      Models::VerifySendMessageResponse verifySendMessage(const string &instanceId, const string &topicName, const Models::VerifySendMessageRequest &request);
  };
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
