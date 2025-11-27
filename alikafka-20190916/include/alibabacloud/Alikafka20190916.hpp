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
       * @summary Changes the resource group of an ApsaraMQ for Kafka instance.
       *
       * @param request ChangeResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroupWithOptions(const Models::ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the resource group of an ApsaraMQ for Kafka instance.
       *
       * @param request ChangeResourceGroupRequest
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroup(const Models::ChangeResourceGroupRequest &request);

      /**
       * @summary Changes the billing method of a Message Queue for Apache Kafka instance from pay-as-you-go to subscription.
       *
       * @param request ConvertPostPayOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConvertPostPayOrderResponse
       */
      Models::ConvertPostPayOrderResponse convertPostPayOrderWithOptions(const Models::ConvertPostPayOrderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the billing method of a Message Queue for Apache Kafka instance from pay-as-you-go to subscription.
       *
       * @param request ConvertPostPayOrderRequest
       * @return ConvertPostPayOrderResponse
       */
      Models::ConvertPostPayOrderResponse convertPostPayOrder(const Models::ConvertPostPayOrderRequest &request);

      /**
       * @summary Creates an access control list (ACL).
       *
       * @param request CreateAclRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAclResponse
       */
      Models::CreateAclResponse createAclWithOptions(const Models::CreateAclRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an access control list (ACL).
       *
       * @param request CreateAclRequest
       * @return CreateAclResponse
       */
      Models::CreateAclResponse createAcl(const Models::CreateAclRequest &request);

      /**
       * @summary Creates a consumer group.
       *
       * @param request CreateConsumerGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateConsumerGroupResponse
       */
      Models::CreateConsumerGroupResponse createConsumerGroupWithOptions(const Models::CreateConsumerGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a consumer group.
       *
       * @param request CreateConsumerGroupRequest
       * @return CreateConsumerGroupResponse
       */
      Models::CreateConsumerGroupResponse createConsumerGroup(const Models::CreateConsumerGroupRequest &request);

      /**
       * @summary 创建后付费实例。
       *
       * @param tmpReq CreatePostPayInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePostPayInstanceResponse
       */
      Models::CreatePostPayInstanceResponse createPostPayInstanceWithOptions(const Models::CreatePostPayInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建后付费实例。
       *
       * @param request CreatePostPayInstanceRequest
       * @return CreatePostPayInstanceResponse
       */
      Models::CreatePostPayInstanceResponse createPostPayInstance(const Models::CreatePostPayInstanceRequest &request);

      /**
       * @summary Creates a pay-as-you-go ApsaraMQ for Kafka instance. Pay-as-you-go instances allow you to pay after you use the resources. You are charged for pay-as-you-go instances based on the actual resource usage. You can use pay-as-you-go instances in test scenarios or scenarios in which the peak traffic is uncertain.
       *
       * @description Before you call this operation, make sure that you understand the billing method and pricing of pay-as-you-go Message Queue for Apache Kafka instances. For more information, see [Billing](https://help.aliyun.com/document_detail/84737.html).
       *
       * @param tmpReq CreatePostPayOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePostPayOrderResponse
       */
      Models::CreatePostPayOrderResponse createPostPayOrderWithOptions(const Models::CreatePostPayOrderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a pay-as-you-go ApsaraMQ for Kafka instance. Pay-as-you-go instances allow you to pay after you use the resources. You are charged for pay-as-you-go instances based on the actual resource usage. You can use pay-as-you-go instances in test scenarios or scenarios in which the peak traffic is uncertain.
       *
       * @description Before you call this operation, make sure that you understand the billing method and pricing of pay-as-you-go Message Queue for Apache Kafka instances. For more information, see [Billing](https://help.aliyun.com/document_detail/84737.html).
       *
       * @param request CreatePostPayOrderRequest
       * @return CreatePostPayOrderResponse
       */
      Models::CreatePostPayOrderResponse createPostPayOrder(const Models::CreatePostPayOrderRequest &request);

      /**
       * @summary 创建预付费实例
       *
       * @param tmpReq CreatePrePayInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePrePayInstanceResponse
       */
      Models::CreatePrePayInstanceResponse createPrePayInstanceWithOptions(const Models::CreatePrePayInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建预付费实例
       *
       * @param request CreatePrePayInstanceRequest
       * @return CreatePrePayInstanceResponse
       */
      Models::CreatePrePayInstanceResponse createPrePayInstance(const Models::CreatePrePayInstanceRequest &request);

      /**
       * @summary Creates a subscription ApsaraMQ for Kafka instance. You can use subscription instances only after you pay for them. Subscription instances are suitable for long-term and stable business scenarios.
       *
       * @description *   Before you call this operation, make sure that you understand the billing methods and pricing of subscription ApsaraMQ for Kafka instances. For more information, see [Billing](https://help.aliyun.com/document_detail/84737.html).
       * *   If you create an ApsaraMQ for Kafka instance by calling this operation, the subscription duration is one month and the auto-renewal feature is enabled by default. The auto-renewal cycle is also one month. If you want to change the auto-renewal cycle or disable the auto-renewal feature, you can go to the [Renewal](https://renew.console.aliyun.com/#/ecs) page in the Alibaba Cloud Management Console.
       *
       * @param tmpReq CreatePrePayOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePrePayOrderResponse
       */
      Models::CreatePrePayOrderResponse createPrePayOrderWithOptions(const Models::CreatePrePayOrderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a subscription ApsaraMQ for Kafka instance. You can use subscription instances only after you pay for them. Subscription instances are suitable for long-term and stable business scenarios.
       *
       * @description *   Before you call this operation, make sure that you understand the billing methods and pricing of subscription ApsaraMQ for Kafka instances. For more information, see [Billing](https://help.aliyun.com/document_detail/84737.html).
       * *   If you create an ApsaraMQ for Kafka instance by calling this operation, the subscription duration is one month and the auto-renewal feature is enabled by default. The auto-renewal cycle is also one month. If you want to change the auto-renewal cycle or disable the auto-renewal feature, you can go to the [Renewal](https://renew.console.aliyun.com/#/ecs) page in the Alibaba Cloud Management Console.
       *
       * @param request CreatePrePayOrderRequest
       * @return CreatePrePayOrderResponse
       */
      Models::CreatePrePayOrderResponse createPrePayOrder(const Models::CreatePrePayOrderRequest &request);

      /**
       * @summary Creates a Simple Authentication and Security Layer (SASL) user.
       *
       * @param request CreateSaslUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSaslUserResponse
       */
      Models::CreateSaslUserResponse createSaslUserWithOptions(const Models::CreateSaslUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Simple Authentication and Security Layer (SASL) user.
       *
       * @param request CreateSaslUserRequest
       * @return CreateSaslUserResponse
       */
      Models::CreateSaslUserResponse createSaslUser(const Models::CreateSaslUserRequest &request);

      /**
       * @summary Creates a scheduled scaling rule for a serverless ApsaraMQ for Kafka V3 instance.
       *
       * @description ###### [](#-v3-serverless-)This operation is supported only by serverless ApsaraMQ for Kafka V3 instances.
       *
       * @param tmpReq CreateScheduledScalingRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateScheduledScalingRuleResponse
       */
      Models::CreateScheduledScalingRuleResponse createScheduledScalingRuleWithOptions(const Models::CreateScheduledScalingRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a scheduled scaling rule for a serverless ApsaraMQ for Kafka V3 instance.
       *
       * @description ###### [](#-v3-serverless-)This operation is supported only by serverless ApsaraMQ for Kafka V3 instances.
       *
       * @param request CreateScheduledScalingRuleRequest
       * @return CreateScheduledScalingRuleResponse
       */
      Models::CreateScheduledScalingRuleResponse createScheduledScalingRule(const Models::CreateScheduledScalingRuleRequest &request);

      /**
       * @summary Creates a topic.
       *
       * @description *   Each Alibaba Cloud account can call this operation up to once per second.
       * *   The maximum number of topics that you can create in an instance is determined by the specification of the instance.
       *
       * @param request CreateTopicRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTopicResponse
       */
      Models::CreateTopicResponse createTopicWithOptions(const Models::CreateTopicRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a topic.
       *
       * @description *   Each Alibaba Cloud account can call this operation up to once per second.
       * *   The maximum number of topics that you can create in an instance is determined by the specification of the instance.
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
       * @summary Deletes a consumer group from a specified Message Queue for Apache Kafka instance.
       *
       * @param request DeleteConsumerGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteConsumerGroupResponse
       */
      Models::DeleteConsumerGroupResponse deleteConsumerGroupWithOptions(const Models::DeleteConsumerGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a consumer group from a specified Message Queue for Apache Kafka instance.
       *
       * @param request DeleteConsumerGroupRequest
       * @return DeleteConsumerGroupResponse
       */
      Models::DeleteConsumerGroupResponse deleteConsumerGroup(const Models::DeleteConsumerGroupRequest &request);

      /**
       * @summary Deletes an instance. You can delete subscription and pay-as-you-go instances after you release them.
       *
       * @param request DeleteInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstanceWithOptions(const Models::DeleteInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an instance. You can delete subscription and pay-as-you-go instances after you release them.
       *
       * @param request DeleteInstanceRequest
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstance(const Models::DeleteInstanceRequest &request);

      /**
       * @summary Deletes a Simple Authentication and Security Layer (SASL) user.
       *
       * @param request DeleteSaslUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSaslUserResponse
       */
      Models::DeleteSaslUserResponse deleteSaslUserWithOptions(const Models::DeleteSaslUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Simple Authentication and Security Layer (SASL) user.
       *
       * @param request DeleteSaslUserRequest
       * @return DeleteSaslUserResponse
       */
      Models::DeleteSaslUserResponse deleteSaslUser(const Models::DeleteSaslUserRequest &request);

      /**
       * @summary Deletes the scheduled scaling policy of a serverless ApsaraMQ for Kafka instance after you deploy the instance.
       *
       * @description ###### [](#-serverless-)This operation is available only for serverless ApsaraMQ for Kafka instances.
       *
       * @param request DeleteScheduledScalingRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteScheduledScalingRuleResponse
       */
      Models::DeleteScheduledScalingRuleResponse deleteScheduledScalingRuleWithOptions(const Models::DeleteScheduledScalingRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the scheduled scaling policy of a serverless ApsaraMQ for Kafka instance after you deploy the instance.
       *
       * @description ###### [](#-serverless-)This operation is available only for serverless ApsaraMQ for Kafka instances.
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
       * @summary 查询acl资源名
       *
       * @param request DescribeAclResourceNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAclResourceNameResponse
       */
      Models::DescribeAclResourceNameResponse describeAclResourceNameWithOptions(const Models::DescribeAclResourceNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询acl资源名
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
       * @summary Queries Simple Authentication and Security Layer (SASL) users.
       *
       * @param request DescribeSaslUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSaslUsersResponse
       */
      Models::DescribeSaslUsersResponse describeSaslUsersWithOptions(const Models::DescribeSaslUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Simple Authentication and Security Layer (SASL) users.
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
       * @summary Enables and disables the flexible group creation feature.
       *
       * @param request EnableAutoGroupCreationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableAutoGroupCreationResponse
       */
      Models::EnableAutoGroupCreationResponse enableAutoGroupCreationWithOptions(const Models::EnableAutoGroupCreationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables and disables the flexible group creation feature.
       *
       * @param request EnableAutoGroupCreationRequest
       * @return EnableAutoGroupCreationResponse
       */
      Models::EnableAutoGroupCreationResponse enableAutoGroupCreation(const Models::EnableAutoGroupCreationRequest &request);

      /**
       * @summary Enables or disables the automatic topic creation feature, or changes the number of partitions in topics that are automatically created.
       *
       * @param request EnableAutoTopicCreationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableAutoTopicCreationResponse
       */
      Models::EnableAutoTopicCreationResponse enableAutoTopicCreationWithOptions(const Models::EnableAutoTopicCreationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables the automatic topic creation feature, or changes the number of partitions in topics that are automatically created.
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
       * @summary Queries the IP address whitelist.
       *
       * @param request GetAllowedIpListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAllowedIpListResponse
       */
      Models::GetAllowedIpListResponse getAllowedIpListWithOptions(const Models::GetAllowedIpListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the IP address whitelist.
       *
       * @param request GetAllowedIpListRequest
       * @return GetAllowedIpListResponse
       */
      Models::GetAllowedIpListResponse getAllowedIpList(const Models::GetAllowedIpListRequest &request);

      /**
       * @summary Queries the scheduled scaling policy of a serverless ApsaraMQ for Kafka instance after you deploy the instance.
       *
       * @description ###### [](#-serverless-)**This operation is available only for serverless ApsaraMQ for Kafka instances.
       *
       * @param request GetAutoScalingConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAutoScalingConfigurationResponse
       */
      Models::GetAutoScalingConfigurationResponse getAutoScalingConfigurationWithOptions(const Models::GetAutoScalingConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the scheduled scaling policy of a serverless ApsaraMQ for Kafka instance after you deploy the instance.
       *
       * @description ###### [](#-serverless-)**This operation is available only for serverless ApsaraMQ for Kafka instances.
       *
       * @param request GetAutoScalingConfigurationRequest
       * @return GetAutoScalingConfigurationResponse
       */
      Models::GetAutoScalingConfigurationResponse getAutoScalingConfiguration(const Models::GetAutoScalingConfigurationRequest &request);

      /**
       * @summary Queries one or more consumer groups in a specified Message Queue for Apache Kafka instance.
       *
       * @param request GetConsumerListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConsumerListResponse
       */
      Models::GetConsumerListResponse getConsumerListWithOptions(const Models::GetConsumerListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries one or more consumer groups in a specified Message Queue for Apache Kafka instance.
       *
       * @param request GetConsumerListRequest
       * @return GetConsumerListResponse
       */
      Models::GetConsumerListResponse getConsumerList(const Models::GetConsumerListRequest &request);

      /**
       * @summary Queries the consumer progress of a consumer group.
       *
       * @param request GetConsumerProgressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConsumerProgressResponse
       */
      Models::GetConsumerProgressResponse getConsumerProgressWithOptions(const Models::GetConsumerProgressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the consumer progress of a consumer group.
       *
       * @param request GetConsumerProgressRequest
       * @return GetConsumerProgressResponse
       */
      Models::GetConsumerProgressResponse getConsumerProgress(const Models::GetConsumerProgressRequest &request);

      /**
       * @summary Queries the information about instances in a specified region.
       *
       * @param request GetInstanceListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceListResponse
       */
      Models::GetInstanceListResponse getInstanceListWithOptions(const Models::GetInstanceListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about instances in a specified region.
       *
       * @param request GetInstanceListRequest
       * @return GetInstanceListResponse
       */
      Models::GetInstanceListResponse getInstanceList(const Models::GetInstanceListRequest &request);

      /**
       * @summary Queries the IP addresses of the clients that are connected to an ApsaraMQ for Kafka instance.
       *
       * @description *   The IP information is obtained from the sampled logs generated for the requests that the client sends to the broker by calling the API operations of ApsaraMQ for Kafka.
       * *   Statistics refers to the number of connections on different ports of an IP address within a specific period of time.
       * *   If the broker is not of the latest minor version, the sampled logs may not be accurate. This may cause inaccurate IP information. Therefore, we recommend that you update your broker to the latest version at the earliest opportunity.
       *
       * @param request GetKafkaClientIpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetKafkaClientIpResponse
       */
      Models::GetKafkaClientIpResponse getKafkaClientIpWithOptions(const Models::GetKafkaClientIpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the IP addresses of the clients that are connected to an ApsaraMQ for Kafka instance.
       *
       * @description *   The IP information is obtained from the sampled logs generated for the requests that the client sends to the broker by calling the API operations of ApsaraMQ for Kafka.
       * *   Statistics refers to the number of connections on different ports of an IP address within a specific period of time.
       * *   If the broker is not of the latest minor version, the sampled logs may not be accurate. This may cause inaccurate IP information. Therefore, we recommend that you update your broker to the latest version at the earliest opportunity.
       *
       * @param request GetKafkaClientIpRequest
       * @return GetKafkaClientIpResponse
       */
      Models::GetKafkaClientIpResponse getKafkaClientIp(const Models::GetKafkaClientIpRequest &request);

      /**
       * @summary Queries the used quota of topics and partitions.
       *
       * @param request GetQuotaTipRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQuotaTipResponse
       */
      Models::GetQuotaTipResponse getQuotaTipWithOptions(const Models::GetQuotaTipRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the used quota of topics and partitions.
       *
       * @param request GetQuotaTipRequest
       * @return GetQuotaTipResponse
       */
      Models::GetQuotaTipResponse getQuotaTip(const Models::GetQuotaTipRequest &request);

      /**
       * @summary 查询实例风险列表
       *
       * @param request GetRiskListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRiskListResponse
       */
      Models::GetRiskListResponse getRiskListWithOptions(const Models::GetRiskListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询实例风险列表
       *
       * @param request GetRiskListRequest
       * @return GetRiskListResponse
       */
      Models::GetRiskListResponse getRiskList(const Models::GetRiskListRequest &request);

      /**
       * @summary Queries the information about a topic.
       *
       * @param request GetTopicListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTopicListResponse
       */
      Models::GetTopicListResponse getTopicListWithOptions(const Models::GetTopicListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a topic.
       *
       * @param request GetTopicListRequest
       * @return GetTopicListResponse
       */
      Models::GetTopicListResponse getTopicList(const Models::GetTopicListRequest &request);

      /**
       * @summary Queries the messaging status of a topic.
       *
       * @param request GetTopicStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTopicStatusResponse
       */
      Models::GetTopicStatusResponse getTopicStatusWithOptions(const Models::GetTopicStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the messaging status of a topic.
       *
       * @param request GetTopicStatusRequest
       * @return GetTopicStatusResponse
       */
      Models::GetTopicStatusResponse getTopicStatus(const Models::GetTopicStatusRequest &request);

      /**
       * @summary Queries the information about the groups that subscribe to a topic.
       *
       * @param request GetTopicSubscribeStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTopicSubscribeStatusResponse
       */
      Models::GetTopicSubscribeStatusResponse getTopicSubscribeStatusWithOptions(const Models::GetTopicSubscribeStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the groups that subscribe to a topic.
       *
       * @param request GetTopicSubscribeStatusRequest
       * @return GetTopicSubscribeStatusResponse
       */
      Models::GetTopicSubscribeStatusResponse getTopicSubscribeStatus(const Models::GetTopicSubscribeStatusRequest &request);

      /**
       * @summary 获取Rebalance详情
       *
       * @param request ListRebalanceInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRebalanceInfoResponse
       */
      Models::ListRebalanceInfoResponse listRebalanceInfoWithOptions(const Models::ListRebalanceInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取Rebalance详情
       *
       * @param request ListRebalanceInfoRequest
       * @return ListRebalanceInfoResponse
       */
      Models::ListRebalanceInfoResponse listRebalanceInfo(const Models::ListRebalanceInfoRequest &request);

      /**
       * @summary Queries the tags that are attached to a specified resource.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags that are attached to a specified resource.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Changes the name of an ApsaraMQ for Kafka instance. After you deploy an instance, you can call this operation to change the name of the instance.
       *
       * @param request ModifyInstanceNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceNameResponse
       */
      Models::ModifyInstanceNameResponse modifyInstanceNameWithOptions(const Models::ModifyInstanceNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the name of an ApsaraMQ for Kafka instance. After you deploy an instance, you can call this operation to change the name of the instance.
       *
       * @param request ModifyInstanceNameRequest
       * @return ModifyInstanceNameResponse
       */
      Models::ModifyInstanceNameResponse modifyInstanceName(const Models::ModifyInstanceNameRequest &request);

      /**
       * @summary Changes the number of partitions in a topic.
       *
       * @param request ModifyPartitionNumRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPartitionNumResponse
       */
      Models::ModifyPartitionNumResponse modifyPartitionNumWithOptions(const Models::ModifyPartitionNumRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the number of partitions in a topic.
       *
       * @param request ModifyPartitionNumRequest
       * @return ModifyPartitionNumResponse
       */
      Models::ModifyPartitionNumResponse modifyPartitionNum(const Models::ModifyPartitionNumRequest &request);

      /**
       * @summary Modifies the scheduled scaling policy of a serverless ApsaraMQ for Kafka instance after you deploy the instance.
       *
       * @description ###### [](#-serverless-)This operation is available only for serverless ApsaraMQ for Kafka instances.
       *
       * @param request ModifyScheduledScalingRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyScheduledScalingRuleResponse
       */
      Models::ModifyScheduledScalingRuleResponse modifyScheduledScalingRuleWithOptions(const Models::ModifyScheduledScalingRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the scheduled scaling policy of a serverless ApsaraMQ for Kafka instance after you deploy the instance.
       *
       * @description ###### [](#-serverless-)This operation is available only for serverless ApsaraMQ for Kafka instances.
       *
       * @param request ModifyScheduledScalingRuleRequest
       * @return ModifyScheduledScalingRuleResponse
       */
      Models::ModifyScheduledScalingRuleResponse modifyScheduledScalingRule(const Models::ModifyScheduledScalingRuleRequest &request);

      /**
       * @summary Modifies the description of a topic.
       *
       * @param request ModifyTopicRemarkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyTopicRemarkResponse
       */
      Models::ModifyTopicRemarkResponse modifyTopicRemarkWithOptions(const Models::ModifyTopicRemarkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the description of a topic.
       *
       * @param request ModifyTopicRemarkRequest
       * @return ModifyTopicRemarkResponse
       */
      Models::ModifyTopicRemarkResponse modifyTopicRemark(const Models::ModifyTopicRemarkRequest &request);

      /**
       * @summary Queries messages stored in a topic. You can query messages by creation time or offset.
       *
       * @param request QueryMessageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMessageResponse
       */
      Models::QueryMessageResponse queryMessageWithOptions(const Models::QueryMessageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries messages stored in a topic. You can query messages by creation time or offset.
       *
       * @param request QueryMessageRequest
       * @return QueryMessageResponse
       */
      Models::QueryMessageResponse queryMessage(const Models::QueryMessageRequest &request);

      /**
       * @summary Releases a pay-as-you-go instance.
       *
       * @description You cannot call this operation to release a subscription Message Queue for Apache Kafka instance.
       *
       * @param request ReleaseInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseInstanceResponse
       */
      Models::ReleaseInstanceResponse releaseInstanceWithOptions(const Models::ReleaseInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases a pay-as-you-go instance.
       *
       * @description You cannot call this operation to release a subscription Message Queue for Apache Kafka instance.
       *
       * @param request ReleaseInstanceRequest
       * @return ReleaseInstanceResponse
       */
      Models::ReleaseInstanceResponse releaseInstance(const Models::ReleaseInstanceRequest &request);

      /**
       * @summary Enables an ApsaraMQ for Kafka instance.
       *
       * @description You can call this operation only if your instance is in the Stopped state.
       *
       * @param request ReopenInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReopenInstanceResponse
       */
      Models::ReopenInstanceResponse reopenInstanceWithOptions(const Models::ReopenInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables an ApsaraMQ for Kafka instance.
       *
       * @description You can call this operation only if your instance is in the Stopped state.
       *
       * @param request ReopenInstanceRequest
       * @return ReopenInstanceResponse
       */
      Models::ReopenInstanceResponse reopenInstance(const Models::ReopenInstanceRequest &request);

      /**
       * @summary Deploys an ApsaraMQ for Kafka instance. You must purchase and deploy an ApsaraMQ for Kafka instance before you can use the instance to send and receive messages.
       *
       * @description >  You can call this operation up to twice per second.
       *
       * @param request StartInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartInstanceResponse
       */
      Models::StartInstanceResponse startInstanceWithOptions(const Models::StartInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deploys an ApsaraMQ for Kafka instance. You must purchase and deploy an ApsaraMQ for Kafka instance before you can use the instance to send and receive messages.
       *
       * @description >  You can call this operation up to twice per second.
       *
       * @param request StartInstanceRequest
       * @return StartInstanceResponse
       */
      Models::StartInstanceResponse startInstance(const Models::StartInstanceRequest &request);

      /**
       * @summary Stops an ApsaraMQ for Kafka instance.
       *
       * @description You cannot stop a subscription ApsaraMQ for Kafka instance. If you want to stop a subscription ApsaraMQ for Kafka instance, submit a ticket.
       *
       * @param request StopInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopInstanceResponse
       */
      Models::StopInstanceResponse stopInstanceWithOptions(const Models::StopInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops an ApsaraMQ for Kafka instance.
       *
       * @description You cannot stop a subscription ApsaraMQ for Kafka instance. If you want to stop a subscription ApsaraMQ for Kafka instance, submit a ticket.
       *
       * @param request StopInstanceRequest
       * @return StopInstanceResponse
       */
      Models::StopInstanceResponse stopInstance(const Models::StopInstanceRequest &request);

      /**
       * @summary Attaches a tag to a resource.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attaches a tag to a resource.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Detaches tags from a specified resource.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detaches tags from a specified resource.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Updates the IP address whitelist of an ApsaraMQ for Kafka instance. Only IP addresses and ports that are configured in the IP address whitelist of an instance can access the instance.
       *
       * @param request UpdateAllowedIpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAllowedIpResponse
       */
      Models::UpdateAllowedIpResponse updateAllowedIpWithOptions(const Models::UpdateAllowedIpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the IP address whitelist of an ApsaraMQ for Kafka instance. Only IP addresses and ports that are configured in the IP address whitelist of an instance can access the instance.
       *
       * @param request UpdateAllowedIpRequest
       * @return UpdateAllowedIpResponse
       */
      Models::UpdateAllowedIpResponse updateAllowedIp(const Models::UpdateAllowedIpRequest &request);

      /**
       * @summary Resets the consumer offsets of the subscribed topics of a consumer group.
       *
       * @description You can call this operation to reset the consumer offset of a specific consumer group. You can use the timestamp or offset parameter to reset the consumer offset of a consumer group. You can implement the following features by configuring a combination of different parameters:
       * *   Reset the consumer offsets of one or all subscribed topics of a consumer group to the latest offset. This way, you can consume messages in the topics from the latest offset.
       * *   Reset the consumer offsets of one or all subscribed topics of a consumer group to a specific point in time. This way, you can consume messages in the topics from the specified point in time.
       * *   Reset the consumer offset of one subscribed topic of a consumer group to a specific offset in a specific partition. This way, you can consume messages from the specified offset in the specified partition.
       *
       * @param tmpReq UpdateConsumerOffsetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateConsumerOffsetResponse
       */
      Models::UpdateConsumerOffsetResponse updateConsumerOffsetWithOptions(const Models::UpdateConsumerOffsetRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets the consumer offsets of the subscribed topics of a consumer group.
       *
       * @description You can call this operation to reset the consumer offset of a specific consumer group. You can use the timestamp or offset parameter to reset the consumer offset of a consumer group. You can implement the following features by configuring a combination of different parameters:
       * *   Reset the consumer offsets of one or all subscribed topics of a consumer group to the latest offset. This way, you can consume messages in the topics from the latest offset.
       * *   Reset the consumer offsets of one or all subscribed topics of a consumer group to a specific point in time. This way, you can consume messages in the topics from the specified point in time.
       * *   Reset the consumer offset of one subscribed topic of a consumer group to a specific offset in a specific partition. This way, you can consume messages from the specified offset in the specified partition.
       *
       * @param request UpdateConsumerOffsetRequest
       * @return UpdateConsumerOffsetResponse
       */
      Models::UpdateConsumerOffsetResponse updateConsumerOffset(const Models::UpdateConsumerOffsetRequest &request);

      /**
       * @summary Modifies the configurations of an ApsaraMQ for Kafka instance. ApsaraMQ for Kafka allows you to modify the configurations of an instance, including the access control list (ACL) feature, the Secure Sockets Layer (SSL) feature, the message retention period, and the maximum message size.
       *
       * @description ## **Permissions**
       * If a RAM user wants to call the **UpdateInstanceConfig** operation, the RAM user must be granted the required permissions. For more information about how to grant permissions, see [RAM policies](https://help.aliyun.com/document_detail/185815.html).
       * |API|Action|Resource|
       * |---|---|---|
       * |UpdateInstanceConfig|alikafka: UpdateInstance|acs:alikafka:*:*:{instanceId}|
       *
       * @param request UpdateInstanceConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceConfigResponse
       */
      Models::UpdateInstanceConfigResponse updateInstanceConfigWithOptions(const Models::UpdateInstanceConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of an ApsaraMQ for Kafka instance. ApsaraMQ for Kafka allows you to modify the configurations of an instance, including the access control list (ACL) feature, the Secure Sockets Layer (SSL) feature, the message retention period, and the maximum message size.
       *
       * @description ## **Permissions**
       * If a RAM user wants to call the **UpdateInstanceConfig** operation, the RAM user must be granted the required permissions. For more information about how to grant permissions, see [RAM policies](https://help.aliyun.com/document_detail/185815.html).
       * |API|Action|Resource|
       * |---|---|---|
       * |UpdateInstanceConfig|alikafka: UpdateInstance|acs:alikafka:*:*:{instanceId}|
       *
       * @param request UpdateInstanceConfigRequest
       * @return UpdateInstanceConfigResponse
       */
      Models::UpdateInstanceConfigResponse updateInstanceConfig(const Models::UpdateInstanceConfigRequest &request);

      /**
       * @summary Modifies the configurations of a topic. After you create a topic, you can modify the message retention period and maximum message size of the topic.
       *
       * @param request UpdateTopicConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTopicConfigResponse
       */
      Models::UpdateTopicConfigResponse updateTopicConfigWithOptions(const Models::UpdateTopicConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of a topic. After you create a topic, you can modify the message retention period and maximum message size of the topic.
       *
       * @param request UpdateTopicConfigRequest
       * @return UpdateTopicConfigResponse
       */
      Models::UpdateTopicConfigResponse updateTopicConfig(const Models::UpdateTopicConfigRequest &request);

      /**
       * @summary Updates the version of an instance.
       *
       * @description ## **Permissions**
       * A RAM user must be granted the required permissions before the RAM user calls the **UpgradeInstanceVersion** operation. For information about how to grant permissions, see [RAM policies](https://help.aliyun.com/document_detail/185815.html).
       * |API|Action|Resource|
       * |---|---|---|
       * |UpgradeInstanceVersion|UpdateInstance|acs:alikafka:*:*:{instanceId}|
       * ## **QPS limits**
       * You can send a maximum of two queries per second (QPS).
       *
       * @param request UpgradeInstanceVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeInstanceVersionResponse
       */
      Models::UpgradeInstanceVersionResponse upgradeInstanceVersionWithOptions(const Models::UpgradeInstanceVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the version of an instance.
       *
       * @description ## **Permissions**
       * A RAM user must be granted the required permissions before the RAM user calls the **UpgradeInstanceVersion** operation. For information about how to grant permissions, see [RAM policies](https://help.aliyun.com/document_detail/185815.html).
       * |API|Action|Resource|
       * |---|---|---|
       * |UpgradeInstanceVersion|UpdateInstance|acs:alikafka:*:*:{instanceId}|
       * ## **QPS limits**
       * You can send a maximum of two queries per second (QPS).
       *
       * @param request UpgradeInstanceVersionRequest
       * @return UpgradeInstanceVersionResponse
       */
      Models::UpgradeInstanceVersionResponse upgradeInstanceVersion(const Models::UpgradeInstanceVersionRequest &request);

      /**
       * @summary Upgrades a pay-as-you-go ApsaraMQ for Kafka instance.
       *
       * @description Before you call this operation, make sure that you understand the billing method and pricing of pay-as-you-go Message Queue for Apache Kafka instances. For more information, see [Billing](https://help.aliyun.com/document_detail/84737.html).
       *
       * @param tmpReq UpgradePostPayOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradePostPayOrderResponse
       */
      Models::UpgradePostPayOrderResponse upgradePostPayOrderWithOptions(const Models::UpgradePostPayOrderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades a pay-as-you-go ApsaraMQ for Kafka instance.
       *
       * @description Before you call this operation, make sure that you understand the billing method and pricing of pay-as-you-go Message Queue for Apache Kafka instances. For more information, see [Billing](https://help.aliyun.com/document_detail/84737.html).
       *
       * @param request UpgradePostPayOrderRequest
       * @return UpgradePostPayOrderResponse
       */
      Models::UpgradePostPayOrderResponse upgradePostPayOrder(const Models::UpgradePostPayOrderRequest &request);

      /**
       * @summary Upgrades a Message Queue for Apache Kafka instance that uses the subscription billing method.
       *
       * @description Before you call this operation, make sure that you understand the billing method and pricing of subscription Message Queue for Apache Kafka instances. For more information, see [Billing overview](https://help.aliyun.com/document_detail/84737.html).
       *
       * @param tmpReq UpgradePrePayOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradePrePayOrderResponse
       */
      Models::UpgradePrePayOrderResponse upgradePrePayOrderWithOptions(const Models::UpgradePrePayOrderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades a Message Queue for Apache Kafka instance that uses the subscription billing method.
       *
       * @description Before you call this operation, make sure that you understand the billing method and pricing of subscription Message Queue for Apache Kafka instances. For more information, see [Billing overview](https://help.aliyun.com/document_detail/84737.html).
       *
       * @param request UpgradePrePayOrderRequest
       * @return UpgradePrePayOrderResponse
       */
      Models::UpgradePrePayOrderResponse upgradePrePayOrder(const Models::UpgradePrePayOrderRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
