#include <darabonba/Core.hpp>
#include <alibabacloud/APIG20240327.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/encode/Encoder.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::APIG20240327::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace APIG20240327
{

AlibabaCloud::APIG20240327::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"us-west-1" , "apig.us-west-1.aliyuncs.com"},
    {"us-east-1" , "apig.us-east-1.aliyuncs.com"},
    {"me-east-1" , "apig.me-east-1.aliyuncs.com"},
    {"me-central-1" , "apig.me-central-1.aliyuncs.com"},
    {"eu-west-1" , "apig.eu-west-1.aliyuncs.com"},
    {"eu-central-1" , "apig.eu-central-1.aliyuncs.com"},
    {"cn-zhangjiakou" , "apig.cn-zhangjiakou.aliyuncs.com"},
    {"cn-wulanchabu" , "apig.cn-wulanchabu.aliyuncs.com"},
    {"cn-shenzhen" , "apig.cn-shenzhen.aliyuncs.com"},
    {"cn-shanghai" , "apig.cn-shanghai.aliyuncs.com"},
    {"cn-qingdao" , "apig.cn-qingdao.aliyuncs.com"},
    {"cn-hongkong" , "apig.cn-hongkong.aliyuncs.com"},
    {"cn-heyuan" , "apig.cn-heyuan.aliyuncs.com"},
    {"cn-hangzhou" , "apig.cn-hangzhou.aliyuncs.com"},
    {"cn-guangzhou" , "apig.cn-guangzhou.aliyuncs.com"},
    {"cn-chengdu" , "apig.cn-chengdu.aliyuncs.com"},
    {"cn-beijing" , "apig.cn-beijing.aliyuncs.com"},
    {"ap-southeast-7" , "apig.ap-southeast-7.aliyuncs.com"},
    {"ap-southeast-6" , "apig.ap-southeast-6.aliyuncs.com"},
    {"ap-southeast-5" , "apig.ap-southeast-5.aliyuncs.com"},
    {"ap-southeast-3" , "apig.ap-southeast-3.aliyuncs.com"},
    {"ap-southeast-2" , "apig.ap-southeast-2.aliyuncs.com"},
    {"ap-southeast-1" , "apig.ap-southeast-1.aliyuncs.com"},
    {"ap-northeast-2" , "apig.ap-northeast-2.aliyuncs.com"},
    {"ap-northeast-1" , "apig.ap-northeast-1.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("apig", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Creates a gateway quota throttling rule.
 *
 * @description This operation adds a consumer-based quota rule to an AI gateway. This operation takes effect only on AI gateways of version 2.1.19 or later.
 * > 
 * >  Recommended call logic:
 * > - 1. Perform a dry run to check for rule conflicts.
 * > - - Set dryRun=true.
 * > - - The response contains a conflict preview with conflictHash.
 * > - 2. Submit the request after confirmation.
 * > - - No conflict: dryRun=false, overwrite=false.
 * > - - Conflict exists and overwrite confirmed: dryRun=false, overwrite=true, conflictHash=<value returned in the previous step>
 *
 * @param request AddGatewayQuotaRuleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddGatewayQuotaRuleResponse
 */
AddGatewayQuotaRuleResponse Client::addGatewayQuotaRuleWithOptions(const string &gatewayId, const AddGatewayQuotaRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConflictHash()) {
    body["conflictHash"] = request.getConflictHash();
  }

  if (!!request.hasConsumerGroupIds()) {
    body["consumerGroupIds"] = request.getConsumerGroupIds();
  }

  if (!!request.hasConsumerIds()) {
    body["consumerIds"] = request.getConsumerIds();
  }

  if (!!request.hasDryRun()) {
    body["dryRun"] = request.getDryRun();
  }

  if (!!request.hasOverwrite()) {
    body["overwrite"] = request.getOverwrite();
  }

  if (!!request.hasPeriodMultiplier()) {
    body["periodMultiplier"] = request.getPeriodMultiplier();
  }

  if (!!request.hasPeriodType()) {
    body["periodType"] = request.getPeriodType();
  }

  if (!!request.hasQuotaDimension()) {
    body["quotaDimension"] = request.getQuotaDimension();
  }

  if (!!request.hasQuotaLimit()) {
    body["quotaLimit"] = request.getQuotaLimit();
  }

  if (!!request.hasRuleName()) {
    body["ruleName"] = request.getRuleName();
  }

  if (!!request.hasTimezone()) {
    body["timezone"] = request.getTimezone();
  }

  if (!!request.hasWindowAlignment()) {
    body["windowAlignment"] = request.getWindowAlignment();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddGatewayQuotaRule"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/gateways/" , Darabonba::Encode::Encoder::percentEncode(gatewayId) , "/quota-rules")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddGatewayQuotaRuleResponse>();
}

/**
 * @summary Creates a gateway quota throttling rule.
 *
 * @description This operation adds a consumer-based quota rule to an AI gateway. This operation takes effect only on AI gateways of version 2.1.19 or later.
 * > 
 * >  Recommended call logic:
 * > - 1. Perform a dry run to check for rule conflicts.
 * > - - Set dryRun=true.
 * > - - The response contains a conflict preview with conflictHash.
 * > - 2. Submit the request after confirmation.
 * > - - No conflict: dryRun=false, overwrite=false.
 * > - - Conflict exists and overwrite confirmed: dryRun=false, overwrite=true, conflictHash=<value returned in the previous step>
 *
 * @param request AddGatewayQuotaRuleRequest
 * @return AddGatewayQuotaRuleResponse
 */
AddGatewayQuotaRuleResponse Client::addGatewayQuotaRule(const string &gatewayId, const AddGatewayQuotaRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return addGatewayQuotaRuleWithOptions(gatewayId, request, headers, runtime);
}

/**
 * @summary Authorizes a security group to allow gateway access to services.
 *
 * @param request AddGatewaySecurityGroupRuleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddGatewaySecurityGroupRuleResponse
 */
AddGatewaySecurityGroupRuleResponse Client::addGatewaySecurityGroupRuleWithOptions(const string &gatewayId, const AddGatewaySecurityGroupRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasPortRanges()) {
    body["portRanges"] = request.getPortRanges();
  }

  if (!!request.hasSecurityGroupId()) {
    body["securityGroupId"] = request.getSecurityGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddGatewaySecurityGroupRule"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/gateways/" , Darabonba::Encode::Encoder::percentEncode(gatewayId) , "/security-group-rules")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddGatewaySecurityGroupRuleResponse>();
}

/**
 * @summary Authorizes a security group to allow gateway access to services.
 *
 * @param request AddGatewaySecurityGroupRuleRequest
 * @return AddGatewaySecurityGroupRuleResponse
 */
AddGatewaySecurityGroupRuleResponse Client::addGatewaySecurityGroupRule(const string &gatewayId, const AddGatewaySecurityGroupRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return addGatewaySecurityGroupRuleWithOptions(gatewayId, request, headers, runtime);
}

/**
 * @summary Revokes consumer authorization rules in batches.
 *
 * @param request BatchDeleteConsumerAuthorizationRuleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchDeleteConsumerAuthorizationRuleResponse
 */
BatchDeleteConsumerAuthorizationRuleResponse Client::batchDeleteConsumerAuthorizationRuleWithOptions(const BatchDeleteConsumerAuthorizationRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsumerAuthorizationRuleIds()) {
    query["consumerAuthorizationRuleIds"] = request.getConsumerAuthorizationRuleIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchDeleteConsumerAuthorizationRule"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/authorization-rules")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchDeleteConsumerAuthorizationRuleResponse>();
}

/**
 * @summary Revokes consumer authorization rules in batches.
 *
 * @param request BatchDeleteConsumerAuthorizationRuleRequest
 * @return BatchDeleteConsumerAuthorizationRuleResponse
 */
BatchDeleteConsumerAuthorizationRuleResponse Client::batchDeleteConsumerAuthorizationRule(const BatchDeleteConsumerAuthorizationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return batchDeleteConsumerAuthorizationRuleWithOptions(request, headers, runtime);
}

/**
 * @summary Transfers a resource to a different resource group.
 *
 * @param request ChangeResourceGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroupWithOptions(const ChangeResourceGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasService()) {
    query["Service"] = request.getService();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChangeResourceGroup"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/move-resource-group")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeResourceGroupResponse>();
}

/**
 * @summary Transfers a resource to a different resource group.
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
 * @summary 创建AI模型供应商
 *
 * @param request CreateAiModelProviderRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAiModelProviderResponse
 */
CreateAiModelProviderResponse Client::createAiModelProviderWithOptions(const CreateAiModelProviderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDisplayName()) {
    body["displayName"] = request.getDisplayName();
  }

  if (!!request.hasGatewayId()) {
    body["gatewayId"] = request.getGatewayId();
  }

  if (!!request.hasProvider()) {
    body["provider"] = request.getProvider();
  }

  if (!!request.hasServiceIds()) {
    body["serviceIds"] = request.getServiceIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateAiModelProvider"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/ai-model-providers")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAiModelProviderResponse>();
}

/**
 * @summary 创建AI模型供应商
 *
 * @param request CreateAiModelProviderRequest
 * @return CreateAiModelProviderResponse
 */
CreateAiModelProviderResponse Client::createAiModelProvider(const CreateAiModelProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createAiModelProviderWithOptions(request, headers, runtime);
}

/**
 * @summary Creates and attaches a policy.
 *
 * @param request CreateAndAttachPolicyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAndAttachPolicyResponse
 */
CreateAndAttachPolicyResponse Client::createAndAttachPolicyWithOptions(const CreateAndAttachPolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAttachResourceIds()) {
    body["attachResourceIds"] = request.getAttachResourceIds();
  }

  if (!!request.hasAttachResourceType()) {
    body["attachResourceType"] = request.getAttachResourceType();
  }

  if (!!request.hasClassName()) {
    body["className"] = request.getClassName();
  }

  if (!!request.hasConfig()) {
    body["config"] = request.getConfig();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasEnvironmentId()) {
    body["environmentId"] = request.getEnvironmentId();
  }

  if (!!request.hasGatewayId()) {
    body["gatewayId"] = request.getGatewayId();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateAndAttachPolicy"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/policies")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAndAttachPolicyResponse>();
}

/**
 * @summary Creates and attaches a policy.
 *
 * @param request CreateAndAttachPolicyRequest
 * @return CreateAndAttachPolicyResponse
 */
CreateAndAttachPolicyResponse Client::createAndAttachPolicy(const CreateAndAttachPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createAndAttachPolicyWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a consumer.
 *
 * @param request CreateConsumerRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateConsumerResponse
 */
CreateConsumerResponse Client::createConsumerWithOptions(const CreateConsumerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAkSkIdentityConfigs()) {
    body["akSkIdentityConfigs"] = request.getAkSkIdentityConfigs();
  }

  if (!!request.hasApikeyIdentityConfig()) {
    body["apikeyIdentityConfig"] = request.getApikeyIdentityConfig();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasEnable()) {
    body["enable"] = request.getEnable();
  }

  if (!!request.hasGatewayType()) {
    body["gatewayType"] = request.getGatewayType();
  }

  if (!!request.hasJwtIdentityConfig()) {
    body["jwtIdentityConfig"] = request.getJwtIdentityConfig();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateConsumer"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/consumers")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateConsumerResponse>();
}

/**
 * @summary Creates a consumer.
 *
 * @param request CreateConsumerRequest
 * @return CreateConsumerResponse
 */
CreateConsumerResponse Client::createConsumer(const CreateConsumerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createConsumerWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a consumer authorization rule.
 *
 * @param request CreateConsumerAuthorizationRuleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateConsumerAuthorizationRuleResponse
 */
CreateConsumerAuthorizationRuleResponse Client::createConsumerAuthorizationRuleWithOptions(const string &consumerId, const CreateConsumerAuthorizationRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAuthorizationResourceInfos()) {
    body["authorizationResourceInfos"] = request.getAuthorizationResourceInfos();
  }

  if (!!request.hasExpireMode()) {
    body["expireMode"] = request.getExpireMode();
  }

  if (!!request.hasExpireTimestamp()) {
    body["expireTimestamp"] = request.getExpireTimestamp();
  }

  if (!!request.hasParentResourceType()) {
    body["parentResourceType"] = request.getParentResourceType();
  }

  if (!!request.hasResourceType()) {
    body["resourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateConsumerAuthorizationRule"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/consumers/" , Darabonba::Encode::Encoder::percentEncode(consumerId) , "/authorization-rules")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateConsumerAuthorizationRuleResponse>();
}

/**
 * @summary Creates a consumer authorization rule.
 *
 * @param request CreateConsumerAuthorizationRuleRequest
 * @return CreateConsumerAuthorizationRuleResponse
 */
CreateConsumerAuthorizationRuleResponse Client::createConsumerAuthorizationRule(const string &consumerId, const CreateConsumerAuthorizationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createConsumerAuthorizationRuleWithOptions(consumerId, request, headers, runtime);
}

/**
 * @summary Creates consumer authorization rules.
 *
 * @param request CreateConsumerAuthorizationRulesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateConsumerAuthorizationRulesResponse
 */
CreateConsumerAuthorizationRulesResponse Client::createConsumerAuthorizationRulesWithOptions(const CreateConsumerAuthorizationRulesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAuthorizationRules()) {
    body["authorizationRules"] = request.getAuthorizationRules();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateConsumerAuthorizationRules"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/authorization-rules")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateConsumerAuthorizationRulesResponse>();
}

/**
 * @summary Creates consumer authorization rules.
 *
 * @param request CreateConsumerAuthorizationRulesRequest
 * @return CreateConsumerAuthorizationRulesResponse
 */
CreateConsumerAuthorizationRulesResponse Client::createConsumerAuthorizationRules(const CreateConsumerAuthorizationRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createConsumerAuthorizationRulesWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a domain name.
 *
 * @param request CreateDomainRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDomainResponse
 */
CreateDomainResponse Client::createDomainWithOptions(const CreateDomainRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCaCertIdentifier()) {
    body["caCertIdentifier"] = request.getCaCertIdentifier();
  }

  if (!!request.hasCertIdentifier()) {
    body["certIdentifier"] = request.getCertIdentifier();
  }

  if (!!request.hasClientCACert()) {
    body["clientCACert"] = request.getClientCACert();
  }

  if (!!request.hasDomainScope()) {
    body["domainScope"] = request.getDomainScope();
  }

  if (!!request.hasForceHttps()) {
    body["forceHttps"] = request.getForceHttps();
  }

  if (!!request.hasGatewayType()) {
    body["gatewayType"] = request.getGatewayType();
  }

  if (!!request.hasHttp2Option()) {
    body["http2Option"] = request.getHttp2Option();
  }

  if (!!request.hasMTLSEnabled()) {
    body["mTLSEnabled"] = request.getMTLSEnabled();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasProtocol()) {
    body["protocol"] = request.getProtocol();
  }

  if (!!request.hasResourceGroupId()) {
    body["resourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasTlsCipherSuitesConfig()) {
    body["tlsCipherSuitesConfig"] = request.getTlsCipherSuitesConfig();
  }

  if (!!request.hasTlsMax()) {
    body["tlsMax"] = request.getTlsMax();
  }

  if (!!request.hasTlsMin()) {
    body["tlsMin"] = request.getTlsMin();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateDomain"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/domains")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDomainResponse>();
}

/**
 * @summary Creates a domain name.
 *
 * @param request CreateDomainRequest
 * @return CreateDomainResponse
 */
CreateDomainResponse Client::createDomain(const CreateDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createDomainWithOptions(request, headers, runtime);
}

/**
 * @deprecated OpenAPI CreateEnvironment is deprecated
 *
 * @summary Creates an environment.
 *
 * @param request CreateEnvironmentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEnvironmentResponse
 */
CreateEnvironmentResponse Client::createEnvironmentWithOptions(const CreateEnvironmentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAlias()) {
    body["alias"] = request.getAlias();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasGatewayId()) {
    body["gatewayId"] = request.getGatewayId();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasResourceGroupId()) {
    body["resourceGroupId"] = request.getResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateEnvironment"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/environments")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateEnvironmentResponse>();
}

/**
 * @deprecated OpenAPI CreateEnvironment is deprecated
 *
 * @summary Creates an environment.
 *
 * @param request CreateEnvironmentRequest
 * @return CreateEnvironmentResponse
 */
CreateEnvironmentResponse Client::createEnvironment(const CreateEnvironmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createEnvironmentWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a cloud-native gateway.
 *
 * @param request CreateGatewayRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateGatewayResponse
 */
CreateGatewayResponse Client::createGatewayWithOptions(const CreateGatewayRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasChargeType()) {
    body["chargeType"] = request.getChargeType();
  }

  if (!!request.hasGatewayEdition()) {
    body["gatewayEdition"] = request.getGatewayEdition();
  }

  if (!!request.hasGatewayType()) {
    body["gatewayType"] = request.getGatewayType();
  }

  if (!!request.hasLogConfig()) {
    body["logConfig"] = request.getLogConfig();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasNetworkAccessConfig()) {
    body["networkAccessConfig"] = request.getNetworkAccessConfig();
  }

  if (!!request.hasResourceGroupId()) {
    body["resourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSpec()) {
    body["spec"] = request.getSpec();
  }

  if (!!request.hasTag()) {
    body["tag"] = request.getTag();
  }

  if (!!request.hasVpcId()) {
    body["vpcId"] = request.getVpcId();
  }

  if (!!request.hasZoneConfig()) {
    body["zoneConfig"] = request.getZoneConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateGateway"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/gateways")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateGatewayResponse>();
}

/**
 * @summary Creates a cloud-native gateway.
 *
 * @param request CreateGatewayRequest
 * @return CreateGatewayResponse
 */
CreateGatewayResponse Client::createGateway(const CreateGatewayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createGatewayWithOptions(request, headers, runtime);
}

/**
 * @summary Creates an HTTP API.
 *
 * @param request CreateHttpApiRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateHttpApiResponse
 */
CreateHttpApiResponse Client::createHttpApiWithOptions(const CreateHttpApiRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAgentProtocols()) {
    body["agentProtocols"] = request.getAgentProtocols();
  }

  if (!!request.hasAiProtocols()) {
    body["aiProtocols"] = request.getAiProtocols();
  }

  if (!!request.hasAuthConfig()) {
    body["authConfig"] = request.getAuthConfig();
  }

  if (!!request.hasBasePath()) {
    body["basePath"] = request.getBasePath();
  }

  if (!!request.hasBelongGatewayId()) {
    body["belongGatewayId"] = request.getBelongGatewayId();
  }

  if (!!request.hasDeployConfigs()) {
    body["deployConfigs"] = request.getDeployConfigs();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDryRun()) {
    body["dryRun"] = request.getDryRun();
  }

  if (!!request.hasEnableAuth()) {
    body["enableAuth"] = request.getEnableAuth();
  }

  if (!!request.hasFirstByteTimeout()) {
    body["firstByteTimeout"] = request.getFirstByteTimeout();
  }

  if (!!request.hasIngressConfig()) {
    body["ingressConfig"] = request.getIngressConfig();
  }

  if (!!request.hasModelCategory()) {
    body["modelCategory"] = request.getModelCategory();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasProtocols()) {
    body["protocols"] = request.getProtocols();
  }

  if (!!request.hasRemoveBasePathOnForward()) {
    body["removeBasePathOnForward"] = request.getRemoveBasePathOnForward();
  }

  if (!!request.hasResourceGroupId()) {
    body["resourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasStrategy()) {
    body["strategy"] = request.getStrategy();
  }

  if (!!request.hasType()) {
    body["type"] = request.getType();
  }

  if (!!request.hasVersionConfig()) {
    body["versionConfig"] = request.getVersionConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateHttpApi"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/http-apis")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateHttpApiResponse>();
}

/**
 * @summary Creates an HTTP API.
 *
 * @param request CreateHttpApiRequest
 * @return CreateHttpApiResponse
 */
CreateHttpApiResponse Client::createHttpApi(const CreateHttpApiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createHttpApiWithOptions(request, headers, runtime);
}

/**
 * @summary Creates operations for an HTTP API.
 *
 * @param request CreateHttpApiOperationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateHttpApiOperationResponse
 */
CreateHttpApiOperationResponse Client::createHttpApiOperationWithOptions(const string &httpApiId, const CreateHttpApiOperationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasOperations()) {
    body["operations"] = request.getOperations();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateHttpApiOperation"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/http-apis/" , Darabonba::Encode::Encoder::percentEncode(httpApiId) , "/operations")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateHttpApiOperationResponse>();
}

/**
 * @summary Creates operations for an HTTP API.
 *
 * @param request CreateHttpApiOperationRequest
 * @return CreateHttpApiOperationResponse
 */
CreateHttpApiOperationResponse Client::createHttpApiOperation(const string &httpApiId, const CreateHttpApiOperationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createHttpApiOperationWithOptions(httpApiId, request, headers, runtime);
}

/**
 * @summary Creates a route for an HTTP API.
 *
 * @param request CreateHttpApiRouteRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateHttpApiRouteResponse
 */
CreateHttpApiRouteResponse Client::createHttpApiRouteWithOptions(const string &httpApiId, const CreateHttpApiRouteRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBackendConfig()) {
    body["backendConfig"] = request.getBackendConfig();
  }

  if (!!request.hasDeployConfigs()) {
    body["deployConfigs"] = request.getDeployConfigs();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDomainIds()) {
    body["domainIds"] = request.getDomainIds();
  }

  if (!!request.hasEnvironmentId()) {
    body["environmentId"] = request.getEnvironmentId();
  }

  if (!!request.hasMatch()) {
    body["match"] = request.getMatch();
  }

  if (!!request.hasMcpRouteConfig()) {
    body["mcpRouteConfig"] = request.getMcpRouteConfig();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasPolicyConfigs()) {
    body["policyConfigs"] = request.getPolicyConfigs();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateHttpApiRoute"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/http-apis/" , Darabonba::Encode::Encoder::percentEncode(httpApiId) , "/routes")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateHttpApiRouteResponse>();
}

/**
 * @summary Creates a route for an HTTP API.
 *
 * @param request CreateHttpApiRouteRequest
 * @return CreateHttpApiRouteResponse
 */
CreateHttpApiRouteResponse Client::createHttpApiRoute(const string &httpApiId, const CreateHttpApiRouteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createHttpApiRouteWithOptions(httpApiId, request, headers, runtime);
}

/**
 * @summary Creates a Model Context Protocol (MCP) server.
 *
 * @param request CreateMcpServerRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMcpServerResponse
 */
CreateMcpServerResponse Client::createMcpServerWithOptions(const CreateMcpServerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAssembledSources()) {
    body["assembledSources"] = request.getAssembledSources();
  }

  if (!!request.hasBackendConfig()) {
    body["backendConfig"] = request.getBackendConfig();
  }

  if (!!request.hasCreateFromType()) {
    body["createFromType"] = request.getCreateFromType();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDomainIds()) {
    body["domainIds"] = request.getDomainIds();
  }

  if (!!request.hasExposedUriPath()) {
    body["exposedUriPath"] = request.getExposedUriPath();
  }

  if (!!request.hasGatewayId()) {
    body["gatewayId"] = request.getGatewayId();
  }

  if (!!request.hasGrayMcpServerConfigs()) {
    body["grayMcpServerConfigs"] = request.getGrayMcpServerConfigs();
  }

  if (!!request.hasMatch()) {
    body["match"] = request.getMatch();
  }

  if (!!request.hasMcpServerConfig()) {
    body["mcpServerConfig"] = request.getMcpServerConfig();
  }

  if (!!request.hasMcpStatisticsEnable()) {
    body["mcpStatisticsEnable"] = request.getMcpStatisticsEnable();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasProtocol()) {
    body["protocol"] = request.getProtocol();
  }

  if (!!request.hasType()) {
    body["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateMcpServer"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/mcp-servers")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMcpServerResponse>();
}

/**
 * @summary Creates a Model Context Protocol (MCP) server.
 *
 * @param request CreateMcpServerRequest
 * @return CreateMcpServerResponse
 */
CreateMcpServerResponse Client::createMcpServer(const CreateMcpServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createMcpServerWithOptions(request, headers, runtime);
}

/**
 * @summary Mounts a plug-in.
 *
 * @param request CreatePluginAttachmentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePluginAttachmentResponse
 */
CreatePluginAttachmentResponse Client::createPluginAttachmentWithOptions(const CreatePluginAttachmentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAttachResourceIds()) {
    body["attachResourceIds"] = request.getAttachResourceIds();
  }

  if (!!request.hasAttachResourceType()) {
    body["attachResourceType"] = request.getAttachResourceType();
  }

  if (!!request.hasEnable()) {
    body["enable"] = request.getEnable();
  }

  if (!!request.hasEnvironmentId()) {
    body["environmentId"] = request.getEnvironmentId();
  }

  if (!!request.hasGatewayId()) {
    body["gatewayId"] = request.getGatewayId();
  }

  if (!!request.hasPluginConfig()) {
    body["pluginConfig"] = request.getPluginConfig();
  }

  if (!!request.hasPluginId()) {
    body["pluginId"] = request.getPluginId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreatePluginAttachment"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/plugin-attachments")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePluginAttachmentResponse>();
}

/**
 * @summary Mounts a plug-in.
 *
 * @param request CreatePluginAttachmentRequest
 * @return CreatePluginAttachmentResponse
 */
CreatePluginAttachmentResponse Client::createPluginAttachment(const CreatePluginAttachmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPluginAttachmentWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a custom plugin class.
 *
 * @param request CreatePluginClassRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePluginClassResponse
 */
CreatePluginClassResponse Client::createPluginClassWithOptions(const CreatePluginClassRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAlias()) {
    body["alias"] = request.getAlias();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasExecutePriority()) {
    body["executePriority"] = request.getExecutePriority();
  }

  if (!!request.hasExecuteStage()) {
    body["executeStage"] = request.getExecuteStage();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasSupportedMinGatewayVersion()) {
    body["supportedMinGatewayVersion"] = request.getSupportedMinGatewayVersion();
  }

  if (!!request.hasVersion()) {
    body["version"] = request.getVersion();
  }

  if (!!request.hasVersionDescription()) {
    body["versionDescription"] = request.getVersionDescription();
  }

  if (!!request.hasWasmLanguage()) {
    body["wasmLanguage"] = request.getWasmLanguage();
  }

  if (!!request.hasWasmUrl()) {
    body["wasmUrl"] = request.getWasmUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreatePluginClass"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/plugin-classes")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePluginClassResponse>();
}

/**
 * @summary Creates a custom plugin class.
 *
 * @param request CreatePluginClassRequest
 * @return CreatePluginClassResponse
 */
CreatePluginClassResponse Client::createPluginClass(const CreatePluginClassRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPluginClassWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a policy.
 *
 * @param request CreatePolicyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePolicyResponse
 */
CreatePolicyResponse Client::createPolicyWithOptions(const CreatePolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClassName()) {
    body["className"] = request.getClassName();
  }

  if (!!request.hasConfig()) {
    body["config"] = request.getConfig();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreatePolicy"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v2/policies")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePolicyResponse>();
}

/**
 * @summary Creates a policy.
 *
 * @param request CreatePolicyRequest
 * @return CreatePolicyResponse
 */
CreatePolicyResponse Client::createPolicy(const CreatePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPolicyWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a policy attachment.
 *
 * @param request CreatePolicyAttachmentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePolicyAttachmentResponse
 */
CreatePolicyAttachmentResponse Client::createPolicyAttachmentWithOptions(const CreatePolicyAttachmentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAttachResourceId()) {
    body["attachResourceId"] = request.getAttachResourceId();
  }

  if (!!request.hasAttachResourceType()) {
    body["attachResourceType"] = request.getAttachResourceType();
  }

  if (!!request.hasEnvironmentId()) {
    body["environmentId"] = request.getEnvironmentId();
  }

  if (!!request.hasGatewayId()) {
    body["gatewayId"] = request.getGatewayId();
  }

  if (!!request.hasPolicyId()) {
    body["policyId"] = request.getPolicyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreatePolicyAttachment"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/policy-attachments")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePolicyAttachmentResponse>();
}

/**
 * @summary Creates a policy attachment.
 *
 * @param request CreatePolicyAttachmentRequest
 * @return CreatePolicyAttachmentResponse
 */
CreatePolicyAttachmentResponse Client::createPolicyAttachment(const CreatePolicyAttachmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPolicyAttachmentWithOptions(request, headers, runtime);
}

/**
 * @summary Generates a key.
 *
 * @param request CreateSecretRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSecretResponse
 */
CreateSecretResponse Client::createSecretWithOptions(const CreateSecretRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasGatewayType()) {
    body["gatewayType"] = request.getGatewayType();
  }

  if (!!request.hasKmsConfig()) {
    body["kmsConfig"] = request.getKmsConfig();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasSecretData()) {
    body["secretData"] = request.getSecretData();
  }

  if (!!request.hasSecretSource()) {
    body["secretSource"] = request.getSecretSource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateSecret"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/secrets")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSecretResponse>();
}

/**
 * @summary Generates a key.
 *
 * @param request CreateSecretRequest
 * @return CreateSecretResponse
 */
CreateSecretResponse Client::createSecret(const CreateSecretRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createSecretWithOptions(request, headers, runtime);
}

/**
 * @summary Creates services.
 *
 * @description This operation supports creating multiple services.
 *
 * @param request CreateServiceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateServiceResponse
 */
CreateServiceResponse Client::createServiceWithOptions(const CreateServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasGatewayId()) {
    body["gatewayId"] = request.getGatewayId();
  }

  if (!!request.hasResourceGroupId()) {
    body["resourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasServiceConfigs()) {
    body["serviceConfigs"] = request.getServiceConfigs();
  }

  if (!!request.hasSourceType()) {
    body["sourceType"] = request.getSourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateService"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/services")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateServiceResponse>();
}

/**
 * @summary Creates services.
 *
 * @description This operation supports creating multiple services.
 *
 * @param request CreateServiceRequest
 * @return CreateServiceResponse
 */
CreateServiceResponse Client::createService(const CreateServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createServiceWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a service version.
 *
 * @param request CreateServiceVersionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateServiceVersionResponse
 */
CreateServiceVersionResponse Client::createServiceVersionWithOptions(const string &serviceId, const CreateServiceVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLabels()) {
    body["labels"] = request.getLabels();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateServiceVersion"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/services/" , Darabonba::Encode::Encoder::percentEncode(serviceId) , "/versions")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateServiceVersionResponse>();
}

/**
 * @summary Creates a service version.
 *
 * @param request CreateServiceVersionRequest
 * @return CreateServiceVersionResponse
 */
CreateServiceVersionResponse Client::createServiceVersion(const string &serviceId, const CreateServiceVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createServiceVersionWithOptions(serviceId, request, headers, runtime);
}

/**
 * @summary Creates a source.
 *
 * @param request CreateSourceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSourceResponse
 */
CreateSourceResponse Client::createSourceWithOptions(const CreateSourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasGatewayId()) {
    body["gatewayId"] = request.getGatewayId();
  }

  if (!!request.hasK8sSourceConfig()) {
    body["k8sSourceConfig"] = request.getK8sSourceConfig();
  }

  if (!!request.hasNacosSourceConfig()) {
    body["nacosSourceConfig"] = request.getNacosSourceConfig();
  }

  if (!!request.hasResourceGroupId()) {
    body["resourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasType()) {
    body["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateSource"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/sources")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSourceResponse>();
}

/**
 * @summary Creates a source.
 *
 * @param request CreateSourceRequest
 * @return CreateSourceResponse
 */
CreateSourceResponse Client::createSource(const CreateSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createSourceWithOptions(request, headers, runtime);
}

/**
 * @summary Deletes an API consumer.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteConsumerResponse
 */
DeleteConsumerResponse Client::deleteConsumerWithOptions(const string &consumerId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteConsumer"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/consumers/" , Darabonba::Encode::Encoder::percentEncode(consumerId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteConsumerResponse>();
}

/**
 * @summary Deletes an API consumer.
 *
 * @return DeleteConsumerResponse
 */
DeleteConsumerResponse Client::deleteConsumer(const string &consumerId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteConsumerWithOptions(consumerId, headers, runtime);
}

/**
 * @summary Deletes an API consumer authorization rule.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteConsumerAuthorizationRuleResponse
 */
DeleteConsumerAuthorizationRuleResponse Client::deleteConsumerAuthorizationRuleWithOptions(const string &consumerAuthorizationRuleId, const string &consumerId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteConsumerAuthorizationRule"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/consumers/" , Darabonba::Encode::Encoder::percentEncode(consumerId) , "/authorization-rules/" , Darabonba::Encode::Encoder::percentEncode(consumerAuthorizationRuleId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteConsumerAuthorizationRuleResponse>();
}

/**
 * @summary Deletes an API consumer authorization rule.
 *
 * @return DeleteConsumerAuthorizationRuleResponse
 */
DeleteConsumerAuthorizationRuleResponse Client::deleteConsumerAuthorizationRule(const string &consumerAuthorizationRuleId, const string &consumerId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteConsumerAuthorizationRuleWithOptions(consumerAuthorizationRuleId, consumerId, headers, runtime);
}

/**
 * @summary Deletes a domain name.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDomainResponse
 */
DeleteDomainResponse Client::deleteDomainWithOptions(const string &domainId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDomain"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/domains/" , Darabonba::Encode::Encoder::percentEncode(domainId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDomainResponse>();
}

/**
 * @summary Deletes a domain name.
 *
 * @return DeleteDomainResponse
 */
DeleteDomainResponse Client::deleteDomain(const string &domainId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteDomainWithOptions(domainId, headers, runtime);
}

/**
 * @deprecated OpenAPI DeleteEnvironment is deprecated
 *
 * @summary Deletes an environment.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEnvironmentResponse
 */
DeleteEnvironmentResponse Client::deleteEnvironmentWithOptions(const string &environmentId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteEnvironment"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/environments/" , Darabonba::Encode::Encoder::percentEncode(environmentId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteEnvironmentResponse>();
}

/**
 * @deprecated OpenAPI DeleteEnvironment is deprecated
 *
 * @summary Deletes an environment.
 *
 * @return DeleteEnvironmentResponse
 */
DeleteEnvironmentResponse Client::deleteEnvironment(const string &environmentId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteEnvironmentWithOptions(environmentId, headers, runtime);
}

/**
 * @summary Deletes a gateway.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteGatewayResponse
 */
DeleteGatewayResponse Client::deleteGatewayWithOptions(const string &gatewayId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteGateway"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/gateways/" , Darabonba::Encode::Encoder::percentEncode(gatewayId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteGatewayResponse>();
}

/**
 * @summary Deletes a gateway.
 *
 * @return DeleteGatewayResponse
 */
DeleteGatewayResponse Client::deleteGateway(const string &gatewayId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteGatewayWithOptions(gatewayId, headers, runtime);
}

/**
 * @summary Deletes a quota throttling rule from a gateway.
 *
 * @description Deletes a consumer-based quota rule from an AI gateway. This operation applies only to AI gateways of version 2.1.19 or later.
 *
 * @param request DeleteGatewayQuotaRuleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteGatewayQuotaRuleResponse
 */
DeleteGatewayQuotaRuleResponse Client::deleteGatewayQuotaRuleWithOptions(const string &gatewayId, const string &ruleId, const DeleteGatewayQuotaRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteGatewayQuotaRule"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/gateways/" , Darabonba::Encode::Encoder::percentEncode(gatewayId) , "/quota-rules/" , Darabonba::Encode::Encoder::percentEncode(ruleId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteGatewayQuotaRuleResponse>();
}

/**
 * @summary Deletes a quota throttling rule from a gateway.
 *
 * @description Deletes a consumer-based quota rule from an AI gateway. This operation applies only to AI gateways of version 2.1.19 or later.
 *
 * @param request DeleteGatewayQuotaRuleRequest
 * @return DeleteGatewayQuotaRuleResponse
 */
DeleteGatewayQuotaRuleResponse Client::deleteGatewayQuotaRule(const string &gatewayId, const string &ruleId, const DeleteGatewayQuotaRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteGatewayQuotaRuleWithOptions(gatewayId, ruleId, request, headers, runtime);
}

/**
 * @summary Deletes a gateway security group rule.
 *
 * @param request DeleteGatewaySecurityGroupRuleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteGatewaySecurityGroupRuleResponse
 */
DeleteGatewaySecurityGroupRuleResponse Client::deleteGatewaySecurityGroupRuleWithOptions(const string &gatewayId, const string &securityGroupRuleId, const DeleteGatewaySecurityGroupRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCascadingDelete()) {
    query["cascadingDelete"] = request.getCascadingDelete();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteGatewaySecurityGroupRule"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/gateways/" , Darabonba::Encode::Encoder::percentEncode(gatewayId) , "/security-group-rules/" , Darabonba::Encode::Encoder::percentEncode(securityGroupRuleId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteGatewaySecurityGroupRuleResponse>();
}

/**
 * @summary Deletes a gateway security group rule.
 *
 * @param request DeleteGatewaySecurityGroupRuleRequest
 * @return DeleteGatewaySecurityGroupRuleResponse
 */
DeleteGatewaySecurityGroupRuleResponse Client::deleteGatewaySecurityGroupRule(const string &gatewayId, const string &securityGroupRuleId, const DeleteGatewaySecurityGroupRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteGatewaySecurityGroupRuleWithOptions(gatewayId, securityGroupRuleId, request, headers, runtime);
}

/**
 * @summary Deletes a specified HTTP API.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteHttpApiResponse
 */
DeleteHttpApiResponse Client::deleteHttpApiWithOptions(const string &httpApiId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteHttpApi"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/http-apis/" , Darabonba::Encode::Encoder::percentEncode(httpApiId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteHttpApiResponse>();
}

/**
 * @summary Deletes a specified HTTP API.
 *
 * @return DeleteHttpApiResponse
 */
DeleteHttpApiResponse Client::deleteHttpApi(const string &httpApiId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteHttpApiWithOptions(httpApiId, headers, runtime);
}

/**
 * @summary Deletes a specified operation.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteHttpApiOperationResponse
 */
DeleteHttpApiOperationResponse Client::deleteHttpApiOperationWithOptions(const string &httpApiId, const string &operationId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteHttpApiOperation"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/http-apis/" , Darabonba::Encode::Encoder::percentEncode(httpApiId) , "/operations/" , Darabonba::Encode::Encoder::percentEncode(operationId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteHttpApiOperationResponse>();
}

/**
 * @summary Deletes a specified operation.
 *
 * @return DeleteHttpApiOperationResponse
 */
DeleteHttpApiOperationResponse Client::deleteHttpApiOperation(const string &httpApiId, const string &operationId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteHttpApiOperationWithOptions(httpApiId, operationId, headers, runtime);
}

/**
 * @summary Deletes a route of an HTTP API.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteHttpApiRouteResponse
 */
DeleteHttpApiRouteResponse Client::deleteHttpApiRouteWithOptions(const string &httpApiId, const string &routeId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteHttpApiRoute"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/http-apis/" , Darabonba::Encode::Encoder::percentEncode(httpApiId) , "/routes/" , Darabonba::Encode::Encoder::percentEncode(routeId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteHttpApiRouteResponse>();
}

/**
 * @summary Deletes a route of an HTTP API.
 *
 * @return DeleteHttpApiRouteResponse
 */
DeleteHttpApiRouteResponse Client::deleteHttpApiRoute(const string &httpApiId, const string &routeId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteHttpApiRouteWithOptions(httpApiId, routeId, headers, runtime);
}

/**
 * @summary Deletes an MCP server.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMcpServerResponse
 */
DeleteMcpServerResponse Client::deleteMcpServerWithOptions(const string &mcpServerId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMcpServer"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/mcp-servers/" , Darabonba::Encode::Encoder::percentEncode(mcpServerId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMcpServerResponse>();
}

/**
 * @summary Deletes an MCP server.
 *
 * @return DeleteMcpServerResponse
 */
DeleteMcpServerResponse Client::deleteMcpServer(const string &mcpServerId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteMcpServerWithOptions(mcpServerId, headers, runtime);
}

/**
 * @summary Deletes a plugin mount.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePluginAttachmentResponse
 */
DeletePluginAttachmentResponse Client::deletePluginAttachmentWithOptions(const string &pluginAttachmentId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePluginAttachment"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/plugin-attachments/" , Darabonba::Encode::Encoder::percentEncode(pluginAttachmentId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePluginAttachmentResponse>();
}

/**
 * @summary Deletes a plugin mount.
 *
 * @return DeletePluginAttachmentResponse
 */
DeletePluginAttachmentResponse Client::deletePluginAttachment(const string &pluginAttachmentId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deletePluginAttachmentWithOptions(pluginAttachmentId, headers, runtime);
}

/**
 * @summary Deletes a policy.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePolicyResponse
 */
DeletePolicyResponse Client::deletePolicyWithOptions(const string &policyId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePolicy"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v2/policies/" , Darabonba::Encode::Encoder::percentEncode(policyId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePolicyResponse>();
}

/**
 * @summary Deletes a policy.
 *
 * @return DeletePolicyResponse
 */
DeletePolicyResponse Client::deletePolicy(const string &policyId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deletePolicyWithOptions(policyId, headers, runtime);
}

/**
 * @summary Deletes a policy attachment.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePolicyAttachmentResponse
 */
DeletePolicyAttachmentResponse Client::deletePolicyAttachmentWithOptions(const string &policyAttachmentId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePolicyAttachment"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/policy-attachments/" , Darabonba::Encode::Encoder::percentEncode(policyAttachmentId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePolicyAttachmentResponse>();
}

/**
 * @summary Deletes a policy attachment.
 *
 * @return DeletePolicyAttachmentResponse
 */
DeletePolicyAttachmentResponse Client::deletePolicyAttachment(const string &policyAttachmentId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deletePolicyAttachmentWithOptions(policyAttachmentId, headers, runtime);
}

/**
 * @summary Deletes a key value.
 *
 * @description The operation supports creating multiple services.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSecretResponse
 */
DeleteSecretResponse Client::deleteSecretWithOptions(const string &secretId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSecret"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/secrets/" , Darabonba::Encode::Encoder::percentEncode(secretId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSecretResponse>();
}

/**
 * @summary Deletes a key value.
 *
 * @description The operation supports creating multiple services.
 *
 * @return DeleteSecretResponse
 */
DeleteSecretResponse Client::deleteSecret(const string &secretId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteSecretWithOptions(secretId, headers, runtime);
}

/**
 * @summary Deletes a service.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteServiceResponse
 */
DeleteServiceResponse Client::deleteServiceWithOptions(const string &serviceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteService"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/services/" , Darabonba::Encode::Encoder::percentEncode(serviceId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteServiceResponse>();
}

/**
 * @summary Deletes a service.
 *
 * @return DeleteServiceResponse
 */
DeleteServiceResponse Client::deleteService(const string &serviceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteServiceWithOptions(serviceId, headers, runtime);
}

/**
 * @summary Deletes a service version.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteServiceVersionResponse
 */
DeleteServiceVersionResponse Client::deleteServiceVersionWithOptions(const string &serviceId, const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteServiceVersion"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/services/" , Darabonba::Encode::Encoder::percentEncode(serviceId) , "/versions/" , Darabonba::Encode::Encoder::percentEncode(name))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteServiceVersionResponse>();
}

/**
 * @summary Deletes a service version.
 *
 * @return DeleteServiceVersionResponse
 */
DeleteServiceVersionResponse Client::deleteServiceVersion(const string &serviceId, const string &name) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteServiceVersionWithOptions(serviceId, name, headers, runtime);
}

/**
 * @summary Deletes a service source.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSourceResponse
 */
DeleteSourceResponse Client::deleteSourceWithOptions(const string &sourceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSource"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/sources/" , Darabonba::Encode::Encoder::percentEncode(sourceId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSourceResponse>();
}

/**
 * @summary Deletes a service source.
 *
 * @return DeleteSourceResponse
 */
DeleteSourceResponse Client::deleteSource(const string &sourceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteSourceWithOptions(sourceId, headers, runtime);
}

/**
 * @summary Publishes an HTTP API. This includes REST APIs and routes within HTTP APIs.
 *
 * @param request DeployHttpApiRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeployHttpApiResponse
 */
DeployHttpApiResponse Client::deployHttpApiWithOptions(const string &httpApiId, const DeployHttpApiRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasHttpApiConfig()) {
    body["httpApiConfig"] = request.getHttpApiConfig();
  }

  if (!!request.hasRestApiConfig()) {
    body["restApiConfig"] = request.getRestApiConfig();
  }

  if (!!request.hasRouteId()) {
    body["routeId"] = request.getRouteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeployHttpApi"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/http-apis/" , Darabonba::Encode::Encoder::percentEncode(httpApiId) , "/deploy")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeployHttpApiResponse>();
}

/**
 * @summary Publishes an HTTP API. This includes REST APIs and routes within HTTP APIs.
 *
 * @param request DeployHttpApiRequest
 * @return DeployHttpApiResponse
 */
DeployHttpApiResponse Client::deployHttpApi(const string &httpApiId, const DeployHttpApiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deployHttpApiWithOptions(httpApiId, request, headers, runtime);
}

/**
 * @summary Publishes an MCP server.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeployMcpServerResponse
 */
DeployMcpServerResponse Client::deployMcpServerWithOptions(const string &mcpServerId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeployMcpServer"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/mcp-servers/" , Darabonba::Encode::Encoder::percentEncode(mcpServerId) , "/deploy")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeployMcpServerResponse>();
}

/**
 * @summary Publishes an MCP server.
 *
 * @return DeployMcpServerResponse
 */
DeployMcpServerResponse Client::deployMcpServer(const string &mcpServerId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deployMcpServerWithOptions(mcpServerId, headers, runtime);
}

/**
 * @summary Queries the regions where the cloud-native API gateway is available for the current account.
 *
 * @param request DescribeRegionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegionsWithOptions(const DescribeRegionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLanguage()) {
    query["language"] = request.getLanguage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRegions"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/regions")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRegionsResponse>();
}

/**
 * @summary Queries the regions where the cloud-native API gateway is available for the current account.
 *
 * @param request DescribeRegionsRequest
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions(const DescribeRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeRegionsWithOptions(request, headers, runtime);
}

/**
 * @summary Exports a specified HTTP API.
 *
 * @param request ExportHttpApiRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportHttpApiResponse
 */
ExportHttpApiResponse Client::exportHttpApiWithOptions(const string &httpApiId, const ExportHttpApiRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasExtensionConfig()) {
    body["extensionConfig"] = request.getExtensionConfig();
  }

  if (!!request.hasGatewayId()) {
    body["gatewayId"] = request.getGatewayId();
  }

  if (!!request.hasOperationIds()) {
    body["operationIds"] = request.getOperationIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExportHttpApi"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/http-apis/" , Darabonba::Encode::Encoder::percentEncode(httpApiId) , "/export")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportHttpApiResponse>();
}

/**
 * @summary Exports a specified HTTP API.
 *
 * @param request ExportHttpApiRequest
 * @return ExportHttpApiResponse
 */
ExportHttpApiResponse Client::exportHttpApi(const string &httpApiId, const ExportHttpApiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return exportHttpApiWithOptions(httpApiId, request, headers, runtime);
}

/**
 * @summary Retrieves an API consumer.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetConsumerResponse
 */
GetConsumerResponse Client::getConsumerWithOptions(const string &consumerId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetConsumer"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/consumers/" , Darabonba::Encode::Encoder::percentEncode(consumerId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetConsumerResponse>();
}

/**
 * @summary Retrieves an API consumer.
 *
 * @return GetConsumerResponse
 */
GetConsumerResponse Client::getConsumer(const string &consumerId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getConsumerWithOptions(consumerId, headers, runtime);
}

/**
 * @summary Retrieves a consumer authorization rule.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetConsumerAuthorizationRuleResponse
 */
GetConsumerAuthorizationRuleResponse Client::getConsumerAuthorizationRuleWithOptions(const string &consumerAuthorizationRuleId, const string &consumerId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetConsumerAuthorizationRule"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/consumers/" , Darabonba::Encode::Encoder::percentEncode(consumerId) , "/authorization-rules/" , Darabonba::Encode::Encoder::percentEncode(consumerAuthorizationRuleId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetConsumerAuthorizationRuleResponse>();
}

/**
 * @summary Retrieves a consumer authorization rule.
 *
 * @return GetConsumerAuthorizationRuleResponse
 */
GetConsumerAuthorizationRuleResponse Client::getConsumerAuthorizationRule(const string &consumerAuthorizationRuleId, const string &consumerId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getConsumerAuthorizationRuleWithOptions(consumerAuthorizationRuleId, consumerId, headers, runtime);
}

/**
 * @summary Retrieves the monitoring log dashboard.
 *
 * @param tmpReq GetDashboardRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDashboardResponse
 */
GetDashboardResponse Client::getDashboardWithOptions(const string &gatewayId, const GetDashboardRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetDashboardShrinkRequest request = GetDashboardShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFilter()) {
    request.setFilterShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFilter(), "filter", "json"));
  }

  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["acceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasApiId()) {
    query["apiId"] = request.getApiId();
  }

  if (!!request.hasFilterShrink()) {
    query["filter"] = request.getFilterShrink();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasPluginClassId()) {
    query["pluginClassId"] = request.getPluginClassId();
  }

  if (!!request.hasPluginId()) {
    query["pluginId"] = request.getPluginId();
  }

  if (!!request.hasRouteId()) {
    query["routeId"] = request.getRouteId();
  }

  if (!!request.hasSource()) {
    query["source"] = request.getSource();
  }

  if (!!request.hasUpstreamCluster()) {
    query["upstreamCluster"] = request.getUpstreamCluster();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDashboard"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/gateways/" , Darabonba::Encode::Encoder::percentEncode(gatewayId) , "/dashboards")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDashboardResponse>();
}

/**
 * @summary Retrieves the monitoring log dashboard.
 *
 * @param request GetDashboardRequest
 * @return GetDashboardResponse
 */
GetDashboardResponse Client::getDashboard(const string &gatewayId, const GetDashboardRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getDashboardWithOptions(gatewayId, request, headers, runtime);
}

/**
 * @summary Queries a domain name.
 *
 * @param request GetDomainRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDomainResponse
 */
GetDomainResponse Client::getDomainWithOptions(const string &domainId, const GetDomainRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWithStatistics()) {
    query["withStatistics"] = request.getWithStatistics();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDomain"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/domains/" , Darabonba::Encode::Encoder::percentEncode(domainId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDomainResponse>();
}

/**
 * @summary Queries a domain name.
 *
 * @param request GetDomainRequest
 * @return GetDomainResponse
 */
GetDomainResponse Client::getDomain(const string &domainId, const GetDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getDomainWithOptions(domainId, request, headers, runtime);
}

/**
 * @deprecated OpenAPI GetEnvironment is deprecated
 *
 * @summary Queries an environment.
 *
 * @param request GetEnvironmentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEnvironmentResponse
 */
GetEnvironmentResponse Client::getEnvironmentWithOptions(const string &environmentId, const GetEnvironmentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWithStatistics()) {
    query["withStatistics"] = request.getWithStatistics();
  }

  if (!!request.hasWithVpcInfo()) {
    query["withVpcInfo"] = request.getWithVpcInfo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetEnvironment"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/environments/" , Darabonba::Encode::Encoder::percentEncode(environmentId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetEnvironmentResponse>();
}

/**
 * @deprecated OpenAPI GetEnvironment is deprecated
 *
 * @summary Queries an environment.
 *
 * @param request GetEnvironmentRequest
 * @return GetEnvironmentResponse
 */
GetEnvironmentResponse Client::getEnvironment(const string &environmentId, const GetEnvironmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getEnvironmentWithOptions(environmentId, request, headers, runtime);
}

/**
 * @summary Queries the basic information about an instance, such as the virtual private cloud (VPC) and vSwitch to which the instance belongs and its ingress.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetGatewayResponse
 */
GetGatewayResponse Client::getGatewayWithOptions(const string &gatewayId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetGateway"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/gateways/" , Darabonba::Encode::Encoder::percentEncode(gatewayId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetGatewayResponse>();
}

/**
 * @summary Queries the basic information about an instance, such as the virtual private cloud (VPC) and vSwitch to which the instance belongs and its ingress.
 *
 * @return GetGatewayResponse
 */
GetGatewayResponse Client::getGateway(const string &gatewayId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getGatewayWithOptions(gatewayId, headers, runtime);
}

/**
 * @summary Queries the details of a gateway quota rate limiting rule.
 *
 * @description This operation queries a specific consumer quota rule on an AI gateway.
 *
 * @param request GetGatewayQuotaRuleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetGatewayQuotaRuleResponse
 */
GetGatewayQuotaRuleResponse Client::getGatewayQuotaRuleWithOptions(const string &gatewayId, const string &ruleId, const GetGatewayQuotaRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsumerPageNumber()) {
    query["consumerPageNumber"] = request.getConsumerPageNumber();
  }

  if (!!request.hasConsumerPageSize()) {
    query["consumerPageSize"] = request.getConsumerPageSize();
  }

  if (!!request.hasWithConsumers()) {
    query["withConsumers"] = request.getWithConsumers();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetGatewayQuotaRule"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/gateways/" , Darabonba::Encode::Encoder::percentEncode(gatewayId) , "/quota-rules/" , Darabonba::Encode::Encoder::percentEncode(ruleId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetGatewayQuotaRuleResponse>();
}

/**
 * @summary Queries the details of a gateway quota rate limiting rule.
 *
 * @description This operation queries a specific consumer quota rule on an AI gateway.
 *
 * @param request GetGatewayQuotaRuleRequest
 * @return GetGatewayQuotaRuleResponse
 */
GetGatewayQuotaRuleResponse Client::getGatewayQuotaRule(const string &gatewayId, const string &ruleId, const GetGatewayQuotaRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getGatewayQuotaRuleWithOptions(gatewayId, ruleId, request, headers, runtime);
}

/**
 * @summary Queries the usage details of a subject under a gateway quota rate-limiting rule, including used quota, total quota, whether the limit is exceeded, usage details, and consumption records.
 *
 * @description Retrieves the usage details of a specific consumer under a quota rule. This operation takes effect only for AI gateways with a version later than 2.1.19.
 *
 * @param request GetGatewayQuotaRuleSubjectUsageRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetGatewayQuotaRuleSubjectUsageResponse
 */
GetGatewayQuotaRuleSubjectUsageResponse Client::getGatewayQuotaRuleSubjectUsageWithOptions(const string &gatewayId, const string &ruleId, const string &subjectId, const GetGatewayQuotaRuleSubjectUsageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "GetGatewayQuotaRuleSubjectUsage"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/gateways/" , Darabonba::Encode::Encoder::percentEncode(gatewayId) , "/quota-rules/" , Darabonba::Encode::Encoder::percentEncode(ruleId) , "/subjects/" , Darabonba::Encode::Encoder::percentEncode(subjectId) , "/usage")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetGatewayQuotaRuleSubjectUsageResponse>();
}

/**
 * @summary Queries the usage details of a subject under a gateway quota rate-limiting rule, including used quota, total quota, whether the limit is exceeded, usage details, and consumption records.
 *
 * @description Retrieves the usage details of a specific consumer under a quota rule. This operation takes effect only for AI gateways with a version later than 2.1.19.
 *
 * @param request GetGatewayQuotaRuleSubjectUsageRequest
 * @return GetGatewayQuotaRuleSubjectUsageResponse
 */
GetGatewayQuotaRuleSubjectUsageResponse Client::getGatewayQuotaRuleSubjectUsage(const string &gatewayId, const string &ruleId, const string &subjectId, const GetGatewayQuotaRuleSubjectUsageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getGatewayQuotaRuleSubjectUsageWithOptions(gatewayId, ruleId, subjectId, request, headers, runtime);
}

/**
 * @summary Retrieves HTTP API information.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHttpApiResponse
 */
GetHttpApiResponse Client::getHttpApiWithOptions(const string &httpApiId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetHttpApi"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/http-apis/" , Darabonba::Encode::Encoder::percentEncode(httpApiId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHttpApiResponse>();
}

/**
 * @summary Retrieves HTTP API information.
 *
 * @return GetHttpApiResponse
 */
GetHttpApiResponse Client::getHttpApi(const string &httpApiId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getHttpApiWithOptions(httpApiId, headers, runtime);
}

/**
 * @summary Retrieves operation information.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHttpApiOperationResponse
 */
GetHttpApiOperationResponse Client::getHttpApiOperationWithOptions(const string &httpApiId, const string &operationId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetHttpApiOperation"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/http-apis/" , Darabonba::Encode::Encoder::percentEncode(httpApiId) , "/operations/" , Darabonba::Encode::Encoder::percentEncode(operationId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHttpApiOperationResponse>();
}

/**
 * @summary Retrieves operation information.
 *
 * @return GetHttpApiOperationResponse
 */
GetHttpApiOperationResponse Client::getHttpApiOperation(const string &httpApiId, const string &operationId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getHttpApiOperationWithOptions(httpApiId, operationId, headers, runtime);
}

/**
 * @summary Retrieves the route details of an HTTP API.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHttpApiRouteResponse
 */
GetHttpApiRouteResponse Client::getHttpApiRouteWithOptions(const string &httpApiId, const string &routeId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetHttpApiRoute"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/http-apis/" , Darabonba::Encode::Encoder::percentEncode(httpApiId) , "/routes/" , Darabonba::Encode::Encoder::percentEncode(routeId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHttpApiRouteResponse>();
}

/**
 * @summary Retrieves the route details of an HTTP API.
 *
 * @return GetHttpApiRouteResponse
 */
GetHttpApiRouteResponse Client::getHttpApiRoute(const string &httpApiId, const string &routeId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getHttpApiRouteWithOptions(httpApiId, routeId, headers, runtime);
}

/**
 * @summary Retrieves an MCP server.
 *
 * @description The operation supports creating multiple services.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMcpServerResponse
 */
GetMcpServerResponse Client::getMcpServerWithOptions(const string &mcpServerId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMcpServer"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/mcp-servers/" , Darabonba::Encode::Encoder::percentEncode(mcpServerId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMcpServerResponse>();
}

/**
 * @summary Retrieves an MCP server.
 *
 * @description The operation supports creating multiple services.
 *
 * @return GetMcpServerResponse
 */
GetMcpServerResponse Client::getMcpServer(const string &mcpServerId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getMcpServerWithOptions(mcpServerId, headers, runtime);
}

/**
 * @summary Queries a plugin mount.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPluginAttachmentResponse
 */
GetPluginAttachmentResponse Client::getPluginAttachmentWithOptions(const string &pluginAttachmentId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPluginAttachment"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/plugin-attachments/" , Darabonba::Encode::Encoder::percentEncode(pluginAttachmentId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPluginAttachmentResponse>();
}

/**
 * @summary Queries a plugin mount.
 *
 * @return GetPluginAttachmentResponse
 */
GetPluginAttachmentResponse Client::getPluginAttachment(const string &pluginAttachmentId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getPluginAttachmentWithOptions(pluginAttachmentId, headers, runtime);
}

/**
 * @summary Retrieves a custom plugin class.
 *
 * @param request GetPluginClassRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPluginClassResponse
 */
GetPluginClassResponse Client::getPluginClassWithOptions(const string &pluginClassId, const GetPluginClassRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPluginClass"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/plugin-classes/" , Darabonba::Encode::Encoder::percentEncode(pluginClassId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPluginClassResponse>();
}

/**
 * @summary Retrieves a custom plugin class.
 *
 * @param request GetPluginClassRequest
 * @return GetPluginClassResponse
 */
GetPluginClassResponse Client::getPluginClass(const string &pluginClassId, const GetPluginClassRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getPluginClassWithOptions(pluginClassId, request, headers, runtime);
}

/**
 * @summary Retrieves a policy.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPolicyResponse
 */
GetPolicyResponse Client::getPolicyWithOptions(const string &policyId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPolicy"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v2/policies/" , Darabonba::Encode::Encoder::percentEncode(policyId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPolicyResponse>();
}

/**
 * @summary Retrieves a policy.
 *
 * @return GetPolicyResponse
 */
GetPolicyResponse Client::getPolicy(const string &policyId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getPolicyWithOptions(policyId, headers, runtime);
}

/**
 * @summary Queries the resource attachment of a policy.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPolicyAttachmentResponse
 */
GetPolicyAttachmentResponse Client::getPolicyAttachmentWithOptions(const string &policyAttachmentId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPolicyAttachment"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/policy-attachments/" , Darabonba::Encode::Encoder::percentEncode(policyAttachmentId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPolicyAttachmentResponse>();
}

/**
 * @summary Queries the resource attachment of a policy.
 *
 * @return GetPolicyAttachmentResponse
 */
GetPolicyAttachmentResponse Client::getPolicyAttachment(const string &policyAttachmentId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getPolicyAttachmentWithOptions(policyAttachmentId, headers, runtime);
}

/**
 * @summary Retrieves resource overview information.
 *
 * @param request GetResourceOverviewRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetResourceOverviewResponse
 */
GetResourceOverviewResponse Client::getResourceOverviewWithOptions(const GetResourceOverviewRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGatewayType()) {
    query["gatewayType"] = request.getGatewayType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetResourceOverview"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/overview/resources")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetResourceOverviewResponse>();
}

/**
 * @summary Retrieves resource overview information.
 *
 * @param request GetResourceOverviewRequest
 * @return GetResourceOverviewResponse
 */
GetResourceOverviewResponse Client::getResourceOverview(const GetResourceOverviewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getResourceOverviewWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves a key.
 *
 * @description The operation supports creating multiple services.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSecretResponse
 */
GetSecretResponse Client::getSecretWithOptions(const string &secretId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSecret"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/secrets/" , Darabonba::Encode::Encoder::percentEncode(secretId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSecretResponse>();
}

/**
 * @summary Retrieves a key.
 *
 * @description The operation supports creating multiple services.
 *
 * @return GetSecretResponse
 */
GetSecretResponse Client::getSecret(const string &secretId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getSecretWithOptions(secretId, headers, runtime);
}

/**
 * @summary Retrieves the value of a key.
 *
 * @description The operation supports creating multiple services.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSecretValueResponse
 */
GetSecretValueResponse Client::getSecretValueWithOptions(const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSecretValue"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/secrets/name/" , Darabonba::Encode::Encoder::percentEncode(name) , "/value")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSecretValueResponse>();
}

/**
 * @summary Retrieves the value of a key.
 *
 * @description The operation supports creating multiple services.
 *
 * @return GetSecretValueResponse
 */
GetSecretValueResponse Client::getSecretValue(const string &name) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getSecretValueWithOptions(name, headers, runtime);
}

/**
 * @summary Retrieves the details of a service.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetServiceResponse
 */
GetServiceResponse Client::getServiceWithOptions(const string &serviceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetService"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/services/" , Darabonba::Encode::Encoder::percentEncode(serviceId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetServiceResponse>();
}

/**
 * @summary Retrieves the details of a service.
 *
 * @return GetServiceResponse
 */
GetServiceResponse Client::getService(const string &serviceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getServiceWithOptions(serviceId, headers, runtime);
}

/**
 * @summary Retrieves the details of a service source.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSourceResponse
 */
GetSourceResponse Client::getSourceWithOptions(const string &sourceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSource"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/sources/" , Darabonba::Encode::Encoder::percentEncode(sourceId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSourceResponse>();
}

/**
 * @summary Retrieves the details of a service source.
 *
 * @return GetSourceResponse
 */
GetSourceResponse Client::getSource(const string &sourceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getSourceWithOptions(sourceId, headers, runtime);
}

/**
 * @summary Retrieves the Tracing Analysis configuration.
 *
 * @param request GetTraceConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTraceConfigResponse
 */
GetTraceConfigResponse Client::getTraceConfigWithOptions(const string &gatewayId, const GetTraceConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["acceptLanguage"] = request.getAcceptLanguage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTraceConfig"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/gateways/" , Darabonba::Encode::Encoder::percentEncode(gatewayId) , "/trace")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTraceConfigResponse>();
}

/**
 * @summary Retrieves the Tracing Analysis configuration.
 *
 * @param request GetTraceConfigRequest
 * @return GetTraceConfigResponse
 */
GetTraceConfigResponse Client::getTraceConfig(const string &gatewayId, const GetTraceConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTraceConfigWithOptions(gatewayId, request, headers, runtime);
}

/**
 * @summary Imports an HTTP API. You can import an OpenAPI 2.0 or OpenAPI 3.0.x definition file as a REST API.
 *
 * @param request ImportHttpApiRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportHttpApiResponse
 */
ImportHttpApiResponse Client::importHttpApiWithOptions(const ImportHttpApiRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDeployConfigs()) {
    body["deployConfigs"] = request.getDeployConfigs();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDryRun()) {
    body["dryRun"] = request.getDryRun();
  }

  if (!!request.hasGatewayId()) {
    body["gatewayId"] = request.getGatewayId();
  }

  if (!!request.hasMcpRouteId()) {
    body["mcpRouteId"] = request.getMcpRouteId();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasResourceGroupId()) {
    body["resourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSpecContentBase64()) {
    body["specContentBase64"] = request.getSpecContentBase64();
  }

  if (!!request.hasSpecFileUrl()) {
    body["specFileUrl"] = request.getSpecFileUrl();
  }

  if (!!request.hasSpecOssConfig()) {
    body["specOssConfig"] = request.getSpecOssConfig();
  }

  if (!!request.hasStrategy()) {
    body["strategy"] = request.getStrategy();
  }

  if (!!request.hasTargetHttpApiId()) {
    body["targetHttpApiId"] = request.getTargetHttpApiId();
  }

  if (!!request.hasVersionConfig()) {
    body["versionConfig"] = request.getVersionConfig();
  }

  if (!!request.hasWithGatewayExtension()) {
    body["withGatewayExtension"] = request.getWithGatewayExtension();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ImportHttpApi"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/http-apis/import")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImportHttpApiResponse>();
}

/**
 * @summary Imports an HTTP API. You can import an OpenAPI 2.0 or OpenAPI 3.0.x definition file as a REST API.
 *
 * @param request ImportHttpApiRequest
 * @return ImportHttpApiResponse
 */
ImportHttpApiResponse Client::importHttpApi(const ImportHttpApiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return importHttpApiWithOptions(request, headers, runtime);
}

/**
 * @summary Installs a plug-in.
 *
 * @param request InstallPluginRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return InstallPluginResponse
 */
InstallPluginResponse Client::installPluginWithOptions(const InstallPluginRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasGatewayIds()) {
    body["gatewayIds"] = request.getGatewayIds();
  }

  if (!!request.hasPluginClassId()) {
    body["pluginClassId"] = request.getPluginClassId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "InstallPlugin"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/plugins/")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InstallPluginResponse>();
}

/**
 * @summary Installs a plug-in.
 *
 * @param request InstallPluginRequest
 * @return InstallPluginResponse
 */
InstallPluginResponse Client::installPlugin(const InstallPluginRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return installPluginWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves the list of consumer authorization rules.
 *
 * @param request ListConsumerAuthorizationRulesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListConsumerAuthorizationRulesResponse
 */
ListConsumerAuthorizationRulesResponse Client::listConsumerAuthorizationRulesWithOptions(const string &consumerId, const ListConsumerAuthorizationRulesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiNameLike()) {
    query["apiNameLike"] = request.getApiNameLike();
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
    {"action" , "ListConsumerAuthorizationRules"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/consumers/" , Darabonba::Encode::Encoder::percentEncode(consumerId) , "/authorization-rules")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListConsumerAuthorizationRulesResponse>();
}

/**
 * @summary Retrieves the list of consumer authorization rules.
 *
 * @param request ListConsumerAuthorizationRulesRequest
 * @return ListConsumerAuthorizationRulesResponse
 */
ListConsumerAuthorizationRulesResponse Client::listConsumerAuthorizationRules(const string &consumerId, const ListConsumerAuthorizationRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listConsumerAuthorizationRulesWithOptions(consumerId, request, headers, runtime);
}

/**
 * @summary Queries the list of quota rules configured for a specific consumer.
 *
 * @param request ListConsumerQuotaRulesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListConsumerQuotaRulesResponse
 */
ListConsumerQuotaRulesResponse Client::listConsumerQuotaRulesWithOptions(const string &consumerId, const ListConsumerQuotaRulesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGatewayId()) {
    query["gatewayId"] = request.getGatewayId();
  }

  if (!!request.hasKeyword()) {
    query["keyword"] = request.getKeyword();
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
    {"action" , "ListConsumerQuotaRules"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/consumers/" , Darabonba::Encode::Encoder::percentEncode(consumerId) , "/quota-rules")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListConsumerQuotaRulesResponse>();
}

/**
 * @summary Queries the list of quota rules configured for a specific consumer.
 *
 * @param request ListConsumerQuotaRulesRequest
 * @return ListConsumerQuotaRulesResponse
 */
ListConsumerQuotaRulesResponse Client::listConsumerQuotaRules(const string &consumerId, const ListConsumerQuotaRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listConsumerQuotaRulesWithOptions(consumerId, request, headers, runtime);
}

/**
 * @summary Retrieves a list of consumers.
 *
 * @param request ListConsumersRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListConsumersResponse
 */
ListConsumersResponse Client::listConsumersWithOptions(const ListConsumersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGatewayType()) {
    query["gatewayType"] = request.getGatewayType();
  }

  if (!!request.hasNameLike()) {
    query["nameLike"] = request.getNameLike();
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
    {"action" , "ListConsumers"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/consumers")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListConsumersResponse>();
}

/**
 * @summary Retrieves a list of consumers.
 *
 * @param request ListConsumersRequest
 * @return ListConsumersResponse
 */
ListConsumersResponse Client::listConsumers(const ListConsumersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listConsumersWithOptions(request, headers, runtime);
}

/**
 * @summary Queries a list of domain names.
 *
 * @param request ListDomainsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDomainsResponse
 */
ListDomainsResponse Client::listDomainsWithOptions(const ListDomainsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainScope()) {
    query["domainScope"] = request.getDomainScope();
  }

  if (!!request.hasGatewayId()) {
    query["gatewayId"] = request.getGatewayId();
  }

  if (!!request.hasGatewayType()) {
    query["gatewayType"] = request.getGatewayType();
  }

  if (!!request.hasNameLike()) {
    query["nameLike"] = request.getNameLike();
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
    {"action" , "ListDomains"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/domains")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDomainsResponse>();
}

/**
 * @summary Queries a list of domain names.
 *
 * @param request ListDomainsRequest
 * @return ListDomainsResponse
 */
ListDomainsResponse Client::listDomains(const ListDomainsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listDomainsWithOptions(request, headers, runtime);
}

/**
 * @deprecated OpenAPI ListEnvironments is deprecated
 *
 * @summary Queries the list of environments.
 *
 * @param request ListEnvironmentsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEnvironmentsResponse
 */
ListEnvironmentsResponse Client::listEnvironmentsWithOptions(const ListEnvironmentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliasLike()) {
    query["aliasLike"] = request.getAliasLike();
  }

  if (!!request.hasGatewayId()) {
    query["gatewayId"] = request.getGatewayId();
  }

  if (!!request.hasGatewayNameLike()) {
    query["gatewayNameLike"] = request.getGatewayNameLike();
  }

  if (!!request.hasGatewayType()) {
    query["gatewayType"] = request.getGatewayType();
  }

  if (!!request.hasNameLike()) {
    query["nameLike"] = request.getNameLike();
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
    {"action" , "ListEnvironments"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/environments")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEnvironmentsResponse>();
}

/**
 * @deprecated OpenAPI ListEnvironments is deprecated
 *
 * @summary Queries the list of environments.
 *
 * @param request ListEnvironmentsRequest
 * @return ListEnvironmentsResponse
 */
ListEnvironmentsResponse Client::listEnvironments(const ListEnvironmentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listEnvironmentsWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves the external service information of a gateway.
 *
 * @description This operation supports creating multiple services.
 *
 * @param request ListExternalServicesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListExternalServicesResponse
 */
ListExternalServicesResponse Client::listExternalServicesWithOptions(const string &gatewayId, const ListExternalServicesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasImportableOnly()) {
    query["importableOnly"] = request.getImportableOnly();
  }

  if (!!request.hasLimit()) {
    query["limit"] = request.getLimit();
  }

  if (!!request.hasNameLike()) {
    query["nameLike"] = request.getNameLike();
  }

  if (!!request.hasPaiWorkspaceId()) {
    query["paiWorkspaceId"] = request.getPaiWorkspaceId();
  }

  if (!!request.hasSourceType()) {
    query["sourceType"] = request.getSourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListExternalServices"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/gateways/" , Darabonba::Encode::Encoder::percentEncode(gatewayId) , "/external-services")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListExternalServicesResponse>();
}

/**
 * @summary Retrieves the external service information of a gateway.
 *
 * @description This operation supports creating multiple services.
 *
 * @param request ListExternalServicesRequest
 * @return ListExternalServicesResponse
 */
ListExternalServicesResponse Client::listExternalServices(const string &gatewayId, const ListExternalServicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listExternalServicesWithOptions(gatewayId, request, headers, runtime);
}

/**
 * @summary Queries the list of gateway attribute parameter settings.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGatewayFeaturesResponse
 */
ListGatewayFeaturesResponse Client::listGatewayFeaturesWithOptions(const string &gatewayId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListGatewayFeatures"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/gateways/" , Darabonba::Encode::Encoder::percentEncode(gatewayId) , "/gateway-features")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListGatewayFeaturesResponse>();
}

/**
 * @summary Queries the list of gateway attribute parameter settings.
 *
 * @return ListGatewayFeaturesResponse
 */
ListGatewayFeaturesResponse Client::listGatewayFeatures(const string &gatewayId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listGatewayFeaturesWithOptions(gatewayId, headers, runtime);
}

/**
 * @summary Queries the list of API consumer quota rules bound to a gateway.
 *
 * @description Queries the list of API consumer quota rules bound to a gateway.
 *
 * @param request ListGatewayQuotaRulesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGatewayQuotaRulesResponse
 */
ListGatewayQuotaRulesResponse Client::listGatewayQuotaRulesWithOptions(const string &gatewayId, const ListGatewayQuotaRulesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["keyword"] = request.getKeyword();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
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
    {"action" , "ListGatewayQuotaRules"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/gateways/" , Darabonba::Encode::Encoder::percentEncode(gatewayId) , "/quota-rules")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListGatewayQuotaRulesResponse>();
}

/**
 * @summary Queries the list of API consumer quota rules bound to a gateway.
 *
 * @description Queries the list of API consumer quota rules bound to a gateway.
 *
 * @param request ListGatewayQuotaRulesRequest
 * @return ListGatewayQuotaRulesResponse
 */
ListGatewayQuotaRulesResponse Client::listGatewayQuotaRules(const string &gatewayId, const ListGatewayQuotaRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listGatewayQuotaRulesWithOptions(gatewayId, request, headers, runtime);
}

/**
 * @summary Queries a list of gateways.
 *
 * @param tmpReq ListGatewaysRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGatewaysResponse
 */
ListGatewaysResponse Client::listGatewaysWithOptions(const ListGatewaysRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListGatewaysShrinkRequest request = ListGatewaysShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTag(), "tag", "json"));
  }

  json query = {};
  if (!!request.hasGatewayId()) {
    query["gatewayId"] = request.getGatewayId();
  }

  if (!!request.hasGatewayType()) {
    query["gatewayType"] = request.getGatewayType();
  }

  if (!!request.hasKeyword()) {
    query["keyword"] = request.getKeyword();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
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

  if (!!request.hasTagShrink()) {
    query["tag"] = request.getTagShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListGateways"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/gateways")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListGatewaysResponse>();
}

/**
 * @summary Queries a list of gateways.
 *
 * @param request ListGatewaysRequest
 * @return ListGatewaysResponse
 */
ListGatewaysResponse Client::listGateways(const ListGatewaysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listGatewaysWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves a list of API operations.
 *
 * @param request ListHttpApiOperationsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHttpApiOperationsResponse
 */
ListHttpApiOperationsResponse Client::listHttpApiOperationsWithOptions(const string &httpApiId, const ListHttpApiOperationsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsumerAuthorizationRuleId()) {
    query["consumerAuthorizationRuleId"] = request.getConsumerAuthorizationRuleId();
  }

  if (!!request.hasEnableAuth()) {
    query["enableAuth"] = request.getEnableAuth();
  }

  if (!!request.hasForDeploy()) {
    query["forDeploy"] = request.getForDeploy();
  }

  if (!!request.hasGatewayId()) {
    query["gatewayId"] = request.getGatewayId();
  }

  if (!!request.hasMethod()) {
    query["method"] = request.getMethod();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasNameLike()) {
    query["nameLike"] = request.getNameLike();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasPathLike()) {
    query["pathLike"] = request.getPathLike();
  }

  if (!!request.hasWithConsumerInEnvironmentId()) {
    query["withConsumerInEnvironmentId"] = request.getWithConsumerInEnvironmentId();
  }

  if (!!request.hasWithConsumerInfoById()) {
    query["withConsumerInfoById"] = request.getWithConsumerInfoById();
  }

  if (!!request.hasWithPluginAttachmentByPluginId()) {
    query["withPluginAttachmentByPluginId"] = request.getWithPluginAttachmentByPluginId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListHttpApiOperations"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/http-apis/" , Darabonba::Encode::Encoder::percentEncode(httpApiId) , "/operations")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHttpApiOperationsResponse>();
}

/**
 * @summary Retrieves a list of API operations.
 *
 * @param request ListHttpApiOperationsRequest
 * @return ListHttpApiOperationsResponse
 */
ListHttpApiOperationsResponse Client::listHttpApiOperations(const string &httpApiId, const ListHttpApiOperationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listHttpApiOperationsWithOptions(httpApiId, request, headers, runtime);
}

/**
 * @summary Queries the route list of an HTTP API.
 *
 * @param request ListHttpApiRoutesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHttpApiRoutesResponse
 */
ListHttpApiRoutesResponse Client::listHttpApiRoutesWithOptions(const string &httpApiId, const ListHttpApiRoutesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackendServiceName()) {
    query["backendServiceName"] = request.getBackendServiceName();
  }

  if (!!request.hasConsumerAuthorizationRuleId()) {
    query["consumerAuthorizationRuleId"] = request.getConsumerAuthorizationRuleId();
  }

  if (!!request.hasDeployStatuses()) {
    query["deployStatuses"] = request.getDeployStatuses();
  }

  if (!!request.hasDomainId()) {
    query["domainId"] = request.getDomainId();
  }

  if (!!request.hasEnvironmentId()) {
    query["environmentId"] = request.getEnvironmentId();
  }

  if (!!request.hasForDeploy()) {
    query["forDeploy"] = request.getForDeploy();
  }

  if (!!request.hasGatewayId()) {
    query["gatewayId"] = request.getGatewayId();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasNameLike()) {
    query["nameLike"] = request.getNameLike();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasPathLike()) {
    query["pathLike"] = request.getPathLike();
  }

  if (!!request.hasWithAuthPolicyInfo()) {
    query["withAuthPolicyInfo"] = request.getWithAuthPolicyInfo();
  }

  if (!!request.hasWithConsumerInfoById()) {
    query["withConsumerInfoById"] = request.getWithConsumerInfoById();
  }

  if (!!request.hasWithPluginAttachmentByPluginId()) {
    query["withPluginAttachmentByPluginId"] = request.getWithPluginAttachmentByPluginId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListHttpApiRoutes"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/http-apis/" , Darabonba::Encode::Encoder::percentEncode(httpApiId) , "/routes")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHttpApiRoutesResponse>();
}

/**
 * @summary Queries the route list of an HTTP API.
 *
 * @param request ListHttpApiRoutesRequest
 * @return ListHttpApiRoutesResponse
 */
ListHttpApiRoutesResponse Client::listHttpApiRoutes(const string &httpApiId, const ListHttpApiRoutesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listHttpApiRoutesWithOptions(httpApiId, request, headers, runtime);
}

/**
 * @summary Retrieves a list of HTTP APIs.
 *
 * @param request ListHttpApisRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHttpApisResponse
 */
ListHttpApisResponse Client::listHttpApisWithOptions(const ListHttpApisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGatewayId()) {
    query["gatewayId"] = request.getGatewayId();
  }

  if (!!request.hasGatewayType()) {
    query["gatewayType"] = request.getGatewayType();
  }

  if (!!request.hasKeyword()) {
    query["keyword"] = request.getKeyword();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
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

  if (!!request.hasTypes()) {
    query["types"] = request.getTypes();
  }

  if (!!request.hasWithAPIsPublishedToEnvironment()) {
    query["withAPIsPublishedToEnvironment"] = request.getWithAPIsPublishedToEnvironment();
  }

  if (!!request.hasWithAuthPolicyInEnvironmentId()) {
    query["withAuthPolicyInEnvironmentId"] = request.getWithAuthPolicyInEnvironmentId();
  }

  if (!!request.hasWithAuthPolicyList()) {
    query["withAuthPolicyList"] = request.getWithAuthPolicyList();
  }

  if (!!request.hasWithConsumerInfoById()) {
    query["withConsumerInfoById"] = request.getWithConsumerInfoById();
  }

  if (!!request.hasWithEnvironmentInfo()) {
    query["withEnvironmentInfo"] = request.getWithEnvironmentInfo();
  }

  if (!!request.hasWithEnvironmentInfoById()) {
    query["withEnvironmentInfoById"] = request.getWithEnvironmentInfoById();
  }

  if (!!request.hasWithIngressInfo()) {
    query["withIngressInfo"] = request.getWithIngressInfo();
  }

  if (!!request.hasWithPluginAttachmentByPluginId()) {
    query["withPluginAttachmentByPluginId"] = request.getWithPluginAttachmentByPluginId();
  }

  if (!!request.hasWithPolicyConfigs()) {
    query["withPolicyConfigs"] = request.getWithPolicyConfigs();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListHttpApis"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/http-apis")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHttpApisResponse>();
}

/**
 * @summary Retrieves a list of HTTP APIs.
 *
 * @param request ListHttpApisRequest
 * @return ListHttpApisResponse
 */
ListHttpApisResponse Client::listHttpApis(const ListHttpApisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listHttpApisWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves a list of MCP servers.
 *
 * @description The operation supports creating multiple services.
 *
 * @param request ListMcpServersRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMcpServersResponse
 */
ListMcpServersResponse Client::listMcpServersWithOptions(const ListMcpServersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreateFromTypes()) {
    query["createFromTypes"] = request.getCreateFromTypes();
  }

  if (!!request.hasDeployStatuses()) {
    query["deployStatuses"] = request.getDeployStatuses();
  }

  if (!!request.hasGatewayId()) {
    query["gatewayId"] = request.getGatewayId();
  }

  if (!!request.hasNameLike()) {
    query["nameLike"] = request.getNameLike();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasType()) {
    query["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMcpServers"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/mcp-servers")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMcpServersResponse>();
}

/**
 * @summary Retrieves a list of MCP servers.
 *
 * @description The operation supports creating multiple services.
 *
 * @param request ListMcpServersRequest
 * @return ListMcpServersResponse
 */
ListMcpServersResponse Client::listMcpServers(const ListMcpServersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listMcpServersWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves the list of plug-in mounts.
 *
 * @param request ListPluginAttachmentsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPluginAttachmentsResponse
 */
ListPluginAttachmentsResponse Client::listPluginAttachmentsWithOptions(const ListPluginAttachmentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAttachResourceId()) {
    query["attachResourceId"] = request.getAttachResourceId();
  }

  if (!!request.hasAttachResourceType()) {
    query["attachResourceType"] = request.getAttachResourceType();
  }

  if (!!request.hasAttachResourceTypes()) {
    query["attachResourceTypes"] = request.getAttachResourceTypes();
  }

  if (!!request.hasEnvironmentId()) {
    query["environmentId"] = request.getEnvironmentId();
  }

  if (!!request.hasGatewayId()) {
    query["gatewayId"] = request.getGatewayId();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasPluginId()) {
    query["pluginId"] = request.getPluginId();
  }

  if (!!request.hasWithParentResource()) {
    query["withParentResource"] = request.getWithParentResource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPluginAttachments"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/plugin-attachments")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPluginAttachmentsResponse>();
}

/**
 * @summary Retrieves the list of plug-in mounts.
 *
 * @param request ListPluginAttachmentsRequest
 * @return ListPluginAttachmentsResponse
 */
ListPluginAttachmentsResponse Client::listPluginAttachments(const ListPluginAttachmentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPluginAttachmentsWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves plug-ins.
 *
 * @description The operation supports creating multiple services.
 *
 * @param request ListPluginClassesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPluginClassesResponse
 */
ListPluginClassesResponse Client::listPluginClassesWithOptions(const ListPluginClassesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliasLike()) {
    query["aliasLike"] = request.getAliasLike();
  }

  if (!!request.hasDirection()) {
    query["direction"] = request.getDirection();
  }

  if (!!request.hasExcludeBuiltinAiProxy()) {
    query["excludeBuiltinAiProxy"] = request.getExcludeBuiltinAiProxy();
  }

  if (!!request.hasGatewayId()) {
    query["gatewayId"] = request.getGatewayId();
  }

  if (!!request.hasGatewayType()) {
    query["gatewayType"] = request.getGatewayType();
  }

  if (!!request.hasInstalled()) {
    query["installed"] = request.getInstalled();
  }

  if (!!request.hasNameLike()) {
    query["nameLike"] = request.getNameLike();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasSource()) {
    query["source"] = request.getSource();
  }

  if (!!request.hasType()) {
    query["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPluginClasses"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/plugin-classes")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPluginClassesResponse>();
}

/**
 * @summary Retrieves plug-ins.
 *
 * @description The operation supports creating multiple services.
 *
 * @param request ListPluginClassesRequest
 * @return ListPluginClassesResponse
 */
ListPluginClassesResponse Client::listPluginClasses(const ListPluginClassesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPluginClassesWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves a list of plugins.
 *
 * @param request ListPluginsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPluginsResponse
 */
ListPluginsResponse Client::listPluginsWithOptions(const ListPluginsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAttachResourceId()) {
    query["attachResourceId"] = request.getAttachResourceId();
  }

  if (!!request.hasAttachResourceType()) {
    query["attachResourceType"] = request.getAttachResourceType();
  }

  if (!!request.hasGatewayId()) {
    query["gatewayId"] = request.getGatewayId();
  }

  if (!!request.hasGatewayType()) {
    query["gatewayType"] = request.getGatewayType();
  }

  if (!!request.hasIncludeBuiltinAiGateway()) {
    query["includeBuiltinAiGateway"] = request.getIncludeBuiltinAiGateway();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasPluginClassId()) {
    query["pluginClassId"] = request.getPluginClassId();
  }

  if (!!request.hasPluginClassName()) {
    query["pluginClassName"] = request.getPluginClassName();
  }

  if (!!request.hasWithAttachmentInfo()) {
    query["withAttachmentInfo"] = request.getWithAttachmentInfo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPlugins"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/plugins")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPluginsResponse>();
}

/**
 * @summary Retrieves a list of plugins.
 *
 * @param request ListPluginsRequest
 * @return ListPluginsResponse
 */
ListPluginsResponse Client::listPlugins(const ListPluginsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPluginsWithOptions(request, headers, runtime);
}

/**
 * @summary Queries a list of policies.
 *
 * @param request ListPoliciesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPoliciesResponse
 */
ListPoliciesResponse Client::listPoliciesWithOptions(const ListPoliciesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAttachResourceId()) {
    query["attachResourceId"] = request.getAttachResourceId();
  }

  if (!!request.hasAttachResourceType()) {
    query["attachResourceType"] = request.getAttachResourceType();
  }

  if (!!request.hasEnvironmentId()) {
    query["environmentId"] = request.getEnvironmentId();
  }

  if (!!request.hasGatewayId()) {
    query["gatewayId"] = request.getGatewayId();
  }

  if (!!request.hasWithAttachments()) {
    query["withAttachments"] = request.getWithAttachments();
  }

  if (!!request.hasWithSystemPolicy()) {
    query["withSystemPolicy"] = request.getWithSystemPolicy();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPolicies"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/policies")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPoliciesResponse>();
}

/**
 * @summary Queries a list of policies.
 *
 * @param request ListPoliciesRequest
 * @return ListPoliciesResponse
 */
ListPoliciesResponse Client::listPolicies(const ListPoliciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPoliciesWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves policy templates.
 *
 * @param request ListPolicyClassesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPolicyClassesResponse
 */
ListPolicyClassesResponse Client::listPolicyClassesWithOptions(const ListPolicyClassesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAttachResourceId()) {
    query["attachResourceId"] = request.getAttachResourceId();
  }

  if (!!request.hasAttachResourceType()) {
    query["attachResourceType"] = request.getAttachResourceType();
  }

  if (!!request.hasDirection()) {
    query["direction"] = request.getDirection();
  }

  if (!!request.hasGatewayId()) {
    query["gatewayId"] = request.getGatewayId();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasType()) {
    query["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPolicyClasses"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/policy-classes")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPolicyClassesResponse>();
}

/**
 * @summary Retrieves policy templates.
 *
 * @param request ListPolicyClassesRequest
 * @return ListPolicyClassesResponse
 */
ListPolicyClassesResponse Client::listPolicyClasses(const ListPolicyClassesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPolicyClassesWithOptions(request, headers, runtime);
}

/**
 * @summary Lists secret references.
 *
 * @description This operation supports creating multiple services.
 *
 * @param request ListSecretReferencesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSecretReferencesResponse
 */
ListSecretReferencesResponse Client::listSecretReferencesWithOptions(const string &secretId, const ListSecretReferencesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "ListSecretReferences"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/secrets/" , Darabonba::Encode::Encoder::percentEncode(secretId) , "/references")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSecretReferencesResponse>();
}

/**
 * @summary Lists secret references.
 *
 * @description This operation supports creating multiple services.
 *
 * @param request ListSecretReferencesRequest
 * @return ListSecretReferencesResponse
 */
ListSecretReferencesResponse Client::listSecretReferences(const string &secretId, const ListSecretReferencesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listSecretReferencesWithOptions(secretId, request, headers, runtime);
}

/**
 * @summary Lists keys.
 *
 * @description The operation supports creating multiple services.
 *
 * @param request ListSecretsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSecretsResponse
 */
ListSecretsResponse Client::listSecretsWithOptions(const ListSecretsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGatewayType()) {
    query["gatewayType"] = request.getGatewayType();
  }

  if (!!request.hasNameLike()) {
    query["nameLike"] = request.getNameLike();
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
    {"action" , "ListSecrets"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/secrets")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSecretsResponse>();
}

/**
 * @summary Lists keys.
 *
 * @description The operation supports creating multiple services.
 *
 * @param request ListSecretsRequest
 * @return ListSecretsResponse
 */
ListSecretsResponse Client::listSecrets(const ListSecretsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listSecretsWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves a list of services.
 *
 * @param request ListServicesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListServicesResponse
 */
ListServicesResponse Client::listServicesWithOptions(const ListServicesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGatewayId()) {
    query["gatewayId"] = request.getGatewayId();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
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

  if (!!request.hasSourceType()) {
    query["sourceType"] = request.getSourceType();
  }

  if (!!request.hasSourceTypes()) {
    query["sourceTypes"] = request.getSourceTypes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListServices"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/services")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListServicesResponse>();
}

/**
 * @summary Retrieves a list of services.
 *
 * @param request ListServicesRequest
 * @return ListServicesResponse
 */
ListServicesResponse Client::listServices(const ListServicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listServicesWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves a list of certificates.
 *
 * @param request ListSslCertsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSslCertsResponse
 */
ListSslCertsResponse Client::listSslCertsWithOptions(const ListSslCertsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertNameLike()) {
    query["certNameLike"] = request.getCertNameLike();
  }

  if (!!request.hasDomainName()) {
    query["domainName"] = request.getDomainName();
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
    {"action" , "ListSslCerts"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/ssl/certs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSslCertsResponse>();
}

/**
 * @summary Retrieves a list of certificates.
 *
 * @param request ListSslCertsRequest
 * @return ListSslCertsResponse
 */
ListSslCertsResponse Client::listSslCerts(const ListSslCertsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listSslCertsWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves the list of resource labels.
 *
 * @param tmpReq ListTagResourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListTagResourcesShrinkRequest request = ListTagResourcesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasResourceId()) {
    request.setResourceIdShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResourceId(), "ResourceId", "json"));
  }

  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTag(), "Tag", "json"));
  }

  json query = {};
  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasResourceIdShrink()) {
    query["ResourceId"] = request.getResourceIdShrink();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTagShrink()) {
    query["Tag"] = request.getTagShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagResources"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/tags")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagResourcesResponse>();
}

/**
 * @summary Retrieves the list of resource labels.
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
 * @summary Retrieves the zones available for a cloud-native API gateway in a specified region.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListZonesResponse
 */
ListZonesResponse Client::listZonesWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListZones"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/zones")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListZonesResponse>();
}

/**
 * @summary Retrieves the zones available for a cloud-native API gateway in a specified region.
 *
 * @return ListZonesResponse
 */
ListZonesResponse Client::listZones() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listZonesWithOptions(headers, runtime);
}

/**
 * @summary Queries a list of consumer authorization rules.
 *
 * @param request QueryConsumerAuthorizationRulesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryConsumerAuthorizationRulesResponse
 */
QueryConsumerAuthorizationRulesResponse Client::queryConsumerAuthorizationRulesWithOptions(const QueryConsumerAuthorizationRulesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiNameLike()) {
    query["apiNameLike"] = request.getApiNameLike();
  }

  if (!!request.hasConsumerGroupId()) {
    query["consumerGroupId"] = request.getConsumerGroupId();
  }

  if (!!request.hasConsumerId()) {
    query["consumerId"] = request.getConsumerId();
  }

  if (!!request.hasConsumerNameLike()) {
    query["consumerNameLike"] = request.getConsumerNameLike();
  }

  if (!!request.hasEnvironmentId()) {
    query["environmentId"] = request.getEnvironmentId();
  }

  if (!!request.hasGroupByApi()) {
    query["groupByApi"] = request.getGroupByApi();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasParentResourceId()) {
    query["parentResourceId"] = request.getParentResourceId();
  }

  if (!!request.hasPrincipalType()) {
    query["principalType"] = request.getPrincipalType();
  }

  if (!!request.hasResourceId()) {
    query["resourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["resourceType"] = request.getResourceType();
  }

  if (!!request.hasResourceTypes()) {
    query["resourceTypes"] = request.getResourceTypes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryConsumerAuthorizationRules"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/authorization-rules")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryConsumerAuthorizationRulesResponse>();
}

/**
 * @summary Queries a list of consumer authorization rules.
 *
 * @param request QueryConsumerAuthorizationRulesRequest
 * @return QueryConsumerAuthorizationRulesResponse
 */
QueryConsumerAuthorizationRulesResponse Client::queryConsumerAuthorizationRules(const QueryConsumerAuthorizationRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return queryConsumerAuthorizationRulesWithOptions(request, headers, runtime);
}

/**
 * @summary Deletes an API consumer authorization rule.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveConsumerAuthorizationRuleResponse
 */
RemoveConsumerAuthorizationRuleResponse Client::removeConsumerAuthorizationRuleWithOptions(const string &consumerAuthorizationRuleId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveConsumerAuthorizationRule"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/authorization-rules/" , Darabonba::Encode::Encoder::percentEncode(consumerAuthorizationRuleId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveConsumerAuthorizationRuleResponse>();
}

/**
 * @summary Deletes an API consumer authorization rule.
 *
 * @return RemoveConsumerAuthorizationRuleResponse
 */
RemoveConsumerAuthorizationRuleResponse Client::removeConsumerAuthorizationRule(const string &consumerAuthorizationRuleId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return removeConsumerAuthorizationRuleWithOptions(consumerAuthorizationRuleId, headers, runtime);
}

/**
 * @summary Resets a quota rate limiting rule on a gateway.
 *
 * @description Resets a quota rate limiting rule on a gateway. This operation takes effect only for AI gateways with a version later than 2.1.19. The reset clears the historical usage of consumers on the rule.
 * > 
 * >  Recommended call logic:
 * > - 1. Perform a dry run to check for rule conflicts.
 * > - - Set dryRun=true.
 * > - - The response contains a conflict preview with conflictHash.
 * > - 2. Submit the request after confirmation.
 * > - - No conflict: dryRun=false, overwrite=false.
 * > - - Conflict exists and overwrite confirmed: dryRun=false, overwrite=true, conflictHash=<value returned in the previous step>
 *
 * @param request ResetGatewayQuotaRuleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetGatewayQuotaRuleResponse
 */
ResetGatewayQuotaRuleResponse Client::resetGatewayQuotaRuleWithOptions(const string &gatewayId, const string &ruleId, const ResetGatewayQuotaRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConflictHash()) {
    body["conflictHash"] = request.getConflictHash();
  }

  if (!!request.hasDryRun()) {
    body["dryRun"] = request.getDryRun();
  }

  if (!!request.hasOverwrite()) {
    body["overwrite"] = request.getOverwrite();
  }

  if (!!request.hasPeriodMultiplier()) {
    body["periodMultiplier"] = request.getPeriodMultiplier();
  }

  if (!!request.hasPeriodType()) {
    body["periodType"] = request.getPeriodType();
  }

  if (!!request.hasQuotaLimit()) {
    body["quotaLimit"] = request.getQuotaLimit();
  }

  if (!!request.hasTimezone()) {
    body["timezone"] = request.getTimezone();
  }

  if (!!request.hasWindowAlignment()) {
    body["windowAlignment"] = request.getWindowAlignment();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ResetGatewayQuotaRule"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/gateways/" , Darabonba::Encode::Encoder::percentEncode(gatewayId) , "/quota-rules/" , Darabonba::Encode::Encoder::percentEncode(ruleId) , "/reset")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetGatewayQuotaRuleResponse>();
}

/**
 * @summary Resets a quota rate limiting rule on a gateway.
 *
 * @description Resets a quota rate limiting rule on a gateway. This operation takes effect only for AI gateways with a version later than 2.1.19. The reset clears the historical usage of consumers on the rule.
 * > 
 * >  Recommended call logic:
 * > - 1. Perform a dry run to check for rule conflicts.
 * > - - Set dryRun=true.
 * > - - The response contains a conflict preview with conflictHash.
 * > - 2. Submit the request after confirmation.
 * > - - No conflict: dryRun=false, overwrite=false.
 * > - - Conflict exists and overwrite confirmed: dryRun=false, overwrite=true, conflictHash=<value returned in the previous step>
 *
 * @param request ResetGatewayQuotaRuleRequest
 * @return ResetGatewayQuotaRuleResponse
 */
ResetGatewayQuotaRuleResponse Client::resetGatewayQuotaRule(const string &gatewayId, const string &ruleId, const ResetGatewayQuotaRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return resetGatewayQuotaRuleWithOptions(gatewayId, ruleId, request, headers, runtime);
}

/**
 * @summary Restarts a gateway.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestartGatewayResponse
 */
RestartGatewayResponse Client::restartGatewayWithOptions(const string &gatewayId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RestartGateway"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/gateways/" , Darabonba::Encode::Encoder::percentEncode(gatewayId) , "/restart")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RestartGatewayResponse>();
}

/**
 * @summary Restarts a gateway.
 *
 * @return RestartGatewayResponse
 */
RestartGatewayResponse Client::restartGateway(const string &gatewayId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return restartGatewayWithOptions(gatewayId, headers, runtime);
}

/**
 * @summary Syncs an external MCP server.
 *
 * @param request SyncMCPServersRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SyncMCPServersResponse
 */
SyncMCPServersResponse Client::syncMCPServersWithOptions(const SyncMCPServersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDomainIds()) {
    body["domainIds"] = request.getDomainIds();
  }

  if (!!request.hasGatewayId()) {
    body["gatewayId"] = request.getGatewayId();
  }

  if (!!request.hasNacosMcpServers()) {
    body["nacosMcpServers"] = request.getNacosMcpServers();
  }

  if (!!request.hasNamespace()) {
    body["namespace"] = request.getNamespace();
  }

  if (!!request.hasSourceId()) {
    body["sourceId"] = request.getSourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SyncMCPServers"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/mcp-servers/sync-mcp-server")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SyncMCPServersResponse>();
}

/**
 * @summary Syncs an external MCP server.
 *
 * @param request SyncMCPServersRequest
 * @return SyncMCPServersResponse
 */
SyncMCPServersResponse Client::syncMCPServers(const SyncMCPServersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return syncMCPServersWithOptions(request, headers, runtime);
}

/**
 * @summary Adds labels to resources.
 *
 * @param request TagResourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasResourceId()) {
    body["resourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    body["resourceType"] = request.getResourceType();
  }

  if (!!request.hasTag()) {
    body["tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "TagResources"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/tags")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TagResourcesResponse>();
}

/**
 * @summary Adds labels to resources.
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
 * @summary Cancels the publication of an MCP server.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnDeployMcpServerResponse
 */
UnDeployMcpServerResponse Client::unDeployMcpServerWithOptions(const string &mcpServerId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnDeployMcpServer"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/mcp-servers/" , Darabonba::Encode::Encoder::percentEncode(mcpServerId) , "/undeploy")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnDeployMcpServerResponse>();
}

/**
 * @summary Cancels the publication of an MCP server.
 *
 * @return UnDeployMcpServerResponse
 */
UnDeployMcpServerResponse Client::unDeployMcpServer(const string &mcpServerId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return unDeployMcpServerWithOptions(mcpServerId, headers, runtime);
}

/**
 * @summary Cancels the deployment of an HTTP API.
 *
 * @param request UndeployHttpApiRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UndeployHttpApiResponse
 */
UndeployHttpApiResponse Client::undeployHttpApiWithOptions(const string &httpApiId, const UndeployHttpApiRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEnvironmentId()) {
    body["environmentId"] = request.getEnvironmentId();
  }

  if (!!request.hasGatewayId()) {
    body["gatewayId"] = request.getGatewayId();
  }

  if (!!request.hasOperationId()) {
    body["operationId"] = request.getOperationId();
  }

  if (!!request.hasRouteId()) {
    body["routeId"] = request.getRouteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UndeployHttpApi"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/http-apis/" , Darabonba::Encode::Encoder::percentEncode(httpApiId) , "/undeploy")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UndeployHttpApiResponse>();
}

/**
 * @summary Cancels the deployment of an HTTP API.
 *
 * @param request UndeployHttpApiRequest
 * @return UndeployHttpApiResponse
 */
UndeployHttpApiResponse Client::undeployHttpApi(const string &httpApiId, const UndeployHttpApiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return undeployHttpApiWithOptions(httpApiId, request, headers, runtime);
}

/**
 * @summary Uninstalls a plugin.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UninstallPluginResponse
 */
UninstallPluginResponse Client::uninstallPluginWithOptions(const string &pluginId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UninstallPlugin"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/plugins/" , Darabonba::Encode::Encoder::percentEncode(pluginId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UninstallPluginResponse>();
}

/**
 * @summary Uninstalls a plugin.
 *
 * @return UninstallPluginResponse
 */
UninstallPluginResponse Client::uninstallPlugin(const string &pluginId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return uninstallPluginWithOptions(pluginId, headers, runtime);
}

/**
 * @summary Removes tags from resources.
 *
 * @param tmpReq UntagResourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResourcesWithOptions(const UntagResourcesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UntagResourcesShrinkRequest request = UntagResourcesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasResourceId()) {
    request.setResourceIdShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResourceId(), "ResourceId", "json"));
  }

  if (!!tmpReq.hasTagKey()) {
    request.setTagKeyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTagKey(), "TagKey", "json"));
  }

  json query = {};
  if (!!request.hasAll()) {
    query["All"] = request.getAll();
  }

  if (!!request.hasResourceIdShrink()) {
    query["ResourceId"] = request.getResourceIdShrink();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTagKeyShrink()) {
    query["TagKey"] = request.getTagKeyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UntagResources"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/tags")},
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
 * @summary Updates and mounts a policy.
 *
 * @param request UpdateAndAttachPolicyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAndAttachPolicyResponse
 */
UpdateAndAttachPolicyResponse Client::updateAndAttachPolicyWithOptions(const string &policyId, const UpdateAndAttachPolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAttachResourceIds()) {
    body["attachResourceIds"] = request.getAttachResourceIds();
  }

  if (!!request.hasAttachResourceType()) {
    body["attachResourceType"] = request.getAttachResourceType();
  }

  if (!!request.hasConfig()) {
    body["config"] = request.getConfig();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasEnvironmentId()) {
    body["environmentId"] = request.getEnvironmentId();
  }

  if (!!request.hasGatewayId()) {
    body["gatewayId"] = request.getGatewayId();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateAndAttachPolicy"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/policies/" , Darabonba::Encode::Encoder::percentEncode(policyId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAndAttachPolicyResponse>();
}

/**
 * @summary Updates and mounts a policy.
 *
 * @param request UpdateAndAttachPolicyRequest
 * @return UpdateAndAttachPolicyResponse
 */
UpdateAndAttachPolicyResponse Client::updateAndAttachPolicy(const string &policyId, const UpdateAndAttachPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateAndAttachPolicyWithOptions(policyId, request, headers, runtime);
}

/**
 * @summary Updates an API consumer.
 *
 * @param request UpdateConsumerRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateConsumerResponse
 */
UpdateConsumerResponse Client::updateConsumerWithOptions(const string &consumerId, const UpdateConsumerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAkSkIdentityConfigs()) {
    body["akSkIdentityConfigs"] = request.getAkSkIdentityConfigs();
  }

  if (!!request.hasApikeyIdentityConfig()) {
    body["apikeyIdentityConfig"] = request.getApikeyIdentityConfig();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasEnable()) {
    body["enable"] = request.getEnable();
  }

  if (!!request.hasJwtIdentityConfig()) {
    body["jwtIdentityConfig"] = request.getJwtIdentityConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateConsumer"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/consumers/" , Darabonba::Encode::Encoder::percentEncode(consumerId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateConsumerResponse>();
}

/**
 * @summary Updates an API consumer.
 *
 * @param request UpdateConsumerRequest
 * @return UpdateConsumerResponse
 */
UpdateConsumerResponse Client::updateConsumer(const string &consumerId, const UpdateConsumerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateConsumerWithOptions(consumerId, request, headers, runtime);
}

/**
 * @summary Updates a consumer authorization rule.
 *
 * @param request UpdateConsumerAuthorizationRuleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateConsumerAuthorizationRuleResponse
 */
UpdateConsumerAuthorizationRuleResponse Client::updateConsumerAuthorizationRuleWithOptions(const string &consumerId, const string &consumerAuthorizationRuleId, const UpdateConsumerAuthorizationRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAuthorizationResourceInfos()) {
    body["authorizationResourceInfos"] = request.getAuthorizationResourceInfos();
  }

  if (!!request.hasExpireMode()) {
    body["expireMode"] = request.getExpireMode();
  }

  if (!!request.hasExpireTimestamp()) {
    body["expireTimestamp"] = request.getExpireTimestamp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateConsumerAuthorizationRule"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/consumers/" , Darabonba::Encode::Encoder::percentEncode(consumerId) , "/authorization-rules/" , Darabonba::Encode::Encoder::percentEncode(consumerAuthorizationRuleId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateConsumerAuthorizationRuleResponse>();
}

/**
 * @summary Updates a consumer authorization rule.
 *
 * @param request UpdateConsumerAuthorizationRuleRequest
 * @return UpdateConsumerAuthorizationRuleResponse
 */
UpdateConsumerAuthorizationRuleResponse Client::updateConsumerAuthorizationRule(const string &consumerId, const string &consumerAuthorizationRuleId, const UpdateConsumerAuthorizationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateConsumerAuthorizationRuleWithOptions(consumerId, consumerAuthorizationRuleId, request, headers, runtime);
}

/**
 * @summary Updates a domain name.
 *
 * @description Only sources of the **Container Service** type allow you to update the listener Ingress configuration.
 *
 * @param request UpdateDomainRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDomainResponse
 */
UpdateDomainResponse Client::updateDomainWithOptions(const string &domainId, const UpdateDomainRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCaCertIdentifier()) {
    body["caCertIdentifier"] = request.getCaCertIdentifier();
  }

  if (!!request.hasCertIdentifier()) {
    body["certIdentifier"] = request.getCertIdentifier();
  }

  if (!!request.hasClientCACert()) {
    body["clientCACert"] = request.getClientCACert();
  }

  if (!!request.hasDomainScope()) {
    body["domainScope"] = request.getDomainScope();
  }

  if (!!request.hasForceHttps()) {
    body["forceHttps"] = request.getForceHttps();
  }

  if (!!request.hasHttp2Option()) {
    body["http2Option"] = request.getHttp2Option();
  }

  if (!!request.hasMTLSEnabled()) {
    body["mTLSEnabled"] = request.getMTLSEnabled();
  }

  if (!!request.hasProtocol()) {
    body["protocol"] = request.getProtocol();
  }

  if (!!request.hasTlsCipherSuitesConfig()) {
    body["tlsCipherSuitesConfig"] = request.getTlsCipherSuitesConfig();
  }

  if (!!request.hasTlsMax()) {
    body["tlsMax"] = request.getTlsMax();
  }

  if (!!request.hasTlsMin()) {
    body["tlsMin"] = request.getTlsMin();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateDomain"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/domains/" , Darabonba::Encode::Encoder::percentEncode(domainId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDomainResponse>();
}

/**
 * @summary Updates a domain name.
 *
 * @description Only sources of the **Container Service** type allow you to update the listener Ingress configuration.
 *
 * @param request UpdateDomainRequest
 * @return UpdateDomainResponse
 */
UpdateDomainResponse Client::updateDomain(const string &domainId, const UpdateDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateDomainWithOptions(domainId, request, headers, runtime);
}

/**
 * @deprecated OpenAPI UpdateEnvironment is deprecated
 *
 * @summary Updates an environment.
 *
 * @param request UpdateEnvironmentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateEnvironmentResponse
 */
UpdateEnvironmentResponse Client::updateEnvironmentWithOptions(const string &environmentId, const UpdateEnvironmentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAlias()) {
    body["alias"] = request.getAlias();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateEnvironment"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/environments/" , Darabonba::Encode::Encoder::percentEncode(environmentId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateEnvironmentResponse>();
}

/**
 * @deprecated OpenAPI UpdateEnvironment is deprecated
 *
 * @summary Updates an environment.
 *
 * @param request UpdateEnvironmentRequest
 * @return UpdateEnvironmentResponse
 */
UpdateEnvironmentResponse Client::updateEnvironment(const string &environmentId, const UpdateEnvironmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateEnvironmentWithOptions(environmentId, request, headers, runtime);
}

/**
 * @summary Updates the attribute parameters of a gateway.
 *
 * @param request UpdateGatewayFeatureRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateGatewayFeatureResponse
 */
UpdateGatewayFeatureResponse Client::updateGatewayFeatureWithOptions(const string &gatewayId, const string &name, const UpdateGatewayFeatureRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasValue()) {
    body["value"] = request.getValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateGatewayFeature"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/gateways/" , Darabonba::Encode::Encoder::percentEncode(gatewayId) , "/gateway-features/" , Darabonba::Encode::Encoder::percentEncode(name))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateGatewayFeatureResponse>();
}

/**
 * @summary Updates the attribute parameters of a gateway.
 *
 * @param request UpdateGatewayFeatureRequest
 * @return UpdateGatewayFeatureResponse
 */
UpdateGatewayFeatureResponse Client::updateGatewayFeature(const string &gatewayId, const string &name, const UpdateGatewayFeatureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateGatewayFeatureWithOptions(gatewayId, name, request, headers, runtime);
}

/**
 * @deprecated OpenAPI UpdateGatewayName is deprecated
 *
 * @summary Modifies the name of a gateway.
 *
 * @param request UpdateGatewayNameRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateGatewayNameResponse
 */
UpdateGatewayNameResponse Client::updateGatewayNameWithOptions(const string &gatewayId, const UpdateGatewayNameRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateGatewayName"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/gateways/" , Darabonba::Encode::Encoder::percentEncode(gatewayId) , "/name")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateGatewayNameResponse>();
}

/**
 * @deprecated OpenAPI UpdateGatewayName is deprecated
 *
 * @summary Modifies the name of a gateway.
 *
 * @param request UpdateGatewayNameRequest
 * @return UpdateGatewayNameResponse
 */
UpdateGatewayNameResponse Client::updateGatewayName(const string &gatewayId, const UpdateGatewayNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateGatewayNameWithOptions(gatewayId, request, headers, runtime);
}

/**
 * @summary Edits a quota throttling rule on a gateway.
 *
 * @description Edits a quota rule on a gateway. This operation takes effect only on AI gateways with a version later than 2.1.19. Editing a rule preserves the historical usage of consumers on the rule.
 * >  Recommended call logic:
 * > - Step 1: Perform a dry run to check for rule conflicts.
 * > - - Set dryRun to true.
 * > - - The response contains a conflict preview with conflictHash.
 * > - Step 2: Submit the request after confirmation.
 * > - - No conflicts: Set dryRun to false and overwrite to false.
 * > - - Conflicts exist and you confirm the overwrite: Set dryRun to false, overwrite to true, and conflictHash to the value returned in the previous step.
 *
 * @param request UpdateGatewayQuotaRuleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateGatewayQuotaRuleResponse
 */
UpdateGatewayQuotaRuleResponse Client::updateGatewayQuotaRuleWithOptions(const string &gatewayId, const string &ruleId, const UpdateGatewayQuotaRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAddIds()) {
    body["addIds"] = request.getAddIds();
  }

  if (!!request.hasConflictHash()) {
    body["conflictHash"] = request.getConflictHash();
  }

  if (!!request.hasConsumerGroupIds()) {
    body["consumerGroupIds"] = request.getConsumerGroupIds();
  }

  if (!!request.hasDryRun()) {
    body["dryRun"] = request.getDryRun();
  }

  if (!!request.hasOverwrite()) {
    body["overwrite"] = request.getOverwrite();
  }

  if (!!request.hasQuotaLimit()) {
    body["quotaLimit"] = request.getQuotaLimit();
  }

  if (!!request.hasRemoveIds()) {
    body["removeIds"] = request.getRemoveIds();
  }

  if (!!request.hasRuleName()) {
    body["ruleName"] = request.getRuleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateGatewayQuotaRule"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/gateways/" , Darabonba::Encode::Encoder::percentEncode(gatewayId) , "/quota-rules/" , Darabonba::Encode::Encoder::percentEncode(ruleId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateGatewayQuotaRuleResponse>();
}

/**
 * @summary Edits a quota throttling rule on a gateway.
 *
 * @description Edits a quota rule on a gateway. This operation takes effect only on AI gateways with a version later than 2.1.19. Editing a rule preserves the historical usage of consumers on the rule.
 * >  Recommended call logic:
 * > - Step 1: Perform a dry run to check for rule conflicts.
 * > - - Set dryRun to true.
 * > - - The response contains a conflict preview with conflictHash.
 * > - Step 2: Submit the request after confirmation.
 * > - - No conflicts: Set dryRun to false and overwrite to false.
 * > - - Conflicts exist and you confirm the overwrite: Set dryRun to false, overwrite to true, and conflictHash to the value returned in the previous step.
 *
 * @param request UpdateGatewayQuotaRuleRequest
 * @return UpdateGatewayQuotaRuleResponse
 */
UpdateGatewayQuotaRuleResponse Client::updateGatewayQuotaRule(const string &gatewayId, const string &ruleId, const UpdateGatewayQuotaRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateGatewayQuotaRuleWithOptions(gatewayId, ruleId, request, headers, runtime);
}

/**
 * @summary Enables or disables a quota throttling rule for a gateway.
 *
 * @description Enables or disables a quota rule on a gateway. This operation takes effect only for AI gateways with a version later than 2.1.19.
 *
 * @param request UpdateGatewayQuotaRuleStatusRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateGatewayQuotaRuleStatusResponse
 */
UpdateGatewayQuotaRuleStatusResponse Client::updateGatewayQuotaRuleStatusWithOptions(const string &gatewayId, const string &ruleId, const UpdateGatewayQuotaRuleStatusRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClearHistory()) {
    body["clearHistory"] = request.getClearHistory();
  }

  if (!!request.hasEnable()) {
    body["enable"] = request.getEnable();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateGatewayQuotaRuleStatus"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/gateways/" , Darabonba::Encode::Encoder::percentEncode(gatewayId) , "/quota-rules/" , Darabonba::Encode::Encoder::percentEncode(ruleId) , "/status")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateGatewayQuotaRuleStatusResponse>();
}

/**
 * @summary Enables or disables a quota throttling rule for a gateway.
 *
 * @description Enables or disables a quota rule on a gateway. This operation takes effect only for AI gateways with a version later than 2.1.19.
 *
 * @param request UpdateGatewayQuotaRuleStatusRequest
 * @return UpdateGatewayQuotaRuleStatusResponse
 */
UpdateGatewayQuotaRuleStatusResponse Client::updateGatewayQuotaRuleStatus(const string &gatewayId, const string &ruleId, const UpdateGatewayQuotaRuleStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateGatewayQuotaRuleStatusWithOptions(gatewayId, ruleId, request, headers, runtime);
}

/**
 * @summary Updates an HTTP API.
 *
 * @param request UpdateHttpApiRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateHttpApiResponse
 */
UpdateHttpApiResponse Client::updateHttpApiWithOptions(const string &httpApiId, const UpdateHttpApiRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAgentProtocols()) {
    body["agentProtocols"] = request.getAgentProtocols();
  }

  if (!!request.hasAiProtocols()) {
    body["aiProtocols"] = request.getAiProtocols();
  }

  if (!!request.hasAuthConfig()) {
    body["authConfig"] = request.getAuthConfig();
  }

  if (!!request.hasBasePath()) {
    body["basePath"] = request.getBasePath();
  }

  if (!!request.hasDeployConfigs()) {
    body["deployConfigs"] = request.getDeployConfigs();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasEnableAuth()) {
    body["enableAuth"] = request.getEnableAuth();
  }

  if (!!request.hasFirstByteTimeout()) {
    body["firstByteTimeout"] = request.getFirstByteTimeout();
  }

  if (!!request.hasIngressConfig()) {
    body["ingressConfig"] = request.getIngressConfig();
  }

  if (!!request.hasOnlyChangeConfig()) {
    body["onlyChangeConfig"] = request.getOnlyChangeConfig();
  }

  if (!!request.hasProtocols()) {
    body["protocols"] = request.getProtocols();
  }

  if (!!request.hasRemoveBasePathOnForward()) {
    body["removeBasePathOnForward"] = request.getRemoveBasePathOnForward();
  }

  if (!!request.hasVersionConfig()) {
    body["versionConfig"] = request.getVersionConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateHttpApi"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/http-apis/" , Darabonba::Encode::Encoder::percentEncode(httpApiId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateHttpApiResponse>();
}

/**
 * @summary Updates an HTTP API.
 *
 * @param request UpdateHttpApiRequest
 * @return UpdateHttpApiResponse
 */
UpdateHttpApiResponse Client::updateHttpApi(const string &httpApiId, const UpdateHttpApiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateHttpApiWithOptions(httpApiId, request, headers, runtime);
}

/**
 * @summary Updates an API operation.
 *
 * @param request UpdateHttpApiOperationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateHttpApiOperationResponse
 */
UpdateHttpApiOperationResponse Client::updateHttpApiOperationWithOptions(const string &httpApiId, const string &operationId, const UpdateHttpApiOperationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasOperation()) {
    body["operation"] = request.getOperation();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateHttpApiOperation"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/http-apis/" , Darabonba::Encode::Encoder::percentEncode(httpApiId) , "/operations/" , Darabonba::Encode::Encoder::percentEncode(operationId))},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateHttpApiOperationResponse>();
}

/**
 * @summary Updates an API operation.
 *
 * @param request UpdateHttpApiOperationRequest
 * @return UpdateHttpApiOperationResponse
 */
UpdateHttpApiOperationResponse Client::updateHttpApiOperation(const string &httpApiId, const string &operationId, const UpdateHttpApiOperationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateHttpApiOperationWithOptions(httpApiId, operationId, request, headers, runtime);
}

/**
 * @summary Updates a route of an HttpApi.
 *
 * @param request UpdateHttpApiRouteRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateHttpApiRouteResponse
 */
UpdateHttpApiRouteResponse Client::updateHttpApiRouteWithOptions(const string &httpApiId, const string &routeId, const UpdateHttpApiRouteRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBackendConfig()) {
    body["backendConfig"] = request.getBackendConfig();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDomainIds()) {
    body["domainIds"] = request.getDomainIds();
  }

  if (!!request.hasEnvironmentId()) {
    body["environmentId"] = request.getEnvironmentId();
  }

  if (!!request.hasMatch()) {
    body["match"] = request.getMatch();
  }

  if (!!request.hasMcpRouteConfig()) {
    body["mcpRouteConfig"] = request.getMcpRouteConfig();
  }

  if (!!request.hasPolicyConfigs()) {
    body["policyConfigs"] = request.getPolicyConfigs();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateHttpApiRoute"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/http-apis/" , Darabonba::Encode::Encoder::percentEncode(httpApiId) , "/routes/" , Darabonba::Encode::Encoder::percentEncode(routeId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateHttpApiRouteResponse>();
}

/**
 * @summary Updates a route of an HttpApi.
 *
 * @param request UpdateHttpApiRouteRequest
 * @return UpdateHttpApiRouteResponse
 */
UpdateHttpApiRouteResponse Client::updateHttpApiRoute(const string &httpApiId, const string &routeId, const UpdateHttpApiRouteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateHttpApiRouteWithOptions(httpApiId, routeId, request, headers, runtime);
}

/**
 * @summary Updates an MCP server.
 *
 * @description Only sources of the **Container Service** type are allowed to update the listener Ingress configuration.
 *
 * @param request UpdateMcpServerRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMcpServerResponse
 */
UpdateMcpServerResponse Client::updateMcpServerWithOptions(const string &mcpServerId, const UpdateMcpServerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAssembledSources()) {
    body["assembledSources"] = request.getAssembledSources();
  }

  if (!!request.hasBackendConfig()) {
    body["backendConfig"] = request.getBackendConfig();
  }

  if (!!request.hasCreateFromType()) {
    body["createFromType"] = request.getCreateFromType();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDomainIds()) {
    body["domainIds"] = request.getDomainIds();
  }

  if (!!request.hasExposedUriPath()) {
    body["exposedUriPath"] = request.getExposedUriPath();
  }

  if (!!request.hasGrayMcpServerConfigs()) {
    body["grayMcpServerConfigs"] = request.getGrayMcpServerConfigs();
  }

  if (!!request.hasMatch()) {
    body["match"] = request.getMatch();
  }

  if (!!request.hasMcpServerConfig()) {
    body["mcpServerConfig"] = request.getMcpServerConfig();
  }

  if (!!request.hasMcpStatisticsEnable()) {
    body["mcpStatisticsEnable"] = request.getMcpStatisticsEnable();
  }

  if (!!request.hasProtocol()) {
    body["protocol"] = request.getProtocol();
  }

  if (!!request.hasType()) {
    body["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateMcpServer"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/mcp-servers/" , Darabonba::Encode::Encoder::percentEncode(mcpServerId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMcpServerResponse>();
}

/**
 * @summary Updates an MCP server.
 *
 * @description Only sources of the **Container Service** type are allowed to update the listener Ingress configuration.
 *
 * @param request UpdateMcpServerRequest
 * @return UpdateMcpServerResponse
 */
UpdateMcpServerResponse Client::updateMcpServer(const string &mcpServerId, const UpdateMcpServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateMcpServerWithOptions(mcpServerId, request, headers, runtime);
}

/**
 * @summary Updates a plugin mount.
 *
 * @param request UpdatePluginAttachmentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePluginAttachmentResponse
 */
UpdatePluginAttachmentResponse Client::updatePluginAttachmentWithOptions(const string &pluginAttachmentId, const UpdatePluginAttachmentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAttachResourceIds()) {
    body["attachResourceIds"] = request.getAttachResourceIds();
  }

  if (!!request.hasEnable()) {
    body["enable"] = request.getEnable();
  }

  if (!!request.hasPluginConfig()) {
    body["pluginConfig"] = request.getPluginConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdatePluginAttachment"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/plugin-attachments/" , Darabonba::Encode::Encoder::percentEncode(pluginAttachmentId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePluginAttachmentResponse>();
}

/**
 * @summary Updates a plugin mount.
 *
 * @param request UpdatePluginAttachmentRequest
 * @return UpdatePluginAttachmentResponse
 */
UpdatePluginAttachmentResponse Client::updatePluginAttachment(const string &pluginAttachmentId, const UpdatePluginAttachmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updatePluginAttachmentWithOptions(pluginAttachmentId, request, headers, runtime);
}

/**
 * @summary Updates a policy.
 *
 * @param request UpdatePolicyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePolicyResponse
 */
UpdatePolicyResponse Client::updatePolicyWithOptions(const string &policyId, const UpdatePolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConfig()) {
    body["config"] = request.getConfig();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdatePolicy"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v2/policies/" , Darabonba::Encode::Encoder::percentEncode(policyId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePolicyResponse>();
}

/**
 * @summary Updates a policy.
 *
 * @param request UpdatePolicyRequest
 * @return UpdatePolicyResponse
 */
UpdatePolicyResponse Client::updatePolicy(const string &policyId, const UpdatePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updatePolicyWithOptions(policyId, request, headers, runtime);
}

/**
 * @summary Updates a key pair.
 *
 * @description Only sources of the **container service** type allow you to update the configuration for listening to Ingress.
 *
 * @param request UpdateSecretRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSecretResponse
 */
UpdateSecretResponse Client::updateSecretWithOptions(const string &secretId, const UpdateSecretRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasSecretData()) {
    body["secretData"] = request.getSecretData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateSecret"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/secrets/" , Darabonba::Encode::Encoder::percentEncode(secretId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSecretResponse>();
}

/**
 * @summary Updates a key pair.
 *
 * @description Only sources of the **container service** type allow you to update the configuration for listening to Ingress.
 *
 * @param request UpdateSecretRequest
 * @return UpdateSecretResponse
 */
UpdateSecretResponse Client::updateSecret(const string &secretId, const UpdateSecretRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateSecretWithOptions(secretId, request, headers, runtime);
}

/**
 * @summary Updates a service. You can update the health check configuration, DNS domain name, and address configuration of fixed addresses for the service.
 *
 * @param request UpdateServiceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateServiceResponse
 */
UpdateServiceResponse Client::updateServiceWithOptions(const string &serviceId, const UpdateServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAddresses()) {
    body["addresses"] = request.getAddresses();
  }

  if (!!request.hasAgentServiceConfig()) {
    body["agentServiceConfig"] = request.getAgentServiceConfig();
  }

  if (!!request.hasAiServiceConfig()) {
    body["aiServiceConfig"] = request.getAiServiceConfig();
  }

  if (!!request.hasDnsServers()) {
    body["dnsServers"] = request.getDnsServers();
  }

  if (!!request.hasHealthCheckConfig()) {
    body["healthCheckConfig"] = request.getHealthCheckConfig();
  }

  if (!!request.hasHealthyPanicThreshold()) {
    body["healthyPanicThreshold"] = request.getHealthyPanicThreshold();
  }

  if (!!request.hasModelProviderId()) {
    body["modelProviderId"] = request.getModelProviderId();
  }

  if (!!request.hasOutlierDetectionConfig()) {
    body["outlierDetectionConfig"] = request.getOutlierDetectionConfig();
  }

  if (!!request.hasPorts()) {
    body["ports"] = request.getPorts();
  }

  if (!!request.hasProtocol()) {
    body["protocol"] = request.getProtocol();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateService"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/services/" , Darabonba::Encode::Encoder::percentEncode(serviceId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateServiceResponse>();
}

/**
 * @summary Updates a service. You can update the health check configuration, DNS domain name, and address configuration of fixed addresses for the service.
 *
 * @param request UpdateServiceRequest
 * @return UpdateServiceResponse
 */
UpdateServiceResponse Client::updateService(const string &serviceId, const UpdateServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateServiceWithOptions(serviceId, request, headers, runtime);
}

/**
 * @summary Updates a service version.
 *
 * @param request UpdateServiceVersionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateServiceVersionResponse
 */
UpdateServiceVersionResponse Client::updateServiceVersionWithOptions(const string &serviceId, const string &name, const UpdateServiceVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLabels()) {
    body["labels"] = request.getLabels();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateServiceVersion"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/services/" , Darabonba::Encode::Encoder::percentEncode(serviceId) , "/versions/" , Darabonba::Encode::Encoder::percentEncode(name))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateServiceVersionResponse>();
}

/**
 * @summary Updates a service version.
 *
 * @param request UpdateServiceVersionRequest
 * @return UpdateServiceVersionResponse
 */
UpdateServiceVersionResponse Client::updateServiceVersion(const string &serviceId, const string &name, const UpdateServiceVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateServiceVersionWithOptions(serviceId, name, request, headers, runtime);
}

/**
 * @summary Upgrades the gateway version.
 *
 * @param request UpgradeGatewayRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeGatewayResponse
 */
UpgradeGatewayResponse Client::upgradeGatewayWithOptions(const string &gatewayId, const UpgradeGatewayRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["version"] = request.getVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradeGateway"},
    {"version" , "2024-03-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/gateways/" , Darabonba::Encode::Encoder::percentEncode(gatewayId) , "/upgrade")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradeGatewayResponse>();
}

/**
 * @summary Upgrades the gateway version.
 *
 * @param request UpgradeGatewayRequest
 * @return UpgradeGatewayResponse
 */
UpgradeGatewayResponse Client::upgradeGateway(const string &gatewayId, const UpgradeGatewayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return upgradeGatewayWithOptions(gatewayId, request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace APIG20240327