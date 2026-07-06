// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_ALIKAFKA20190916_HPP_
#define ALIBABACLOUD_ALIKAFKA20190916_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Alikafka20190916Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Alikafka20190916.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary AddUserDefinedSg
       *
       * @param tmpReq AddUserDefinedSgRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddUserDefinedSgResponse
       */
      Models::AddUserDefinedSgResponse addUserDefinedSgWithOptions(const Models::AddUserDefinedSgRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary AddUserDefinedSg
       *
       * @param request AddUserDefinedSgRequest
       * @return AddUserDefinedSgResponse
       */
      Models::AddUserDefinedSgResponse addUserDefinedSg(const Models::AddUserDefinedSgRequest &request);

      /**
       * @summary Moves a resource to a different resource group.
       *
       * @param request ChangeResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroupWithOptions(const Models::ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Moves a resource to a different resource group.
       *
       * @param request ChangeResourceGroupRequest
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroup(const Models::ChangeResourceGroupRequest &request);

      /**
       * @summary Converts a pay-as-you-go instance to a subscription instance.
       *
       * @param request ConvertPostPayOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConvertPostPayOrderResponse
       */
      Models::ConvertPostPayOrderResponse convertPostPayOrderWithOptions(const Models::ConvertPostPayOrderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Converts a pay-as-you-go instance to a subscription instance.
       *
       * @param request ConvertPostPayOrderRequest
       * @return ConvertPostPayOrderResponse
       */
      Models::ConvertPostPayOrderResponse convertPostPayOrder(const Models::ConvertPostPayOrderRequest &request);

      /**
       * @summary This operation is used to create an access control list (ACL).
       *
       * @param request CreateAclRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAclResponse
       */
      Models::CreateAclResponse createAclWithOptions(const Models::CreateAclRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation is used to create an access control list (ACL).
       *
       * @param request CreateAclRequest
       * @return CreateAclResponse
       */
      Models::CreateAclResponse createAcl(const Models::CreateAclRequest &request);

      /**
       * @summary You can call CreateConsumerGroup to create a consumer group.
       *
       * @param request CreateConsumerGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateConsumerGroupResponse
       */
      Models::CreateConsumerGroupResponse createConsumerGroupWithOptions(const Models::CreateConsumerGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call CreateConsumerGroup to create a consumer group.
       *
       * @param request CreateConsumerGroupRequest
       * @return CreateConsumerGroupResponse
       */
      Models::CreateConsumerGroupResponse createConsumerGroup(const Models::CreateConsumerGroupRequest &request);

      /**
       * @summary This operation creates a pay-as-you-go instance and returns the instance ID and order ID.
       *
       * @param tmpReq CreatePostPayInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePostPayInstanceResponse
       */
      Models::CreatePostPayInstanceResponse createPostPayInstanceWithOptions(const Models::CreatePostPayInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation creates a pay-as-you-go instance and returns the instance ID and order ID.
       *
       * @param request CreatePostPayInstanceRequest
       * @return CreatePostPayInstanceResponse
       */
      Models::CreatePostPayInstanceResponse createPostPayInstance(const Models::CreatePostPayInstanceRequest &request);

      /**
       * @summary Pay-as-you-go instances are billed based on actual usage. This billing method is ideal for testing or short-term scenarios with unpredictable traffic peaks. This topic describes how to call the CreatePostPayOrder operation to create a pay-as-you-go instance.
       *
       * @description Before you call this operation, make sure you understand the billing methods and pricing of pay-as-you-go instances. For more information, see [Billing](https://help.aliyun.com/document_detail/84737.html).
       *
       * @param tmpReq CreatePostPayOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePostPayOrderResponse
       */
      Models::CreatePostPayOrderResponse createPostPayOrderWithOptions(const Models::CreatePostPayOrderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Pay-as-you-go instances are billed based on actual usage. This billing method is ideal for testing or short-term scenarios with unpredictable traffic peaks. This topic describes how to call the CreatePostPayOrder operation to create a pay-as-you-go instance.
       *
       * @description Before you call this operation, make sure you understand the billing methods and pricing of pay-as-you-go instances. For more information, see [Billing](https://help.aliyun.com/document_detail/84737.html).
       *
       * @param request CreatePostPayOrderRequest
       * @return CreatePostPayOrderResponse
       */
      Models::CreatePostPayOrderResponse createPostPayOrder(const Models::CreatePostPayOrderRequest &request);

      /**
       * @summary Creates a subscription instance and returns the instance ID and order ID.
       *
       * @description - Before calling this operation, ensure you understand the billing methods and pricing of subscription instances. For more information, see [billing overview](https://help.aliyun.com/document_detail/84737.html).
       * - By default, a subscription instance created using this operation has a one-month subscription period and is set to auto-renew monthly. To change the renewal period or disable auto-renewal, go to the [renewal management](https://renew.console.aliyun.com/#/ecs) page in the Alibaba Cloud Management Console.<props="china"> For more information, see [Set up auto-renewal](https://help.aliyun.com/document_detail/37128.html).
       *
       * @param tmpReq CreatePrePayInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePrePayInstanceResponse
       */
      Models::CreatePrePayInstanceResponse createPrePayInstanceWithOptions(const Models::CreatePrePayInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a subscription instance and returns the instance ID and order ID.
       *
       * @description - Before calling this operation, ensure you understand the billing methods and pricing of subscription instances. For more information, see [billing overview](https://help.aliyun.com/document_detail/84737.html).
       * - By default, a subscription instance created using this operation has a one-month subscription period and is set to auto-renew monthly. To change the renewal period or disable auto-renewal, go to the [renewal management](https://renew.console.aliyun.com/#/ecs) page in the Alibaba Cloud Management Console.<props="china"> For more information, see [Set up auto-renewal](https://help.aliyun.com/document_detail/37128.html).
       *
       * @param request CreatePrePayInstanceRequest
       * @return CreatePrePayInstanceResponse
       */
      Models::CreatePrePayInstanceResponse createPrePayInstance(const Models::CreatePrePayInstanceRequest &request);

      /**
       * @summary Subscription instances require prepayment for resources and are ideal for long-term, stable business scenarios. This topic describes how to call the CreatePrePayOrder operation to create a subscription instance.
       *
       * @description - Before you call this operation, ensure that you understand the billing method and pricing of subscription instances. For more information, see [Billing](https://help.aliyun.com/document_detail/84737.html).
       * - By default, when you call this operation, the subscription duration is one month and auto-renewal is enabled with a Unified Auto Renewal Cycle of one month. To modify the Unified Auto Renewal Cycle or disable auto-renewal, go to the [Renewal Management](https://renew.console.aliyun.com/#/ecs) page in the Alibaba Cloud Management Console. For more information, see [Configure auto-renewal](https://help.aliyun.com/document_detail/37128.html).
       *
       * @param tmpReq CreatePrePayOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePrePayOrderResponse
       */
      Models::CreatePrePayOrderResponse createPrePayOrderWithOptions(const Models::CreatePrePayOrderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Subscription instances require prepayment for resources and are ideal for long-term, stable business scenarios. This topic describes how to call the CreatePrePayOrder operation to create a subscription instance.
       *
       * @description - Before you call this operation, ensure that you understand the billing method and pricing of subscription instances. For more information, see [Billing](https://help.aliyun.com/document_detail/84737.html).
       * - By default, when you call this operation, the subscription duration is one month and auto-renewal is enabled with a Unified Auto Renewal Cycle of one month. To modify the Unified Auto Renewal Cycle or disable auto-renewal, go to the [Renewal Management](https://renew.console.aliyun.com/#/ecs) page in the Alibaba Cloud Management Console. For more information, see [Configure auto-renewal](https://help.aliyun.com/document_detail/37128.html).
       *
       * @param request CreatePrePayOrderRequest
       * @return CreatePrePayOrderResponse
       */
      Models::CreatePrePayOrderResponse createPrePayOrder(const Models::CreatePrePayOrderRequest &request);

      /**
       * @summary This operation creates a SASL user.
       *
       * @param request CreateSaslUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSaslUserResponse
       */
      Models::CreateSaslUserResponse createSaslUserWithOptions(const Models::CreateSaslUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation creates a SASL user.
       *
       * @param request CreateSaslUserRequest
       * @return CreateSaslUserResponse
       */
      Models::CreateSaslUserResponse createSaslUser(const Models::CreateSaslUserRequest &request);

      /**
       * @summary After you deploy a serverless instance, you can use this API to create a scheduled scaling rule for the instance.
       *
       * @description ###### This operation supports only serverless instances.
       *
       * @param tmpReq CreateScheduledScalingRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateScheduledScalingRuleResponse
       */
      Models::CreateScheduledScalingRuleResponse createScheduledScalingRuleWithOptions(const Models::CreateScheduledScalingRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary After you deploy a serverless instance, you can use this API to create a scheduled scaling rule for the instance.
       *
       * @description ###### This operation supports only serverless instances.
       *
       * @param request CreateScheduledScalingRuleRequest
       * @return CreateScheduledScalingRuleResponse
       */
      Models::CreateScheduledScalingRuleResponse createScheduledScalingRule(const Models::CreateScheduledScalingRuleRequest &request);

      /**
       * @summary Creates a topic.
       *
       * @description - Each user can send up to 20 queries per second (QPS).
       * - The maximum number of topics for an instance depends on its instance type.
       *
       * @param request CreateTopicRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTopicResponse
       */
      Models::CreateTopicResponse createTopicWithOptions(const Models::CreateTopicRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a topic.
       *
       * @description - Each user can send up to 20 queries per second (QPS).
       * - The maximum number of topics for an instance depends on its instance type.
       *
       * @param request CreateTopicRequest
       * @return CreateTopicResponse
       */
      Models::CreateTopicResponse createTopic(const Models::CreateTopicRequest &request);

      /**
       * @summary Deletes an access control list (ACL).
       *
       * @param request DeleteAclRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAclResponse
       */
      Models::DeleteAclResponse deleteAclWithOptions(const Models::DeleteAclRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an access control list (ACL).
       *
       * @param request DeleteAclRequest
       * @return DeleteAclResponse
       */
      Models::DeleteAclResponse deleteAcl(const Models::DeleteAclRequest &request);

      /**
       * @summary Deletes a Group.
       *
       * @param request DeleteConsumerGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteConsumerGroupResponse
       */
      Models::DeleteConsumerGroupResponse deleteConsumerGroupWithOptions(const Models::DeleteConsumerGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Group.
       *
       * @param request DeleteConsumerGroupRequest
       * @return DeleteConsumerGroupResponse
       */
      Models::DeleteConsumerGroupResponse deleteConsumerGroup(const Models::DeleteConsumerGroupRequest &request);

      /**
       * @summary The DeleteInstance operation deletes an instance after a subscription instance or a pay-as-you-go instance is released.
       *
       * @param request DeleteInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstanceWithOptions(const Models::DeleteInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The DeleteInstance operation deletes an instance after a subscription instance or a pay-as-you-go instance is released.
       *
       * @param request DeleteInstanceRequest
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstance(const Models::DeleteInstanceRequest &request);

      /**
       * @summary You can call the DeleteSaslUser operation to delete a Simple Authentication and Security Layer (SASL) user.
       *
       * @param request DeleteSaslUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSaslUserResponse
       */
      Models::DeleteSaslUserResponse deleteSaslUserWithOptions(const Models::DeleteSaslUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the DeleteSaslUser operation to delete a Simple Authentication and Security Layer (SASL) user.
       *
       * @param request DeleteSaslUserRequest
       * @return DeleteSaslUserResponse
       */
      Models::DeleteSaslUserResponse deleteSaslUser(const Models::DeleteSaslUserRequest &request);

      /**
       * @summary After a Serverless instance is deployed, you can call this API operation to delete its scheduled scaling policy configuration.
       *
       * @description ###### This operation applies only to Serverless instances.
       *
       * @param request DeleteScheduledScalingRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteScheduledScalingRuleResponse
       */
      Models::DeleteScheduledScalingRuleResponse deleteScheduledScalingRuleWithOptions(const Models::DeleteScheduledScalingRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary After a Serverless instance is deployed, you can call this API operation to delete its scheduled scaling policy configuration.
       *
       * @description ###### This operation applies only to Serverless instances.
       *
       * @param request DeleteScheduledScalingRuleRequest
       * @return DeleteScheduledScalingRuleResponse
       */
      Models::DeleteScheduledScalingRuleResponse deleteScheduledScalingRule(const Models::DeleteScheduledScalingRuleRequest &request);

      /**
       * @summary Deletes a topic.
       *
       * @param request DeleteTopicRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTopicResponse
       */
      Models::DeleteTopicResponse deleteTopicWithOptions(const Models::DeleteTopicRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a topic.
       *
       * @param request DeleteTopicRequest
       * @return DeleteTopicResponse
       */
      Models::DeleteTopicResponse deleteTopic(const Models::DeleteTopicRequest &request);

      /**
       * @summary DeleteUserDefinedSg
       *
       * @param tmpReq DeleteUserDefinedSgRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserDefinedSgResponse
       */
      Models::DeleteUserDefinedSgResponse deleteUserDefinedSgWithOptions(const Models::DeleteUserDefinedSgRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DeleteUserDefinedSg
       *
       * @param request DeleteUserDefinedSgRequest
       * @return DeleteUserDefinedSgResponse
       */
      Models::DeleteUserDefinedSgResponse deleteUserDefinedSg(const Models::DeleteUserDefinedSgRequest &request);

      /**
       * @summary Queries access control list (ACL) resource names.
       *
       * @param request DescribeAclResourceNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAclResourceNameResponse
       */
      Models::DescribeAclResourceNameResponse describeAclResourceNameWithOptions(const Models::DescribeAclResourceNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries access control list (ACL) resource names.
       *
       * @param request DescribeAclResourceNameRequest
       * @return DescribeAclResourceNameResponse
       */
      Models::DescribeAclResourceNameResponse describeAclResourceName(const Models::DescribeAclResourceNameRequest &request);

      /**
       * @summary Queries access control lists (ACLs).
       *
       * @param request DescribeAclsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAclsResponse
       */
      Models::DescribeAclsResponse describeAclsWithOptions(const Models::DescribeAclsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries access control lists (ACLs).
       *
       * @param request DescribeAclsRequest
       * @return DescribeAclsResponse
       */
      Models::DescribeAclsResponse describeAcls(const Models::DescribeAclsRequest &request);

      /**
       * @summary You can call DescribeSaslUsers to query SASL users.
       *
       * @param request DescribeSaslUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSaslUsersResponse
       */
      Models::DescribeSaslUsersResponse describeSaslUsersWithOptions(const Models::DescribeSaslUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call DescribeSaslUsers to query SASL users.
       *
       * @param request DescribeSaslUsersRequest
       * @return DescribeSaslUsersResponse
       */
      Models::DescribeSaslUsersResponse describeSaslUsers(const Models::DescribeSaslUsersRequest &request);

      /**
       * @summary 降配后付费实例
       *
       * @param tmpReq DowngradePostPayOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DowngradePostPayOrderResponse
       */
      Models::DowngradePostPayOrderResponse downgradePostPayOrderWithOptions(const Models::DowngradePostPayOrderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 降配后付费实例
       *
       * @param request DowngradePostPayOrderRequest
       * @return DowngradePostPayOrderResponse
       */
      Models::DowngradePostPayOrderResponse downgradePostPayOrder(const Models::DowngradePostPayOrderRequest &request);

      /**
       * @summary 降配预付费实例
       *
       * @param tmpReq DowngradePrePayOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DowngradePrePayOrderResponse
       */
      Models::DowngradePrePayOrderResponse downgradePrePayOrderWithOptions(const Models::DowngradePrePayOrderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 降配预付费实例
       *
       * @param request DowngradePrePayOrderRequest
       * @return DowngradePrePayOrderResponse
       */
      Models::DowngradePrePayOrderResponse downgradePrePayOrder(const Models::DowngradePrePayOrderRequest &request);

      /**
       * @summary This topic describes how to call EnableAutoGroupCreation to enable or disable the free use of Groups.
       *
       * @description Currently, only reserved instances support this API.
       * Serverless instances are not supported at this time.
       *
       * @param request EnableAutoGroupCreationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableAutoGroupCreationResponse
       */
      Models::EnableAutoGroupCreationResponse enableAutoGroupCreationWithOptions(const Models::EnableAutoGroupCreationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This topic describes how to call EnableAutoGroupCreation to enable or disable the free use of Groups.
       *
       * @description Currently, only reserved instances support this API.
       * Serverless instances are not supported at this time.
       *
       * @param request EnableAutoGroupCreationRequest
       * @return EnableAutoGroupCreationResponse
       */
      Models::EnableAutoGroupCreationResponse enableAutoGroupCreation(const Models::EnableAutoGroupCreationRequest &request);

      /**
       * @summary This topic describes how to call the EnableAutoTopicCreation operation to enable or disable automatic topic creation and modify the default number of partitions for automatically created topics.
       *
       * @param request EnableAutoTopicCreationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableAutoTopicCreationResponse
       */
      Models::EnableAutoTopicCreationResponse enableAutoTopicCreationWithOptions(const Models::EnableAutoTopicCreationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This topic describes how to call the EnableAutoTopicCreation operation to enable or disable automatic topic creation and modify the default number of partitions for automatically created topics.
       *
       * @param request EnableAutoTopicCreationRequest
       * @return EnableAutoTopicCreationResponse
       */
      Models::EnableAutoTopicCreationResponse enableAutoTopicCreation(const Models::EnableAutoTopicCreationRequest &request);

      /**
       * @summary 故障演练
       *
       * @param request FailoverTestRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FailoverTestResponse
       */
      Models::FailoverTestResponse failoverTestWithOptions(const Models::FailoverTestRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 故障演练
       *
       * @param request FailoverTestRequest
       * @return FailoverTestResponse
       */
      Models::FailoverTestResponse failoverTest(const Models::FailoverTestRequest &request);

      /**
       * @summary Queries the IDs of all instances in the current account.
       *
       * @param request GetAllInstanceIdListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAllInstanceIdListResponse
       */
      Models::GetAllInstanceIdListResponse getAllInstanceIdListWithOptions(const Models::GetAllInstanceIdListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the IDs of all instances in the current account.
       *
       * @param request GetAllInstanceIdListRequest
       * @return GetAllInstanceIdListResponse
       */
      Models::GetAllInstanceIdListResponse getAllInstanceIdList(const Models::GetAllInstanceIdListRequest &request);

      /**
       * @summary The GetAllowedIpList operation retrieves the IP address allowlist.
       *
       * @param request GetAllowedIpListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAllowedIpListResponse
       */
      Models::GetAllowedIpListResponse getAllowedIpListWithOptions(const Models::GetAllowedIpListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The GetAllowedIpList operation retrieves the IP address allowlist.
       *
       * @param request GetAllowedIpListRequest
       * @return GetAllowedIpListResponse
       */
      Models::GetAllowedIpListResponse getAllowedIpList(const Models::GetAllowedIpListRequest &request);

      /**
       * @summary After a Serverless instance is deployed, you can call this API operation to query the auto scaling configuration of the instance.
       *
       * @description ###### **This operation applies only to Serverless instances.**
       *
       * @param request GetAutoScalingConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAutoScalingConfigurationResponse
       */
      Models::GetAutoScalingConfigurationResponse getAutoScalingConfigurationWithOptions(const Models::GetAutoScalingConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary After a Serverless instance is deployed, you can call this API operation to query the auto scaling configuration of the instance.
       *
       * @description ###### **This operation applies only to Serverless instances.**
       *
       * @param request GetAutoScalingConfigurationRequest
       * @return GetAutoScalingConfigurationResponse
       */
      Models::GetAutoScalingConfigurationResponse getAutoScalingConfiguration(const Models::GetAutoScalingConfigurationRequest &request);

      /**
       * @summary Retrieves a list of consumer groups.
       *
       * @param request GetConsumerListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConsumerListResponse
       */
      Models::GetConsumerListResponse getConsumerListWithOptions(const Models::GetConsumerListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of consumer groups.
       *
       * @param request GetConsumerListRequest
       * @return GetConsumerListResponse
       */
      Models::GetConsumerListResponse getConsumerList(const Models::GetConsumerListRequest &request);

      /**
       * @summary Queries the consumption status of a consumer group.
       *
       * @param request GetConsumerProgressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConsumerProgressResponse
       */
      Models::GetConsumerProgressResponse getConsumerProgressWithOptions(const Models::GetConsumerProgressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the consumption status of a consumer group.
       *
       * @param request GetConsumerProgressRequest
       * @return GetConsumerProgressResponse
       */
      Models::GetConsumerProgressResponse getConsumerProgress(const Models::GetConsumerProgressRequest &request);

      /**
       * @summary Queries information about instances in a specified region.
       *
       * @param request GetInstanceListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceListResponse
       */
      Models::GetInstanceListResponse getInstanceListWithOptions(const Models::GetInstanceListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about instances in a specified region.
       *
       * @param request GetInstanceListRequest
       * @return GetInstanceListResponse
       */
      Models::GetInstanceListResponse getInstanceList(const Models::GetInstanceListRequest &request);

      /**
       * @summary Retrieves the IP addresses of Kafka clients.
       *
       * @description - The IP information is retrieved from the sampling logs of client requests to the server through the Kafka API.
       * - The count indicates the number of connections from a single IP address using different ports that the server detected within the specified time range.
       * - If your server is not running the latest minor version, the sampling logs may be inaccurate and provide less precise IP information. We recommend that you upgrade the server to the latest minor version.
       *
       * @param request GetKafkaClientIpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetKafkaClientIpResponse
       */
      Models::GetKafkaClientIpResponse getKafkaClientIpWithOptions(const Models::GetKafkaClientIpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the IP addresses of Kafka clients.
       *
       * @description - The IP information is retrieved from the sampling logs of client requests to the server through the Kafka API.
       * - The count indicates the number of connections from a single IP address using different ports that the server detected within the specified time range.
       * - If your server is not running the latest minor version, the sampling logs may be inaccurate and provide less precise IP information. We recommend that you upgrade the server to the latest minor version.
       *
       * @param request GetKafkaClientIpRequest
       * @return GetKafkaClientIpResponse
       */
      Models::GetKafkaClientIpResponse getKafkaClientIp(const Models::GetKafkaClientIpRequest &request);

      /**
       * @summary Retrieves the usage quotas for topics and partitions.
       *
       * @param request GetQuotaTipRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQuotaTipResponse
       */
      Models::GetQuotaTipResponse getQuotaTipWithOptions(const Models::GetQuotaTipRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the usage quotas for topics and partitions.
       *
       * @param request GetQuotaTipRequest
       * @return GetQuotaTipResponse
       */
      Models::GetQuotaTipResponse getQuotaTip(const Models::GetQuotaTipRequest &request);

      /**
       * @summary Queries the list of threats on an instance.
       *
       * @param request GetRiskListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRiskListResponse
       */
      Models::GetRiskListResponse getRiskListWithOptions(const Models::GetRiskListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of threats on an instance.
       *
       * @param request GetRiskListRequest
       * @return GetRiskListResponse
       */
      Models::GetRiskListResponse getRiskList(const Models::GetRiskListRequest &request);

      /**
       * @summary Retrieves information about topics.
       *
       * @param request GetTopicListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTopicListResponse
       */
      Models::GetTopicListResponse getTopicListWithOptions(const Models::GetTopicListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves information about topics.
       *
       * @param request GetTopicListRequest
       * @return GetTopicListResponse
       */
      Models::GetTopicListResponse getTopicList(const Models::GetTopicListRequest &request);

      /**
       * @summary Retrieves the message sending and receiving status of a topic.
       *
       * @param request GetTopicStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTopicStatusResponse
       */
      Models::GetTopicStatusResponse getTopicStatusWithOptions(const Models::GetTopicStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the message sending and receiving status of a topic.
       *
       * @param request GetTopicStatusRequest
       * @return GetTopicStatusResponse
       */
      Models::GetTopicStatusResponse getTopicStatus(const Models::GetTopicStatusRequest &request);

      /**
       * @summary Retrieves the subscription status of Groups for a topic.
       *
       * @param request GetTopicSubscribeStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTopicSubscribeStatusResponse
       */
      Models::GetTopicSubscribeStatusResponse getTopicSubscribeStatusWithOptions(const Models::GetTopicSubscribeStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the subscription status of Groups for a topic.
       *
       * @param request GetTopicSubscribeStatusRequest
       * @return GetTopicSubscribeStatusResponse
       */
      Models::GetTopicSubscribeStatusResponse getTopicSubscribeStatus(const Models::GetTopicSubscribeStatusRequest &request);

      /**
       * @summary Queries the details of rebalancing tasks.
       *
       * @param request ListRebalanceInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRebalanceInfoResponse
       */
      Models::ListRebalanceInfoResponse listRebalanceInfoWithOptions(const Models::ListRebalanceInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of rebalancing tasks.
       *
       * @param request ListRebalanceInfoRequest
       * @return ListRebalanceInfoResponse
       */
      Models::ListRebalanceInfoResponse listRebalanceInfo(const Models::ListRebalanceInfoRequest &request);

      /**
       * @summary Queries the list of tags that are attached to resources.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of tags that are attached to resources.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary You can modify the name of an ApsaraMQ for Kafka instance after it is deployed. This topic describes how to call the ModifyInstanceName operation.
       *
       * @param request ModifyInstanceNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceNameResponse
       */
      Models::ModifyInstanceNameResponse modifyInstanceNameWithOptions(const Models::ModifyInstanceNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can modify the name of an ApsaraMQ for Kafka instance after it is deployed. This topic describes how to call the ModifyInstanceName operation.
       *
       * @param request ModifyInstanceNameRequest
       * @return ModifyInstanceNameResponse
       */
      Models::ModifyInstanceNameResponse modifyInstanceName(const Models::ModifyInstanceNameRequest &request);

      /**
       * @summary This operation modifies the number of partitions in a topic.
       *
       * @param request ModifyPartitionNumRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPartitionNumResponse
       */
      Models::ModifyPartitionNumResponse modifyPartitionNumWithOptions(const Models::ModifyPartitionNumRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation modifies the number of partitions in a topic.
       *
       * @param request ModifyPartitionNumRequest
       * @return ModifyPartitionNumResponse
       */
      Models::ModifyPartitionNumResponse modifyPartitionNum(const Models::ModifyPartitionNumRequest &request);

      /**
       * @summary After you deploy Serverless instances, you can call this API operation to modify their scheduled scaling policy.
       *
       * @description ###### This operation applies only to Serverless instances.
       *
       * @param request ModifyScheduledScalingRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyScheduledScalingRuleResponse
       */
      Models::ModifyScheduledScalingRuleResponse modifyScheduledScalingRuleWithOptions(const Models::ModifyScheduledScalingRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary After you deploy Serverless instances, you can call this API operation to modify their scheduled scaling policy.
       *
       * @description ###### This operation applies only to Serverless instances.
       *
       * @param request ModifyScheduledScalingRuleRequest
       * @return ModifyScheduledScalingRuleResponse
       */
      Models::ModifyScheduledScalingRuleResponse modifyScheduledScalingRule(const Models::ModifyScheduledScalingRuleRequest &request);

      /**
       * @summary Modifies the remark of a topic.
       *
       * @param request ModifyTopicRemarkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyTopicRemarkResponse
       */
      Models::ModifyTopicRemarkResponse modifyTopicRemarkWithOptions(const Models::ModifyTopicRemarkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the remark of a topic.
       *
       * @param request ModifyTopicRemarkRequest
       * @return ModifyTopicRemarkResponse
       */
      Models::ModifyTopicRemarkResponse modifyTopicRemark(const Models::ModifyTopicRemarkRequest &request);

      /**
       * @summary ModifyUserDefinedSg
       *
       * @param tmpReq ModifyUserDefinedSgRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyUserDefinedSgResponse
       */
      Models::ModifyUserDefinedSgResponse modifyUserDefinedSgWithOptions(const Models::ModifyUserDefinedSgRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ModifyUserDefinedSg
       *
       * @param request ModifyUserDefinedSgRequest
       * @return ModifyUserDefinedSgResponse
       */
      Models::ModifyUserDefinedSgResponse modifyUserDefinedSg(const Models::ModifyUserDefinedSgRequest &request);

      /**
       * @summary This operation queries messages stored in a topic by message creation time or offset.
       *
       * @param request QueryMessageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMessageResponse
       */
      Models::QueryMessageResponse queryMessageWithOptions(const Models::QueryMessageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation queries messages stored in a topic by message creation time or offset.
       *
       * @param request QueryMessageRequest
       * @return QueryMessageResponse
       */
      Models::QueryMessageResponse queryMessage(const Models::QueryMessageRequest &request);

      /**
       * @summary Releases a pay-as-you-go instance.
       *
       * @description You cannot use this operation to release subscription instances.
       *
       * @param request ReleaseInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseInstanceResponse
       */
      Models::ReleaseInstanceResponse releaseInstanceWithOptions(const Models::ReleaseInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases a pay-as-you-go instance.
       *
       * @description You cannot use this operation to release subscription instances.
       *
       * @param request ReleaseInstanceRequest
       * @return ReleaseInstanceResponse
       */
      Models::ReleaseInstanceResponse releaseInstance(const Models::ReleaseInstanceRequest &request);

      /**
       * @summary Starts an instance.
       *
       * @description You can call this operation only when the instance is in the Stopped state.
       *
       * @param request ReopenInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReopenInstanceResponse
       */
      Models::ReopenInstanceResponse reopenInstanceWithOptions(const Models::ReopenInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts an instance.
       *
       * @description You can call this operation only when the instance is in the Stopped state.
       *
       * @param request ReopenInstanceRequest
       * @return ReopenInstanceResponse
       */
      Models::ReopenInstanceResponse reopenInstance(const Models::ReopenInstanceRequest &request);

      /**
       * @summary You must purchase and deploy an ApsaraMQ for Kafka instance before you can send and receive messages. This topic describes how to deploy an instance by calling the StartInstance operation.
       *
       * @description > The request frequency is limited to 2 queries per second (QPS) for each user.
       *
       * @param request StartInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartInstanceResponse
       */
      Models::StartInstanceResponse startInstanceWithOptions(const Models::StartInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You must purchase and deploy an ApsaraMQ for Kafka instance before you can send and receive messages. This topic describes how to deploy an instance by calling the StartInstance operation.
       *
       * @description > The request frequency is limited to 2 queries per second (QPS) for each user.
       *
       * @param request StartInstanceRequest
       * @return StartInstanceResponse
       */
      Models::StartInstanceResponse startInstance(const Models::StartInstanceRequest &request);

      /**
       * @summary Stops an instance.
       *
       * @description Stopping subscription instances is not currently supported. To stop a subscription instance, submit a ticket.
       *
       * @param request StopInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopInstanceResponse
       */
      Models::StopInstanceResponse stopInstanceWithOptions(const Models::StopInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops an instance.
       *
       * @description Stopping subscription instances is not currently supported. To stop a subscription instance, submit a ticket.
       *
       * @param request StopInstanceRequest
       * @return StopInstanceResponse
       */
      Models::StopInstanceResponse stopInstance(const Models::StopInstanceRequest &request);

      /**
       * @summary You can call the TagResources operation to attach tags to resources.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the TagResources operation to attach tags to resources.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary You can call UntagResources to detach tags from resources.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call UntagResources to detach tags from resources.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary You can call the UpdateAllowedIp operation to edit the IP whitelist for an ApsaraMQ for Kafka instance. The whitelist specifies the IP addresses and ports that are allowed to access the instance.
       *
       * @param request UpdateAllowedIpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAllowedIpResponse
       */
      Models::UpdateAllowedIpResponse updateAllowedIpWithOptions(const Models::UpdateAllowedIpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the UpdateAllowedIp operation to edit the IP whitelist for an ApsaraMQ for Kafka instance. The whitelist specifies the IP addresses and ports that are allowed to access the instance.
       *
       * @param request UpdateAllowedIpRequest
       * @return UpdateAllowedIpResponse
       */
      Models::UpdateAllowedIpResponse updateAllowedIp(const Models::UpdateAllowedIpRequest &request);

      /**
       * @summary The UpdateConsumerOffset operation resets the consumer offset of a consumer group.
       *
       * @description This operation resets the consumer offset of a specified consumer group. You can reset the consumer offset by timestamp or by a specific offset value. Using different parameter combinations, you can perform the following tasks:
       * - Consume messages from the latest offset by setting the consumer offset to the latest position. This is supported for a single topic or all topics.
       * - Consume messages from the offset of a specified time point by providing a timestamp. This is supported for a single topic or all topics.
       * - Reset the consumer offset for a specific partition by providing the target partition ID and consumer offset. This is supported only for a single topic.
       *
       * @param tmpReq UpdateConsumerOffsetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateConsumerOffsetResponse
       */
      Models::UpdateConsumerOffsetResponse updateConsumerOffsetWithOptions(const Models::UpdateConsumerOffsetRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The UpdateConsumerOffset operation resets the consumer offset of a consumer group.
       *
       * @description This operation resets the consumer offset of a specified consumer group. You can reset the consumer offset by timestamp or by a specific offset value. Using different parameter combinations, you can perform the following tasks:
       * - Consume messages from the latest offset by setting the consumer offset to the latest position. This is supported for a single topic or all topics.
       * - Consume messages from the offset of a specified time point by providing a timestamp. This is supported for a single topic or all topics.
       * - Reset the consumer offset for a specific partition by providing the target partition ID and consumer offset. This is supported only for a single topic.
       *
       * @param request UpdateConsumerOffsetRequest
       * @return UpdateConsumerOffsetResponse
       */
      Models::UpdateConsumerOffsetResponse updateConsumerOffset(const Models::UpdateConsumerOffsetRequest &request);

      /**
       * @summary After an instance is deployed, you can modify configurations such as enabling Access Control List (ACL) and SSL, the message retention period, and the maximum message size. This topic describes how to call the UpdateInstanceConfig operation to modify the configuration of an instance.
       *
       * @description ## **Permission information**
       * RAM users must obtain authorization before they can call the **UpdateInstanceConfig** operation. For more information, see [RAM access policies](https://help.aliyun.com/document_detail/185815.html).
       * | API                  | Action                   | Resource                      |
       * | -------------------- | ------------------------ | ----------------------------- |
       * | UpdateInstanceConfig | alikafka: UpdateInstance | acs:alikafka:*:*:{instanceId} |
       *
       * @param request UpdateInstanceConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceConfigResponse
       */
      Models::UpdateInstanceConfigResponse updateInstanceConfigWithOptions(const Models::UpdateInstanceConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary After an instance is deployed, you can modify configurations such as enabling Access Control List (ACL) and SSL, the message retention period, and the maximum message size. This topic describes how to call the UpdateInstanceConfig operation to modify the configuration of an instance.
       *
       * @description ## **Permission information**
       * RAM users must obtain authorization before they can call the **UpdateInstanceConfig** operation. For more information, see [RAM access policies](https://help.aliyun.com/document_detail/185815.html).
       * | API                  | Action                   | Resource                      |
       * | -------------------- | ------------------------ | ----------------------------- |
       * | UpdateInstanceConfig | alikafka: UpdateInstance | acs:alikafka:*:*:{instanceId} |
       *
       * @param request UpdateInstanceConfigRequest
       * @return UpdateInstanceConfigResponse
       */
      Models::UpdateInstanceConfigResponse updateInstanceConfig(const Models::UpdateInstanceConfigRequest &request);

      /**
       * @summary After a topic is created, you can modify its configurations, such as the message retention period and maximum message size. This topic describes how to call this API operation to modify topic configurations.
       *
       * @param request UpdateTopicConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTopicConfigResponse
       */
      Models::UpdateTopicConfigResponse updateTopicConfigWithOptions(const Models::UpdateTopicConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary After a topic is created, you can modify its configurations, such as the message retention period and maximum message size. This topic describes how to call this API operation to modify topic configurations.
       *
       * @param request UpdateTopicConfigRequest
       * @return UpdateTopicConfigResponse
       */
      Models::UpdateTopicConfigResponse updateTopicConfig(const Models::UpdateTopicConfigRequest &request);

      /**
       * @summary Upgrades the version of an instance.
       *
       * @description ## **Permission description**
       * RAM users must be authorized before they can call the **UpgradeInstanceVersion** API. For more information about authorization, see [RAM access policy](https://help.aliyun.com/document_detail/185815.html).
       * | API                    | Action         | Resource                      |
       * | ---------------------- | -------------- | ----------------------------- |
       * | UpgradeInstanceVersion | UpdateInstance | acs:alikafka:*:*:{instanceId} |
       * ## **QPS limits**
       * The request frequency is limited to 2 queries per second (QPS) for a single user.
       *
       * @param request UpgradeInstanceVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeInstanceVersionResponse
       */
      Models::UpgradeInstanceVersionResponse upgradeInstanceVersionWithOptions(const Models::UpgradeInstanceVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades the version of an instance.
       *
       * @description ## **Permission description**
       * RAM users must be authorized before they can call the **UpgradeInstanceVersion** API. For more information about authorization, see [RAM access policy](https://help.aliyun.com/document_detail/185815.html).
       * | API                    | Action         | Resource                      |
       * | ---------------------- | -------------- | ----------------------------- |
       * | UpgradeInstanceVersion | UpdateInstance | acs:alikafka:*:*:{instanceId} |
       * ## **QPS limits**
       * The request frequency is limited to 2 queries per second (QPS) for a single user.
       *
       * @param request UpgradeInstanceVersionRequest
       * @return UpgradeInstanceVersionResponse
       */
      Models::UpgradeInstanceVersionResponse upgradeInstanceVersion(const Models::UpgradeInstanceVersionRequest &request);

      /**
       * @summary Upgrades a pay-as-you-go instance.
       *
       * @description Before you call this operation, make sure that you fully understand the billing method and pricing of pay-as-you-go instances. For more information, see [Billing](https://help.aliyun.com/document_detail/84737.html).
       *
       * @param tmpReq UpgradePostPayOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradePostPayOrderResponse
       */
      Models::UpgradePostPayOrderResponse upgradePostPayOrderWithOptions(const Models::UpgradePostPayOrderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades a pay-as-you-go instance.
       *
       * @description Before you call this operation, make sure that you fully understand the billing method and pricing of pay-as-you-go instances. For more information, see [Billing](https://help.aliyun.com/document_detail/84737.html).
       *
       * @param request UpgradePostPayOrderRequest
       * @return UpgradePostPayOrderResponse
       */
      Models::UpgradePostPayOrderResponse upgradePostPayOrder(const Models::UpgradePostPayOrderRequest &request);

      /**
       * @summary Upgrades a subscription instance.
       *
       * @description Before calling this operation, ensure you understand the billing method and pricing of subscription instances. For more information, see [Billing](https://help.aliyun.com/document_detail/84737.html).
       *
       * @param tmpReq UpgradePrePayOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradePrePayOrderResponse
       */
      Models::UpgradePrePayOrderResponse upgradePrePayOrderWithOptions(const Models::UpgradePrePayOrderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades a subscription instance.
       *
       * @description Before calling this operation, ensure you understand the billing method and pricing of subscription instances. For more information, see [Billing](https://help.aliyun.com/document_detail/84737.html).
       *
       * @param request UpgradePrePayOrderRequest
       * @return UpgradePrePayOrderResponse
       */
      Models::UpgradePrePayOrderResponse upgradePrePayOrder(const Models::UpgradePrePayOrderRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
