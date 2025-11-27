#include <darabonba/Core.hpp>
#include <alibabacloud/Alikafka20190916.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::Alikafka20190916::Models;
namespace AlibabaCloud
{
namespace Alikafka20190916
{

AlibabaCloud::Alikafka20190916::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("alikafka", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
}


string Client::getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint) {
  if (!Darabonba::isNull(endpoint)) {
    return endpoint;
  }

  if (!Darabonba::isNull(endpointMap) && !Darabonba::isNull(endpointMap.at(regionId))) {
    return endpointMap.at(regionId);
  }

  return Utils::Utils::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

/**
 * @summary Changes the resource group of an ApsaraMQ for Kafka instance.
 *
 * @param request ChangeResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroupWithOptions(const ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNewResourceGroupId()) {
    query["NewResourceGroupId"] = request.newResourceGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChangeResourceGroup"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeResourceGroupResponse>();
}

/**
 * @summary Changes the resource group of an ApsaraMQ for Kafka instance.
 *
 * @param request ChangeResourceGroupRequest
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroup(const ChangeResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Changes the billing method of a Message Queue for Apache Kafka instance from pay-as-you-go to subscription.
 *
 * @param request ConvertPostPayOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConvertPostPayOrderResponse
 */
ConvertPostPayOrderResponse Client::convertPostPayOrderWithOptions(const ConvertPostPayOrderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDuration()) {
    query["Duration"] = request.duration();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPaidType()) {
    query["PaidType"] = request.paidType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ConvertPostPayOrder"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConvertPostPayOrderResponse>();
}

/**
 * @summary Changes the billing method of a Message Queue for Apache Kafka instance from pay-as-you-go to subscription.
 *
 * @param request ConvertPostPayOrderRequest
 * @return ConvertPostPayOrderResponse
 */
ConvertPostPayOrderResponse Client::convertPostPayOrder(const ConvertPostPayOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return convertPostPayOrderWithOptions(request, runtime);
}

/**
 * @summary Creates an access control list (ACL).
 *
 * @param request CreateAclRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAclResponse
 */
CreateAclResponse Client::createAclWithOptions(const CreateAclRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclOperationType()) {
    query["AclOperationType"] = request.aclOperationType();
  }

  if (!!request.hasAclOperationTypes()) {
    query["AclOperationTypes"] = request.aclOperationTypes();
  }

  if (!!request.hasAclPermissionType()) {
    query["AclPermissionType"] = request.aclPermissionType();
  }

  if (!!request.hasAclResourceName()) {
    query["AclResourceName"] = request.aclResourceName();
  }

  if (!!request.hasAclResourcePatternType()) {
    query["AclResourcePatternType"] = request.aclResourcePatternType();
  }

  if (!!request.hasAclResourceType()) {
    query["AclResourceType"] = request.aclResourceType();
  }

  if (!!request.hasHost()) {
    query["Host"] = request.host();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasUsername()) {
    query["Username"] = request.username();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAcl"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAclResponse>();
}

/**
 * @summary Creates an access control list (ACL).
 *
 * @param request CreateAclRequest
 * @return CreateAclResponse
 */
CreateAclResponse Client::createAcl(const CreateAclRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAclWithOptions(request, runtime);
}

/**
 * @summary Creates a consumer group.
 *
 * @param request CreateConsumerGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateConsumerGroupResponse
 */
CreateConsumerGroupResponse Client::createConsumerGroupWithOptions(const CreateConsumerGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsumerId()) {
    query["ConsumerId"] = request.consumerId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.remark();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateConsumerGroup"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateConsumerGroupResponse>();
}

/**
 * @summary Creates a consumer group.
 *
 * @param request CreateConsumerGroupRequest
 * @return CreateConsumerGroupResponse
 */
CreateConsumerGroupResponse Client::createConsumerGroup(const CreateConsumerGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createConsumerGroupWithOptions(request, runtime);
}

/**
 * @summary 创建后付费实例。
 *
 * @param tmpReq CreatePostPayInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePostPayInstanceResponse
 */
CreatePostPayInstanceResponse Client::createPostPayInstanceWithOptions(const CreatePostPayInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreatePostPayInstanceShrinkRequest request = CreatePostPayInstanceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasServerlessConfig()) {
    request.setServerlessConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.serverlessConfig(), "ServerlessConfig", "json"));
  }

  json query = {};
  if (!!request.hasDeployType()) {
    query["DeployType"] = request.deployType();
  }

  if (!!request.hasDiskSize()) {
    query["DiskSize"] = request.diskSize();
  }

  if (!!request.hasDiskType()) {
    query["DiskType"] = request.diskType();
  }

  if (!!request.hasEipMax()) {
    query["EipMax"] = request.eipMax();
  }

  if (!!request.hasIoMaxSpec()) {
    query["IoMaxSpec"] = request.ioMaxSpec();
  }

  if (!!request.hasPaidType()) {
    query["PaidType"] = request.paidType();
  }

  if (!!request.hasPartitionNum()) {
    query["PartitionNum"] = request.partitionNum();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasServerlessConfigShrink()) {
    query["ServerlessConfig"] = request.serverlessConfigShrink();
  }

  if (!!request.hasSpecType()) {
    query["SpecType"] = request.specType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreatePostPayInstance"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePostPayInstanceResponse>();
}

/**
 * @summary 创建后付费实例。
 *
 * @param request CreatePostPayInstanceRequest
 * @return CreatePostPayInstanceResponse
 */
CreatePostPayInstanceResponse Client::createPostPayInstance(const CreatePostPayInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPostPayInstanceWithOptions(request, runtime);
}

/**
 * @summary Creates a pay-as-you-go ApsaraMQ for Kafka instance. Pay-as-you-go instances allow you to pay after you use the resources. You are charged for pay-as-you-go instances based on the actual resource usage. You can use pay-as-you-go instances in test scenarios or scenarios in which the peak traffic is uncertain.
 *
 * @description Before you call this operation, make sure that you understand the billing method and pricing of pay-as-you-go Message Queue for Apache Kafka instances. For more information, see [Billing](https://help.aliyun.com/document_detail/84737.html).
 *
 * @param tmpReq CreatePostPayOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePostPayOrderResponse
 */
CreatePostPayOrderResponse Client::createPostPayOrderWithOptions(const CreatePostPayOrderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreatePostPayOrderShrinkRequest request = CreatePostPayOrderShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasServerlessConfig()) {
    request.setServerlessConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.serverlessConfig(), "ServerlessConfig", "json"));
  }

  json query = {};
  if (!!request.hasDeployType()) {
    query["DeployType"] = request.deployType();
  }

  if (!!request.hasDiskSize()) {
    query["DiskSize"] = request.diskSize();
  }

  if (!!request.hasDiskType()) {
    query["DiskType"] = request.diskType();
  }

  if (!!request.hasEipMax()) {
    query["EipMax"] = request.eipMax();
  }

  if (!!request.hasIoMax()) {
    query["IoMax"] = request.ioMax();
  }

  if (!!request.hasIoMaxSpec()) {
    query["IoMaxSpec"] = request.ioMaxSpec();
  }

  if (!!request.hasPaidType()) {
    query["PaidType"] = request.paidType();
  }

  if (!!request.hasPartitionNum()) {
    query["PartitionNum"] = request.partitionNum();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasServerlessConfigShrink()) {
    query["ServerlessConfig"] = request.serverlessConfigShrink();
  }

  if (!!request.hasSpecType()) {
    query["SpecType"] = request.specType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasTopicQuota()) {
    query["TopicQuota"] = request.topicQuota();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreatePostPayOrder"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePostPayOrderResponse>();
}

/**
 * @summary Creates a pay-as-you-go ApsaraMQ for Kafka instance. Pay-as-you-go instances allow you to pay after you use the resources. You are charged for pay-as-you-go instances based on the actual resource usage. You can use pay-as-you-go instances in test scenarios or scenarios in which the peak traffic is uncertain.
 *
 * @description Before you call this operation, make sure that you understand the billing method and pricing of pay-as-you-go Message Queue for Apache Kafka instances. For more information, see [Billing](https://help.aliyun.com/document_detail/84737.html).
 *
 * @param request CreatePostPayOrderRequest
 * @return CreatePostPayOrderResponse
 */
CreatePostPayOrderResponse Client::createPostPayOrder(const CreatePostPayOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPostPayOrderWithOptions(request, runtime);
}

/**
 * @summary 创建预付费实例
 *
 * @param tmpReq CreatePrePayInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePrePayInstanceResponse
 */
CreatePrePayInstanceResponse Client::createPrePayInstanceWithOptions(const CreatePrePayInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreatePrePayInstanceShrinkRequest request = CreatePrePayInstanceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasConfluentConfig()) {
    request.setConfluentConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.confluentConfig(), "ConfluentConfig", "json"));
  }

  json query = {};
  if (!!request.hasConfluentConfigShrink()) {
    query["ConfluentConfig"] = request.confluentConfigShrink();
  }

  if (!!request.hasDeployType()) {
    query["DeployType"] = request.deployType();
  }

  if (!!request.hasDiskSize()) {
    query["DiskSize"] = request.diskSize();
  }

  if (!!request.hasDiskType()) {
    query["DiskType"] = request.diskType();
  }

  if (!!request.hasDuration()) {
    query["Duration"] = request.duration();
  }

  if (!!request.hasEipMax()) {
    query["EipMax"] = request.eipMax();
  }

  if (!!request.hasIoMaxSpec()) {
    query["IoMaxSpec"] = request.ioMaxSpec();
  }

  if (!!request.hasPaidType()) {
    query["PaidType"] = request.paidType();
  }

  if (!!request.hasPartitionNum()) {
    query["PartitionNum"] = request.partitionNum();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSpecType()) {
    query["SpecType"] = request.specType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreatePrePayInstance"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePrePayInstanceResponse>();
}

/**
 * @summary 创建预付费实例
 *
 * @param request CreatePrePayInstanceRequest
 * @return CreatePrePayInstanceResponse
 */
CreatePrePayInstanceResponse Client::createPrePayInstance(const CreatePrePayInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPrePayInstanceWithOptions(request, runtime);
}

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
CreatePrePayOrderResponse Client::createPrePayOrderWithOptions(const CreatePrePayOrderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreatePrePayOrderShrinkRequest request = CreatePrePayOrderShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasConfluentConfig()) {
    request.setConfluentConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.confluentConfig(), "ConfluentConfig", "json"));
  }

  json query = {};
  if (!!request.hasConfluentConfigShrink()) {
    query["ConfluentConfig"] = request.confluentConfigShrink();
  }

  if (!!request.hasDeployType()) {
    query["DeployType"] = request.deployType();
  }

  if (!!request.hasDiskSize()) {
    query["DiskSize"] = request.diskSize();
  }

  if (!!request.hasDiskType()) {
    query["DiskType"] = request.diskType();
  }

  if (!!request.hasDuration()) {
    query["Duration"] = request.duration();
  }

  if (!!request.hasEipMax()) {
    query["EipMax"] = request.eipMax();
  }

  if (!!request.hasIoMax()) {
    query["IoMax"] = request.ioMax();
  }

  if (!!request.hasIoMaxSpec()) {
    query["IoMaxSpec"] = request.ioMaxSpec();
  }

  if (!!request.hasPaidType()) {
    query["PaidType"] = request.paidType();
  }

  if (!!request.hasPartitionNum()) {
    query["PartitionNum"] = request.partitionNum();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSpecType()) {
    query["SpecType"] = request.specType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasTopicQuota()) {
    query["TopicQuota"] = request.topicQuota();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreatePrePayOrder"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePrePayOrderResponse>();
}

/**
 * @summary Creates a subscription ApsaraMQ for Kafka instance. You can use subscription instances only after you pay for them. Subscription instances are suitable for long-term and stable business scenarios.
 *
 * @description *   Before you call this operation, make sure that you understand the billing methods and pricing of subscription ApsaraMQ for Kafka instances. For more information, see [Billing](https://help.aliyun.com/document_detail/84737.html).
 * *   If you create an ApsaraMQ for Kafka instance by calling this operation, the subscription duration is one month and the auto-renewal feature is enabled by default. The auto-renewal cycle is also one month. If you want to change the auto-renewal cycle or disable the auto-renewal feature, you can go to the [Renewal](https://renew.console.aliyun.com/#/ecs) page in the Alibaba Cloud Management Console.
 *
 * @param request CreatePrePayOrderRequest
 * @return CreatePrePayOrderResponse
 */
CreatePrePayOrderResponse Client::createPrePayOrder(const CreatePrePayOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPrePayOrderWithOptions(request, runtime);
}

/**
 * @summary Creates a Simple Authentication and Security Layer (SASL) user.
 *
 * @param request CreateSaslUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSaslUserResponse
 */
CreateSaslUserResponse Client::createSaslUserWithOptions(const CreateSaslUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMechanism()) {
    query["Mechanism"] = request.mechanism();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.password();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  if (!!request.hasUsername()) {
    query["Username"] = request.username();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSaslUser"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSaslUserResponse>();
}

/**
 * @summary Creates a Simple Authentication and Security Layer (SASL) user.
 *
 * @param request CreateSaslUserRequest
 * @return CreateSaslUserResponse
 */
CreateSaslUserResponse Client::createSaslUser(const CreateSaslUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSaslUserWithOptions(request, runtime);
}

/**
 * @summary Creates a scheduled scaling rule for a serverless ApsaraMQ for Kafka V3 instance.
 *
 * @description ###### [](#-v3-serverless-)This operation is supported only by serverless ApsaraMQ for Kafka V3 instances.
 *
 * @param tmpReq CreateScheduledScalingRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateScheduledScalingRuleResponse
 */
CreateScheduledScalingRuleResponse Client::createScheduledScalingRuleWithOptions(const CreateScheduledScalingRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateScheduledScalingRuleShrinkRequest request = CreateScheduledScalingRuleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasWeeklyTypes()) {
    request.setWeeklyTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.weeklyTypes(), "WeeklyTypes", "json"));
  }

  json query = {};
  if (!!request.hasDurationMinutes()) {
    query["DurationMinutes"] = request.durationMinutes();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.enable();
  }

  if (!!request.hasFirstScheduledTime()) {
    query["FirstScheduledTime"] = request.firstScheduledTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRepeatType()) {
    query["RepeatType"] = request.repeatType();
  }

  if (!!request.hasReservedPubFlow()) {
    query["ReservedPubFlow"] = request.reservedPubFlow();
  }

  if (!!request.hasReservedSubFlow()) {
    query["ReservedSubFlow"] = request.reservedSubFlow();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  if (!!request.hasScheduleType()) {
    query["ScheduleType"] = request.scheduleType();
  }

  if (!!request.hasTimeZone()) {
    query["TimeZone"] = request.timeZone();
  }

  if (!!request.hasWeeklyTypesShrink()) {
    query["WeeklyTypes"] = request.weeklyTypesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateScheduledScalingRule"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateScheduledScalingRuleResponse>();
}

/**
 * @summary Creates a scheduled scaling rule for a serverless ApsaraMQ for Kafka V3 instance.
 *
 * @description ###### [](#-v3-serverless-)This operation is supported only by serverless ApsaraMQ for Kafka V3 instances.
 *
 * @param request CreateScheduledScalingRuleRequest
 * @return CreateScheduledScalingRuleResponse
 */
CreateScheduledScalingRuleResponse Client::createScheduledScalingRule(const CreateScheduledScalingRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createScheduledScalingRuleWithOptions(request, runtime);
}

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
CreateTopicResponse Client::createTopicWithOptions(const CreateTopicRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCompactTopic()) {
    query["CompactTopic"] = request.compactTopic();
  }

  if (!!request.hasConfig()) {
    query["Config"] = request.config();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasLocalTopic()) {
    query["LocalTopic"] = request.localTopic();
  }

  if (!!request.hasMinInsyncReplicas()) {
    query["MinInsyncReplicas"] = request.minInsyncReplicas();
  }

  if (!!request.hasPartitionNum()) {
    query["PartitionNum"] = request.partitionNum();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.remark();
  }

  if (!!request.hasReplicationFactor()) {
    query["ReplicationFactor"] = request.replicationFactor();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasTopic()) {
    query["Topic"] = request.topic();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateTopic"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTopicResponse>();
}

/**
 * @summary Creates a topic.
 *
 * @description *   Each Alibaba Cloud account can call this operation up to once per second.
 * *   The maximum number of topics that you can create in an instance is determined by the specification of the instance.
 *
 * @param request CreateTopicRequest
 * @return CreateTopicResponse
 */
CreateTopicResponse Client::createTopic(const CreateTopicRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTopicWithOptions(request, runtime);
}

/**
 * @summary Deletes an access control list (ACL).
 *
 * @param request DeleteAclRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAclResponse
 */
DeleteAclResponse Client::deleteAclWithOptions(const DeleteAclRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclOperationType()) {
    query["AclOperationType"] = request.aclOperationType();
  }

  if (!!request.hasAclOperationTypes()) {
    query["AclOperationTypes"] = request.aclOperationTypes();
  }

  if (!!request.hasAclPermissionType()) {
    query["AclPermissionType"] = request.aclPermissionType();
  }

  if (!!request.hasAclResourceName()) {
    query["AclResourceName"] = request.aclResourceName();
  }

  if (!!request.hasAclResourcePatternType()) {
    query["AclResourcePatternType"] = request.aclResourcePatternType();
  }

  if (!!request.hasAclResourceType()) {
    query["AclResourceType"] = request.aclResourceType();
  }

  if (!!request.hasHost()) {
    query["Host"] = request.host();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasUsername()) {
    query["Username"] = request.username();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAcl"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAclResponse>();
}

/**
 * @summary Deletes an access control list (ACL).
 *
 * @param request DeleteAclRequest
 * @return DeleteAclResponse
 */
DeleteAclResponse Client::deleteAcl(const DeleteAclRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAclWithOptions(request, runtime);
}

/**
 * @summary Deletes a consumer group from a specified Message Queue for Apache Kafka instance.
 *
 * @param request DeleteConsumerGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteConsumerGroupResponse
 */
DeleteConsumerGroupResponse Client::deleteConsumerGroupWithOptions(const DeleteConsumerGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsumerId()) {
    query["ConsumerId"] = request.consumerId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteConsumerGroup"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteConsumerGroupResponse>();
}

/**
 * @summary Deletes a consumer group from a specified Message Queue for Apache Kafka instance.
 *
 * @param request DeleteConsumerGroupRequest
 * @return DeleteConsumerGroupResponse
 */
DeleteConsumerGroupResponse Client::deleteConsumerGroup(const DeleteConsumerGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteConsumerGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes an instance. You can delete subscription and pay-as-you-go instances after you release them.
 *
 * @param request DeleteInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteInstanceResponse
 */
DeleteInstanceResponse Client::deleteInstanceWithOptions(const DeleteInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteInstance"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteInstanceResponse>();
}

/**
 * @summary Deletes an instance. You can delete subscription and pay-as-you-go instances after you release them.
 *
 * @param request DeleteInstanceRequest
 * @return DeleteInstanceResponse
 */
DeleteInstanceResponse Client::deleteInstance(const DeleteInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteInstanceWithOptions(request, runtime);
}

/**
 * @summary Deletes a Simple Authentication and Security Layer (SASL) user.
 *
 * @param request DeleteSaslUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSaslUserResponse
 */
DeleteSaslUserResponse Client::deleteSaslUserWithOptions(const DeleteSaslUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMechanism()) {
    query["Mechanism"] = request.mechanism();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  if (!!request.hasUsername()) {
    query["Username"] = request.username();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSaslUser"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSaslUserResponse>();
}

/**
 * @summary Deletes a Simple Authentication and Security Layer (SASL) user.
 *
 * @param request DeleteSaslUserRequest
 * @return DeleteSaslUserResponse
 */
DeleteSaslUserResponse Client::deleteSaslUser(const DeleteSaslUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSaslUserWithOptions(request, runtime);
}

/**
 * @summary Deletes the scheduled scaling policy of a serverless ApsaraMQ for Kafka instance after you deploy the instance.
 *
 * @description ###### [](#-serverless-)This operation is available only for serverless ApsaraMQ for Kafka instances.
 *
 * @param request DeleteScheduledScalingRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteScheduledScalingRuleResponse
 */
DeleteScheduledScalingRuleResponse Client::deleteScheduledScalingRuleWithOptions(const DeleteScheduledScalingRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteScheduledScalingRule"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteScheduledScalingRuleResponse>();
}

/**
 * @summary Deletes the scheduled scaling policy of a serverless ApsaraMQ for Kafka instance after you deploy the instance.
 *
 * @description ###### [](#-serverless-)This operation is available only for serverless ApsaraMQ for Kafka instances.
 *
 * @param request DeleteScheduledScalingRuleRequest
 * @return DeleteScheduledScalingRuleResponse
 */
DeleteScheduledScalingRuleResponse Client::deleteScheduledScalingRule(const DeleteScheduledScalingRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteScheduledScalingRuleWithOptions(request, runtime);
}

/**
 * @summary Deletes a topic.
 *
 * @param request DeleteTopicRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTopicResponse
 */
DeleteTopicResponse Client::deleteTopicWithOptions(const DeleteTopicRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTopic()) {
    query["Topic"] = request.topic();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTopic"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTopicResponse>();
}

/**
 * @summary Deletes a topic.
 *
 * @param request DeleteTopicRequest
 * @return DeleteTopicResponse
 */
DeleteTopicResponse Client::deleteTopic(const DeleteTopicRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTopicWithOptions(request, runtime);
}

/**
 * @summary 查询acl资源名
 *
 * @param request DescribeAclResourceNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAclResourceNameResponse
 */
DescribeAclResourceNameResponse Client::describeAclResourceNameWithOptions(const DescribeAclResourceNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclResourcePatternType()) {
    query["AclResourcePatternType"] = request.aclResourcePatternType();
  }

  if (!!request.hasAclResourceType()) {
    query["AclResourceType"] = request.aclResourceType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAclResourceName"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAclResourceNameResponse>();
}

/**
 * @summary 查询acl资源名
 *
 * @param request DescribeAclResourceNameRequest
 * @return DescribeAclResourceNameResponse
 */
DescribeAclResourceNameResponse Client::describeAclResourceName(const DescribeAclResourceNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAclResourceNameWithOptions(request, runtime);
}

/**
 * @summary Queries access control lists (ACLs).
 *
 * @param request DescribeAclsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAclsResponse
 */
DescribeAclsResponse Client::describeAclsWithOptions(const DescribeAclsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclOperationType()) {
    query["AclOperationType"] = request.aclOperationType();
  }

  if (!!request.hasAclPermissionType()) {
    query["AclPermissionType"] = request.aclPermissionType();
  }

  if (!!request.hasAclResourceName()) {
    query["AclResourceName"] = request.aclResourceName();
  }

  if (!!request.hasAclResourcePatternType()) {
    query["AclResourcePatternType"] = request.aclResourcePatternType();
  }

  if (!!request.hasAclResourceType()) {
    query["AclResourceType"] = request.aclResourceType();
  }

  if (!!request.hasHost()) {
    query["Host"] = request.host();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasUsername()) {
    query["Username"] = request.username();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAcls"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAclsResponse>();
}

/**
 * @summary Queries access control lists (ACLs).
 *
 * @param request DescribeAclsRequest
 * @return DescribeAclsResponse
 */
DescribeAclsResponse Client::describeAcls(const DescribeAclsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAclsWithOptions(request, runtime);
}

/**
 * @summary Queries Simple Authentication and Security Layer (SASL) users.
 *
 * @param request DescribeSaslUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSaslUsersResponse
 */
DescribeSaslUsersResponse Client::describeSaslUsersWithOptions(const DescribeSaslUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSaslUsers"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSaslUsersResponse>();
}

/**
 * @summary Queries Simple Authentication and Security Layer (SASL) users.
 *
 * @param request DescribeSaslUsersRequest
 * @return DescribeSaslUsersResponse
 */
DescribeSaslUsersResponse Client::describeSaslUsers(const DescribeSaslUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSaslUsersWithOptions(request, runtime);
}

/**
 * @summary 降配后付费实例
 *
 * @param tmpReq DowngradePostPayOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DowngradePostPayOrderResponse
 */
DowngradePostPayOrderResponse Client::downgradePostPayOrderWithOptions(const DowngradePostPayOrderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DowngradePostPayOrderShrinkRequest request = DowngradePostPayOrderShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasServerlessConfig()) {
    request.setServerlessConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.serverlessConfig(), "ServerlessConfig", "json"));
  }

  json query = {};
  if (!!request.hasDiskSize()) {
    query["DiskSize"] = request.diskSize();
  }

  if (!!request.hasEipMax()) {
    query["EipMax"] = request.eipMax();
  }

  if (!!request.hasEipModel()) {
    query["EipModel"] = request.eipModel();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasIoMax()) {
    query["IoMax"] = request.ioMax();
  }

  if (!!request.hasIoMaxSpec()) {
    query["IoMaxSpec"] = request.ioMaxSpec();
  }

  if (!!request.hasPartitionNum()) {
    query["PartitionNum"] = request.partitionNum();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServerlessConfigShrink()) {
    query["ServerlessConfig"] = request.serverlessConfigShrink();
  }

  if (!!request.hasSpecType()) {
    query["SpecType"] = request.specType();
  }

  if (!!request.hasTopicQuota()) {
    query["TopicQuota"] = request.topicQuota();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DowngradePostPayOrder"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DowngradePostPayOrderResponse>();
}

/**
 * @summary 降配后付费实例
 *
 * @param request DowngradePostPayOrderRequest
 * @return DowngradePostPayOrderResponse
 */
DowngradePostPayOrderResponse Client::downgradePostPayOrder(const DowngradePostPayOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return downgradePostPayOrderWithOptions(request, runtime);
}

/**
 * @summary 降配预付费实例
 *
 * @param tmpReq DowngradePrePayOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DowngradePrePayOrderResponse
 */
DowngradePrePayOrderResponse Client::downgradePrePayOrderWithOptions(const DowngradePrePayOrderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DowngradePrePayOrderShrinkRequest request = DowngradePrePayOrderShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasConfluentConfig()) {
    request.setConfluentConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.confluentConfig(), "ConfluentConfig", "json"));
  }

  json query = {};
  if (!!request.hasConfluentConfigShrink()) {
    query["ConfluentConfig"] = request.confluentConfigShrink();
  }

  if (!!request.hasDiskSize()) {
    query["DiskSize"] = request.diskSize();
  }

  if (!!request.hasEipMax()) {
    query["EipMax"] = request.eipMax();
  }

  if (!!request.hasEipModel()) {
    query["EipModel"] = request.eipModel();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasIoMax()) {
    query["IoMax"] = request.ioMax();
  }

  if (!!request.hasIoMaxSpec()) {
    query["IoMaxSpec"] = request.ioMaxSpec();
  }

  if (!!request.hasPaidType()) {
    query["PaidType"] = request.paidType();
  }

  if (!!request.hasPartitionNum()) {
    query["PartitionNum"] = request.partitionNum();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSpecType()) {
    query["SpecType"] = request.specType();
  }

  if (!!request.hasTopicQuota()) {
    query["TopicQuota"] = request.topicQuota();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DowngradePrePayOrder"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DowngradePrePayOrderResponse>();
}

/**
 * @summary 降配预付费实例
 *
 * @param request DowngradePrePayOrderRequest
 * @return DowngradePrePayOrderResponse
 */
DowngradePrePayOrderResponse Client::downgradePrePayOrder(const DowngradePrePayOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return downgradePrePayOrderWithOptions(request, runtime);
}

/**
 * @summary Enables and disables the flexible group creation feature.
 *
 * @param request EnableAutoGroupCreationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableAutoGroupCreationResponse
 */
EnableAutoGroupCreationResponse Client::enableAutoGroupCreationWithOptions(const EnableAutoGroupCreationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnable()) {
    query["Enable"] = request.enable();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableAutoGroupCreation"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableAutoGroupCreationResponse>();
}

/**
 * @summary Enables and disables the flexible group creation feature.
 *
 * @param request EnableAutoGroupCreationRequest
 * @return EnableAutoGroupCreationResponse
 */
EnableAutoGroupCreationResponse Client::enableAutoGroupCreation(const EnableAutoGroupCreationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableAutoGroupCreationWithOptions(request, runtime);
}

/**
 * @summary Enables or disables the automatic topic creation feature, or changes the number of partitions in topics that are automatically created.
 *
 * @param request EnableAutoTopicCreationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableAutoTopicCreationResponse
 */
EnableAutoTopicCreationResponse Client::enableAutoTopicCreationWithOptions(const EnableAutoTopicCreationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOperate()) {
    query["Operate"] = request.operate();
  }

  if (!!request.hasPartitionNum()) {
    query["PartitionNum"] = request.partitionNum();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasUpdatePartition()) {
    query["UpdatePartition"] = request.updatePartition();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableAutoTopicCreation"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableAutoTopicCreationResponse>();
}

/**
 * @summary Enables or disables the automatic topic creation feature, or changes the number of partitions in topics that are automatically created.
 *
 * @param request EnableAutoTopicCreationRequest
 * @return EnableAutoTopicCreationResponse
 */
EnableAutoTopicCreationResponse Client::enableAutoTopicCreation(const EnableAutoTopicCreationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableAutoTopicCreationWithOptions(request, runtime);
}

/**
 * @summary 故障演练
 *
 * @param request FailoverTestRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FailoverTestResponse
 */
FailoverTestResponse Client::failoverTestWithOptions(const FailoverTestRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigs()) {
    query["Configs"] = request.configs();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasDuration()) {
    query["Duration"] = request.duration();
  }

  if (!!request.hasExecuteTime()) {
    query["ExecuteTime"] = request.executeTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FailoverTest"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FailoverTestResponse>();
}

/**
 * @summary 故障演练
 *
 * @param request FailoverTestRequest
 * @return FailoverTestResponse
 */
FailoverTestResponse Client::failoverTest(const FailoverTestRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return failoverTestWithOptions(request, runtime);
}

/**
 * @summary Queries the IDs of all instances in the current account.
 *
 * @param request GetAllInstanceIdListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAllInstanceIdListResponse
 */
GetAllInstanceIdListResponse Client::getAllInstanceIdListWithOptions(const GetAllInstanceIdListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAllInstanceIdList"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAllInstanceIdListResponse>();
}

/**
 * @summary Queries the IDs of all instances in the current account.
 *
 * @param request GetAllInstanceIdListRequest
 * @return GetAllInstanceIdListResponse
 */
GetAllInstanceIdListResponse Client::getAllInstanceIdList(const GetAllInstanceIdListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAllInstanceIdListWithOptions(request, runtime);
}

/**
 * @summary Queries the IP address whitelist.
 *
 * @param request GetAllowedIpListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAllowedIpListResponse
 */
GetAllowedIpListResponse Client::getAllowedIpListWithOptions(const GetAllowedIpListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAllowedIpList"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAllowedIpListResponse>();
}

/**
 * @summary Queries the IP address whitelist.
 *
 * @param request GetAllowedIpListRequest
 * @return GetAllowedIpListResponse
 */
GetAllowedIpListResponse Client::getAllowedIpList(const GetAllowedIpListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAllowedIpListWithOptions(request, runtime);
}

/**
 * @summary Queries the scheduled scaling policy of a serverless ApsaraMQ for Kafka instance after you deploy the instance.
 *
 * @description ###### [](#-serverless-)**This operation is available only for serverless ApsaraMQ for Kafka instances.
 *
 * @param request GetAutoScalingConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAutoScalingConfigurationResponse
 */
GetAutoScalingConfigurationResponse Client::getAutoScalingConfigurationWithOptions(const GetAutoScalingConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAutoScalingConfiguration"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAutoScalingConfigurationResponse>();
}

/**
 * @summary Queries the scheduled scaling policy of a serverless ApsaraMQ for Kafka instance after you deploy the instance.
 *
 * @description ###### [](#-serverless-)**This operation is available only for serverless ApsaraMQ for Kafka instances.
 *
 * @param request GetAutoScalingConfigurationRequest
 * @return GetAutoScalingConfigurationResponse
 */
GetAutoScalingConfigurationResponse Client::getAutoScalingConfiguration(const GetAutoScalingConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAutoScalingConfigurationWithOptions(request, runtime);
}

/**
 * @summary Queries one or more consumer groups in a specified Message Queue for Apache Kafka instance.
 *
 * @param request GetConsumerListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetConsumerListResponse
 */
GetConsumerListResponse Client::getConsumerListWithOptions(const GetConsumerListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsumerId()) {
    query["ConsumerId"] = request.consumerId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetConsumerList"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetConsumerListResponse>();
}

/**
 * @summary Queries one or more consumer groups in a specified Message Queue for Apache Kafka instance.
 *
 * @param request GetConsumerListRequest
 * @return GetConsumerListResponse
 */
GetConsumerListResponse Client::getConsumerList(const GetConsumerListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getConsumerListWithOptions(request, runtime);
}

/**
 * @summary Queries the consumer progress of a consumer group.
 *
 * @param request GetConsumerProgressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetConsumerProgressResponse
 */
GetConsumerProgressResponse Client::getConsumerProgressWithOptions(const GetConsumerProgressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsumerId()) {
    query["ConsumerId"] = request.consumerId();
  }

  if (!!request.hasHideLastTimestamp()) {
    query["HideLastTimestamp"] = request.hideLastTimestamp();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetConsumerProgress"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetConsumerProgressResponse>();
}

/**
 * @summary Queries the consumer progress of a consumer group.
 *
 * @param request GetConsumerProgressRequest
 * @return GetConsumerProgressResponse
 */
GetConsumerProgressResponse Client::getConsumerProgress(const GetConsumerProgressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getConsumerProgressWithOptions(request, runtime);
}

/**
 * @summary Queries the information about instances in a specified region.
 *
 * @param request GetInstanceListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceListResponse
 */
GetInstanceListResponse Client::getInstanceListWithOptions(const GetInstanceListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.orderId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSeries()) {
    query["Series"] = request.series();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstanceList"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceListResponse>();
}

/**
 * @summary Queries the information about instances in a specified region.
 *
 * @param request GetInstanceListRequest
 * @return GetInstanceListResponse
 */
GetInstanceListResponse Client::getInstanceList(const GetInstanceListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceListWithOptions(request, runtime);
}

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
GetKafkaClientIpResponse Client::getKafkaClientIpWithOptions(const GetKafkaClientIpRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasGroup()) {
    query["Group"] = request.group();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasTopic()) {
    query["Topic"] = request.topic();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetKafkaClientIp"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetKafkaClientIpResponse>();
}

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
GetKafkaClientIpResponse Client::getKafkaClientIp(const GetKafkaClientIpRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getKafkaClientIpWithOptions(request, runtime);
}

/**
 * @summary Queries the used quota of topics and partitions.
 *
 * @param request GetQuotaTipRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQuotaTipResponse
 */
GetQuotaTipResponse Client::getQuotaTipWithOptions(const GetQuotaTipRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetQuotaTip"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetQuotaTipResponse>();
}

/**
 * @summary Queries the used quota of topics and partitions.
 *
 * @param request GetQuotaTipRequest
 * @return GetQuotaTipResponse
 */
GetQuotaTipResponse Client::getQuotaTip(const GetQuotaTipRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getQuotaTipWithOptions(request, runtime);
}

/**
 * @summary 查询实例风险列表
 *
 * @param request GetRiskListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRiskListResponse
 */
GetRiskListResponse Client::getRiskListWithOptions(const GetRiskListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStartIndex()) {
    query["StartIndex"] = request.startIndex();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRiskList"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRiskListResponse>();
}

/**
 * @summary 查询实例风险列表
 *
 * @param request GetRiskListRequest
 * @return GetRiskListResponse
 */
GetRiskListResponse Client::getRiskList(const GetRiskListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRiskListWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a topic.
 *
 * @param request GetTopicListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTopicListResponse
 */
GetTopicListResponse Client::getTopicListWithOptions(const GetTopicListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTopic()) {
    query["Topic"] = request.topic();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTopicList"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTopicListResponse>();
}

/**
 * @summary Queries the information about a topic.
 *
 * @param request GetTopicListRequest
 * @return GetTopicListResponse
 */
GetTopicListResponse Client::getTopicList(const GetTopicListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTopicListWithOptions(request, runtime);
}

/**
 * @summary Queries the messaging status of a topic.
 *
 * @param request GetTopicStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTopicStatusResponse
 */
GetTopicStatusResponse Client::getTopicStatusWithOptions(const GetTopicStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTopic()) {
    query["Topic"] = request.topic();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTopicStatus"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTopicStatusResponse>();
}

/**
 * @summary Queries the messaging status of a topic.
 *
 * @param request GetTopicStatusRequest
 * @return GetTopicStatusResponse
 */
GetTopicStatusResponse Client::getTopicStatus(const GetTopicStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTopicStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the information about the groups that subscribe to a topic.
 *
 * @param request GetTopicSubscribeStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTopicSubscribeStatusResponse
 */
GetTopicSubscribeStatusResponse Client::getTopicSubscribeStatusWithOptions(const GetTopicSubscribeStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTopic()) {
    query["Topic"] = request.topic();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTopicSubscribeStatus"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTopicSubscribeStatusResponse>();
}

/**
 * @summary Queries the information about the groups that subscribe to a topic.
 *
 * @param request GetTopicSubscribeStatusRequest
 * @return GetTopicSubscribeStatusResponse
 */
GetTopicSubscribeStatusResponse Client::getTopicSubscribeStatus(const GetTopicSubscribeStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTopicSubscribeStatusWithOptions(request, runtime);
}

/**
 * @summary 获取Rebalance详情
 *
 * @param request ListRebalanceInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRebalanceInfoResponse
 */
ListRebalanceInfoResponse Client::listRebalanceInfoWithOptions(const ListRebalanceInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsumerId()) {
    query["ConsumerId"] = request.consumerId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRebalanceInfo"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRebalanceInfoResponse>();
}

/**
 * @summary 获取Rebalance详情
 *
 * @param request ListRebalanceInfoRequest
 * @return ListRebalanceInfoResponse
 */
ListRebalanceInfoResponse Client::listRebalanceInfo(const ListRebalanceInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRebalanceInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the tags that are attached to a specified resource.
 *
 * @param request ListTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagResources"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagResourcesResponse>();
}

/**
 * @summary Queries the tags that are attached to a specified resource.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Changes the name of an ApsaraMQ for Kafka instance. After you deploy an instance, you can call this operation to change the name of the instance.
 *
 * @param request ModifyInstanceNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceNameResponse
 */
ModifyInstanceNameResponse Client::modifyInstanceNameWithOptions(const ModifyInstanceNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.instanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyInstanceName"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceNameResponse>();
}

/**
 * @summary Changes the name of an ApsaraMQ for Kafka instance. After you deploy an instance, you can call this operation to change the name of the instance.
 *
 * @param request ModifyInstanceNameRequest
 * @return ModifyInstanceNameResponse
 */
ModifyInstanceNameResponse Client::modifyInstanceName(const ModifyInstanceNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceNameWithOptions(request, runtime);
}

/**
 * @summary Changes the number of partitions in a topic.
 *
 * @param request ModifyPartitionNumRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyPartitionNumResponse
 */
ModifyPartitionNumResponse Client::modifyPartitionNumWithOptions(const ModifyPartitionNumRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddPartitionNum()) {
    query["AddPartitionNum"] = request.addPartitionNum();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTopic()) {
    query["Topic"] = request.topic();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyPartitionNum"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyPartitionNumResponse>();
}

/**
 * @summary Changes the number of partitions in a topic.
 *
 * @param request ModifyPartitionNumRequest
 * @return ModifyPartitionNumResponse
 */
ModifyPartitionNumResponse Client::modifyPartitionNum(const ModifyPartitionNumRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyPartitionNumWithOptions(request, runtime);
}

/**
 * @summary Modifies the scheduled scaling policy of a serverless ApsaraMQ for Kafka instance after you deploy the instance.
 *
 * @description ###### [](#-serverless-)This operation is available only for serverless ApsaraMQ for Kafka instances.
 *
 * @param request ModifyScheduledScalingRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyScheduledScalingRuleResponse
 */
ModifyScheduledScalingRuleResponse Client::modifyScheduledScalingRuleWithOptions(const ModifyScheduledScalingRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnable()) {
    query["Enable"] = request.enable();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyScheduledScalingRule"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyScheduledScalingRuleResponse>();
}

/**
 * @summary Modifies the scheduled scaling policy of a serverless ApsaraMQ for Kafka instance after you deploy the instance.
 *
 * @description ###### [](#-serverless-)This operation is available only for serverless ApsaraMQ for Kafka instances.
 *
 * @param request ModifyScheduledScalingRuleRequest
 * @return ModifyScheduledScalingRuleResponse
 */
ModifyScheduledScalingRuleResponse Client::modifyScheduledScalingRule(const ModifyScheduledScalingRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyScheduledScalingRuleWithOptions(request, runtime);
}

/**
 * @summary Modifies the description of a topic.
 *
 * @param request ModifyTopicRemarkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyTopicRemarkResponse
 */
ModifyTopicRemarkResponse Client::modifyTopicRemarkWithOptions(const ModifyTopicRemarkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.remark();
  }

  if (!!request.hasTopic()) {
    query["Topic"] = request.topic();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyTopicRemark"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyTopicRemarkResponse>();
}

/**
 * @summary Modifies the description of a topic.
 *
 * @param request ModifyTopicRemarkRequest
 * @return ModifyTopicRemarkResponse
 */
ModifyTopicRemarkResponse Client::modifyTopicRemark(const ModifyTopicRemarkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyTopicRemarkWithOptions(request, runtime);
}

/**
 * @summary Queries messages stored in a topic. You can query messages by creation time or offset.
 *
 * @param request QueryMessageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryMessageResponse
 */
QueryMessageResponse Client::queryMessageWithOptions(const QueryMessageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryMessage"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryMessageResponse>();
}

/**
 * @summary Queries messages stored in a topic. You can query messages by creation time or offset.
 *
 * @param request QueryMessageRequest
 * @return QueryMessageResponse
 */
QueryMessageResponse Client::queryMessage(const QueryMessageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryMessageWithOptions(request, runtime);
}

/**
 * @summary Releases a pay-as-you-go instance.
 *
 * @description You cannot call this operation to release a subscription Message Queue for Apache Kafka instance.
 *
 * @param request ReleaseInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleaseInstanceResponse
 */
ReleaseInstanceResponse Client::releaseInstanceWithOptions(const ReleaseInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasForceDeleteInstance()) {
    query["ForceDeleteInstance"] = request.forceDeleteInstance();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReleaseInstance"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReleaseInstanceResponse>();
}

/**
 * @summary Releases a pay-as-you-go instance.
 *
 * @description You cannot call this operation to release a subscription Message Queue for Apache Kafka instance.
 *
 * @param request ReleaseInstanceRequest
 * @return ReleaseInstanceResponse
 */
ReleaseInstanceResponse Client::releaseInstance(const ReleaseInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return releaseInstanceWithOptions(request, runtime);
}

/**
 * @summary Enables an ApsaraMQ for Kafka instance.
 *
 * @description You can call this operation only if your instance is in the Stopped state.
 *
 * @param request ReopenInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReopenInstanceResponse
 */
ReopenInstanceResponse Client::reopenInstanceWithOptions(const ReopenInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReopenInstance"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReopenInstanceResponse>();
}

/**
 * @summary Enables an ApsaraMQ for Kafka instance.
 *
 * @description You can call this operation only if your instance is in the Stopped state.
 *
 * @param request ReopenInstanceRequest
 * @return ReopenInstanceResponse
 */
ReopenInstanceResponse Client::reopenInstance(const ReopenInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return reopenInstanceWithOptions(request, runtime);
}

/**
 * @summary Deploys an ApsaraMQ for Kafka instance. You must purchase and deploy an ApsaraMQ for Kafka instance before you can use the instance to send and receive messages.
 *
 * @description >  You can call this operation up to twice per second.
 *
 * @param request StartInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartInstanceResponse
 */
StartInstanceResponse Client::startInstanceWithOptions(const StartInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfig()) {
    query["Config"] = request.config();
  }

  if (!!request.hasCrossZone()) {
    query["CrossZone"] = request.crossZone();
  }

  if (!!request.hasDeployModule()) {
    query["DeployModule"] = request.deployModule();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasIsEipInner()) {
    query["IsEipInner"] = request.isEipInner();
  }

  if (!!request.hasIsForceSelectedZones()) {
    query["IsForceSelectedZones"] = request.isForceSelectedZones();
  }

  if (!!request.hasIsSetUserAndPassword()) {
    query["IsSetUserAndPassword"] = request.isSetUserAndPassword();
  }

  if (!!request.hasKMSKeyId()) {
    query["KMSKeyId"] = request.KMSKeyId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasNotifier()) {
    query["Notifier"] = request.notifier();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.password();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSecurityGroup()) {
    query["SecurityGroup"] = request.securityGroup();
  }

  if (!!request.hasSelectedZones()) {
    query["SelectedZones"] = request.selectedZones();
  }

  if (!!request.hasServiceVersion()) {
    query["ServiceVersion"] = request.serviceVersion();
  }

  if (!!request.hasUserPhoneNum()) {
    query["UserPhoneNum"] = request.userPhoneNum();
  }

  if (!!request.hasUsername()) {
    query["Username"] = request.username();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.vSwitchId();
  }

  if (!!request.hasVSwitchIds()) {
    query["VSwitchIds"] = request.vSwitchIds();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartInstance"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartInstanceResponse>();
}

/**
 * @summary Deploys an ApsaraMQ for Kafka instance. You must purchase and deploy an ApsaraMQ for Kafka instance before you can use the instance to send and receive messages.
 *
 * @description >  You can call this operation up to twice per second.
 *
 * @param request StartInstanceRequest
 * @return StartInstanceResponse
 */
StartInstanceResponse Client::startInstance(const StartInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startInstanceWithOptions(request, runtime);
}

/**
 * @summary Stops an ApsaraMQ for Kafka instance.
 *
 * @description You cannot stop a subscription ApsaraMQ for Kafka instance. If you want to stop a subscription ApsaraMQ for Kafka instance, submit a ticket.
 *
 * @param request StopInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopInstanceResponse
 */
StopInstanceResponse Client::stopInstanceWithOptions(const StopInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopInstance"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopInstanceResponse>();
}

/**
 * @summary Stops an ApsaraMQ for Kafka instance.
 *
 * @description You cannot stop a subscription ApsaraMQ for Kafka instance. If you want to stop a subscription ApsaraMQ for Kafka instance, submit a ticket.
 *
 * @param request StopInstanceRequest
 * @return StopInstanceResponse
 */
StopInstanceResponse Client::stopInstance(const StopInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopInstanceWithOptions(request, runtime);
}

/**
 * @summary Attaches a tag to a resource.
 *
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TagResources"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TagResourcesResponse>();
}

/**
 * @summary Attaches a tag to a resource.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Detaches tags from a specified resource.
 *
 * @param request UntagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResourcesWithOptions(const UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAll()) {
    query["All"] = request.all();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTagKey()) {
    query["TagKey"] = request.tagKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UntagResources"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UntagResourcesResponse>();
}

/**
 * @summary Detaches tags from a specified resource.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @summary Updates the IP address whitelist of an ApsaraMQ for Kafka instance. Only IP addresses and ports that are configured in the IP address whitelist of an instance can access the instance.
 *
 * @param request UpdateAllowedIpRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAllowedIpResponse
 */
UpdateAllowedIpResponse Client::updateAllowedIpWithOptions(const UpdateAllowedIpRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAllowedListIp()) {
    query["AllowedListIp"] = request.allowedListIp();
  }

  if (!!request.hasAllowedListType()) {
    query["AllowedListType"] = request.allowedListType();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPortRange()) {
    query["PortRange"] = request.portRange();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasUpdateType()) {
    query["UpdateType"] = request.updateType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAllowedIp"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAllowedIpResponse>();
}

/**
 * @summary Updates the IP address whitelist of an ApsaraMQ for Kafka instance. Only IP addresses and ports that are configured in the IP address whitelist of an instance can access the instance.
 *
 * @param request UpdateAllowedIpRequest
 * @return UpdateAllowedIpResponse
 */
UpdateAllowedIpResponse Client::updateAllowedIp(const UpdateAllowedIpRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAllowedIpWithOptions(request, runtime);
}

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
UpdateConsumerOffsetResponse Client::updateConsumerOffsetWithOptions(const UpdateConsumerOffsetRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateConsumerOffsetShrinkRequest request = UpdateConsumerOffsetShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasOffsets()) {
    request.setOffsetsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.offsets(), "Offsets", "json"));
  }

  json query = {};
  if (!!request.hasConsumerId()) {
    query["ConsumerId"] = request.consumerId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOffsetsShrink()) {
    query["Offsets"] = request.offsetsShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResetType()) {
    query["ResetType"] = request.resetType();
  }

  if (!!request.hasTime()) {
    query["Time"] = request.time();
  }

  if (!!request.hasTopic()) {
    query["Topic"] = request.topic();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateConsumerOffset"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateConsumerOffsetResponse>();
}

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
UpdateConsumerOffsetResponse Client::updateConsumerOffset(const UpdateConsumerOffsetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateConsumerOffsetWithOptions(request, runtime);
}

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
UpdateInstanceConfigResponse Client::updateInstanceConfigWithOptions(const UpdateInstanceConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfig()) {
    query["Config"] = request.config();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateInstanceConfig"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateInstanceConfigResponse>();
}

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
UpdateInstanceConfigResponse Client::updateInstanceConfig(const UpdateInstanceConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateInstanceConfigWithOptions(request, runtime);
}

/**
 * @summary Modifies the configurations of a topic. After you create a topic, you can modify the message retention period and maximum message size of the topic.
 *
 * @param request UpdateTopicConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTopicConfigResponse
 */
UpdateTopicConfigResponse Client::updateTopicConfigWithOptions(const UpdateTopicConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfig()) {
    query["Config"] = request.config();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTopic()) {
    query["Topic"] = request.topic();
  }

  if (!!request.hasValue()) {
    query["Value"] = request.value();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateTopicConfig"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTopicConfigResponse>();
}

/**
 * @summary Modifies the configurations of a topic. After you create a topic, you can modify the message retention period and maximum message size of the topic.
 *
 * @param request UpdateTopicConfigRequest
 * @return UpdateTopicConfigResponse
 */
UpdateTopicConfigResponse Client::updateTopicConfig(const UpdateTopicConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTopicConfigWithOptions(request, runtime);
}

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
UpgradeInstanceVersionResponse Client::upgradeInstanceVersionWithOptions(const UpgradeInstanceVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTargetVersion()) {
    query["TargetVersion"] = request.targetVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradeInstanceVersion"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradeInstanceVersionResponse>();
}

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
UpgradeInstanceVersionResponse Client::upgradeInstanceVersion(const UpgradeInstanceVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradeInstanceVersionWithOptions(request, runtime);
}

/**
 * @summary Upgrades a pay-as-you-go ApsaraMQ for Kafka instance.
 *
 * @description Before you call this operation, make sure that you understand the billing method and pricing of pay-as-you-go Message Queue for Apache Kafka instances. For more information, see [Billing](https://help.aliyun.com/document_detail/84737.html).
 *
 * @param tmpReq UpgradePostPayOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradePostPayOrderResponse
 */
UpgradePostPayOrderResponse Client::upgradePostPayOrderWithOptions(const UpgradePostPayOrderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpgradePostPayOrderShrinkRequest request = UpgradePostPayOrderShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasServerlessConfig()) {
    request.setServerlessConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.serverlessConfig(), "ServerlessConfig", "json"));
  }

  json query = {};
  if (!!request.hasDiskSize()) {
    query["DiskSize"] = request.diskSize();
  }

  if (!!request.hasEipMax()) {
    query["EipMax"] = request.eipMax();
  }

  if (!!request.hasEipModel()) {
    query["EipModel"] = request.eipModel();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasIoMax()) {
    query["IoMax"] = request.ioMax();
  }

  if (!!request.hasIoMaxSpec()) {
    query["IoMaxSpec"] = request.ioMaxSpec();
  }

  if (!!request.hasPartitionNum()) {
    query["PartitionNum"] = request.partitionNum();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServerlessConfigShrink()) {
    query["ServerlessConfig"] = request.serverlessConfigShrink();
  }

  if (!!request.hasSpecType()) {
    query["SpecType"] = request.specType();
  }

  if (!!request.hasTopicQuota()) {
    query["TopicQuota"] = request.topicQuota();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradePostPayOrder"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradePostPayOrderResponse>();
}

/**
 * @summary Upgrades a pay-as-you-go ApsaraMQ for Kafka instance.
 *
 * @description Before you call this operation, make sure that you understand the billing method and pricing of pay-as-you-go Message Queue for Apache Kafka instances. For more information, see [Billing](https://help.aliyun.com/document_detail/84737.html).
 *
 * @param request UpgradePostPayOrderRequest
 * @return UpgradePostPayOrderResponse
 */
UpgradePostPayOrderResponse Client::upgradePostPayOrder(const UpgradePostPayOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradePostPayOrderWithOptions(request, runtime);
}

/**
 * @summary Upgrades a Message Queue for Apache Kafka instance that uses the subscription billing method.
 *
 * @description Before you call this operation, make sure that you understand the billing method and pricing of subscription Message Queue for Apache Kafka instances. For more information, see [Billing overview](https://help.aliyun.com/document_detail/84737.html).
 *
 * @param tmpReq UpgradePrePayOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradePrePayOrderResponse
 */
UpgradePrePayOrderResponse Client::upgradePrePayOrderWithOptions(const UpgradePrePayOrderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpgradePrePayOrderShrinkRequest request = UpgradePrePayOrderShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasConfluentConfig()) {
    request.setConfluentConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.confluentConfig(), "ConfluentConfig", "json"));
  }

  json query = {};
  if (!!request.hasConfluentConfigShrink()) {
    query["ConfluentConfig"] = request.confluentConfigShrink();
  }

  if (!!request.hasDiskSize()) {
    query["DiskSize"] = request.diskSize();
  }

  if (!!request.hasEipMax()) {
    query["EipMax"] = request.eipMax();
  }

  if (!!request.hasEipModel()) {
    query["EipModel"] = request.eipModel();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasIoMax()) {
    query["IoMax"] = request.ioMax();
  }

  if (!!request.hasIoMaxSpec()) {
    query["IoMaxSpec"] = request.ioMaxSpec();
  }

  if (!!request.hasPaidType()) {
    query["PaidType"] = request.paidType();
  }

  if (!!request.hasPartitionNum()) {
    query["PartitionNum"] = request.partitionNum();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSpecType()) {
    query["SpecType"] = request.specType();
  }

  if (!!request.hasTopicQuota()) {
    query["TopicQuota"] = request.topicQuota();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradePrePayOrder"},
    {"version" , "2019-09-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradePrePayOrderResponse>();
}

/**
 * @summary Upgrades a Message Queue for Apache Kafka instance that uses the subscription billing method.
 *
 * @description Before you call this operation, make sure that you understand the billing method and pricing of subscription Message Queue for Apache Kafka instances. For more information, see [Billing overview](https://help.aliyun.com/document_detail/84737.html).
 *
 * @param request UpgradePrePayOrderRequest
 * @return UpgradePrePayOrderResponse
 */
UpgradePrePayOrderResponse Client::upgradePrePayOrder(const UpgradePrePayOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradePrePayOrderWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Alikafka20190916