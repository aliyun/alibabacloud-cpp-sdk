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
  this->_endpointMap = json({
    {"us-west-1" , "mns-open.us-west-1.aliyuncs.com"},
    {"us-east-1" , "mns-open.us-east-1.aliyuncs.com"},
    {"me-east-1" , "mns-open.me-east-1.aliyuncs.com"},
    {"me-central-1" , "mns-open.me-central-1.aliyuncs.com"},
    {"eu-west-1" , "mns-open.eu-west-1.aliyuncs.com"},
    {"eu-central-1" , "mns-open.eu-central-1.aliyuncs.com"},
    {"cn-zhengzhou-jva" , "mns-open.cn-zhengzhou-jva.aliyuncs.com"},
    {"cn-zhangjiakou" , "mns-open.cn-zhangjiakou.aliyuncs.com"},
    {"cn-wulanchabu" , "mns-open.cn-wulanchabu.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "mns-open.cn-shenzhen-finance-1.aliyuncs.com"},
    {"cn-shenzhen" , "mns-open.cn-shenzhen.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "mns-open.cn-shanghai-finance-1.aliyuncs.com"},
    {"cn-shanghai" , "mns-open.cn-shanghai.aliyuncs.com"},
    {"cn-qingdao" , "mns-open.cn-qingdao.aliyuncs.com"},
    {"cn-huhehaote" , "mns-open.cn-huhehaote.aliyuncs.com"},
    {"cn-hongkong" , "mns-open.cn-hongkong.aliyuncs.com"},
    {"cn-heyuan-acdr-1" , "mns-open.cn-heyuan-acdr-1.aliyuncs.com"},
    {"cn-heyuan" , "mns-open.cn-heyuan.aliyuncs.com"},
    {"cn-hangzhou-finance" , "mns-open.cn-hangzhou-finance.aliyuncs.com"},
    {"cn-hangzhou" , "mns-open.cn-hangzhou.aliyuncs.com"},
    {"cn-guangzhou" , "mns-open.cn-guangzhou.aliyuncs.com"},
    {"cn-chengdu" , "mns-open.cn-chengdu.aliyuncs.com"},
    {"cn-beijing" , "mns-open.cn-beijing.aliyuncs.com"},
    {"ap-southeast-7" , "mns-open.ap-southeast-7.aliyuncs.com"},
    {"ap-southeast-5" , "mns-open.ap-southeast-5.aliyuncs.com"},
    {"ap-southeast-3" , "mns-open.ap-southeast-3.aliyuncs.com"},
    {"ap-southeast-1" , "mns-open.ap-southeast-1.aliyuncs.com"},
    {"ap-northeast-2" , "mns-open.ap-northeast-2.aliyuncs.com"},
    {"ap-northeast-1" , "mns-open.ap-northeast-1.aliyuncs.com"}
  }).get<map<string, string>>();
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
 * @summary Adds one or more Access Control List (ACL) rules to an endpoint of a specified type.
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
    request.setCidrListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCidrList(), "CidrList", "simple"));
  }

  json query = {};
  if (!!request.hasAclStrategy()) {
    query["AclStrategy"] = request.getAclStrategy();
  }

  if (!!request.hasCidrListShrink()) {
    query["CidrList"] = request.getCidrListShrink();
  }

  if (!!request.hasEndpointType()) {
    query["EndpointType"] = request.getEndpointType();
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
 * @summary Adds one or more Access Control List (ACL) rules to an endpoint of a specified type.
 *
 * @param request AuthorizeEndpointAclRequest
 * @return AuthorizeEndpointAclResponse
 */
AuthorizeEndpointAclResponse Client::authorizeEndpointAcl(const AuthorizeEndpointAclRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return authorizeEndpointAclWithOptions(request, runtime);
}

/**
 * @summary Creates an event rule.
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
    request.setEndpointShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getEndpoint(), "Endpoint", "json"));
  }

  if (!!tmpReq.hasEndpoints()) {
    request.setEndpointsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getEndpoints(), "Endpoints", "json"));
  }

  if (!!tmpReq.hasEventTypes()) {
    request.setEventTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getEventTypes(), "EventTypes", "json"));
  }

  if (!!tmpReq.hasMatchRules()) {
    request.setMatchRulesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMatchRules(), "MatchRules", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDeliveryMode()) {
    query["DeliveryMode"] = request.getDeliveryMode();
  }

  if (!!request.hasEndpointShrink()) {
    query["Endpoint"] = request.getEndpointShrink();
  }

  if (!!request.hasEndpointsShrink()) {
    query["Endpoints"] = request.getEndpointsShrink();
  }

  if (!!request.hasEventTypesShrink()) {
    query["EventTypes"] = request.getEventTypesShrink();
  }

  if (!!request.hasMatchRulesShrink()) {
    query["MatchRules"] = request.getMatchRulesShrink();
  }

  if (!!request.hasProductName()) {
    query["ProductName"] = request.getProductName();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
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
 * @summary Creates an event rule.
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
    request.setDlqPolicyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDlqPolicy(), "DlqPolicy", "json"));
  }

  if (!!tmpReq.hasTenantRateLimitPolicy()) {
    request.setTenantRateLimitPolicyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTenantRateLimitPolicy(), "TenantRateLimitPolicy", "json"));
  }

  json query = {};
  if (!!request.hasDelaySeconds()) {
    query["DelaySeconds"] = request.getDelaySeconds();
  }

  if (!!request.hasDlqPolicyShrink()) {
    query["DlqPolicy"] = request.getDlqPolicyShrink();
  }

  if (!!request.hasEnableLogging()) {
    query["EnableLogging"] = request.getEnableLogging();
  }

  if (!!request.hasEnableSSE()) {
    query["EnableSSE"] = request.getEnableSSE();
  }

  if (!!request.hasKmsKeyId()) {
    query["KmsKeyId"] = request.getKmsKeyId();
  }

  if (!!request.hasMaximumMessageSize()) {
    query["MaximumMessageSize"] = request.getMaximumMessageSize();
  }

  if (!!request.hasMessageRetentionPeriod()) {
    query["MessageRetentionPeriod"] = request.getMessageRetentionPeriod();
  }

  if (!!request.hasPollingWaitSeconds()) {
    query["PollingWaitSeconds"] = request.getPollingWaitSeconds();
  }

  if (!!request.hasQueueName()) {
    query["QueueName"] = request.getQueueName();
  }

  if (!!request.hasQueueType()) {
    query["QueueType"] = request.getQueueType();
  }

  if (!!request.hasSseAlgorithm()) {
    query["SseAlgorithm"] = request.getSseAlgorithm();
  }

  if (!!request.hasSseType()) {
    query["SseType"] = request.getSseType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasTenantRateLimitPolicyShrink()) {
    query["TenantRateLimitPolicy"] = request.getTenantRateLimitPolicyShrink();
  }

  if (!!request.hasVisibilityTimeout()) {
    query["VisibilityTimeout"] = request.getVisibilityTimeout();
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
 * @summary Calls the CreateTopic operation to create a topic.
 *
 * @param request CreateTopicRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTopicResponse
 */
CreateTopicResponse Client::createTopicWithOptions(const CreateTopicRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasTopicType()) {
    query["TopicType"] = request.getTopicType();
  }

  json body = {};
  if (!!request.hasEnableLogging()) {
    body["EnableLogging"] = request.getEnableLogging();
  }

  if (!!request.hasEnableSSE()) {
    body["EnableSSE"] = request.getEnableSSE();
  }

  if (!!request.hasKmsKeyId()) {
    body["KmsKeyId"] = request.getKmsKeyId();
  }

  if (!!request.hasMaxMessageSize()) {
    body["MaxMessageSize"] = request.getMaxMessageSize();
  }

  if (!!request.hasSseAlgorithm()) {
    body["SseAlgorithm"] = request.getSseAlgorithm();
  }

  if (!!request.hasSseType()) {
    body["SseType"] = request.getSseType();
  }

  if (!!request.hasTopicName()) {
    body["TopicName"] = request.getTopicName();
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
 * @summary Calls the CreateTopic operation to create a topic.
 *
 * @param request CreateTopicRequest
 * @return CreateTopicResponse
 */
CreateTopicResponse Client::createTopic(const CreateTopicRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTopicWithOptions(request, runtime);
}

/**
 * @summary Deletes an event rule.
 *
 * @param request DeleteEventRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEventRuleResponse
 */
DeleteEventRuleResponse Client::deleteEventRuleWithOptions(const DeleteEventRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProductName()) {
    query["ProductName"] = request.getProductName();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
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
 * @summary Deletes an event rule.
 *
 * @param request DeleteEventRuleRequest
 * @return DeleteEventRuleResponse
 */
DeleteEventRuleResponse Client::deleteEventRule(const DeleteEventRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEventRuleWithOptions(request, runtime);
}

/**
 * @summary Calls the DeleteQueue operation to delete a created queue.
 *
 * @param request DeleteQueueRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteQueueResponse
 */
DeleteQueueResponse Client::deleteQueueWithOptions(const DeleteQueueRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasQueueName()) {
    query["QueueName"] = request.getQueueName();
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
 * @summary Calls the DeleteQueue operation to delete a created queue.
 *
 * @param request DeleteQueueRequest
 * @return DeleteQueueResponse
 */
DeleteQueueResponse Client::deleteQueue(const DeleteQueueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteQueueWithOptions(request, runtime);
}

/**
 * @summary Calls the DeleteTopic operation to delete a topic.
 *
 * @param request DeleteTopicRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTopicResponse
 */
DeleteTopicResponse Client::deleteTopicWithOptions(const DeleteTopicRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTopicName()) {
    query["TopicName"] = request.getTopicName();
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
 * @summary Calls the DeleteTopic operation to delete a topic.
 *
 * @param request DeleteTopicRequest
 * @return DeleteTopicResponse
 */
DeleteTopicResponse Client::deleteTopic(const DeleteTopicRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTopicWithOptions(request, runtime);
}

/**
 * @summary This operation disables an endpoint of a specified type, blocking all subsequent requests from the endpoint and returning an error.
 *
 * @param request DisableEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableEndpointResponse
 */
DisableEndpointResponse Client::disableEndpointWithOptions(const DisableEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndpointType()) {
    query["EndpointType"] = request.getEndpointType();
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
 * @summary This operation disables an endpoint of a specified type, blocking all subsequent requests from the endpoint and returning an error.
 *
 * @param request DisableEndpointRequest
 * @return DisableEndpointResponse
 */
DisableEndpointResponse Client::disableEndpoint(const DisableEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableEndpointWithOptions(request, runtime);
}

/**
 * @summary This operation enables an endpoint of a specified type. After the endpoint is enabled, requests that originate from the endpoint and are on the Access Control List (ACL) whitelist are not blocked.
 *
 * @param request EnableEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableEndpointResponse
 */
EnableEndpointResponse Client::enableEndpointWithOptions(const EnableEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndpointType()) {
    query["EndpointType"] = request.getEndpointType();
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
 * @summary This operation enables an endpoint of a specified type. After the endpoint is enabled, requests that originate from the endpoint and are on the Access Control List (ACL) whitelist are not blocked.
 *
 * @param request EnableEndpointRequest
 * @return EnableEndpointResponse
 */
EnableEndpointResponse Client::enableEndpoint(const EnableEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableEndpointWithOptions(request, runtime);
}

/**
 * @summary Queries the attributes of an endpoint.
 *
 * @param request GetEndpointAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEndpointAttributeResponse
 */
GetEndpointAttributeResponse Client::getEndpointAttributeWithOptions(const GetEndpointAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndpointType()) {
    query["EndpointType"] = request.getEndpointType();
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
 * @summary Queries the attributes of an endpoint.
 *
 * @param request GetEndpointAttributeRequest
 * @return GetEndpointAttributeResponse
 */
GetEndpointAttributeResponse Client::getEndpointAttribute(const GetEndpointAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getEndpointAttributeWithOptions(request, runtime);
}

/**
 * @summary Retrieves an event notification rule.
 *
 * @param request GetEventRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEventRuleResponse
 */
GetEventRuleResponse Client::getEventRuleWithOptions(const GetEventRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProductName()) {
    query["ProductName"] = request.getProductName();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
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
 * @summary Retrieves an event notification rule.
 *
 * @param request GetEventRuleRequest
 * @return GetEventRuleResponse
 */
GetEventRuleResponse Client::getEventRule(const GetEventRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getEventRuleWithOptions(request, runtime);
}

/**
 * @summary Retrieves the attributes of a created queue.
 *
 * @description >Warning: 
 * <p>For optimization of service performance, Simple Message Queue (formerly MNS) will offline the return values of the following fields (the default value will be 0):
 *     - ActiveMessages
 *     - InactiveMessages
 *     - DelayMessages 
 *   </p>
 *   <p>Use the following alternatives to obtain replacement solutions:</p>
 *   <ul>
 *     <li>Use the CloudMonitor OpenAPI to retrieve queue monitoring metrics. For more information, see <a href="https://api.aliyun.com/api/Cms/2019-01-01/DescribeMetricLast?RegionId=ap-southeast-1&params={%22Namespace%22:%22acs_smq%22,%22MetricName%22:%22NumberOfMessagesVisible%22}&tab=DEBUG">CloudMonitor OpenAPI documentation</a></li>
 *     <li> <a href="https://cloudmonitornext.console.aliyun.com/metric-meta/acs_smq/smq/all?spm=5176.2020520111.0.0.5d0c66102s05T4">CloudMonitor monitoring metrics documentation</a>. The mapping between deprecated fields and monitoring metrics:
 *       <ul>
 *         <li>ActiveMessages → monitoring metric NumberOfMessagesVisible</li>
 *         <li>InactiveMessages → monitoring metric NumberOfMessagesInvisible</li>
 *         <li>DelayMessages → monitoring metric NumberOfMessagesDelayed</li>
 *       </ul>
 *     </li>
 *   </ul>
 * </warning>
 *
 * @param request GetQueueAttributesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQueueAttributesResponse
 */
GetQueueAttributesResponse Client::getQueueAttributesWithOptions(const GetQueueAttributesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasQueueName()) {
    query["QueueName"] = request.getQueueName();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
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
 * @summary Retrieves the attributes of a created queue.
 *
 * @description >Warning: 
 * <p>For optimization of service performance, Simple Message Queue (formerly MNS) will offline the return values of the following fields (the default value will be 0):
 *     - ActiveMessages
 *     - InactiveMessages
 *     - DelayMessages 
 *   </p>
 *   <p>Use the following alternatives to obtain replacement solutions:</p>
 *   <ul>
 *     <li>Use the CloudMonitor OpenAPI to retrieve queue monitoring metrics. For more information, see <a href="https://api.aliyun.com/api/Cms/2019-01-01/DescribeMetricLast?RegionId=ap-southeast-1&params={%22Namespace%22:%22acs_smq%22,%22MetricName%22:%22NumberOfMessagesVisible%22}&tab=DEBUG">CloudMonitor OpenAPI documentation</a></li>
 *     <li> <a href="https://cloudmonitornext.console.aliyun.com/metric-meta/acs_smq/smq/all?spm=5176.2020520111.0.0.5d0c66102s05T4">CloudMonitor monitoring metrics documentation</a>. The mapping between deprecated fields and monitoring metrics:
 *       <ul>
 *         <li>ActiveMessages → monitoring metric NumberOfMessagesVisible</li>
 *         <li>InactiveMessages → monitoring metric NumberOfMessagesInvisible</li>
 *         <li>DelayMessages → monitoring metric NumberOfMessagesDelayed</li>
 *       </ul>
 *     </li>
 *   </ul>
 * </warning>
 *
 * @param request GetQueueAttributesRequest
 * @return GetQueueAttributesResponse
 */
GetQueueAttributesResponse Client::getQueueAttributes(const GetQueueAttributesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getQueueAttributesWithOptions(request, runtime);
}

/**
 * @summary Retrieves the properties of a subscription.
 *
 * @param request GetSubscriptionAttributesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSubscriptionAttributesResponse
 */
GetSubscriptionAttributesResponse Client::getSubscriptionAttributesWithOptions(const GetSubscriptionAttributesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSubscriptionName()) {
    query["SubscriptionName"] = request.getSubscriptionName();
  }

  if (!!request.hasTopicName()) {
    query["TopicName"] = request.getTopicName();
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
 * @summary Retrieves the properties of a subscription.
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
    query["Tag"] = request.getTag();
  }

  if (!!request.hasTopicName()) {
    query["TopicName"] = request.getTopicName();
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
 * @summary Queries a list of event notification rules.
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
    request.setSubscriptionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSubscription(), "Subscription", "json"));
  }

  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProductName()) {
    query["ProductName"] = request.getProductName();
  }

  if (!!request.hasResourceName()) {
    query["ResourceName"] = request.getResourceName();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasSubscriptionShrink()) {
    query["Subscription"] = request.getSubscriptionShrink();
  }

  if (!!request.hasTopicName()) {
    query["TopicName"] = request.getTopicName();
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
 * @summary Queries a list of event notification rules.
 *
 * @param request ListEventRulesRequest
 * @return ListEventRulesResponse
 */
ListEventRulesResponse Client::listEventRules(const ListEventRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEventRulesWithOptions(request, runtime);
}

/**
 * @summary Lists all queues under a specified Alibaba Cloud account with pagination support.
 *
 * @param request ListQueueRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListQueueResponse
 */
ListQueueResponse Client::listQueueWithOptions(const ListQueueRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasQueueName()) {
    query["QueueName"] = request.getQueueName();
  }

  if (!!request.hasQueueType()) {
    query["QueueType"] = request.getQueueType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
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
 * @summary Lists all queues under a specified Alibaba Cloud account with pagination support.
 *
 * @param request ListQueueRequest
 * @return ListQueueResponse
 */
ListQueueResponse Client::listQueue(const ListQueueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listQueueWithOptions(request, runtime);
}

/**
 * @summary You can call the ListSubscriptionByTopic operation to retrieve a paginated list of subscriptions for a topic.
 *
 * @param request ListSubscriptionByTopicRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSubscriptionByTopicResponse
 */
ListSubscriptionByTopicResponse Client::listSubscriptionByTopicWithOptions(const ListSubscriptionByTopicRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndpointType()) {
    query["EndpointType"] = request.getEndpointType();
  }

  if (!!request.hasEndpointValue()) {
    query["EndpointValue"] = request.getEndpointValue();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSubscriptionName()) {
    query["SubscriptionName"] = request.getSubscriptionName();
  }

  if (!!request.hasTopicName()) {
    query["TopicName"] = request.getTopicName();
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
 * @summary You can call the ListSubscriptionByTopic operation to retrieve a paginated list of subscriptions for a topic.
 *
 * @param request ListSubscriptionByTopicRequest
 * @return ListSubscriptionByTopicResponse
 */
ListSubscriptionByTopicResponse Client::listSubscriptionByTopic(const ListSubscriptionByTopicRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSubscriptionByTopicWithOptions(request, runtime);
}

/**
 * @summary Queries the list of topics under an Alibaba Cloud account with paginated results.
 *
 * @param request ListTopicRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTopicResponse
 */
ListTopicResponse Client::listTopicWithOptions(const ListTopicRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasTopicName()) {
    query["TopicName"] = request.getTopicName();
  }

  if (!!request.hasTopicType()) {
    query["TopicType"] = request.getTopicType();
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
 * @summary Queries the list of topics under an Alibaba Cloud account with paginated results.
 *
 * @param request ListTopicRequest
 * @return ListTopicResponse
 */
ListTopicResponse Client::listTopic(const ListTopicRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTopicWithOptions(request, runtime);
}

/**
 * @summary Revokes one or more Access Control List (ACL) rules for a specified endpoint type.
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
    request.setCidrListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCidrList(), "CidrList", "simple"));
  }

  json query = {};
  if (!!request.hasAclStrategy()) {
    query["AclStrategy"] = request.getAclStrategy();
  }

  if (!!request.hasCidrListShrink()) {
    query["CidrList"] = request.getCidrListShrink();
  }

  if (!!request.hasEndpointType()) {
    query["EndpointType"] = request.getEndpointType();
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
 * @summary Revokes one or more Access Control List (ACL) rules for a specified endpoint type.
 *
 * @param request RevokeEndpointAclRequest
 * @return RevokeEndpointAclResponse
 */
RevokeEndpointAclResponse Client::revokeEndpointAcl(const RevokeEndpointAclRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return revokeEndpointAclWithOptions(request, runtime);
}

/**
 * @summary Calls the SetQueueAttributes operation to modify queue attributes.
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
    request.setDlqPolicyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDlqPolicy(), "DlqPolicy", "json"));
  }

  if (!!tmpReq.hasTenantRateLimitPolicy()) {
    request.setTenantRateLimitPolicyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTenantRateLimitPolicy(), "TenantRateLimitPolicy", "json"));
  }

  json query = {};
  if (!!request.hasDelaySeconds()) {
    query["DelaySeconds"] = request.getDelaySeconds();
  }

  if (!!request.hasDlqPolicyShrink()) {
    query["DlqPolicy"] = request.getDlqPolicyShrink();
  }

  if (!!request.hasEnableLogging()) {
    query["EnableLogging"] = request.getEnableLogging();
  }

  if (!!request.hasEnableSSE()) {
    query["EnableSSE"] = request.getEnableSSE();
  }

  if (!!request.hasKmsKeyId()) {
    query["KmsKeyId"] = request.getKmsKeyId();
  }

  if (!!request.hasMaximumMessageSize()) {
    query["MaximumMessageSize"] = request.getMaximumMessageSize();
  }

  if (!!request.hasMessageRetentionPeriod()) {
    query["MessageRetentionPeriod"] = request.getMessageRetentionPeriod();
  }

  if (!!request.hasPollingWaitSeconds()) {
    query["PollingWaitSeconds"] = request.getPollingWaitSeconds();
  }

  if (!!request.hasQueueName()) {
    query["QueueName"] = request.getQueueName();
  }

  if (!!request.hasSseAlgorithm()) {
    query["SseAlgorithm"] = request.getSseAlgorithm();
  }

  if (!!request.hasSseType()) {
    query["SseType"] = request.getSseType();
  }

  if (!!request.hasTenantRateLimitPolicyShrink()) {
    query["TenantRateLimitPolicy"] = request.getTenantRateLimitPolicyShrink();
  }

  if (!!request.hasVisibilityTimeout()) {
    query["VisibilityTimeout"] = request.getVisibilityTimeout();
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
 * @summary Calls the SetQueueAttributes operation to modify queue attributes.
 *
 * @param request SetQueueAttributesRequest
 * @return SetQueueAttributesResponse
 */
SetQueueAttributesResponse Client::setQueueAttributes(const SetQueueAttributesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setQueueAttributesWithOptions(request, runtime);
}

/**
 * @summary Call the SetSubscriptionAttributes operation to modify a subscription\\"s attributes.
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
    request.setDlqPolicyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDlqPolicy(), "DlqPolicy", "json"));
  }

  if (!!tmpReq.hasTenantRateLimitPolicy()) {
    request.setTenantRateLimitPolicyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTenantRateLimitPolicy(), "TenantRateLimitPolicy", "json"));
  }

  json query = {};
  if (!!request.hasDlqPolicyShrink()) {
    query["DlqPolicy"] = request.getDlqPolicyShrink();
  }

  if (!!request.hasNotifyStrategy()) {
    query["NotifyStrategy"] = request.getNotifyStrategy();
  }

  if (!!request.hasStsRoleArn()) {
    query["StsRoleArn"] = request.getStsRoleArn();
  }

  if (!!request.hasSubscriptionName()) {
    query["SubscriptionName"] = request.getSubscriptionName();
  }

  if (!!request.hasTenantRateLimitPolicyShrink()) {
    query["TenantRateLimitPolicy"] = request.getTenantRateLimitPolicyShrink();
  }

  if (!!request.hasTopicName()) {
    query["TopicName"] = request.getTopicName();
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
 * @summary Call the SetSubscriptionAttributes operation to modify a subscription\\"s attributes.
 *
 * @param request SetSubscriptionAttributesRequest
 * @return SetSubscriptionAttributesResponse
 */
SetSubscriptionAttributesResponse Client::setSubscriptionAttributes(const SetSubscriptionAttributesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setSubscriptionAttributesWithOptions(request, runtime);
}

/**
 * @summary Calls the SetTopicAttributes operation to modify the attributes of a topic.
 *
 * @param request SetTopicAttributesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetTopicAttributesResponse
 */
SetTopicAttributesResponse Client::setTopicAttributesWithOptions(const SetTopicAttributesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnableLogging()) {
    query["EnableLogging"] = request.getEnableLogging();
  }

  if (!!request.hasEnableSSE()) {
    query["EnableSSE"] = request.getEnableSSE();
  }

  if (!!request.hasKmsKeyId()) {
    query["KmsKeyId"] = request.getKmsKeyId();
  }

  if (!!request.hasMaxMessageSize()) {
    query["MaxMessageSize"] = request.getMaxMessageSize();
  }

  if (!!request.hasSseAlgorithm()) {
    query["SseAlgorithm"] = request.getSseAlgorithm();
  }

  if (!!request.hasSseType()) {
    query["SseType"] = request.getSseType();
  }

  if (!!request.hasTopicName()) {
    query["TopicName"] = request.getTopicName();
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
 * @summary Calls the SetTopicAttributes operation to modify the attributes of a topic.
 *
 * @param request SetTopicAttributesRequest
 * @return SetTopicAttributesResponse
 */
SetTopicAttributesResponse Client::setTopicAttributes(const SetTopicAttributesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setTopicAttributesWithOptions(request, runtime);
}

/**
 * @summary Calls the Subscribe operation to create a subscription for a topic.
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
    request.setDlqPolicyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDlqPolicy(), "DlqPolicy", "json"));
  }

  if (!!tmpReq.hasDmAttributes()) {
    request.setDmAttributesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDmAttributes(), "DmAttributes", "json"));
  }

  if (!!tmpReq.hasDysmsAttributes()) {
    request.setDysmsAttributesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDysmsAttributes(), "DysmsAttributes", "json"));
  }

  if (!!tmpReq.hasKafkaAttributes()) {
    request.setKafkaAttributesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getKafkaAttributes(), "KafkaAttributes", "json"));
  }

  if (!!tmpReq.hasTenantRateLimitPolicy()) {
    request.setTenantRateLimitPolicyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTenantRateLimitPolicy(), "TenantRateLimitPolicy", "json"));
  }

  json query = {};
  if (!!request.hasDlqPolicyShrink()) {
    query["DlqPolicy"] = request.getDlqPolicyShrink();
  }

  if (!!request.hasDmAttributesShrink()) {
    query["DmAttributes"] = request.getDmAttributesShrink();
  }

  if (!!request.hasDysmsAttributesShrink()) {
    query["DysmsAttributes"] = request.getDysmsAttributesShrink();
  }

  if (!!request.hasEndpoint()) {
    query["Endpoint"] = request.getEndpoint();
  }

  if (!!request.hasKafkaAttributesShrink()) {
    query["KafkaAttributes"] = request.getKafkaAttributesShrink();
  }

  if (!!request.hasMessageTag()) {
    query["MessageTag"] = request.getMessageTag();
  }

  if (!!request.hasNotifyContentFormat()) {
    query["NotifyContentFormat"] = request.getNotifyContentFormat();
  }

  if (!!request.hasNotifyStrategy()) {
    query["NotifyStrategy"] = request.getNotifyStrategy();
  }

  if (!!request.hasPushType()) {
    query["PushType"] = request.getPushType();
  }

  if (!!request.hasStsRoleArn()) {
    query["StsRoleArn"] = request.getStsRoleArn();
  }

  if (!!request.hasSubscriptionName()) {
    query["SubscriptionName"] = request.getSubscriptionName();
  }

  if (!!request.hasTenantRateLimitPolicyShrink()) {
    query["TenantRateLimitPolicy"] = request.getTenantRateLimitPolicyShrink();
  }

  if (!!request.hasTopicName()) {
    query["TopicName"] = request.getTopicName();
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
 * @summary Calls the Subscribe operation to create a subscription for a topic.
 *
 * @param request SubscribeRequest
 * @return SubscribeResponse
 */
SubscribeResponse Client::subscribe(const SubscribeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return subscribeWithOptions(request, runtime);
}

/**
 * @summary You can call Unsubscribe to cancel an existing subscription.
 *
 * @param request UnsubscribeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnsubscribeResponse
 */
UnsubscribeResponse Client::unsubscribeWithOptions(const UnsubscribeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSubscriptionName()) {
    query["SubscriptionName"] = request.getSubscriptionName();
  }

  if (!!request.hasTopicName()) {
    query["TopicName"] = request.getTopicName();
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
 * @summary You can call Unsubscribe to cancel an existing subscription.
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