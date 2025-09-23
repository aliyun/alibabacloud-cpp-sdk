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
       * @summary Add Disaster Recovery Plan Entry
       *
       * @param request AddDisasterRecoveryItemRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddDisasterRecoveryItemResponse
       */
      Models::AddDisasterRecoveryItemResponse addDisasterRecoveryItemWithOptions(const string &planId, const Models::AddDisasterRecoveryItemRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Add Disaster Recovery Plan Entry
       *
       * @param request AddDisasterRecoveryItemRequest
       * @return AddDisasterRecoveryItemResponse
       */
      Models::AddDisasterRecoveryItemResponse addDisasterRecoveryItem(const string &planId, const Models::AddDisasterRecoveryItemRequest &request);

      /**
       * @summary Changes the resource group to which a ApsaraMQ for RocketMQ instance belongs.
       *
       * @param request ChangeResourceGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroupWithOptions(const Models::ChangeResourceGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the resource group to which a ApsaraMQ for RocketMQ instance belongs.
       *
       * @param request ChangeResourceGroupRequest
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroup(const Models::ChangeResourceGroupRequest &request);

      /**
       * @summary Creates a consumer group.
       *
       * @description The ID of the consumer group. The ID is globally unique and is used to identify a consumer group.
       * The following limits are imposed on the ID:
       * *   Character limit: The ID can contain letters, digits, underscores (_), hyphens (-), and percent signs (%).
       * *   Length limit: The ID must be 1 to 60 characters in length.
       * For more information about strings that are reserved for the system, see [Limits on parameters](https://help.aliyun.com/document_detail/440347.html).
       *
       * @param request CreateConsumerGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateConsumerGroupResponse
       */
      Models::CreateConsumerGroupResponse createConsumerGroupWithOptions(const string &instanceId, const string &consumerGroupId, const Models::CreateConsumerGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a consumer group.
       *
       * @description The ID of the consumer group. The ID is globally unique and is used to identify a consumer group.
       * The following limits are imposed on the ID:
       * *   Character limit: The ID can contain letters, digits, underscores (_), hyphens (-), and percent signs (%).
       * *   Length limit: The ID must be 1 to 60 characters in length.
       * For more information about strings that are reserved for the system, see [Limits on parameters](https://help.aliyun.com/document_detail/440347.html).
       *
       * @param request CreateConsumerGroupRequest
       * @return CreateConsumerGroupResponse
       */
      Models::CreateConsumerGroupResponse createConsumerGroup(const string &instanceId, const string &consumerGroupId, const Models::CreateConsumerGroupRequest &request);

      /**
       * @summary Create Disaster Recovery Plan
       *
       * @param request CreateDisasterRecoveryPlanRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDisasterRecoveryPlanResponse
       */
      Models::CreateDisasterRecoveryPlanResponse createDisasterRecoveryPlanWithOptions(const Models::CreateDisasterRecoveryPlanRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create Disaster Recovery Plan
       *
       * @param request CreateDisasterRecoveryPlanRequest
       * @return CreateDisasterRecoveryPlanResponse
       */
      Models::CreateDisasterRecoveryPlanResponse createDisasterRecoveryPlan(const Models::CreateDisasterRecoveryPlanRequest &request);

      /**
       * @summary Creates an ApsaraMQ for RocketMQ 5.x instance.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       *
       * @param request CreateInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstanceWithOptions(const Models::CreateInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an ApsaraMQ for RocketMQ 5.x instance.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       *
       * @param request CreateInstanceRequest
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstance(const Models::CreateInstanceRequest &request);

      /**
       * @summary Creates an account that is used to access an instance.
       *
       * @param request CreateInstanceAccountRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceAccountResponse
       */
      Models::CreateInstanceAccountResponse createInstanceAccountWithOptions(const string &instanceId, const Models::CreateInstanceAccountRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an account that is used to access an instance.
       *
       * @param request CreateInstanceAccountRequest
       * @return CreateInstanceAccountResponse
       */
      Models::CreateInstanceAccountResponse createInstanceAccount(const string &instanceId, const Models::CreateInstanceAccountRequest &request);

      /**
       * @summary Creates an access control list (ACL) in a specific instance.
       *
       * @param request CreateInstanceAclRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceAclResponse
       */
      Models::CreateInstanceAclResponse createInstanceAclWithOptions(const string &instanceId, const string &username, const Models::CreateInstanceAclRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an access control list (ACL) in a specific instance.
       *
       * @param request CreateInstanceAclRequest
       * @return CreateInstanceAclResponse
       */
      Models::CreateInstanceAclResponse createInstanceAcl(const string &instanceId, const string &username, const Models::CreateInstanceAclRequest &request);

      /**
       * @summary Creates an IP address whitelist.
       *
       * @param request CreateInstanceIpWhitelistRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceIpWhitelistResponse
       */
      Models::CreateInstanceIpWhitelistResponse createInstanceIpWhitelistWithOptions(const string &instanceId, const Models::CreateInstanceIpWhitelistRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an IP address whitelist.
       *
       * @param request CreateInstanceIpWhitelistRequest
       * @return CreateInstanceIpWhitelistResponse
       */
      Models::CreateInstanceIpWhitelistResponse createInstanceIpWhitelist(const string &instanceId, const Models::CreateInstanceIpWhitelistRequest &request);

      /**
       * @summary Create Topic
       *
       * @param request CreateTopicRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTopicResponse
       */
      Models::CreateTopicResponse createTopicWithOptions(const string &instanceId, const string &topicName, const Models::CreateTopicRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create Topic
       *
       * @param request CreateTopicRequest
       * @return CreateTopicResponse
       */
      Models::CreateTopicResponse createTopic(const string &instanceId, const string &topicName, const Models::CreateTopicRequest &request);

      /**
       * @summary Deletes a specified consumer group.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * After you delete a consumer group, the consumer client associated with the consumer group cannot consume messages. Exercise caution when you call this operation.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteConsumerGroupResponse
       */
      Models::DeleteConsumerGroupResponse deleteConsumerGroupWithOptions(const string &instanceId, const string &consumerGroupId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified consumer group.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * After you delete a consumer group, the consumer client associated with the consumer group cannot consume messages. Exercise caution when you call this operation.
       *
       * @return DeleteConsumerGroupResponse
       */
      Models::DeleteConsumerGroupResponse deleteConsumerGroup(const string &instanceId, const string &consumerGroupId);

      /**
       * @summary Deletes the subscriptions of a consumer group.
       *
       * @param request DeleteConsumerGroupSubscriptionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteConsumerGroupSubscriptionResponse
       */
      Models::DeleteConsumerGroupSubscriptionResponse deleteConsumerGroupSubscriptionWithOptions(const string &instanceId, const string &consumerGroupId, const Models::DeleteConsumerGroupSubscriptionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the subscriptions of a consumer group.
       *
       * @param request DeleteConsumerGroupSubscriptionRequest
       * @return DeleteConsumerGroupSubscriptionResponse
       */
      Models::DeleteConsumerGroupSubscriptionResponse deleteConsumerGroupSubscription(const string &instanceId, const string &consumerGroupId, const Models::DeleteConsumerGroupSubscriptionRequest &request);

      /**
       * @summary 删除容灾计划条目
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDisasterRecoveryItemResponse
       */
      Models::DeleteDisasterRecoveryItemResponse deleteDisasterRecoveryItemWithOptions(const string &planId, const string &itemId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除容灾计划条目
       *
       * @return DeleteDisasterRecoveryItemResponse
       */
      Models::DeleteDisasterRecoveryItemResponse deleteDisasterRecoveryItem(const string &planId, const string &itemId);

      /**
       * @summary Deletes a global message backup plan.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDisasterRecoveryPlanResponse
       */
      Models::DeleteDisasterRecoveryPlanResponse deleteDisasterRecoveryPlanWithOptions(const string &planId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a global message backup plan.
       *
       * @return DeleteDisasterRecoveryPlanResponse
       */
      Models::DeleteDisasterRecoveryPlanResponse deleteDisasterRecoveryPlan(const string &planId);

      /**
       * @summary Deletes a ApsaraMQ for RocketMQ instance.
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
       * @summary Deletes a ApsaraMQ for RocketMQ instance.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       * *   After an instance is deleted, the instance cannot be restored. Exercise caution when you call this operation.
       * *   This operation is used to delete a pay-as-you-go instance. A subscription instance is automatically released after it expires. You do not need to manually delete a subscription instance.
       *
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstance(const string &instanceId);

      /**
       * @summary Delete access control ACL user
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInstanceAccountResponse
       */
      Models::DeleteInstanceAccountResponse deleteInstanceAccountWithOptions(const string &instanceId, const string &username, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete access control ACL user
       *
       * @return DeleteInstanceAccountResponse
       */
      Models::DeleteInstanceAccountResponse deleteInstanceAccount(const string &instanceId, const string &username);

      /**
       * @summary Deletes the permissions of a specific account of an instance.
       *
       * @param request DeleteInstanceAclRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInstanceAclResponse
       */
      Models::DeleteInstanceAclResponse deleteInstanceAclWithOptions(const string &instanceId, const string &username, const Models::DeleteInstanceAclRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the permissions of a specific account of an instance.
       *
       * @param request DeleteInstanceAclRequest
       * @return DeleteInstanceAclResponse
       */
      Models::DeleteInstanceAclResponse deleteInstanceAcl(const string &instanceId, const string &username, const Models::DeleteInstanceAclRequest &request);

      /**
       * @summary Deletes a specific IP address whitelist from an instance.
       *
       * @param tmpReq DeleteInstanceIpWhitelistRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInstanceIpWhitelistResponse
       */
      Models::DeleteInstanceIpWhitelistResponse deleteInstanceIpWhitelistWithOptions(const string &instanceId, const Models::DeleteInstanceIpWhitelistRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specific IP address whitelist from an instance.
       *
       * @param request DeleteInstanceIpWhitelistRequest
       * @return DeleteInstanceIpWhitelistResponse
       */
      Models::DeleteInstanceIpWhitelistResponse deleteInstanceIpWhitelist(const string &instanceId, const Models::DeleteInstanceIpWhitelistRequest &request);

      /**
       * @summary Deletes a specified topic.
       *
       * @description If you delete the topic, the publishing and subscription relationships that are established based on the topic are cleared. Exercise caution when you call this operation.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTopicResponse
       */
      Models::DeleteTopicResponse deleteTopicWithOptions(const string &instanceId, const string &topicName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified topic.
       *
       * @description If you delete the topic, the publishing and subscription relationships that are established based on the topic are cleared. Exercise caution when you call this operation.
       *
       * @return DeleteTopicResponse
       */
      Models::DeleteTopicResponse deleteTopic(const string &instanceId, const string &topicName);

      /**
       * @summary 执行迁移操作
       *
       * @param request ExecuteMigrationOperationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteMigrationOperationResponse
       */
      Models::ExecuteMigrationOperationResponse executeMigrationOperationWithOptions(const string &migrationId, const string &stageType, const string &operationId, const Models::ExecuteMigrationOperationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 执行迁移操作
       *
       * @param request ExecuteMigrationOperationRequest
       * @return ExecuteMigrationOperationResponse
       */
      Models::ExecuteMigrationOperationResponse executeMigrationOperation(const string &migrationId, const string &stageType, const string &operationId, const Models::ExecuteMigrationOperationRequest &request);

      /**
       * @summary 完成当前迁移阶段
       *
       * @param request FinishMigrationStageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return FinishMigrationStageResponse
       */
      Models::FinishMigrationStageResponse finishMigrationStageWithOptions(const string &migrationId, const string &stageType, const Models::FinishMigrationStageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 完成当前迁移阶段
       *
       * @param request FinishMigrationStageRequest
       * @return FinishMigrationStageResponse
       */
      Models::FinishMigrationStageResponse finishMigrationStage(const string &migrationId, const string &stageType, const Models::FinishMigrationStageRequest &request);

      /**
       * @summary Queries the details of a specified consumer group.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConsumerGroupResponse
       */
      Models::GetConsumerGroupResponse getConsumerGroupWithOptions(const string &instanceId, const string &consumerGroupId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified consumer group.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       *
       * @return GetConsumerGroupResponse
       */
      Models::GetConsumerGroupResponse getConsumerGroup(const string &instanceId, const string &consumerGroupId);

      /**
       * @summary Query Consumer Group Backlog Information
       *
       * @param request GetConsumerGroupLagRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConsumerGroupLagResponse
       */
      Models::GetConsumerGroupLagResponse getConsumerGroupLagWithOptions(const string &instanceId, const string &consumerGroupId, const Models::GetConsumerGroupLagRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Consumer Group Backlog Information
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
       * @summary 查询容灾计划条目详情
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDisasterRecoveryItemResponse
       */
      Models::GetDisasterRecoveryItemResponse getDisasterRecoveryItemWithOptions(const string &planId, const string &itemId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询容灾计划条目详情
       *
       * @return GetDisasterRecoveryItemResponse
       */
      Models::GetDisasterRecoveryItemResponse getDisasterRecoveryItem(const string &planId, const string &itemId);

      /**
       * @summary Queries the details of a Global Replicator task.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDisasterRecoveryPlanResponse
       */
      Models::GetDisasterRecoveryPlanResponse getDisasterRecoveryPlanWithOptions(const string &planId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a Global Replicator task.
       *
       * @return GetDisasterRecoveryPlanResponse
       */
      Models::GetDisasterRecoveryPlanResponse getDisasterRecoveryPlan(const string &planId);

      /**
       * @summary Queries the detailed information about an instance.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceResponse
       */
      Models::GetInstanceResponse getInstanceWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the detailed information about an instance.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       *
       * @return GetInstanceResponse
       */
      Models::GetInstanceResponse getInstance(const string &instanceId);

      /**
       * @summary Obtains the account used to access a specific instance.
       *
       * @param request GetInstanceAccountRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceAccountResponse
       */
      Models::GetInstanceAccountResponse getInstanceAccountWithOptions(const string &instanceId, const Models::GetInstanceAccountRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the account used to access a specific instance.
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
       * @summary Obtains the details of a specific message.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMessageDetailResponse
       */
      Models::GetMessageDetailResponse getMessageDetailWithOptions(const string &instanceId, const string &topicName, const string &messageId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the details of a specific message.
       *
       * @return GetMessageDetailResponse
       */
      Models::GetMessageDetailResponse getMessageDetail(const string &instanceId, const string &topicName, const string &messageId);

      /**
       * @summary Query Topic Details
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTopicResponse
       */
      Models::GetTopicResponse getTopicWithOptions(const string &instanceId, const string &topicName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Topic Details
       *
       * @return GetTopicResponse
       */
      Models::GetTopicResponse getTopic(const string &instanceId, const string &topicName);

      /**
       * @summary Queries the trace of a specific message in a specific topic.
       *
       * @param request GetTraceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTraceResponse
       */
      Models::GetTraceResponse getTraceWithOptions(const string &instanceId, const string &topicName, const string &messageId, const Models::GetTraceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the trace of a specific message in a specific topic.
       *
       * @param request GetTraceRequest
       * @return GetTraceResponse
       */
      Models::GetTraceResponse getTrace(const string &instanceId, const string &topicName, const string &messageId, const Models::GetTraceRequest &request);

      /**
       * @summary 查询支持的可用区
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAvailableZonesResponse
       */
      Models::ListAvailableZonesResponse listAvailableZonesWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询支持的可用区
       *
       * @return ListAvailableZonesResponse
       */
      Models::ListAvailableZonesResponse listAvailableZones();

      /**
       * @summary 查询消费者客户端连接信息
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConsumerConnectionsResponse
       */
      Models::ListConsumerConnectionsResponse listConsumerConnectionsWithOptions(const string &instanceId, const string &consumerGroupId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询消费者客户端连接信息
       *
       * @return ListConsumerConnectionsResponse
       */
      Models::ListConsumerConnectionsResponse listConsumerConnections(const string &instanceId, const string &consumerGroupId);

      /**
       * @summary Queries the subscriptions of a specific consumer group.
       *
       * @param request ListConsumerGroupSubscriptionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConsumerGroupSubscriptionsResponse
       */
      Models::ListConsumerGroupSubscriptionsResponse listConsumerGroupSubscriptionsWithOptions(const string &instanceId, const string &consumerGroupId, const Models::ListConsumerGroupSubscriptionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the subscriptions of a specific consumer group.
       *
       * @param request ListConsumerGroupSubscriptionsRequest
       * @return ListConsumerGroupSubscriptionsResponse
       */
      Models::ListConsumerGroupSubscriptionsResponse listConsumerGroupSubscriptions(const string &instanceId, const string &consumerGroupId, const Models::ListConsumerGroupSubscriptionsRequest &request);

      /**
       * @summary List Consumer Groups
       *
       * @description >Notice: The OpenAPI provided by Alibaba Cloud is a management API used for managing and querying related resources of Alibaba Cloud services. It is recommended to integrate it only in the management chain. Do not rely on OpenAPI implementation in the core data chain for message sending and receiving, as this may lead to risks in the chain.
       *
       * @param request ListConsumerGroupsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConsumerGroupsResponse
       */
      Models::ListConsumerGroupsResponse listConsumerGroupsWithOptions(const string &instanceId, const Models::ListConsumerGroupsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List Consumer Groups
       *
       * @description >Notice: The OpenAPI provided by Alibaba Cloud is a management API used for managing and querying related resources of Alibaba Cloud services. It is recommended to integrate it only in the management chain. Do not rely on OpenAPI implementation in the core data chain for message sending and receiving, as this may lead to risks in the chain.
       *
       * @param request ListConsumerGroupsRequest
       * @return ListConsumerGroupsResponse
       */
      Models::ListConsumerGroupsResponse listConsumerGroups(const string &instanceId, const Models::ListConsumerGroupsRequest &request);

      /**
       * @summary Query disaster recovery plan consumption progress information
       *
       * @param request ListDisasterRecoveryCheckpointsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDisasterRecoveryCheckpointsResponse
       */
      Models::ListDisasterRecoveryCheckpointsResponse listDisasterRecoveryCheckpointsWithOptions(const string &planId, const string &itemId, const Models::ListDisasterRecoveryCheckpointsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query disaster recovery plan consumption progress information
       *
       * @param request ListDisasterRecoveryCheckpointsRequest
       * @return ListDisasterRecoveryCheckpointsResponse
       */
      Models::ListDisasterRecoveryCheckpointsResponse listDisasterRecoveryCheckpoints(const string &planId, const string &itemId, const Models::ListDisasterRecoveryCheckpointsRequest &request);

      /**
       * @summary Queries the Global Replicator tasks of an instance.
       *
       * @param request ListDisasterRecoveryItemsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDisasterRecoveryItemsResponse
       */
      Models::ListDisasterRecoveryItemsResponse listDisasterRecoveryItemsWithOptions(const string &planId, const Models::ListDisasterRecoveryItemsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Global Replicator tasks of an instance.
       *
       * @param request ListDisasterRecoveryItemsRequest
       * @return ListDisasterRecoveryItemsResponse
       */
      Models::ListDisasterRecoveryItemsResponse listDisasterRecoveryItems(const string &planId, const Models::ListDisasterRecoveryItemsRequest &request);

      /**
       * @summary Queries Global Replicator tasks.
       *
       * @param request ListDisasterRecoveryPlansRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDisasterRecoveryPlansResponse
       */
      Models::ListDisasterRecoveryPlansResponse listDisasterRecoveryPlansWithOptions(const Models::ListDisasterRecoveryPlansRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Global Replicator tasks.
       *
       * @param request ListDisasterRecoveryPlansRequest
       * @return ListDisasterRecoveryPlansResponse
       */
      Models::ListDisasterRecoveryPlansResponse listDisasterRecoveryPlans(const Models::ListDisasterRecoveryPlansRequest &request);

      /**
       * @summary Queries the accounts that are used to access a specific instance.
       *
       * @param request ListInstanceAccountRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstanceAccountResponse
       */
      Models::ListInstanceAccountResponse listInstanceAccountWithOptions(const string &instanceId, const Models::ListInstanceAccountRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the accounts that are used to access a specific instance.
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
       * @summary Queries all ApsaraMQ for RocketMQ instances in a specific region.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       *
       * @param tmpReq ListInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstancesWithOptions(const Models::ListInstancesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all ApsaraMQ for RocketMQ instances in a specific region.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       *
       * @param request ListInstancesRequest
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstances(const Models::ListInstancesRequest &request);

      /**
       * @summary Queries the list of messages.
       *
       * @param request ListMessagesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMessagesResponse
       */
      Models::ListMessagesResponse listMessagesWithOptions(const string &instanceId, const string &topicName, const Models::ListMessagesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of messages.
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
       * @summary 查询迁移操作列表
       *
       * @param request ListMigrationOperationsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMigrationOperationsResponse
       */
      Models::ListMigrationOperationsResponse listMigrationOperationsWithOptions(const string &migrationId, const string &stageType, const Models::ListMigrationOperationsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询迁移操作列表
       *
       * @param request ListMigrationOperationsRequest
       * @return ListMigrationOperationsResponse
       */
      Models::ListMigrationOperationsResponse listMigrationOperations(const string &migrationId, const string &stageType, const Models::ListMigrationOperationsRequest &request);

      /**
       * @summary Queries regions in which ApsaraMQ for RocketMQ is available.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRegionsResponse
       */
      Models::ListRegionsResponse listRegionsWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries regions in which ApsaraMQ for RocketMQ is available.
       *
       * @return ListRegionsResponse
       */
      Models::ListRegionsResponse listRegions();

      /**
       * @summary Query visible resource tag relationships
       *
       * @param request ListTagResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query visible resource tag relationships
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
       * @summary Query Topic List
       *
       * @param tmpReq ListTopicsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTopicsResponse
       */
      Models::ListTopicsResponse listTopicsWithOptions(const string &instanceId, const Models::ListTopicsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Topic List
       *
       * @param request ListTopicsRequest
       * @return ListTopicsResponse
       */
      Models::ListTopicsResponse listTopics(const string &instanceId, const Models::ListTopicsRequest &request);

      /**
       * @summary Queries the message traces of a specific topic.
       *
       * @param request ListTracesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTracesResponse
       */
      Models::ListTracesResponse listTracesWithOptions(const string &instanceId, const string &topicName, const Models::ListTracesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the message traces of a specific topic.
       *
       * @param request ListTracesRequest
       * @return ListTracesResponse
       */
      Models::ListTracesResponse listTraces(const string &instanceId, const string &topicName, const Models::ListTracesRequest &request);

      /**
       * @summary Resets the consumer offset of a consumer group.
       *
       * @param request ResetConsumeOffsetRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetConsumeOffsetResponse
       */
      Models::ResetConsumeOffsetResponse resetConsumeOffsetWithOptions(const string &instanceId, const string &consumerGroupId, const string &topicName, const Models::ResetConsumeOffsetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets the consumer offset of a consumer group.
       *
       * @param request ResetConsumeOffsetRequest
       * @return ResetConsumeOffsetResponse
       */
      Models::ResetConsumeOffsetResponse resetConsumeOffset(const string &instanceId, const string &consumerGroupId, const string &topicName, const Models::ResetConsumeOffsetRequest &request);

      /**
       * @summary Enable Disaster Recovery Plan Entry
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartDisasterRecoveryItemResponse
       */
      Models::StartDisasterRecoveryItemResponse startDisasterRecoveryItemWithOptions(const string &planId, const string &itemId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enable Disaster Recovery Plan Entry
       *
       * @return StartDisasterRecoveryItemResponse
       */
      Models::StartDisasterRecoveryItemResponse startDisasterRecoveryItem(const string &planId, const string &itemId);

      /**
       * @summary Deactivate Disaster Recovery Plan Entry
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopDisasterRecoveryItemResponse
       */
      Models::StopDisasterRecoveryItemResponse stopDisasterRecoveryItemWithOptions(const string &planId, const string &itemId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deactivate Disaster Recovery Plan Entry
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
       * @summary Update ConsumerGroup
       *
       * @description >Notice: The OpenAPI provided by Alibaba Cloud is a management API used for managing and querying related resources of Alibaba Cloud services. It is recommended to integrate it only in the management chain. It is strictly prohibited to rely on OpenAPI implementation in the core data chain of message sending and receiving, otherwise it may lead to risks in the chain.
       *
       * @param request UpdateConsumerGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateConsumerGroupResponse
       */
      Models::UpdateConsumerGroupResponse updateConsumerGroupWithOptions(const string &instanceId, const string &consumerGroupId, const Models::UpdateConsumerGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update ConsumerGroup
       *
       * @description >Notice: The OpenAPI provided by Alibaba Cloud is a management API used for managing and querying related resources of Alibaba Cloud services. It is recommended to integrate it only in the management chain. It is strictly prohibited to rely on OpenAPI implementation in the core data chain of message sending and receiving, otherwise it may lead to risks in the chain.
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
       * @summary Updates the basic information and specifications of an ApsaraMQ for RocketMQ instance.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       *
       * @param request UpdateInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceResponse
       */
      Models::UpdateInstanceResponse updateInstanceWithOptions(const string &instanceId, const Models::UpdateInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the basic information and specifications of an ApsaraMQ for RocketMQ instance.
       *
       * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
       *
       * @param request UpdateInstanceRequest
       * @return UpdateInstanceResponse
       */
      Models::UpdateInstanceResponse updateInstance(const string &instanceId, const Models::UpdateInstanceRequest &request);

      /**
       * @summary Updates the information about a specific account in a specific instance.
       *
       * @param request UpdateInstanceAccountRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceAccountResponse
       */
      Models::UpdateInstanceAccountResponse updateInstanceAccountWithOptions(const string &instanceId, const string &username, const Models::UpdateInstanceAccountRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information about a specific account in a specific instance.
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
       * @summary Update Topic
       *
       * @param request UpdateTopicRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTopicResponse
       */
      Models::UpdateTopicResponse updateTopicWithOptions(const string &instanceId, const string &topicName, const Models::UpdateTopicRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update Topic
       *
       * @param request UpdateTopicRequest
       * @return UpdateTopicResponse
       */
      Models::UpdateTopicResponse updateTopic(const string &instanceId, const string &topicName, const Models::UpdateTopicRequest &request);

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
       * @summary Verifies the message sending feature of a specific topic on a specific instance.
       *
       * @param request VerifySendMessageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifySendMessageResponse
       */
      Models::VerifySendMessageResponse verifySendMessageWithOptions(const string &instanceId, const string &topicName, const Models::VerifySendMessageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies the message sending feature of a specific topic on a specific instance.
       *
       * @param request VerifySendMessageRequest
       * @return VerifySendMessageResponse
       */
      Models::VerifySendMessageResponse verifySendMessage(const string &instanceId, const string &topicName, const Models::VerifySendMessageRequest &request);
  };
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
