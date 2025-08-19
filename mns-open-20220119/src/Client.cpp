#include <darabonba/Core.hpp>
#include <alibabacloud/MnsOpen20220119.hpp>
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
using namespace AlibabaCloud::MnsOpen20220119::Models;
namespace AlibabaCloud
{
namespace MnsOpen20220119
{

AlibabaCloud::MnsOpen20220119::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("mns-open", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary You can call this operation to add one or more rules of access control lists (ACLs) for the endpoint of a type.
 *
 * @param tmpReq AuthorizeEndpointAclRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AuthorizeEndpointAclResponse
 */
AuthorizeEndpointAclResponse Client::authorizeEndpointAclWithOptions(const AuthorizeEndpointAclRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AuthorizeEndpointAclShrinkRequest request = AuthorizeEndpointAclShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCidrList()) {
    request.setCidrListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.cidrList(), "CidrList", "simple"));
  }

  json query = {};
  if (!!request.hasAclStrategy()) {
    query["AclStrategy"] = request.aclStrategy();
  }

  if (!!request.hasCidrListShrink()) {
    query["CidrList"] = request.cidrListShrink();
  }

  if (!!request.hasEndpointType()) {
    query["EndpointType"] = request.endpointType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AuthorizeEndpointAcl"},
    {"version" , "2022-01-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AuthorizeEndpointAclResponse>();
}

/**
 * @summary You can call this operation to add one or more rules of access control lists (ACLs) for the endpoint of a type.
 *
 * @param request AuthorizeEndpointAclRequest
 * @return AuthorizeEndpointAclResponse
 */
AuthorizeEndpointAclResponse Client::authorizeEndpointAcl(const AuthorizeEndpointAclRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return authorizeEndpointAclWithOptions(request, runtime);
}

/**
 * @summary 创建事件规则
 *
 * @param tmpReq CreateEventRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEventRuleResponse
 */
CreateEventRuleResponse Client::createEventRuleWithOptions(const CreateEventRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateEventRuleShrinkRequest request = CreateEventRuleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEndpoint()) {
    request.setEndpointShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.endpoint(), "Endpoint", "json"));
  }

  if (!!tmpReq.hasEndpoints()) {
    request.setEndpointsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.endpoints(), "Endpoints", "json"));
  }

  if (!!tmpReq.hasEventTypes()) {
    request.setEventTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.eventTypes(), "EventTypes", "json"));
  }

  if (!!tmpReq.hasMatchRules()) {
    request.setMatchRulesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.matchRules(), "MatchRules", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDeliveryMode()) {
    query["DeliveryMode"] = request.deliveryMode();
  }

  if (!!request.hasEndpointShrink()) {
    query["Endpoint"] = request.endpointShrink();
  }

  if (!!request.hasEndpointsShrink()) {
    query["Endpoints"] = request.endpointsShrink();
  }

  if (!!request.hasEventTypesShrink()) {
    query["EventTypes"] = request.eventTypesShrink();
  }

  if (!!request.hasMatchRulesShrink()) {
    query["MatchRules"] = request.matchRulesShrink();
  }

  if (!!request.hasProductName()) {
    query["ProductName"] = request.productName();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateEventRule"},
    {"version" , "2022-01-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateEventRuleResponse>();
}

/**
 * @summary 创建事件规则
 *
 * @param request CreateEventRuleRequest
 * @return CreateEventRuleResponse
 */
CreateEventRuleResponse Client::createEventRule(const CreateEventRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createEventRuleWithOptions(request, runtime);
}

/**
 * @summary Creates a queue.
 *
 * @param tmpReq CreateQueueRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateQueueResponse
 */
CreateQueueResponse Client::createQueueWithOptions(const CreateQueueRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateQueueShrinkRequest request = CreateQueueShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDlqPolicy()) {
    request.setDlqPolicyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.dlqPolicy(), "DlqPolicy", "json"));
  }

  if (!!tmpReq.hasTenantRateLimitPolicy()) {
    request.setTenantRateLimitPolicyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantRateLimitPolicy(), "TenantRateLimitPolicy", "json"));
  }

  json query = {};
  if (!!request.hasDelaySeconds()) {
    query["DelaySeconds"] = request.delaySeconds();
  }

  if (!!request.hasDlqPolicyShrink()) {
    query["DlqPolicy"] = request.dlqPolicyShrink();
  }

  if (!!request.hasEnableLogging()) {
    query["EnableLogging"] = request.enableLogging();
  }

  if (!!request.hasMaximumMessageSize()) {
    query["MaximumMessageSize"] = request.maximumMessageSize();
  }

  if (!!request.hasMessageRetentionPeriod()) {
    query["MessageRetentionPeriod"] = request.messageRetentionPeriod();
  }

  if (!!request.hasPollingWaitSeconds()) {
    query["PollingWaitSeconds"] = request.pollingWaitSeconds();
  }

  if (!!request.hasQueueName()) {
    query["QueueName"] = request.queueName();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasTenantRateLimitPolicyShrink()) {
    query["TenantRateLimitPolicy"] = request.tenantRateLimitPolicyShrink();
  }

  if (!!request.hasVisibilityTimeout()) {
    query["VisibilityTimeout"] = request.visibilityTimeout();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateQueue"},
    {"version" , "2022-01-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateQueueResponse>();
}

/**
 * @summary Creates a queue.
 *
 * @param request CreateQueueRequest
 * @return CreateQueueResponse
 */
CreateQueueResponse Client::createQueue(const CreateQueueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createQueueWithOptions(request, runtime);
}

/**
 * @summary Creates a topic.
 *
 * @param request CreateTopicRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTopicResponse
 */
CreateTopicResponse Client::createTopicWithOptions(const CreateTopicRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  json body = {};
  if (!!request.hasEnableLogging()) {
    body["EnableLogging"] = request.enableLogging();
  }

  if (!!request.hasMaxMessageSize()) {
    body["MaxMessageSize"] = request.maxMessageSize();
  }

  if (!!request.hasTopicName()) {
    body["TopicName"] = request.topicName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateTopic"},
    {"version" , "2022-01-19"},
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
 * @param request CreateTopicRequest
 * @return CreateTopicResponse
 */
CreateTopicResponse Client::createTopic(const CreateTopicRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTopicWithOptions(request, runtime);
}

/**
 * @summary 删除事件规则
 *
 * @param request DeleteEventRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEventRuleResponse
 */
DeleteEventRuleResponse Client::deleteEventRuleWithOptions(const DeleteEventRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProductName()) {
    query["ProductName"] = request.productName();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteEventRule"},
    {"version" , "2022-01-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteEventRuleResponse>();
}

/**
 * @summary 删除事件规则
 *
 * @param request DeleteEventRuleRequest
 * @return DeleteEventRuleResponse
 */
DeleteEventRuleResponse Client::deleteEventRule(const DeleteEventRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEventRuleWithOptions(request, runtime);
}

/**
 * @summary Deletes a queue.
 *
 * @param request DeleteQueueRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteQueueResponse
 */
DeleteQueueResponse Client::deleteQueueWithOptions(const DeleteQueueRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasQueueName()) {
    query["QueueName"] = request.queueName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteQueue"},
    {"version" , "2022-01-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteQueueResponse>();
}

/**
 * @summary Deletes a queue.
 *
 * @param request DeleteQueueRequest
 * @return DeleteQueueResponse
 */
DeleteQueueResponse Client::deleteQueue(const DeleteQueueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteQueueWithOptions(request, runtime);
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
  if (!!request.hasTopicName()) {
    query["TopicName"] = request.topicName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTopic"},
    {"version" , "2022-01-19"},
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
 * @summary You can call this operation to disenable the endpoint of a type. After the endpoint is disabled, all requests from the endpoint are blocked and an error is returned.
 *
 * @param request DisableEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableEndpointResponse
 */
DisableEndpointResponse Client::disableEndpointWithOptions(const DisableEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndpointType()) {
    query["EndpointType"] = request.endpointType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableEndpoint"},
    {"version" , "2022-01-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableEndpointResponse>();
}

/**
 * @summary You can call this operation to disenable the endpoint of a type. After the endpoint is disabled, all requests from the endpoint are blocked and an error is returned.
 *
 * @param request DisableEndpointRequest
 * @return DisableEndpointResponse
 */
DisableEndpointResponse Client::disableEndpoint(const DisableEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableEndpointWithOptions(request, runtime);
}

/**
 * @summary You can call this operation to enable the endpoint of a type. If the endpoint is enabled, requests from the endpoint that are included in the access control lists (ACLs) are not blocked.
 *
 * @param request EnableEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableEndpointResponse
 */
EnableEndpointResponse Client::enableEndpointWithOptions(const EnableEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndpointType()) {
    query["EndpointType"] = request.endpointType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableEndpoint"},
    {"version" , "2022-01-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableEndpointResponse>();
}

/**
 * @summary You can call this operation to enable the endpoint of a type. If the endpoint is enabled, requests from the endpoint that are included in the access control lists (ACLs) are not blocked.
 *
 * @param request EnableEndpointRequest
 * @return EnableEndpointResponse
 */
EnableEndpointResponse Client::enableEndpoint(const EnableEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableEndpointWithOptions(request, runtime);
}

/**
 * @summary GetEndpointAttribute
 *
 * @param request GetEndpointAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEndpointAttributeResponse
 */
GetEndpointAttributeResponse Client::getEndpointAttributeWithOptions(const GetEndpointAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndpointType()) {
    query["EndpointType"] = request.endpointType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetEndpointAttribute"},
    {"version" , "2022-01-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetEndpointAttributeResponse>();
}

/**
 * @summary GetEndpointAttribute
 *
 * @param request GetEndpointAttributeRequest
 * @return GetEndpointAttributeResponse
 */
GetEndpointAttributeResponse Client::getEndpointAttribute(const GetEndpointAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getEndpointAttributeWithOptions(request, runtime);
}

/**
 * @summary 获取事件通知规则
 *
 * @param request GetEventRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEventRuleResponse
 */
GetEventRuleResponse Client::getEventRuleWithOptions(const GetEventRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProductName()) {
    query["ProductName"] = request.productName();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetEventRule"},
    {"version" , "2022-01-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetEventRuleResponse>();
}

/**
 * @summary 获取事件通知规则
 *
 * @param request GetEventRuleRequest
 * @return GetEventRuleResponse
 */
GetEventRuleResponse Client::getEventRule(const GetEventRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getEventRuleWithOptions(request, runtime);
}

/**
 * @summary Queries the attributes of an existing queue.
 *
 * @param request GetQueueAttributesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQueueAttributesResponse
 */
GetQueueAttributesResponse Client::getQueueAttributesWithOptions(const GetQueueAttributesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasQueueName()) {
    query["QueueName"] = request.queueName();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetQueueAttributes"},
    {"version" , "2022-01-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetQueueAttributesResponse>();
}

/**
 * @summary Queries the attributes of an existing queue.
 *
 * @param request GetQueueAttributesRequest
 * @return GetQueueAttributesResponse
 */
GetQueueAttributesResponse Client::getQueueAttributes(const GetQueueAttributesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getQueueAttributesWithOptions(request, runtime);
}

/**
 * @summary Queries the attributes of a subscription.
 *
 * @param request GetSubscriptionAttributesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSubscriptionAttributesResponse
 */
GetSubscriptionAttributesResponse Client::getSubscriptionAttributesWithOptions(const GetSubscriptionAttributesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSubscriptionName()) {
    query["SubscriptionName"] = request.subscriptionName();
  }

  if (!!request.hasTopicName()) {
    query["TopicName"] = request.topicName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSubscriptionAttributes"},
    {"version" , "2022-01-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSubscriptionAttributesResponse>();
}

/**
 * @summary Queries the attributes of a subscription.
 *
 * @param request GetSubscriptionAttributesRequest
 * @return GetSubscriptionAttributesResponse
 */
GetSubscriptionAttributesResponse Client::getSubscriptionAttributes(const GetSubscriptionAttributesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSubscriptionAttributesWithOptions(request, runtime);
}

/**
 * @summary Queries the attributes of a topic.
 *
 * @param request GetTopicAttributesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTopicAttributesResponse
 */
GetTopicAttributesResponse Client::getTopicAttributesWithOptions(const GetTopicAttributesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasTopicName()) {
    query["TopicName"] = request.topicName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTopicAttributes"},
    {"version" , "2022-01-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTopicAttributesResponse>();
}

/**
 * @summary Queries the attributes of a topic.
 *
 * @param request GetTopicAttributesRequest
 * @return GetTopicAttributesResponse
 */
GetTopicAttributesResponse Client::getTopicAttributes(const GetTopicAttributesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTopicAttributesWithOptions(request, runtime);
}

/**
 * @summary 查询事件通知列表
 *
 * @param tmpReq ListEventRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEventRulesResponse
 */
ListEventRulesResponse Client::listEventRulesWithOptions(const ListEventRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListEventRulesShrinkRequest request = ListEventRulesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSubscription()) {
    request.setSubscriptionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.subscription(), "Subscription", "json"));
  }

  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasProductName()) {
    query["ProductName"] = request.productName();
  }

  if (!!request.hasResourceName()) {
    query["ResourceName"] = request.resourceName();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  if (!!request.hasSubscriptionShrink()) {
    query["Subscription"] = request.subscriptionShrink();
  }

  if (!!request.hasTopicName()) {
    query["TopicName"] = request.topicName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEventRules"},
    {"version" , "2022-01-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEventRulesResponse>();
}

/**
 * @summary 查询事件通知列表
 *
 * @param request ListEventRulesRequest
 * @return ListEventRulesResponse
 */
ListEventRulesResponse Client::listEventRules(const ListEventRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEventRulesWithOptions(request, runtime);
}

/**
 * @summary Queries all queues that belong to an Alibaba Cloud account. The queues are displayed by page.
 *
 * @param request ListQueueRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListQueueResponse
 */
ListQueueResponse Client::listQueueWithOptions(const ListQueueRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasQueueName()) {
    query["QueueName"] = request.queueName();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListQueue"},
    {"version" , "2022-01-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListQueueResponse>();
}

/**
 * @summary Queries all queues that belong to an Alibaba Cloud account. The queues are displayed by page.
 *
 * @param request ListQueueRequest
 * @return ListQueueResponse
 */
ListQueueResponse Client::listQueue(const ListQueueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listQueueWithOptions(request, runtime);
}

/**
 * @summary Queries all subscriptions to a topic. The subscriptions are displayed by page.
 *
 * @param request ListSubscriptionByTopicRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSubscriptionByTopicResponse
 */
ListSubscriptionByTopicResponse Client::listSubscriptionByTopicWithOptions(const ListSubscriptionByTopicRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndpointType()) {
    query["EndpointType"] = request.endpointType();
  }

  if (!!request.hasEndpointValue()) {
    query["EndpointValue"] = request.endpointValue();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSubscriptionName()) {
    query["SubscriptionName"] = request.subscriptionName();
  }

  if (!!request.hasTopicName()) {
    query["TopicName"] = request.topicName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSubscriptionByTopic"},
    {"version" , "2022-01-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSubscriptionByTopicResponse>();
}

/**
 * @summary Queries all subscriptions to a topic. The subscriptions are displayed by page.
 *
 * @param request ListSubscriptionByTopicRequest
 * @return ListSubscriptionByTopicResponse
 */
ListSubscriptionByTopicResponse Client::listSubscriptionByTopic(const ListSubscriptionByTopicRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSubscriptionByTopicWithOptions(request, runtime);
}

/**
 * @summary Queries the topics that belong to an Alibaba Cloud account. The topics are displayed by page.
 *
 * @param request ListTopicRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTopicResponse
 */
ListTopicResponse Client::listTopicWithOptions(const ListTopicRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasTopicName()) {
    query["TopicName"] = request.topicName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTopic"},
    {"version" , "2022-01-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTopicResponse>();
}

/**
 * @summary Queries the topics that belong to an Alibaba Cloud account. The topics are displayed by page.
 *
 * @param request ListTopicRequest
 * @return ListTopicResponse
 */
ListTopicResponse Client::listTopic(const ListTopicRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTopicWithOptions(request, runtime);
}

/**
 * @summary You can call this operation to delete one or more rules of access control lists (ACLs) for the endpoint of a type.
 *
 * @param tmpReq RevokeEndpointAclRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevokeEndpointAclResponse
 */
RevokeEndpointAclResponse Client::revokeEndpointAclWithOptions(const RevokeEndpointAclRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RevokeEndpointAclShrinkRequest request = RevokeEndpointAclShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCidrList()) {
    request.setCidrListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.cidrList(), "CidrList", "simple"));
  }

  json query = {};
  if (!!request.hasAclStrategy()) {
    query["AclStrategy"] = request.aclStrategy();
  }

  if (!!request.hasCidrListShrink()) {
    query["CidrList"] = request.cidrListShrink();
  }

  if (!!request.hasEndpointType()) {
    query["EndpointType"] = request.endpointType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RevokeEndpointAcl"},
    {"version" , "2022-01-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RevokeEndpointAclResponse>();
}

/**
 * @summary You can call this operation to delete one or more rules of access control lists (ACLs) for the endpoint of a type.
 *
 * @param request RevokeEndpointAclRequest
 * @return RevokeEndpointAclResponse
 */
RevokeEndpointAclResponse Client::revokeEndpointAcl(const RevokeEndpointAclRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return revokeEndpointAclWithOptions(request, runtime);
}

/**
 * @summary Modifies a queue.
 *
 * @param tmpReq SetQueueAttributesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetQueueAttributesResponse
 */
SetQueueAttributesResponse Client::setQueueAttributesWithOptions(const SetQueueAttributesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SetQueueAttributesShrinkRequest request = SetQueueAttributesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDlqPolicy()) {
    request.setDlqPolicyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.dlqPolicy(), "DlqPolicy", "json"));
  }

  if (!!tmpReq.hasTenantRateLimitPolicy()) {
    request.setTenantRateLimitPolicyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantRateLimitPolicy(), "TenantRateLimitPolicy", "json"));
  }

  json query = {};
  if (!!request.hasDelaySeconds()) {
    query["DelaySeconds"] = request.delaySeconds();
  }

  if (!!request.hasDlqPolicyShrink()) {
    query["DlqPolicy"] = request.dlqPolicyShrink();
  }

  if (!!request.hasEnableLogging()) {
    query["EnableLogging"] = request.enableLogging();
  }

  if (!!request.hasMaximumMessageSize()) {
    query["MaximumMessageSize"] = request.maximumMessageSize();
  }

  if (!!request.hasMessageRetentionPeriod()) {
    query["MessageRetentionPeriod"] = request.messageRetentionPeriod();
  }

  if (!!request.hasPollingWaitSeconds()) {
    query["PollingWaitSeconds"] = request.pollingWaitSeconds();
  }

  if (!!request.hasQueueName()) {
    query["QueueName"] = request.queueName();
  }

  if (!!request.hasTenantRateLimitPolicyShrink()) {
    query["TenantRateLimitPolicy"] = request.tenantRateLimitPolicyShrink();
  }

  if (!!request.hasVisibilityTimeout()) {
    query["VisibilityTimeout"] = request.visibilityTimeout();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetQueueAttributes"},
    {"version" , "2022-01-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetQueueAttributesResponse>();
}

/**
 * @summary Modifies a queue.
 *
 * @param request SetQueueAttributesRequest
 * @return SetQueueAttributesResponse
 */
SetQueueAttributesResponse Client::setQueueAttributes(const SetQueueAttributesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setQueueAttributesWithOptions(request, runtime);
}

/**
 * @summary Modifies the attributes of a subscription.
 *
 * @param tmpReq SetSubscriptionAttributesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetSubscriptionAttributesResponse
 */
SetSubscriptionAttributesResponse Client::setSubscriptionAttributesWithOptions(const SetSubscriptionAttributesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SetSubscriptionAttributesShrinkRequest request = SetSubscriptionAttributesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDlqPolicy()) {
    request.setDlqPolicyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.dlqPolicy(), "DlqPolicy", "json"));
  }

  if (!!tmpReq.hasTenantRateLimitPolicy()) {
    request.setTenantRateLimitPolicyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantRateLimitPolicy(), "TenantRateLimitPolicy", "json"));
  }

  json query = {};
  if (!!request.hasDlqPolicyShrink()) {
    query["DlqPolicy"] = request.dlqPolicyShrink();
  }

  if (!!request.hasNotifyStrategy()) {
    query["NotifyStrategy"] = request.notifyStrategy();
  }

  if (!!request.hasSubscriptionName()) {
    query["SubscriptionName"] = request.subscriptionName();
  }

  if (!!request.hasTenantRateLimitPolicyShrink()) {
    query["TenantRateLimitPolicy"] = request.tenantRateLimitPolicyShrink();
  }

  if (!!request.hasTopicName()) {
    query["TopicName"] = request.topicName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetSubscriptionAttributes"},
    {"version" , "2022-01-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetSubscriptionAttributesResponse>();
}

/**
 * @summary Modifies the attributes of a subscription.
 *
 * @param request SetSubscriptionAttributesRequest
 * @return SetSubscriptionAttributesResponse
 */
SetSubscriptionAttributesResponse Client::setSubscriptionAttributes(const SetSubscriptionAttributesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setSubscriptionAttributesWithOptions(request, runtime);
}

/**
 * @summary Modifies the attributes of a topic.
 *
 * @param request SetTopicAttributesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetTopicAttributesResponse
 */
SetTopicAttributesResponse Client::setTopicAttributesWithOptions(const SetTopicAttributesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnableLogging()) {
    query["EnableLogging"] = request.enableLogging();
  }

  if (!!request.hasMaxMessageSize()) {
    query["MaxMessageSize"] = request.maxMessageSize();
  }

  if (!!request.hasTopicName()) {
    query["TopicName"] = request.topicName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetTopicAttributes"},
    {"version" , "2022-01-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetTopicAttributesResponse>();
}

/**
 * @summary Modifies the attributes of a topic.
 *
 * @param request SetTopicAttributesRequest
 * @return SetTopicAttributesResponse
 */
SetTopicAttributesResponse Client::setTopicAttributes(const SetTopicAttributesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setTopicAttributesWithOptions(request, runtime);
}

/**
 * @summary Creates a subscription to a topic.
 *
 * @param tmpReq SubscribeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubscribeResponse
 */
SubscribeResponse Client::subscribeWithOptions(const SubscribeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubscribeShrinkRequest request = SubscribeShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDlqPolicy()) {
    request.setDlqPolicyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.dlqPolicy(), "DlqPolicy", "json"));
  }

  if (!!tmpReq.hasDmAttributes()) {
    request.setDmAttributesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.dmAttributes(), "DmAttributes", "json"));
  }

  if (!!tmpReq.hasDysmsAttributes()) {
    request.setDysmsAttributesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.dysmsAttributes(), "DysmsAttributes", "json"));
  }

  if (!!tmpReq.hasKafkaAttributes()) {
    request.setKafkaAttributesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.kafkaAttributes(), "KafkaAttributes", "json"));
  }

  if (!!tmpReq.hasTenantRateLimitPolicy()) {
    request.setTenantRateLimitPolicyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantRateLimitPolicy(), "TenantRateLimitPolicy", "json"));
  }

  json query = {};
  if (!!request.hasDlqPolicyShrink()) {
    query["DlqPolicy"] = request.dlqPolicyShrink();
  }

  if (!!request.hasDmAttributesShrink()) {
    query["DmAttributes"] = request.dmAttributesShrink();
  }

  if (!!request.hasDysmsAttributesShrink()) {
    query["DysmsAttributes"] = request.dysmsAttributesShrink();
  }

  if (!!request.hasEndpoint()) {
    query["Endpoint"] = request.endpoint();
  }

  if (!!request.hasKafkaAttributesShrink()) {
    query["KafkaAttributes"] = request.kafkaAttributesShrink();
  }

  if (!!request.hasMessageTag()) {
    query["MessageTag"] = request.messageTag();
  }

  if (!!request.hasNotifyContentFormat()) {
    query["NotifyContentFormat"] = request.notifyContentFormat();
  }

  if (!!request.hasNotifyStrategy()) {
    query["NotifyStrategy"] = request.notifyStrategy();
  }

  if (!!request.hasPushType()) {
    query["PushType"] = request.pushType();
  }

  if (!!request.hasStsRoleArn()) {
    query["StsRoleArn"] = request.stsRoleArn();
  }

  if (!!request.hasSubscriptionName()) {
    query["SubscriptionName"] = request.subscriptionName();
  }

  if (!!request.hasTenantRateLimitPolicyShrink()) {
    query["TenantRateLimitPolicy"] = request.tenantRateLimitPolicyShrink();
  }

  if (!!request.hasTopicName()) {
    query["TopicName"] = request.topicName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "Subscribe"},
    {"version" , "2022-01-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubscribeResponse>();
}

/**
 * @summary Creates a subscription to a topic.
 *
 * @param request SubscribeRequest
 * @return SubscribeResponse
 */
SubscribeResponse Client::subscribe(const SubscribeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return subscribeWithOptions(request, runtime);
}

/**
 * @summary Deletes a subscription.
 *
 * @param request UnsubscribeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnsubscribeResponse
 */
UnsubscribeResponse Client::unsubscribeWithOptions(const UnsubscribeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSubscriptionName()) {
    query["SubscriptionName"] = request.subscriptionName();
  }

  if (!!request.hasTopicName()) {
    query["TopicName"] = request.topicName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "Unsubscribe"},
    {"version" , "2022-01-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnsubscribeResponse>();
}

/**
 * @summary Deletes a subscription.
 *
 * @param request UnsubscribeRequest
 * @return UnsubscribeResponse
 */
UnsubscribeResponse Client::unsubscribe(const UnsubscribeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unsubscribeWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace MnsOpen20220119