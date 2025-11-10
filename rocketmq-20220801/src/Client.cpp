#include <darabonba/Core.hpp>
#include <alibabacloud/RocketMQ20220801.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/encode/Encoder.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::RocketMQ20220801::Models;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{

AlibabaCloud::RocketMQ20220801::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("rocketmq", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Add Disaster Recovery Plan Entry
 *
 * @param request AddDisasterRecoveryItemRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddDisasterRecoveryItemResponse
 */
AddDisasterRecoveryItemResponse Client::addDisasterRecoveryItemWithOptions(const string &planId, const AddDisasterRecoveryItemRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTopics()) {
    body["topics"] = request.topics();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddDisasterRecoveryItem"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/disaster_recovery/" , Darabonba::Encode::Encoder::percentEncode(planId) , "/items")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddDisasterRecoveryItemResponse>();
}

/**
 * @summary Add Disaster Recovery Plan Entry
 *
 * @param request AddDisasterRecoveryItemRequest
 * @return AddDisasterRecoveryItemResponse
 */
AddDisasterRecoveryItemResponse Client::addDisasterRecoveryItem(const string &planId, const AddDisasterRecoveryItemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return addDisasterRecoveryItemWithOptions(planId, request, headers, runtime);
}

/**
 * @summary Changes the resource group to which a ApsaraMQ for RocketMQ instance belongs.
 *
 * @param request ChangeResourceGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroupWithOptions(const ChangeResourceGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["regionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["resourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceId()) {
    query["resourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["resourceType"] = request.resourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChangeResourceGroup"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/resourceGroup/change")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeResourceGroupResponse>();
}

/**
 * @summary Changes the resource group to which a ApsaraMQ for RocketMQ instance belongs.
 *
 * @param request ChangeResourceGroupRequest
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroup(const ChangeResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return changeResourceGroupWithOptions(request, headers, runtime);
}

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
CreateConsumerGroupResponse Client::createConsumerGroupWithOptions(const string &instanceId, const string &consumerGroupId, const CreateConsumerGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConsumeRetryPolicy()) {
    body["consumeRetryPolicy"] = request.consumeRetryPolicy();
  }

  if (!!request.hasDeliveryOrderType()) {
    body["deliveryOrderType"] = request.deliveryOrderType();
  }

  if (!!request.hasMaxReceiveTps()) {
    body["maxReceiveTps"] = request.maxReceiveTps();
  }

  if (!!request.hasMessageModel()) {
    body["messageModel"] = request.messageModel();
  }

  if (!!request.hasRemark()) {
    body["remark"] = request.remark();
  }

  if (!!request.hasTopicName()) {
    body["topicName"] = request.topicName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateConsumerGroup"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/consumerGroups/" , Darabonba::Encode::Encoder::percentEncode(consumerGroupId))},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateConsumerGroupResponse>();
}

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
CreateConsumerGroupResponse Client::createConsumerGroup(const string &instanceId, const string &consumerGroupId, const CreateConsumerGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createConsumerGroupWithOptions(instanceId, consumerGroupId, request, headers, runtime);
}

/**
 * @summary Create Disaster Recovery Plan
 *
 * @param request CreateDisasterRecoveryPlanRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDisasterRecoveryPlanResponse
 */
CreateDisasterRecoveryPlanResponse Client::createDisasterRecoveryPlanWithOptions(const CreateDisasterRecoveryPlanRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAutoSyncCheckpoint()) {
    body["autoSyncCheckpoint"] = request.autoSyncCheckpoint();
  }

  if (!!request.hasInstances()) {
    body["instances"] = request.instances();
  }

  if (!!request.hasPlanDesc()) {
    body["planDesc"] = request.planDesc();
  }

  if (!!request.hasPlanName()) {
    body["planName"] = request.planName();
  }

  if (!!request.hasPlanType()) {
    body["planType"] = request.planType();
  }

  if (!!request.hasSyncCheckpointEnabled()) {
    body["syncCheckpointEnabled"] = request.syncCheckpointEnabled();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateDisasterRecoveryPlan"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/disaster_recovery")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDisasterRecoveryPlanResponse>();
}

/**
 * @summary Create Disaster Recovery Plan
 *
 * @param request CreateDisasterRecoveryPlanRequest
 * @return CreateDisasterRecoveryPlanResponse
 */
CreateDisasterRecoveryPlanResponse Client::createDisasterRecoveryPlan(const CreateDisasterRecoveryPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createDisasterRecoveryPlanWithOptions(request, headers, runtime);
}

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
CreateInstanceResponse Client::createInstanceWithOptions(const CreateInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  json body = {};
  if (!!request.hasAutoRenew()) {
    body["autoRenew"] = request.autoRenew();
  }

  if (!!request.hasAutoRenewPeriod()) {
    body["autoRenewPeriod"] = request.autoRenewPeriod();
  }

  if (!!request.hasCommodityCode()) {
    body["commodityCode"] = request.commodityCode();
  }

  if (!!request.hasInstanceName()) {
    body["instanceName"] = request.instanceName();
  }

  if (!!request.hasNetworkInfo()) {
    body["networkInfo"] = request.networkInfo();
  }

  if (!!request.hasPaymentType()) {
    body["paymentType"] = request.paymentType();
  }

  if (!!request.hasPeriod()) {
    body["period"] = request.period();
  }

  if (!!request.hasPeriodUnit()) {
    body["periodUnit"] = request.periodUnit();
  }

  if (!!request.hasProductInfo()) {
    body["productInfo"] = request.productInfo();
  }

  if (!!request.hasRemark()) {
    body["remark"] = request.remark();
  }

  if (!!request.hasResourceGroupId()) {
    body["resourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSeriesCode()) {
    body["seriesCode"] = request.seriesCode();
  }

  if (!!request.hasServiceCode()) {
    body["serviceCode"] = request.serviceCode();
  }

  if (!!request.hasSubSeriesCode()) {
    body["subSeriesCode"] = request.subSeriesCode();
  }

  if (!!request.hasTags()) {
    body["tags"] = request.tags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateInstance"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/instances")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateInstanceResponse>();
}

/**
 * @summary Creates an ApsaraMQ for RocketMQ 5.x instance.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 *
 * @param request CreateInstanceRequest
 * @return CreateInstanceResponse
 */
CreateInstanceResponse Client::createInstance(const CreateInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createInstanceWithOptions(request, headers, runtime);
}

/**
 * @summary Creates an account that is used to access an instance.
 *
 * @param request CreateInstanceAccountRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateInstanceAccountResponse
 */
CreateInstanceAccountResponse Client::createInstanceAccountWithOptions(const string &instanceId, const CreateInstanceAccountRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPassword()) {
    body["password"] = request.password();
  }

  if (!!request.hasUsername()) {
    body["username"] = request.username();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateInstanceAccount"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/accounts")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateInstanceAccountResponse>();
}

/**
 * @summary Creates an account that is used to access an instance.
 *
 * @param request CreateInstanceAccountRequest
 * @return CreateInstanceAccountResponse
 */
CreateInstanceAccountResponse Client::createInstanceAccount(const string &instanceId, const CreateInstanceAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createInstanceAccountWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary Creates an access control list (ACL) in a specific instance.
 *
 * @param request CreateInstanceAclRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateInstanceAclResponse
 */
CreateInstanceAclResponse Client::createInstanceAclWithOptions(const string &instanceId, const string &username, const CreateInstanceAclRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasActions()) {
    body["actions"] = request.actions();
  }

  if (!!request.hasDecision()) {
    body["decision"] = request.decision();
  }

  if (!!request.hasIpWhitelists()) {
    body["ipWhitelists"] = request.ipWhitelists();
  }

  if (!!request.hasResourceName()) {
    body["resourceName"] = request.resourceName();
  }

  if (!!request.hasResourceType()) {
    body["resourceType"] = request.resourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateInstanceAcl"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/acl/account/" , Darabonba::Encode::Encoder::percentEncode(username))},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateInstanceAclResponse>();
}

/**
 * @summary Creates an access control list (ACL) in a specific instance.
 *
 * @param request CreateInstanceAclRequest
 * @return CreateInstanceAclResponse
 */
CreateInstanceAclResponse Client::createInstanceAcl(const string &instanceId, const string &username, const CreateInstanceAclRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createInstanceAclWithOptions(instanceId, username, request, headers, runtime);
}

/**
 * @summary Creates an IP address whitelist.
 *
 * @param request CreateInstanceIpWhitelistRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateInstanceIpWhitelistResponse
 */
CreateInstanceIpWhitelistResponse Client::createInstanceIpWhitelistWithOptions(const string &instanceId, const CreateInstanceIpWhitelistRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasIpWhitelists()) {
    body["ipWhitelists"] = request.ipWhitelists();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateInstanceIpWhitelist"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/ip/whitelist")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateInstanceIpWhitelistResponse>();
}

/**
 * @summary Creates an IP address whitelist.
 *
 * @param request CreateInstanceIpWhitelistRequest
 * @return CreateInstanceIpWhitelistResponse
 */
CreateInstanceIpWhitelistResponse Client::createInstanceIpWhitelist(const string &instanceId, const CreateInstanceIpWhitelistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createInstanceIpWhitelistWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary Create Topic
 *
 * @param request CreateTopicRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTopicResponse
 */
CreateTopicResponse Client::createTopicWithOptions(const string &instanceId, const string &topicName, const CreateTopicRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLiteTopicExpiration()) {
    body["liteTopicExpiration"] = request.liteTopicExpiration();
  }

  if (!!request.hasMaxSendTps()) {
    body["maxSendTps"] = request.maxSendTps();
  }

  if (!!request.hasMessageType()) {
    body["messageType"] = request.messageType();
  }

  if (!!request.hasRemark()) {
    body["remark"] = request.remark();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateTopic"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/topics/" , Darabonba::Encode::Encoder::percentEncode(topicName))},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTopicResponse>();
}

/**
 * @summary Create Topic
 *
 * @param request CreateTopicRequest
 * @return CreateTopicResponse
 */
CreateTopicResponse Client::createTopic(const string &instanceId, const string &topicName, const CreateTopicRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createTopicWithOptions(instanceId, topicName, request, headers, runtime);
}

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
DeleteConsumerGroupResponse Client::deleteConsumerGroupWithOptions(const string &instanceId, const string &consumerGroupId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteConsumerGroup"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/consumerGroups/" , Darabonba::Encode::Encoder::percentEncode(consumerGroupId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteConsumerGroupResponse>();
}

/**
 * @summary Deletes a specified consumer group.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * After you delete a consumer group, the consumer client associated with the consumer group cannot consume messages. Exercise caution when you call this operation.
 *
 * @return DeleteConsumerGroupResponse
 */
DeleteConsumerGroupResponse Client::deleteConsumerGroup(const string &instanceId, const string &consumerGroupId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteConsumerGroupWithOptions(instanceId, consumerGroupId, headers, runtime);
}

/**
 * @summary Deletes the subscriptions of a consumer group.
 *
 * @param request DeleteConsumerGroupSubscriptionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteConsumerGroupSubscriptionResponse
 */
DeleteConsumerGroupSubscriptionResponse Client::deleteConsumerGroupSubscriptionWithOptions(const string &instanceId, const string &consumerGroupId, const DeleteConsumerGroupSubscriptionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilterExpression()) {
    query["filterExpression"] = request.filterExpression();
  }

  if (!!request.hasFilterType()) {
    query["filterType"] = request.filterType();
  }

  if (!!request.hasTopicName()) {
    query["topicName"] = request.topicName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteConsumerGroupSubscription"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/consumerGroups/" , Darabonba::Encode::Encoder::percentEncode(consumerGroupId) , "/subscriptions")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteConsumerGroupSubscriptionResponse>();
}

/**
 * @summary Deletes the subscriptions of a consumer group.
 *
 * @param request DeleteConsumerGroupSubscriptionRequest
 * @return DeleteConsumerGroupSubscriptionResponse
 */
DeleteConsumerGroupSubscriptionResponse Client::deleteConsumerGroupSubscription(const string &instanceId, const string &consumerGroupId, const DeleteConsumerGroupSubscriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteConsumerGroupSubscriptionWithOptions(instanceId, consumerGroupId, request, headers, runtime);
}

/**
 * @summary 删除容灾计划条目
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDisasterRecoveryItemResponse
 */
DeleteDisasterRecoveryItemResponse Client::deleteDisasterRecoveryItemWithOptions(const string &planId, const string &itemId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDisasterRecoveryItem"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/disaster_recovery/" , Darabonba::Encode::Encoder::percentEncode(planId) , "/items/" , Darabonba::Encode::Encoder::percentEncode(itemId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDisasterRecoveryItemResponse>();
}

/**
 * @summary 删除容灾计划条目
 *
 * @return DeleteDisasterRecoveryItemResponse
 */
DeleteDisasterRecoveryItemResponse Client::deleteDisasterRecoveryItem(const string &planId, const string &itemId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteDisasterRecoveryItemWithOptions(planId, itemId, headers, runtime);
}

/**
 * @summary Deletes a global message backup plan.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDisasterRecoveryPlanResponse
 */
DeleteDisasterRecoveryPlanResponse Client::deleteDisasterRecoveryPlanWithOptions(const string &planId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDisasterRecoveryPlan"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/disaster_recovery/" , Darabonba::Encode::Encoder::percentEncode(planId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDisasterRecoveryPlanResponse>();
}

/**
 * @summary Deletes a global message backup plan.
 *
 * @return DeleteDisasterRecoveryPlanResponse
 */
DeleteDisasterRecoveryPlanResponse Client::deleteDisasterRecoveryPlan(const string &planId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteDisasterRecoveryPlanWithOptions(planId, headers, runtime);
}

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
DeleteInstanceResponse Client::deleteInstanceWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteInstance"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteInstanceResponse>();
}

/**
 * @summary Deletes a ApsaraMQ for RocketMQ instance.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * *   After an instance is deleted, the instance cannot be restored. Exercise caution when you call this operation.
 * *   This operation is used to delete a pay-as-you-go instance. A subscription instance is automatically released after it expires. You do not need to manually delete a subscription instance.
 *
 * @return DeleteInstanceResponse
 */
DeleteInstanceResponse Client::deleteInstance(const string &instanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteInstanceWithOptions(instanceId, headers, runtime);
}

/**
 * @summary Delete access control ACL user
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteInstanceAccountResponse
 */
DeleteInstanceAccountResponse Client::deleteInstanceAccountWithOptions(const string &instanceId, const string &username, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteInstanceAccount"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/accounts/" , Darabonba::Encode::Encoder::percentEncode(username))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteInstanceAccountResponse>();
}

/**
 * @summary Delete access control ACL user
 *
 * @return DeleteInstanceAccountResponse
 */
DeleteInstanceAccountResponse Client::deleteInstanceAccount(const string &instanceId, const string &username) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteInstanceAccountWithOptions(instanceId, username, headers, runtime);
}

/**
 * @summary Deletes the permissions of a specific account of an instance.
 *
 * @param request DeleteInstanceAclRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteInstanceAclResponse
 */
DeleteInstanceAclResponse Client::deleteInstanceAclWithOptions(const string &instanceId, const string &username, const DeleteInstanceAclRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceName()) {
    query["resourceName"] = request.resourceName();
  }

  if (!!request.hasResourceType()) {
    query["resourceType"] = request.resourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteInstanceAcl"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/acl/account/" , Darabonba::Encode::Encoder::percentEncode(username))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteInstanceAclResponse>();
}

/**
 * @summary Deletes the permissions of a specific account of an instance.
 *
 * @param request DeleteInstanceAclRequest
 * @return DeleteInstanceAclResponse
 */
DeleteInstanceAclResponse Client::deleteInstanceAcl(const string &instanceId, const string &username, const DeleteInstanceAclRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteInstanceAclWithOptions(instanceId, username, request, headers, runtime);
}

/**
 * @summary Deletes a specific IP address whitelist from an instance.
 *
 * @param tmpReq DeleteInstanceIpWhitelistRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteInstanceIpWhitelistResponse
 */
DeleteInstanceIpWhitelistResponse Client::deleteInstanceIpWhitelistWithOptions(const string &instanceId, const DeleteInstanceIpWhitelistRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteInstanceIpWhitelistShrinkRequest request = DeleteInstanceIpWhitelistShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasIpWhitelists()) {
    request.setIpWhitelistsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.ipWhitelists(), "ipWhitelists", "simple"));
  }

  json query = {};
  if (!!request.hasIpWhitelist()) {
    query["ipWhitelist"] = request.ipWhitelist();
  }

  if (!!request.hasIpWhitelistsShrink()) {
    query["ipWhitelists"] = request.ipWhitelistsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteInstanceIpWhitelist"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/ip/whitelist")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteInstanceIpWhitelistResponse>();
}

/**
 * @summary Deletes a specific IP address whitelist from an instance.
 *
 * @param request DeleteInstanceIpWhitelistRequest
 * @return DeleteInstanceIpWhitelistResponse
 */
DeleteInstanceIpWhitelistResponse Client::deleteInstanceIpWhitelist(const string &instanceId, const DeleteInstanceIpWhitelistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteInstanceIpWhitelistWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary Deletes a specified topic.
 *
 * @description If you delete the topic, the publishing and subscription relationships that are established based on the topic are cleared. Exercise caution when you call this operation.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTopicResponse
 */
DeleteTopicResponse Client::deleteTopicWithOptions(const string &instanceId, const string &topicName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTopic"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/topics/" , Darabonba::Encode::Encoder::percentEncode(topicName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTopicResponse>();
}

/**
 * @summary Deletes a specified topic.
 *
 * @description If you delete the topic, the publishing and subscription relationships that are established based on the topic are cleared. Exercise caution when you call this operation.
 *
 * @return DeleteTopicResponse
 */
DeleteTopicResponse Client::deleteTopic(const string &instanceId, const string &topicName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteTopicWithOptions(instanceId, topicName, headers, runtime);
}

/**
 * @summary 执行迁移操作
 *
 * @param request ExecuteMigrationOperationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteMigrationOperationResponse
 */
ExecuteMigrationOperationResponse Client::executeMigrationOperationWithOptions(const string &migrationId, const string &stageType, const string &operationId, const ExecuteMigrationOperationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["instanceId"] = request.instanceId();
  }

  json body = {};
  if (!!request.hasOperationParam()) {
    body["operationParam"] = request.operationParam();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExecuteMigrationOperation"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/migrations/" , Darabonba::Encode::Encoder::percentEncode(migrationId) , "/stages/" , Darabonba::Encode::Encoder::percentEncode(stageType) , "/operations/" , Darabonba::Encode::Encoder::percentEncode(operationId) , "/execute")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteMigrationOperationResponse>();
}

/**
 * @summary 执行迁移操作
 *
 * @param request ExecuteMigrationOperationRequest
 * @return ExecuteMigrationOperationResponse
 */
ExecuteMigrationOperationResponse Client::executeMigrationOperation(const string &migrationId, const string &stageType, const string &operationId, const ExecuteMigrationOperationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return executeMigrationOperationWithOptions(migrationId, stageType, operationId, request, headers, runtime);
}

/**
 * @summary 完成当前迁移阶段
 *
 * @param request FinishMigrationStageRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return FinishMigrationStageResponse
 */
FinishMigrationStageResponse Client::finishMigrationStageWithOptions(const string &migrationId, const string &stageType, const FinishMigrationStageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["instanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FinishMigrationStage"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/migrations/" , Darabonba::Encode::Encoder::percentEncode(migrationId) , "/stages/" , Darabonba::Encode::Encoder::percentEncode(stageType) , "/finish")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FinishMigrationStageResponse>();
}

/**
 * @summary 完成当前迁移阶段
 *
 * @param request FinishMigrationStageRequest
 * @return FinishMigrationStageResponse
 */
FinishMigrationStageResponse Client::finishMigrationStage(const string &migrationId, const string &stageType, const FinishMigrationStageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return finishMigrationStageWithOptions(migrationId, stageType, request, headers, runtime);
}

/**
 * @summary 查询topic可重置时间范围
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetConsumeTimespanResponse
 */
GetConsumeTimespanResponse Client::getConsumeTimespanWithOptions(const string &instanceId, const string &consumerGroupId, const string &topicName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetConsumeTimespan"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/consumerGroups/" , Darabonba::Encode::Encoder::percentEncode(consumerGroupId) , "/consumeTimespan/" , Darabonba::Encode::Encoder::percentEncode(topicName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetConsumeTimespanResponse>();
}

/**
 * @summary 查询topic可重置时间范围
 *
 * @return GetConsumeTimespanResponse
 */
GetConsumeTimespanResponse Client::getConsumeTimespan(const string &instanceId, const string &consumerGroupId, const string &topicName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getConsumeTimespanWithOptions(instanceId, consumerGroupId, topicName, headers, runtime);
}

/**
 * @summary Queries the details of a specified consumer group.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetConsumerGroupResponse
 */
GetConsumerGroupResponse Client::getConsumerGroupWithOptions(const string &instanceId, const string &consumerGroupId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetConsumerGroup"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/consumerGroups/" , Darabonba::Encode::Encoder::percentEncode(consumerGroupId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetConsumerGroupResponse>();
}

/**
 * @summary Queries the details of a specified consumer group.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 *
 * @return GetConsumerGroupResponse
 */
GetConsumerGroupResponse Client::getConsumerGroup(const string &instanceId, const string &consumerGroupId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getConsumerGroupWithOptions(instanceId, consumerGroupId, headers, runtime);
}

/**
 * @summary Query Consumer Group Backlog Information
 *
 * @param request GetConsumerGroupLagRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetConsumerGroupLagResponse
 */
GetConsumerGroupLagResponse Client::getConsumerGroupLagWithOptions(const string &instanceId, const string &consumerGroupId, const GetConsumerGroupLagRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLiteTopicName()) {
    query["liteTopicName"] = request.liteTopicName();
  }

  if (!!request.hasTopicName()) {
    query["topicName"] = request.topicName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetConsumerGroupLag"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/consumerGroups/" , Darabonba::Encode::Encoder::percentEncode(consumerGroupId) , "/lag")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetConsumerGroupLagResponse>();
}

/**
 * @summary Query Consumer Group Backlog Information
 *
 * @param request GetConsumerGroupLagRequest
 * @return GetConsumerGroupLagResponse
 */
GetConsumerGroupLagResponse Client::getConsumerGroupLag(const string &instanceId, const string &consumerGroupId, const GetConsumerGroupLagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getConsumerGroupLagWithOptions(instanceId, consumerGroupId, request, headers, runtime);
}

/**
 * @summary Queries the subscriptions of a consumer group.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetConsumerGroupSubscriptionResponse
 */
GetConsumerGroupSubscriptionResponse Client::getConsumerGroupSubscriptionWithOptions(const string &instanceId, const string &consumerGroupId, const string &topicName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetConsumerGroupSubscription"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/consumerGroups/" , Darabonba::Encode::Encoder::percentEncode(consumerGroupId) , "/subscriptions/" , Darabonba::Encode::Encoder::percentEncode(topicName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetConsumerGroupSubscriptionResponse>();
}

/**
 * @summary Queries the subscriptions of a consumer group.
 *
 * @return GetConsumerGroupSubscriptionResponse
 */
GetConsumerGroupSubscriptionResponse Client::getConsumerGroupSubscription(const string &instanceId, const string &consumerGroupId, const string &topicName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getConsumerGroupSubscriptionWithOptions(instanceId, consumerGroupId, topicName, headers, runtime);
}

/**
 * @summary Queries the stack information about a consumer.
 *
 * @param request GetConsumerStackRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetConsumerStackResponse
 */
GetConsumerStackResponse Client::getConsumerStackWithOptions(const string &instanceId, const string &consumerGroupId, const GetConsumerStackRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientId()) {
    query["clientId"] = request.clientId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetConsumerStack"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/consumerGroups/" , Darabonba::Encode::Encoder::percentEncode(consumerGroupId) , "/stack")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetConsumerStackResponse>();
}

/**
 * @summary Queries the stack information about a consumer.
 *
 * @param request GetConsumerStackRequest
 * @return GetConsumerStackResponse
 */
GetConsumerStackResponse Client::getConsumerStack(const string &instanceId, const string &consumerGroupId, const GetConsumerStackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getConsumerStackWithOptions(instanceId, consumerGroupId, request, headers, runtime);
}

/**
 * @summary 查询容灾计划条目详情
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDisasterRecoveryItemResponse
 */
GetDisasterRecoveryItemResponse Client::getDisasterRecoveryItemWithOptions(const string &planId, const string &itemId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDisasterRecoveryItem"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/disaster_recovery/" , Darabonba::Encode::Encoder::percentEncode(planId) , "/items/" , Darabonba::Encode::Encoder::percentEncode(itemId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDisasterRecoveryItemResponse>();
}

/**
 * @summary 查询容灾计划条目详情
 *
 * @return GetDisasterRecoveryItemResponse
 */
GetDisasterRecoveryItemResponse Client::getDisasterRecoveryItem(const string &planId, const string &itemId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getDisasterRecoveryItemWithOptions(planId, itemId, headers, runtime);
}

/**
 * @summary Queries the details of a Global Replicator task.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDisasterRecoveryPlanResponse
 */
GetDisasterRecoveryPlanResponse Client::getDisasterRecoveryPlanWithOptions(const string &planId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDisasterRecoveryPlan"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/disaster_recovery/" , Darabonba::Encode::Encoder::percentEncode(planId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDisasterRecoveryPlanResponse>();
}

/**
 * @summary Queries the details of a Global Replicator task.
 *
 * @return GetDisasterRecoveryPlanResponse
 */
GetDisasterRecoveryPlanResponse Client::getDisasterRecoveryPlan(const string &planId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getDisasterRecoveryPlanWithOptions(planId, headers, runtime);
}

/**
 * @summary Queries the detailed information about an instance.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceResponse
 */
GetInstanceResponse Client::getInstanceWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstance"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceResponse>();
}

/**
 * @summary Queries the detailed information about an instance.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 *
 * @return GetInstanceResponse
 */
GetInstanceResponse Client::getInstance(const string &instanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getInstanceWithOptions(instanceId, headers, runtime);
}

/**
 * @summary Obtains the account used to access a specific instance.
 *
 * @param request GetInstanceAccountRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceAccountResponse
 */
GetInstanceAccountResponse Client::getInstanceAccountWithOptions(const string &instanceId, const GetInstanceAccountRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUsername()) {
    query["username"] = request.username();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstanceAccount"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/account")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceAccountResponse>();
}

/**
 * @summary Obtains the account used to access a specific instance.
 *
 * @param request GetInstanceAccountRequest
 * @return GetInstanceAccountResponse
 */
GetInstanceAccountResponse Client::getInstanceAccount(const string &instanceId, const GetInstanceAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getInstanceAccountWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary Queries information about the access control list (ACL) of an instance.
 *
 * @param request GetInstanceAclRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceAclResponse
 */
GetInstanceAclResponse Client::getInstanceAclWithOptions(const string &instanceId, const string &username, const GetInstanceAclRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceName()) {
    query["resourceName"] = request.resourceName();
  }

  if (!!request.hasResourceType()) {
    query["resourceType"] = request.resourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstanceAcl"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/acl/account/" , Darabonba::Encode::Encoder::percentEncode(username))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceAclResponse>();
}

/**
 * @summary Queries information about the access control list (ACL) of an instance.
 *
 * @param request GetInstanceAclRequest
 * @return GetInstanceAclResponse
 */
GetInstanceAclResponse Client::getInstanceAcl(const string &instanceId, const string &username, const GetInstanceAclRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getInstanceAclWithOptions(instanceId, username, request, headers, runtime);
}

/**
 * @summary Queries the information about the IP address whitelist of an instance.
 *
 * @param tmpReq GetInstanceIpWhitelistRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceIpWhitelistResponse
 */
GetInstanceIpWhitelistResponse Client::getInstanceIpWhitelistWithOptions(const string &instanceId, const GetInstanceIpWhitelistRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetInstanceIpWhitelistShrinkRequest request = GetInstanceIpWhitelistShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasIpWhitelists()) {
    request.setIpWhitelistsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.ipWhitelists(), "ipWhitelists", "simple"));
  }

  json query = {};
  if (!!request.hasIpWhitelistsShrink()) {
    query["ipWhitelists"] = request.ipWhitelistsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstanceIpWhitelist"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/ip/whitelists")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceIpWhitelistResponse>();
}

/**
 * @summary Queries the information about the IP address whitelist of an instance.
 *
 * @param request GetInstanceIpWhitelistRequest
 * @return GetInstanceIpWhitelistResponse
 */
GetInstanceIpWhitelistResponse Client::getInstanceIpWhitelist(const string &instanceId, const GetInstanceIpWhitelistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getInstanceIpWhitelistWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary Obtains the details of a specific message.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMessageDetailResponse
 */
GetMessageDetailResponse Client::getMessageDetailWithOptions(const string &instanceId, const string &topicName, const string &messageId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMessageDetail"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/topics/" , Darabonba::Encode::Encoder::percentEncode(topicName) , "/messages/" , Darabonba::Encode::Encoder::percentEncode(messageId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMessageDetailResponse>();
}

/**
 * @summary Obtains the details of a specific message.
 *
 * @return GetMessageDetailResponse
 */
GetMessageDetailResponse Client::getMessageDetail(const string &instanceId, const string &topicName, const string &messageId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getMessageDetailWithOptions(instanceId, topicName, messageId, headers, runtime);
}

/**
 * @summary Query Topic Details
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTopicResponse
 */
GetTopicResponse Client::getTopicWithOptions(const string &instanceId, const string &topicName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTopic"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/topics/" , Darabonba::Encode::Encoder::percentEncode(topicName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTopicResponse>();
}

/**
 * @summary Query Topic Details
 *
 * @return GetTopicResponse
 */
GetTopicResponse Client::getTopic(const string &instanceId, const string &topicName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTopicWithOptions(instanceId, topicName, headers, runtime);
}

/**
 * @summary Queries the trace of a specific message in a specific topic.
 *
 * @param request GetTraceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTraceResponse
 */
GetTraceResponse Client::getTraceWithOptions(const string &instanceId, const string &topicName, const string &messageId, const GetTraceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["endTime"] = request.endTime();
  }

  if (!!request.hasStartTime()) {
    query["startTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTrace"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/topics/" , Darabonba::Encode::Encoder::percentEncode(topicName) , "/traces/" , Darabonba::Encode::Encoder::percentEncode(messageId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTraceResponse>();
}

/**
 * @summary Queries the trace of a specific message in a specific topic.
 *
 * @param request GetTraceRequest
 * @return GetTraceResponse
 */
GetTraceResponse Client::getTrace(const string &instanceId, const string &topicName, const string &messageId, const GetTraceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTraceWithOptions(instanceId, topicName, messageId, request, headers, runtime);
}

/**
 * @summary 查询支持的可用区
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAvailableZonesResponse
 */
ListAvailableZonesResponse Client::listAvailableZonesWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAvailableZones"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/zones")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAvailableZonesResponse>();
}

/**
 * @summary 查询支持的可用区
 *
 * @return ListAvailableZonesResponse
 */
ListAvailableZonesResponse Client::listAvailableZones() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAvailableZonesWithOptions(headers, runtime);
}

/**
 * @summary 查询消费者客户端连接信息
 *
 * @param request ListConsumerConnectionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListConsumerConnectionsResponse
 */
ListConsumerConnectionsResponse Client::listConsumerConnectionsWithOptions(const string &instanceId, const string &consumerGroupId, const ListConsumerConnectionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLiteTopicName()) {
    query["liteTopicName"] = request.liteTopicName();
  }

  if (!!request.hasTopicName()) {
    query["topicName"] = request.topicName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListConsumerConnections"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/consumerGroups/" , Darabonba::Encode::Encoder::percentEncode(consumerGroupId) , "/connections")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListConsumerConnectionsResponse>();
}

/**
 * @summary 查询消费者客户端连接信息
 *
 * @param request ListConsumerConnectionsRequest
 * @return ListConsumerConnectionsResponse
 */
ListConsumerConnectionsResponse Client::listConsumerConnections(const string &instanceId, const string &consumerGroupId, const ListConsumerConnectionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listConsumerConnectionsWithOptions(instanceId, consumerGroupId, request, headers, runtime);
}

/**
 * @summary Queries the subscriptions of a specific consumer group.
 *
 * @param request ListConsumerGroupSubscriptionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListConsumerGroupSubscriptionsResponse
 */
ListConsumerGroupSubscriptionsResponse Client::listConsumerGroupSubscriptionsWithOptions(const string &instanceId, const string &consumerGroupId, const ListConsumerGroupSubscriptionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTopicName()) {
    query["topicName"] = request.topicName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListConsumerGroupSubscriptions"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/consumerGroups/" , Darabonba::Encode::Encoder::percentEncode(consumerGroupId) , "/subscriptions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListConsumerGroupSubscriptionsResponse>();
}

/**
 * @summary Queries the subscriptions of a specific consumer group.
 *
 * @param request ListConsumerGroupSubscriptionsRequest
 * @return ListConsumerGroupSubscriptionsResponse
 */
ListConsumerGroupSubscriptionsResponse Client::listConsumerGroupSubscriptions(const string &instanceId, const string &consumerGroupId, const ListConsumerGroupSubscriptionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listConsumerGroupSubscriptionsWithOptions(instanceId, consumerGroupId, request, headers, runtime);
}

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
ListConsumerGroupsResponse Client::listConsumerGroupsWithOptions(const string &instanceId, const ListConsumerGroupsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilter()) {
    query["filter"] = request.filter();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListConsumerGroups"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/consumerGroups")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListConsumerGroupsResponse>();
}

/**
 * @summary List Consumer Groups
 *
 * @description >Notice: The OpenAPI provided by Alibaba Cloud is a management API used for managing and querying related resources of Alibaba Cloud services. It is recommended to integrate it only in the management chain. Do not rely on OpenAPI implementation in the core data chain for message sending and receiving, as this may lead to risks in the chain.
 *
 * @param request ListConsumerGroupsRequest
 * @return ListConsumerGroupsResponse
 */
ListConsumerGroupsResponse Client::listConsumerGroups(const string &instanceId, const ListConsumerGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listConsumerGroupsWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary Query disaster recovery plan consumption progress information
 *
 * @param request ListDisasterRecoveryCheckpointsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDisasterRecoveryCheckpointsResponse
 */
ListDisasterRecoveryCheckpointsResponse Client::listDisasterRecoveryCheckpointsWithOptions(const string &planId, const string &itemId, const ListDisasterRecoveryCheckpointsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilter()) {
    query["filter"] = request.filter();
  }

  if (!!request.hasInstanceId()) {
    query["instanceId"] = request.instanceId();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDisasterRecoveryCheckpoints"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/disaster_recovery/" , Darabonba::Encode::Encoder::percentEncode(planId) , "/items/" , Darabonba::Encode::Encoder::percentEncode(itemId) , "/checkpoints")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDisasterRecoveryCheckpointsResponse>();
}

/**
 * @summary Query disaster recovery plan consumption progress information
 *
 * @param request ListDisasterRecoveryCheckpointsRequest
 * @return ListDisasterRecoveryCheckpointsResponse
 */
ListDisasterRecoveryCheckpointsResponse Client::listDisasterRecoveryCheckpoints(const string &planId, const string &itemId, const ListDisasterRecoveryCheckpointsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listDisasterRecoveryCheckpointsWithOptions(planId, itemId, request, headers, runtime);
}

/**
 * @summary Queries the Global Replicator tasks of an instance.
 *
 * @param request ListDisasterRecoveryItemsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDisasterRecoveryItemsResponse
 */
ListDisasterRecoveryItemsResponse Client::listDisasterRecoveryItemsWithOptions(const string &planId, const ListDisasterRecoveryItemsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilter()) {
    query["filter"] = request.filter();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasTopicName()) {
    query["topicName"] = request.topicName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDisasterRecoveryItems"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/disaster_recovery/" , Darabonba::Encode::Encoder::percentEncode(planId) , "/items")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDisasterRecoveryItemsResponse>();
}

/**
 * @summary Queries the Global Replicator tasks of an instance.
 *
 * @param request ListDisasterRecoveryItemsRequest
 * @return ListDisasterRecoveryItemsResponse
 */
ListDisasterRecoveryItemsResponse Client::listDisasterRecoveryItems(const string &planId, const ListDisasterRecoveryItemsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listDisasterRecoveryItemsWithOptions(planId, request, headers, runtime);
}

/**
 * @summary Queries Global Replicator tasks.
 *
 * @param request ListDisasterRecoveryPlansRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDisasterRecoveryPlansResponse
 */
ListDisasterRecoveryPlansResponse Client::listDisasterRecoveryPlansWithOptions(const ListDisasterRecoveryPlansRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilter()) {
    query["filter"] = request.filter();
  }

  if (!!request.hasInstanceId()) {
    query["instanceId"] = request.instanceId();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDisasterRecoveryPlans"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/disaster_recovery")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDisasterRecoveryPlansResponse>();
}

/**
 * @summary Queries Global Replicator tasks.
 *
 * @param request ListDisasterRecoveryPlansRequest
 * @return ListDisasterRecoveryPlansResponse
 */
ListDisasterRecoveryPlansResponse Client::listDisasterRecoveryPlans(const ListDisasterRecoveryPlansRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listDisasterRecoveryPlansWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the accounts that are used to access a specific instance.
 *
 * @param request ListInstanceAccountRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstanceAccountResponse
 */
ListInstanceAccountResponse Client::listInstanceAccountWithOptions(const string &instanceId, const ListInstanceAccountRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountStatus()) {
    query["accountStatus"] = request.accountStatus();
  }

  if (!!request.hasAccountType()) {
    query["accountType"] = request.accountType();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasUsername()) {
    query["username"] = request.username();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstanceAccount"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/accounts")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstanceAccountResponse>();
}

/**
 * @summary Queries the accounts that are used to access a specific instance.
 *
 * @param request ListInstanceAccountRequest
 * @return ListInstanceAccountResponse
 */
ListInstanceAccountResponse Client::listInstanceAccount(const string &instanceId, const ListInstanceAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listInstanceAccountWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary Queries the access control lists (ACLs) of an instance.
 *
 * @param request ListInstanceAclRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstanceAclResponse
 */
ListInstanceAclResponse Client::listInstanceAclWithOptions(const string &instanceId, const ListInstanceAclRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilter()) {
    query["filter"] = request.filter();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstanceAcl"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/acl")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstanceAclResponse>();
}

/**
 * @summary Queries the access control lists (ACLs) of an instance.
 *
 * @param request ListInstanceAclRequest
 * @return ListInstanceAclResponse
 */
ListInstanceAclResponse Client::listInstanceAcl(const string &instanceId, const ListInstanceAclRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listInstanceAclWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary Queries the IP address whitelists of an instance.
 *
 * @param request ListInstanceIpWhitelistRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstanceIpWhitelistResponse
 */
ListInstanceIpWhitelistResponse Client::listInstanceIpWhitelistWithOptions(const string &instanceId, const ListInstanceIpWhitelistRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIpWhitelist()) {
    query["ipWhitelist"] = request.ipWhitelist();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstanceIpWhitelist"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/ip/whitelist")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstanceIpWhitelistResponse>();
}

/**
 * @summary Queries the IP address whitelists of an instance.
 *
 * @param request ListInstanceIpWhitelistRequest
 * @return ListInstanceIpWhitelistResponse
 */
ListInstanceIpWhitelistResponse Client::listInstanceIpWhitelist(const string &instanceId, const ListInstanceIpWhitelistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listInstanceIpWhitelistWithOptions(instanceId, request, headers, runtime);
}

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
ListInstancesResponse Client::listInstancesWithOptions(const ListInstancesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListInstancesShrinkRequest request = ListInstancesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSeriesCodes()) {
    request.setSeriesCodesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.seriesCodes(), "seriesCodes", "simple"));
  }

  json query = {};
  if (!!request.hasFilter()) {
    query["filter"] = request.filter();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["resourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSeriesCodesShrink()) {
    query["seriesCodes"] = request.seriesCodesShrink();
  }

  if (!!request.hasStorageSecretKey()) {
    query["storageSecretKey"] = request.storageSecretKey();
  }

  if (!!request.hasTags()) {
    query["tags"] = request.tags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstances"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/instances")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstancesResponse>();
}

/**
 * @summary Queries all ApsaraMQ for RocketMQ instances in a specific region.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 *
 * @param request ListInstancesRequest
 * @return ListInstancesResponse
 */
ListInstancesResponse Client::listInstances(const ListInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listInstancesWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the list of messages.
 *
 * @param request ListMessagesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMessagesResponse
 */
ListMessagesResponse Client::listMessagesWithOptions(const string &instanceId, const string &topicName, const ListMessagesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["endTime"] = request.endTime();
  }

  if (!!request.hasLiteTopicName()) {
    query["liteTopicName"] = request.liteTopicName();
  }

  if (!!request.hasMessageId()) {
    query["messageId"] = request.messageId();
  }

  if (!!request.hasMessageKey()) {
    query["messageKey"] = request.messageKey();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasScrollId()) {
    query["scrollId"] = request.scrollId();
  }

  if (!!request.hasStartTime()) {
    query["startTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMessages"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/topics/" , Darabonba::Encode::Encoder::percentEncode(topicName) , "/messages")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMessagesResponse>();
}

/**
 * @summary Queries the list of messages.
 *
 * @param request ListMessagesRequest
 * @return ListMessagesResponse
 */
ListMessagesResponse Client::listMessages(const string &instanceId, const string &topicName, const ListMessagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listMessagesWithOptions(instanceId, topicName, request, headers, runtime);
}

/**
 * @summary Query Monitoring Items List
 *
 * @param request ListMetricMetaRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMetricMetaResponse
 */
ListMetricMetaResponse Client::listMetricMetaWithOptions(const ListMetricMetaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMetricMeta"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/monitor/metrics/meta")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMetricMetaResponse>();
}

/**
 * @summary Query Monitoring Items List
 *
 * @param request ListMetricMetaRequest
 * @return ListMetricMetaResponse
 */
ListMetricMetaResponse Client::listMetricMeta(const ListMetricMetaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listMetricMetaWithOptions(request, headers, runtime);
}

/**
 * @summary 查询迁移操作列表
 *
 * @param request ListMigrationOperationsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMigrationOperationsResponse
 */
ListMigrationOperationsResponse Client::listMigrationOperationsWithOptions(const string &migrationId, const string &stageType, const ListMigrationOperationsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilter()) {
    query["filter"] = request.filter();
  }

  if (!!request.hasInstanceId()) {
    query["instanceId"] = request.instanceId();
  }

  if (!!request.hasOperationType()) {
    query["operationType"] = request.operationType();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMigrationOperations"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/migrations/" , Darabonba::Encode::Encoder::percentEncode(migrationId) , "/stages/" , Darabonba::Encode::Encoder::percentEncode(stageType) , "/operations")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMigrationOperationsResponse>();
}

/**
 * @summary 查询迁移操作列表
 *
 * @param request ListMigrationOperationsRequest
 * @return ListMigrationOperationsResponse
 */
ListMigrationOperationsResponse Client::listMigrationOperations(const string &migrationId, const string &stageType, const ListMigrationOperationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listMigrationOperationsWithOptions(migrationId, stageType, request, headers, runtime);
}

/**
 * @summary 查询迁移列表
 *
 * @param request ListMigrationsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMigrationsResponse
 */
ListMigrationsResponse Client::listMigrationsWithOptions(const ListMigrationsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilter()) {
    query["filter"] = request.filter();
  }

  if (!!request.hasMigrationType()) {
    query["migrationType"] = request.migrationType();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["resourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMigrations"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/migrations")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMigrationsResponse>();
}

/**
 * @summary 查询迁移列表
 *
 * @param request ListMigrationsRequest
 * @return ListMigrationsResponse
 */
ListMigrationsResponse Client::listMigrations(const ListMigrationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listMigrationsWithOptions(request, headers, runtime);
}

/**
 * @summary Queries regions in which ApsaraMQ for RocketMQ is available.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRegionsResponse
 */
ListRegionsResponse Client::listRegionsWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRegions"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/regions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRegionsResponse>();
}

/**
 * @summary Queries regions in which ApsaraMQ for RocketMQ is available.
 *
 * @return ListRegionsResponse
 */
ListRegionsResponse Client::listRegions() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listRegionsWithOptions(headers, runtime);
}

/**
 * @summary Query visible resource tag relationships
 *
 * @param request ListTagResourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNextToken()) {
    query["nextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["regionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["resourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceId()) {
    query["resourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["resourceType"] = request.resourceType();
  }

  if (!!request.hasTag()) {
    query["tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagResources"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/resourceTag/list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagResourcesResponse>();
}

/**
 * @summary Query visible resource tag relationships
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTagResourcesWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the subscriptions of a specific topic.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTopicSubscriptionsResponse
 */
ListTopicSubscriptionsResponse Client::listTopicSubscriptionsWithOptions(const string &instanceId, const string &topicName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTopicSubscriptions"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/topics/" , Darabonba::Encode::Encoder::percentEncode(topicName) , "/subscriptions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTopicSubscriptionsResponse>();
}

/**
 * @summary Queries the subscriptions of a specific topic.
 *
 * @return ListTopicSubscriptionsResponse
 */
ListTopicSubscriptionsResponse Client::listTopicSubscriptions(const string &instanceId, const string &topicName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTopicSubscriptionsWithOptions(instanceId, topicName, headers, runtime);
}

/**
 * @summary Query Topic List
 *
 * @param tmpReq ListTopicsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTopicsResponse
 */
ListTopicsResponse Client::listTopicsWithOptions(const string &instanceId, const ListTopicsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListTopicsShrinkRequest request = ListTopicsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasMessageTypes()) {
    request.setMessageTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.messageTypes(), "messageTypes", "simple"));
  }

  json query = {};
  if (!!request.hasFilter()) {
    query["filter"] = request.filter();
  }

  if (!!request.hasMessageTypesShrink()) {
    query["messageTypes"] = request.messageTypesShrink();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTopics"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/topics")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTopicsResponse>();
}

/**
 * @summary Query Topic List
 *
 * @param request ListTopicsRequest
 * @return ListTopicsResponse
 */
ListTopicsResponse Client::listTopics(const string &instanceId, const ListTopicsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTopicsWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary Queries the message traces of a specific topic.
 *
 * @param request ListTracesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTracesResponse
 */
ListTracesResponse Client::listTracesWithOptions(const string &instanceId, const string &topicName, const ListTracesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["endTime"] = request.endTime();
  }

  if (!!request.hasLiteTopicName()) {
    query["liteTopicName"] = request.liteTopicName();
  }

  if (!!request.hasMessageId()) {
    query["messageId"] = request.messageId();
  }

  if (!!request.hasMessageKey()) {
    query["messageKey"] = request.messageKey();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasQueryType()) {
    query["queryType"] = request.queryType();
  }

  if (!!request.hasStartTime()) {
    query["startTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTraces"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/topics/" , Darabonba::Encode::Encoder::percentEncode(topicName) , "/traces")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTracesResponse>();
}

/**
 * @summary Queries the message traces of a specific topic.
 *
 * @param request ListTracesRequest
 * @return ListTracesResponse
 */
ListTracesResponse Client::listTraces(const string &instanceId, const string &topicName, const ListTracesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTracesWithOptions(instanceId, topicName, request, headers, runtime);
}

/**
 * @summary Resets the consumer offset of a consumer group.
 *
 * @param request ResetConsumeOffsetRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetConsumeOffsetResponse
 */
ResetConsumeOffsetResponse Client::resetConsumeOffsetWithOptions(const string &instanceId, const string &consumerGroupId, const string &topicName, const ResetConsumeOffsetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasResetTime()) {
    body["resetTime"] = request.resetTime();
  }

  if (!!request.hasResetType()) {
    body["resetType"] = request.resetType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ResetConsumeOffset"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/consumerGroups/" , Darabonba::Encode::Encoder::percentEncode(consumerGroupId) , "/consumeOffsets/" , Darabonba::Encode::Encoder::percentEncode(topicName))},
    {"method" , "PATCH"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetConsumeOffsetResponse>();
}

/**
 * @summary Resets the consumer offset of a consumer group.
 *
 * @param request ResetConsumeOffsetRequest
 * @return ResetConsumeOffsetResponse
 */
ResetConsumeOffsetResponse Client::resetConsumeOffset(const string &instanceId, const string &consumerGroupId, const string &topicName, const ResetConsumeOffsetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return resetConsumeOffsetWithOptions(instanceId, consumerGroupId, topicName, request, headers, runtime);
}

/**
 * @summary Enable Disaster Recovery Plan Entry
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartDisasterRecoveryItemResponse
 */
StartDisasterRecoveryItemResponse Client::startDisasterRecoveryItemWithOptions(const string &planId, const string &itemId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartDisasterRecoveryItem"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/disaster_recovery/" , Darabonba::Encode::Encoder::percentEncode(planId) , "/items/" , Darabonba::Encode::Encoder::percentEncode(itemId) , "/start")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartDisasterRecoveryItemResponse>();
}

/**
 * @summary Enable Disaster Recovery Plan Entry
 *
 * @return StartDisasterRecoveryItemResponse
 */
StartDisasterRecoveryItemResponse Client::startDisasterRecoveryItem(const string &planId, const string &itemId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return startDisasterRecoveryItemWithOptions(planId, itemId, headers, runtime);
}

/**
 * @summary Deactivate Disaster Recovery Plan Entry
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopDisasterRecoveryItemResponse
 */
StopDisasterRecoveryItemResponse Client::stopDisasterRecoveryItemWithOptions(const string &planId, const string &itemId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopDisasterRecoveryItem"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/disaster_recovery/" , Darabonba::Encode::Encoder::percentEncode(planId) , "/items/" , Darabonba::Encode::Encoder::percentEncode(itemId) , "/stop")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopDisasterRecoveryItemResponse>();
}

/**
 * @summary Deactivate Disaster Recovery Plan Entry
 *
 * @return StopDisasterRecoveryItemResponse
 */
StopDisasterRecoveryItemResponse Client::stopDisasterRecoveryItem(const string &planId, const string &itemId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return stopDisasterRecoveryItemWithOptions(planId, itemId, headers, runtime);
}

/**
 * @summary Synchronize Disaster Recovery Plan Consumption Progress
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SyncDisasterRecoveryCheckpointResponse
 */
SyncDisasterRecoveryCheckpointResponse Client::syncDisasterRecoveryCheckpointWithOptions(const string &planId, const string &itemId, const string &checkpointId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SyncDisasterRecoveryCheckpoint"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/disaster_recovery/" , Darabonba::Encode::Encoder::percentEncode(planId) , "/items/" , Darabonba::Encode::Encoder::percentEncode(itemId) , "/checkpoints/" , Darabonba::Encode::Encoder::percentEncode(checkpointId))},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SyncDisasterRecoveryCheckpointResponse>();
}

/**
 * @summary Synchronize Disaster Recovery Plan Consumption Progress
 *
 * @return SyncDisasterRecoveryCheckpointResponse
 */
SyncDisasterRecoveryCheckpointResponse Client::syncDisasterRecoveryCheckpoint(const string &planId, const string &itemId, const string &checkpointId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return syncDisasterRecoveryCheckpointWithOptions(planId, itemId, checkpointId, headers, runtime);
}

/**
 * @summary Creates resource tags.
 *
 * @param request TagResourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["regionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    query["resourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["resourceType"] = request.resourceType();
  }

  if (!!request.hasTag()) {
    query["tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TagResources"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/resourceTag/create")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TagResourcesResponse>();
}

/**
 * @summary Creates resource tags.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return tagResourcesWithOptions(request, headers, runtime);
}

/**
 * @summary Removes tags from resources.
 *
 * @param request UntagResourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResourcesWithOptions(const UntagResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAll()) {
    query["all"] = request.all();
  }

  if (!!request.hasRegionId()) {
    query["regionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    query["resourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["resourceType"] = request.resourceType();
  }

  if (!!request.hasTagKey()) {
    query["tagKey"] = request.tagKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UntagResources"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/resourceTag/delete")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UntagResourcesResponse>();
}

/**
 * @summary Removes tags from resources.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return untagResourcesWithOptions(request, headers, runtime);
}

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
UpdateConsumerGroupResponse Client::updateConsumerGroupWithOptions(const string &instanceId, const string &consumerGroupId, const UpdateConsumerGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConsumeRetryPolicy()) {
    body["consumeRetryPolicy"] = request.consumeRetryPolicy();
  }

  if (!!request.hasDeliveryOrderType()) {
    body["deliveryOrderType"] = request.deliveryOrderType();
  }

  if (!!request.hasMaxReceiveTps()) {
    body["maxReceiveTps"] = request.maxReceiveTps();
  }

  if (!!request.hasRemark()) {
    body["remark"] = request.remark();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateConsumerGroup"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/consumerGroups/" , Darabonba::Encode::Encoder::percentEncode(consumerGroupId))},
    {"method" , "PATCH"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateConsumerGroupResponse>();
}

/**
 * @summary Update ConsumerGroup
 *
 * @description >Notice: The OpenAPI provided by Alibaba Cloud is a management API used for managing and querying related resources of Alibaba Cloud services. It is recommended to integrate it only in the management chain. It is strictly prohibited to rely on OpenAPI implementation in the core data chain of message sending and receiving, otherwise it may lead to risks in the chain.
 *
 * @param request UpdateConsumerGroupRequest
 * @return UpdateConsumerGroupResponse
 */
UpdateConsumerGroupResponse Client::updateConsumerGroup(const string &instanceId, const string &consumerGroupId, const UpdateConsumerGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateConsumerGroupWithOptions(instanceId, consumerGroupId, request, headers, runtime);
}

/**
 * @summary Updates a topic mapping in a global message backup plan.
 *
 * @param request UpdateDisasterRecoveryItemRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDisasterRecoveryItemResponse
 */
UpdateDisasterRecoveryItemResponse Client::updateDisasterRecoveryItemWithOptions(const string &planId, const string &itemId, const UpdateDisasterRecoveryItemRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTopics()) {
    body["topics"] = request.topics();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateDisasterRecoveryItem"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/disaster_recovery/" , Darabonba::Encode::Encoder::percentEncode(planId) , "/items/" , Darabonba::Encode::Encoder::percentEncode(itemId))},
    {"method" , "PATCH"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDisasterRecoveryItemResponse>();
}

/**
 * @summary Updates a topic mapping in a global message backup plan.
 *
 * @param request UpdateDisasterRecoveryItemRequest
 * @return UpdateDisasterRecoveryItemResponse
 */
UpdateDisasterRecoveryItemResponse Client::updateDisasterRecoveryItem(const string &planId, const string &itemId, const UpdateDisasterRecoveryItemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateDisasterRecoveryItemWithOptions(planId, itemId, request, headers, runtime);
}

/**
 * @summary Modifies a global message backup plan.
 *
 * @param request UpdateDisasterRecoveryPlanRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDisasterRecoveryPlanResponse
 */
UpdateDisasterRecoveryPlanResponse Client::updateDisasterRecoveryPlanWithOptions(const string &planId, const UpdateDisasterRecoveryPlanRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAutoSyncCheckpoint()) {
    body["autoSyncCheckpoint"] = request.autoSyncCheckpoint();
  }

  if (!!request.hasInstances()) {
    body["instances"] = request.instances();
  }

  if (!!request.hasPlanDesc()) {
    body["planDesc"] = request.planDesc();
  }

  if (!!request.hasPlanName()) {
    body["planName"] = request.planName();
  }

  if (!!request.hasPlanType()) {
    body["planType"] = request.planType();
  }

  if (!!request.hasSyncCheckpointEnabled()) {
    body["syncCheckpointEnabled"] = request.syncCheckpointEnabled();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateDisasterRecoveryPlan"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/disaster_recovery/" , Darabonba::Encode::Encoder::percentEncode(planId))},
    {"method" , "PATCH"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDisasterRecoveryPlanResponse>();
}

/**
 * @summary Modifies a global message backup plan.
 *
 * @param request UpdateDisasterRecoveryPlanRequest
 * @return UpdateDisasterRecoveryPlanResponse
 */
UpdateDisasterRecoveryPlanResponse Client::updateDisasterRecoveryPlan(const string &planId, const UpdateDisasterRecoveryPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateDisasterRecoveryPlanWithOptions(planId, request, headers, runtime);
}

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
UpdateInstanceResponse Client::updateInstanceWithOptions(const string &instanceId, const UpdateInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAclInfo()) {
    body["aclInfo"] = request.aclInfo();
  }

  if (!!request.hasInstanceName()) {
    body["instanceName"] = request.instanceName();
  }

  if (!!request.hasNetworkInfo()) {
    body["networkInfo"] = request.networkInfo();
  }

  if (!!request.hasProductInfo()) {
    body["productInfo"] = request.productInfo();
  }

  if (!!request.hasRemark()) {
    body["remark"] = request.remark();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateInstance"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId))},
    {"method" , "PATCH"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateInstanceResponse>();
}

/**
 * @summary Updates the basic information and specifications of an ApsaraMQ for RocketMQ instance.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 *
 * @param request UpdateInstanceRequest
 * @return UpdateInstanceResponse
 */
UpdateInstanceResponse Client::updateInstance(const string &instanceId, const UpdateInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateInstanceWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary Updates the information about a specific account in a specific instance.
 *
 * @param request UpdateInstanceAccountRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateInstanceAccountResponse
 */
UpdateInstanceAccountResponse Client::updateInstanceAccountWithOptions(const string &instanceId, const string &username, const UpdateInstanceAccountRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountStatus()) {
    query["accountStatus"] = request.accountStatus();
  }

  if (!!request.hasPassword()) {
    query["password"] = request.password();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateInstanceAccount"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/accounts/" , Darabonba::Encode::Encoder::percentEncode(username))},
    {"method" , "PATCH"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateInstanceAccountResponse>();
}

/**
 * @summary Updates the information about a specific account in a specific instance.
 *
 * @param request UpdateInstanceAccountRequest
 * @return UpdateInstanceAccountResponse
 */
UpdateInstanceAccountResponse Client::updateInstanceAccount(const string &instanceId, const string &username, const UpdateInstanceAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateInstanceAccountWithOptions(instanceId, username, request, headers, runtime);
}

/**
 * @summary Updates the permissions on the resources of a specific instance for a specific user.
 *
 * @param request UpdateInstanceAclRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateInstanceAclResponse
 */
UpdateInstanceAclResponse Client::updateInstanceAclWithOptions(const string &instanceId, const string &username, const UpdateInstanceAclRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasActions()) {
    body["actions"] = request.actions();
  }

  if (!!request.hasDecision()) {
    body["decision"] = request.decision();
  }

  if (!!request.hasIpWhitelists()) {
    body["ipWhitelists"] = request.ipWhitelists();
  }

  if (!!request.hasResourceName()) {
    body["resourceName"] = request.resourceName();
  }

  if (!!request.hasResourceType()) {
    body["resourceType"] = request.resourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateInstanceAcl"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/acl/account/" , Darabonba::Encode::Encoder::percentEncode(username))},
    {"method" , "PATCH"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateInstanceAclResponse>();
}

/**
 * @summary Updates the permissions on the resources of a specific instance for a specific user.
 *
 * @param request UpdateInstanceAclRequest
 * @return UpdateInstanceAclResponse
 */
UpdateInstanceAclResponse Client::updateInstanceAcl(const string &instanceId, const string &username, const UpdateInstanceAclRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateInstanceAclWithOptions(instanceId, username, request, headers, runtime);
}

/**
 * @summary Update Topic
 *
 * @param request UpdateTopicRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTopicResponse
 */
UpdateTopicResponse Client::updateTopicWithOptions(const string &instanceId, const string &topicName, const UpdateTopicRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLiteTopicExpiration()) {
    body["liteTopicExpiration"] = request.liteTopicExpiration();
  }

  if (!!request.hasMaxSendTps()) {
    body["maxSendTps"] = request.maxSendTps();
  }

  if (!!request.hasRemark()) {
    body["remark"] = request.remark();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateTopic"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/topics/" , Darabonba::Encode::Encoder::percentEncode(topicName))},
    {"method" , "PATCH"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTopicResponse>();
}

/**
 * @summary Update Topic
 *
 * @param request UpdateTopicRequest
 * @return UpdateTopicResponse
 */
UpdateTopicResponse Client::updateTopic(const string &instanceId, const string &topicName, const UpdateTopicRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateTopicWithOptions(instanceId, topicName, request, headers, runtime);
}

/**
 * @summary Verifies the consumption status of a message in a specific topic on a specific instance.
 *
 * @param request VerifyConsumeMessageRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return VerifyConsumeMessageResponse
 */
VerifyConsumeMessageResponse Client::verifyConsumeMessageWithOptions(const string &instanceId, const string &topicName, const string &messageId, const VerifyConsumeMessageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientId()) {
    query["clientId"] = request.clientId();
  }

  if (!!request.hasConsumerGroupId()) {
    query["consumerGroupId"] = request.consumerGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "VerifyConsumeMessage"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/topics/" , Darabonba::Encode::Encoder::percentEncode(topicName) , "/messages/" , Darabonba::Encode::Encoder::percentEncode(messageId) , "/action/verifyConsume")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<VerifyConsumeMessageResponse>();
}

/**
 * @summary Verifies the consumption status of a message in a specific topic on a specific instance.
 *
 * @param request VerifyConsumeMessageRequest
 * @return VerifyConsumeMessageResponse
 */
VerifyConsumeMessageResponse Client::verifyConsumeMessage(const string &instanceId, const string &topicName, const string &messageId, const VerifyConsumeMessageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return verifyConsumeMessageWithOptions(instanceId, topicName, messageId, request, headers, runtime);
}

/**
 * @summary Verifies the message sending feature of a specific topic on a specific instance.
 *
 * @param request VerifySendMessageRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return VerifySendMessageResponse
 */
VerifySendMessageResponse Client::verifySendMessageWithOptions(const string &instanceId, const string &topicName, const VerifySendMessageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLiteTopicName()) {
    body["liteTopicName"] = request.liteTopicName();
  }

  if (!!request.hasMessage()) {
    body["message"] = request.message();
  }

  if (!!request.hasMessageKey()) {
    body["messageKey"] = request.messageKey();
  }

  if (!!request.hasMessageTag()) {
    body["messageTag"] = request.messageTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "VerifySendMessage"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/topics/" , Darabonba::Encode::Encoder::percentEncode(topicName) , "/messages")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<VerifySendMessageResponse>();
}

/**
 * @summary Verifies the message sending feature of a specific topic on a specific instance.
 *
 * @param request VerifySendMessageRequest
 * @return VerifySendMessageResponse
 */
VerifySendMessageResponse Client::verifySendMessage(const string &instanceId, const string &topicName, const VerifySendMessageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return verifySendMessageWithOptions(instanceId, topicName, request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace RocketMQ20220801