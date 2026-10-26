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
using namespace AlibabaCloud::OpenApi::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::RocketMQ20220801::Models;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{

AlibabaCloud::RocketMQ20220801::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-guangzhou" , "rocketmq.cn-guangzhou.aliyuncs.com	"}
  }).get<map<string, string>>();
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
 * @summary Adds a backup mapping task.
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
    body["topics"] = request.getTopics();
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
 * @summary Adds a backup mapping task.
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
 * @summary Modifies the resource group of an instance.
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
    query["regionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["resourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceId()) {
    query["resourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["resourceType"] = request.getResourceType();
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
 * @summary Modifies the resource group of an instance.
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
 * @summary 创建 Agent 诊断会话
 *
 * @param request CreateAgentConversationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAgentConversationResponse
 */
CreateAgentConversationResponse Client::createAgentConversationWithOptions(const CreateAgentConversationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["clientToken"] = request.getClientToken();
  }

  if (!!request.hasInitialMessage()) {
    body["initialMessage"] = request.getInitialMessage();
  }

  if (!!request.hasTitle()) {
    body["title"] = request.getTitle();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateAgentConversation"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/conversations")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAgentConversationResponse>();
}

/**
 * @summary 创建 Agent 诊断会话
 *
 * @param request CreateAgentConversationRequest
 * @return CreateAgentConversationResponse
 */
CreateAgentConversationResponse Client::createAgentConversation(const CreateAgentConversationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createAgentConversationWithOptions(request, headers, runtime);
}

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
CreateConsumerGroupResponse Client::createConsumerGroupWithOptions(const string &instanceId, const string &consumerGroupId, const CreateConsumerGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConsumeRetryPolicy()) {
    body["consumeRetryPolicy"] = request.getConsumeRetryPolicy();
  }

  if (!!request.hasDeliveryOrderType()) {
    body["deliveryOrderType"] = request.getDeliveryOrderType();
  }

  if (!!request.hasExclusive()) {
    body["exclusive"] = request.getExclusive();
  }

  if (!!request.hasMaxReceiveTps()) {
    body["maxReceiveTps"] = request.getMaxReceiveTps();
  }

  if (!!request.hasMessageModel()) {
    body["messageModel"] = request.getMessageModel();
  }

  if (!!request.hasRemark()) {
    body["remark"] = request.getRemark();
  }

  if (!!request.hasTopicName()) {
    body["topicName"] = request.getTopicName();
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
 * @summary Creates a consumer group (ConsumerGroup) for ApsaraMQ for RocketMQ. A consumer group is a load balancing group in ApsaraMQ for RocketMQ that contains multiple consumers with consistent consumption behavior. Consumers must subscribe to related topics by specifying a consumer group to implement message subscription.
 *
 * @description >Notice: The OpenAPI operations provided by Alibaba Cloud are management APIs used to manage and query Alibaba Cloud service resources. Use these operations only in the management link. Do not use them in the core data link for sending and receiving messages, as this may introduce risks to the link.
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
 * @summary Creates a backup plan.
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
    body["autoSyncCheckpoint"] = request.getAutoSyncCheckpoint();
  }

  if (!!request.hasInstances()) {
    body["instances"] = request.getInstances();
  }

  if (!!request.hasPlanDesc()) {
    body["planDesc"] = request.getPlanDesc();
  }

  if (!!request.hasPlanName()) {
    body["planName"] = request.getPlanName();
  }

  if (!!request.hasPlanType()) {
    body["planType"] = request.getPlanType();
  }

  if (!!request.hasSyncCheckpointEnabled()) {
    body["syncCheckpointEnabled"] = request.getSyncCheckpointEnabled();
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
 * @summary Creates a backup plan.
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
 * @summary Creates an ApsaraMQ for RocketMQ 5.x series instance.
 *
 * @description >Notice: The OpenAPI provided by Alibaba Cloud is a management and control API used to manage and query resources of Alibaba Cloud services. Integrate it only into the management and control link. Do not rely on OpenAPI in the core data link for message sending and receiving. Otherwise, risks may occur on the link.
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
    query["clientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasAclInfo()) {
    body["aclInfo"] = request.getAclInfo();
  }

  if (!!request.hasAutoRenew()) {
    body["autoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasAutoRenewPeriod()) {
    body["autoRenewPeriod"] = request.getAutoRenewPeriod();
  }

  if (!!request.hasCommodityCode()) {
    body["commodityCode"] = request.getCommodityCode();
  }

  if (!!request.hasInstanceName()) {
    body["instanceName"] = request.getInstanceName();
  }

  if (!!request.hasNetworkInfo()) {
    body["networkInfo"] = request.getNetworkInfo();
  }

  if (!!request.hasPaymentType()) {
    body["paymentType"] = request.getPaymentType();
  }

  if (!!request.hasPeriod()) {
    body["period"] = request.getPeriod();
  }

  if (!!request.hasPeriodUnit()) {
    body["periodUnit"] = request.getPeriodUnit();
  }

  if (!!request.hasProductInfo()) {
    body["productInfo"] = request.getProductInfo();
  }

  if (!!request.hasRemark()) {
    body["remark"] = request.getRemark();
  }

  if (!!request.hasResourceGroupId()) {
    body["resourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSeriesCode()) {
    body["seriesCode"] = request.getSeriesCode();
  }

  if (!!request.hasServiceCode()) {
    body["serviceCode"] = request.getServiceCode();
  }

  if (!!request.hasSubSeriesCode()) {
    body["subSeriesCode"] = request.getSubSeriesCode();
  }

  if (!!request.hasTags()) {
    body["tags"] = request.getTags();
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
 * @summary Creates an ApsaraMQ for RocketMQ 5.x series instance.
 *
 * @description >Notice: The OpenAPI provided by Alibaba Cloud is a management and control API used to manage and query resources of Alibaba Cloud services. Integrate it only into the management and control link. Do not rely on OpenAPI in the core data link for message sending and receiving. Otherwise, risks may occur on the link.
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
 * @summary Creates an access account for an instance.
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
    body["password"] = request.getPassword();
  }

  if (!!request.hasRemark()) {
    body["remark"] = request.getRemark();
  }

  if (!!request.hasUsername()) {
    body["username"] = request.getUsername();
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
 * @summary Creates an access account for an instance.
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
 * @summary Creates access permissions for a specified instance.
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
    body["actions"] = request.getActions();
  }

  if (!!request.hasDecision()) {
    body["decision"] = request.getDecision();
  }

  if (!!request.hasIpWhitelists()) {
    body["ipWhitelists"] = request.getIpWhitelists();
  }

  if (!!request.hasResourceName()) {
    body["resourceName"] = request.getResourceName();
  }

  if (!!request.hasResourceType()) {
    body["resourceType"] = request.getResourceType();
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
 * @summary Creates access permissions for a specified instance.
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
 * @summary 创建实例巡检配置
 *
 * @param request CreateInstanceInspectionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateInstanceInspectionResponse
 */
CreateInstanceInspectionResponse Client::createInstanceInspectionWithOptions(const string &instanceId, const CreateInstanceInspectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["clientToken"] = request.getClientToken();
  }

  if (!!request.hasItems()) {
    body["items"] = request.getItems();
  }

  if (!!request.hasResourceScope()) {
    body["resourceScope"] = request.getResourceScope();
  }

  if (!!request.hasSchedule()) {
    body["schedule"] = request.getSchedule();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateInstanceInspection"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/monitoring/instance-inspections/" , Darabonba::Encode::Encoder::percentEncode(instanceId))},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateInstanceInspectionResponse>();
}

/**
 * @summary 创建实例巡检配置
 *
 * @param request CreateInstanceInspectionRequest
 * @return CreateInstanceInspectionResponse
 */
CreateInstanceInspectionResponse Client::createInstanceInspection(const string &instanceId, const CreateInstanceInspectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createInstanceInspectionWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary Creates an IP address whitelist for access control.
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
    body["ipWhitelists"] = request.getIpWhitelists();
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
 * @summary Creates an IP address whitelist for access control.
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
 * @summary Creates a topic for ApsaraMQ for RocketMQ. A topic is the top-level container for message transmission and storage in ApsaraMQ for RocketMQ and is used to identify messages of the same business logic. In the messaging model, producers send messages to topics, and consumers consume messages by subscribing to specified topics.
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
    body["liteTopicExpiration"] = request.getLiteTopicExpiration();
  }

  if (!!request.hasMaxSendTps()) {
    body["maxSendTps"] = request.getMaxSendTps();
  }

  if (!!request.hasMessageType()) {
    body["messageType"] = request.getMessageType();
  }

  if (!!request.hasRemark()) {
    body["remark"] = request.getRemark();
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
 * @summary Creates a topic for ApsaraMQ for RocketMQ. A topic is the top-level container for message transmission and storage in ApsaraMQ for RocketMQ and is used to identify messages of the same business logic. In the messaging model, producers send messages to topics, and consumers consume messages by subscribing to specified topics.
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
 * @summary 删除 Agent 诊断会话
 *
 * @param request DeleteAgentConversationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAgentConversationResponse
 */
DeleteAgentConversationResponse Client::deleteAgentConversationWithOptions(const string &conversationId, const DeleteAgentConversationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAgentConversation"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/conversations/" , Darabonba::Encode::Encoder::percentEncode(conversationId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAgentConversationResponse>();
}

/**
 * @summary 删除 Agent 诊断会话
 *
 * @param request DeleteAgentConversationRequest
 * @return DeleteAgentConversationResponse
 */
DeleteAgentConversationResponse Client::deleteAgentConversation(const string &conversationId, const DeleteAgentConversationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteAgentConversationWithOptions(conversationId, request, headers, runtime);
}

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
 * @description >Notice: OpenAPI operations provided by Alibaba Cloud are management API operations used to manage and query resources of Alibaba Cloud services. Integrate these operations only into management workflows. Do not rely on OpenAPI operations in the core data link for message sending and receiving. Otherwise, risks may occur in the workflows.
 * After you delete a specified consumer group, consumer clients with the identity of the consumer group cannot consume messages. Invoke this operation with caution.
 *
 * @return DeleteConsumerGroupResponse
 */
DeleteConsumerGroupResponse Client::deleteConsumerGroup(const string &instanceId, const string &consumerGroupId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteConsumerGroupWithOptions(instanceId, consumerGroupId, headers, runtime);
}

/**
 * @summary Deletes the subscription of a consumer group.
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
    query["filterExpression"] = request.getFilterExpression();
  }

  if (!!request.hasFilterType()) {
    query["filterType"] = request.getFilterType();
  }

  if (!!request.hasTopicName()) {
    query["topicName"] = request.getTopicName();
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
 * @summary Deletes the subscription of a consumer group.
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
 * @summary Deletes a backup mapping task.
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
 * @summary Deletes a backup mapping task.
 *
 * @return DeleteDisasterRecoveryItemResponse
 */
DeleteDisasterRecoveryItemResponse Client::deleteDisasterRecoveryItem(const string &planId, const string &itemId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteDisasterRecoveryItemWithOptions(planId, itemId, headers, runtime);
}

/**
 * @summary Deletes a backup plan.
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
 * @summary Deletes a backup plan.
 *
 * @return DeleteDisasterRecoveryPlanResponse
 */
DeleteDisasterRecoveryPlanResponse Client::deleteDisasterRecoveryPlan(const string &planId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteDisasterRecoveryPlanWithOptions(planId, headers, runtime);
}

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
 * @summary Releases an instance.
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
 * @summary Deletes the access account information for a specified instance.
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
 * @summary Deletes the access account information for a specified instance.
 *
 * @return DeleteInstanceAccountResponse
 */
DeleteInstanceAccountResponse Client::deleteInstanceAccount(const string &instanceId, const string &username) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteInstanceAccountWithOptions(instanceId, username, headers, runtime);
}

/**
 * @summary Deletes the permissions of a specified account for a specified resource in a specified instance.
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
    query["resourceName"] = request.getResourceName();
  }

  if (!!request.hasResourceType()) {
    query["resourceType"] = request.getResourceType();
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
 * @summary Deletes the permissions of a specified account for a specified resource in a specified instance.
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
 * @summary 关闭实例巡检配置
 *
 * @param request DeleteInstanceInspectionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteInstanceInspectionResponse
 */
DeleteInstanceInspectionResponse Client::deleteInstanceInspectionWithOptions(const string &instanceId, const DeleteInstanceInspectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteInstanceInspection"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/monitoring/instance-inspections/" , Darabonba::Encode::Encoder::percentEncode(instanceId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteInstanceInspectionResponse>();
}

/**
 * @summary 关闭实例巡检配置
 *
 * @param request DeleteInstanceInspectionRequest
 * @return DeleteInstanceInspectionResponse
 */
DeleteInstanceInspectionResponse Client::deleteInstanceInspection(const string &instanceId, const DeleteInstanceInspectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteInstanceInspectionWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary Deletes a specified global IP whitelist under a specified instance.
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
    request.setIpWhitelistsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getIpWhitelists(), "ipWhitelists", "simple"));
  }

  json query = {};
  if (!!request.hasIpWhitelist()) {
    query["ipWhitelist"] = request.getIpWhitelist();
  }

  if (!!request.hasIpWhitelistsShrink()) {
    query["ipWhitelists"] = request.getIpWhitelistsShrink();
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
 * @summary Deletes a specified global IP whitelist under a specified instance.
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
 * @description Deleting a topic clears all publish-subscribe relationships under the topic. Call this operation with caution.
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
 * @description Deleting a topic clears all publish-subscribe relationships under the topic. Call this operation with caution.
 *
 * @return DeleteTopicResponse
 */
DeleteTopicResponse Client::deleteTopic(const string &instanceId, const string &topicName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteTopicWithOptions(instanceId, topicName, headers, runtime);
}

/**
 * @summary Performs a specified operation on a specified migration task.
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
    query["instanceId"] = request.getInstanceId();
  }

  json body = {};
  if (!!request.hasOperationParam()) {
    body["operationParam"] = request.getOperationParam();
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
 * @summary Performs a specified operation on a specified migration task.
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
 * @summary Completes the current migration stage for a specified migration task.
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
    query["instanceId"] = request.getInstanceId();
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
 * @summary Completes the current migration stage for a specified migration task.
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
 * @summary 查询 Agent 诊断会话详情
 *
 * @param request GetAgentConversationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAgentConversationResponse
 */
GetAgentConversationResponse Client::getAgentConversationWithOptions(const string &conversationId, const GetAgentConversationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAgentConversation"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/conversations/" , Darabonba::Encode::Encoder::percentEncode(conversationId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAgentConversationResponse>();
}

/**
 * @summary 查询 Agent 诊断会话详情
 *
 * @param request GetAgentConversationRequest
 * @return GetAgentConversationResponse
 */
GetAgentConversationResponse Client::getAgentConversation(const string &conversationId, const GetAgentConversationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAgentConversationWithOptions(conversationId, request, headers, runtime);
}

/**
 * @summary 订阅 Agent 诊断会话事件
 *
 * @param request GetAgentConversationEventsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAgentConversationEventsResponse
 */
FutureGenerator<GetAgentConversationEventsResponse> Client::getAgentConversationEventsWithSSE(const string &conversationId, const GetAgentConversationEventsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAfter()) {
    query["after"] = request.getAfter();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAgentConversationEvents"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/conversations/" , Darabonba::Encode::Encoder::percentEncode(conversationId) , "/events")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "string"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      string data = resp.getEvent().getData();
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<GetAgentConversationEventsResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary 订阅 Agent 诊断会话事件
 *
 * @param request GetAgentConversationEventsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAgentConversationEventsResponse
 */
GetAgentConversationEventsResponse Client::getAgentConversationEventsWithOptions(const string &conversationId, const GetAgentConversationEventsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAfter()) {
    query["after"] = request.getAfter();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAgentConversationEvents"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/conversations/" , Darabonba::Encode::Encoder::percentEncode(conversationId) , "/events")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "string"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAgentConversationEventsResponse>();
}

/**
 * @summary 订阅 Agent 诊断会话事件
 *
 * @param request GetAgentConversationEventsRequest
 * @return GetAgentConversationEventsResponse
 */
GetAgentConversationEventsResponse Client::getAgentConversationEvents(const string &conversationId, const GetAgentConversationEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAgentConversationEventsWithOptions(conversationId, request, headers, runtime);
}

/**
 * @summary 查询 Agent 诊断会话时间线
 *
 * @param request GetAgentConversationTimelineRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAgentConversationTimelineResponse
 */
GetAgentConversationTimelineResponse Client::getAgentConversationTimelineWithOptions(const string &conversationId, const GetAgentConversationTimelineRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAfter()) {
    query["after"] = request.getAfter();
  }

  if (!!request.hasIncludeImageData()) {
    query["includeImageData"] = request.getIncludeImageData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAgentConversationTimeline"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/conversations/" , Darabonba::Encode::Encoder::percentEncode(conversationId) , "/timeline")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAgentConversationTimelineResponse>();
}

/**
 * @summary 查询 Agent 诊断会话时间线
 *
 * @param request GetAgentConversationTimelineRequest
 * @return GetAgentConversationTimelineResponse
 */
GetAgentConversationTimelineResponse Client::getAgentConversationTimeline(const string &conversationId, const GetAgentConversationTimelineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAgentConversationTimelineWithOptions(conversationId, request, headers, runtime);
}

/**
 * @summary Queries the time range in which a consumer offset can be reset for a topic.
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
 * @summary Queries the time range in which a consumer offset can be reset for a topic.
 *
 * @return GetConsumeTimespanResponse
 */
GetConsumeTimespanResponse Client::getConsumeTimespan(const string &instanceId, const string &consumerGroupId, const string &topicName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getConsumeTimespanWithOptions(instanceId, consumerGroupId, topicName, headers, runtime);
}

/**
 * @summary Retrieves the details of a specified consumer group.
 *
 * @description >Notice: The OpenAPI provided by Alibaba Cloud is a management and control API used to manage and query related resources of Alibaba Cloud services. It is recommended only for integration in management and control data links. Using OpenAPI in the core data link for message sending and receiving is strictly prohibited. Otherwise, risks may occur in the data link.
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
 * @summary Retrieves the details of a specified consumer group.
 *
 * @description >Notice: The OpenAPI provided by Alibaba Cloud is a management and control API used to manage and query related resources of Alibaba Cloud services. It is recommended only for integration in management and control data links. Using OpenAPI in the core data link for message sending and receiving is strictly prohibited. Otherwise, risks may occur in the data link.
 *
 * @return GetConsumerGroupResponse
 */
GetConsumerGroupResponse Client::getConsumerGroup(const string &instanceId, const string &consumerGroupId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getConsumerGroupWithOptions(instanceId, consumerGroupId, headers, runtime);
}

/**
 * @summary Queries the message accumulation of a consumer group.
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
    query["liteTopicName"] = request.getLiteTopicName();
  }

  if (!!request.hasTopicName()) {
    query["topicName"] = request.getTopicName();
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
 * @summary Queries the message accumulation of a consumer group.
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
    query["clientId"] = request.getClientId();
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
 * @summary Queries the details of a backup plan mapping.
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
 * @summary Queries the details of a backup plan mapping.
 *
 * @return GetDisasterRecoveryItemResponse
 */
GetDisasterRecoveryItemResponse Client::getDisasterRecoveryItem(const string &planId, const string &itemId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getDisasterRecoveryItemWithOptions(planId, itemId, headers, runtime);
}

/**
 * @summary Queries the details of a backup plan.
 *
 * @description Before querying, make sure you have created a Global Replicator backup plan. Before using Global Replicator, your account must have the AliyunServiceRoleForRMQDisasterRecovery service-linked role. This role is used to grant authorization for ApsaraMQ for RocketMQ to access the EventBridge event bus. The system typically creates this role automatically the first time you use the associated feature. If automatic creation failed, create the role manually.
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
 * @summary Queries the details of a backup plan.
 *
 * @description Before querying, make sure you have created a Global Replicator backup plan. Before using Global Replicator, your account must have the AliyunServiceRoleForRMQDisasterRecovery service-linked role. This role is used to grant authorization for ApsaraMQ for RocketMQ to access the EventBridge event bus. The system typically creates this role automatically the first time you use the associated feature. If automatic creation failed, create the role manually.
 *
 * @return GetDisasterRecoveryPlanResponse
 */
GetDisasterRecoveryPlanResponse Client::getDisasterRecoveryPlan(const string &planId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getDisasterRecoveryPlanWithOptions(planId, headers, runtime);
}

/**
 * @summary Retrieves the details of a specified instance.
 *
 * @description >Notice: The OpenAPI operations provided by Alibaba Cloud are management APIs used to manage and query Alibaba Cloud service resources. Use them only in management and control workflows. Do not rely on OpenAPI in core data link workflows for message sending and receiving, as this may introduce risks to the data link.</notice>
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
 * @summary Retrieves the details of a specified instance.
 *
 * @description >Notice: The OpenAPI operations provided by Alibaba Cloud are management APIs used to manage and query Alibaba Cloud service resources. Use them only in management and control workflows. Do not rely on OpenAPI in core data link workflows for message sending and receiving, as this may introduce risks to the data link.</notice>
 *
 * @return GetInstanceResponse
 */
GetInstanceResponse Client::getInstance(const string &instanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getInstanceWithOptions(instanceId, headers, runtime);
}

/**
 * @summary Retrieves the account details for a specified instance.
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
    query["username"] = request.getUsername();
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
 * @summary Retrieves the account details for a specified instance.
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
    query["resourceName"] = request.getResourceName();
  }

  if (!!request.hasResourceType()) {
    query["resourceType"] = request.getResourceType();
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
 * @summary 查询实例巡检配置
 *
 * @param request GetInstanceInspectionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceInspectionResponse
 */
GetInstanceInspectionResponse Client::getInstanceInspectionWithOptions(const string &instanceId, const GetInstanceInspectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstanceInspection"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/monitoring/instance-inspections/" , Darabonba::Encode::Encoder::percentEncode(instanceId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceInspectionResponse>();
}

/**
 * @summary 查询实例巡检配置
 *
 * @param request GetInstanceInspectionRequest
 * @return GetInstanceInspectionResponse
 */
GetInstanceInspectionResponse Client::getInstanceInspection(const string &instanceId, const GetInstanceInspectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getInstanceInspectionWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary 查询实例风险诊断报告
 *
 * @param request GetInstanceInspectionReportRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceInspectionReportResponse
 */
GetInstanceInspectionReportResponse Client::getInstanceInspectionReportWithOptions(const string &reportId, const GetInstanceInspectionReportRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstanceInspectionReport"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/monitoring/instance-inspections/reports/" , Darabonba::Encode::Encoder::percentEncode(reportId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceInspectionReportResponse>();
}

/**
 * @summary 查询实例风险诊断报告
 *
 * @param request GetInstanceInspectionReportRequest
 * @return GetInstanceInspectionReportResponse
 */
GetInstanceInspectionReportResponse Client::getInstanceInspectionReport(const string &reportId, const GetInstanceInspectionReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getInstanceInspectionReportWithOptions(reportId, request, headers, runtime);
}

/**
 * @summary 查询实例巡检结果
 *
 * @param request GetInstanceInspectionRunRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceInspectionRunResponse
 */
GetInstanceInspectionRunResponse Client::getInstanceInspectionRunWithOptions(const string &instanceId, const string &runId, const GetInstanceInspectionRunRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstanceInspectionRun"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/monitoring/instance-inspections/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/runs/" , Darabonba::Encode::Encoder::percentEncode(runId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceInspectionRunResponse>();
}

/**
 * @summary 查询实例巡检结果
 *
 * @param request GetInstanceInspectionRunRequest
 * @return GetInstanceInspectionRunResponse
 */
GetInstanceInspectionRunResponse Client::getInstanceInspectionRun(const string &instanceId, const string &runId, const GetInstanceInspectionRunRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getInstanceInspectionRunWithOptions(instanceId, runId, request, headers, runtime);
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
    request.setIpWhitelistsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getIpWhitelists(), "ipWhitelists", "simple"));
  }

  json query = {};
  if (!!request.hasIpWhitelistsShrink()) {
    query["ipWhitelists"] = request.getIpWhitelistsShrink();
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
 * @summary Retrieves the details of a specified message.
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
 * @summary Retrieves the details of a specified message.
 *
 * @return GetMessageDetailResponse
 */
GetMessageDetailResponse Client::getMessageDetail(const string &instanceId, const string &topicName, const string &messageId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getMessageDetailWithOptions(instanceId, topicName, messageId, headers, runtime);
}

/**
 * @summary Retrieves the details of a specified topic.
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
 * @summary Retrieves the details of a specified topic.
 *
 * @return GetTopicResponse
 */
GetTopicResponse Client::getTopic(const string &instanceId, const string &topicName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTopicWithOptions(instanceId, topicName, headers, runtime);
}

/**
 * @summary Retrieves the message trace for a specified message in a specified topic.
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
    query["endTime"] = request.getEndTime();
  }

  if (!!request.hasStartTime()) {
    query["startTime"] = request.getStartTime();
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
 * @summary Retrieves the message trace for a specified message in a specified topic.
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
 * @summary 查询 Agent 诊断会话列表
 *
 * @param request ListAgentConversationsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAgentConversationsResponse
 */
ListAgentConversationsResponse Client::listAgentConversationsWithOptions(const ListAgentConversationsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasPurpose()) {
    query["purpose"] = request.getPurpose();
  }

  if (!!request.hasQ()) {
    query["q"] = request.getQ();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAgentConversations"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/conversations")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAgentConversationsResponse>();
}

/**
 * @summary 查询 Agent 诊断会话列表
 *
 * @param request ListAgentConversationsRequest
 * @return ListAgentConversationsResponse
 */
ListAgentConversationsResponse Client::listAgentConversations(const ListAgentConversationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAgentConversationsWithOptions(request, headers, runtime);
}

/**
 * @summary Queries supported zones.
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
 * @summary Queries supported zones.
 *
 * @return ListAvailableZonesResponse
 */
ListAvailableZonesResponse Client::listAvailableZones() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAvailableZonesWithOptions(headers, runtime);
}

/**
 * @summary Retrieves the connection information for clients in a specified consumer group.
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
    query["liteTopicName"] = request.getLiteTopicName();
  }

  if (!!request.hasTopicName()) {
    query["topicName"] = request.getTopicName();
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
 * @summary Retrieves the connection information for clients in a specified consumer group.
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
 * @summary Lists the subscription relationships for a consumer group.
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
    query["topicName"] = request.getTopicName();
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
 * @summary Lists the subscription relationships for a consumer group.
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
 * @summary Queries the list of consumer groups under a specified instance.
 *
 * @description >Notice: The OpenAPI provided by Alibaba Cloud is a management and control API used to manage and query related resources of Alibaba Cloud services. It is recommended only for integration in management and control links. Using OpenAPI in the core data link for message sending and receiving is strictly prohibited. Otherwise, risks may occur in the link.
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
    query["filter"] = request.getFilter();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
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
 * @summary Queries the list of consumer groups under a specified instance.
 *
 * @description >Notice: The OpenAPI provided by Alibaba Cloud is a management and control API used to manage and query related resources of Alibaba Cloud services. It is recommended only for integration in management and control links. Using OpenAPI in the core data link for message sending and receiving is strictly prohibited. Otherwise, risks may occur in the link.
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
 * @summary Queries the list of consumer offset synchronization checkpoints.
 *
 * @description Before you call this operation, create a Global Replicator backup plan and add topic mapping items to the plan. Then use the corresponding planId, itemId, and source instance ID to query consumer offset synchronization checkpoints. To use Global Replicator, make sure that your account has the AliyunServiceRoleForRMQDisasterRecovery service-linked role. The system typically performs automatic creation of this role when you first use the associated feature.
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
    query["filter"] = request.getFilter();
  }

  if (!!request.hasInstanceId()) {
    query["instanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
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
 * @summary Queries the list of consumer offset synchronization checkpoints.
 *
 * @description Before you call this operation, create a Global Replicator backup plan and add topic mapping items to the plan. Then use the corresponding planId, itemId, and source instance ID to query consumer offset synchronization checkpoints. To use Global Replicator, make sure that your account has the AliyunServiceRoleForRMQDisasterRecovery service-linked role. The system typically performs automatic creation of this role when you first use the associated feature.
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
 * @summary Queries the list of backup mapping tasks.
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
    query["filter"] = request.getFilter();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasTopicName()) {
    query["topicName"] = request.getTopicName();
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
 * @summary Queries the list of backup mapping tasks.
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
 * @summary Queries a list of backup plans.
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
    query["filter"] = request.getFilter();
  }

  if (!!request.hasInstanceId()) {
    query["instanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
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
 * @summary Queries a list of backup plans.
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
 * @summary 查询巡检模板列表
 *
 * @param request ListInspectionTemplatesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInspectionTemplatesResponse
 */
ListInspectionTemplatesResponse Client::listInspectionTemplatesWithOptions(const ListInspectionTemplatesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInspectionTemplates"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/monitoring/templates")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInspectionTemplatesResponse>();
}

/**
 * @summary 查询巡检模板列表
 *
 * @param request ListInspectionTemplatesRequest
 * @return ListInspectionTemplatesResponse
 */
ListInspectionTemplatesResponse Client::listInspectionTemplates(const ListInspectionTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listInspectionTemplatesWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves the access accounts for a specified instance.
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
    query["accountStatus"] = request.getAccountStatus();
  }

  if (!!request.hasAccountType()) {
    query["accountType"] = request.getAccountType();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasUsername()) {
    query["username"] = request.getUsername();
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
 * @summary Retrieves the access accounts for a specified instance.
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
    query["filter"] = request.getFilter();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
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
 * @summary 查询巡检项关联资源
 *
 * @param request ListInstanceInspectionResourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstanceInspectionResourcesResponse
 */
ListInstanceInspectionResourcesResponse Client::listInstanceInspectionResourcesWithOptions(const string &instanceId, const ListInstanceInspectionResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  if (!!request.hasRunId()) {
    query["runId"] = request.getRunId();
  }

  if (!!request.hasTemplateCode()) {
    query["templateCode"] = request.getTemplateCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstanceInspectionResources"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/monitoring/instance-inspections/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/resources")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstanceInspectionResourcesResponse>();
}

/**
 * @summary 查询巡检项关联资源
 *
 * @param request ListInstanceInspectionResourcesRequest
 * @return ListInstanceInspectionResourcesResponse
 */
ListInstanceInspectionResourcesResponse Client::listInstanceInspectionResources(const string &instanceId, const ListInstanceInspectionResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listInstanceInspectionResourcesWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary 查询实例巡检历史
 *
 * @param request ListInstanceInspectionRunsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstanceInspectionRunsResponse
 */
ListInstanceInspectionRunsResponse Client::listInstanceInspectionRunsWithOptions(const string &instanceId, const ListInstanceInspectionRunsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["endTime"] = request.getEndTime();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  if (!!request.hasReportStatus()) {
    query["reportStatus"] = request.getReportStatus();
  }

  if (!!request.hasResult()) {
    query["result"] = request.getResult();
  }

  if (!!request.hasSortBy()) {
    query["sortBy"] = request.getSortBy();
  }

  if (!!request.hasStartTime()) {
    query["startTime"] = request.getStartTime();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
  }

  if (!!request.hasTemplateCode()) {
    query["templateCode"] = request.getTemplateCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstanceInspectionRuns"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/monitoring/instance-inspections/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/runs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstanceInspectionRunsResponse>();
}

/**
 * @summary 查询实例巡检历史
 *
 * @param request ListInstanceInspectionRunsRequest
 * @return ListInstanceInspectionRunsResponse
 */
ListInstanceInspectionRunsResponse Client::listInstanceInspectionRuns(const string &instanceId, const ListInstanceInspectionRunsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listInstanceInspectionRunsWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary 分页查询已配置的实例诊断；仅返回配置摘要
 *
 * @param request ListInstanceInspectionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstanceInspectionsResponse
 */
ListInstanceInspectionsResponse Client::listInstanceInspectionsWithOptions(const ListInstanceInspectionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstanceInspections"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/monitoring/instance-inspections")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstanceInspectionsResponse>();
}

/**
 * @summary 分页查询已配置的实例诊断；仅返回配置摘要
 *
 * @param request ListInstanceInspectionsRequest
 * @return ListInstanceInspectionsResponse
 */
ListInstanceInspectionsResponse Client::listInstanceInspections(const ListInstanceInspectionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listInstanceInspectionsWithOptions(request, headers, runtime);
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
    query["ipWhitelist"] = request.getIpWhitelist();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
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
 * @summary Queries the list of all ApsaraMQ for RocketMQ instances in a specified region.
 *
 * @description >Notice: The OpenAPI operations provided by Alibaba Cloud are management API operations that are used to manage and query resources of Alibaba Cloud services. Integrate OpenAPI operations only into the management data link. Do not use OpenAPI operations in the core data link for sending and receiving messages. Otherwise, risks may occur on the data link.
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
    request.setSeriesCodesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSeriesCodes(), "seriesCodes", "simple"));
  }

  json query = {};
  if (!!request.hasFilter()) {
    query["filter"] = request.getFilter();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["resourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSeriesCodesShrink()) {
    query["seriesCodes"] = request.getSeriesCodesShrink();
  }

  if (!!request.hasStorageSecretKey()) {
    query["storageSecretKey"] = request.getStorageSecretKey();
  }

  if (!!request.hasTags()) {
    query["tags"] = request.getTags();
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
 * @summary Queries the list of all ApsaraMQ for RocketMQ instances in a specified region.
 *
 * @description >Notice: The OpenAPI operations provided by Alibaba Cloud are management API operations that are used to manage and query resources of Alibaba Cloud services. Integrate OpenAPI operations only into the management data link. Do not use OpenAPI operations in the core data link for sending and receiving messages. Otherwise, risks may occur on the data link.
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
 * @summary Queries a list of messages.
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
    query["endTime"] = request.getEndTime();
  }

  if (!!request.hasLiteTopicName()) {
    query["liteTopicName"] = request.getLiteTopicName();
  }

  if (!!request.hasMessageId()) {
    query["messageId"] = request.getMessageId();
  }

  if (!!request.hasMessageKey()) {
    query["messageKey"] = request.getMessageKey();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasScrollId()) {
    query["scrollId"] = request.getScrollId();
  }

  if (!!request.hasStartTime()) {
    query["startTime"] = request.getStartTime();
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
 * @summary Queries a list of messages.
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
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
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
 * @summary Queries the list of migration operations.
 *
 * @param tmpReq ListMigrationOperationsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMigrationOperationsResponse
 */
ListMigrationOperationsResponse Client::listMigrationOperationsWithOptions(const string &migrationId, const string &stageType, const ListMigrationOperationsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListMigrationOperationsShrinkRequest request = ListMigrationOperationsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBusinessStatus()) {
    request.setBusinessStatusShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBusinessStatus(), "businessStatus", "simple"));
  }

  if (!!tmpReq.hasOperationStatus()) {
    request.setOperationStatusShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOperationStatus(), "operationStatus", "simple"));
  }

  json query = {};
  if (!!request.hasBusinessStatusShrink()) {
    query["businessStatus"] = request.getBusinessStatusShrink();
  }

  if (!!request.hasFilter()) {
    query["filter"] = request.getFilter();
  }

  if (!!request.hasInstanceId()) {
    query["instanceId"] = request.getInstanceId();
  }

  if (!!request.hasOperationStatusShrink()) {
    query["operationStatus"] = request.getOperationStatusShrink();
  }

  if (!!request.hasOperationType()) {
    query["operationType"] = request.getOperationType();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
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
 * @summary Queries the list of migration operations.
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
 * @summary Queries the list of migration tasks.
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
    query["filter"] = request.getFilter();
  }

  if (!!request.hasMigrationType()) {
    query["migrationType"] = request.getMigrationType();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["resourceGroupId"] = request.getResourceGroupId();
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
 * @summary Queries the list of migration tasks.
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
 * @summary Queries the list of regions.
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
 * @summary Queries the list of regions.
 *
 * @return ListRegionsResponse
 */
ListRegionsResponse Client::listRegions() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listRegionsWithOptions(headers, runtime);
}

/**
 * @summary Queries the tags that are added to resources.
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
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["resourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceId()) {
    query["resourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["resourceType"] = request.getResourceType();
  }

  if (!!request.hasTag()) {
    query["tag"] = request.getTag();
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
 * @summary Queries the tags that are added to resources.
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
 * @summary Queries the list of topics in a specified instance.
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
    request.setMessageTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMessageTypes(), "messageTypes", "simple"));
  }

  json query = {};
  if (!!request.hasFilter()) {
    query["filter"] = request.getFilter();
  }

  if (!!request.hasMessageTypesShrink()) {
    query["messageTypes"] = request.getMessageTypesShrink();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
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
 * @summary Queries the list of topics in a specified instance.
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
 * @summary Queries the list of message traces under a specified topic.
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
    query["endTime"] = request.getEndTime();
  }

  if (!!request.hasLiteTopicName()) {
    query["liteTopicName"] = request.getLiteTopicName();
  }

  if (!!request.hasMessageId()) {
    query["messageId"] = request.getMessageId();
  }

  if (!!request.hasMessageKey()) {
    query["messageKey"] = request.getMessageKey();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasQueryType()) {
    query["queryType"] = request.getQueryType();
  }

  if (!!request.hasStartTime()) {
    query["startTime"] = request.getStartTime();
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
 * @summary Queries the list of message traces under a specified topic.
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
 * @summary Resets the consumer offset of a consumer group. If you reset a consumer offset, the offset from which a consumer starts to consume messages is changed. If faults occur or wrong messages are consumed during message consumption, you can reset the consumer offset to roll back the consumption to a specific offset for reconsumption. You can also reset the consumer offset to the latest offset and temporarily leave the accumulated messages unhandled.
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
    body["resetTime"] = request.getResetTime();
  }

  if (!!request.hasResetType()) {
    body["resetType"] = request.getResetType();
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
 * @summary Resets the consumer offset of a consumer group. If you reset a consumer offset, the offset from which a consumer starts to consume messages is changed. If faults occur or wrong messages are consumed during message consumption, you can reset the consumer offset to roll back the consumption to a specific offset for reconsumption. You can also reset the consumer offset to the latest offset and temporarily leave the accumulated messages unhandled.
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
 * @summary 响应 Agent 诊断交互
 *
 * @param request RespondAgentConversationActionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RespondAgentConversationActionResponse
 */
RespondAgentConversationActionResponse Client::respondAgentConversationActionWithOptions(const string &conversationId, const string &actionId, const RespondAgentConversationActionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAnswers()) {
    body["answers"] = request.getAnswers();
  }

  if (!!request.hasDecision()) {
    body["decision"] = request.getDecision();
  }

  if (!!request.hasNote()) {
    body["note"] = request.getNote();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RespondAgentConversationAction"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/conversations/" , Darabonba::Encode::Encoder::percentEncode(conversationId) , "/actions/" , Darabonba::Encode::Encoder::percentEncode(actionId) , "/respond")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RespondAgentConversationActionResponse>();
}

/**
 * @summary 响应 Agent 诊断交互
 *
 * @param request RespondAgentConversationActionRequest
 * @return RespondAgentConversationActionResponse
 */
RespondAgentConversationActionResponse Client::respondAgentConversationAction(const string &conversationId, const string &actionId, const RespondAgentConversationActionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return respondAgentConversationActionWithOptions(conversationId, actionId, request, headers, runtime);
}

/**
 * @summary 立即执行实例巡检
 *
 * @param request RunInstanceInspectionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunInstanceInspectionResponse
 */
RunInstanceInspectionResponse Client::runInstanceInspectionWithOptions(const string &instanceId, const RunInstanceInspectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["clientToken"] = request.getClientToken();
  }

  if (!!request.hasItemOverrides()) {
    body["itemOverrides"] = request.getItemOverrides();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunInstanceInspection"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/monitoring/instance-inspections/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/runs")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunInstanceInspectionResponse>();
}

/**
 * @summary 立即执行实例巡检
 *
 * @param request RunInstanceInspectionRequest
 * @return RunInstanceInspectionResponse
 */
RunInstanceInspectionResponse Client::runInstanceInspection(const string &instanceId, const RunInstanceInspectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return runInstanceInspectionWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary 发送 Agent 诊断消息
 *
 * @param request SendAgentConversationMessageRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendAgentConversationMessageResponse
 */
FutureGenerator<SendAgentConversationMessageResponse> Client::sendAgentConversationMessageWithSSE(const string &conversationId, const SendAgentConversationMessageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAttachments()) {
    body["attachments"] = request.getAttachments();
  }

  if (!!request.hasClientContext()) {
    body["clientContext"] = request.getClientContext();
  }

  if (!!request.hasImages()) {
    body["images"] = request.getImages();
  }

  if (!!request.hasMessage()) {
    body["message"] = request.getMessage();
  }

  if (!!request.hasMessageType()) {
    body["messageType"] = request.getMessageType();
  }

  if (!!request.hasTicketRequestId()) {
    body["ticketRequestId"] = request.getTicketRequestId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SendAgentConversationMessage"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/conversations/" , Darabonba::Encode::Encoder::percentEncode(conversationId) , "/messages")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "string"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      string data = resp.getEvent().getData();
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<SendAgentConversationMessageResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary 发送 Agent 诊断消息
 *
 * @param request SendAgentConversationMessageRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendAgentConversationMessageResponse
 */
SendAgentConversationMessageResponse Client::sendAgentConversationMessageWithOptions(const string &conversationId, const SendAgentConversationMessageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAttachments()) {
    body["attachments"] = request.getAttachments();
  }

  if (!!request.hasClientContext()) {
    body["clientContext"] = request.getClientContext();
  }

  if (!!request.hasImages()) {
    body["images"] = request.getImages();
  }

  if (!!request.hasMessage()) {
    body["message"] = request.getMessage();
  }

  if (!!request.hasMessageType()) {
    body["messageType"] = request.getMessageType();
  }

  if (!!request.hasTicketRequestId()) {
    body["ticketRequestId"] = request.getTicketRequestId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SendAgentConversationMessage"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/conversations/" , Darabonba::Encode::Encoder::percentEncode(conversationId) , "/messages")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "string"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendAgentConversationMessageResponse>();
}

/**
 * @summary 发送 Agent 诊断消息
 *
 * @param request SendAgentConversationMessageRequest
 * @return SendAgentConversationMessageResponse
 */
SendAgentConversationMessageResponse Client::sendAgentConversationMessage(const string &conversationId, const SendAgentConversationMessageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return sendAgentConversationMessageWithOptions(conversationId, request, headers, runtime);
}

/**
 * @summary Starts a topic mapping of a Global Replicator task.
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
 * @summary Starts a topic mapping of a Global Replicator task.
 *
 * @return StartDisasterRecoveryItemResponse
 */
StartDisasterRecoveryItemResponse Client::startDisasterRecoveryItem(const string &planId, const string &itemId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return startDisasterRecoveryItemWithOptions(planId, itemId, headers, runtime);
}

/**
 * @summary 引导 Agent 诊断会话执行
 *
 * @param request SteerAgentConversationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SteerAgentConversationResponse
 */
SteerAgentConversationResponse Client::steerAgentConversationWithOptions(const string &conversationId, const SteerAgentConversationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCommandId()) {
    body["commandId"] = request.getCommandId();
  }

  if (!!request.hasMessage()) {
    body["message"] = request.getMessage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SteerAgentConversation"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/conversations/" , Darabonba::Encode::Encoder::percentEncode(conversationId) , "/actions/steer")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SteerAgentConversationResponse>();
}

/**
 * @summary 引导 Agent 诊断会话执行
 *
 * @param request SteerAgentConversationRequest
 * @return SteerAgentConversationResponse
 */
SteerAgentConversationResponse Client::steerAgentConversation(const string &conversationId, const SteerAgentConversationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return steerAgentConversationWithOptions(conversationId, request, headers, runtime);
}

/**
 * @summary 停止 Agent 诊断会话执行
 *
 * @param request StopAgentConversationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopAgentConversationResponse
 */
StopAgentConversationResponse Client::stopAgentConversationWithOptions(const string &conversationId, const StopAgentConversationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopAgentConversation"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/conversations/" , Darabonba::Encode::Encoder::percentEncode(conversationId) , "/actions/stop")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopAgentConversationResponse>();
}

/**
 * @summary 停止 Agent 诊断会话执行
 *
 * @param request StopAgentConversationRequest
 * @return StopAgentConversationResponse
 */
StopAgentConversationResponse Client::stopAgentConversation(const string &conversationId, const StopAgentConversationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return stopAgentConversationWithOptions(conversationId, request, headers, runtime);
}

/**
 * @summary Stops a topic mapping of a Global Replicator task.
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
 * @summary Stops a topic mapping of a Global Replicator task.
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
    query["regionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    query["resourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["resourceType"] = request.getResourceType();
  }

  if (!!request.hasTag()) {
    query["tag"] = request.getTag();
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
    query["all"] = request.getAll();
  }

  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    query["resourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["resourceType"] = request.getResourceType();
  }

  if (!!request.hasTagKey()) {
    query["tagKey"] = request.getTagKey();
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
 * @summary 重命名 Agent 诊断会话
 *
 * @param request UpdateAgentConversationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAgentConversationResponse
 */
UpdateAgentConversationResponse Client::updateAgentConversationWithOptions(const string &conversationId, const UpdateAgentConversationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["clientToken"] = request.getClientToken();
  }

  if (!!request.hasTitle()) {
    body["title"] = request.getTitle();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateAgentConversation"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/conversations/" , Darabonba::Encode::Encoder::percentEncode(conversationId))},
    {"method" , "PATCH"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAgentConversationResponse>();
}

/**
 * @summary 重命名 Agent 诊断会话
 *
 * @param request UpdateAgentConversationRequest
 * @return UpdateAgentConversationResponse
 */
UpdateAgentConversationResponse Client::updateAgentConversation(const string &conversationId, const UpdateAgentConversationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateAgentConversationWithOptions(conversationId, request, headers, runtime);
}

/**
 * @summary 更新 Agent 诊断会话分享范围
 *
 * @param request UpdateAgentConversationShareScopeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAgentConversationShareScopeResponse
 */
UpdateAgentConversationShareScopeResponse Client::updateAgentConversationShareScopeWithOptions(const string &conversationId, const UpdateAgentConversationShareScopeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasShareScope()) {
    body["shareScope"] = request.getShareScope();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateAgentConversationShareScope"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/conversations/" , Darabonba::Encode::Encoder::percentEncode(conversationId) , "/share-scope")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAgentConversationShareScopeResponse>();
}

/**
 * @summary 更新 Agent 诊断会话分享范围
 *
 * @param request UpdateAgentConversationShareScopeRequest
 * @return UpdateAgentConversationShareScopeResponse
 */
UpdateAgentConversationShareScopeResponse Client::updateAgentConversationShareScope(const string &conversationId, const UpdateAgentConversationShareScopeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateAgentConversationShareScopeWithOptions(conversationId, request, headers, runtime);
}

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
UpdateConsumerGroupResponse Client::updateConsumerGroupWithOptions(const string &instanceId, const string &consumerGroupId, const UpdateConsumerGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConsumeRetryPolicy()) {
    body["consumeRetryPolicy"] = request.getConsumeRetryPolicy();
  }

  if (!!request.hasDeliveryOrderType()) {
    body["deliveryOrderType"] = request.getDeliveryOrderType();
  }

  if (!!request.hasMaxReceiveTps()) {
    body["maxReceiveTps"] = request.getMaxReceiveTps();
  }

  if (!!request.hasRemark()) {
    body["remark"] = request.getRemark();
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
 * @summary Updates the basic information and consumption retry policy of a consumer group.
 *
 * @description >Notice: The OpenAPI provided by Alibaba Cloud is a management and control API used to manage and query resources of Alibaba Cloud services. It is recommended only for integration in management and control links. Do not use OpenAPI in the core data link for sending and receiving messages. Otherwise, risks may occur on the data link.
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
    body["topics"] = request.getTopics();
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
    body["autoSyncCheckpoint"] = request.getAutoSyncCheckpoint();
  }

  if (!!request.hasInstances()) {
    body["instances"] = request.getInstances();
  }

  if (!!request.hasPlanDesc()) {
    body["planDesc"] = request.getPlanDesc();
  }

  if (!!request.hasPlanName()) {
    body["planName"] = request.getPlanName();
  }

  if (!!request.hasPlanType()) {
    body["planType"] = request.getPlanType();
  }

  if (!!request.hasSyncCheckpointEnabled()) {
    body["syncCheckpointEnabled"] = request.getSyncCheckpointEnabled();
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
 * @summary Updates the basic information and specification configurations of an ApsaraMQ for RocketMQ instance.
 *
 * @description >Notice: The OpenAPI provided by Alibaba Cloud is a management and control API used to manage and query resources of Alibaba Cloud services. It is recommended only for integration in management and control paths. Do not use OpenAPI in the core data link for sending and receiving messages. Otherwise, risks may occur on the link.
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
    body["aclInfo"] = request.getAclInfo();
  }

  if (!!request.hasInstanceName()) {
    body["instanceName"] = request.getInstanceName();
  }

  if (!!request.hasNetworkInfo()) {
    body["networkInfo"] = request.getNetworkInfo();
  }

  if (!!request.hasProductInfo()) {
    body["productInfo"] = request.getProductInfo();
  }

  if (!!request.hasRemark()) {
    body["remark"] = request.getRemark();
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
 * @summary Updates the basic information and specification configurations of an ApsaraMQ for RocketMQ instance.
 *
 * @description >Notice: The OpenAPI provided by Alibaba Cloud is a management and control API used to manage and query resources of Alibaba Cloud services. It is recommended only for integration in management and control paths. Do not use OpenAPI in the core data link for sending and receiving messages. Otherwise, risks may occur on the link.
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
 * @summary Updates the information of a specified account under a specified instance.
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
    query["accountStatus"] = request.getAccountStatus();
  }

  if (!!request.hasPassword()) {
    query["password"] = request.getPassword();
  }

  if (!!request.hasRemark()) {
    query["remark"] = request.getRemark();
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
 * @summary Updates the information of a specified account under a specified instance.
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
    body["actions"] = request.getActions();
  }

  if (!!request.hasDecision()) {
    body["decision"] = request.getDecision();
  }

  if (!!request.hasIpWhitelists()) {
    body["ipWhitelists"] = request.getIpWhitelists();
  }

  if (!!request.hasResourceName()) {
    body["resourceName"] = request.getResourceName();
  }

  if (!!request.hasResourceType()) {
    body["resourceType"] = request.getResourceType();
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
 * @summary 修改实例巡检配置
 *
 * @param request UpdateInstanceInspectionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateInstanceInspectionResponse
 */
UpdateInstanceInspectionResponse Client::updateInstanceInspectionWithOptions(const string &instanceId, const UpdateInstanceInspectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["clientToken"] = request.getClientToken();
  }

  if (!!request.hasItems()) {
    body["items"] = request.getItems();
  }

  if (!!request.hasResourceScope()) {
    body["resourceScope"] = request.getResourceScope();
  }

  if (!!request.hasRevision()) {
    body["revision"] = request.getRevision();
  }

  if (!!request.hasSchedule()) {
    body["schedule"] = request.getSchedule();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateInstanceInspection"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/monitoring/instance-inspections/" , Darabonba::Encode::Encoder::percentEncode(instanceId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateInstanceInspectionResponse>();
}

/**
 * @summary 修改实例巡检配置
 *
 * @param request UpdateInstanceInspectionRequest
 * @return UpdateInstanceInspectionResponse
 */
UpdateInstanceInspectionResponse Client::updateInstanceInspection(const string &instanceId, const UpdateInstanceInspectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateInstanceInspectionWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary Updates the remarks for a topic.
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
    body["liteTopicExpiration"] = request.getLiteTopicExpiration();
  }

  if (!!request.hasMaxSendTps()) {
    body["maxSendTps"] = request.getMaxSendTps();
  }

  if (!!request.hasRemark()) {
    body["remark"] = request.getRemark();
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
 * @summary Updates the remarks for a topic.
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
 * @summary 上传 Agent 会话客户端日志
 *
 * @param request UploadAgentConversationLogRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadAgentConversationLogResponse
 */
UploadAgentConversationLogResponse Client::uploadAgentConversationLogWithOptions(const string &conversationId, const UploadAgentConversationLogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasContentGzipB64()) {
    body["contentGzipB64"] = request.getContentGzipB64();
  }

  if (!!request.hasFileName()) {
    body["fileName"] = request.getFileName();
  }

  if (!!request.hasTimeRangeEnd()) {
    body["timeRangeEnd"] = request.getTimeRangeEnd();
  }

  if (!!request.hasTimeRangeStart()) {
    body["timeRangeStart"] = request.getTimeRangeStart();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UploadAgentConversationLog"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/conversations/" , Darabonba::Encode::Encoder::percentEncode(conversationId) , "/logs")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UploadAgentConversationLogResponse>();
}

/**
 * @summary 上传 Agent 会话客户端日志
 *
 * @param request UploadAgentConversationLogRequest
 * @return UploadAgentConversationLogResponse
 */
UploadAgentConversationLogResponse Client::uploadAgentConversationLog(const string &conversationId, const UploadAgentConversationLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return uploadAgentConversationLogWithOptions(conversationId, request, headers, runtime);
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
    query["clientId"] = request.getClientId();
  }

  if (!!request.hasConsumerGroupId()) {
    query["consumerGroupId"] = request.getConsumerGroupId();
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
 * @summary Tests whether messages can be sent to a specified topic in an instance.
 *
 * @param request VerifySendMessageRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return VerifySendMessageResponse
 */
VerifySendMessageResponse Client::verifySendMessageWithOptions(const string &instanceId, const string &topicName, const VerifySendMessageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDeliveryTimeStamp()) {
    body["deliveryTimeStamp"] = request.getDeliveryTimeStamp();
  }

  if (!!request.hasLiteTopicName()) {
    body["liteTopicName"] = request.getLiteTopicName();
  }

  if (!!request.hasMessage()) {
    body["message"] = request.getMessage();
  }

  if (!!request.hasMessageGroup()) {
    body["messageGroup"] = request.getMessageGroup();
  }

  if (!!request.hasMessageKey()) {
    body["messageKey"] = request.getMessageKey();
  }

  if (!!request.hasMessageTag()) {
    body["messageTag"] = request.getMessageTag();
  }

  if (!!request.hasUserProperties()) {
    body["userProperties"] = request.getUserProperties();
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
 * @summary Tests whether messages can be sent to a specified topic in an instance.
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