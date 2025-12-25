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
  this->_endpointRule = "";
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
 * @summary Authorize the security group for gateway to access services
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
    body["description"] = request.description();
  }

  if (!!request.hasPortRanges()) {
    body["portRanges"] = request.portRanges();
  }

  if (!!request.hasSecurityGroupId()) {
    body["securityGroupId"] = request.securityGroupId();
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
 * @summary Authorize the security group for gateway to access services
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
 * @summary Removes consumer authentication rules.
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
    query["consumerAuthorizationRuleIds"] = request.consumerAuthorizationRuleIds();
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
 * @summary Removes consumer authentication rules.
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
 * @summary Resource Group Transfer
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
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasService()) {
    query["Service"] = request.service();
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
 * @summary Resource Group Transfer
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
 * @summary Creates and associates a policy.
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
    body["attachResourceIds"] = request.attachResourceIds();
  }

  if (!!request.hasAttachResourceType()) {
    body["attachResourceType"] = request.attachResourceType();
  }

  if (!!request.hasClassName()) {
    body["className"] = request.className();
  }

  if (!!request.hasConfig()) {
    body["config"] = request.config();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasEnvironmentId()) {
    body["environmentId"] = request.environmentId();
  }

  if (!!request.hasGatewayId()) {
    body["gatewayId"] = request.gatewayId();
  }

  if (!!request.hasName()) {
    body["name"] = request.name();
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
 * @summary Creates and associates a policy.
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
    body["akSkIdentityConfigs"] = request.akSkIdentityConfigs();
  }

  if (!!request.hasApikeyIdentityConfig()) {
    body["apikeyIdentityConfig"] = request.apikeyIdentityConfig();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasEnable()) {
    body["enable"] = request.enable();
  }

  if (!!request.hasGatewayType()) {
    body["gatewayType"] = request.gatewayType();
  }

  if (!!request.hasJwtIdentityConfig()) {
    body["jwtIdentityConfig"] = request.jwtIdentityConfig();
  }

  if (!!request.hasName()) {
    body["name"] = request.name();
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
    body["authorizationResourceInfos"] = request.authorizationResourceInfos();
  }

  if (!!request.hasExpireMode()) {
    body["expireMode"] = request.expireMode();
  }

  if (!!request.hasExpireTimestamp()) {
    body["expireTimestamp"] = request.expireTimestamp();
  }

  if (!!request.hasParentResourceType()) {
    body["parentResourceType"] = request.parentResourceType();
  }

  if (!!request.hasResourceType()) {
    body["resourceType"] = request.resourceType();
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
 * @summary Creates a consumer authentication rule.
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
    body["authorizationRules"] = request.authorizationRules();
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
 * @summary Creates a consumer authentication rule.
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
 * @description Create Domain.
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
    body["caCertIdentifier"] = request.caCertIdentifier();
  }

  if (!!request.hasCertIdentifier()) {
    body["certIdentifier"] = request.certIdentifier();
  }

  if (!!request.hasClientCACert()) {
    body["clientCACert"] = request.clientCACert();
  }

  if (!!request.hasForceHttps()) {
    body["forceHttps"] = request.forceHttps();
  }

  if (!!request.hasGatewayType()) {
    body["gatewayType"] = request.gatewayType();
  }

  if (!!request.hasHttp2Option()) {
    body["http2Option"] = request.http2Option();
  }

  if (!!request.hasMTLSEnabled()) {
    body["mTLSEnabled"] = request.mTLSEnabled();
  }

  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  if (!!request.hasProtocol()) {
    body["protocol"] = request.protocol();
  }

  if (!!request.hasResourceGroupId()) {
    body["resourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTlsCipherSuitesConfig()) {
    body["tlsCipherSuitesConfig"] = request.tlsCipherSuitesConfig();
  }

  if (!!request.hasTlsMax()) {
    body["tlsMax"] = request.tlsMax();
  }

  if (!!request.hasTlsMin()) {
    body["tlsMin"] = request.tlsMin();
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
 * @description Create Domain.
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
 * @summary CreateEnvironment
 *
 * @description Create environment.
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
    body["alias"] = request.alias();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasGatewayId()) {
    body["gatewayId"] = request.gatewayId();
  }

  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  if (!!request.hasResourceGroupId()) {
    body["resourceGroupId"] = request.resourceGroupId();
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
 * @summary CreateEnvironment
 *
 * @description Create environment.
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
    body["chargeType"] = request.chargeType();
  }

  if (!!request.hasGatewayEdition()) {
    body["gatewayEdition"] = request.gatewayEdition();
  }

  if (!!request.hasGatewayType()) {
    body["gatewayType"] = request.gatewayType();
  }

  if (!!request.hasLogConfig()) {
    body["logConfig"] = request.logConfig();
  }

  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  if (!!request.hasNetworkAccessConfig()) {
    body["networkAccessConfig"] = request.networkAccessConfig();
  }

  if (!!request.hasResourceGroupId()) {
    body["resourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSpec()) {
    body["spec"] = request.spec();
  }

  if (!!request.hasTag()) {
    body["tag"] = request.tag();
  }

  if (!!request.hasVpcId()) {
    body["vpcId"] = request.vpcId();
  }

  if (!!request.hasZoneConfig()) {
    body["zoneConfig"] = request.zoneConfig();
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
    body["agentProtocols"] = request.agentProtocols();
  }

  if (!!request.hasAiProtocols()) {
    body["aiProtocols"] = request.aiProtocols();
  }

  if (!!request.hasAuthConfig()) {
    body["authConfig"] = request.authConfig();
  }

  if (!!request.hasBasePath()) {
    body["basePath"] = request.basePath();
  }

  if (!!request.hasDeployConfigs()) {
    body["deployConfigs"] = request.deployConfigs();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasEnableAuth()) {
    body["enableAuth"] = request.enableAuth();
  }

  if (!!request.hasFirstByteTimeout()) {
    body["firstByteTimeout"] = request.firstByteTimeout();
  }

  if (!!request.hasIngressConfig()) {
    body["ingressConfig"] = request.ingressConfig();
  }

  if (!!request.hasModelCategory()) {
    body["modelCategory"] = request.modelCategory();
  }

  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  if (!!request.hasProtocols()) {
    body["protocols"] = request.protocols();
  }

  if (!!request.hasRemoveBasePathOnForward()) {
    body["removeBasePathOnForward"] = request.removeBasePathOnForward();
  }

  if (!!request.hasResourceGroupId()) {
    body["resourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasType()) {
    body["type"] = request.type();
  }

  if (!!request.hasVersionConfig()) {
    body["versionConfig"] = request.versionConfig();
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
 * @summary Create an Operation for HTTP API
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
    body["operations"] = request.operations();
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
 * @summary Create an Operation for HTTP API
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
    body["backendConfig"] = request.backendConfig();
  }

  if (!!request.hasDeployConfigs()) {
    body["deployConfigs"] = request.deployConfigs();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasDomainIds()) {
    body["domainIds"] = request.domainIds();
  }

  if (!!request.hasEnvironmentId()) {
    body["environmentId"] = request.environmentId();
  }

  if (!!request.hasMatch()) {
    body["match"] = request.match();
  }

  if (!!request.hasMcpRouteConfig()) {
    body["mcpRouteConfig"] = request.mcpRouteConfig();
  }

  if (!!request.hasName()) {
    body["name"] = request.name();
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
 * @summary Creates an MCP server.
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
    body["assembledSources"] = request.assembledSources();
  }

  if (!!request.hasBackendConfig()) {
    body["backendConfig"] = request.backendConfig();
  }

  if (!!request.hasCreateFromType()) {
    body["createFromType"] = request.createFromType();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasDomainIds()) {
    body["domainIds"] = request.domainIds();
  }

  if (!!request.hasExposedUriPath()) {
    body["exposedUriPath"] = request.exposedUriPath();
  }

  if (!!request.hasGatewayId()) {
    body["gatewayId"] = request.gatewayId();
  }

  if (!!request.hasGrayMcpServerConfigs()) {
    body["grayMcpServerConfigs"] = request.grayMcpServerConfigs();
  }

  if (!!request.hasMatch()) {
    body["match"] = request.match();
  }

  if (!!request.hasMcpStatisticsEnable()) {
    body["mcpStatisticsEnable"] = request.mcpStatisticsEnable();
  }

  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  if (!!request.hasProtocol()) {
    body["protocol"] = request.protocol();
  }

  if (!!request.hasType()) {
    body["type"] = request.type();
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
 * @summary Creates an MCP server.
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
 * @summary Attaches a plug-in.
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
    body["attachResourceIds"] = request.attachResourceIds();
  }

  if (!!request.hasAttachResourceType()) {
    body["attachResourceType"] = request.attachResourceType();
  }

  if (!!request.hasEnable()) {
    body["enable"] = request.enable();
  }

  if (!!request.hasEnvironmentId()) {
    body["environmentId"] = request.environmentId();
  }

  if (!!request.hasGatewayId()) {
    body["gatewayId"] = request.gatewayId();
  }

  if (!!request.hasPluginConfig()) {
    body["pluginConfig"] = request.pluginConfig();
  }

  if (!!request.hasPluginId()) {
    body["pluginId"] = request.pluginId();
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
 * @summary Attaches a plug-in.
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
 * @summary Create Policy
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
    body["className"] = request.className();
  }

  if (!!request.hasConfig()) {
    body["config"] = request.config();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasName()) {
    body["name"] = request.name();
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
 * @summary Create Policy
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
 * @summary Create policy resource mount
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
    body["attachResourceId"] = request.attachResourceId();
  }

  if (!!request.hasAttachResourceType()) {
    body["attachResourceType"] = request.attachResourceType();
  }

  if (!!request.hasEnvironmentId()) {
    body["environmentId"] = request.environmentId();
  }

  if (!!request.hasGatewayId()) {
    body["gatewayId"] = request.gatewayId();
  }

  if (!!request.hasPolicyId()) {
    body["policyId"] = request.policyId();
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
 * @summary Create policy resource mount
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
 * @summary Creates a service.
 *
 * @description You can call this operation to create multiple services at a time.
 *
 * @param request CreateServiceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateServiceResponse
 */
CreateServiceResponse Client::createServiceWithOptions(const CreateServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasGatewayId()) {
    body["gatewayId"] = request.gatewayId();
  }

  if (!!request.hasResourceGroupId()) {
    body["resourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasServiceConfigs()) {
    body["serviceConfigs"] = request.serviceConfigs();
  }

  if (!!request.hasSourceType()) {
    body["sourceType"] = request.sourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
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
 * @summary Creates a service.
 *
 * @description You can call this operation to create multiple services at a time.
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
    body["labels"] = request.labels();
  }

  if (!!request.hasName()) {
    body["name"] = request.name();
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
 * @summary 创建服务来源
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
    body["gatewayId"] = request.gatewayId();
  }

  if (!!request.hasK8sSourceConfig()) {
    body["k8sSourceConfig"] = request.k8sSourceConfig();
  }

  if (!!request.hasNacosSourceConfig()) {
    body["nacosSourceConfig"] = request.nacosSourceConfig();
  }

  if (!!request.hasResourceGroupId()) {
    body["resourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasType()) {
    body["type"] = request.type();
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
 * @summary 创建服务来源
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
 * @summary Deletes a consumer.
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
 * @summary Deletes a consumer.
 *
 * @return DeleteConsumerResponse
 */
DeleteConsumerResponse Client::deleteConsumer(const string &consumerId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteConsumerWithOptions(consumerId, headers, runtime);
}

/**
 * @summary Deletes a consumer authorization rule.
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
 * @summary Deletes a consumer authorization rule.
 *
 * @return DeleteConsumerAuthorizationRuleResponse
 */
DeleteConsumerAuthorizationRuleResponse Client::deleteConsumerAuthorizationRule(const string &consumerAuthorizationRuleId, const string &consumerId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteConsumerAuthorizationRuleWithOptions(consumerAuthorizationRuleId, consumerId, headers, runtime);
}

/**
 * @summary DeleteDomain
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
 * @summary DeleteDomain
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
 * @summary DeleteEnvironment
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
 * @summary DeleteEnvironment
 *
 * @return DeleteEnvironmentResponse
 */
DeleteEnvironmentResponse Client::deleteEnvironment(const string &environmentId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteEnvironmentWithOptions(environmentId, headers, runtime);
}

/**
 * @summary Delete Gateway
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
 * @summary Delete Gateway
 *
 * @return DeleteGatewayResponse
 */
DeleteGatewayResponse Client::deleteGateway(const string &gatewayId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteGatewayWithOptions(gatewayId, headers, runtime);
}

/**
 * @summary Delete the security group rule of a gateway
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
    query["cascadingDelete"] = request.cascadingDelete();
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
 * @summary Delete the security group rule of a gateway
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
 * @summary Deletes an HTTP API.
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
 * @summary Deletes an HTTP API.
 *
 * @return DeleteHttpApiResponse
 */
DeleteHttpApiResponse Client::deleteHttpApi(const string &httpApiId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteHttpApiWithOptions(httpApiId, headers, runtime);
}

/**
 * @summary Delete Operation
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
 * @summary Delete Operation
 *
 * @return DeleteHttpApiOperationResponse
 */
DeleteHttpApiOperationResponse Client::deleteHttpApiOperation(const string &httpApiId, const string &operationId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteHttpApiOperationWithOptions(httpApiId, operationId, headers, runtime);
}

/**
 * @summary Delete the route of an HttpApi
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
 * @summary Delete the route of an HttpApi
 *
 * @return DeleteHttpApiRouteResponse
 */
DeleteHttpApiRouteResponse Client::deleteHttpApiRoute(const string &httpApiId, const string &routeId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteHttpApiRouteWithOptions(httpApiId, routeId, headers, runtime);
}

/**
 * @summary 删除MCP server
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
 * @summary 删除MCP server
 *
 * @return DeleteMcpServerResponse
 */
DeleteMcpServerResponse Client::deleteMcpServer(const string &mcpServerId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteMcpServerWithOptions(mcpServerId, headers, runtime);
}

/**
 * @summary Deletes a plug-in attachment.
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
 * @summary Deletes a plug-in attachment.
 *
 * @return DeletePluginAttachmentResponse
 */
DeletePluginAttachmentResponse Client::deletePluginAttachment(const string &pluginAttachmentId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deletePluginAttachmentWithOptions(pluginAttachmentId, headers, runtime);
}

/**
 * @summary Delete Policy
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
 * @summary Delete Policy
 *
 * @return DeletePolicyResponse
 */
DeletePolicyResponse Client::deletePolicy(const string &policyId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deletePolicyWithOptions(policyId, headers, runtime);
}

/**
 * @summary Delete policy resource attachment
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
 * @summary Delete policy resource attachment
 *
 * @return DeletePolicyAttachmentResponse
 */
DeletePolicyAttachmentResponse Client::deletePolicyAttachment(const string &policyAttachmentId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deletePolicyAttachmentWithOptions(policyAttachmentId, headers, runtime);
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
 * @summary 删除服务来源
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
 * @summary 删除服务来源
 *
 * @return DeleteSourceResponse
 */
DeleteSourceResponse Client::deleteSource(const string &sourceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteSourceWithOptions(sourceId, headers, runtime);
}

/**
 * @summary Deploy HttpApi
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
    body["httpApiConfig"] = request.httpApiConfig();
  }

  if (!!request.hasRestApiConfig()) {
    body["restApiConfig"] = request.restApiConfig();
  }

  if (!!request.hasRouteId()) {
    body["routeId"] = request.routeId();
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
 * @summary Deploy HttpApi
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
 * @summary Deploys an MCP server.
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
 * @summary Deploys an MCP server.
 *
 * @return DeployMcpServerResponse
 */
DeployMcpServerResponse Client::deployMcpServer(const string &mcpServerId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deployMcpServerWithOptions(mcpServerId, headers, runtime);
}

/**
 * @summary Export HTTP API
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportHttpApiResponse
 */
ExportHttpApiResponse Client::exportHttpApiWithOptions(const string &httpApiId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
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
 * @summary Export HTTP API
 *
 * @return ExportHttpApiResponse
 */
ExportHttpApiResponse Client::exportHttpApi(const string &httpApiId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return exportHttpApiWithOptions(httpApiId, headers, runtime);
}

/**
 * @summary Obtains the information of a consumer.
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
 * @summary Obtains the information of a consumer.
 *
 * @return GetConsumerResponse
 */
GetConsumerResponse Client::getConsumer(const string &consumerId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getConsumerWithOptions(consumerId, headers, runtime);
}

/**
 * @summary Obtains a consumer authentication rule.
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
 * @summary Obtains a consumer authentication rule.
 *
 * @return GetConsumerAuthorizationRuleResponse
 */
GetConsumerAuthorizationRuleResponse Client::getConsumerAuthorizationRule(const string &consumerAuthorizationRuleId, const string &consumerId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getConsumerAuthorizationRuleWithOptions(consumerAuthorizationRuleId, consumerId, headers, runtime);
}

/**
 * @summary Obtains data from dashboards.
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
    request.setFilterShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.filter(), "filter", "json"));
  }

  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["acceptLanguage"] = request.acceptLanguage();
  }

  if (!!request.hasApiId()) {
    query["apiId"] = request.apiId();
  }

  if (!!request.hasFilterShrink()) {
    query["filter"] = request.filterShrink();
  }

  if (!!request.hasName()) {
    query["name"] = request.name();
  }

  if (!!request.hasPluginClassId()) {
    query["pluginClassId"] = request.pluginClassId();
  }

  if (!!request.hasPluginId()) {
    query["pluginId"] = request.pluginId();
  }

  if (!!request.hasRouteId()) {
    query["routeId"] = request.routeId();
  }

  if (!!request.hasSource()) {
    query["source"] = request.source();
  }

  if (!!request.hasUpstreamCluster()) {
    query["upstreamCluster"] = request.upstreamCluster();
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
 * @summary Obtains data from dashboards.
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
 * @summary Queries the information about a domain name.
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
    query["withStatistics"] = request.withStatistics();
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
 * @summary Queries the information about a domain name.
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
 * @summary GetEnvironment
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
    query["withStatistics"] = request.withStatistics();
  }

  if (!!request.hasWithVpcInfo()) {
    query["withVpcInfo"] = request.withVpcInfo();
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
 * @summary GetEnvironment
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
 * @summary Read HttpApi
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
 * @summary Read HttpApi
 *
 * @return GetHttpApiResponse
 */
GetHttpApiResponse Client::getHttpApi(const string &httpApiId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getHttpApiWithOptions(httpApiId, headers, runtime);
}

/**
 * @summary Get Operation
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
 * @summary Get Operation
 *
 * @return GetHttpApiOperationResponse
 */
GetHttpApiOperationResponse Client::getHttpApiOperation(const string &httpApiId, const string &operationId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getHttpApiOperationWithOptions(httpApiId, operationId, headers, runtime);
}

/**
 * @summary Queries the details of a route of an HTTP API.
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
 * @summary Queries the details of a route of an HTTP API.
 *
 * @return GetHttpApiRouteResponse
 */
GetHttpApiRouteResponse Client::getHttpApiRoute(const string &httpApiId, const string &routeId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getHttpApiRouteWithOptions(httpApiId, routeId, headers, runtime);
}

/**
 * @summary Queries the detailed information of an MCP server.
 *
 * @description You can call this operation to create multiple services at a time.
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
 * @summary Queries the detailed information of an MCP server.
 *
 * @description You can call this operation to create multiple services at a time.
 *
 * @return GetMcpServerResponse
 */
GetMcpServerResponse Client::getMcpServer(const string &mcpServerId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getMcpServerWithOptions(mcpServerId, headers, runtime);
}

/**
 * @summary Queries a plug-in attachment.
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
 * @summary Queries a plug-in attachment.
 *
 * @return GetPluginAttachmentResponse
 */
GetPluginAttachmentResponse Client::getPluginAttachment(const string &pluginAttachmentId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getPluginAttachmentWithOptions(pluginAttachmentId, headers, runtime);
}

/**
 * @summary Queries a policy.
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
 * @summary Queries a policy.
 *
 * @return GetPolicyResponse
 */
GetPolicyResponse Client::getPolicy(const string &policyId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getPolicyWithOptions(policyId, headers, runtime);
}

/**
 * @summary Query Policy Resource Attachment
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
 * @summary Query Policy Resource Attachment
 *
 * @return GetPolicyAttachmentResponse
 */
GetPolicyAttachmentResponse Client::getPolicyAttachment(const string &policyAttachmentId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getPolicyAttachmentWithOptions(policyAttachmentId, headers, runtime);
}

/**
 * @summary Get resource overview information
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
    query["gatewayType"] = request.gatewayType();
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
 * @summary Get resource overview information
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
 * @summary Queries the details of a service.
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
 * @summary Queries the details of a service.
 *
 * @return GetServiceResponse
 */
GetServiceResponse Client::getService(const string &serviceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getServiceWithOptions(serviceId, headers, runtime);
}

/**
 * @summary Obtains the details of a service source.
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
 * @summary Obtains the details of a service source.
 *
 * @return GetSourceResponse
 */
GetSourceResponse Client::getSource(const string &sourceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getSourceWithOptions(sourceId, headers, runtime);
}

/**
 * @summary Retrieve Tracing Configuration
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
    query["acceptLanguage"] = request.acceptLanguage();
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
 * @summary Retrieve Tracing Configuration
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
 * @summary Imports HTTP APIs. You can call this operation to import OpenAPI 2.0 and OpenAPI 3.0.x definition files to create REST APIs.
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
    body["deployConfigs"] = request.deployConfigs();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasDryRun()) {
    body["dryRun"] = request.dryRun();
  }

  if (!!request.hasGatewayId()) {
    body["gatewayId"] = request.gatewayId();
  }

  if (!!request.hasMcpRouteId()) {
    body["mcpRouteId"] = request.mcpRouteId();
  }

  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  if (!!request.hasResourceGroupId()) {
    body["resourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSpecContentBase64()) {
    body["specContentBase64"] = request.specContentBase64();
  }

  if (!!request.hasSpecFileUrl()) {
    body["specFileUrl"] = request.specFileUrl();
  }

  if (!!request.hasSpecOssConfig()) {
    body["specOssConfig"] = request.specOssConfig();
  }

  if (!!request.hasStrategy()) {
    body["strategy"] = request.strategy();
  }

  if (!!request.hasTargetHttpApiId()) {
    body["targetHttpApiId"] = request.targetHttpApiId();
  }

  if (!!request.hasVersionConfig()) {
    body["versionConfig"] = request.versionConfig();
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
 * @summary Imports HTTP APIs. You can call this operation to import OpenAPI 2.0 and OpenAPI 3.0.x definition files to create REST APIs.
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
    body["gatewayIds"] = request.gatewayIds();
  }

  if (!!request.hasPluginClassId()) {
    body["pluginClassId"] = request.pluginClassId();
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
 * @summary Queries a list of consumers.
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
    query["gatewayType"] = request.gatewayType();
  }

  if (!!request.hasNameLike()) {
    query["nameLike"] = request.nameLike();
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
 * @summary Queries a list of consumers.
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
  if (!!request.hasGatewayId()) {
    query["gatewayId"] = request.gatewayId();
  }

  if (!!request.hasGatewayType()) {
    query["gatewayType"] = request.gatewayType();
  }

  if (!!request.hasNameLike()) {
    query["nameLike"] = request.nameLike();
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
 * @summary ListEnvironments
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
    query["aliasLike"] = request.aliasLike();
  }

  if (!!request.hasGatewayId()) {
    query["gatewayId"] = request.gatewayId();
  }

  if (!!request.hasGatewayNameLike()) {
    query["gatewayNameLike"] = request.gatewayNameLike();
  }

  if (!!request.hasGatewayType()) {
    query["gatewayType"] = request.gatewayType();
  }

  if (!!request.hasNameLike()) {
    query["nameLike"] = request.nameLike();
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
 * @summary ListEnvironments
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
 * @summary Queries the feature parameter configurations of an instance.
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
 * @summary Queries the feature parameter configurations of an instance.
 *
 * @return ListGatewayFeaturesResponse
 */
ListGatewayFeaturesResponse Client::listGatewayFeatures(const string &gatewayId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listGatewayFeaturesWithOptions(gatewayId, headers, runtime);
}

/**
 * @summary Queries a list of instances.
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
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tag(), "tag", "json"));
  }

  json query = {};
  if (!!request.hasGatewayId()) {
    query["gatewayId"] = request.gatewayId();
  }

  if (!!request.hasGatewayType()) {
    query["gatewayType"] = request.gatewayType();
  }

  if (!!request.hasKeyword()) {
    query["keyword"] = request.keyword();
  }

  if (!!request.hasName()) {
    query["name"] = request.name();
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

  if (!!request.hasTagShrink()) {
    query["tag"] = request.tagShrink();
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
 * @summary Queries a list of instances.
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
 * @summary List Operations
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
    query["consumerAuthorizationRuleId"] = request.consumerAuthorizationRuleId();
  }

  if (!!request.hasEnableAuth()) {
    query["enableAuth"] = request.enableAuth();
  }

  if (!!request.hasForDeploy()) {
    query["forDeploy"] = request.forDeploy();
  }

  if (!!request.hasGatewayId()) {
    query["gatewayId"] = request.gatewayId();
  }

  if (!!request.hasMethod()) {
    query["method"] = request.method();
  }

  if (!!request.hasName()) {
    query["name"] = request.name();
  }

  if (!!request.hasNameLike()) {
    query["nameLike"] = request.nameLike();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasPathLike()) {
    query["pathLike"] = request.pathLike();
  }

  if (!!request.hasWithConsumerInEnvironmentId()) {
    query["withConsumerInEnvironmentId"] = request.withConsumerInEnvironmentId();
  }

  if (!!request.hasWithConsumerInfoById()) {
    query["withConsumerInfoById"] = request.withConsumerInfoById();
  }

  if (!!request.hasWithPluginAttachmentByPluginId()) {
    query["withPluginAttachmentByPluginId"] = request.withPluginAttachmentByPluginId();
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
 * @summary List Operations
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
 * @summary Queries the routes of an HTTP API.
 *
 * @param request ListHttpApiRoutesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHttpApiRoutesResponse
 */
ListHttpApiRoutesResponse Client::listHttpApiRoutesWithOptions(const string &httpApiId, const ListHttpApiRoutesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsumerAuthorizationRuleId()) {
    query["consumerAuthorizationRuleId"] = request.consumerAuthorizationRuleId();
  }

  if (!!request.hasDeployStatuses()) {
    query["deployStatuses"] = request.deployStatuses();
  }

  if (!!request.hasDomainId()) {
    query["domainId"] = request.domainId();
  }

  if (!!request.hasEnvironmentId()) {
    query["environmentId"] = request.environmentId();
  }

  if (!!request.hasForDeploy()) {
    query["forDeploy"] = request.forDeploy();
  }

  if (!!request.hasGatewayId()) {
    query["gatewayId"] = request.gatewayId();
  }

  if (!!request.hasName()) {
    query["name"] = request.name();
  }

  if (!!request.hasNameLike()) {
    query["nameLike"] = request.nameLike();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasPathLike()) {
    query["pathLike"] = request.pathLike();
  }

  if (!!request.hasWithAuthPolicyInfo()) {
    query["withAuthPolicyInfo"] = request.withAuthPolicyInfo();
  }

  if (!!request.hasWithConsumerInfoById()) {
    query["withConsumerInfoById"] = request.withConsumerInfoById();
  }

  if (!!request.hasWithPluginAttachmentByPluginId()) {
    query["withPluginAttachmentByPluginId"] = request.withPluginAttachmentByPluginId();
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
 * @summary Queries the routes of an HTTP API.
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
 * @summary Queries a list of HTTP APIs.
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
    query["gatewayId"] = request.gatewayId();
  }

  if (!!request.hasGatewayType()) {
    query["gatewayType"] = request.gatewayType();
  }

  if (!!request.hasKeyword()) {
    query["keyword"] = request.keyword();
  }

  if (!!request.hasName()) {
    query["name"] = request.name();
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

  if (!!request.hasTypes()) {
    query["types"] = request.types();
  }

  if (!!request.hasWithAPIsPublishedToEnvironment()) {
    query["withAPIsPublishedToEnvironment"] = request.withAPIsPublishedToEnvironment();
  }

  if (!!request.hasWithAuthPolicyInEnvironmentId()) {
    query["withAuthPolicyInEnvironmentId"] = request.withAuthPolicyInEnvironmentId();
  }

  if (!!request.hasWithAuthPolicyList()) {
    query["withAuthPolicyList"] = request.withAuthPolicyList();
  }

  if (!!request.hasWithConsumerInfoById()) {
    query["withConsumerInfoById"] = request.withConsumerInfoById();
  }

  if (!!request.hasWithEnvironmentInfo()) {
    query["withEnvironmentInfo"] = request.withEnvironmentInfo();
  }

  if (!!request.hasWithEnvironmentInfoById()) {
    query["withEnvironmentInfoById"] = request.withEnvironmentInfoById();
  }

  if (!!request.hasWithIngressInfo()) {
    query["withIngressInfo"] = request.withIngressInfo();
  }

  if (!!request.hasWithPluginAttachmentByPluginId()) {
    query["withPluginAttachmentByPluginId"] = request.withPluginAttachmentByPluginId();
  }

  if (!!request.hasWithPolicyConfigs()) {
    query["withPolicyConfigs"] = request.withPolicyConfigs();
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
 * @summary Queries a list of HTTP APIs.
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
 * @description You can call this operation to create multiple services at a time.
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
    query["createFromTypes"] = request.createFromTypes();
  }

  if (!!request.hasDeployStatuses()) {
    query["deployStatuses"] = request.deployStatuses();
  }

  if (!!request.hasGatewayId()) {
    query["gatewayId"] = request.gatewayId();
  }

  if (!!request.hasNameLike()) {
    query["nameLike"] = request.nameLike();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasType()) {
    query["type"] = request.type();
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
 * @description You can call this operation to create multiple services at a time.
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
 * @summary Retrieves a list of plug-in attachments.
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
    query["attachResourceId"] = request.attachResourceId();
  }

  if (!!request.hasAttachResourceType()) {
    query["attachResourceType"] = request.attachResourceType();
  }

  if (!!request.hasAttachResourceTypes()) {
    query["attachResourceTypes"] = request.attachResourceTypes();
  }

  if (!!request.hasEnvironmentId()) {
    query["environmentId"] = request.environmentId();
  }

  if (!!request.hasGatewayId()) {
    query["gatewayId"] = request.gatewayId();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasPluginId()) {
    query["pluginId"] = request.pluginId();
  }

  if (!!request.hasWithParentResource()) {
    query["withParentResource"] = request.withParentResource();
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
 * @summary Retrieves a list of plug-in attachments.
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
 * @summary Queries plug-ins.
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
    query["attachResourceId"] = request.attachResourceId();
  }

  if (!!request.hasAttachResourceType()) {
    query["attachResourceType"] = request.attachResourceType();
  }

  if (!!request.hasGatewayId()) {
    query["gatewayId"] = request.gatewayId();
  }

  if (!!request.hasGatewayType()) {
    query["gatewayType"] = request.gatewayType();
  }

  if (!!request.hasIncludeBuiltinAiGateway()) {
    query["includeBuiltinAiGateway"] = request.includeBuiltinAiGateway();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasPluginClassId()) {
    query["pluginClassId"] = request.pluginClassId();
  }

  if (!!request.hasPluginClassName()) {
    query["pluginClassName"] = request.pluginClassName();
  }

  if (!!request.hasWithAttachmentInfo()) {
    query["withAttachmentInfo"] = request.withAttachmentInfo();
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
 * @summary Queries plug-ins.
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
 * @summary Queries policies.
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
    query["attachResourceId"] = request.attachResourceId();
  }

  if (!!request.hasAttachResourceType()) {
    query["attachResourceType"] = request.attachResourceType();
  }

  if (!!request.hasEnvironmentId()) {
    query["environmentId"] = request.environmentId();
  }

  if (!!request.hasGatewayId()) {
    query["gatewayId"] = request.gatewayId();
  }

  if (!!request.hasWithAttachments()) {
    query["withAttachments"] = request.withAttachments();
  }

  if (!!request.hasWithSystemPolicy()) {
    query["withSystemPolicy"] = request.withSystemPolicy();
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
 * @summary Queries policies.
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
 * @summary ListPolicyClasses
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
    query["attachResourceId"] = request.attachResourceId();
  }

  if (!!request.hasAttachResourceType()) {
    query["attachResourceType"] = request.attachResourceType();
  }

  if (!!request.hasDirection()) {
    query["direction"] = request.direction();
  }

  if (!!request.hasGatewayId()) {
    query["gatewayId"] = request.gatewayId();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasType()) {
    query["type"] = request.type();
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
 * @summary ListPolicyClasses
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
 * @summary Queries a list of services.
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
    query["gatewayId"] = request.gatewayId();
  }

  if (!!request.hasName()) {
    query["name"] = request.name();
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

  if (!!request.hasSourceType()) {
    query["sourceType"] = request.sourceType();
  }

  if (!!request.hasSourceTypes()) {
    query["sourceTypes"] = request.sourceTypes();
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
 * @summary Queries a list of services.
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
 * @summary ListSslCerts
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
    query["certNameLike"] = request.certNameLike();
  }

  if (!!request.hasDomainName()) {
    query["domainName"] = request.domainName();
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
 * @summary ListSslCerts
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
 * @summary Retrieve the availability zones under a cloud-native API gateway region
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
 * @summary Retrieve the availability zones under a cloud-native API gateway region
 *
 * @return ListZonesResponse
 */
ListZonesResponse Client::listZones() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listZonesWithOptions(headers, runtime);
}

/**
 * @summary Queries a list of consumer authentication rules.
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
    query["apiNameLike"] = request.apiNameLike();
  }

  if (!!request.hasConsumerId()) {
    query["consumerId"] = request.consumerId();
  }

  if (!!request.hasConsumerNameLike()) {
    query["consumerNameLike"] = request.consumerNameLike();
  }

  if (!!request.hasEnvironmentId()) {
    query["environmentId"] = request.environmentId();
  }

  if (!!request.hasGroupByApi()) {
    query["groupByApi"] = request.groupByApi();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasParentResourceId()) {
    query["parentResourceId"] = request.parentResourceId();
  }

  if (!!request.hasResourceId()) {
    query["resourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["resourceType"] = request.resourceType();
  }

  if (!!request.hasResourceTypes()) {
    query["resourceTypes"] = request.resourceTypes();
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
 * @summary Queries a list of consumer authentication rules.
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
 * @summary Deletes a consumer authorization rule.
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
 * @summary Deletes a consumer authorization rule.
 *
 * @return RemoveConsumerAuthorizationRuleResponse
 */
RemoveConsumerAuthorizationRuleResponse Client::removeConsumerAuthorizationRule(const string &consumerAuthorizationRuleId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return removeConsumerAuthorizationRuleWithOptions(consumerAuthorizationRuleId, headers, runtime);
}

/**
 * @summary Gateway Restart
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
 * @summary Gateway Restart
 *
 * @return RestartGatewayResponse
 */
RestartGatewayResponse Client::restartGateway(const string &gatewayId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return restartGatewayWithOptions(gatewayId, headers, runtime);
}

/**
 * @summary 同步外部MCP server
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
    body["domainIds"] = request.domainIds();
  }

  if (!!request.hasGatewayId()) {
    body["gatewayId"] = request.gatewayId();
  }

  if (!!request.hasNacosMcpServers()) {
    body["nacosMcpServers"] = request.nacosMcpServers();
  }

  if (!!request.hasNamespace()) {
    body["namespace"] = request._namespace();
  }

  if (!!request.hasSourceId()) {
    body["sourceId"] = request.sourceId();
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
 * @summary 同步外部MCP server
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
 * @summary Undeploys an MCP server.
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
 * @summary Undeploys an MCP server.
 *
 * @return UnDeployMcpServerResponse
 */
UnDeployMcpServerResponse Client::unDeployMcpServer(const string &mcpServerId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return unDeployMcpServerWithOptions(mcpServerId, headers, runtime);
}

/**
 * @summary Unpublishes an HTTP API.
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
    body["environmentId"] = request.environmentId();
  }

  if (!!request.hasGatewayId()) {
    body["gatewayId"] = request.gatewayId();
  }

  if (!!request.hasOperationId()) {
    body["operationId"] = request.operationId();
  }

  if (!!request.hasRouteId()) {
    body["routeId"] = request.routeId();
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
 * @summary Unpublishes an HTTP API.
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
 * @summary Uninstalls a plug-in.
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
 * @summary Uninstalls a plug-in.
 *
 * @return UninstallPluginResponse
 */
UninstallPluginResponse Client::uninstallPlugin(const string &pluginId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return uninstallPluginWithOptions(pluginId, headers, runtime);
}

/**
 * @summary Updates and associates a policy.
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
    body["attachResourceIds"] = request.attachResourceIds();
  }

  if (!!request.hasAttachResourceType()) {
    body["attachResourceType"] = request.attachResourceType();
  }

  if (!!request.hasConfig()) {
    body["config"] = request.config();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasEnvironmentId()) {
    body["environmentId"] = request.environmentId();
  }

  if (!!request.hasGatewayId()) {
    body["gatewayId"] = request.gatewayId();
  }

  if (!!request.hasName()) {
    body["name"] = request.name();
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
 * @summary Updates and associates a policy.
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
 * @summary Updates a consumer.
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
    body["akSkIdentityConfigs"] = request.akSkIdentityConfigs();
  }

  if (!!request.hasApikeyIdentityConfig()) {
    body["apikeyIdentityConfig"] = request.apikeyIdentityConfig();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasEnable()) {
    body["enable"] = request.enable();
  }

  if (!!request.hasJwtIdentityConfig()) {
    body["jwtIdentityConfig"] = request.jwtIdentityConfig();
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
 * @summary Updates a consumer.
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
    body["authorizationResourceInfos"] = request.authorizationResourceInfos();
  }

  if (!!request.hasExpireMode()) {
    body["expireMode"] = request.expireMode();
  }

  if (!!request.hasExpireTimestamp()) {
    body["expireTimestamp"] = request.expireTimestamp();
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
 * @param request UpdateDomainRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDomainResponse
 */
UpdateDomainResponse Client::updateDomainWithOptions(const string &domainId, const UpdateDomainRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCaCertIdentifier()) {
    body["caCertIdentifier"] = request.caCertIdentifier();
  }

  if (!!request.hasCertIdentifier()) {
    body["certIdentifier"] = request.certIdentifier();
  }

  if (!!request.hasClientCACert()) {
    body["clientCACert"] = request.clientCACert();
  }

  if (!!request.hasForceHttps()) {
    body["forceHttps"] = request.forceHttps();
  }

  if (!!request.hasHttp2Option()) {
    body["http2Option"] = request.http2Option();
  }

  if (!!request.hasMTLSEnabled()) {
    body["mTLSEnabled"] = request.mTLSEnabled();
  }

  if (!!request.hasProtocol()) {
    body["protocol"] = request.protocol();
  }

  if (!!request.hasTlsCipherSuitesConfig()) {
    body["tlsCipherSuitesConfig"] = request.tlsCipherSuitesConfig();
  }

  if (!!request.hasTlsMax()) {
    body["tlsMax"] = request.tlsMax();
  }

  if (!!request.hasTlsMin()) {
    body["tlsMin"] = request.tlsMin();
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
 * @summary UpdateEnvironment
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
    body["alias"] = request.alias();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.description();
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
 * @summary UpdateEnvironment
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
 * @summary Get the feature configuration of the gateway
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
    body["value"] = request.value();
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
 * @summary Get the feature configuration of the gateway
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
 * @summary Change the name of a gateway instance
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
    query["name"] = request.name();
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
 * @summary Change the name of a gateway instance
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
    body["agentProtocols"] = request.agentProtocols();
  }

  if (!!request.hasAiProtocols()) {
    body["aiProtocols"] = request.aiProtocols();
  }

  if (!!request.hasAuthConfig()) {
    body["authConfig"] = request.authConfig();
  }

  if (!!request.hasBasePath()) {
    body["basePath"] = request.basePath();
  }

  if (!!request.hasDeployConfigs()) {
    body["deployConfigs"] = request.deployConfigs();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasEnableAuth()) {
    body["enableAuth"] = request.enableAuth();
  }

  if (!!request.hasFirstByteTimeout()) {
    body["firstByteTimeout"] = request.firstByteTimeout();
  }

  if (!!request.hasIngressConfig()) {
    body["ingressConfig"] = request.ingressConfig();
  }

  if (!!request.hasOnlyChangeConfig()) {
    body["onlyChangeConfig"] = request.onlyChangeConfig();
  }

  if (!!request.hasProtocols()) {
    body["protocols"] = request.protocols();
  }

  if (!!request.hasRemoveBasePathOnForward()) {
    body["removeBasePathOnForward"] = request.removeBasePathOnForward();
  }

  if (!!request.hasVersionConfig()) {
    body["versionConfig"] = request.versionConfig();
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
 * @summary Update Operation
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
    body["operation"] = request.operation();
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
 * @summary Update Operation
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
 * @summary Updates the route of an HTTP API.
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
    body["backendConfig"] = request.backendConfig();
  }

  if (!!request.hasDeployConfigs()) {
    body["deployConfigs"] = request.deployConfigs();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasDomainIds()) {
    body["domainIds"] = request.domainIds();
  }

  if (!!request.hasEnvironmentId()) {
    body["environmentId"] = request.environmentId();
  }

  if (!!request.hasMatch()) {
    body["match"] = request.match();
  }

  if (!!request.hasMcpRouteConfig()) {
    body["mcpRouteConfig"] = request.mcpRouteConfig();
  }

  if (!!request.hasName()) {
    body["name"] = request.name();
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
 * @summary Updates the route of an HTTP API.
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
 * @description You can only update the listening Ingress configuration for sources of the **ACK** type.
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
    body["assembledSources"] = request.assembledSources();
  }

  if (!!request.hasBackendConfig()) {
    body["backendConfig"] = request.backendConfig();
  }

  if (!!request.hasCreateFromType()) {
    body["createFromType"] = request.createFromType();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasDomainIds()) {
    body["domainIds"] = request.domainIds();
  }

  if (!!request.hasExposedUriPath()) {
    body["exposedUriPath"] = request.exposedUriPath();
  }

  if (!!request.hasGrayMcpServerConfigs()) {
    body["grayMcpServerConfigs"] = request.grayMcpServerConfigs();
  }

  if (!!request.hasMatch()) {
    body["match"] = request.match();
  }

  if (!!request.hasMcpStatisticsEnable()) {
    body["mcpStatisticsEnable"] = request.mcpStatisticsEnable();
  }

  if (!!request.hasProtocol()) {
    body["protocol"] = request.protocol();
  }

  if (!!request.hasType()) {
    body["type"] = request.type();
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
 * @description You can only update the listening Ingress configuration for sources of the **ACK** type.
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
 * @summary Updates a plug-in attachment.
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
    body["attachResourceIds"] = request.attachResourceIds();
  }

  if (!!request.hasEnable()) {
    body["enable"] = request.enable();
  }

  if (!!request.hasPluginConfig()) {
    body["pluginConfig"] = request.pluginConfig();
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
 * @summary Updates a plug-in attachment.
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
 * @summary Update Policy
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
    body["config"] = request.config();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasName()) {
    body["name"] = request.name();
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
 * @summary Update Policy
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
 * @summary 更新服务
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
    body["addresses"] = request.addresses();
  }

  if (!!request.hasAgentServiceConfig()) {
    body["agentServiceConfig"] = request.agentServiceConfig();
  }

  if (!!request.hasAiServiceConfig()) {
    body["aiServiceConfig"] = request.aiServiceConfig();
  }

  if (!!request.hasDnsServers()) {
    body["dnsServers"] = request.dnsServers();
  }

  if (!!request.hasHealthCheckConfig()) {
    body["healthCheckConfig"] = request.healthCheckConfig();
  }

  if (!!request.hasHealthyPanicThreshold()) {
    body["healthyPanicThreshold"] = request.healthyPanicThreshold();
  }

  if (!!request.hasOutlierDetectionConfig()) {
    body["outlierDetectionConfig"] = request.outlierDetectionConfig();
  }

  if (!!request.hasPorts()) {
    body["ports"] = request.ports();
  }

  if (!!request.hasProtocol()) {
    body["protocol"] = request.protocol();
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
 * @summary 更新服务
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
    body["labels"] = request.labels();
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
 * @summary Upgrade the gateway version
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
    query["version"] = request.version();
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
 * @summary Upgrade the gateway version
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