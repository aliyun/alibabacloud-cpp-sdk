#include <darabonba/Core.hpp>
#include <alibabacloud/Ddoscoo20200101.hpp>
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
using namespace AlibabaCloud::Ddoscoo20200101::Models;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{

AlibabaCloud::Ddoscoo20200101::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("ddoscoo", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @param request AddAutoCcBlacklistRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddAutoCcBlacklistResponse
 */
AddAutoCcBlacklistResponse Client::addAutoCcBlacklistWithOptions(const AddAutoCcBlacklistRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBlacklist()) {
    query["Blacklist"] = request.blacklist();
  }

  if (!!request.hasExpireTime()) {
    query["ExpireTime"] = request.expireTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddAutoCcBlacklist"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddAutoCcBlacklistResponse>();
}

/**
 * @param request AddAutoCcBlacklistRequest
 * @return AddAutoCcBlacklistResponse
 */
AddAutoCcBlacklistResponse Client::addAutoCcBlacklist(const AddAutoCcBlacklistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addAutoCcBlacklistWithOptions(request, runtime);
}

/**
 * @summary Adds IP addresses to the IP address whitelist of an Anti-DDoS Pro or Anti-DDoS Premium instance.
 *
 * @description You can call the AddAutoCcWhitelist operation to add IP addresses to the whitelist of an Anti-DDoS Pro or Anti-DDoS Premium instance. This way, the Anti-DDoS Pro or Anti-DDoS Premium instance allows traffic from the IP addresses.
 * By default, the traffic from the IP addresses that you add to the whitelist is always allowed. If you no longer use the whitelist, you can call the [EmptyAutoCcWhitelist](https://help.aliyun.com/document_detail/157505.html) operation to remove the IP addresses from the whitelist.
 * ### Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request AddAutoCcWhitelistRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddAutoCcWhitelistResponse
 */
AddAutoCcWhitelistResponse Client::addAutoCcWhitelistWithOptions(const AddAutoCcWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExpireTime()) {
    query["ExpireTime"] = request.expireTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasWhitelist()) {
    query["Whitelist"] = request.whitelist();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddAutoCcWhitelist"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddAutoCcWhitelistResponse>();
}

/**
 * @summary Adds IP addresses to the IP address whitelist of an Anti-DDoS Pro or Anti-DDoS Premium instance.
 *
 * @description You can call the AddAutoCcWhitelist operation to add IP addresses to the whitelist of an Anti-DDoS Pro or Anti-DDoS Premium instance. This way, the Anti-DDoS Pro or Anti-DDoS Premium instance allows traffic from the IP addresses.
 * By default, the traffic from the IP addresses that you add to the whitelist is always allowed. If you no longer use the whitelist, you can call the [EmptyAutoCcWhitelist](https://help.aliyun.com/document_detail/157505.html) operation to remove the IP addresses from the whitelist.
 * ### Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request AddAutoCcWhitelistRequest
 * @return AddAutoCcWhitelistResponse
 */
AddAutoCcWhitelistResponse Client::addAutoCcWhitelist(const AddAutoCcWhitelistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addAutoCcWhitelistWithOptions(request, runtime);
}

/**
 * @summary Associates an SSL certificate with the forwarding rule of a website.
 *
 * @param request AssociateWebCertRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AssociateWebCertResponse
 */
AssociateWebCertResponse Client::associateWebCertWithOptions(const AssociateWebCertRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCert()) {
    body["Cert"] = request.cert();
  }

  if (!!request.hasCertId()) {
    body["CertId"] = request.certId();
  }

  if (!!request.hasCertIdentifier()) {
    body["CertIdentifier"] = request.certIdentifier();
  }

  if (!!request.hasCertName()) {
    body["CertName"] = request.certName();
  }

  if (!!request.hasCertRegion()) {
    body["CertRegion"] = request.certRegion();
  }

  if (!!request.hasDomain()) {
    body["Domain"] = request.domain();
  }

  if (!!request.hasKey()) {
    body["Key"] = request.key();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "AssociateWebCert"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AssociateWebCertResponse>();
}

/**
 * @summary Associates an SSL certificate with the forwarding rule of a website.
 *
 * @param request AssociateWebCertRequest
 * @return AssociateWebCertResponse
 */
AssociateWebCertResponse Client::associateWebCert(const AssociateWebCertRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return associateWebCertWithOptions(request, runtime);
}

/**
 * @summary Adds an object to a scenario-specific custom policy for protection.
 *
 * @param request AttachSceneDefenseObjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachSceneDefenseObjectResponse
 */
AttachSceneDefenseObjectResponse Client::attachSceneDefenseObjectWithOptions(const AttachSceneDefenseObjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasObjectType()) {
    query["ObjectType"] = request.objectType();
  }

  if (!!request.hasObjects()) {
    query["Objects"] = request.objects();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.policyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachSceneDefenseObject"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachSceneDefenseObjectResponse>();
}

/**
 * @summary Adds an object to a scenario-specific custom policy for protection.
 *
 * @param request AttachSceneDefenseObjectRequest
 * @return AttachSceneDefenseObjectResponse
 */
AttachSceneDefenseObjectResponse Client::attachSceneDefenseObject(const AttachSceneDefenseObjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachSceneDefenseObjectWithOptions(request, runtime);
}

/**
 * @summary Configures the global mitigation policy feature, including the feature status and settings.
 *
 * @param request ConfigDomainSecurityProfileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigDomainSecurityProfileResponse
 */
ConfigDomainSecurityProfileResponse Client::configDomainSecurityProfileWithOptions(const ConfigDomainSecurityProfileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCluster()) {
    query["Cluster"] = request.cluster();
  }

  if (!!request.hasConfig()) {
    query["Config"] = request.config();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ConfigDomainSecurityProfile"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfigDomainSecurityProfileResponse>();
}

/**
 * @summary Configures the global mitigation policy feature, including the feature status and settings.
 *
 * @param request ConfigDomainSecurityProfileRequest
 * @return ConfigDomainSecurityProfileResponse
 */
ConfigDomainSecurityProfileResponse Client::configDomainSecurityProfile(const ConfigDomainSecurityProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configDomainSecurityProfileWithOptions(request, runtime);
}

/**
 * @summary 配置全局模板规则
 *
 * @param request ConfigL7GlobalRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigL7GlobalRuleResponse
 */
ConfigL7GlobalRuleResponse Client::configL7GlobalRuleWithOptions(const ConfigL7GlobalRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasRuleAttr()) {
    query["RuleAttr"] = request.ruleAttr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ConfigL7GlobalRule"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfigL7GlobalRuleResponse>();
}

/**
 * @summary 配置全局模板规则
 *
 * @param request ConfigL7GlobalRuleRequest
 * @return ConfigL7GlobalRuleResponse
 */
ConfigL7GlobalRuleResponse Client::configL7GlobalRule(const ConfigL7GlobalRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configL7GlobalRuleWithOptions(request, runtime);
}

/**
 * @summary Configures a back-to-origin policy for the forwarding rule of a website.
 *
 * @description If multiple origin servers are configured for a website that is added to Anti-DDoS Pro or Anti-DDoS Premium, you can modify the load balancing algorithms for back-to-origin traffic based on back-to-origin policies. The IP hash algorithm is used by default. You can change the algorithm to the round-robin or least response time algorithm. For more information, see the description of the **Policy** parameter in the "Request parameters" section of this topic.
 *
 * @param request ConfigL7RsPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigL7RsPolicyResponse
 */
ConfigL7RsPolicyResponse Client::configL7RsPolicyWithOptions(const ConfigL7RsPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasPolicy()) {
    query["Policy"] = request.policy();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasUpstreamRetry()) {
    query["UpstreamRetry"] = request.upstreamRetry();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ConfigL7RsPolicy"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfigL7RsPolicyResponse>();
}

/**
 * @summary Configures a back-to-origin policy for the forwarding rule of a website.
 *
 * @description If multiple origin servers are configured for a website that is added to Anti-DDoS Pro or Anti-DDoS Premium, you can modify the load balancing algorithms for back-to-origin traffic based on back-to-origin policies. The IP hash algorithm is used by default. You can change the algorithm to the round-robin or least response time algorithm. For more information, see the description of the **Policy** parameter in the "Request parameters" section of this topic.
 *
 * @param request ConfigL7RsPolicyRequest
 * @return ConfigL7RsPolicyResponse
 */
ConfigL7RsPolicyResponse Client::configL7RsPolicy(const ConfigL7RsPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configL7RsPolicyWithOptions(request, runtime);
}

/**
 * @summary Configures the settings for back-to-origin persistent connections for a domain name.
 *
 * @param request ConfigL7UsKeepaliveRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigL7UsKeepaliveResponse
 */
ConfigL7UsKeepaliveResponse Client::configL7UsKeepaliveWithOptions(const ConfigL7UsKeepaliveRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasDownstreamKeepalive()) {
    query["DownstreamKeepalive"] = request.downstreamKeepalive();
  }

  if (!!request.hasUpstreamKeepalive()) {
    query["UpstreamKeepalive"] = request.upstreamKeepalive();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ConfigL7UsKeepalive"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfigL7UsKeepaliveResponse>();
}

/**
 * @summary Configures the settings for back-to-origin persistent connections for a domain name.
 *
 * @param request ConfigL7UsKeepaliveRequest
 * @return ConfigL7UsKeepaliveResponse
 */
ConfigL7UsKeepaliveResponse Client::configL7UsKeepalive(const ConfigL7UsKeepaliveRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configL7UsKeepaliveWithOptions(request, runtime);
}

/**
 * @summary Specifies a threshold for the clean bandwidth of an Anti-DDoS Pro or Anti-DDoS premium instance. If the threshold is reached, rate limiting is triggered.
 *
 * @param request ConfigLayer4RealLimitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigLayer4RealLimitResponse
 */
ConfigLayer4RealLimitResponse Client::configLayer4RealLimitWithOptions(const ConfigLayer4RealLimitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasLimitValue()) {
    query["LimitValue"] = request.limitValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ConfigLayer4RealLimit"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfigLayer4RealLimitResponse>();
}

/**
 * @summary Specifies a threshold for the clean bandwidth of an Anti-DDoS Pro or Anti-DDoS premium instance. If the threshold is reached, rate limiting is triggered.
 *
 * @param request ConfigLayer4RealLimitRequest
 * @return ConfigLayer4RealLimitResponse
 */
ConfigLayer4RealLimitResponse Client::configLayer4RealLimit(const ConfigLayer4RealLimitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configLayer4RealLimitWithOptions(request, runtime);
}

/**
 * @summary Adds a description to a port forwarding rule.
 *
 * @param request ConfigLayer4RemarkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigLayer4RemarkResponse
 */
ConfigLayer4RemarkResponse Client::configLayer4RemarkWithOptions(const ConfigLayer4RemarkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasListeners()) {
    query["Listeners"] = request.listeners();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ConfigLayer4Remark"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfigLayer4RemarkResponse>();
}

/**
 * @summary Adds a description to a port forwarding rule.
 *
 * @param request ConfigLayer4RemarkRequest
 * @return ConfigLayer4RemarkResponse
 */
ConfigLayer4RemarkResponse Client::configLayer4Remark(const ConfigLayer4RemarkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configLayer4RemarkWithOptions(request, runtime);
}

/**
 * @summary Enables or disables the origin redundancy mode for a port forwarding rule.
 *
 * @param request ConfigLayer4RuleBakModeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigLayer4RuleBakModeResponse
 */
ConfigLayer4RuleBakModeResponse Client::configLayer4RuleBakModeWithOptions(const ConfigLayer4RuleBakModeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBakMode()) {
    query["BakMode"] = request.bakMode();
  }

  if (!!request.hasListeners()) {
    query["Listeners"] = request.listeners();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ConfigLayer4RuleBakMode"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfigLayer4RuleBakModeResponse>();
}

/**
 * @summary Enables or disables the origin redundancy mode for a port forwarding rule.
 *
 * @param request ConfigLayer4RuleBakModeRequest
 * @return ConfigLayer4RuleBakModeResponse
 */
ConfigLayer4RuleBakModeResponse Client::configLayer4RuleBakMode(const ConfigLayer4RuleBakModeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configLayer4RuleBakModeWithOptions(request, runtime);
}

/**
 * @summary Configures the IP addresses of the primary and secondary origin servers for a port forwarding rule.
 *
 * @param request ConfigLayer4RulePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigLayer4RulePolicyResponse
 */
ConfigLayer4RulePolicyResponse Client::configLayer4RulePolicyWithOptions(const ConfigLayer4RulePolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasListeners()) {
    query["Listeners"] = request.listeners();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ConfigLayer4RulePolicy"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfigLayer4RulePolicyResponse>();
}

/**
 * @summary Configures the IP addresses of the primary and secondary origin servers for a port forwarding rule.
 *
 * @param request ConfigLayer4RulePolicyRequest
 * @return ConfigLayer4RulePolicyResponse
 */
ConfigLayer4RulePolicyResponse Client::configLayer4RulePolicy(const ConfigLayer4RulePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configLayer4RulePolicyWithOptions(request, runtime);
}

/**
 * @summary Configures blocked locations for an Anti-DDoS Proxy instance.
 *
 * @param request ConfigNetworkRegionBlockRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigNetworkRegionBlockResponse
 */
ConfigNetworkRegionBlockResponse Client::configNetworkRegionBlockWithOptions(const ConfigNetworkRegionBlockRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfig()) {
    query["Config"] = request.config();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ConfigNetworkRegionBlock"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfigNetworkRegionBlockResponse>();
}

/**
 * @summary Configures blocked locations for an Anti-DDoS Proxy instance.
 *
 * @param request ConfigNetworkRegionBlockRequest
 * @return ConfigNetworkRegionBlockResponse
 */
ConfigNetworkRegionBlockResponse Client::configNetworkRegionBlock(const ConfigNetworkRegionBlockRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configNetworkRegionBlockWithOptions(request, runtime);
}

/**
 * @summary Modifies the IP addresses of the origin server that is configured in a port forwarding rule.
 *
 * @param request ConfigNetworkRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigNetworkRulesResponse
 */
ConfigNetworkRulesResponse Client::configNetworkRulesWithOptions(const ConfigNetworkRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNetworkRules()) {
    query["NetworkRules"] = request.networkRules();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ConfigNetworkRules"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfigNetworkRulesResponse>();
}

/**
 * @summary Modifies the IP addresses of the origin server that is configured in a port forwarding rule.
 *
 * @param request ConfigNetworkRulesRequest
 * @return ConfigNetworkRulesResponse
 */
ConfigNetworkRulesResponse Client::configNetworkRules(const ConfigNetworkRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configNetworkRulesWithOptions(request, runtime);
}

/**
 * @summary Adds the filtering policies for UDP reflection attacks on an Anti-DDoS Pro or Anti-DDoS Premium instance to filter out the source ports of UDP traffic.
 *
 * @description You can call this operation to configure filtering policies to filter out UDP traffic from specific ports. This helps defend against UDP reflection attacks.
 * ### Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ConfigUdpReflectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigUdpReflectResponse
 */
ConfigUdpReflectResponse Client::configUdpReflectWithOptions(const ConfigUdpReflectRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "ConfigUdpReflect"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfigUdpReflectResponse>();
}

/**
 * @summary Adds the filtering policies for UDP reflection attacks on an Anti-DDoS Pro or Anti-DDoS Premium instance to filter out the source ports of UDP traffic.
 *
 * @description You can call this operation to configure filtering policies to filter out UDP traffic from specific ports. This helps defend against UDP reflection attacks.
 * ### Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ConfigUdpReflectRequest
 * @return ConfigUdpReflectResponse
 */
ConfigUdpReflectResponse Client::configUdpReflect(const ConfigUdpReflectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configUdpReflectWithOptions(request, runtime);
}

/**
 * @summary 配置新版基于匹配条件的cc规则
 *
 * @param request ConfigWebCCRuleV2Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigWebCCRuleV2Response
 */
ConfigWebCCRuleV2Response Client::configWebCCRuleV2WithOptions(const ConfigWebCCRuleV2Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasExpires()) {
    query["Expires"] = request.expires();
  }

  if (!!request.hasRuleList()) {
    query["RuleList"] = request.ruleList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ConfigWebCCRuleV2"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfigWebCCRuleV2Response>();
}

/**
 * @summary 配置新版基于匹配条件的cc规则
 *
 * @param request ConfigWebCCRuleV2Request
 * @return ConfigWebCCRuleV2Response
 */
ConfigWebCCRuleV2Response Client::configWebCCRuleV2(const ConfigWebCCRuleV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configWebCCRuleV2WithOptions(request, runtime);
}

/**
 * @summary Configures the mode of the Frequency Control policy for a website.
 *
 * @param request ConfigWebCCTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigWebCCTemplateResponse
 */
ConfigWebCCTemplateResponse Client::configWebCCTemplateWithOptions(const ConfigWebCCTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTemplate()) {
    query["Template"] = request._template();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ConfigWebCCTemplate"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfigWebCCTemplateResponse>();
}

/**
 * @summary Configures the mode of the Frequency Control policy for a website.
 *
 * @param request ConfigWebCCTemplateRequest
 * @return ConfigWebCCTemplateResponse
 */
ConfigWebCCTemplateResponse Client::configWebCCTemplate(const ConfigWebCCTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configWebCCTemplateWithOptions(request, runtime);
}

/**
 * @summary Configures the IP address whitelist and blacklist for a website.
 *
 * @param request ConfigWebIpSetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigWebIpSetResponse
 */
ConfigWebIpSetResponse Client::configWebIpSetWithOptions(const ConfigWebIpSetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBlackList()) {
    query["BlackList"] = request.blackList();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasWhiteList()) {
    query["WhiteList"] = request.whiteList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ConfigWebIpSet"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfigWebIpSetResponse>();
}

/**
 * @summary Configures the IP address whitelist and blacklist for a website.
 *
 * @param request ConfigWebIpSetRequest
 * @return ConfigWebIpSetResponse
 */
ConfigWebIpSetResponse Client::configWebIpSet(const ConfigWebIpSetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configWebIpSetWithOptions(request, runtime);
}

/**
 * @summary Creates an asynchronous export task to export forwarding rules for websites, port forwarding rules, session persistence and health check settings, DDoS mitigation policies, the IP address blacklist, or the IP address whitelist.
 *
 * @param request CreateAsyncTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAsyncTaskResponse
 */
CreateAsyncTaskResponse Client::createAsyncTaskWithOptions(const CreateAsyncTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTaskParams()) {
    query["TaskParams"] = request.taskParams();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.taskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAsyncTask"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAsyncTaskResponse>();
}

/**
 * @summary Creates an asynchronous export task to export forwarding rules for websites, port forwarding rules, session persistence and health check settings, DDoS mitigation policies, the IP address blacklist, or the IP address whitelist.
 *
 * @param request CreateAsyncTaskRequest
 * @return CreateAsyncTaskResponse
 */
CreateAsyncTaskResponse Client::createAsyncTask(const CreateAsyncTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAsyncTaskWithOptions(request, runtime);
}

/**
 * @summary Creates a forwarding rule for a website.
 *
 * @param request CreateDomainResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDomainResourceResponse
 */
CreateDomainResourceResponse Client::createDomainResourceWithOptions(const CreateDomainResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasHttpsExt()) {
    query["HttpsExt"] = request.httpsExt();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.instanceIds();
  }

  if (!!request.hasProxyTypes()) {
    query["ProxyTypes"] = request.proxyTypes();
  }

  if (!!request.hasRealServers()) {
    query["RealServers"] = request.realServers();
  }

  if (!!request.hasRsType()) {
    query["RsType"] = request.rsType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDomainResource"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDomainResourceResponse>();
}

/**
 * @summary Creates a forwarding rule for a website.
 *
 * @param request CreateDomainResourceRequest
 * @return CreateDomainResourceResponse
 */
CreateDomainResourceResponse Client::createDomainResource(const CreateDomainResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDomainResourceWithOptions(request, runtime);
}

/**
 * @summary Creates a port forwarding rule.
 *
 * @param request CreateNetworkRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateNetworkRulesResponse
 */
CreateNetworkRulesResponse Client::createNetworkRulesWithOptions(const CreateNetworkRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNetworkRules()) {
    query["NetworkRules"] = request.networkRules();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateNetworkRules"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateNetworkRulesResponse>();
}

/**
 * @summary Creates a port forwarding rule.
 *
 * @param request CreateNetworkRulesRequest
 * @return CreateNetworkRulesResponse
 */
CreateNetworkRulesResponse Client::createNetworkRules(const CreateNetworkRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createNetworkRulesWithOptions(request, runtime);
}

/**
 * @summary Creates a port forwarding rule.
 *
 * @description You can call this operation by using Terraform. For more information about Terraform, see [What is Terraform?](https://help.aliyun.com/document_detail/95820.html).
 *
 * @param request CreatePortRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePortResponse
 */
CreatePortResponse Client::createPortWithOptions(const CreatePortRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackendPort()) {
    query["BackendPort"] = request.backendPort();
  }

  if (!!request.hasFrontendPort()) {
    query["FrontendPort"] = request.frontendPort();
  }

  if (!!request.hasFrontendProtocol()) {
    query["FrontendProtocol"] = request.frontendProtocol();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasProxyEnable()) {
    query["ProxyEnable"] = request.proxyEnable();
  }

  if (!!request.hasRealServers()) {
    query["RealServers"] = request.realServers();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreatePort"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePortResponse>();
}

/**
 * @summary Creates a port forwarding rule.
 *
 * @description You can call this operation by using Terraform. For more information about Terraform, see [What is Terraform?](https://help.aliyun.com/document_detail/95820.html).
 *
 * @param request CreatePortRequest
 * @return CreatePortResponse
 */
CreatePortResponse Client::createPort(const CreatePortRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPortWithOptions(request, runtime);
}

/**
 * @summary Creates a scenario-specific custom policy.
 *
 * @param request CreateSceneDefensePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSceneDefensePolicyResponse
 */
CreateSceneDefensePolicyResponse Client::createSceneDefensePolicyWithOptions(const CreateSceneDefensePolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasTemplate()) {
    query["Template"] = request._template();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSceneDefensePolicy"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSceneDefensePolicyResponse>();
}

/**
 * @summary Creates a scenario-specific custom policy.
 *
 * @param request CreateSceneDefensePolicyRequest
 * @return CreateSceneDefensePolicyResponse
 */
CreateSceneDefensePolicyResponse Client::createSceneDefensePolicy(const CreateSceneDefensePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSceneDefensePolicyWithOptions(request, runtime);
}

/**
 * @summary Creates a scheduling rule for Sec-Traffic Manager.
 *
 * @param request CreateSchedulerRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSchedulerRuleResponse
 */
CreateSchedulerRuleResponse Client::createSchedulerRuleWithOptions(const CreateSchedulerRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasParam()) {
    query["Param"] = request.param();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  if (!!request.hasRuleType()) {
    query["RuleType"] = request.ruleType();
  }

  if (!!request.hasRules()) {
    query["Rules"] = request.rules();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSchedulerRule"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSchedulerRuleResponse>();
}

/**
 * @summary Creates a scheduling rule for Sec-Traffic Manager.
 *
 * @param request CreateSchedulerRuleRequest
 * @return CreateSchedulerRuleResponse
 */
CreateSchedulerRuleResponse Client::createSchedulerRule(const CreateSchedulerRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSchedulerRuleWithOptions(request, runtime);
}

/**
 * @summary Adds tags to multiple Anti-DDoS Proxy instances at a time.
 *
 * @description You can call the CreateTagResources operation to add tags to multiple Anti-DDoS Proxy instances at a time.
 * ### [](#qps-)Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request CreateTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTagResourcesResponse
 */
CreateTagResourcesResponse Client::createTagResourcesWithOptions(const CreateTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceIds()) {
    query["ResourceIds"] = request.resourceIds();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateTagResources"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTagResourcesResponse>();
}

/**
 * @summary Adds tags to multiple Anti-DDoS Proxy instances at a time.
 *
 * @description You can call the CreateTagResources operation to add tags to multiple Anti-DDoS Proxy instances at a time.
 * ### [](#qps-)Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request CreateTagResourcesRequest
 * @return CreateTagResourcesResponse
 */
CreateTagResourcesResponse Client::createTagResources(const CreateTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTagResourcesWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI CreateWebCCRule is deprecated, please use ddoscoo::2020-01-01::ConfigWebCCRuleV2 instead.
 *
 * @summary Creates a custom frequency control rule for a website.
 *
 * @param request CreateWebCCRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWebCCRuleResponse
 */
CreateWebCCRuleResponse Client::createWebCCRuleWithOptions(const CreateWebCCRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAct()) {
    query["Act"] = request.act();
  }

  if (!!request.hasCount()) {
    query["Count"] = request.count();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasMode()) {
    query["Mode"] = request.mode();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTtl()) {
    query["Ttl"] = request.ttl();
  }

  if (!!request.hasUri()) {
    query["Uri"] = request.uri();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateWebCCRule"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateWebCCRuleResponse>();
}

/**
 * @deprecated OpenAPI CreateWebCCRule is deprecated, please use ddoscoo::2020-01-01::ConfigWebCCRuleV2 instead.
 *
 * @summary Creates a custom frequency control rule for a website.
 *
 * @param request CreateWebCCRuleRequest
 * @return CreateWebCCRuleResponse
 */
CreateWebCCRuleResponse Client::createWebCCRule(const CreateWebCCRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createWebCCRuleWithOptions(request, runtime);
}

/**
 * @summary Creates a forwarding rule for a website.
 *
 * @param request CreateWebRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWebRuleResponse
 */
CreateWebRuleResponse Client::createWebRuleWithOptions(const CreateWebRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDefenseId()) {
    query["DefenseId"] = request.defenseId();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasHttpsExt()) {
    query["HttpsExt"] = request.httpsExt();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.instanceIds();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasRsType()) {
    query["RsType"] = request.rsType();
  }

  if (!!request.hasRules()) {
    query["Rules"] = request.rules();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateWebRule"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateWebRuleResponse>();
}

/**
 * @summary Creates a forwarding rule for a website.
 *
 * @param request CreateWebRuleRequest
 * @return CreateWebRuleResponse
 */
CreateWebRuleResponse Client::createWebRule(const CreateWebRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createWebRuleWithOptions(request, runtime);
}

/**
 * @summary Deletes an asynchronous export task.
 *
 * @param request DeleteAsyncTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAsyncTaskResponse
 */
DeleteAsyncTaskResponse Client::deleteAsyncTaskWithOptions(const DeleteAsyncTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAsyncTask"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAsyncTaskResponse>();
}

/**
 * @summary Deletes an asynchronous export task.
 *
 * @param request DeleteAsyncTaskRequest
 * @return DeleteAsyncTaskResponse
 */
DeleteAsyncTaskResponse Client::deleteAsyncTask(const DeleteAsyncTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAsyncTaskWithOptions(request, runtime);
}

/**
 * @summary Removes IP addresses from the IP address blacklist of an Anti-DDoS Pro or Anti-DDoS Premium instance.
 *
 * @param request DeleteAutoCcBlacklistRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAutoCcBlacklistResponse
 */
DeleteAutoCcBlacklistResponse Client::deleteAutoCcBlacklistWithOptions(const DeleteAutoCcBlacklistRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBlacklist()) {
    query["Blacklist"] = request.blacklist();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasQueryType()) {
    query["QueryType"] = request.queryType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAutoCcBlacklist"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAutoCcBlacklistResponse>();
}

/**
 * @summary Removes IP addresses from the IP address blacklist of an Anti-DDoS Pro or Anti-DDoS Premium instance.
 *
 * @param request DeleteAutoCcBlacklistRequest
 * @return DeleteAutoCcBlacklistResponse
 */
DeleteAutoCcBlacklistResponse Client::deleteAutoCcBlacklist(const DeleteAutoCcBlacklistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAutoCcBlacklistWithOptions(request, runtime);
}

/**
 * @summary Removes IP addresses from the IP address whitelist of an Anti-DDoS Proxy instance.
 *
 * @param request DeleteAutoCcWhitelistRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAutoCcWhitelistResponse
 */
DeleteAutoCcWhitelistResponse Client::deleteAutoCcWhitelistWithOptions(const DeleteAutoCcWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasWhitelist()) {
    query["Whitelist"] = request.whitelist();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAutoCcWhitelist"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAutoCcWhitelistResponse>();
}

/**
 * @summary Removes IP addresses from the IP address whitelist of an Anti-DDoS Proxy instance.
 *
 * @param request DeleteAutoCcWhitelistRequest
 * @return DeleteAutoCcWhitelistResponse
 */
DeleteAutoCcWhitelistResponse Client::deleteAutoCcWhitelist(const DeleteAutoCcWhitelistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAutoCcWhitelistWithOptions(request, runtime);
}

/**
 * @summary Deletes a specified forwarding rule of a website.
 *
 * @param request DeleteDomainResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDomainResourceResponse
 */
DeleteDomainResourceResponse Client::deleteDomainResourceWithOptions(const DeleteDomainResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDomainResource"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDomainResourceResponse>();
}

/**
 * @summary Deletes a specified forwarding rule of a website.
 *
 * @param request DeleteDomainResourceRequest
 * @return DeleteDomainResourceResponse
 */
DeleteDomainResourceResponse Client::deleteDomainResource(const DeleteDomainResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDomainResourceWithOptions(request, runtime);
}

/**
 * @summary Deletes a port forwarding rule. You can delete only one port forwarding rule at a time.
 *
 * @param request DeleteNetworkRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteNetworkRuleResponse
 */
DeleteNetworkRuleResponse Client::deleteNetworkRuleWithOptions(const DeleteNetworkRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNetworkRule()) {
    query["NetworkRule"] = request.networkRule();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteNetworkRule"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteNetworkRuleResponse>();
}

/**
 * @summary Deletes a port forwarding rule. You can delete only one port forwarding rule at a time.
 *
 * @param request DeleteNetworkRuleRequest
 * @return DeleteNetworkRuleResponse
 */
DeleteNetworkRuleResponse Client::deleteNetworkRule(const DeleteNetworkRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteNetworkRuleWithOptions(request, runtime);
}

/**
 * @summary Deletes the specified port forwarding rule.
 *
 * @description After you delete a port forwarding rule, the Anti-DDoS Pro or Anti-DDoS Premium instance no longer forwards service traffic on the Layer 4 port. Before you delete a specific port forwarding rule, make sure that the service traffic destined for the Layer 4 port is redirected to the origin server. This can prevent negative impacts on your services.
 * > You can call this operation by using Terraform. For more information about Terraform, see [What is Terraform?](https://help.aliyun.com/document_detail/95820.html).
 *
 * @param request DeletePortRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePortResponse
 */
DeletePortResponse Client::deletePortWithOptions(const DeletePortRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackendPort()) {
    query["BackendPort"] = request.backendPort();
  }

  if (!!request.hasFrontendPort()) {
    query["FrontendPort"] = request.frontendPort();
  }

  if (!!request.hasFrontendProtocol()) {
    query["FrontendProtocol"] = request.frontendProtocol();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRealServers()) {
    query["RealServers"] = request.realServers();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePort"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePortResponse>();
}

/**
 * @summary Deletes the specified port forwarding rule.
 *
 * @description After you delete a port forwarding rule, the Anti-DDoS Pro or Anti-DDoS Premium instance no longer forwards service traffic on the Layer 4 port. Before you delete a specific port forwarding rule, make sure that the service traffic destined for the Layer 4 port is redirected to the origin server. This can prevent negative impacts on your services.
 * > You can call this operation by using Terraform. For more information about Terraform, see [What is Terraform?](https://help.aliyun.com/document_detail/95820.html).
 *
 * @param request DeletePortRequest
 * @return DeletePortResponse
 */
DeletePortResponse Client::deletePort(const DeletePortRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePortWithOptions(request, runtime);
}

/**
 * @summary Deletes a scenario-specific custom policy.
 *
 * @param request DeleteSceneDefensePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSceneDefensePolicyResponse
 */
DeleteSceneDefensePolicyResponse Client::deleteSceneDefensePolicyWithOptions(const DeleteSceneDefensePolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.policyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSceneDefensePolicy"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSceneDefensePolicyResponse>();
}

/**
 * @summary Deletes a scenario-specific custom policy.
 *
 * @param request DeleteSceneDefensePolicyRequest
 * @return DeleteSceneDefensePolicyResponse
 */
DeleteSceneDefensePolicyResponse Client::deleteSceneDefensePolicy(const DeleteSceneDefensePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSceneDefensePolicyWithOptions(request, runtime);
}

/**
 * @summary Deletes a scheduling rule of Sec-Traffic Manager.
 *
 * @param request DeleteSchedulerRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSchedulerRuleResponse
 */
DeleteSchedulerRuleResponse Client::deleteSchedulerRuleWithOptions(const DeleteSchedulerRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSchedulerRule"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSchedulerRuleResponse>();
}

/**
 * @summary Deletes a scheduling rule of Sec-Traffic Manager.
 *
 * @param request DeleteSchedulerRuleRequest
 * @return DeleteSchedulerRuleResponse
 */
DeleteSchedulerRuleResponse Client::deleteSchedulerRule(const DeleteSchedulerRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSchedulerRuleWithOptions(request, runtime);
}

/**
 * @summary Removes tags from Anti-DDoS Proxy (Chinese Mainland) instances.
 *
 * @description You can call the DeleteTagResources operation to remove tags from Anti-DDoS Proxy (Chinese Mainland) instances.
 * >  Only Anti-DDoS Proxy (Chinese Mainland) supports tags.
 * ### [](#qps-)QPS limits
 * You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DeleteTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTagResourcesResponse
 */
DeleteTagResourcesResponse Client::deleteTagResourcesWithOptions(const DeleteTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAll()) {
    query["All"] = request.all();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceIds()) {
    query["ResourceIds"] = request.resourceIds();
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
    {"action" , "DeleteTagResources"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTagResourcesResponse>();
}

/**
 * @summary Removes tags from Anti-DDoS Proxy (Chinese Mainland) instances.
 *
 * @description You can call the DeleteTagResources operation to remove tags from Anti-DDoS Proxy (Chinese Mainland) instances.
 * >  Only Anti-DDoS Proxy (Chinese Mainland) supports tags.
 * ### [](#qps-)QPS limits
 * You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DeleteTagResourcesRequest
 * @return DeleteTagResourcesResponse
 */
DeleteTagResourcesResponse Client::deleteTagResources(const DeleteTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTagResourcesWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI DeleteWebCCRule is deprecated, please use ddoscoo::2020-01-01::DeleteWebCCRuleV2 instead.
 *
 * @summary Deletes a custom frequency control rule of a website.
 *
 * @param request DeleteWebCCRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWebCCRuleResponse
 */
DeleteWebCCRuleResponse Client::deleteWebCCRuleWithOptions(const DeleteWebCCRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteWebCCRule"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteWebCCRuleResponse>();
}

/**
 * @deprecated OpenAPI DeleteWebCCRule is deprecated, please use ddoscoo::2020-01-01::DeleteWebCCRuleV2 instead.
 *
 * @summary Deletes a custom frequency control rule of a website.
 *
 * @param request DeleteWebCCRuleRequest
 * @return DeleteWebCCRuleResponse
 */
DeleteWebCCRuleResponse Client::deleteWebCCRule(const DeleteWebCCRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteWebCCRuleWithOptions(request, runtime);
}

/**
 * @summary Deletes custom frequency control rules of a website.
 *
 * @param request DeleteWebCCRuleV2Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWebCCRuleV2Response
 */
DeleteWebCCRuleV2Response Client::deleteWebCCRuleV2WithOptions(const DeleteWebCCRuleV2Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasOwner()) {
    query["Owner"] = request.owner();
  }

  if (!!request.hasRuleNames()) {
    query["RuleNames"] = request.ruleNames();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteWebCCRuleV2"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteWebCCRuleV2Response>();
}

/**
 * @summary Deletes custom frequency control rules of a website.
 *
 * @param request DeleteWebCCRuleV2Request
 * @return DeleteWebCCRuleV2Response
 */
DeleteWebCCRuleV2Response Client::deleteWebCCRuleV2(const DeleteWebCCRuleV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteWebCCRuleV2WithOptions(request, runtime);
}

/**
 * @summary Deletes the custom rules of the Static Page Caching policy for a website.
 *
 * @description You can call the DeleteWebCacheCustomRule operation to delete the custom rules of the Static Page Caching policy for a website.
 * ### Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DeleteWebCacheCustomRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWebCacheCustomRuleResponse
 */
DeleteWebCacheCustomRuleResponse Client::deleteWebCacheCustomRuleWithOptions(const DeleteWebCacheCustomRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasRuleNames()) {
    query["RuleNames"] = request.ruleNames();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteWebCacheCustomRule"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteWebCacheCustomRuleResponse>();
}

/**
 * @summary Deletes the custom rules of the Static Page Caching policy for a website.
 *
 * @description You can call the DeleteWebCacheCustomRule operation to delete the custom rules of the Static Page Caching policy for a website.
 * ### Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DeleteWebCacheCustomRuleRequest
 * @return DeleteWebCacheCustomRuleResponse
 */
DeleteWebCacheCustomRuleResponse Client::deleteWebCacheCustomRule(const DeleteWebCacheCustomRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteWebCacheCustomRuleWithOptions(request, runtime);
}

/**
 * @summary Deletes the accurate access control rules that are created for a website.
 *
 * @param request DeleteWebPreciseAccessRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWebPreciseAccessRuleResponse
 */
DeleteWebPreciseAccessRuleResponse Client::deleteWebPreciseAccessRuleWithOptions(const DeleteWebPreciseAccessRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasRuleNames()) {
    query["RuleNames"] = request.ruleNames();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteWebPreciseAccessRule"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteWebPreciseAccessRuleResponse>();
}

/**
 * @summary Deletes the accurate access control rules that are created for a website.
 *
 * @param request DeleteWebPreciseAccessRuleRequest
 * @return DeleteWebPreciseAccessRuleResponse
 */
DeleteWebPreciseAccessRuleResponse Client::deleteWebPreciseAccessRule(const DeleteWebPreciseAccessRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteWebPreciseAccessRuleWithOptions(request, runtime);
}

/**
 * @summary Deletes a forwarding rule of a website.
 *
 * @param request DeleteWebRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWebRuleResponse
 */
DeleteWebRuleResponse Client::deleteWebRuleWithOptions(const DeleteWebRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteWebRule"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteWebRuleResponse>();
}

/**
 * @summary Deletes a forwarding rule of a website.
 *
 * @param request DeleteWebRuleRequest
 * @return DeleteWebRuleResponse
 */
DeleteWebRuleResponse Client::deleteWebRule(const DeleteWebRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteWebRuleWithOptions(request, runtime);
}

/**
 * @summary Queries the details of asynchronous export tasks, such as the IDs, start time, end time, status, parameters, and results.
 *
 * @description You can call the DescribeAsyncTasks operation to query the details of asynchronous export tasks, such as the IDs, start time, end time, status, parameters, and results.
 * ### Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeAsyncTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAsyncTasksResponse
 */
DescribeAsyncTasksResponse Client::describeAsyncTasksWithOptions(const DescribeAsyncTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAsyncTasks"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAsyncTasksResponse>();
}

/**
 * @summary Queries the details of asynchronous export tasks, such as the IDs, start time, end time, status, parameters, and results.
 *
 * @description You can call the DescribeAsyncTasks operation to query the details of asynchronous export tasks, such as the IDs, start time, end time, status, parameters, and results.
 * ### Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeAsyncTasksRequest
 * @return DescribeAsyncTasksResponse
 */
DescribeAsyncTasksResponse Client::describeAsyncTasks(const DescribeAsyncTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAsyncTasksWithOptions(request, runtime);
}

/**
 * @summary Queries the peak QPS of DDoS attacks within the specific period of time.
 *
 * @param request DescribeAttackAnalysisMaxQpsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAttackAnalysisMaxQpsResponse
 */
DescribeAttackAnalysisMaxQpsResponse Client::describeAttackAnalysisMaxQpsWithOptions(const DescribeAttackAnalysisMaxQpsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.ip();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAttackAnalysisMaxQps"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAttackAnalysisMaxQpsResponse>();
}

/**
 * @summary Queries the peak QPS of DDoS attacks within the specific period of time.
 *
 * @param request DescribeAttackAnalysisMaxQpsRequest
 * @return DescribeAttackAnalysisMaxQpsResponse
 */
DescribeAttackAnalysisMaxQpsResponse Client::describeAttackAnalysisMaxQps(const DescribeAttackAnalysisMaxQpsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAttackAnalysisMaxQpsWithOptions(request, runtime);
}

/**
 * @summary Queries IP addresses in the IP address blacklist of an Anti-DDoS Pro or Anti-DDoS Premium instance.
 *
 * @param request DescribeAutoCcBlacklistRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAutoCcBlacklistResponse
 */
DescribeAutoCcBlacklistResponse Client::describeAutoCcBlacklistWithOptions(const DescribeAutoCcBlacklistRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasKeyWord()) {
    query["KeyWord"] = request.keyWord();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasQueryType()) {
    query["QueryType"] = request.queryType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAutoCcBlacklist"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAutoCcBlacklistResponse>();
}

/**
 * @summary Queries IP addresses in the IP address blacklist of an Anti-DDoS Pro or Anti-DDoS Premium instance.
 *
 * @param request DescribeAutoCcBlacklistRequest
 * @return DescribeAutoCcBlacklistResponse
 */
DescribeAutoCcBlacklistResponse Client::describeAutoCcBlacklist(const DescribeAutoCcBlacklistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAutoCcBlacklistWithOptions(request, runtime);
}

/**
 * @summary Queries the numbers of IP addresses in the IP address whitelist and IP address blacklist of an Anti-DDoS Proxy instance.
 *
 * @param request DescribeAutoCcListCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAutoCcListCountResponse
 */
DescribeAutoCcListCountResponse Client::describeAutoCcListCountWithOptions(const DescribeAutoCcListCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasQueryType()) {
    query["QueryType"] = request.queryType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAutoCcListCount"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAutoCcListCountResponse>();
}

/**
 * @summary Queries the numbers of IP addresses in the IP address whitelist and IP address blacklist of an Anti-DDoS Proxy instance.
 *
 * @param request DescribeAutoCcListCountRequest
 * @return DescribeAutoCcListCountResponse
 */
DescribeAutoCcListCountResponse Client::describeAutoCcListCount(const DescribeAutoCcListCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAutoCcListCountWithOptions(request, runtime);
}

/**
 * @summary Queries IP addresses in the IP address whitelist of an Anti-DDoS Proxy instance.
 *
 * @param request DescribeAutoCcWhitelistRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAutoCcWhitelistResponse
 */
DescribeAutoCcWhitelistResponse Client::describeAutoCcWhitelistWithOptions(const DescribeAutoCcWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasKeyWord()) {
    query["KeyWord"] = request.keyWord();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAutoCcWhitelist"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAutoCcWhitelistResponse>();
}

/**
 * @summary Queries IP addresses in the IP address whitelist of an Anti-DDoS Proxy instance.
 *
 * @param request DescribeAutoCcWhitelistRequest
 * @return DescribeAutoCcWhitelistResponse
 */
DescribeAutoCcWhitelistResponse Client::describeAutoCcWhitelist(const DescribeAutoCcWhitelistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAutoCcWhitelistWithOptions(request, runtime);
}

/**
 * @summary Queries the back-to-origin CIDR blocks of Anti-DDoS Proxy.
 *
 * @param request DescribeBackSourceCidrRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBackSourceCidrResponse
 */
DescribeBackSourceCidrResponse Client::describeBackSourceCidrWithOptions(const DescribeBackSourceCidrRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIpVersion()) {
    query["IpVersion"] = request.ipVersion();
  }

  if (!!request.hasLine()) {
    query["Line"] = request.line();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBackSourceCidr"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBackSourceCidrResponse>();
}

/**
 * @summary Queries the back-to-origin CIDR blocks of Anti-DDoS Proxy.
 *
 * @param request DescribeBackSourceCidrRequest
 * @return DescribeBackSourceCidrResponse
 */
DescribeBackSourceCidrResponse Client::describeBackSourceCidr(const DescribeBackSourceCidrRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackSourceCidrWithOptions(request, runtime);
}

/**
 * @summary Queries the blackhole filtering status of one or more Anti-DDoS Pro or Anti-DDoS Premium instances.
 *
 * @param request DescribeBlackholeStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBlackholeStatusResponse
 */
DescribeBlackholeStatusResponse Client::describeBlackholeStatusWithOptions(const DescribeBlackholeStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.instanceIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBlackholeStatus"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBlackholeStatusResponse>();
}

/**
 * @summary Queries the blackhole filtering status of one or more Anti-DDoS Pro or Anti-DDoS Premium instances.
 *
 * @param request DescribeBlackholeStatusRequest
 * @return DescribeBlackholeStatusResponse
 */
DescribeBlackholeStatusResponse Client::describeBlackholeStatus(const DescribeBlackholeStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBlackholeStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the Diversion from Origin Server configurations of one or more Anti-DDoS Proxy (Chinese Mainland) instances.
 *
 * @description You can call this operation to query the Diversion from Origin Server configurations of one or more Anti-DDoS Proxy (Chinese Mainland) instances.
 * >  This operation is suitable only for Anti-DDoS Proxy (Chinese Mainland).
 * ### [](#qps-)QPS limits
 * You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeBlockStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBlockStatusResponse
 */
DescribeBlockStatusResponse Client::describeBlockStatusWithOptions(const DescribeBlockStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.instanceIds();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBlockStatus"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBlockStatusResponse>();
}

/**
 * @summary Queries the Diversion from Origin Server configurations of one or more Anti-DDoS Proxy (Chinese Mainland) instances.
 *
 * @description You can call this operation to query the Diversion from Origin Server configurations of one or more Anti-DDoS Proxy (Chinese Mainland) instances.
 * >  This operation is suitable only for Anti-DDoS Proxy (Chinese Mainland).
 * ### [](#qps-)QPS limits
 * You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeBlockStatusRequest
 * @return DescribeBlockStatusResponse
 */
DescribeBlockStatusResponse Client::describeBlockStatus(const DescribeBlockStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBlockStatusWithOptions(request, runtime);
}

/**
 * @param request DescribeCdnLinkageRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCdnLinkageRulesResponse
 */
DescribeCdnLinkageRulesResponse Client::describeCdnLinkageRulesWithOptions(const DescribeCdnLinkageRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCdnLinkageRules"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCdnLinkageRulesResponse>();
}

/**
 * @param request DescribeCdnLinkageRulesRequest
 * @return DescribeCdnLinkageRulesResponse
 */
DescribeCdnLinkageRulesResponse Client::describeCdnLinkageRules(const DescribeCdnLinkageRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCdnLinkageRulesWithOptions(request, runtime);
}

/**
 * @summary Queries information about all certificates that can be associated with the current domain name instead of the certificate currently in use.
 *
 * @description This operation is used to query all applicable certificates of a domain name that you want to add to Anti-DDoS Proxy. Multiple certificates may be queried for a domain name. You can use an exact domain name to query exact-domain certificates or wildcard-domain certificates.
 * >  If you want to query the certificate that is in use for the current domain name, you can call the [DescribeWebRules](https://help.aliyun.com/document_detail/473610.html) operation to obtain the values of the CertName and CertRegion parameters. Then, you can call the [ListUserCertificateOrder](https://help.aliyun.com/document_detail/411733.html) operation of Certificate Management Service to query the ID and other details of the certificate by using the value of the CertName parameter.
 *
 * @param request DescribeCertsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCertsResponse
 */
DescribeCertsResponse Client::describeCertsWithOptions(const DescribeCertsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCerts"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCertsResponse>();
}

/**
 * @summary Queries information about all certificates that can be associated with the current domain name instead of the certificate currently in use.
 *
 * @description This operation is used to query all applicable certificates of a domain name that you want to add to Anti-DDoS Proxy. Multiple certificates may be queried for a domain name. You can use an exact domain name to query exact-domain certificates or wildcard-domain certificates.
 * >  If you want to query the certificate that is in use for the current domain name, you can call the [DescribeWebRules](https://help.aliyun.com/document_detail/473610.html) operation to obtain the values of the CertName and CertRegion parameters. Then, you can call the [ListUserCertificateOrder](https://help.aliyun.com/document_detail/411733.html) operation of Certificate Management Service to query the ID and other details of the certificate by using the value of the CertName parameter.
 *
 * @param request DescribeCertsRequest
 * @return DescribeCertsResponse
 */
DescribeCertsResponse Client::describeCerts(const DescribeCertsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCertsWithOptions(request, runtime);
}

/**
 * @param request DescribeCnameReusesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCnameReusesResponse
 */
DescribeCnameReusesResponse Client::describeCnameReusesWithOptions(const DescribeCnameReusesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomains()) {
    query["Domains"] = request.domains();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCnameReuses"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCnameReusesResponse>();
}

/**
 * @param request DescribeCnameReusesRequest
 * @return DescribeCnameReusesResponse
 */
DescribeCnameReusesResponse Client::describeCnameReuses(const DescribeCnameReusesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCnameReusesWithOptions(request, runtime);
}

/**
 * @summary Queries the attack events launched against one or more Anti-DDoS Proxy instances.
 *
 * @param request DescribeDDoSEventsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDDoSEventsResponse
 */
DescribeDDoSEventsResponse Client::describeDDoSEventsWithOptions(const DescribeDDoSEventsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.instanceIds();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDDoSEvents"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDDoSEventsResponse>();
}

/**
 * @summary Queries the attack events launched against one or more Anti-DDoS Proxy instances.
 *
 * @param request DescribeDDoSEventsRequest
 * @return DescribeDDoSEventsResponse
 */
DescribeDDoSEventsResponse Client::describeDDoSEvents(const DescribeDDoSEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDDoSEventsWithOptions(request, runtime);
}

/**
 * @summary Queries DDoS attack events.
 *
 * @description You can call the DescribeDDosAllEventList operation to query DDoS attack events within a specific time range by page. The information about a DDoS attack event includes the start time and end time of the attack, attack event type, attacked object, peak bandwidth of attack traffic, and peak packet forwarding rate.
 * ### Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeDDosAllEventListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDDosAllEventListResponse
 */
DescribeDDosAllEventListResponse Client::describeDDosAllEventListWithOptions(const DescribeDDosAllEventListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasEventType()) {
    query["EventType"] = request.eventType();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.ip();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDDosAllEventList"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDDosAllEventListResponse>();
}

/**
 * @summary Queries DDoS attack events.
 *
 * @description You can call the DescribeDDosAllEventList operation to query DDoS attack events within a specific time range by page. The information about a DDoS attack event includes the start time and end time of the attack, attack event type, attacked object, peak bandwidth of attack traffic, and peak packet forwarding rate.
 * ### Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeDDosAllEventListRequest
 * @return DescribeDDosAllEventListResponse
 */
DescribeDDosAllEventListResponse Client::describeDDosAllEventList(const DescribeDDosAllEventListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDDosAllEventListWithOptions(request, runtime);
}

/**
 * @summary Queries the source region from which a volumetric attack is initiated.
 *
 * @description > This operation is suitable only for volumetric attacks.
 *
 * @param request DescribeDDosEventAreaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDDosEventAreaResponse
 */
DescribeDDosEventAreaResponse Client::describeDDosEventAreaWithOptions(const DescribeDDosEventAreaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEventType()) {
    query["EventType"] = request.eventType();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.ip();
  }

  if (!!request.hasRange()) {
    query["Range"] = request.range();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDDosEventArea"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDDosEventAreaResponse>();
}

/**
 * @summary Queries the source region from which a volumetric attack is initiated.
 *
 * @description > This operation is suitable only for volumetric attacks.
 *
 * @param request DescribeDDosEventAreaRequest
 * @return DescribeDDosEventAreaResponse
 */
DescribeDDosEventAreaResponse Client::describeDDosEventArea(const DescribeDDosEventAreaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDDosEventAreaWithOptions(request, runtime);
}

/**
 * @summary Queries the attack type details of a volumetric attack.
 *
 * @description > This operation is suitable only for volumetric attacks.
 *
 * @param request DescribeDDosEventAttackTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDDosEventAttackTypeResponse
 */
DescribeDDosEventAttackTypeResponse Client::describeDDosEventAttackTypeWithOptions(const DescribeDDosEventAttackTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEventType()) {
    query["EventType"] = request.eventType();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.ip();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDDosEventAttackType"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDDosEventAttackTypeResponse>();
}

/**
 * @summary Queries the attack type details of a volumetric attack.
 *
 * @description > This operation is suitable only for volumetric attacks.
 *
 * @param request DescribeDDosEventAttackTypeRequest
 * @return DescribeDDosEventAttackTypeResponse
 */
DescribeDDosEventAttackTypeResponse Client::describeDDosEventAttackType(const DescribeDDosEventAttackTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDDosEventAttackTypeWithOptions(request, runtime);
}

/**
 * @summary Queries the Internet service provider (ISP) information about a volumetric attack.
 *
 * @description > This operation is suitable only for volumetric attacks.
 *
 * @param request DescribeDDosEventIspRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDDosEventIspResponse
 */
DescribeDDosEventIspResponse Client::describeDDosEventIspWithOptions(const DescribeDDosEventIspRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEventType()) {
    query["EventType"] = request.eventType();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.ip();
  }

  if (!!request.hasRange()) {
    query["Range"] = request.range();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDDosEventIsp"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDDosEventIspResponse>();
}

/**
 * @summary Queries the Internet service provider (ISP) information about a volumetric attack.
 *
 * @description > This operation is suitable only for volumetric attacks.
 *
 * @param request DescribeDDosEventIspRequest
 * @return DescribeDDosEventIspResponse
 */
DescribeDDosEventIspResponse Client::describeDDosEventIsp(const DescribeDDosEventIspRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDDosEventIspWithOptions(request, runtime);
}

/**
 * @summary Queries the peaks of volumetric attacks (bit/s), connection flood attacks (CPS), and resource exhaustion attacks on websites (QPS).
 *
 * @param request DescribeDDosEventMaxRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDDosEventMaxResponse
 */
DescribeDDosEventMaxResponse Client::describeDDosEventMaxWithOptions(const DescribeDDosEventMaxRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.ip();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDDosEventMax"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDDosEventMaxResponse>();
}

/**
 * @summary Queries the peaks of volumetric attacks (bit/s), connection flood attacks (CPS), and resource exhaustion attacks on websites (QPS).
 *
 * @param request DescribeDDosEventMaxRequest
 * @return DescribeDDosEventMaxResponse
 */
DescribeDDosEventMaxResponse Client::describeDDosEventMax(const DescribeDDosEventMaxRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDDosEventMaxWithOptions(request, runtime);
}

/**
 * @summary Queries the source IP address from which a volumetric attack is initiated.
 *
 * @description > This operation is suitable only for volumetric attacks.
 *
 * @param request DescribeDDosEventSrcIpRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDDosEventSrcIpResponse
 */
DescribeDDosEventSrcIpResponse Client::describeDDosEventSrcIpWithOptions(const DescribeDDosEventSrcIpRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEventType()) {
    query["EventType"] = request.eventType();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.ip();
  }

  if (!!request.hasRange()) {
    query["Range"] = request.range();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDDosEventSrcIp"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDDosEventSrcIpResponse>();
}

/**
 * @summary Queries the source IP address from which a volumetric attack is initiated.
 *
 * @description > This operation is suitable only for volumetric attacks.
 *
 * @param request DescribeDDosEventSrcIpRequest
 * @return DescribeDDosEventSrcIpResponse
 */
DescribeDDosEventSrcIpResponse Client::describeDDosEventSrcIp(const DescribeDDosEventSrcIpRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDDosEventSrcIpWithOptions(request, runtime);
}

/**
 * @summary Queries the statistics on advanced mitigation sessions of an Anti-DDoS Proxy (Outside Chinese Mainland) instance.
 *
 * @description You can call the DescribeDefenseCountStatistics operation to query the information about advanced mitigation sessions of an Anti-DDoS Proxy (Outside Chinese Mainland) instance. For example, you can query the number of advanced mitigation sessions that are used within the current calendar month and the number of remaining advanced mitigation sessions.
 * >  This operation is suitable only for Anti-DDoS Proxy (Outside Chinese Mainland).
 * ### [](#qps-)QPS limits
 * You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeDefenseCountStatisticsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDefenseCountStatisticsResponse
 */
DescribeDefenseCountStatisticsResponse Client::describeDefenseCountStatisticsWithOptions(const DescribeDefenseCountStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDefenseCountStatistics"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDefenseCountStatisticsResponse>();
}

/**
 * @summary Queries the statistics on advanced mitigation sessions of an Anti-DDoS Proxy (Outside Chinese Mainland) instance.
 *
 * @description You can call the DescribeDefenseCountStatistics operation to query the information about advanced mitigation sessions of an Anti-DDoS Proxy (Outside Chinese Mainland) instance. For example, you can query the number of advanced mitigation sessions that are used within the current calendar month and the number of remaining advanced mitigation sessions.
 * >  This operation is suitable only for Anti-DDoS Proxy (Outside Chinese Mainland).
 * ### [](#qps-)QPS limits
 * You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeDefenseCountStatisticsRequest
 * @return DescribeDefenseCountStatisticsResponse
 */
DescribeDefenseCountStatisticsResponse Client::describeDefenseCountStatistics(const DescribeDefenseCountStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDefenseCountStatisticsWithOptions(request, runtime);
}

/**
 * @summary Queries the advanced mitigation logs of an Anti-DDoS Proxy (Outside Chinese Mainland) instance.
 *
 * @description > This operation is suitable only for Anti-DDoS Premium.
 *
 * @param request DescribeDefenseRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDefenseRecordsResponse
 */
DescribeDefenseRecordsResponse Client::describeDefenseRecordsWithOptions(const DescribeDefenseRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDefenseRecords"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDefenseRecordsResponse>();
}

/**
 * @summary Queries the advanced mitigation logs of an Anti-DDoS Proxy (Outside Chinese Mainland) instance.
 *
 * @description > This operation is suitable only for Anti-DDoS Premium.
 *
 * @param request DescribeDefenseRecordsRequest
 * @return DescribeDefenseRecordsResponse
 */
DescribeDefenseRecordsResponse Client::describeDefenseRecords(const DescribeDefenseRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDefenseRecordsWithOptions(request, runtime);
}

/**
 * @summary Queries the number of request packets received by the destination ports of the attacked IP address that is protected by Anti-DDoS Proxy.
 *
 * @param request DescribeDestinationPortEventRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDestinationPortEventResponse
 */
DescribeDestinationPortEventResponse Client::describeDestinationPortEventWithOptions(const DescribeDestinationPortEventRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEventType()) {
    query["EventType"] = request.eventType();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.ip();
  }

  if (!!request.hasRange()) {
    query["Range"] = request.range();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.region();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDestinationPortEvent"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDestinationPortEventResponse>();
}

/**
 * @summary Queries the number of request packets received by the destination ports of the attacked IP address that is protected by Anti-DDoS Proxy.
 *
 * @param request DescribeDestinationPortEventRequest
 * @return DescribeDestinationPortEventResponse
 */
DescribeDestinationPortEventResponse Client::describeDestinationPortEvent(const DescribeDestinationPortEventRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDestinationPortEventWithOptions(request, runtime);
}

/**
 * @summary Queries the attack events launched against a website.
 *
 * @param request DescribeDomainAttackEventsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainAttackEventsResponse
 */
DescribeDomainAttackEventsResponse Client::describeDomainAttackEventsWithOptions(const DescribeDomainAttackEventsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainAttackEvents"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainAttackEventsResponse>();
}

/**
 * @summary Queries the attack events launched against a website.
 *
 * @param request DescribeDomainAttackEventsRequest
 * @return DescribeDomainAttackEventsResponse
 */
DescribeDomainAttackEventsResponse Client::describeDomainAttackEvents(const DescribeDomainAttackEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainAttackEventsWithOptions(request, runtime);
}

/**
 * @summary Queries the bandwidths of a website.
 *
 * @param request DescribeDomainBpsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainBpsResponse
 */
DescribeDomainBpsResponse Client::describeDomainBpsWithOptions(const DescribeDomainBpsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.region();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainBps"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainBpsResponse>();
}

/**
 * @summary Queries the bandwidths of a website.
 *
 * @param request DescribeDomainBpsRequest
 * @return DescribeDomainBpsResponse
 */
DescribeDomainBpsResponse Client::describeDomainBps(const DescribeDomainBpsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainBpsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about HTTP/2 fingerprints of a website.
 *
 * @param request DescribeDomainH2FingerprintRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainH2FingerprintResponse
 */
DescribeDomainH2FingerprintResponse Client::describeDomainH2FingerprintWithOptions(const DescribeDomainH2FingerprintRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.limit();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainH2Fingerprint"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainH2FingerprintResponse>();
}

/**
 * @summary Queries the information about HTTP/2 fingerprints of a website.
 *
 * @param request DescribeDomainH2FingerprintRequest
 * @return DescribeDomainH2FingerprintResponse
 */
DescribeDomainH2FingerprintResponse Client::describeDomainH2Fingerprint(const DescribeDomainH2FingerprintRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainH2FingerprintWithOptions(request, runtime);
}

/**
 * @summary Queries the attack overview of a website, such as the peak HTTP and HTTPS traffic.
 *
 * @param request DescribeDomainOverviewRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainOverviewResponse
 */
DescribeDomainOverviewResponse Client::describeDomainOverviewWithOptions(const DescribeDomainOverviewRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainOverview"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainOverviewResponse>();
}

/**
 * @summary Queries the attack overview of a website, such as the peak HTTP and HTTPS traffic.
 *
 * @param request DescribeDomainOverviewRequest
 * @return DescribeDomainOverviewResponse
 */
DescribeDomainOverviewResponse Client::describeDomainOverview(const DescribeDomainOverviewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainOverviewWithOptions(request, runtime);
}

/**
 * @summary Queries the statistics on the queries per second (QPS) of a website.
 *
 * @param request DescribeDomainQPSListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainQPSListResponse
 */
DescribeDomainQPSListResponse Client::describeDomainQPSListWithOptions(const DescribeDomainQPSListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainQPSList"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainQPSListResponse>();
}

/**
 * @summary Queries the statistics on the queries per second (QPS) of a website.
 *
 * @param request DescribeDomainQPSListRequest
 * @return DescribeDomainQPSListResponse
 */
DescribeDomainQPSListResponse Client::describeDomainQPSList(const DescribeDomainQPSListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainQPSListWithOptions(request, runtime);
}

/**
 * @summary Queries the configurations of a forwarding rule.
 *
 * @description You can call the DescribeDomainResource operation to query the configurations of the forwarding rules that you create for a website by page. The configurations include the domain name-related configurations, protocol-related configurations, HTTPS-related configurations, and configurations that are used to mitigate HTTP flood attacks.
 * You can call this operation by using Terraform. For more information about Terraform, see [What is Terraform?](https://help.aliyun.com/document_detail/95820.html).
 * ### Limits
 * You can call this operation up to 50 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeDomainResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainResourceResponse
 */
DescribeDomainResourceResponse Client::describeDomainResourceWithOptions(const DescribeDomainResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.instanceIds();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasQueryDomainPattern()) {
    query["QueryDomainPattern"] = request.queryDomainPattern();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainResource"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainResourceResponse>();
}

/**
 * @summary Queries the configurations of a forwarding rule.
 *
 * @description You can call the DescribeDomainResource operation to query the configurations of the forwarding rules that you create for a website by page. The configurations include the domain name-related configurations, protocol-related configurations, HTTPS-related configurations, and configurations that are used to mitigate HTTP flood attacks.
 * You can call this operation by using Terraform. For more information about Terraform, see [What is Terraform?](https://help.aliyun.com/document_detail/95820.html).
 * ### Limits
 * You can call this operation up to 50 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeDomainResourceRequest
 * @return DescribeDomainResourceResponse
 */
DescribeDomainResourceResponse Client::describeDomainResource(const DescribeDomainResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainResourceWithOptions(request, runtime);
}

/**
 * @summary Queries the global mitigation policy for a domain name.
 *
 * @param request DescribeDomainSecurityProfileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainSecurityProfileResponse
 */
DescribeDomainSecurityProfileResponse Client::describeDomainSecurityProfileWithOptions(const DescribeDomainSecurityProfileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainSecurityProfile"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainSecurityProfileResponse>();
}

/**
 * @summary Queries the global mitigation policy for a domain name.
 *
 * @param request DescribeDomainSecurityProfileRequest
 * @return DescribeDomainSecurityProfileResponse
 */
DescribeDomainSecurityProfileResponse Client::describeDomainSecurityProfile(const DescribeDomainSecurityProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainSecurityProfileWithOptions(request, runtime);
}

/**
 * @summary Queries the statistics on HTTP status codes of a website within a specified period of time.
 *
 * @param request DescribeDomainStatusCodeCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainStatusCodeCountResponse
 */
DescribeDomainStatusCodeCountResponse Client::describeDomainStatusCodeCountWithOptions(const DescribeDomainStatusCodeCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainStatusCodeCount"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainStatusCodeCountResponse>();
}

/**
 * @summary Queries the statistics on HTTP status codes of a website within a specified period of time.
 *
 * @param request DescribeDomainStatusCodeCountRequest
 * @return DescribeDomainStatusCodeCountResponse
 */
DescribeDomainStatusCodeCountResponse Client::describeDomainStatusCodeCount(const DescribeDomainStatusCodeCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainStatusCodeCountWithOptions(request, runtime);
}

/**
 * @summary Queries the statistics on HTTP status codes of a website.
 *
 * @param request DescribeDomainStatusCodeListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainStatusCodeListResponse
 */
DescribeDomainStatusCodeListResponse Client::describeDomainStatusCodeListWithOptions(const DescribeDomainStatusCodeListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasQueryType()) {
    query["QueryType"] = request.queryType();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainStatusCodeList"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainStatusCodeListResponse>();
}

/**
 * @summary Queries the statistics on HTTP status codes of a website.
 *
 * @param request DescribeDomainStatusCodeListRequest
 * @return DescribeDomainStatusCodeListResponse
 */
DescribeDomainStatusCodeListResponse Client::describeDomainStatusCodeList(const DescribeDomainStatusCodeListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainStatusCodeListWithOptions(request, runtime);
}

/**
 * @summary Queries the peak queries per second (QPS) information about a website, such as the attack QPS and total QPS, within a specific period of time.
 *
 * @param request DescribeDomainTopAttackListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainTopAttackListResponse
 */
DescribeDomainTopAttackListResponse Client::describeDomainTopAttackListWithOptions(const DescribeDomainTopAttackListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainTopAttackList"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainTopAttackListResponse>();
}

/**
 * @summary Queries the peak queries per second (QPS) information about a website, such as the attack QPS and total QPS, within a specific period of time.
 *
 * @param request DescribeDomainTopAttackListRequest
 * @return DescribeDomainTopAttackListResponse
 */
DescribeDomainTopAttackListResponse Client::describeDomainTopAttackList(const DescribeDomainTopAttackListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainTopAttackListWithOptions(request, runtime);
}

/**
 * @summary Queries the information about the fingerprints of top N clients that access a website.
 *
 * @param request DescribeDomainTopFingerprintRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainTopFingerprintResponse
 */
DescribeDomainTopFingerprintResponse Client::describeDomainTopFingerprintWithOptions(const DescribeDomainTopFingerprintRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.limit();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.region();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainTopFingerprint"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainTopFingerprintResponse>();
}

/**
 * @summary Queries the information about the fingerprints of top N clients that access a website.
 *
 * @param request DescribeDomainTopFingerprintRequest
 * @return DescribeDomainTopFingerprintResponse
 */
DescribeDomainTopFingerprintResponse Client::describeDomainTopFingerprint(const DescribeDomainTopFingerprintRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainTopFingerprintWithOptions(request, runtime);
}

/**
 * @summary Queries the information about top N HTTP methods of a website.
 *
 * @param request DescribeDomainTopHttpMethodRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainTopHttpMethodResponse
 */
DescribeDomainTopHttpMethodResponse Client::describeDomainTopHttpMethodWithOptions(const DescribeDomainTopHttpMethodRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.limit();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.region();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainTopHttpMethod"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainTopHttpMethodResponse>();
}

/**
 * @summary Queries the information about top N HTTP methods of a website.
 *
 * @param request DescribeDomainTopHttpMethodRequest
 * @return DescribeDomainTopHttpMethodResponse
 */
DescribeDomainTopHttpMethodResponse Client::describeDomainTopHttpMethod(const DescribeDomainTopHttpMethodRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainTopHttpMethodWithOptions(request, runtime);
}

/**
 * @summary Queries the information about top N referers of a website.
 *
 * @param request DescribeDomainTopRefererRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainTopRefererResponse
 */
DescribeDomainTopRefererResponse Client::describeDomainTopRefererWithOptions(const DescribeDomainTopRefererRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.limit();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.region();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainTopReferer"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainTopRefererResponse>();
}

/**
 * @summary Queries the information about top N referers of a website.
 *
 * @param request DescribeDomainTopRefererRequest
 * @return DescribeDomainTopRefererResponse
 */
DescribeDomainTopRefererResponse Client::describeDomainTopReferer(const DescribeDomainTopRefererRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainTopRefererWithOptions(request, runtime);
}

/**
 * @summary Queries the information about top user agents of a website.
 *
 * @param request DescribeDomainTopUserAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainTopUserAgentResponse
 */
DescribeDomainTopUserAgentResponse Client::describeDomainTopUserAgentWithOptions(const DescribeDomainTopUserAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.limit();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.region();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainTopUserAgent"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainTopUserAgentResponse>();
}

/**
 * @summary Queries the information about top user agents of a website.
 *
 * @param request DescribeDomainTopUserAgentRequest
 * @return DescribeDomainTopUserAgentResponse
 */
DescribeDomainTopUserAgentResponse Client::describeDomainTopUserAgent(const DescribeDomainTopUserAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainTopUserAgentWithOptions(request, runtime);
}

/**
 * @summary Queries the areas and countries from which requests are sent to a website within a specified period of time.
 *
 * @param request DescribeDomainViewSourceCountriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainViewSourceCountriesResponse
 */
DescribeDomainViewSourceCountriesResponse Client::describeDomainViewSourceCountriesWithOptions(const DescribeDomainViewSourceCountriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainViewSourceCountries"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainViewSourceCountriesResponse>();
}

/**
 * @summary Queries the areas and countries from which requests are sent to a website within a specified period of time.
 *
 * @param request DescribeDomainViewSourceCountriesRequest
 * @return DescribeDomainViewSourceCountriesResponse
 */
DescribeDomainViewSourceCountriesResponse Client::describeDomainViewSourceCountries(const DescribeDomainViewSourceCountriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainViewSourceCountriesWithOptions(request, runtime);
}

/**
 * @summary Queries the administrative regions in China from which requests are sent to a website within a specified period of time.
 *
 * @param request DescribeDomainViewSourceProvincesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainViewSourceProvincesResponse
 */
DescribeDomainViewSourceProvincesResponse Client::describeDomainViewSourceProvincesWithOptions(const DescribeDomainViewSourceProvincesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainViewSourceProvinces"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainViewSourceProvincesResponse>();
}

/**
 * @summary Queries the administrative regions in China from which requests are sent to a website within a specified period of time.
 *
 * @param request DescribeDomainViewSourceProvincesRequest
 * @return DescribeDomainViewSourceProvincesResponse
 */
DescribeDomainViewSourceProvincesResponse Client::describeDomainViewSourceProvinces(const DescribeDomainViewSourceProvincesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainViewSourceProvincesWithOptions(request, runtime);
}

/**
 * @summary Queries the top N URLs that require the longest time to respond to requests within a specified period of time.
 *
 * @param request DescribeDomainViewTopCostTimeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainViewTopCostTimeResponse
 */
DescribeDomainViewTopCostTimeResponse Client::describeDomainViewTopCostTimeWithOptions(const DescribeDomainViewTopCostTimeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasTop()) {
    query["Top"] = request.top();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainViewTopCostTime"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainViewTopCostTimeResponse>();
}

/**
 * @summary Queries the top N URLs that require the longest time to respond to requests within a specified period of time.
 *
 * @param request DescribeDomainViewTopCostTimeRequest
 * @return DescribeDomainViewTopCostTimeResponse
 */
DescribeDomainViewTopCostTimeResponse Client::describeDomainViewTopCostTime(const DescribeDomainViewTopCostTimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainViewTopCostTimeWithOptions(request, runtime);
}

/**
 * @summary Queries the top N URLs that receive the most requests within a specified period of time.
 *
 * @param request DescribeDomainViewTopUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainViewTopUrlResponse
 */
DescribeDomainViewTopUrlResponse Client::describeDomainViewTopUrlWithOptions(const DescribeDomainViewTopUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInerval()) {
    query["Inerval"] = request.inerval();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasTop()) {
    query["Top"] = request.top();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainViewTopUrl"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainViewTopUrlResponse>();
}

/**
 * @summary Queries the top N URLs that receive the most requests within a specified period of time.
 *
 * @param request DescribeDomainViewTopUrlRequest
 * @return DescribeDomainViewTopUrlResponse
 */
DescribeDomainViewTopUrlResponse Client::describeDomainViewTopUrl(const DescribeDomainViewTopUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainViewTopUrlWithOptions(request, runtime);
}

/**
 * @summary Queries domain names for which forwarding rules are created.
 *
 * @param request DescribeDomainsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainsResponse
 */
DescribeDomainsResponse Client::describeDomainsWithOptions(const DescribeDomainsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.instanceIds();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomains"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainsResponse>();
}

/**
 * @summary Queries domain names for which forwarding rules are created.
 *
 * @param request DescribeDomainsRequest
 * @return DescribeDomainsResponse
 */
DescribeDomainsResponse Client::describeDomains(const DescribeDomainsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainsWithOptions(request, runtime);
}

/**
 * @summary Queries the available burstable protection bandwidths of an Anti-DDoS Proxy (Chinese Mainland) instance.
 *
 * @description >  This operation is suitable only for Anti-DDoS Proxy (Chinese Mainland).
 *
 * @param request DescribeElasticBandwidthSpecRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeElasticBandwidthSpecResponse
 */
DescribeElasticBandwidthSpecResponse Client::describeElasticBandwidthSpecWithOptions(const DescribeElasticBandwidthSpecRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeElasticBandwidthSpec"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeElasticBandwidthSpecResponse>();
}

/**
 * @summary Queries the available burstable protection bandwidths of an Anti-DDoS Proxy (Chinese Mainland) instance.
 *
 * @description >  This operation is suitable only for Anti-DDoS Proxy (Chinese Mainland).
 *
 * @param request DescribeElasticBandwidthSpecRequest
 * @return DescribeElasticBandwidthSpecResponse
 */
DescribeElasticBandwidthSpecResponse Client::describeElasticBandwidthSpec(const DescribeElasticBandwidthSpecRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeElasticBandwidthSpecWithOptions(request, runtime);
}

/**
 * @summary Queries the line chart of the bills for the burstable QPS of an Anti-DDoS Proxy instance.
 *
 * @param request DescribeElasticQpsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeElasticQpsResponse
 */
DescribeElasticQpsResponse Client::describeElasticQpsWithOptions(const DescribeElasticQpsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.ip();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.region();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeElasticQps"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeElasticQpsResponse>();
}

/**
 * @summary Queries the line chart of the bills for the burstable QPS of an Anti-DDoS Proxy instance.
 *
 * @param request DescribeElasticQpsRequest
 * @return DescribeElasticQpsResponse
 */
DescribeElasticQpsResponse Client::describeElasticQps(const DescribeElasticQpsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeElasticQpsWithOptions(request, runtime);
}

/**
 * @summary Queries the burstable QPS details of an Anti-DDoS Proxy instance.
 *
 * @param request DescribeElasticQpsRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeElasticQpsRecordResponse
 */
DescribeElasticQpsRecordResponse Client::describeElasticQpsRecordWithOptions(const DescribeElasticQpsRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.ip();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeElasticQpsRecord"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeElasticQpsRecordResponse>();
}

/**
 * @summary Queries the burstable QPS details of an Anti-DDoS Proxy instance.
 *
 * @param request DescribeElasticQpsRecordRequest
 * @return DescribeElasticQpsRecordResponse
 */
DescribeElasticQpsRecordResponse Client::describeElasticQpsRecord(const DescribeElasticQpsRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeElasticQpsRecordWithOptions(request, runtime);
}

/**
 * @summary Queries the custom header that is specified for a domain name.
 *
 * @param request DescribeHeadersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHeadersResponse
 */
DescribeHeadersResponse Client::describeHeadersWithOptions(const DescribeHeadersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHeaders"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHeadersResponse>();
}

/**
 * @summary Queries the custom header that is specified for a domain name.
 *
 * @param request DescribeHeadersRequest
 * @return DescribeHeadersResponse
 */
DescribeHeadersResponse Client::describeHeaders(const DescribeHeadersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHeadersWithOptions(request, runtime);
}

/**
 * @summary Queries the Layer 4 or Layer 7 health check configurations of a port forwarding rule.
 *
 * @param request DescribeHealthCheckListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHealthCheckListResponse
 */
DescribeHealthCheckListResponse Client::describeHealthCheckListWithOptions(const DescribeHealthCheckListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNetworkRules()) {
    query["NetworkRules"] = request.networkRules();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHealthCheckList"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHealthCheckListResponse>();
}

/**
 * @summary Queries the Layer 4 or Layer 7 health check configurations of a port forwarding rule.
 *
 * @param request DescribeHealthCheckListRequest
 * @return DescribeHealthCheckListResponse
 */
DescribeHealthCheckListResponse Client::describeHealthCheckList(const DescribeHealthCheckListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHealthCheckListWithOptions(request, runtime);
}

/**
 * @summary Queries the health status of an origin server.
 *
 * @param request DescribeHealthCheckStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHealthCheckStatusResponse
 */
DescribeHealthCheckStatusResponse Client::describeHealthCheckStatusWithOptions(const DescribeHealthCheckStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNetworkRules()) {
    query["NetworkRules"] = request.networkRules();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHealthCheckStatus"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHealthCheckStatusResponse>();
}

/**
 * @summary Queries the health status of an origin server.
 *
 * @param request DescribeHealthCheckStatusRequest
 * @return DescribeHealthCheckStatusResponse
 */
DescribeHealthCheckStatusResponse Client::describeHealthCheckStatus(const DescribeHealthCheckStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHealthCheckStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the IP addresses and Internet service provider (ISP) lines of Anti-DDoS Pro or Anti-DDoS Premium instances.
 *
 * @description You can call the DescribeInstanceDetails operation to query the information about the IP addresses and ISP lines of the instances. The information includes the IP address, status, and protection line.
 * ### Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeInstanceDetailsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceDetailsResponse
 */
DescribeInstanceDetailsResponse Client::describeInstanceDetailsWithOptions(const DescribeInstanceDetailsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.instanceIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceDetails"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceDetailsResponse>();
}

/**
 * @summary Queries the IP addresses and Internet service provider (ISP) lines of Anti-DDoS Pro or Anti-DDoS Premium instances.
 *
 * @description You can call the DescribeInstanceDetails operation to query the information about the IP addresses and ISP lines of the instances. The information includes the IP address, status, and protection line.
 * ### Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeInstanceDetailsRequest
 * @return DescribeInstanceDetailsResponse
 */
DescribeInstanceDetailsResponse Client::describeInstanceDetails(const DescribeInstanceDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceDetailsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about Anti-DDoS Pro and Anti-DDoS Premium instances.
 *
 * @param request DescribeInstanceExtRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceExtResponse
 */
DescribeInstanceExtResponse Client::describeInstanceExtWithOptions(const DescribeInstanceExtRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceExt"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceExtResponse>();
}

/**
 * @summary Queries the information about Anti-DDoS Pro and Anti-DDoS Premium instances.
 *
 * @param request DescribeInstanceExtRequest
 * @return DescribeInstanceExtResponse
 */
DescribeInstanceExtResponse Client::describeInstanceExt(const DescribeInstanceExtRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceExtWithOptions(request, runtime);
}

/**
 * @summary The description of the instance.
 *
 * @param request DescribeInstanceIdsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceIdsResponse
 */
DescribeInstanceIdsResponse Client::describeInstanceIdsWithOptions(const DescribeInstanceIdsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEdition()) {
    query["Edition"] = request.edition();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.instanceIds();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceIds"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceIdsResponse>();
}

/**
 * @summary The description of the instance.
 *
 * @param request DescribeInstanceIdsRequest
 * @return DescribeInstanceIdsResponse
 */
DescribeInstanceIdsResponse Client::describeInstanceIds(const DescribeInstanceIdsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceIdsWithOptions(request, runtime);
}

/**
 * @summary Queries the specifications of Anti-DDoS Pro or Anti-DDoS Premium instances.
 *
 * @description You can call the DescribeInstanceSpecs operation to query the specifications of multiple Anti-DDoS Pro or Anti-DDoS Premium instances at a time. The specifications include the clean bandwidth, protection bandwidth, function plan, and the numbers of domain names and ports that can be protected.
 * ### Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeInstanceSpecsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceSpecsResponse
 */
DescribeInstanceSpecsResponse Client::describeInstanceSpecsWithOptions(const DescribeInstanceSpecsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.instanceIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceSpecs"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceSpecsResponse>();
}

/**
 * @summary Queries the specifications of Anti-DDoS Pro or Anti-DDoS Premium instances.
 *
 * @description You can call the DescribeInstanceSpecs operation to query the specifications of multiple Anti-DDoS Pro or Anti-DDoS Premium instances at a time. The specifications include the clean bandwidth, protection bandwidth, function plan, and the numbers of domain names and ports that can be protected.
 * ### Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeInstanceSpecsRequest
 * @return DescribeInstanceSpecsResponse
 */
DescribeInstanceSpecsResponse Client::describeInstanceSpecs(const DescribeInstanceSpecsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceSpecsWithOptions(request, runtime);
}

/**
 * @summary Queries the statistics on one or more Anti-DDoS Proxy instances, such as the numbers of protected domain names and ports.
 *
 * @param request DescribeInstanceStatisticsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceStatisticsResponse
 */
DescribeInstanceStatisticsResponse Client::describeInstanceStatisticsWithOptions(const DescribeInstanceStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.instanceIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceStatistics"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceStatisticsResponse>();
}

/**
 * @summary Queries the statistics on one or more Anti-DDoS Proxy instances, such as the numbers of protected domain names and ports.
 *
 * @param request DescribeInstanceStatisticsRequest
 * @return DescribeInstanceStatisticsResponse
 */
DescribeInstanceStatisticsResponse Client::describeInstanceStatistics(const DescribeInstanceStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceStatisticsWithOptions(request, runtime);
}

/**
 * @summary Queries the status of a specified Anti-DDoS Proxy instance.
 *
 * @param request DescribeInstanceStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceStatusResponse
 */
DescribeInstanceStatusResponse Client::describeInstanceStatusWithOptions(const DescribeInstanceStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.productType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceStatus"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceStatusResponse>();
}

/**
 * @summary Queries the status of a specified Anti-DDoS Proxy instance.
 *
 * @param request DescribeInstanceStatusRequest
 * @return DescribeInstanceStatusResponse
 */
DescribeInstanceStatusResponse Client::describeInstanceStatus(const DescribeInstanceStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceStatusWithOptions(request, runtime);
}

/**
 * @summary 查询实例列表
 *
 * @description You can call the DescribeInstances operation to query the details of Anti-DDoS Pro or Anti-DDoS Premium instances within the Alibaba Cloud account by page. The details include the ID, mitigation plan, expiration time, and forwarding status.
 *
 * @param request DescribeInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstancesResponse
 */
DescribeInstancesResponse Client::describeInstancesWithOptions(const DescribeInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEdition()) {
    query["Edition"] = request.edition();
  }

  if (!!request.hasEnabled()) {
    query["Enabled"] = request.enabled();
  }

  if (!!request.hasExpireEndTime()) {
    query["ExpireEndTime"] = request.expireEndTime();
  }

  if (!!request.hasExpireStartTime()) {
    query["ExpireStartTime"] = request.expireStartTime();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.instanceIds();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.ip();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.remark();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstances"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstancesResponse>();
}

/**
 * @summary 查询实例列表
 *
 * @description You can call the DescribeInstances operation to query the details of Anti-DDoS Pro or Anti-DDoS Premium instances within the Alibaba Cloud account by page. The details include the ID, mitigation plan, expiration time, and forwarding status.
 *
 * @param request DescribeInstancesRequest
 * @return DescribeInstancesResponse
 */
DescribeInstancesResponse Client::describeInstances(const DescribeInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstancesWithOptions(request, runtime);
}

/**
 * @summary 展示全局模板规则
 *
 * @param request DescribeL7GlobalRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeL7GlobalRuleResponse
 */
DescribeL7GlobalRuleResponse Client::describeL7GlobalRuleWithOptions(const DescribeL7GlobalRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeL7GlobalRule"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeL7GlobalRuleResponse>();
}

/**
 * @summary 展示全局模板规则
 *
 * @param request DescribeL7GlobalRuleRequest
 * @return DescribeL7GlobalRuleResponse
 */
DescribeL7GlobalRuleResponse Client::describeL7GlobalRule(const DescribeL7GlobalRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeL7GlobalRuleWithOptions(request, runtime);
}

/**
 * @summary Queries the back-to-origin policies for the forwarding rule of a website.
 *
 * @param request DescribeL7RsPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeL7RsPolicyResponse
 */
DescribeL7RsPolicyResponse Client::describeL7RsPolicyWithOptions(const DescribeL7RsPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasRealServers()) {
    query["RealServers"] = request.realServers();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeL7RsPolicy"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeL7RsPolicyResponse>();
}

/**
 * @summary Queries the back-to-origin policies for the forwarding rule of a website.
 *
 * @param request DescribeL7RsPolicyRequest
 * @return DescribeL7RsPolicyResponse
 */
DescribeL7RsPolicyResponse Client::describeL7RsPolicy(const DescribeL7RsPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeL7RsPolicyWithOptions(request, runtime);
}

/**
 * @summary Queries the configuration of back-to-origin persistent connections of a domain name.
 *
 * @param request DescribeL7UsKeepaliveRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeL7UsKeepaliveResponse
 */
DescribeL7UsKeepaliveResponse Client::describeL7UsKeepaliveWithOptions(const DescribeL7UsKeepaliveRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeL7UsKeepalive"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeL7UsKeepaliveResponse>();
}

/**
 * @summary Queries the configuration of back-to-origin persistent connections of a domain name.
 *
 * @param request DescribeL7UsKeepaliveRequest
 * @return DescribeL7UsKeepaliveResponse
 */
DescribeL7UsKeepaliveResponse Client::describeL7UsKeepalive(const DescribeL7UsKeepaliveRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeL7UsKeepaliveWithOptions(request, runtime);
}

/**
 * @summary Queries the back-to-origin settings of a port forwarding rule.
 *
 * @param request DescribeLayer4RulePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLayer4RulePolicyResponse
 */
DescribeLayer4RulePolicyResponse Client::describeLayer4RulePolicyWithOptions(const DescribeLayer4RulePolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasListeners()) {
    query["Listeners"] = request.listeners();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLayer4RulePolicy"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLayer4RulePolicyResponse>();
}

/**
 * @summary Queries the back-to-origin settings of a port forwarding rule.
 *
 * @param request DescribeLayer4RulePolicyRequest
 * @return DescribeLayer4RulePolicyResponse
 */
DescribeLayer4RulePolicyResponse Client::describeLayer4RulePolicy(const DescribeLayer4RulePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLayer4RulePolicyWithOptions(request, runtime);
}

/**
 * @summary Checks whether a Logstore is created for Anti-DDoS Proxy.
 *
 * @param request DescribeLogStoreExistStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLogStoreExistStatusResponse
 */
DescribeLogStoreExistStatusResponse Client::describeLogStoreExistStatusWithOptions(const DescribeLogStoreExistStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLogStoreExistStatus"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLogStoreExistStatusResponse>();
}

/**
 * @summary Checks whether a Logstore is created for Anti-DDoS Proxy.
 *
 * @param request DescribeLogStoreExistStatusRequest
 * @return DescribeLogStoreExistStatusResponse
 */
DescribeLogStoreExistStatusResponse Client::describeLogStoreExistStatus(const DescribeLogStoreExistStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLogStoreExistStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the blocked locations that are configured for an Anti-DDoS Pro or Anti-DDoS Premium instance.
 *
 * @param request DescribeNetworkRegionBlockRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNetworkRegionBlockResponse
 */
DescribeNetworkRegionBlockResponse Client::describeNetworkRegionBlockWithOptions(const DescribeNetworkRegionBlockRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNetworkRegionBlock"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNetworkRegionBlockResponse>();
}

/**
 * @summary Queries the blocked locations that are configured for an Anti-DDoS Pro or Anti-DDoS Premium instance.
 *
 * @param request DescribeNetworkRegionBlockRequest
 * @return DescribeNetworkRegionBlockResponse
 */
DescribeNetworkRegionBlockResponse Client::describeNetworkRegionBlock(const DescribeNetworkRegionBlockRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNetworkRegionBlockWithOptions(request, runtime);
}

/**
 * @summary Queries the mitigation settings of the port forwarding rule for a non-website service. The mitigation settings include session persistence and DDoS mitigation policies.
 *
 * @param request DescribeNetworkRuleAttributesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNetworkRuleAttributesResponse
 */
DescribeNetworkRuleAttributesResponse Client::describeNetworkRuleAttributesWithOptions(const DescribeNetworkRuleAttributesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNetworkRules()) {
    query["NetworkRules"] = request.networkRules();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNetworkRuleAttributes"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNetworkRuleAttributesResponse>();
}

/**
 * @summary Queries the mitigation settings of the port forwarding rule for a non-website service. The mitigation settings include session persistence and DDoS mitigation policies.
 *
 * @param request DescribeNetworkRuleAttributesRequest
 * @return DescribeNetworkRuleAttributesResponse
 */
DescribeNetworkRuleAttributesResponse Client::describeNetworkRuleAttributes(const DescribeNetworkRuleAttributesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNetworkRuleAttributesWithOptions(request, runtime);
}

/**
 * @summary Queries port forwarding rules.
 *
 * @param request DescribeNetworkRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNetworkRulesResponse
 */
DescribeNetworkRulesResponse Client::describeNetworkRulesWithOptions(const DescribeNetworkRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasForwardProtocol()) {
    query["ForwardProtocol"] = request.forwardProtocol();
  }

  if (!!request.hasFrontendPort()) {
    query["FrontendPort"] = request.frontendPort();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNetworkRules"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNetworkRulesResponse>();
}

/**
 * @summary Queries port forwarding rules.
 *
 * @param request DescribeNetworkRulesRequest
 * @return DescribeNetworkRulesResponse
 */
DescribeNetworkRulesResponse Client::describeNetworkRules(const DescribeNetworkRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNetworkRulesWithOptions(request, runtime);
}

/**
 * @summary Queries the operation logs of Anti-DDoS Proxy (Chinese Mainland).
 *
 * @description >  This operation is suitable only for Anti-DDoS Proxy (Chinese Mainland).
 * You can query operations performed on Anti-DDoS Proxy (Chinese Mainland), such as configuring the burstable protection bandwidth, deactivating blackhole filtering, configuring the near-origin traffic diversion feature, using Anti-DDoS plans, changing the IP addresses of Elastic Compute Service (ECS) instances, and clearing all logs.
 *
 * @param request DescribeOpEntitiesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOpEntitiesResponse
 */
DescribeOpEntitiesResponse Client::describeOpEntitiesWithOptions(const DescribeOpEntitiesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasEntityObject()) {
    query["EntityObject"] = request.entityObject();
  }

  if (!!request.hasEntityType()) {
    query["EntityType"] = request.entityType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeOpEntities"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeOpEntitiesResponse>();
}

/**
 * @summary Queries the operation logs of Anti-DDoS Proxy (Chinese Mainland).
 *
 * @description >  This operation is suitable only for Anti-DDoS Proxy (Chinese Mainland).
 * You can query operations performed on Anti-DDoS Proxy (Chinese Mainland), such as configuring the burstable protection bandwidth, deactivating blackhole filtering, configuring the near-origin traffic diversion feature, using Anti-DDoS plans, changing the IP addresses of Elastic Compute Service (ECS) instances, and clearing all logs.
 *
 * @param request DescribeOpEntitiesRequest
 * @return DescribeOpEntitiesResponse
 */
DescribeOpEntitiesResponse Client::describeOpEntities(const DescribeOpEntitiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOpEntitiesWithOptions(request, runtime);
}

/**
 * @summary Queries the port forwarding rules that are created for an Anti-DDoS Pro or Anti-DDoS Premium instance.
 *
 * @description You can call this operation by using Terraform. For more information about Terraform, see [What is Terraform?](https://help.aliyun.com/document_detail/95820.html).
 *
 * @param request DescribePortRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePortResponse
 */
DescribePortResponse Client::describePortWithOptions(const DescribePortRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFrontendPort()) {
    query["FrontendPort"] = request.frontendPort();
  }

  if (!!request.hasFrontendProtocol()) {
    query["FrontendProtocol"] = request.frontendProtocol();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePort"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePortResponse>();
}

/**
 * @summary Queries the port forwarding rules that are created for an Anti-DDoS Pro or Anti-DDoS Premium instance.
 *
 * @description You can call this operation by using Terraform. For more information about Terraform, see [What is Terraform?](https://help.aliyun.com/document_detail/95820.html).
 *
 * @param request DescribePortRequest
 * @return DescribePortResponse
 */
DescribePortResponse Client::describePort(const DescribePortRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePortWithOptions(request, runtime);
}

/**
 * @summary Queries the peak attack traffic bandwidth and peak attack traffic packet rates of one or more Anti-DDoS Pro or Anti-DDoS Premium instances within a specified period of time.
 *
 * @description You can call this operation to query the peak bandwidth and peak packet rate of attack traffic on one or more Anti-DDoS Pro or Anti-DDoS Premium instances within a specific period of time.
 * ### Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribePortAttackMaxFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePortAttackMaxFlowResponse
 */
DescribePortAttackMaxFlowResponse Client::describePortAttackMaxFlowWithOptions(const DescribePortAttackMaxFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.instanceIds();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePortAttackMaxFlow"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePortAttackMaxFlowResponse>();
}

/**
 * @summary Queries the peak attack traffic bandwidth and peak attack traffic packet rates of one or more Anti-DDoS Pro or Anti-DDoS Premium instances within a specified period of time.
 *
 * @description You can call this operation to query the peak bandwidth and peak packet rate of attack traffic on one or more Anti-DDoS Pro or Anti-DDoS Premium instances within a specific period of time.
 * ### Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribePortAttackMaxFlowRequest
 * @return DescribePortAttackMaxFlowResponse
 */
DescribePortAttackMaxFlowResponse Client::describePortAttackMaxFlow(const DescribePortAttackMaxFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePortAttackMaxFlowWithOptions(request, runtime);
}

/**
 * @summary Queries the configurations of the Intelligent Protection policy for non-website services.
 *
 * @param request DescribePortAutoCcStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePortAutoCcStatusResponse
 */
DescribePortAutoCcStatusResponse Client::describePortAutoCcStatusWithOptions(const DescribePortAutoCcStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.instanceIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePortAutoCcStatus"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePortAutoCcStatusResponse>();
}

/**
 * @summary Queries the configurations of the Intelligent Protection policy for non-website services.
 *
 * @param request DescribePortAutoCcStatusRequest
 * @return DescribePortAutoCcStatusResponse
 */
DescribePortAutoCcStatusResponse Client::describePortAutoCcStatus(const DescribePortAutoCcStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePortAutoCcStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the top source IP addresses of the volumetric attack events for the Anti-DDoS Pro or Anti-DDoS Premium instance.
 *
 * @param request DescribePortCcAttackTopIPRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePortCcAttackTopIPResponse
 */
DescribePortCcAttackTopIPResponse Client::describePortCcAttackTopIPWithOptions(const DescribePortCcAttackTopIPRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIp()) {
    query["Ip"] = request.ip();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.limit();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.port();
  }

  if (!!request.hasStartTimestamp()) {
    query["StartTimestamp"] = request.startTimestamp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePortCcAttackTopIP"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePortCcAttackTopIPResponse>();
}

/**
 * @summary Queries the top source IP addresses of the volumetric attack events for the Anti-DDoS Pro or Anti-DDoS Premium instance.
 *
 * @param request DescribePortCcAttackTopIPRequest
 * @return DescribePortCcAttackTopIPResponse
 */
DescribePortCcAttackTopIPResponse Client::describePortCcAttackTopIP(const DescribePortCcAttackTopIPRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePortCcAttackTopIPWithOptions(request, runtime);
}

/**
 * @summary The statistics on the connections established over the ports of one or more Anti-DDoS Pro or Anti-DDoS Premium instances are queried.
 *
 * @param request DescribePortConnsCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePortConnsCountResponse
 */
DescribePortConnsCountResponse Client::describePortConnsCountWithOptions(const DescribePortConnsCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.instanceIds();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.port();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePortConnsCount"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePortConnsCountResponse>();
}

/**
 * @summary The statistics on the connections established over the ports of one or more Anti-DDoS Pro or Anti-DDoS Premium instances are queried.
 *
 * @param request DescribePortConnsCountRequest
 * @return DescribePortConnsCountResponse
 */
DescribePortConnsCountResponse Client::describePortConnsCount(const DescribePortConnsCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePortConnsCountWithOptions(request, runtime);
}

/**
 * @summary Queries the connections established over the ports of one or more Anti-DDoS Proxy instances.
 *
 * @param request DescribePortConnsListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePortConnsListResponse
 */
DescribePortConnsListResponse Client::describePortConnsListWithOptions(const DescribePortConnsListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.instanceIds();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.port();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePortConnsList"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePortConnsListResponse>();
}

/**
 * @summary Queries the connections established over the ports of one or more Anti-DDoS Proxy instances.
 *
 * @param request DescribePortConnsListRequest
 * @return DescribePortConnsListResponse
 */
DescribePortConnsListResponse Client::describePortConnsList(const DescribePortConnsListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePortConnsListWithOptions(request, runtime);
}

/**
 * @summary Queries the traffic data of one or more Anti-DDoS Pro or Anti-DDoS Premium instances.
 *
 * @param request DescribePortFlowListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePortFlowListResponse
 */
DescribePortFlowListResponse Client::describePortFlowListWithOptions(const DescribePortFlowListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.instanceIds();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePortFlowList"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePortFlowListResponse>();
}

/**
 * @summary Queries the traffic data of one or more Anti-DDoS Pro or Anti-DDoS Premium instances.
 *
 * @param request DescribePortFlowListRequest
 * @return DescribePortFlowListResponse
 */
DescribePortFlowListResponse Client::describePortFlowList(const DescribePortFlowListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePortFlowListWithOptions(request, runtime);
}

/**
 * @summary Queries the maximum number of connections that can be established over the ports of one or more Anti-DDoS Proxy instances.
 *
 * @param request DescribePortMaxConnsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePortMaxConnsResponse
 */
DescribePortMaxConnsResponse Client::describePortMaxConnsWithOptions(const DescribePortMaxConnsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.instanceIds();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePortMaxConns"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePortMaxConnsResponse>();
}

/**
 * @summary Queries the maximum number of connections that can be established over the ports of one or more Anti-DDoS Proxy instances.
 *
 * @param request DescribePortMaxConnsRequest
 * @return DescribePortMaxConnsResponse
 */
DescribePortMaxConnsResponse Client::describePortMaxConns(const DescribePortMaxConnsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePortMaxConnsWithOptions(request, runtime);
}

/**
 * @summary Queries the areas and countries from which requests are sent to one or more Anti-DDoS Pro or Anti-DDoS Premium instances within the specified period of time.
 *
 * @param request DescribePortViewSourceCountriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePortViewSourceCountriesResponse
 */
DescribePortViewSourceCountriesResponse Client::describePortViewSourceCountriesWithOptions(const DescribePortViewSourceCountriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.instanceIds();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePortViewSourceCountries"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePortViewSourceCountriesResponse>();
}

/**
 * @summary Queries the areas and countries from which requests are sent to one or more Anti-DDoS Pro or Anti-DDoS Premium instances within the specified period of time.
 *
 * @param request DescribePortViewSourceCountriesRequest
 * @return DescribePortViewSourceCountriesResponse
 */
DescribePortViewSourceCountriesResponse Client::describePortViewSourceCountries(const DescribePortViewSourceCountriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePortViewSourceCountriesWithOptions(request, runtime);
}

/**
 * @summary Queries the Internet service providers (ISPs) from which requests are sent to one or more Anti-DDoS Pro or Anti-DDoS Premium instances within the specified period of time.
 *
 * @description You can call the DescribePortViewSourceIsps operation to query the ISPs from which requests are sent to one or more Anti-DDoS Pro or Anti-DDoS Premium instances within a specific period of time.
 * > The data returned for this operation cannot reflect the actual traffic volume because Layer 4 identity authentication algorithms are updated for Anti-DDoS Pro and Anti-DDoS Premium. You can call this operation to calculate only the proportion of requests sent from different ISPs. If you want to query the request traffic volume, we recommend that you call the [DescribePortFlowList](https://help.aliyun.com/document_detail/157460.html) operation.
 * ### Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribePortViewSourceIspsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePortViewSourceIspsResponse
 */
DescribePortViewSourceIspsResponse Client::describePortViewSourceIspsWithOptions(const DescribePortViewSourceIspsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.instanceIds();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePortViewSourceIsps"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePortViewSourceIspsResponse>();
}

/**
 * @summary Queries the Internet service providers (ISPs) from which requests are sent to one or more Anti-DDoS Pro or Anti-DDoS Premium instances within the specified period of time.
 *
 * @description You can call the DescribePortViewSourceIsps operation to query the ISPs from which requests are sent to one or more Anti-DDoS Pro or Anti-DDoS Premium instances within a specific period of time.
 * > The data returned for this operation cannot reflect the actual traffic volume because Layer 4 identity authentication algorithms are updated for Anti-DDoS Pro and Anti-DDoS Premium. You can call this operation to calculate only the proportion of requests sent from different ISPs. If you want to query the request traffic volume, we recommend that you call the [DescribePortFlowList](https://help.aliyun.com/document_detail/157460.html) operation.
 * ### Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribePortViewSourceIspsRequest
 * @return DescribePortViewSourceIspsResponse
 */
DescribePortViewSourceIspsResponse Client::describePortViewSourceIsps(const DescribePortViewSourceIspsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePortViewSourceIspsWithOptions(request, runtime);
}

/**
 * @summary Queries the administrative regions in China from which requests are sent to one or more Anti-DDoS Pro or Anti-DDoS Premium instances within a specified period of time.
 *
 * @param request DescribePortViewSourceProvincesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePortViewSourceProvincesResponse
 */
DescribePortViewSourceProvincesResponse Client::describePortViewSourceProvincesWithOptions(const DescribePortViewSourceProvincesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.instanceIds();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePortViewSourceProvinces"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePortViewSourceProvincesResponse>();
}

/**
 * @summary Queries the administrative regions in China from which requests are sent to one or more Anti-DDoS Pro or Anti-DDoS Premium instances within a specified period of time.
 *
 * @param request DescribePortViewSourceProvincesRequest
 * @return DescribePortViewSourceProvincesResponse
 */
DescribePortViewSourceProvincesResponse Client::describePortViewSourceProvinces(const DescribePortViewSourceProvincesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePortViewSourceProvincesWithOptions(request, runtime);
}

/**
 * @summary Queries the protected objects of a scenario-specific custom policy.
 *
 * @description You can call the DescribeSceneDefenseObjects operation to query the protected objects of a scenario-specific custom policy.
 * Before you call this operation, make sure that you have created a scenario-specific custom policy by calling the [CreateSceneDefensePolicy](https://help.aliyun.com/document_detail/159779.html) operation.
 * ### Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeSceneDefenseObjectsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSceneDefenseObjectsResponse
 */
DescribeSceneDefenseObjectsResponse Client::describeSceneDefenseObjectsWithOptions(const DescribeSceneDefenseObjectsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.policyId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSceneDefenseObjects"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSceneDefenseObjectsResponse>();
}

/**
 * @summary Queries the protected objects of a scenario-specific custom policy.
 *
 * @description You can call the DescribeSceneDefenseObjects operation to query the protected objects of a scenario-specific custom policy.
 * Before you call this operation, make sure that you have created a scenario-specific custom policy by calling the [CreateSceneDefensePolicy](https://help.aliyun.com/document_detail/159779.html) operation.
 * ### Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeSceneDefenseObjectsRequest
 * @return DescribeSceneDefenseObjectsResponse
 */
DescribeSceneDefenseObjectsResponse Client::describeSceneDefenseObjects(const DescribeSceneDefenseObjectsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSceneDefenseObjectsWithOptions(request, runtime);
}

/**
 * @summary Queries the configurations of a scenario-specific custom policy.
 *
 * @description You can call the DescribeSceneDefensePolicies operation to query the configurations of a scenario-specific custom policy that is created. For example, you can query the status, protected objects, and protection rules of the policy.
 * ### Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeSceneDefensePoliciesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSceneDefensePoliciesResponse
 */
DescribeSceneDefensePoliciesResponse Client::describeSceneDefensePoliciesWithOptions(const DescribeSceneDefensePoliciesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasTemplate()) {
    query["Template"] = request._template();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSceneDefensePolicies"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSceneDefensePoliciesResponse>();
}

/**
 * @summary Queries the configurations of a scenario-specific custom policy.
 *
 * @description You can call the DescribeSceneDefensePolicies operation to query the configurations of a scenario-specific custom policy that is created. For example, you can query the status, protected objects, and protection rules of the policy.
 * ### Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeSceneDefensePoliciesRequest
 * @return DescribeSceneDefensePoliciesResponse
 */
DescribeSceneDefensePoliciesResponse Client::describeSceneDefensePolicies(const DescribeSceneDefensePoliciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSceneDefensePoliciesWithOptions(request, runtime);
}

/**
 * @param request DescribeSchedulerRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSchedulerRulesResponse
 */
DescribeSchedulerRulesResponse Client::describeSchedulerRulesWithOptions(const DescribeSchedulerRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSchedulerRules"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSchedulerRulesResponse>();
}

/**
 * @param request DescribeSchedulerRulesRequest
 * @return DescribeSchedulerRulesResponse
 */
DescribeSchedulerRulesResponse Client::describeSchedulerRules(const DescribeSchedulerRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSchedulerRulesWithOptions(request, runtime);
}

/**
 * @summary Queries the destination rate limit events.
 *
 * @param request DescribeSlaEventListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSlaEventListResponse
 */
DescribeSlaEventListResponse Client::describeSlaEventListWithOptions(const DescribeSlaEventListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.ip();
  }

  if (!!request.hasPage()) {
    query["Page"] = request.page();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.region();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSlaEventList"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSlaEventListResponse>();
}

/**
 * @summary Queries the destination rate limit events.
 *
 * @param request DescribeSlaEventListRequest
 * @return DescribeSlaEventListResponse
 */
DescribeSlaEventListResponse Client::describeSlaEventList(const DescribeSlaEventListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSlaEventListWithOptions(request, runtime);
}

/**
 * @summary Queries whether Anti-DDoS Proxy is authorized to access Simple Log Service.
 *
 * @param request DescribeSlsAuthStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSlsAuthStatusResponse
 */
DescribeSlsAuthStatusResponse Client::describeSlsAuthStatusWithOptions(const DescribeSlsAuthStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSlsAuthStatus"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSlsAuthStatusResponse>();
}

/**
 * @summary Queries whether Anti-DDoS Proxy is authorized to access Simple Log Service.
 *
 * @param request DescribeSlsAuthStatusRequest
 * @return DescribeSlsAuthStatusResponse
 */
DescribeSlsAuthStatusResponse Client::describeSlsAuthStatus(const DescribeSlsAuthStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSlsAuthStatusWithOptions(request, runtime);
}

/**
 * @summary Queries information about the Logstore of the Anti-DDoS Proxy instance, such as the log storage capacity and log storage duration.
 *
 * @param request DescribeSlsLogstoreInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSlsLogstoreInfoResponse
 */
DescribeSlsLogstoreInfoResponse Client::describeSlsLogstoreInfoWithOptions(const DescribeSlsLogstoreInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSlsLogstoreInfo"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSlsLogstoreInfoResponse>();
}

/**
 * @summary Queries information about the Logstore of the Anti-DDoS Proxy instance, such as the log storage capacity and log storage duration.
 *
 * @param request DescribeSlsLogstoreInfoRequest
 * @return DescribeSlsLogstoreInfoResponse
 */
DescribeSlsLogstoreInfoResponse Client::describeSlsLogstoreInfo(const DescribeSlsLogstoreInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSlsLogstoreInfoWithOptions(request, runtime);
}

/**
 * @summary Checks whether Simple Log Service is activated.
 *
 * @param request DescribeSlsOpenStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSlsOpenStatusResponse
 */
DescribeSlsOpenStatusResponse Client::describeSlsOpenStatusWithOptions(const DescribeSlsOpenStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSlsOpenStatus"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSlsOpenStatusResponse>();
}

/**
 * @summary Checks whether Simple Log Service is activated.
 *
 * @param request DescribeSlsOpenStatusRequest
 * @return DescribeSlsOpenStatusResponse
 */
DescribeSlsOpenStatusResponse Client::describeSlsOpenStatus(const DescribeSlsOpenStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSlsOpenStatusWithOptions(request, runtime);
}

/**
 * @summary Queries whether Anti-DDoS Pro or Anti-DDoS Premium is authorized to access other cloud services.
 *
 * @description You can call the DescribeStsGrantStatus operation to query whether Anti-DDoS Pro or Anti-DDoS Premium of the current Alibaba Cloud account is authorized to access other cloud services.
 * ### Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeStsGrantStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeStsGrantStatusResponse
 */
DescribeStsGrantStatusResponse Client::describeStsGrantStatusWithOptions(const DescribeStsGrantStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasRole()) {
    query["Role"] = request.role();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeStsGrantStatus"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeStsGrantStatusResponse>();
}

/**
 * @summary Queries whether Anti-DDoS Pro or Anti-DDoS Premium is authorized to access other cloud services.
 *
 * @description You can call the DescribeStsGrantStatus operation to query whether Anti-DDoS Pro or Anti-DDoS Premium of the current Alibaba Cloud account is authorized to access other cloud services.
 * ### Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeStsGrantStatusRequest
 * @return DescribeStsGrantStatusResponse
 */
DescribeStsGrantStatusResponse Client::describeStsGrantStatus(const DescribeStsGrantStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeStsGrantStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the details of the bills for the burstable clean bandwidth.
 *
 * @description You can call the DescribeSystemLog operation to query the system logs of Anti-DDoS Pro or Anti-DDoS Premium. The system logs contain only billing logs for the burstable clean bandwidth.
 * If you have enabled the burstable clean bandwidth feature, you can call this operation to query the details of the bills of the burstable clean bandwidth.
 * ### Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeSystemLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSystemLogResponse
 */
DescribeSystemLogResponse Client::describeSystemLogWithOptions(const DescribeSystemLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasEntityObject()) {
    query["EntityObject"] = request.entityObject();
  }

  if (!!request.hasEntityType()) {
    query["EntityType"] = request.entityType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSystemLog"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSystemLogResponse>();
}

/**
 * @summary Queries the details of the bills for the burstable clean bandwidth.
 *
 * @description You can call the DescribeSystemLog operation to query the system logs of Anti-DDoS Pro or Anti-DDoS Premium. The system logs contain only billing logs for the burstable clean bandwidth.
 * If you have enabled the burstable clean bandwidth feature, you can call this operation to query the details of the bills of the burstable clean bandwidth.
 * ### Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeSystemLogRequest
 * @return DescribeSystemLogResponse
 */
DescribeSystemLogResponse Client::describeSystemLog(const DescribeSystemLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSystemLogWithOptions(request, runtime);
}

/**
 * @summary Queries all tag keys and the number of Anti-DDoS Proxy (Chinese Mainland) instances to which each tag key is added.
 *
 * @description You can call this operation to query all tag keys and the number of Anti-DDoS Proxy (Chinese Mainland) instances to which each tag key is added by page.
 * >  Only Anti-DDoS Proxy (Chinese Mainland) supports tags.
 * ### [](#qps-)QPS limits
 * You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeTagKeysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTagKeysResponse
 */
DescribeTagKeysResponse Client::describeTagKeysWithOptions(const DescribeTagKeysRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTagKeys"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTagKeysResponse>();
}

/**
 * @summary Queries all tag keys and the number of Anti-DDoS Proxy (Chinese Mainland) instances to which each tag key is added.
 *
 * @description You can call this operation to query all tag keys and the number of Anti-DDoS Proxy (Chinese Mainland) instances to which each tag key is added by page.
 * >  Only Anti-DDoS Proxy (Chinese Mainland) supports tags.
 * ### [](#qps-)QPS limits
 * You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeTagKeysRequest
 * @return DescribeTagKeysResponse
 */
DescribeTagKeysResponse Client::describeTagKeys(const DescribeTagKeysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTagKeysWithOptions(request, runtime);
}

/**
 * @summary Queries the information about the tags that are added to an Anti-DDoS Proxy (Chinese Mainland) instance.
 *
 * @description You can call the DescribeTagResources operation to query the information about the tags that are added to an Anti-DDoS Proxy (Chinese Mainland) instance.
 * >  Only Anti-DDoS Proxy (Chinese Mainland) supports tags.
 * ### [](#qps-)QPS limits
 * You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTagResourcesResponse
 */
DescribeTagResourcesResponse Client::describeTagResourcesWithOptions(const DescribeTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceIds()) {
    query["ResourceIds"] = request.resourceIds();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTagResources"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTagResourcesResponse>();
}

/**
 * @summary Queries the information about the tags that are added to an Anti-DDoS Proxy (Chinese Mainland) instance.
 *
 * @description You can call the DescribeTagResources operation to query the information about the tags that are added to an Anti-DDoS Proxy (Chinese Mainland) instance.
 * >  Only Anti-DDoS Proxy (Chinese Mainland) supports tags.
 * ### [](#qps-)QPS limits
 * You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeTagResourcesRequest
 * @return DescribeTagResourcesResponse
 */
DescribeTagResourcesResponse Client::describeTagResources(const DescribeTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Queries the peak bandwidth and peak packet rates of attack traffic on one or more Anti-DDoS Pro or Anti-DDoS Premium instances within a specific period of time.
 *
 * @param request DescribeTotalAttackMaxFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTotalAttackMaxFlowResponse
 */
DescribeTotalAttackMaxFlowResponse Client::describeTotalAttackMaxFlowWithOptions(const DescribeTotalAttackMaxFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.instanceIds();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTotalAttackMaxFlow"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTotalAttackMaxFlowResponse>();
}

/**
 * @summary Queries the peak bandwidth and peak packet rates of attack traffic on one or more Anti-DDoS Pro or Anti-DDoS Premium instances within a specific period of time.
 *
 * @param request DescribeTotalAttackMaxFlowRequest
 * @return DescribeTotalAttackMaxFlowResponse
 */
DescribeTotalAttackMaxFlowResponse Client::describeTotalAttackMaxFlow(const DescribeTotalAttackMaxFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTotalAttackMaxFlowWithOptions(request, runtime);
}

/**
 * @summary Queries the source ports of UDP traffic that are filtered out by the filtering policies for UDP reflection attacks on an Anti-DDoS Pro or Anti-DDoS Premium instance.
 *
 * @param request DescribeUdpReflectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUdpReflectResponse
 */
DescribeUdpReflectResponse Client::describeUdpReflectWithOptions(const DescribeUdpReflectRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "DescribeUdpReflect"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUdpReflectResponse>();
}

/**
 * @summary Queries the source ports of UDP traffic that are filtered out by the filtering policies for UDP reflection attacks on an Anti-DDoS Pro or Anti-DDoS Premium instance.
 *
 * @param request DescribeUdpReflectRequest
 * @return DescribeUdpReflectResponse
 */
DescribeUdpReflectResponse Client::describeUdpReflect(const DescribeUdpReflectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUdpReflectWithOptions(request, runtime);
}

/**
 * @summary Queries the total quota and remaining quota for blackhole filtering deactivation.
 *
 * @param request DescribeUnBlackholeCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUnBlackholeCountResponse
 */
DescribeUnBlackholeCountResponse Client::describeUnBlackholeCountWithOptions(const DescribeUnBlackholeCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUnBlackholeCount"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUnBlackholeCountResponse>();
}

/**
 * @summary Queries the total quota and remaining quota for blackhole filtering deactivation.
 *
 * @param request DescribeUnBlackholeCountRequest
 * @return DescribeUnBlackholeCountResponse
 */
DescribeUnBlackholeCountResponse Client::describeUnBlackholeCount(const DescribeUnBlackholeCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUnBlackholeCountWithOptions(request, runtime);
}

/**
 * @summary Queries the total number and the remaining number of times that you can enable the near-origin traffic diversion feature.
 *
 * @description >  This operation is suitable only for Anti-DDoS Proxy (Chinese Mainland).
 *
 * @param request DescribeUnBlockCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUnBlockCountResponse
 */
DescribeUnBlockCountResponse Client::describeUnBlockCountWithOptions(const DescribeUnBlockCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUnBlockCount"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUnBlockCountResponse>();
}

/**
 * @summary Queries the total number and the remaining number of times that you can enable the near-origin traffic diversion feature.
 *
 * @description >  This operation is suitable only for Anti-DDoS Proxy (Chinese Mainland).
 *
 * @param request DescribeUnBlockCountRequest
 * @return DescribeUnBlockCountResponse
 */
DescribeUnBlockCountResponse Client::describeUnBlockCount(const DescribeUnBlockCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUnBlockCountWithOptions(request, runtime);
}

/**
 * @summary Checks whether the log analysis feature is enabled for all domain names.
 *
 * @description You can call the DescribeWebAccessLogDispatchStatus operation to check whether the log analysis feature is enabled for all domain names that are added to your Anti-DDoS Pro or Anti-DDoS Premium instance.
 * ### Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeWebAccessLogDispatchStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeWebAccessLogDispatchStatusResponse
 */
DescribeWebAccessLogDispatchStatusResponse Client::describeWebAccessLogDispatchStatusWithOptions(const DescribeWebAccessLogDispatchStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeWebAccessLogDispatchStatus"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeWebAccessLogDispatchStatusResponse>();
}

/**
 * @summary Checks whether the log analysis feature is enabled for all domain names.
 *
 * @description You can call the DescribeWebAccessLogDispatchStatus operation to check whether the log analysis feature is enabled for all domain names that are added to your Anti-DDoS Pro or Anti-DDoS Premium instance.
 * ### Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeWebAccessLogDispatchStatusRequest
 * @return DescribeWebAccessLogDispatchStatusResponse
 */
DescribeWebAccessLogDispatchStatusResponse Client::describeWebAccessLogDispatchStatus(const DescribeWebAccessLogDispatchStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeWebAccessLogDispatchStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the remaining quota that allows you to clear the Logstore.
 *
 * @param request DescribeWebAccessLogEmptyCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeWebAccessLogEmptyCountResponse
 */
DescribeWebAccessLogEmptyCountResponse Client::describeWebAccessLogEmptyCountWithOptions(const DescribeWebAccessLogEmptyCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeWebAccessLogEmptyCount"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeWebAccessLogEmptyCountResponse>();
}

/**
 * @summary Queries the remaining quota that allows you to clear the Logstore.
 *
 * @param request DescribeWebAccessLogEmptyCountRequest
 * @return DescribeWebAccessLogEmptyCountResponse
 */
DescribeWebAccessLogEmptyCountResponse Client::describeWebAccessLogEmptyCount(const DescribeWebAccessLogEmptyCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeWebAccessLogEmptyCountWithOptions(request, runtime);
}

/**
 * @summary Queries the information about the log analysis feature for a website, such as the feature status and the Simple Log Service project and Logstore that are used.
 *
 * @param request DescribeWebAccessLogStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeWebAccessLogStatusResponse
 */
DescribeWebAccessLogStatusResponse Client::describeWebAccessLogStatusWithOptions(const DescribeWebAccessLogStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeWebAccessLogStatus"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeWebAccessLogStatusResponse>();
}

/**
 * @summary Queries the information about the log analysis feature for a website, such as the feature status and the Simple Log Service project and Logstore that are used.
 *
 * @param request DescribeWebAccessLogStatusRequest
 * @return DescribeWebAccessLogStatusResponse
 */
DescribeWebAccessLogStatusResponse Client::describeWebAccessLogStatus(const DescribeWebAccessLogStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeWebAccessLogStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the mode in which a website service is added to Anti-DDoS Pro or Anti-DDoS Premium.
 *
 * @param request DescribeWebAccessModeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeWebAccessModeResponse
 */
DescribeWebAccessModeResponse Client::describeWebAccessModeWithOptions(const DescribeWebAccessModeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomains()) {
    query["Domains"] = request.domains();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeWebAccessMode"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeWebAccessModeResponse>();
}

/**
 * @summary Queries the mode in which a website service is added to Anti-DDoS Pro or Anti-DDoS Premium.
 *
 * @param request DescribeWebAccessModeRequest
 * @return DescribeWebAccessModeResponse
 */
DescribeWebAccessModeResponse Client::describeWebAccessMode(const DescribeWebAccessModeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeWebAccessModeWithOptions(request, runtime);
}

/**
 * @summary Queries the Location Blacklist (Domain Names) configurations for websites.
 *
 * @param request DescribeWebAreaBlockConfigsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeWebAreaBlockConfigsResponse
 */
DescribeWebAreaBlockConfigsResponse Client::describeWebAreaBlockConfigsWithOptions(const DescribeWebAreaBlockConfigsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomains()) {
    query["Domains"] = request.domains();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeWebAreaBlockConfigs"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeWebAreaBlockConfigsResponse>();
}

/**
 * @summary Queries the Location Blacklist (Domain Names) configurations for websites.
 *
 * @param request DescribeWebAreaBlockConfigsRequest
 * @return DescribeWebAreaBlockConfigsResponse
 */
DescribeWebAreaBlockConfigsResponse Client::describeWebAreaBlockConfigs(const DescribeWebAreaBlockConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeWebAreaBlockConfigsWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI DescribeWebCCRules is deprecated, please use ddoscoo::2020-01-01::ConfigWebCCRuleV2 instead.
 *
 * @summary Queries the custom frequency control rules that are created for a website.
 *
 * @param request DescribeWebCCRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeWebCCRulesResponse
 */
DescribeWebCCRulesResponse Client::describeWebCCRulesWithOptions(const DescribeWebCCRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeWebCCRules"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeWebCCRulesResponse>();
}

/**
 * @deprecated OpenAPI DescribeWebCCRules is deprecated, please use ddoscoo::2020-01-01::ConfigWebCCRuleV2 instead.
 *
 * @summary Queries the custom frequency control rules that are created for a website.
 *
 * @param request DescribeWebCCRulesRequest
 * @return DescribeWebCCRulesResponse
 */
DescribeWebCCRulesResponse Client::describeWebCCRules(const DescribeWebCCRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeWebCCRulesWithOptions(request, runtime);
}

/**
 * @summary Queries the custom frequency control rules that are created for a website.
 *
 * @param request DescribeWebCCRulesV2Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeWebCCRulesV2Response
 */
DescribeWebCCRulesV2Response Client::describeWebCCRulesV2WithOptions(const DescribeWebCCRulesV2Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasOffset()) {
    query["Offset"] = request.offset();
  }

  if (!!request.hasOwner()) {
    query["Owner"] = request.owner();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeWebCCRulesV2"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeWebCCRulesV2Response>();
}

/**
 * @summary Queries the custom frequency control rules that are created for a website.
 *
 * @param request DescribeWebCCRulesV2Request
 * @return DescribeWebCCRulesV2Response
 */
DescribeWebCCRulesV2Response Client::describeWebCCRulesV2(const DescribeWebCCRulesV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeWebCCRulesV2WithOptions(request, runtime);
}

/**
 * @summary Queries the Static Page Caching configuration of websites.
 *
 * @description You can call the DescribeWebCacheConfigs operation to query the Static Page Caching configurations of websites. The configurations include cache modes and custom caching rules.
 * ### Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeWebCacheConfigsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeWebCacheConfigsResponse
 */
DescribeWebCacheConfigsResponse Client::describeWebCacheConfigsWithOptions(const DescribeWebCacheConfigsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomains()) {
    query["Domains"] = request.domains();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeWebCacheConfigs"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeWebCacheConfigsResponse>();
}

/**
 * @summary Queries the Static Page Caching configuration of websites.
 *
 * @description You can call the DescribeWebCacheConfigs operation to query the Static Page Caching configurations of websites. The configurations include cache modes and custom caching rules.
 * ### Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeWebCacheConfigsRequest
 * @return DescribeWebCacheConfigsResponse
 */
DescribeWebCacheConfigsResponse Client::describeWebCacheConfigs(const DescribeWebCacheConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeWebCacheConfigsWithOptions(request, runtime);
}

/**
 * @summary Queries the status of each mitigation policy for a website.
 *
 * @param request DescribeWebCcProtectSwitchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeWebCcProtectSwitchResponse
 */
DescribeWebCcProtectSwitchResponse Client::describeWebCcProtectSwitchWithOptions(const DescribeWebCcProtectSwitchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomains()) {
    query["Domains"] = request.domains();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeWebCcProtectSwitch"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeWebCcProtectSwitchResponse>();
}

/**
 * @summary Queries the status of each mitigation policy for a website.
 *
 * @param request DescribeWebCcProtectSwitchRequest
 * @return DescribeWebCcProtectSwitchResponse
 */
DescribeWebCcProtectSwitchResponse Client::describeWebCcProtectSwitch(const DescribeWebCcProtectSwitchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeWebCcProtectSwitchWithOptions(request, runtime);
}

/**
 * @summary Queries the supported custom ports of a website.
 *
 * @param request DescribeWebCustomPortsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeWebCustomPortsResponse
 */
DescribeWebCustomPortsResponse Client::describeWebCustomPortsWithOptions(const DescribeWebCustomPortsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeWebCustomPorts"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeWebCustomPortsResponse>();
}

/**
 * @summary Queries the supported custom ports of a website.
 *
 * @param request DescribeWebCustomPortsRequest
 * @return DescribeWebCustomPortsResponse
 */
DescribeWebCustomPortsResponse Client::describeWebCustomPorts(const DescribeWebCustomPortsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeWebCustomPortsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about Anti-DDoS Pro or Anti-DDoS Premium instances to which a website service is added.
 *
 * @param request DescribeWebInstanceRelationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeWebInstanceRelationsResponse
 */
DescribeWebInstanceRelationsResponse Client::describeWebInstanceRelationsWithOptions(const DescribeWebInstanceRelationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomains()) {
    query["Domains"] = request.domains();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeWebInstanceRelations"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeWebInstanceRelationsResponse>();
}

/**
 * @summary Queries the information about Anti-DDoS Pro or Anti-DDoS Premium instances to which a website service is added.
 *
 * @param request DescribeWebInstanceRelationsRequest
 * @return DescribeWebInstanceRelationsResponse
 */
DescribeWebInstanceRelationsResponse Client::describeWebInstanceRelations(const DescribeWebInstanceRelationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeWebInstanceRelationsWithOptions(request, runtime);
}

/**
 * @summary Queries the accurate access control rules that are created for websites.
 *
 * @param request DescribeWebPreciseAccessRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeWebPreciseAccessRuleResponse
 */
DescribeWebPreciseAccessRuleResponse Client::describeWebPreciseAccessRuleWithOptions(const DescribeWebPreciseAccessRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomains()) {
    query["Domains"] = request.domains();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeWebPreciseAccessRule"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeWebPreciseAccessRuleResponse>();
}

/**
 * @summary Queries the accurate access control rules that are created for websites.
 *
 * @param request DescribeWebPreciseAccessRuleRequest
 * @return DescribeWebPreciseAccessRuleResponse
 */
DescribeWebPreciseAccessRuleResponse Client::describeWebPreciseAccessRule(const DescribeWebPreciseAccessRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeWebPreciseAccessRuleWithOptions(request, runtime);
}

/**
 * @summary Queries the top source IP addresses of the web resource exhaustion attacks for the Anti-DDoS Proxy instance.
 *
 * @param request DescribeWebReportTopIpRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeWebReportTopIpResponse
 */
DescribeWebReportTopIpResponse Client::describeWebReportTopIpWithOptions(const DescribeWebReportTopIpRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasQueryType()) {
    query["QueryType"] = request.queryType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasTop()) {
    query["Top"] = request.top();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeWebReportTopIp"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeWebReportTopIpResponse>();
}

/**
 * @summary Queries the top source IP addresses of the web resource exhaustion attacks for the Anti-DDoS Proxy instance.
 *
 * @param request DescribeWebReportTopIpRequest
 * @return DescribeWebReportTopIpResponse
 */
DescribeWebReportTopIpResponse Client::describeWebReportTopIp(const DescribeWebReportTopIpRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeWebReportTopIpWithOptions(request, runtime);
}

/**
 * @summary Query Configuration of Website Business Forwarding Rules.
 *
 * @description This interface is used for paginated querying of the configurations of website business forwarding rules you have created, such as forwarding protocol types, source server addresses, HTTPS configurations, IP blacklist configurations, and more.
 * Before calling this interface, you must have already called [CreateWebRule](~~CreateWebRule~~) to create website business forwarding rules.
 * ### QPS Limit
 * The per-user QPS limit for this interface is 50 times/second. Exceeding this limit will result in API calls being throttled, which may impact your business; please use it reasonably.
 *
 * @param request DescribeWebRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeWebRulesResponse
 */
DescribeWebRulesResponse Client::describeWebRulesWithOptions(const DescribeWebRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCname()) {
    query["Cname"] = request.cname();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.instanceIds();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasQueryDomainPattern()) {
    query["QueryDomainPattern"] = request.queryDomainPattern();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeWebRules"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeWebRulesResponse>();
}

/**
 * @summary Query Configuration of Website Business Forwarding Rules.
 *
 * @description This interface is used for paginated querying of the configurations of website business forwarding rules you have created, such as forwarding protocol types, source server addresses, HTTPS configurations, IP blacklist configurations, and more.
 * Before calling this interface, you must have already called [CreateWebRule](~~CreateWebRule~~) to create website business forwarding rules.
 * ### QPS Limit
 * The per-user QPS limit for this interface is 50 times/second. Exceeding this limit will result in API calls being throttled, which may impact your business; please use it reasonably.
 *
 * @param request DescribeWebRulesRequest
 * @return DescribeWebRulesResponse
 */
DescribeWebRulesResponse Client::describeWebRules(const DescribeWebRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeWebRulesWithOptions(request, runtime);
}

/**
 * @summary Removes a protected object from a scenario-specific custom policy.
 *
 * @param request DetachSceneDefenseObjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachSceneDefenseObjectResponse
 */
DetachSceneDefenseObjectResponse Client::detachSceneDefenseObjectWithOptions(const DetachSceneDefenseObjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasObjectType()) {
    query["ObjectType"] = request.objectType();
  }

  if (!!request.hasObjects()) {
    query["Objects"] = request.objects();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.policyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachSceneDefenseObject"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachSceneDefenseObjectResponse>();
}

/**
 * @summary Removes a protected object from a scenario-specific custom policy.
 *
 * @param request DetachSceneDefenseObjectRequest
 * @return DetachSceneDefenseObjectResponse
 */
DetachSceneDefenseObjectResponse Client::detachSceneDefenseObject(const DetachSceneDefenseObjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachSceneDefenseObjectWithOptions(request, runtime);
}

/**
 * @summary Disables a scenario-specific custom policy.
 *
 * @param request DisableSceneDefensePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableSceneDefensePolicyResponse
 */
DisableSceneDefensePolicyResponse Client::disableSceneDefensePolicyWithOptions(const DisableSceneDefensePolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.policyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableSceneDefensePolicy"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableSceneDefensePolicyResponse>();
}

/**
 * @summary Disables a scenario-specific custom policy.
 *
 * @param request DisableSceneDefensePolicyRequest
 * @return DisableSceneDefensePolicyResponse
 */
DisableSceneDefensePolicyResponse Client::disableSceneDefensePolicy(const DisableSceneDefensePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableSceneDefensePolicyWithOptions(request, runtime);
}

/**
 * @summary Disables the log analysis feature for a website.
 *
 * @param request DisableWebAccessLogConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableWebAccessLogConfigResponse
 */
DisableWebAccessLogConfigResponse Client::disableWebAccessLogConfigWithOptions(const DisableWebAccessLogConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableWebAccessLogConfig"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableWebAccessLogConfigResponse>();
}

/**
 * @summary Disables the log analysis feature for a website.
 *
 * @param request DisableWebAccessLogConfigRequest
 * @return DisableWebAccessLogConfigResponse
 */
DisableWebAccessLogConfigResponse Client::disableWebAccessLogConfig(const DisableWebAccessLogConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableWebAccessLogConfigWithOptions(request, runtime);
}

/**
 * @summary Disables frequency control for a website.
 *
 * @param request DisableWebCCRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableWebCCResponse
 */
DisableWebCCResponse Client::disableWebCCWithOptions(const DisableWebCCRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableWebCC"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableWebCCResponse>();
}

/**
 * @summary Disables frequency control for a website.
 *
 * @param request DisableWebCCRequest
 * @return DisableWebCCResponse
 */
DisableWebCCResponse Client::disableWebCC(const DisableWebCCRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableWebCCWithOptions(request, runtime);
}

/**
 * @summary Disables custom frequency control rules for a website.
 *
 * @param request DisableWebCCRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableWebCCRuleResponse
 */
DisableWebCCRuleResponse Client::disableWebCCRuleWithOptions(const DisableWebCCRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableWebCCRule"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableWebCCRuleResponse>();
}

/**
 * @summary Disables custom frequency control rules for a website.
 *
 * @param request DisableWebCCRuleRequest
 * @return DisableWebCCRuleResponse
 */
DisableWebCCRuleResponse Client::disableWebCCRule(const DisableWebCCRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableWebCCRuleWithOptions(request, runtime);
}

/**
 * @summary Clears the IP address blacklist of an Anti-DDoS Pro or Anti-DDoS Premium instance.
 *
 * @param request EmptyAutoCcBlacklistRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EmptyAutoCcBlacklistResponse
 */
EmptyAutoCcBlacklistResponse Client::emptyAutoCcBlacklistWithOptions(const EmptyAutoCcBlacklistRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EmptyAutoCcBlacklist"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EmptyAutoCcBlacklistResponse>();
}

/**
 * @summary Clears the IP address blacklist of an Anti-DDoS Pro or Anti-DDoS Premium instance.
 *
 * @param request EmptyAutoCcBlacklistRequest
 * @return EmptyAutoCcBlacklistResponse
 */
EmptyAutoCcBlacklistResponse Client::emptyAutoCcBlacklist(const EmptyAutoCcBlacklistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return emptyAutoCcBlacklistWithOptions(request, runtime);
}

/**
 * @summary Clears the IP address whitelist of an Anti-DDoS Pro or Anti-DDoS Premium instance.
 *
 * @param request EmptyAutoCcWhitelistRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EmptyAutoCcWhitelistResponse
 */
EmptyAutoCcWhitelistResponse Client::emptyAutoCcWhitelistWithOptions(const EmptyAutoCcWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EmptyAutoCcWhitelist"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EmptyAutoCcWhitelistResponse>();
}

/**
 * @summary Clears the IP address whitelist of an Anti-DDoS Pro or Anti-DDoS Premium instance.
 *
 * @param request EmptyAutoCcWhitelistRequest
 * @return EmptyAutoCcWhitelistResponse
 */
EmptyAutoCcWhitelistResponse Client::emptyAutoCcWhitelist(const EmptyAutoCcWhitelistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return emptyAutoCcWhitelistWithOptions(request, runtime);
}

/**
 * @summary Clears the Logstore of Anti-DDoS Pro or Anti-DDoS Premium.
 *
 * @param request EmptySlsLogstoreRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EmptySlsLogstoreResponse
 */
EmptySlsLogstoreResponse Client::emptySlsLogstoreWithOptions(const EmptySlsLogstoreRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EmptySlsLogstore"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EmptySlsLogstoreResponse>();
}

/**
 * @summary Clears the Logstore of Anti-DDoS Pro or Anti-DDoS Premium.
 *
 * @param request EmptySlsLogstoreRequest
 * @return EmptySlsLogstoreResponse
 */
EmptySlsLogstoreResponse Client::emptySlsLogstore(const EmptySlsLogstoreRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return emptySlsLogstoreWithOptions(request, runtime);
}

/**
 * @summary Enables a scenario-specific custom policy.
 *
 * @param request EnableSceneDefensePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableSceneDefensePolicyResponse
 */
EnableSceneDefensePolicyResponse Client::enableSceneDefensePolicyWithOptions(const EnableSceneDefensePolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.policyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableSceneDefensePolicy"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableSceneDefensePolicyResponse>();
}

/**
 * @summary Enables a scenario-specific custom policy.
 *
 * @param request EnableSceneDefensePolicyRequest
 * @return EnableSceneDefensePolicyResponse
 */
EnableSceneDefensePolicyResponse Client::enableSceneDefensePolicy(const EnableSceneDefensePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableSceneDefensePolicyWithOptions(request, runtime);
}

/**
 * @summary Enables the log analysis feature for a website.
 *
 * @param request EnableWebAccessLogConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableWebAccessLogConfigResponse
 */
EnableWebAccessLogConfigResponse Client::enableWebAccessLogConfigWithOptions(const EnableWebAccessLogConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableWebAccessLogConfig"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableWebAccessLogConfigResponse>();
}

/**
 * @summary Enables the log analysis feature for a website.
 *
 * @param request EnableWebAccessLogConfigRequest
 * @return EnableWebAccessLogConfigResponse
 */
EnableWebAccessLogConfigResponse Client::enableWebAccessLogConfig(const EnableWebAccessLogConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableWebAccessLogConfigWithOptions(request, runtime);
}

/**
 * @summary Enables the Frequency Control policy for a website.
 *
 * @param request EnableWebCCRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableWebCCResponse
 */
EnableWebCCResponse Client::enableWebCCWithOptions(const EnableWebCCRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableWebCC"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableWebCCResponse>();
}

/**
 * @summary Enables the Frequency Control policy for a website.
 *
 * @param request EnableWebCCRequest
 * @return EnableWebCCResponse
 */
EnableWebCCResponse Client::enableWebCC(const EnableWebCCRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableWebCCWithOptions(request, runtime);
}

/**
 * @summary Enables custom frequency control rules for a website.
 *
 * @param request EnableWebCCRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableWebCCRuleResponse
 */
EnableWebCCRuleResponse Client::enableWebCCRuleWithOptions(const EnableWebCCRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableWebCCRule"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableWebCCRuleResponse>();
}

/**
 * @summary Enables custom frequency control rules for a website.
 *
 * @param request EnableWebCCRuleRequest
 * @return EnableWebCCRuleResponse
 */
EnableWebCCRuleResponse Client::enableWebCCRule(const EnableWebCCRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableWebCCRuleWithOptions(request, runtime);
}

/**
 * @summary Switches between the metering methods of the burstable clean bandwidth feature.
 *
 * @description You can switch between the metering methods of the burstable clean bandwidth feature. The new metering method takes effect from 00:00 on the first day of the next month. You can change the metering method up to three times each calendar month. The most recent metering method that you select takes effect in the next month. You cannot change the metering method on the last day of each calendar month.
 *
 * @param request ModifyBizBandWidthModeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyBizBandWidthModeResponse
 */
ModifyBizBandWidthModeResponse Client::modifyBizBandWidthModeWithOptions(const ModifyBizBandWidthModeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMode()) {
    query["Mode"] = request.mode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyBizBandWidthMode"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyBizBandWidthModeResponse>();
}

/**
 * @summary Switches between the metering methods of the burstable clean bandwidth feature.
 *
 * @description You can switch between the metering methods of the burstable clean bandwidth feature. The new metering method takes effect from 00:00 on the first day of the next month. You can change the metering method up to three times each calendar month. The most recent metering method that you select takes effect in the next month. You cannot change the metering method on the last day of each calendar month.
 *
 * @param request ModifyBizBandWidthModeRequest
 * @return ModifyBizBandWidthModeResponse
 */
ModifyBizBandWidthModeResponse Client::modifyBizBandWidthMode(const ModifyBizBandWidthModeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyBizBandWidthModeWithOptions(request, runtime);
}

/**
 * @summary Deactivates blackhole filtering that is triggered on an instance.
 *
 * @param request ModifyBlackholeStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyBlackholeStatusResponse
 */
ModifyBlackholeStatusResponse Client::modifyBlackholeStatusWithOptions(const ModifyBlackholeStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBlackholeStatus()) {
    query["BlackholeStatus"] = request.blackholeStatus();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyBlackholeStatus"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyBlackholeStatusResponse>();
}

/**
 * @summary Deactivates blackhole filtering that is triggered on an instance.
 *
 * @param request ModifyBlackholeStatusRequest
 * @return ModifyBlackholeStatusResponse
 */
ModifyBlackholeStatusResponse Client::modifyBlackholeStatus(const ModifyBlackholeStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyBlackholeStatusWithOptions(request, runtime);
}

/**
 * @summary Modifies the Diversion from Origin Server configuration of an Anti-DDoS Proxy (Chinese Mainland) instance.
 *
 * @description >  This operation is suitable only for Anti-DDoS Proxy (Chinese Mainland).
 *
 * @param request ModifyBlockStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyBlockStatusResponse
 */
ModifyBlockStatusResponse Client::modifyBlockStatusWithOptions(const ModifyBlockStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDuration()) {
    query["Duration"] = request.duration();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasLines()) {
    query["Lines"] = request.lines();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyBlockStatus"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyBlockStatusResponse>();
}

/**
 * @summary Modifies the Diversion from Origin Server configuration of an Anti-DDoS Proxy (Chinese Mainland) instance.
 *
 * @description >  This operation is suitable only for Anti-DDoS Proxy (Chinese Mainland).
 *
 * @param request ModifyBlockStatusRequest
 * @return ModifyBlockStatusResponse
 */
ModifyBlockStatusResponse Client::modifyBlockStatus(const ModifyBlockStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyBlockStatusWithOptions(request, runtime);
}

/**
 * @summary Enables or disables CNAME reuse for a website.
 *
 * @description > This operation is suitable only for Anti-DDoS Premium.
 *
 * @param request ModifyCnameReuseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyCnameReuseResponse
 */
ModifyCnameReuseResponse Client::modifyCnameReuseWithOptions(const ModifyCnameReuseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCname()) {
    query["Cname"] = request.cname();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.enable();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyCnameReuse"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyCnameReuseResponse>();
}

/**
 * @summary Enables or disables CNAME reuse for a website.
 *
 * @description > This operation is suitable only for Anti-DDoS Premium.
 *
 * @param request ModifyCnameReuseRequest
 * @return ModifyCnameReuseResponse
 */
ModifyCnameReuseResponse Client::modifyCnameReuse(const ModifyCnameReuseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCnameReuseWithOptions(request, runtime);
}

/**
 * @summary Modifies the forwarding rule of a website.
 *
 * @param request ModifyDomainResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDomainResourceResponse
 */
ModifyDomainResourceResponse Client::modifyDomainResourceWithOptions(const ModifyDomainResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasHttpsExt()) {
    query["HttpsExt"] = request.httpsExt();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.instanceIds();
  }

  if (!!request.hasProxyTypes()) {
    query["ProxyTypes"] = request.proxyTypes();
  }

  if (!!request.hasRealServers()) {
    query["RealServers"] = request.realServers();
  }

  if (!!request.hasRsType()) {
    query["RsType"] = request.rsType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDomainResource"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDomainResourceResponse>();
}

/**
 * @summary Modifies the forwarding rule of a website.
 *
 * @param request ModifyDomainResourceRequest
 * @return ModifyDomainResourceResponse
 */
ModifyDomainResourceResponse Client::modifyDomainResource(const ModifyDomainResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDomainResourceWithOptions(request, runtime);
}

/**
 * @summary Modifies the burstable protection bandwidth of a specified Anti-DDoS Proxy (Chinese Mainland) instance.
 *
 * @description >  This operation is suitable only for Anti-DDoS Proxy (Chinese Mainland).
 *
 * @param request ModifyElasticBandWidthRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyElasticBandWidthResponse
 */
ModifyElasticBandWidthResponse Client::modifyElasticBandWidthWithOptions(const ModifyElasticBandWidthRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasElasticBandwidth()) {
    query["ElasticBandwidth"] = request.elasticBandwidth();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyElasticBandWidth"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyElasticBandWidthResponse>();
}

/**
 * @summary Modifies the burstable protection bandwidth of a specified Anti-DDoS Proxy (Chinese Mainland) instance.
 *
 * @description >  This operation is suitable only for Anti-DDoS Proxy (Chinese Mainland).
 *
 * @param request ModifyElasticBandWidthRequest
 * @return ModifyElasticBandWidthResponse
 */
ModifyElasticBandWidthResponse Client::modifyElasticBandWidth(const ModifyElasticBandWidthRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyElasticBandWidthWithOptions(request, runtime);
}

/**
 * @summary Modifies the burstable clean bandwidth for an Anti-DDoS Pro or Anti-DDoS Premium instance.
 *
 * @description Before you call this operation, make sure that you have fully understood the billing method and [pricing](https://help.aliyun.com/document_detail/283754.html) of the burstable clean bandwidth feature. After you call this operation for the first time, the modification immediately takes effect.
 *
 * @param request ModifyElasticBizBandWidthRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyElasticBizBandWidthResponse
 */
ModifyElasticBizBandWidthResponse Client::modifyElasticBizBandWidthWithOptions(const ModifyElasticBizBandWidthRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasElasticBizBandwidth()) {
    query["ElasticBizBandwidth"] = request.elasticBizBandwidth();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMode()) {
    query["Mode"] = request.mode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyElasticBizBandWidth"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyElasticBizBandWidthResponse>();
}

/**
 * @summary Modifies the burstable clean bandwidth for an Anti-DDoS Pro or Anti-DDoS Premium instance.
 *
 * @description Before you call this operation, make sure that you have fully understood the billing method and [pricing](https://help.aliyun.com/document_detail/283754.html) of the burstable clean bandwidth feature. After you call this operation for the first time, the modification immediately takes effect.
 *
 * @param request ModifyElasticBizBandWidthRequest
 * @return ModifyElasticBizBandWidthResponse
 */
ModifyElasticBizBandWidthResponse Client::modifyElasticBizBandWidth(const ModifyElasticBizBandWidthRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyElasticBizBandWidthWithOptions(request, runtime);
}

/**
 * @summary Configures the burstable QPS and mode of an Anti-DDoS Proxy instance.
 *
 * @description You can enable burstable QPS only for IPv4 instances.
 *
 * @param request ModifyElasticBizQpsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyElasticBizQpsResponse
 */
ModifyElasticBizQpsResponse Client::modifyElasticBizQpsWithOptions(const ModifyElasticBizQpsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMode()) {
    query["Mode"] = request.mode();
  }

  if (!!request.hasOpsElasticQps()) {
    query["OpsElasticQps"] = request.opsElasticQps();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyElasticBizQps"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyElasticBizQpsResponse>();
}

/**
 * @summary Configures the burstable QPS and mode of an Anti-DDoS Proxy instance.
 *
 * @description You can enable burstable QPS only for IPv4 instances.
 *
 * @param request ModifyElasticBizQpsRequest
 * @return ModifyElasticBizQpsResponse
 */
ModifyElasticBizQpsResponse Client::modifyElasticBizQps(const ModifyElasticBizQpsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyElasticBizQpsWithOptions(request, runtime);
}

/**
 * @summary Modifies the log storage duration for Anti-DDoS Proxy.
 *
 * @param request ModifyFullLogTtlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyFullLogTtlResponse
 */
ModifyFullLogTtlResponse Client::modifyFullLogTtlWithOptions(const ModifyFullLogTtlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTtl()) {
    query["Ttl"] = request.ttl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyFullLogTtl"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyFullLogTtlResponse>();
}

/**
 * @summary Modifies the log storage duration for Anti-DDoS Proxy.
 *
 * @param request ModifyFullLogTtlRequest
 * @return ModifyFullLogTtlResponse
 */
ModifyFullLogTtlResponse Client::modifyFullLogTtl(const ModifyFullLogTtlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyFullLogTtlWithOptions(request, runtime);
}

/**
 * @summary Modifies the custom header of a domain name that is added to an Anti-DDoS Pro or Anti-DDoS Premium instance.
 *
 * @param request ModifyHeadersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyHeadersResponse
 */
ModifyHeadersResponse Client::modifyHeadersWithOptions(const ModifyHeadersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomHeaders()) {
    query["CustomHeaders"] = request.customHeaders();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyHeaders"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyHeadersResponse>();
}

/**
 * @summary Modifies the custom header of a domain name that is added to an Anti-DDoS Pro or Anti-DDoS Premium instance.
 *
 * @param request ModifyHeadersRequest
 * @return ModifyHeadersResponse
 */
ModifyHeadersResponse Client::modifyHeaders(const ModifyHeadersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyHeadersWithOptions(request, runtime);
}

/**
 * @summary Modifies the Layer 4 or Layer 7 health check configuration of a port forwarding rule.
 *
 * @param request ModifyHealthCheckConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyHealthCheckConfigResponse
 */
ModifyHealthCheckConfigResponse Client::modifyHealthCheckConfigWithOptions(const ModifyHealthCheckConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasForwardProtocol()) {
    query["ForwardProtocol"] = request.forwardProtocol();
  }

  if (!!request.hasFrontendPort()) {
    query["FrontendPort"] = request.frontendPort();
  }

  if (!!request.hasHealthCheck()) {
    query["HealthCheck"] = request.healthCheck();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyHealthCheckConfig"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyHealthCheckConfigResponse>();
}

/**
 * @summary Modifies the Layer 4 or Layer 7 health check configuration of a port forwarding rule.
 *
 * @param request ModifyHealthCheckConfigRequest
 * @return ModifyHealthCheckConfigResponse
 */
ModifyHealthCheckConfigResponse Client::modifyHealthCheckConfig(const ModifyHealthCheckConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyHealthCheckConfigWithOptions(request, runtime);
}

/**
 * @summary Enables or disables HTTP/2 for the forwarding rule of a website.
 *
 * @description >  This operation is suitable only for Anti-DDoS Proxy (Chinese Mainland).
 *
 * @param request ModifyHttp2EnableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyHttp2EnableResponse
 */
ModifyHttp2EnableResponse Client::modifyHttp2EnableWithOptions(const ModifyHttp2EnableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.enable();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyHttp2Enable"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyHttp2EnableResponse>();
}

/**
 * @summary Enables or disables HTTP/2 for the forwarding rule of a website.
 *
 * @description >  This operation is suitable only for Anti-DDoS Proxy (Chinese Mainland).
 *
 * @param request ModifyHttp2EnableRequest
 * @return ModifyHttp2EnableResponse
 */
ModifyHttp2EnableResponse Client::modifyHttp2Enable(const ModifyHttp2EnableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyHttp2EnableWithOptions(request, runtime);
}

/**
 * @summary Instance adjustment, similar to BSS adjustment
 *
 * @param request ModifyInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceResponse
 */
ModifyInstanceResponse Client::modifyInstanceWithOptions(const ModifyInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddressType()) {
    query["AddressType"] = request.addressType();
  }

  if (!!request.hasBandwidth()) {
    query["Bandwidth"] = request.bandwidth();
  }

  if (!!request.hasBaseBandwidth()) {
    query["BaseBandwidth"] = request.baseBandwidth();
  }

  if (!!request.hasDomainCount()) {
    query["DomainCount"] = request.domainCount();
  }

  if (!!request.hasEditionSale()) {
    query["EditionSale"] = request.editionSale();
  }

  if (!!request.hasFunctionVersion()) {
    query["FunctionVersion"] = request.functionVersion();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasModifyType()) {
    query["ModifyType"] = request.modifyType();
  }

  if (!!request.hasNormalBandwidth()) {
    query["NormalBandwidth"] = request.normalBandwidth();
  }

  if (!!request.hasNormalQps()) {
    query["NormalQps"] = request.normalQps();
  }

  if (!!request.hasPortCount()) {
    query["PortCount"] = request.portCount();
  }

  if (!!request.hasProductPlan()) {
    query["ProductPlan"] = request.productPlan();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.productType();
  }

  if (!!request.hasServiceBandwidth()) {
    query["ServiceBandwidth"] = request.serviceBandwidth();
  }

  if (!!request.hasServicePartner()) {
    query["ServicePartner"] = request.servicePartner();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyInstance"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceResponse>();
}

/**
 * @summary Instance adjustment, similar to BSS adjustment
 *
 * @param request ModifyInstanceRequest
 * @return ModifyInstanceResponse
 */
ModifyInstanceResponse Client::modifyInstance(const ModifyInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceWithOptions(request, runtime);
}

/**
 * @summary Modifies the description of an Anti-DDoS Proxy instance.
 *
 * @param request ModifyInstanceRemarkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceRemarkResponse
 */
ModifyInstanceRemarkResponse Client::modifyInstanceRemarkWithOptions(const ModifyInstanceRemarkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.remark();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyInstanceRemark"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceRemarkResponse>();
}

/**
 * @summary Modifies the description of an Anti-DDoS Proxy instance.
 *
 * @param request ModifyInstanceRemarkRequest
 * @return ModifyInstanceRemarkResponse
 */
ModifyInstanceRemarkResponse Client::modifyInstanceRemark(const ModifyInstanceRemarkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceRemarkWithOptions(request, runtime);
}

/**
 * @summary Modifies the session persistence and DDoS mitigation policy settings of a port forwarding rule.
 *
 * @param request ModifyNetworkRuleAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyNetworkRuleAttributeResponse
 */
ModifyNetworkRuleAttributeResponse Client::modifyNetworkRuleAttributeWithOptions(const ModifyNetworkRuleAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfig()) {
    query["Config"] = request.config();
  }

  if (!!request.hasForwardProtocol()) {
    query["ForwardProtocol"] = request.forwardProtocol();
  }

  if (!!request.hasFrontendPort()) {
    query["FrontendPort"] = request.frontendPort();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasModule()) {
    query["Module"] = request.module();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyNetworkRuleAttribute"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyNetworkRuleAttributeResponse>();
}

/**
 * @summary Modifies the session persistence and DDoS mitigation policy settings of a port forwarding rule.
 *
 * @param request ModifyNetworkRuleAttributeRequest
 * @return ModifyNetworkRuleAttributeResponse
 */
ModifyNetworkRuleAttributeResponse Client::modifyNetworkRuleAttribute(const ModifyNetworkRuleAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyNetworkRuleAttributeWithOptions(request, runtime);
}

/**
 * @summary Specifies whether to enable the Online Certificate Status Protocol (OCSP) feature.
 *
 * @description This feature is available only for a website that supports HTTPS. If HTTPS is selected for Protocol, we recommend that you enable this feature.
 *
 * @param request ModifyOcspStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyOcspStatusResponse
 */
ModifyOcspStatusResponse Client::modifyOcspStatusWithOptions(const ModifyOcspStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.enable();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyOcspStatus"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyOcspStatusResponse>();
}

/**
 * @summary Specifies whether to enable the Online Certificate Status Protocol (OCSP) feature.
 *
 * @description This feature is available only for a website that supports HTTPS. If HTTPS is selected for Protocol, we recommend that you enable this feature.
 *
 * @param request ModifyOcspStatusRequest
 * @return ModifyOcspStatusResponse
 */
ModifyOcspStatusResponse Client::modifyOcspStatus(const ModifyOcspStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyOcspStatusWithOptions(request, runtime);
}

/**
 * @summary Modifies a port forwarding rule.
 *
 * @description You can call the ModifyPort operation by using Terraform. For more information about Terraform, see [What is Terraform?](https://help.aliyun.com/document_detail/95820.html).
 *
 * @param request ModifyPortRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyPortResponse
 */
ModifyPortResponse Client::modifyPortWithOptions(const ModifyPortRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackendPort()) {
    query["BackendPort"] = request.backendPort();
  }

  if (!!request.hasFrontendPort()) {
    query["FrontendPort"] = request.frontendPort();
  }

  if (!!request.hasFrontendProtocol()) {
    query["FrontendProtocol"] = request.frontendProtocol();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasProxyEnable()) {
    query["ProxyEnable"] = request.proxyEnable();
  }

  if (!!request.hasRealServers()) {
    query["RealServers"] = request.realServers();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyPort"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyPortResponse>();
}

/**
 * @summary Modifies a port forwarding rule.
 *
 * @description You can call the ModifyPort operation by using Terraform. For more information about Terraform, see [What is Terraform?](https://help.aliyun.com/document_detail/95820.html).
 *
 * @param request ModifyPortRequest
 * @return ModifyPortResponse
 */
ModifyPortResponse Client::modifyPort(const ModifyPortRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyPortWithOptions(request, runtime);
}

/**
 * @summary Modifies the Intelligent Protection configuration of a non-website service.
 *
 * @param request ModifyPortAutoCcStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyPortAutoCcStatusResponse
 */
ModifyPortAutoCcStatusResponse Client::modifyPortAutoCcStatusWithOptions(const ModifyPortAutoCcStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMode()) {
    query["Mode"] = request.mode();
  }

  if (!!request.hasSwitch()) {
    query["Switch"] = request._switch();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyPortAutoCcStatus"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyPortAutoCcStatusResponse>();
}

/**
 * @summary Modifies the Intelligent Protection configuration of a non-website service.
 *
 * @param request ModifyPortAutoCcStatusRequest
 * @return ModifyPortAutoCcStatusResponse
 */
ModifyPortAutoCcStatusResponse Client::modifyPortAutoCcStatus(const ModifyPortAutoCcStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyPortAutoCcStatusWithOptions(request, runtime);
}

/**
 * @summary Switches between the metering methods of the burstable clean bandwidth feature.
 *
 * @param request ModifyQpsModeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyQpsModeResponse
 */
ModifyQpsModeResponse Client::modifyQpsModeWithOptions(const ModifyQpsModeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMode()) {
    query["Mode"] = request.mode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyQpsMode"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyQpsModeResponse>();
}

/**
 * @summary Switches between the metering methods of the burstable clean bandwidth feature.
 *
 * @param request ModifyQpsModeRequest
 * @return ModifyQpsModeResponse
 */
ModifyQpsModeResponse Client::modifyQpsMode(const ModifyQpsModeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyQpsModeWithOptions(request, runtime);
}

/**
 * @summary Modifies a scenario-specific custom policy.
 *
 * @param request ModifySceneDefensePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySceneDefensePolicyResponse
 */
ModifySceneDefensePolicyResponse Client::modifySceneDefensePolicyWithOptions(const ModifySceneDefensePolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.policyId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasTemplate()) {
    query["Template"] = request._template();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySceneDefensePolicy"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySceneDefensePolicyResponse>();
}

/**
 * @summary Modifies a scenario-specific custom policy.
 *
 * @param request ModifySceneDefensePolicyRequest
 * @return ModifySceneDefensePolicyResponse
 */
ModifySceneDefensePolicyResponse Client::modifySceneDefensePolicy(const ModifySceneDefensePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySceneDefensePolicyWithOptions(request, runtime);
}

/**
 * @summary Modifies the scheduling rule of Sec-Traffic Manager.
 *
 * @param request ModifySchedulerRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySchedulerRuleResponse
 */
ModifySchedulerRuleResponse Client::modifySchedulerRuleWithOptions(const ModifySchedulerRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasParam()) {
    query["Param"] = request.param();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  if (!!request.hasRuleType()) {
    query["RuleType"] = request.ruleType();
  }

  if (!!request.hasRules()) {
    query["Rules"] = request.rules();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySchedulerRule"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySchedulerRuleResponse>();
}

/**
 * @summary Modifies the scheduling rule of Sec-Traffic Manager.
 *
 * @param request ModifySchedulerRuleRequest
 * @return ModifySchedulerRuleResponse
 */
ModifySchedulerRuleResponse Client::modifySchedulerRule(const ModifySchedulerRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySchedulerRuleWithOptions(request, runtime);
}

/**
 * @summary Modifies the Transport Layer Security (TLS) policy configuration for the forwarding rule of a website.
 *
 * @param request ModifyTlsConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyTlsConfigResponse
 */
ModifyTlsConfigResponse Client::modifyTlsConfigWithOptions(const ModifyTlsConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfig()) {
    query["Config"] = request.config();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyTlsConfig"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyTlsConfigResponse>();
}

/**
 * @summary Modifies the Transport Layer Security (TLS) policy configuration for the forwarding rule of a website.
 *
 * @param request ModifyTlsConfigRequest
 * @return ModifyTlsConfigResponse
 */
ModifyTlsConfigResponse Client::modifyTlsConfig(const ModifyTlsConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyTlsConfigWithOptions(request, runtime);
}

/**
 * @summary Changes the mode of the intelligent protection feature for a website.
 *
 * @param request ModifyWebAIProtectModeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyWebAIProtectModeResponse
 */
ModifyWebAIProtectModeResponse Client::modifyWebAIProtectModeWithOptions(const ModifyWebAIProtectModeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfig()) {
    query["Config"] = request.config();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyWebAIProtectMode"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyWebAIProtectModeResponse>();
}

/**
 * @summary Changes the mode of the intelligent protection feature for a website.
 *
 * @param request ModifyWebAIProtectModeRequest
 * @return ModifyWebAIProtectModeResponse
 */
ModifyWebAIProtectModeResponse Client::modifyWebAIProtectMode(const ModifyWebAIProtectModeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyWebAIProtectModeWithOptions(request, runtime);
}

/**
 * @summary Enables or disables the Intelligent Protection policy for a website.
 *
 * @param request ModifyWebAIProtectSwitchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyWebAIProtectSwitchResponse
 */
ModifyWebAIProtectSwitchResponse Client::modifyWebAIProtectSwitchWithOptions(const ModifyWebAIProtectSwitchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfig()) {
    query["Config"] = request.config();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyWebAIProtectSwitch"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyWebAIProtectSwitchResponse>();
}

/**
 * @summary Enables or disables the Intelligent Protection policy for a website.
 *
 * @param request ModifyWebAIProtectSwitchRequest
 * @return ModifyWebAIProtectSwitchResponse
 */
ModifyWebAIProtectSwitchResponse Client::modifyWebAIProtectSwitch(const ModifyWebAIProtectSwitchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyWebAIProtectSwitchWithOptions(request, runtime);
}

/**
 * @summary Changes the mode in which a website service is added to Anti-DDoS Pro or Anti-DDoS Premium.
 *
 * @param request ModifyWebAccessModeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyWebAccessModeResponse
 */
ModifyWebAccessModeResponse Client::modifyWebAccessModeWithOptions(const ModifyWebAccessModeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessMode()) {
    query["AccessMode"] = request.accessMode();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyWebAccessMode"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyWebAccessModeResponse>();
}

/**
 * @summary Changes the mode in which a website service is added to Anti-DDoS Pro or Anti-DDoS Premium.
 *
 * @param request ModifyWebAccessModeRequest
 * @return ModifyWebAccessModeResponse
 */
ModifyWebAccessModeResponse Client::modifyWebAccessMode(const ModifyWebAccessModeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyWebAccessModeWithOptions(request, runtime);
}

/**
 * @summary Modifies the blocked locations that are configured in the Location Blacklist (Domain Names) policy for a website.
 *
 * @param request ModifyWebAreaBlockRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyWebAreaBlockResponse
 */
ModifyWebAreaBlockResponse Client::modifyWebAreaBlockWithOptions(const ModifyWebAreaBlockRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasRegions()) {
    query["Regions"] = request.regions();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyWebAreaBlock"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyWebAreaBlockResponse>();
}

/**
 * @summary Modifies the blocked locations that are configured in the Location Blacklist (Domain Names) policy for a website.
 *
 * @param request ModifyWebAreaBlockRequest
 * @return ModifyWebAreaBlockResponse
 */
ModifyWebAreaBlockResponse Client::modifyWebAreaBlock(const ModifyWebAreaBlockRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyWebAreaBlockWithOptions(request, runtime);
}

/**
 * @summary Enables or disables the Location Blacklist (Domain Names) policy for a domain name.
 *
 * @description You can call the ModifyWebAreaBlockSwitch operation to enable or disable the Location Blacklist (Domain Names) policy for a domain name.
 * ### Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ModifyWebAreaBlockSwitchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyWebAreaBlockSwitchResponse
 */
ModifyWebAreaBlockSwitchResponse Client::modifyWebAreaBlockSwitchWithOptions(const ModifyWebAreaBlockSwitchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfig()) {
    query["Config"] = request.config();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyWebAreaBlockSwitch"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyWebAreaBlockSwitchResponse>();
}

/**
 * @summary Enables or disables the Location Blacklist (Domain Names) policy for a domain name.
 *
 * @description You can call the ModifyWebAreaBlockSwitch operation to enable or disable the Location Blacklist (Domain Names) policy for a domain name.
 * ### Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ModifyWebAreaBlockSwitchRequest
 * @return ModifyWebAreaBlockSwitchResponse
 */
ModifyWebAreaBlockSwitchResponse Client::modifyWebAreaBlockSwitch(const ModifyWebAreaBlockSwitchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyWebAreaBlockSwitchWithOptions(request, runtime);
}

/**
 * @summary Enables or disables the HTTP flood mitigation feature for a website.
 *
 * @param request ModifyWebCCGlobalSwitchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyWebCCGlobalSwitchResponse
 */
ModifyWebCCGlobalSwitchResponse Client::modifyWebCCGlobalSwitchWithOptions(const ModifyWebCCGlobalSwitchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCcGlobalSwitch()) {
    query["CcGlobalSwitch"] = request.ccGlobalSwitch();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyWebCCGlobalSwitch"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyWebCCGlobalSwitchResponse>();
}

/**
 * @summary Enables or disables the HTTP flood mitigation feature for a website.
 *
 * @param request ModifyWebCCGlobalSwitchRequest
 * @return ModifyWebCCGlobalSwitchResponse
 */
ModifyWebCCGlobalSwitchResponse Client::modifyWebCCGlobalSwitch(const ModifyWebCCGlobalSwitchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyWebCCGlobalSwitchWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI ModifyWebCCRule is deprecated, please use ddoscoo::2020-01-01::ConfigWebCCRuleV2 instead.
 *
 * @summary Modifies the custom frequency control rule of a website.
 *
 * @param request ModifyWebCCRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyWebCCRuleResponse
 */
ModifyWebCCRuleResponse Client::modifyWebCCRuleWithOptions(const ModifyWebCCRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAct()) {
    query["Act"] = request.act();
  }

  if (!!request.hasCount()) {
    query["Count"] = request.count();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasMode()) {
    query["Mode"] = request.mode();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTtl()) {
    query["Ttl"] = request.ttl();
  }

  if (!!request.hasUri()) {
    query["Uri"] = request.uri();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyWebCCRule"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyWebCCRuleResponse>();
}

/**
 * @deprecated OpenAPI ModifyWebCCRule is deprecated, please use ddoscoo::2020-01-01::ConfigWebCCRuleV2 instead.
 *
 * @summary Modifies the custom frequency control rule of a website.
 *
 * @param request ModifyWebCCRuleRequest
 * @return ModifyWebCCRuleResponse
 */
ModifyWebCCRuleResponse Client::modifyWebCCRule(const ModifyWebCCRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyWebCCRuleWithOptions(request, runtime);
}

/**
 * @summary Modifies the custom rule of the Static Page Caching policy for a website.
 *
 * @param request ModifyWebCacheCustomRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyWebCacheCustomRuleResponse
 */
ModifyWebCacheCustomRuleResponse Client::modifyWebCacheCustomRuleWithOptions(const ModifyWebCacheCustomRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasRules()) {
    query["Rules"] = request.rules();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyWebCacheCustomRule"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyWebCacheCustomRuleResponse>();
}

/**
 * @summary Modifies the custom rule of the Static Page Caching policy for a website.
 *
 * @param request ModifyWebCacheCustomRuleRequest
 * @return ModifyWebCacheCustomRuleResponse
 */
ModifyWebCacheCustomRuleResponse Client::modifyWebCacheCustomRule(const ModifyWebCacheCustomRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyWebCacheCustomRuleWithOptions(request, runtime);
}

/**
 * @summary Changes the cache mode of the Static Page Caching policy for a website.
 *
 * @param request ModifyWebCacheModeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyWebCacheModeResponse
 */
ModifyWebCacheModeResponse Client::modifyWebCacheModeWithOptions(const ModifyWebCacheModeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasMode()) {
    query["Mode"] = request.mode();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyWebCacheMode"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyWebCacheModeResponse>();
}

/**
 * @summary Changes the cache mode of the Static Page Caching policy for a website.
 *
 * @param request ModifyWebCacheModeRequest
 * @return ModifyWebCacheModeResponse
 */
ModifyWebCacheModeResponse Client::modifyWebCacheMode(const ModifyWebCacheModeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyWebCacheModeWithOptions(request, runtime);
}

/**
 * @summary Enables or disables the Static Page Caching policy for a website.
 *
 * @description You can call the ModifyWebCacheSwitch operation to enable or disable the Static Page Caching policy for a website.
 * ### Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ModifyWebCacheSwitchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyWebCacheSwitchResponse
 */
ModifyWebCacheSwitchResponse Client::modifyWebCacheSwitchWithOptions(const ModifyWebCacheSwitchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.enable();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyWebCacheSwitch"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyWebCacheSwitchResponse>();
}

/**
 * @summary Enables or disables the Static Page Caching policy for a website.
 *
 * @description You can call the ModifyWebCacheSwitch operation to enable or disable the Static Page Caching policy for a website.
 * ### Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ModifyWebCacheSwitchRequest
 * @return ModifyWebCacheSwitchResponse
 */
ModifyWebCacheSwitchResponse Client::modifyWebCacheSwitch(const ModifyWebCacheSwitchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyWebCacheSwitchWithOptions(request, runtime);
}

/**
 * @summary Enables or disables the Black Lists and White Lists (Domain Names) policy for a domain name.
 *
 * @param request ModifyWebIpSetSwitchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyWebIpSetSwitchResponse
 */
ModifyWebIpSetSwitchResponse Client::modifyWebIpSetSwitchWithOptions(const ModifyWebIpSetSwitchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfig()) {
    query["Config"] = request.config();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyWebIpSetSwitch"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyWebIpSetSwitchResponse>();
}

/**
 * @summary Enables or disables the Black Lists and White Lists (Domain Names) policy for a domain name.
 *
 * @param request ModifyWebIpSetSwitchRequest
 * @return ModifyWebIpSetSwitchResponse
 */
ModifyWebIpSetSwitchResponse Client::modifyWebIpSetSwitch(const ModifyWebIpSetSwitchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyWebIpSetSwitchWithOptions(request, runtime);
}

/**
 * @summary Creates or modifies an accurate access control rule of a website.
 *
 * @param request ModifyWebPreciseAccessRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyWebPreciseAccessRuleResponse
 */
ModifyWebPreciseAccessRuleResponse Client::modifyWebPreciseAccessRuleWithOptions(const ModifyWebPreciseAccessRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasExpires()) {
    query["Expires"] = request.expires();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasRules()) {
    query["Rules"] = request.rules();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyWebPreciseAccessRule"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyWebPreciseAccessRuleResponse>();
}

/**
 * @summary Creates or modifies an accurate access control rule of a website.
 *
 * @param request ModifyWebPreciseAccessRuleRequest
 * @return ModifyWebPreciseAccessRuleResponse
 */
ModifyWebPreciseAccessRuleResponse Client::modifyWebPreciseAccessRule(const ModifyWebPreciseAccessRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyWebPreciseAccessRuleWithOptions(request, runtime);
}

/**
 * @summary Enables or disables accurate access control for a website.
 *
 * @param request ModifyWebPreciseAccessSwitchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyWebPreciseAccessSwitchResponse
 */
ModifyWebPreciseAccessSwitchResponse Client::modifyWebPreciseAccessSwitchWithOptions(const ModifyWebPreciseAccessSwitchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfig()) {
    query["Config"] = request.config();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyWebPreciseAccessSwitch"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyWebPreciseAccessSwitchResponse>();
}

/**
 * @summary Enables or disables accurate access control for a website.
 *
 * @param request ModifyWebPreciseAccessSwitchRequest
 * @return ModifyWebPreciseAccessSwitchResponse
 */
ModifyWebPreciseAccessSwitchResponse Client::modifyWebPreciseAccessSwitch(const ModifyWebPreciseAccessSwitchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyWebPreciseAccessSwitchWithOptions(request, runtime);
}

/**
 * @summary Modifies the forwarding rule of a website.
 *
 * @description ## Debugging
 * [OpenAPI Explorer automatically calculates the signature value. For your convenience, we recommend that you call this operation in OpenAPI Explorer. OpenAPI Explorer dynamically generates the sample code of the operation for different SDKs.](https://api.aliyun.com/#product=ddoscoo\\&api=ModifyWebRule\\&type=RPC\\&version=2020-01-01)
 *
 * @param request ModifyWebRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyWebRuleResponse
 */
ModifyWebRuleResponse Client::modifyWebRuleWithOptions(const ModifyWebRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasHttpsExt()) {
    query["HttpsExt"] = request.httpsExt();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.instanceIds();
  }

  if (!!request.hasProxyTypes()) {
    query["ProxyTypes"] = request.proxyTypes();
  }

  if (!!request.hasRealServers()) {
    query["RealServers"] = request.realServers();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasRsType()) {
    query["RsType"] = request.rsType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyWebRule"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyWebRuleResponse>();
}

/**
 * @summary Modifies the forwarding rule of a website.
 *
 * @description ## Debugging
 * [OpenAPI Explorer automatically calculates the signature value. For your convenience, we recommend that you call this operation in OpenAPI Explorer. OpenAPI Explorer dynamically generates the sample code of the operation for different SDKs.](https://api.aliyun.com/#product=ddoscoo\\&api=ModifyWebRule\\&type=RPC\\&version=2020-01-01)
 *
 * @param request ModifyWebRuleRequest
 * @return ModifyWebRuleResponse
 */
ModifyWebRuleResponse Client::modifyWebRule(const ModifyWebRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyWebRuleWithOptions(request, runtime);
}

/**
 * @summary The ID of the instance that you want to release.
 * > You can release only expired instances. You can call the [DescribeInstances](https://help.aliyun.com/document_detail/91478.html) operation to query the IDs and expiration status of all instances.
 *
 * @description The ID of the request, which is used to locate and troubleshoot issues.
 *
 * @param request ReleaseInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleaseInstanceResponse
 */
ReleaseInstanceResponse Client::releaseInstanceWithOptions(const ReleaseInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReleaseInstance"},
    {"version" , "2020-01-01"},
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
 * @summary The ID of the instance that you want to release.
 * > You can release only expired instances. You can call the [DescribeInstances](https://help.aliyun.com/document_detail/91478.html) operation to query the IDs and expiration status of all instances.
 *
 * @description The ID of the request, which is used to locate and troubleshoot issues.
 *
 * @param request ReleaseInstanceRequest
 * @return ReleaseInstanceResponse
 */
ReleaseInstanceResponse Client::releaseInstance(const ReleaseInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return releaseInstanceWithOptions(request, runtime);
}

/**
 * @summary Switches service traffic to an Anti-DDoS Pro or Anti-DDoS Premium instance for scrubbing or switches service traffic back to the associated cloud resources.
 *
 * @description You can call the SwitchSchedulerRule operation to modify the resources to which service traffic is switched for a scheduling rule. For example, you can switch service traffic to an Anti-DDoS Pro or Anti-DDoS Premium instance for scrubbing or switch the service traffic back to the associated cloud resources.
 * Before you call this operation, you must have created a scheduling rule by calling the [CreateSchedulerRule](https://help.aliyun.com/document_detail/157479.html) operation.
 * ### Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request SwitchSchedulerRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SwitchSchedulerRuleResponse
 */
SwitchSchedulerRuleResponse Client::switchSchedulerRuleWithOptions(const SwitchSchedulerRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  if (!!request.hasRuleType()) {
    query["RuleType"] = request.ruleType();
  }

  if (!!request.hasSwitchData()) {
    query["SwitchData"] = request.switchData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SwitchSchedulerRule"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SwitchSchedulerRuleResponse>();
}

/**
 * @summary Switches service traffic to an Anti-DDoS Pro or Anti-DDoS Premium instance for scrubbing or switches service traffic back to the associated cloud resources.
 *
 * @description You can call the SwitchSchedulerRule operation to modify the resources to which service traffic is switched for a scheduling rule. For example, you can switch service traffic to an Anti-DDoS Pro or Anti-DDoS Premium instance for scrubbing or switch the service traffic back to the associated cloud resources.
 * Before you call this operation, you must have created a scheduling rule by calling the [CreateSchedulerRule](https://help.aliyun.com/document_detail/157479.html) operation.
 * ### Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request SwitchSchedulerRuleRequest
 * @return SwitchSchedulerRuleResponse
 */
SwitchSchedulerRuleResponse Client::switchSchedulerRule(const SwitchSchedulerRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return switchSchedulerRuleWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101