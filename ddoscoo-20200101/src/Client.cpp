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
 * @summary Adds IP addresses to the blacklist for an Anti-DDoS Pro instance.
 *
 * @description ### QPS limit
 * If you exceed the limit, your API calls are throttled, which may impact your business. To avoid throttling, call this operation at a reasonable rate.
 *
 * @param request AddAutoCcBlacklistRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddAutoCcBlacklistResponse
 */
AddAutoCcBlacklistResponse Client::addAutoCcBlacklistWithOptions(const AddAutoCcBlacklistRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBlacklist()) {
    query["Blacklist"] = request.getBlacklist();
  }

  if (!!request.hasExpireTime()) {
    query["ExpireTime"] = request.getExpireTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary Adds IP addresses to the blacklist for an Anti-DDoS Pro instance.
 *
 * @description ### QPS limit
 * If you exceed the limit, your API calls are throttled, which may impact your business. To avoid throttling, call this operation at a reasonable rate.
 *
 * @param request AddAutoCcBlacklistRequest
 * @return AddAutoCcBlacklistResponse
 */
AddAutoCcBlacklistResponse Client::addAutoCcBlacklist(const AddAutoCcBlacklistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addAutoCcBlacklistWithOptions(request, runtime);
}

/**
 * @summary Adds whitelist IP addresses for an Anti-DDoS Pro or Anti-DDoS Premium instance.
 *
 * @description This operation adds whitelist IP addresses for a single Anti-DDoS Pro or Anti-DDoS Premium instance so that the instance directly allows request traffic from the specified IP addresses.
 * After whitelist IP addresses are added, they are permanently valid by default. If you no longer need the whitelist IP addresses, invoke [EmptyAutoCcWhitelist](https://help.aliyun.com/document_detail/157505.html) to clear the whitelist IP address list.
 * ### QPS limit
 * You can invoke this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. This may affect your business. Invoke this operation within the limit.
 *
 * @param request AddAutoCcWhitelistRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddAutoCcWhitelistResponse
 */
AddAutoCcWhitelistResponse Client::addAutoCcWhitelistWithOptions(const AddAutoCcWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExpireTime()) {
    query["ExpireTime"] = request.getExpireTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasWhitelist()) {
    query["Whitelist"] = request.getWhitelist();
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
 * @summary Adds whitelist IP addresses for an Anti-DDoS Pro or Anti-DDoS Premium instance.
 *
 * @description This operation adds whitelist IP addresses for a single Anti-DDoS Pro or Anti-DDoS Premium instance so that the instance directly allows request traffic from the specified IP addresses.
 * After whitelist IP addresses are added, they are permanently valid by default. If you no longer need the whitelist IP addresses, invoke [EmptyAutoCcWhitelist](https://help.aliyun.com/document_detail/157505.html) to clear the whitelist IP address list.
 * ### QPS limit
 * You can invoke this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. This may affect your business. Invoke this operation within the limit.
 *
 * @param request AddAutoCcWhitelistRequest
 * @return AddAutoCcWhitelistResponse
 */
AddAutoCcWhitelistResponse Client::addAutoCcWhitelist(const AddAutoCcWhitelistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addAutoCcWhitelistWithOptions(request, runtime);
}

/**
 * @summary Associates an SSL certificate with a forwarding rule of a website service.
 *
 * @param request AssociateWebCertRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AssociateWebCertResponse
 */
AssociateWebCertResponse Client::associateWebCertWithOptions(const AssociateWebCertRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCert()) {
    body["Cert"] = request.getCert();
  }

  if (!!request.hasCertId()) {
    body["CertId"] = request.getCertId();
  }

  if (!!request.hasCertIdentifier()) {
    body["CertIdentifier"] = request.getCertIdentifier();
  }

  if (!!request.hasCertName()) {
    body["CertName"] = request.getCertName();
  }

  if (!!request.hasCertRegion()) {
    body["CertRegion"] = request.getCertRegion();
  }

  if (!!request.hasDomain()) {
    body["Domain"] = request.getDomain();
  }

  if (!!request.hasKey()) {
    body["Key"] = request.getKey();
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
 * @summary Associates an SSL certificate with a forwarding rule of a website service.
 *
 * @param request AssociateWebCertRequest
 * @return AssociateWebCertResponse
 */
AssociateWebCertResponse Client::associateWebCert(const AssociateWebCertRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return associateWebCertWithOptions(request, runtime);
}

/**
 * @summary Adds protected objects to a scenario-specific policy.
 *
 * @param request AttachSceneDefenseObjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachSceneDefenseObjectResponse
 */
AttachSceneDefenseObjectResponse Client::attachSceneDefenseObjectWithOptions(const AttachSceneDefenseObjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasObjectType()) {
    query["ObjectType"] = request.getObjectType();
  }

  if (!!request.hasObjects()) {
    query["Objects"] = request.getObjects();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.getPolicyId();
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
 * @summary Adds protected objects to a scenario-specific policy.
 *
 * @param request AttachSceneDefenseObjectRequest
 * @return AttachSceneDefenseObjectResponse
 */
AttachSceneDefenseObjectResponse Client::attachSceneDefenseObject(const AttachSceneDefenseObjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachSceneDefenseObjectWithOptions(request, runtime);
}

/**
 * @summary Configures the switch and level of the Anti-DDoS Global Mitigation Policy mitigation policies.
 *
 * @param request ConfigDomainSecurityProfileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigDomainSecurityProfileResponse
 */
ConfigDomainSecurityProfileResponse Client::configDomainSecurityProfileWithOptions(const ConfigDomainSecurityProfileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCluster()) {
    query["Cluster"] = request.getCluster();
  }

  if (!!request.hasConfig()) {
    query["Config"] = request.getConfig();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
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
 * @summary Configures the switch and level of the Anti-DDoS Global Mitigation Policy mitigation policies.
 *
 * @param request ConfigDomainSecurityProfileRequest
 * @return ConfigDomainSecurityProfileResponse
 */
ConfigDomainSecurityProfileResponse Client::configDomainSecurityProfile(const ConfigDomainSecurityProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configDomainSecurityProfileWithOptions(request, runtime);
}

/**
 * @summary Configures an Anti-DDoS Global Mitigation Policy.
 *
 * @param request ConfigL7GlobalRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigL7GlobalRuleResponse
 */
ConfigL7GlobalRuleResponse Client::configL7GlobalRuleWithOptions(const ConfigL7GlobalRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasRuleAttr()) {
    query["RuleAttr"] = request.getRuleAttr();
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
 * @summary Configures an Anti-DDoS Global Mitigation Policy.
 *
 * @param request ConfigL7GlobalRuleRequest
 * @return ConfigL7GlobalRuleResponse
 */
ConfigL7GlobalRuleResponse Client::configL7GlobalRule(const ConfigL7GlobalRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configL7GlobalRuleWithOptions(request, runtime);
}

/**
 * @summary Configures back-to-origin policies for website forwarding rules that have been created.
 *
 * @description If a website that is added to Anti-DDoS Pro and Anti-DDoS Premium has multiple origin servers in the website configuration, you can modify the load balancing algorithm by configuring back-to-origin policies. The default algorithm is IP Hash. You can change it to polling or Least Time. For more information, see the description of the **Policy** request parameter.
 *
 * @param request ConfigL7RsPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigL7RsPolicyResponse
 */
ConfigL7RsPolicyResponse Client::configL7RsPolicyWithOptions(const ConfigL7RsPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasPolicy()) {
    query["Policy"] = request.getPolicy();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasUpstreamRetry()) {
    query["UpstreamRetry"] = request.getUpstreamRetry();
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
 * @summary Configures back-to-origin policies for website forwarding rules that have been created.
 *
 * @description If a website that is added to Anti-DDoS Pro and Anti-DDoS Premium has multiple origin servers in the website configuration, you can modify the load balancing algorithm by configuring back-to-origin policies. The default algorithm is IP Hash. You can change it to polling or Least Time. For more information, see the description of the **Policy** request parameter.
 *
 * @param request ConfigL7RsPolicyRequest
 * @return ConfigL7RsPolicyResponse
 */
ConfigL7RsPolicyResponse Client::configL7RsPolicy(const ConfigL7RsPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configL7RsPolicyWithOptions(request, runtime);
}

/**
 * @summary Configures the persistent connection settings for back-to-origin requests of a domain name.
 *
 * @param request ConfigL7UsKeepaliveRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigL7UsKeepaliveResponse
 */
ConfigL7UsKeepaliveResponse Client::configL7UsKeepaliveWithOptions(const ConfigL7UsKeepaliveRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasDownstreamKeepalive()) {
    query["DownstreamKeepalive"] = request.getDownstreamKeepalive();
  }

  if (!!request.hasUpstreamKeepalive()) {
    query["UpstreamKeepalive"] = request.getUpstreamKeepalive();
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
 * @summary Configures the persistent connection settings for back-to-origin requests of a domain name.
 *
 * @param request ConfigL7UsKeepaliveRequest
 * @return ConfigL7UsKeepaliveResponse
 */
ConfigL7UsKeepaliveResponse Client::configL7UsKeepalive(const ConfigL7UsKeepaliveRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configL7UsKeepaliveWithOptions(request, runtime);
}

/**
 * @summary 4层带宽限速 客户专用
 *
 * @param request ConfigLayer4RealLimitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigLayer4RealLimitResponse
 */
ConfigLayer4RealLimitResponse Client::configLayer4RealLimitWithOptions(const ConfigLayer4RealLimitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLimitValue()) {
    query["LimitValue"] = request.getLimitValue();
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
 * @summary 4层带宽限速 客户专用
 *
 * @param request ConfigLayer4RealLimitRequest
 * @return ConfigLayer4RealLimitResponse
 */
ConfigLayer4RealLimitResponse Client::configLayer4RealLimit(const ConfigLayer4RealLimitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configLayer4RealLimitWithOptions(request, runtime);
}

/**
 * @summary Adds remarks to port forwarding rules.
 *
 * @param request ConfigLayer4RemarkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigLayer4RemarkResponse
 */
ConfigLayer4RemarkResponse Client::configLayer4RemarkWithOptions(const ConfigLayer4RemarkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasListeners()) {
    query["Listeners"] = request.getListeners();
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
 * @summary Adds remarks to port forwarding rules.
 *
 * @param request ConfigLayer4RemarkRequest
 * @return ConfigLayer4RemarkResponse
 */
ConfigLayer4RemarkResponse Client::configLayer4Remark(const ConfigLayer4RemarkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configLayer4RemarkWithOptions(request, runtime);
}

/**
 * @summary Modifies the back-to-origin mode of a port forwarding rule (enables or disables origin redundancy).
 *
 * @param request ConfigLayer4RuleBakModeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigLayer4RuleBakModeResponse
 */
ConfigLayer4RuleBakModeResponse Client::configLayer4RuleBakModeWithOptions(const ConfigLayer4RuleBakModeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBakMode()) {
    query["BakMode"] = request.getBakMode();
  }

  if (!!request.hasListeners()) {
    query["Listeners"] = request.getListeners();
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
 * @summary Modifies the back-to-origin mode of a port forwarding rule (enables or disables origin redundancy).
 *
 * @param request ConfigLayer4RuleBakModeRequest
 * @return ConfigLayer4RuleBakModeResponse
 */
ConfigLayer4RuleBakModeResponse Client::configLayer4RuleBakMode(const ConfigLayer4RuleBakModeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configLayer4RuleBakModeWithOptions(request, runtime);
}

/**
 * @summary Sets the primary and secondary origin server IP addresses for port forwarding rules.
 *
 * @param request ConfigLayer4RulePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigLayer4RulePolicyResponse
 */
ConfigLayer4RulePolicyResponse Client::configLayer4RulePolicyWithOptions(const ConfigLayer4RulePolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasListeners()) {
    query["Listeners"] = request.getListeners();
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
 * @summary Sets the primary and secondary origin server IP addresses for port forwarding rules.
 *
 * @param request ConfigLayer4RulePolicyRequest
 * @return ConfigLayer4RulePolicyResponse
 */
ConfigLayer4RulePolicyResponse Client::configLayer4RulePolicy(const ConfigLayer4RulePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configLayer4RulePolicyWithOptions(request, runtime);
}

/**
 * @summary Configures location blacklist settings for an Anti-DDoS Pro or Anti-DDoS Premium instance area.
 *
 * @param request ConfigNetworkRegionBlockRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigNetworkRegionBlockResponse
 */
ConfigNetworkRegionBlockResponse Client::configNetworkRegionBlockWithOptions(const ConfigNetworkRegionBlockRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfig()) {
    query["Config"] = request.getConfig();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary Configures location blacklist settings for an Anti-DDoS Pro or Anti-DDoS Premium instance area.
 *
 * @param request ConfigNetworkRegionBlockRequest
 * @return ConfigNetworkRegionBlockResponse
 */
ConfigNetworkRegionBlockResponse Client::configNetworkRegionBlock(const ConfigNetworkRegionBlockRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configNetworkRegionBlockWithOptions(request, runtime);
}

/**
 * @summary Modifies the IP addresses of the origin server.
 *
 * @param request ConfigNetworkRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigNetworkRulesResponse
 */
ConfigNetworkRulesResponse Client::configNetworkRulesWithOptions(const ConfigNetworkRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNetworkRules()) {
    query["NetworkRules"] = request.getNetworkRules();
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
 * @summary Modifies the IP addresses of the origin server.
 *
 * @param request ConfigNetworkRulesRequest
 * @return ConfigNetworkRulesResponse
 */
ConfigNetworkRulesResponse Client::configNetworkRules(const ConfigNetworkRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configNetworkRulesWithOptions(request, runtime);
}

/**
 * @summary Adds a UDP reflection attack attack prevention protection policy to filter specified reflection source ports.
 *
 * @description This operation adds a UDP reflection attack attack prevention protection policy for an Anti-DDoS Pro or Anti-DDoS Premium instance to filter specified reflection source ports.
 * ### QPS limit
 * You can invoke this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. This may affect your business. Invoke this operation as needed.
 *
 * @param request ConfigUdpReflectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigUdpReflectResponse
 */
ConfigUdpReflectResponse Client::configUdpReflectWithOptions(const ConfigUdpReflectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfig()) {
    query["Config"] = request.getConfig();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Adds a UDP reflection attack attack prevention protection policy to filter specified reflection source ports.
 *
 * @description This operation adds a UDP reflection attack attack prevention protection policy for an Anti-DDoS Pro or Anti-DDoS Premium instance to filter specified reflection source ports.
 * ### QPS limit
 * You can invoke this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. This may affect your business. Invoke this operation as needed.
 *
 * @param request ConfigUdpReflectRequest
 * @return ConfigUdpReflectResponse
 */
ConfigUdpReflectResponse Client::configUdpReflect(const ConfigUdpReflectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configUdpReflectWithOptions(request, runtime);
}

/**
 * @summary Creates or modifies a custom rule for frequency control (HTTP flood mitigation) of website services.
 *
 * @param request ConfigWebCCRuleV2Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigWebCCRuleV2Response
 */
ConfigWebCCRuleV2Response Client::configWebCCRuleV2WithOptions(const ConfigWebCCRuleV2Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasExpires()) {
    query["Expires"] = request.getExpires();
  }

  if (!!request.hasRuleList()) {
    query["RuleList"] = request.getRuleList();
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
 * @summary Creates or modifies a custom rule for frequency control (HTTP flood mitigation) of website services.
 *
 * @param request ConfigWebCCRuleV2Request
 * @return ConfigWebCCRuleV2Response
 */
ConfigWebCCRuleV2Response Client::configWebCCRuleV2(const ConfigWebCCRuleV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configWebCCRuleV2WithOptions(request, runtime);
}

/**
 * @summary Sets the defense mode for frequency control (HTTP flood mitigation) of a website service.
 *
 * @param request ConfigWebCCTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigWebCCTemplateResponse
 */
ConfigWebCCTemplateResponse Client::configWebCCTemplateWithOptions(const ConfigWebCCTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasTemplate()) {
    query["Template"] = request.getTemplate();
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
 * @summary Sets the defense mode for frequency control (HTTP flood mitigation) of a website service.
 *
 * @param request ConfigWebCCTemplateRequest
 * @return ConfigWebCCTemplateResponse
 */
ConfigWebCCTemplateResponse Client::configWebCCTemplate(const ConfigWebCCTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configWebCCTemplateWithOptions(request, runtime);
}

/**
 * @summary Configures the IP blacklist and whitelist for a website.
 *
 * @param request ConfigWebIpSetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigWebIpSetResponse
 */
ConfigWebIpSetResponse Client::configWebIpSetWithOptions(const ConfigWebIpSetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBlackList()) {
    query["BlackList"] = request.getBlackList();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasWhiteList()) {
    query["WhiteList"] = request.getWhiteList();
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
 * @summary Configures the IP blacklist and whitelist for a website.
 *
 * @param request ConfigWebIpSetRequest
 * @return ConfigWebIpSetResponse
 */
ConfigWebIpSetResponse Client::configWebIpSet(const ConfigWebIpSetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configWebIpSetWithOptions(request, runtime);
}

/**
 * @summary Creates an asynchronous export task to export website forwarding rules, port forwarding rules, session persistence and health check configurations, DDoS mitigation policies, or IP blacklists and whitelists.
 *
 * @param request CreateAsyncTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAsyncTaskResponse
 */
CreateAsyncTaskResponse Client::createAsyncTaskWithOptions(const CreateAsyncTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasTaskParams()) {
    query["TaskParams"] = request.getTaskParams();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.getTaskType();
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
 * @summary Creates an asynchronous export task to export website forwarding rules, port forwarding rules, session persistence and health check configurations, DDoS mitigation policies, or IP blacklists and whitelists.
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
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasHttpsExt()) {
    query["HttpsExt"] = request.getHttpsExt();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasProxyTypes()) {
    query["ProxyTypes"] = request.getProxyTypes();
  }

  if (!!request.hasRealServers()) {
    query["RealServers"] = request.getRealServers();
  }

  if (!!request.hasRsType()) {
    query["RsType"] = request.getRsType();
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
 * @summary Creates port forwarding rules.
 *
 * @param request CreateNetworkRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateNetworkRulesResponse
 */
CreateNetworkRulesResponse Client::createNetworkRulesWithOptions(const CreateNetworkRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIpMode()) {
    query["IpMode"] = request.getIpMode();
  }

  if (!!request.hasNetworkRules()) {
    query["NetworkRules"] = request.getNetworkRules();
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
 * @summary Creates port forwarding rules.
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
 * @description This operation supports integration with Terraform. For more information about Terraform, see [What is Terraform](https://help.aliyun.com/document_detail/95820.html).
 *
 * @param request CreatePortRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePortResponse
 */
CreatePortResponse Client::createPortWithOptions(const CreatePortRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackendPort()) {
    query["BackendPort"] = request.getBackendPort();
  }

  if (!!request.hasFrontendPort()) {
    query["FrontendPort"] = request.getFrontendPort();
  }

  if (!!request.hasFrontendProtocol()) {
    query["FrontendProtocol"] = request.getFrontendProtocol();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIpMode()) {
    query["IpMode"] = request.getIpMode();
  }

  if (!!request.hasProxyEnable()) {
    query["ProxyEnable"] = request.getProxyEnable();
  }

  if (!!request.hasRealServers()) {
    query["RealServers"] = request.getRealServers();
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
 * @description This operation supports integration with Terraform. For more information about Terraform, see [What is Terraform](https://help.aliyun.com/document_detail/95820.html).
 *
 * @param request CreatePortRequest
 * @return CreatePortResponse
 */
CreatePortResponse Client::createPort(const CreatePortRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPortWithOptions(request, runtime);
}

/**
 * @summary Creates a scenario-specific policy.
 *
 * @param request CreateSceneDefensePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSceneDefensePolicyResponse
 */
CreateSceneDefensePolicyResponse Client::createSceneDefensePolicyWithOptions(const CreateSceneDefensePolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTemplate()) {
    query["Template"] = request.getTemplate();
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
 * @summary Creates a scenario-specific policy.
 *
 * @param request CreateSceneDefensePolicyRequest
 * @return CreateSceneDefensePolicyResponse
 */
CreateSceneDefensePolicyResponse Client::createSceneDefensePolicy(const CreateSceneDefensePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSceneDefensePolicyWithOptions(request, runtime);
}

/**
 * @summary Creates a Sec-Traffic Manager rule.
 *
 * @param request CreateSchedulerRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSchedulerRuleResponse
 */
CreateSchedulerRuleResponse Client::createSchedulerRuleWithOptions(const CreateSchedulerRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasParam()) {
    query["Param"] = request.getParam();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasRuleType()) {
    query["RuleType"] = request.getRuleType();
  }

  if (!!request.hasRules()) {
    query["Rules"] = request.getRules();
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
 * @summary Creates a Sec-Traffic Manager rule.
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
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceIds()) {
    query["ResourceIds"] = request.getResourceIds();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
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
 * @summary Creates a custom rule for website HTTP flood protection (CC protection).
 *
 * @param request CreateWebCCRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWebCCRuleResponse
 */
CreateWebCCRuleResponse Client::createWebCCRuleWithOptions(const CreateWebCCRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAct()) {
    query["Act"] = request.getAct();
  }

  if (!!request.hasCount()) {
    query["Count"] = request.getCount();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasMode()) {
    query["Mode"] = request.getMode();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasTtl()) {
    query["Ttl"] = request.getTtl();
  }

  if (!!request.hasUri()) {
    query["Uri"] = request.getUri();
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
 * @summary Creates a custom rule for website HTTP flood protection (CC protection).
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
    query["DefenseId"] = request.getDefenseId();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasHttpsExt()) {
    query["HttpsExt"] = request.getHttpsExt();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasRsType()) {
    query["RsType"] = request.getRsType();
  }

  if (!!request.hasRules()) {
    query["Rules"] = request.getRules();
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
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
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
 * @summary Removes IP addresses from the blacklist of an Anti-DDoS Pro or Anti-DDoS Premium instance.
 *
 * @param request DeleteAutoCcBlacklistRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAutoCcBlacklistResponse
 */
DeleteAutoCcBlacklistResponse Client::deleteAutoCcBlacklistWithOptions(const DeleteAutoCcBlacklistRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBlacklist()) {
    query["Blacklist"] = request.getBlacklist();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasQueryType()) {
    query["QueryType"] = request.getQueryType();
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
 * @summary Removes IP addresses from the blacklist of an Anti-DDoS Pro or Anti-DDoS Premium instance.
 *
 * @param request DeleteAutoCcBlacklistRequest
 * @return DeleteAutoCcBlacklistResponse
 */
DeleteAutoCcBlacklistResponse Client::deleteAutoCcBlacklist(const DeleteAutoCcBlacklistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAutoCcBlacklistWithOptions(request, runtime);
}

/**
 * @summary Deletes whitelist IPs for an Anti-DDoS Pro or Anti-DDoS Premium instance.
 *
 * @param request DeleteAutoCcWhitelistRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAutoCcWhitelistResponse
 */
DeleteAutoCcWhitelistResponse Client::deleteAutoCcWhitelistWithOptions(const DeleteAutoCcWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasWhitelist()) {
    query["Whitelist"] = request.getWhitelist();
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
 * @summary Deletes whitelist IPs for an Anti-DDoS Pro or Anti-DDoS Premium instance.
 *
 * @param request DeleteAutoCcWhitelistRequest
 * @return DeleteAutoCcWhitelistResponse
 */
DeleteAutoCcWhitelistResponse Client::deleteAutoCcWhitelist(const DeleteAutoCcWhitelistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAutoCcWhitelistWithOptions(request, runtime);
}

/**
 * @summary Deletes the specified website business forwarding rule.
 *
 * @param request DeleteDomainResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDomainResourceResponse
 */
DeleteDomainResourceResponse Client::deleteDomainResourceWithOptions(const DeleteDomainResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
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
 * @summary Deletes the specified website business forwarding rule.
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
    query["NetworkRule"] = request.getNetworkRule();
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
    query["BackendPort"] = request.getBackendPort();
  }

  if (!!request.hasFrontendPort()) {
    query["FrontendPort"] = request.getFrontendPort();
  }

  if (!!request.hasFrontendProtocol()) {
    query["FrontendProtocol"] = request.getFrontendProtocol();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRealServers()) {
    query["RealServers"] = request.getRealServers();
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
    query["PolicyId"] = request.getPolicyId();
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
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
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
 * @summary Removes tags from an Anti-DDoS Proxy (Chinese Mainland) instance.
 *
 * @description This API operation removes tags from an Anti-DDoS Proxy (Chinese Mainland) instance.
 * > Only Anti-DDoS Proxy (Chinese Mainland) supports the tag feature.
 * ### QPS limit
 * The queries per second (QPS) limit for a single user is 10 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Plan your calls accordingly.
 *
 * @param request DeleteTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTagResourcesResponse
 */
DeleteTagResourcesResponse Client::deleteTagResourcesWithOptions(const DeleteTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAll()) {
    query["All"] = request.getAll();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceIds()) {
    query["ResourceIds"] = request.getResourceIds();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTagKey()) {
    query["TagKey"] = request.getTagKey();
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
 * @summary Removes tags from an Anti-DDoS Proxy (Chinese Mainland) instance.
 *
 * @description This API operation removes tags from an Anti-DDoS Proxy (Chinese Mainland) instance.
 * > Only Anti-DDoS Proxy (Chinese Mainland) supports the tag feature.
 * ### QPS limit
 * The queries per second (QPS) limit for a single user is 10 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Plan your calls accordingly.
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
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
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
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasOwner()) {
    query["Owner"] = request.getOwner();
  }

  if (!!request.hasRuleNames()) {
    query["RuleNames"] = request.getRuleNames();
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
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasRuleNames()) {
    query["RuleNames"] = request.getRuleNames();
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
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasRuleNames()) {
    query["RuleNames"] = request.getRuleNames();
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
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
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
 * @summary Queries detailed information about asynchronous export tasks, including task ID, start and end times, status, parameters, results, and more.
 *
 * @description This operation queries detailed information about asynchronous export tasks, including task ID, start and end times, status, parameters, results, and more.
 * ### QPS limits
 * The single-user QPS limit for this operation is 10 queries per second (QPS). API calls that exceed this limit will be throttled, which may affect your business. You should call this operation at a reasonable rate.
 *
 * @param request DescribeAsyncTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAsyncTasksResponse
 */
DescribeAsyncTasksResponse Client::describeAsyncTasksWithOptions(const DescribeAsyncTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
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
 * @summary Queries detailed information about asynchronous export tasks, including task ID, start and end times, status, parameters, results, and more.
 *
 * @description This operation queries detailed information about asynchronous export tasks, including task ID, start and end times, status, parameters, results, and more.
 * ### QPS limits
 * The single-user QPS limit for this operation is 10 queries per second (QPS). API calls that exceed this limit will be throttled, which may affect your business. You should call this operation at a reasonable rate.
 *
 * @param request DescribeAsyncTasksRequest
 * @return DescribeAsyncTasksResponse
 */
DescribeAsyncTasksResponse Client::describeAsyncTasks(const DescribeAsyncTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAsyncTasksWithOptions(request, runtime);
}

/**
 * @summary Queries the peak value (QPS) of DDoS attacks within a specified time period.
 *
 * @param request DescribeAttackAnalysisMaxQpsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAttackAnalysisMaxQpsResponse
 */
DescribeAttackAnalysisMaxQpsResponse Client::describeAttackAnalysisMaxQpsWithOptions(const DescribeAttackAnalysisMaxQpsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.getIp();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries the peak value (QPS) of DDoS attacks within a specified time period.
 *
 * @param request DescribeAttackAnalysisMaxQpsRequest
 * @return DescribeAttackAnalysisMaxQpsResponse
 */
DescribeAttackAnalysisMaxQpsResponse Client::describeAttackAnalysisMaxQps(const DescribeAttackAnalysisMaxQpsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAttackAnalysisMaxQpsWithOptions(request, runtime);
}

/**
 * @summary Queries the blacklisted IP addresses for an Anti-DDoS Pro or Anti-DDoS Premium instance.
 *
 * @param request DescribeAutoCcBlacklistRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAutoCcBlacklistResponse
 */
DescribeAutoCcBlacklistResponse Client::describeAutoCcBlacklistWithOptions(const DescribeAutoCcBlacklistRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasKeyWord()) {
    query["KeyWord"] = request.getKeyWord();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasQueryType()) {
    query["QueryType"] = request.getQueryType();
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
 * @summary Queries the blacklisted IP addresses for an Anti-DDoS Pro or Anti-DDoS Premium instance.
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
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasQueryType()) {
    query["QueryType"] = request.getQueryType();
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
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasKeyWord()) {
    query["KeyWord"] = request.getKeyWord();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
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
    query["IpVersion"] = request.getIpVersion();
  }

  if (!!request.hasLine()) {
    query["Line"] = request.getLine();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
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
 * @summary Queries the blackhole filtering status of an Anti-DDoS Proxy instance.
 *
 * @param request DescribeBlackholeStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBlackholeStatusResponse
 */
DescribeBlackholeStatusResponse Client::describeBlackholeStatusWithOptions(const DescribeBlackholeStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
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
 * @summary Queries the blackhole filtering status of an Anti-DDoS Proxy instance.
 *
 * @param request DescribeBlackholeStatusRequest
 * @return DescribeBlackholeStatusResponse
 */
DescribeBlackholeStatusResponse Client::describeBlackholeStatus(const DescribeBlackholeStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBlackholeStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the near-origin traffic diversion configurations of an Anti-DDoS Pro and Anti-DDoS Premium instance in the Chinese mainland.
 *
 * @description This operation is used to query the near-origin traffic diversion configurations of an Anti-DDoS Pro and Anti-DDoS Premium instance in the Chinese mainland.
 * > This operation is applicable only to Anti-DDoS Pro and Anti-DDoS Premium (Chinese Mainland).
 * ### QPS limit
 * You can invoke this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. This may affect your business. Invoke this operation within the limit.
 *
 * @param request DescribeBlockStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBlockStatusResponse
 */
DescribeBlockStatusResponse Client::describeBlockStatusWithOptions(const DescribeBlockStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
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
 * @summary Queries the near-origin traffic diversion configurations of an Anti-DDoS Pro and Anti-DDoS Premium instance in the Chinese mainland.
 *
 * @description This operation is used to query the near-origin traffic diversion configurations of an Anti-DDoS Pro and Anti-DDoS Premium instance in the Chinese mainland.
 * > This operation is applicable only to Anti-DDoS Pro and Anti-DDoS Premium (Chinese Mainland).
 * ### QPS limit
 * You can invoke this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. This may affect your business. Invoke this operation within the limit.
 *
 * @param request DescribeBlockStatusRequest
 * @return DescribeBlockStatusResponse
 */
DescribeBlockStatusResponse Client::describeBlockStatus(const DescribeBlockStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBlockStatusWithOptions(request, runtime);
}

/**
 * @summary Describes the CDN interaction rule configurations for a specified domain name.
 *
 * @param request DescribeCdnLinkageRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCdnLinkageRulesResponse
 */
DescribeCdnLinkageRulesResponse Client::describeCdnLinkageRulesWithOptions(const DescribeCdnLinkageRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
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
 * @summary Describes the CDN interaction rule configurations for a specified domain name.
 *
 * @param request DescribeCdnLinkageRulesRequest
 * @return DescribeCdnLinkageRulesResponse
 */
DescribeCdnLinkageRulesResponse Client::describeCdnLinkageRules(const DescribeCdnLinkageRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCdnLinkageRulesWithOptions(request, runtime);
}

/**
 * @summary Queries all certificates that are available for a domain name. This operation does not query the certificate that is currently in use.
 *
 * @description You can call this operation to query all certificates that are available for a domain name protected by an Anti-DDoS instance. A domain name can be associated with multiple certificates. For example, a query for a specific domain name can return both a certificate for that specific domain name and a wildcard certificate.
 * > To query the certificate that is currently used by a domain name, call the [DescribeWebRules](https://help.aliyun.com/document_detail/473610.html) operation to obtain the CertName and CertRegion values. Then, call the [ListUserCertificateOrder](https://help.aliyun.com/document_detail/411733.html) operation of Certificate Management Service. Use the returned CertName value to query the corresponding certificate ID and other details.
 *
 * @param request DescribeCertsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCertsResponse
 */
DescribeCertsResponse Client::describeCertsWithOptions(const DescribeCertsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
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
 * @summary Queries all certificates that are available for a domain name. This operation does not query the certificate that is currently in use.
 *
 * @description You can call this operation to query all certificates that are available for a domain name protected by an Anti-DDoS instance. A domain name can be associated with multiple certificates. For example, a query for a specific domain name can return both a certificate for that specific domain name and a wildcard certificate.
 * > To query the certificate that is currently used by a domain name, call the [DescribeWebRules](https://help.aliyun.com/document_detail/473610.html) operation to obtain the CertName and CertRegion values. Then, call the [ListUserCertificateOrder](https://help.aliyun.com/document_detail/411733.html) operation of Certificate Management Service. Use the returned CertName value to query the corresponding certificate ID and other details.
 *
 * @param request DescribeCertsRequest
 * @return DescribeCertsResponse
 */
DescribeCertsResponse Client::describeCerts(const DescribeCertsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCertsWithOptions(request, runtime);
}

/**
 * @summary Queries the CNAME reuse information about websites.
 *
 * @description This operation is applicable only to Anti-DDoS Proxy (Outside Chinese Mainland).
 *
 * @param request DescribeCnameReusesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCnameReusesResponse
 */
DescribeCnameReusesResponse Client::describeCnameReusesWithOptions(const DescribeCnameReusesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomains()) {
    query["Domains"] = request.getDomains();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
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
 * @summary Queries the CNAME reuse information about websites.
 *
 * @description This operation is applicable only to Anti-DDoS Proxy (Outside Chinese Mainland).
 *
 * @param request DescribeCnameReusesRequest
 * @return DescribeCnameReusesResponse
 */
DescribeCnameReusesResponse Client::describeCnameReuses(const DescribeCnameReusesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCnameReusesWithOptions(request, runtime);
}

/**
 * @summary Queries attack events on Anti-DDoS Pro or Anti-DDoS Premium instances.
 *
 * @param request DescribeDDoSEventsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDDoSEventsResponse
 */
DescribeDDoSEventsResponse Client::describeDDoSEventsWithOptions(const DescribeDDoSEventsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries attack events on Anti-DDoS Pro or Anti-DDoS Premium instances.
 *
 * @param request DescribeDDoSEventsRequest
 * @return DescribeDDoSEventsResponse
 */
DescribeDDoSEventsResponse Client::describeDDoSEvents(const DescribeDDoSEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDDoSEventsWithOptions(request, runtime);
}

/**
 * @summary Queries the list of DDoS attack events.
 *
 * @description This operation is used to query the list of DDoS attack events within a specified time range by using paging. DDoS attack events contain the following information: attack start time and end time, attack type, attacked object, and peak attack traffic (peak bandwidth or peak packet forwarding rate).
 * ### Rate limit
 * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Invoke this operation at an appropriate frequency.
 *
 * @param request DescribeDDosAllEventListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDDosAllEventListResponse
 */
DescribeDDosAllEventListResponse Client::describeDDosAllEventListWithOptions(const DescribeDDosAllEventListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasEventType()) {
    query["EventType"] = request.getEventType();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.getIp();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries the list of DDoS attack events.
 *
 * @description This operation is used to query the list of DDoS attack events within a specified time range by using paging. DDoS attack events contain the following information: attack start time and end time, attack type, attacked object, and peak attack traffic (peak bandwidth or peak packet forwarding rate).
 * ### Rate limit
 * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Invoke this operation at an appropriate frequency.
 *
 * @param request DescribeDDosAllEventListRequest
 * @return DescribeDDosAllEventListResponse
 */
DescribeDDosAllEventListResponse Client::describeDDosAllEventList(const DescribeDDosAllEventListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDDosAllEventListWithOptions(request, runtime);
}

/**
 * @summary Queries the source region details of a volumetric attack.
 *
 * @description > This operation is applicable only to querying data of volumetric attacks. It is not applicable to querying data of web resource exhaustion or connection flood attacks.
 *
 * @param request DescribeDDosEventAreaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDDosEventAreaResponse
 */
DescribeDDosEventAreaResponse Client::describeDDosEventAreaWithOptions(const DescribeDDosEventAreaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEventType()) {
    query["EventType"] = request.getEventType();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.getIp();
  }

  if (!!request.hasRange()) {
    query["Range"] = request.getRange();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries the source region details of a volumetric attack.
 *
 * @description > This operation is applicable only to querying data of volumetric attacks. It is not applicable to querying data of web resource exhaustion or connection flood attacks.
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
 * @description > This operation is applicable only to querying data of volumetric attacks. It is not applicable to querying data of web resource exhaustion or connection flood attacks.
 *
 * @param request DescribeDDosEventAttackTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDDosEventAttackTypeResponse
 */
DescribeDDosEventAttackTypeResponse Client::describeDDosEventAttackTypeWithOptions(const DescribeDDosEventAttackTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEventType()) {
    query["EventType"] = request.getEventType();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.getIp();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @description > This operation is applicable only to querying data of volumetric attacks. It is not applicable to querying data of web resource exhaustion or connection flood attacks.
 *
 * @param request DescribeDDosEventAttackTypeRequest
 * @return DescribeDDosEventAttackTypeResponse
 */
DescribeDDosEventAttackTypeResponse Client::describeDDosEventAttackType(const DescribeDDosEventAttackTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDDosEventAttackTypeWithOptions(request, runtime);
}

/**
 * @summary Queries the Internet service provider (ISP) information of attack sources for a volumetric attack.
 *
 * @description > This operation is applicable only to querying data of volumetric attacks. It is not applicable to querying data of web resource exhaustion or connection flood attacks.
 *
 * @param request DescribeDDosEventIspRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDDosEventIspResponse
 */
DescribeDDosEventIspResponse Client::describeDDosEventIspWithOptions(const DescribeDDosEventIspRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEventType()) {
    query["EventType"] = request.getEventType();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.getIp();
  }

  if (!!request.hasRange()) {
    query["Range"] = request.getRange();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries the Internet service provider (ISP) information of attack sources for a volumetric attack.
 *
 * @description > This operation is applicable only to querying data of volumetric attacks. It is not applicable to querying data of web resource exhaustion or connection flood attacks.
 *
 * @param request DescribeDDosEventIspRequest
 * @return DescribeDDosEventIspResponse
 */
DescribeDDosEventIspResponse Client::describeDDosEventIsp(const DescribeDDosEventIspRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDDosEventIspWithOptions(request, runtime);
}

/**
 * @summary Queries the peak attack throughput of volumetric attacks (bps), connection flood attacks (cps), and web resource exhaustion attacks (qps).
 *
 * @param request DescribeDDosEventMaxRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDDosEventMaxResponse
 */
DescribeDDosEventMaxResponse Client::describeDDosEventMaxWithOptions(const DescribeDDosEventMaxRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.getIp();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries the peak attack throughput of volumetric attacks (bps), connection flood attacks (cps), and web resource exhaustion attacks (qps).
 *
 * @param request DescribeDDosEventMaxRequest
 * @return DescribeDDosEventMaxResponse
 */
DescribeDDosEventMaxResponse Client::describeDDosEventMax(const DescribeDDosEventMaxRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDDosEventMaxWithOptions(request, runtime);
}

/**
 * @summary Queries the details of attack source IP addresses for a specific volumetric attack event.
 *
 * @description > This operation is applicable only to querying data of volumetric attacks. It is not applicable to querying data of web resource exhaustion or connection flood attacks.
 *
 * @param request DescribeDDosEventSrcIpRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDDosEventSrcIpResponse
 */
DescribeDDosEventSrcIpResponse Client::describeDDosEventSrcIpWithOptions(const DescribeDDosEventSrcIpRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEventType()) {
    query["EventType"] = request.getEventType();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.getIp();
  }

  if (!!request.hasRange()) {
    query["Range"] = request.getRange();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries the details of attack source IP addresses for a specific volumetric attack event.
 *
 * @description > This operation is applicable only to querying data of volumetric attacks. It is not applicable to querying data of web resource exhaustion or connection flood attacks.
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
    query["ResourceGroupId"] = request.getResourceGroupId();
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
 * @summary Queries the advanced mitigation logs of Anti-DDoS Premium.
 *
 * @description > This API operation is available only for the Anti-DDoS Premium service.
 *
 * @param request DescribeDefenseRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDefenseRecordsResponse
 */
DescribeDefenseRecordsResponse Client::describeDefenseRecordsWithOptions(const DescribeDefenseRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries the advanced mitigation logs of Anti-DDoS Premium.
 *
 * @description > This API operation is available only for the Anti-DDoS Premium service.
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
    query["EventType"] = request.getEventType();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.getIp();
  }

  if (!!request.hasRange()) {
    query["Range"] = request.getRange();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries the status of the CC protection feature for the specified domain names.
 *
 * @param request DescribeDomainCcProtectSwitchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainCcProtectSwitchResponse
 */
DescribeDomainCcProtectSwitchResponse Client::describeDomainCcProtectSwitchWithOptions(const DescribeDomainCcProtectSwitchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomains()) {
    query["Domains"] = request.getDomains();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainCcProtectSwitch"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainCcProtectSwitchResponse>();
}

/**
 * @summary Queries the status of the CC protection feature for the specified domain names.
 *
 * @param request DescribeDomainCcProtectSwitchRequest
 * @return DescribeDomainCcProtectSwitchResponse
 */
DescribeDomainCcProtectSwitchResponse Client::describeDomainCcProtectSwitch(const DescribeDomainCcProtectSwitchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainCcProtectSwitchWithOptions(request, runtime);
}

/**
 * @summary Queries the HTTP/2.0 fingerprint information of a website.
 *
 * @param request DescribeDomainH2FingerprintRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainH2FingerprintResponse
 */
DescribeDomainH2FingerprintResponse Client::describeDomainH2FingerprintWithOptions(const DescribeDomainH2FingerprintRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.getLimit();
  }

  if (!!request.hasQueryType()) {
    query["QueryType"] = request.getQueryType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries the HTTP/2.0 fingerprint information of a website.
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
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Describes the forwarding rule configuration for a web service.
 *
 * @description This API returns a paginated list of detailed configurations for your website forwarding rules, such as website domain name, protocol, HTTPS settings, and CC attack protection configuration.
 * This API integrates with Terraform. For more information about Terraform, see [What is Terraform?](https://help.aliyun.com/document_detail/95820.html).
 * ### QPS limit
 * The per-user QPS limit for this API is 50 calls per second. If you exceed this limit, API calls are throttled, which may affect your business. Plan your API calls accordingly.
 *
 * @param request DescribeDomainResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainResourceResponse
 */
DescribeDomainResourceResponse Client::describeDomainResourceWithOptions(const DescribeDomainResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasQueryDomainPattern()) {
    query["QueryDomainPattern"] = request.getQueryDomainPattern();
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
 * @summary Describes the forwarding rule configuration for a web service.
 *
 * @description This API returns a paginated list of detailed configurations for your website forwarding rules, such as website domain name, protocol, HTTPS settings, and CC attack protection configuration.
 * This API integrates with Terraform. For more information about Terraform, see [What is Terraform?](https://help.aliyun.com/document_detail/95820.html).
 * ### QPS limit
 * The per-user QPS limit for this API is 50 calls per second. If you exceed this limit, API calls are throttled, which may affect your business. Plan your API calls accordingly.
 *
 * @param request DescribeDomainResourceRequest
 * @return DescribeDomainResourceResponse
 */
DescribeDomainResourceResponse Client::describeDomainResource(const DescribeDomainResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainResourceWithOptions(request, runtime);
}

/**
 * @summary 查询安全概要属性开关
 *
 * @param request DescribeDomainSecurityProfileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainSecurityProfileResponse
 */
DescribeDomainSecurityProfileResponse Client::describeDomainSecurityProfileWithOptions(const DescribeDomainSecurityProfileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
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
 * @summary 查询安全概要属性开关
 *
 * @param request DescribeDomainSecurityProfileRequest
 * @return DescribeDomainSecurityProfileResponse
 */
DescribeDomainSecurityProfileResponse Client::describeDomainSecurityProfile(const DescribeDomainSecurityProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainSecurityProfileWithOptions(request, runtime);
}

/**
 * @summary Queries the statistics on HTTP status codes of a website within a specified period.
 *
 * @param request DescribeDomainStatusCodeCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainStatusCodeCountResponse
 */
DescribeDomainStatusCodeCountResponse Client::describeDomainStatusCodeCountWithOptions(const DescribeDomainStatusCodeCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries the statistics on HTTP status codes of a website within a specified period.
 *
 * @param request DescribeDomainStatusCodeCountRequest
 * @return DescribeDomainStatusCodeCountResponse
 */
DescribeDomainStatusCodeCountResponse Client::describeDomainStatusCodeCount(const DescribeDomainStatusCodeCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainStatusCodeCountWithOptions(request, runtime);
}

/**
 * @summary Queries the response status code statistics information for website services.
 *
 * @param request DescribeDomainStatusCodeListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainStatusCodeListResponse
 */
DescribeDomainStatusCodeListResponse Client::describeDomainStatusCodeListWithOptions(const DescribeDomainStatusCodeListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasQueryType()) {
    query["QueryType"] = request.getQueryType();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries the response status code statistics information for website services.
 *
 * @param request DescribeDomainStatusCodeListRequest
 * @return DescribeDomainStatusCodeListResponse
 */
DescribeDomainStatusCodeListResponse Client::describeDomainStatusCodeList(const DescribeDomainStatusCodeListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainStatusCodeListWithOptions(request, runtime);
}

/**
 * @summary Queries the peak queries per second (QPS) data of website services within a specified time period, including attack QPS and total QPS.
 *
 * @param request DescribeDomainTopAttackListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainTopAttackListResponse
 */
DescribeDomainTopAttackListResponse Client::describeDomainTopAttackListWithOptions(const DescribeDomainTopAttackListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries the peak queries per second (QPS) data of website services within a specified time period, including attack QPS and total QPS.
 *
 * @param request DescribeDomainTopAttackListRequest
 * @return DescribeDomainTopAttackListResponse
 */
DescribeDomainTopAttackListResponse Client::describeDomainTopAttackList(const DescribeDomainTopAttackListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainTopAttackListWithOptions(request, runtime);
}

/**
 * @summary Queries the top N client fingerprints for a website.
 *
 * @param request DescribeDomainTopFingerprintRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainTopFingerprintResponse
 */
DescribeDomainTopFingerprintResponse Client::describeDomainTopFingerprintWithOptions(const DescribeDomainTopFingerprintRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.getLimit();
  }

  if (!!request.hasQueryType()) {
    query["QueryType"] = request.getQueryType();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries the top N client fingerprints for a website.
 *
 * @param request DescribeDomainTopFingerprintRequest
 * @return DescribeDomainTopFingerprintResponse
 */
DescribeDomainTopFingerprintResponse Client::describeDomainTopFingerprint(const DescribeDomainTopFingerprintRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainTopFingerprintWithOptions(request, runtime);
}

/**
 * @summary Queries the top N HTTP methods for a website.
 *
 * @param request DescribeDomainTopHttpMethodRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainTopHttpMethodResponse
 */
DescribeDomainTopHttpMethodResponse Client::describeDomainTopHttpMethodWithOptions(const DescribeDomainTopHttpMethodRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.getLimit();
  }

  if (!!request.hasQueryType()) {
    query["QueryType"] = request.getQueryType();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries the top N HTTP methods for a website.
 *
 * @param request DescribeDomainTopHttpMethodRequest
 * @return DescribeDomainTopHttpMethodResponse
 */
DescribeDomainTopHttpMethodResponse Client::describeDomainTopHttpMethod(const DescribeDomainTopHttpMethodRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainTopHttpMethodWithOptions(request, runtime);
}

/**
 * @summary Queries the top N referers of a website.
 *
 * @param request DescribeDomainTopRefererRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainTopRefererResponse
 */
DescribeDomainTopRefererResponse Client::describeDomainTopRefererWithOptions(const DescribeDomainTopRefererRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.getLimit();
  }

  if (!!request.hasQueryType()) {
    query["QueryType"] = request.getQueryType();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries the top N referers of a website.
 *
 * @param request DescribeDomainTopRefererRequest
 * @return DescribeDomainTopRefererResponse
 */
DescribeDomainTopRefererResponse Client::describeDomainTopReferer(const DescribeDomainTopRefererRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainTopRefererWithOptions(request, runtime);
}

/**
 * @summary Queries the top User-Agents for a website.
 *
 * @param request DescribeDomainTopUserAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainTopUserAgentResponse
 */
DescribeDomainTopUserAgentResponse Client::describeDomainTopUserAgentWithOptions(const DescribeDomainTopUserAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.getLimit();
  }

  if (!!request.hasQueryType()) {
    query["QueryType"] = request.getQueryType();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries the top User-Agents for a website.
 *
 * @param request DescribeDomainTopUserAgentRequest
 * @return DescribeDomainTopUserAgentResponse
 */
DescribeDomainTopUserAgentResponse Client::describeDomainTopUserAgent(const DescribeDomainTopUserAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainTopUserAgentWithOptions(request, runtime);
}

/**
 * @summary Queries the distribution of request source countries for website services within a specified time period.
 *
 * @param request DescribeDomainViewSourceCountriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainViewSourceCountriesResponse
 */
DescribeDomainViewSourceCountriesResponse Client::describeDomainViewSourceCountriesWithOptions(const DescribeDomainViewSourceCountriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries the distribution of request source countries for website services within a specified time period.
 *
 * @param request DescribeDomainViewSourceCountriesRequest
 * @return DescribeDomainViewSourceCountriesResponse
 */
DescribeDomainViewSourceCountriesResponse Client::describeDomainViewSourceCountries(const DescribeDomainViewSourceCountriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainViewSourceCountriesWithOptions(request, runtime);
}

/**
 * @summary Queries the distribution of request sources by province in China for website services within a specified time period.
 *
 * @param request DescribeDomainViewSourceProvincesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainViewSourceProvincesResponse
 */
DescribeDomainViewSourceProvincesResponse Client::describeDomainViewSourceProvincesWithOptions(const DescribeDomainViewSourceProvincesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries the distribution of request sources by province in China for website services within a specified time period.
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
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTop()) {
    query["Top"] = request.getTop();
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
 * @summary Queries the top N most visited URLs for website services within a specified time period.
 *
 * @param request DescribeDomainViewTopUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainViewTopUrlResponse
 */
DescribeDomainViewTopUrlResponse Client::describeDomainViewTopUrlWithOptions(const DescribeDomainViewTopUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInerval()) {
    query["Inerval"] = request.getInerval();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTop()) {
    query["Top"] = request.getTop();
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
 * @summary Queries the top N most visited URLs for website services within a specified time period.
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
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
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
 * @summary Queries the available burstable protection bandwidth specifications for an Anti-DDoS Pro and Anti-DDoS Premium instance in the Chinese mainland.
 *
 * @description > This operation is applicable only to Anti-DDoS Pro and Anti-DDoS Premium (the Chinese mainland) service.
 *
 * @param request DescribeElasticBandwidthSpecRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeElasticBandwidthSpecResponse
 */
DescribeElasticBandwidthSpecResponse Client::describeElasticBandwidthSpecWithOptions(const DescribeElasticBandwidthSpecRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary Queries the available burstable protection bandwidth specifications for an Anti-DDoS Pro and Anti-DDoS Premium instance in the Chinese mainland.
 *
 * @description > This operation is applicable only to Anti-DDoS Pro and Anti-DDoS Premium (the Chinese mainland) service.
 *
 * @param request DescribeElasticBandwidthSpecRequest
 * @return DescribeElasticBandwidthSpecResponse
 */
DescribeElasticBandwidthSpecResponse Client::describeElasticBandwidthSpec(const DescribeElasticBandwidthSpecRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeElasticBandwidthSpecWithOptions(request, runtime);
}

/**
 * @summary Retrieves the elastic QPS time-series data for an Anti-DDoS instance.
 *
 * @param request DescribeElasticQpsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeElasticQpsResponse
 */
DescribeElasticQpsResponse Client::describeElasticQpsWithOptions(const DescribeElasticQpsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.getIp();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Retrieves the elastic QPS time-series data for an Anti-DDoS instance.
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
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.getIp();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries the custom headers for a domain name.
 *
 * @param request DescribeHeadersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHeadersResponse
 */
DescribeHeadersResponse Client::describeHeadersWithOptions(const DescribeHeadersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
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
 * @summary Queries the custom headers for a domain name.
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
    query["NetworkRules"] = request.getNetworkRules();
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
    query["NetworkRules"] = request.getNetworkRules();
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
 * @summary Queries the IP address and line information of an Anti-DDoS Pro or Anti-DDoS Premium instance.
 *
 * @description This operation is used to query the IP address and line information of an Anti-DDoS Pro or Anti-DDoS Premium instance, such as the IP address, status, and protection line of the instance.
 * ### QPS limit
 * You can invoke this operation up to 10 times per second per account. If the number of calls exceeds the limit, throttling is triggered. Throttling may affect your business. Invoke this operation within the limit.
 *
 * @param request DescribeInstanceDetailsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceDetailsResponse
 */
DescribeInstanceDetailsResponse Client::describeInstanceDetailsWithOptions(const DescribeInstanceDetailsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
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
 * @summary Queries the IP address and line information of an Anti-DDoS Pro or Anti-DDoS Premium instance.
 *
 * @description This operation is used to query the IP address and line information of an Anti-DDoS Pro or Anti-DDoS Premium instance, such as the IP address, status, and protection line of the instance.
 * ### QPS limit
 * You can invoke this operation up to 10 times per second per account. If the number of calls exceeds the limit, throttling is triggered. Throttling may affect your business. Invoke this operation within the limit.
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
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
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
 * @summary Queries the IDs, editions, remarks, and IP types of Anti-DDoS Pro or Anti-DDoS Premium instances.
 *
 * @description This operation queries the IDs, editions, remarks, and IP types of all Anti-DDoS Pro or Anti-DDoS Premium instances.
 * ### QPS limit
 * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call the API operation at a reasonable rate.
 *
 * @param request DescribeInstanceIdsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceIdsResponse
 */
DescribeInstanceIdsResponse Client::describeInstanceIdsWithOptions(const DescribeInstanceIdsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEdition()) {
    query["Edition"] = request.getEdition();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
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
 * @summary Queries the IDs, editions, remarks, and IP types of Anti-DDoS Pro or Anti-DDoS Premium instances.
 *
 * @description This operation queries the IDs, editions, remarks, and IP types of all Anti-DDoS Pro or Anti-DDoS Premium instances.
 * ### QPS limit
 * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call the API operation at a reasonable rate.
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
 * @description This operation queries the specifications of multiple Anti-DDoS Pro or Anti-DDoS Premium instances in batches, such as the clean bandwidth, mitigation bandwidth, feature edition, number of protected domain names, and number of ports.
 * ### QPS limits
 * The QPS limit per user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call the API at a reasonable frequency.
 *
 * @param request DescribeInstanceSpecsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceSpecsResponse
 */
DescribeInstanceSpecsResponse Client::describeInstanceSpecsWithOptions(const DescribeInstanceSpecsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
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
 * @description This operation queries the specifications of multiple Anti-DDoS Pro or Anti-DDoS Premium instances in batches, such as the clean bandwidth, mitigation bandwidth, feature edition, number of protected domain names, and number of ports.
 * ### QPS limits
 * The QPS limit per user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call the API at a reasonable frequency.
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
    query["InstanceIds"] = request.getInstanceIds();
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
 * @summary Queries the status of a specified Anti-DDoS Pro or Anti-DDoS Premium instance.
 *
 * @param request DescribeInstanceStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceStatusResponse
 */
DescribeInstanceStatusResponse Client::describeInstanceStatusWithOptions(const DescribeInstanceStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
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
 * @summary Queries the status of a specified Anti-DDoS Pro or Anti-DDoS Premium instance.
 *
 * @param request DescribeInstanceStatusRequest
 * @return DescribeInstanceStatusResponse
 */
DescribeInstanceStatusResponse Client::describeInstanceStatus(const DescribeInstanceStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the details of Anti-DDoS Pro or Anti-DDoS Premium instances.
 *
 * @description Queries the details of Anti-DDoS Pro or Anti-DDoS Premium instances owned by the current Alibaba Cloud account by using paging. The details include the instance ID, edition, expiration time, and service traffic forwarding status.
 * ### QPS limit
 * The QPS limit for a single user is 10 invocations per second. If the limit is exceeded, API invocations are throttled, which may affect your services. Invoke this operation based on your business requirements.
 *
 * @param request DescribeInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstancesResponse
 */
DescribeInstancesResponse Client::describeInstancesWithOptions(const DescribeInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEdition()) {
    query["Edition"] = request.getEdition();
  }

  if (!!request.hasEnabled()) {
    query["Enabled"] = request.getEnabled();
  }

  if (!!request.hasExpireEndTime()) {
    query["ExpireEndTime"] = request.getExpireEndTime();
  }

  if (!!request.hasExpireStartTime()) {
    query["ExpireStartTime"] = request.getExpireStartTime();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.getIp();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
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
 * @summary Queries the details of Anti-DDoS Pro or Anti-DDoS Premium instances.
 *
 * @description Queries the details of Anti-DDoS Pro or Anti-DDoS Premium instances owned by the current Alibaba Cloud account by using paging. The details include the instance ID, edition, expiration time, and service traffic forwarding status.
 * ### QPS limit
 * The QPS limit for a single user is 10 invocations per second. If the limit is exceeded, API invocations are throttled, which may affect your services. Invoke this operation based on your business requirements.
 *
 * @param request DescribeInstancesRequest
 * @return DescribeInstancesResponse
 */
DescribeInstancesResponse Client::describeInstances(const DescribeInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries the Anti-DDoS Global Mitigation Policy.
 *
 * @param request DescribeL7GlobalRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeL7GlobalRuleResponse
 */
DescribeL7GlobalRuleResponse Client::describeL7GlobalRuleWithOptions(const DescribeL7GlobalRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
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
 * @summary Queries the Anti-DDoS Global Mitigation Policy.
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
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasRealServers()) {
    query["RealServers"] = request.getRealServers();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
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
 * @summary Queries the persistent connection settings for back-to-origin requests of a domain name.
 *
 * @param request DescribeL7UsKeepaliveRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeL7UsKeepaliveResponse
 */
DescribeL7UsKeepaliveResponse Client::describeL7UsKeepaliveWithOptions(const DescribeL7UsKeepaliveRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
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
 * @summary Queries the persistent connection settings for back-to-origin requests of a domain name.
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
    query["Listeners"] = request.getListeners();
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
    query["ResourceGroupId"] = request.getResourceGroupId();
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
 * @summary Queries the Location Blacklist configuration for an Anti-DDoS Pro or Anti-DDoS Premium instance.
 *
 * @param request DescribeNetworkRegionBlockRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNetworkRegionBlockResponse
 */
DescribeNetworkRegionBlockResponse Client::describeNetworkRegionBlockWithOptions(const DescribeNetworkRegionBlockRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary Queries the Location Blacklist configuration for an Anti-DDoS Pro or Anti-DDoS Premium instance.
 *
 * @param request DescribeNetworkRegionBlockRequest
 * @return DescribeNetworkRegionBlockResponse
 */
DescribeNetworkRegionBlockResponse Client::describeNetworkRegionBlock(const DescribeNetworkRegionBlockRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNetworkRegionBlockWithOptions(request, runtime);
}

/**
 * @summary Queries the protection settings of port forwarding rules for non-website services, including session persistence and DDoS mitigation policies.
 *
 * @param request DescribeNetworkRuleAttributesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNetworkRuleAttributesResponse
 */
DescribeNetworkRuleAttributesResponse Client::describeNetworkRuleAttributesWithOptions(const DescribeNetworkRuleAttributesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNetworkRules()) {
    query["NetworkRules"] = request.getNetworkRules();
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
 * @summary Queries the protection settings of port forwarding rules for non-website services, including session persistence and DDoS mitigation policies.
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
    query["ForwardProtocol"] = request.getForwardProtocol();
  }

  if (!!request.hasFrontendPort()) {
    query["FrontendPort"] = request.getFrontendPort();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
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
 * @summary Queries the operation logs of Anti-DDoS Pro and Anti-DDoS Premium (the Chinese mainland).
 *
 * @description > This operation is applicable only to Anti-DDoS Pro and Anti-DDoS Premium (the Chinese mainland).
 * Operation log types include: settings for elastic protection specifications of an instance, Unblock (deactivation of blackhole filtering), settings for near-origin traffic diversion, offsetting with anti-DDoS mitigation plans, changing an ECS IP address, and clearing full logs.
 *
 * @param request DescribeOpEntitiesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOpEntitiesResponse
 */
DescribeOpEntitiesResponse Client::describeOpEntitiesWithOptions(const DescribeOpEntitiesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasEntityObject()) {
    query["EntityObject"] = request.getEntityObject();
  }

  if (!!request.hasEntityType()) {
    query["EntityType"] = request.getEntityType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries the operation logs of Anti-DDoS Pro and Anti-DDoS Premium (the Chinese mainland).
 *
 * @description > This operation is applicable only to Anti-DDoS Pro and Anti-DDoS Premium (the Chinese mainland).
 * Operation log types include: settings for elastic protection specifications of an instance, Unblock (deactivation of blackhole filtering), settings for near-origin traffic diversion, offsetting with anti-DDoS mitigation plans, changing an ECS IP address, and clearing full logs.
 *
 * @param request DescribeOpEntitiesRequest
 * @return DescribeOpEntitiesResponse
 */
DescribeOpEntitiesResponse Client::describeOpEntities(const DescribeOpEntitiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOpEntitiesWithOptions(request, runtime);
}

/**
 * @summary Queries the port forwarding rules created for an Anti-DDoS Pro or Anti-DDoS Premium instance.
 *
 * @description This operation supports integration with Terraform. For more information about Terraform, see [What is Terraform?](https://help.aliyun.com/document_detail/95820.html).
 *
 * @param request DescribePortRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePortResponse
 */
DescribePortResponse Client::describePortWithOptions(const DescribePortRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFrontendPort()) {
    query["FrontendPort"] = request.getFrontendPort();
  }

  if (!!request.hasFrontendProtocol()) {
    query["FrontendProtocol"] = request.getFrontendProtocol();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
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
 * @summary Queries the port forwarding rules created for an Anti-DDoS Pro or Anti-DDoS Premium instance.
 *
 * @description This operation supports integration with Terraform. For more information about Terraform, see [What is Terraform?](https://help.aliyun.com/document_detail/95820.html).
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
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
    query["InstanceIds"] = request.getInstanceIds();
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
 * @param request DescribePortCcAttackTopIPRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePortCcAttackTopIPResponse
 */
DescribePortCcAttackTopIPResponse Client::describePortCcAttackTopIPWithOptions(const DescribePortCcAttackTopIPRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIp()) {
    query["Ip"] = request.getIp();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.getLimit();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasStartTimestamp()) {
    query["StartTimestamp"] = request.getStartTimestamp();
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
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries the traffic data list of an Anti-DDoS Pro and Anti-DDoS Premium instance.
 *
 * @param request DescribePortFlowListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePortFlowListResponse
 */
DescribePortFlowListResponse Client::describePortFlowListWithOptions(const DescribePortFlowListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries the traffic data list of an Anti-DDoS Pro and Anti-DDoS Premium instance.
 *
 * @param request DescribePortFlowListRequest
 * @return DescribePortFlowListResponse
 */
DescribePortFlowListResponse Client::describePortFlowList(const DescribePortFlowListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePortFlowListWithOptions(request, runtime);
}

/**
 * @summary Queries the peak connection information of ports on an Anti-DDoS Pro or Anti-DDoS Premium instance.
 *
 * @param request DescribePortMaxConnsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePortMaxConnsResponse
 */
DescribePortMaxConnsResponse Client::describePortMaxConnsWithOptions(const DescribePortMaxConnsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries the peak connection information of ports on an Anti-DDoS Pro or Anti-DDoS Premium instance.
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
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries the distribution of request source ISPs for an Anti-DDoS Pro or Anti-DDoS Premium instance within a specified time period.
 *
 * @description Queries the distribution of request source Internet service providers (ISPs) for an Anti-DDoS Pro or Anti-DDoS Premium instance within a specified time period.
 * > Because the Layer 4 transport-layer identity statistics algorithm of Anti-DDoS Pro and Anti-DDoS Premium has been updated, the data returned by this operation does not reflect the actual traffic volume. The data can only be used to calculate the proportion of requests from different ISPs (that is, the distribution of request source ISPs). To obtain request traffic data, call [DescribePortFlowList](https://help.aliyun.com/document_detail/157460.html).
 * ### QPS limit
 * You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. This may affect your business. Call this operation as needed.
 *
 * @param request DescribePortViewSourceIspsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePortViewSourceIspsResponse
 */
DescribePortViewSourceIspsResponse Client::describePortViewSourceIspsWithOptions(const DescribePortViewSourceIspsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries the distribution of request source ISPs for an Anti-DDoS Pro or Anti-DDoS Premium instance within a specified time period.
 *
 * @description Queries the distribution of request source Internet service providers (ISPs) for an Anti-DDoS Pro or Anti-DDoS Premium instance within a specified time period.
 * > Because the Layer 4 transport-layer identity statistics algorithm of Anti-DDoS Pro and Anti-DDoS Premium has been updated, the data returned by this operation does not reflect the actual traffic volume. The data can only be used to calculate the proportion of requests from different ISPs (that is, the distribution of request source ISPs). To obtain request traffic data, call [DescribePortFlowList](https://help.aliyun.com/document_detail/157460.html).
 * ### QPS limit
 * You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. This may affect your business. Call this operation as needed.
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
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
    query["PolicyId"] = request.getPolicyId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
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
 * @summary Queries the detailed configurations of scenario-specific policies.
 *
 * @description This operation queries the detailed configurations of created scenario-specific policies, such as the policy status, protected objects, and protection rules.
 * ### QPS limit
 * You can call this operation up to 10 times per second per user. If the number of calls exceeds the limit, throttling is triggered. This may affect your business. Call this operation within the limit.
 *
 * @param request DescribeSceneDefensePoliciesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSceneDefensePoliciesResponse
 */
DescribeSceneDefensePoliciesResponse Client::describeSceneDefensePoliciesWithOptions(const DescribeSceneDefensePoliciesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTemplate()) {
    query["Template"] = request.getTemplate();
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
 * @summary Queries the detailed configurations of scenario-specific policies.
 *
 * @description This operation queries the detailed configurations of created scenario-specific policies, such as the policy status, protected objects, and protection rules.
 * ### QPS limit
 * You can call this operation up to 10 times per second per user. If the number of calls exceeds the limit, throttling is triggered. This may affect your business. Call this operation within the limit.
 *
 * @param request DescribeSceneDefensePoliciesRequest
 * @return DescribeSceneDefensePoliciesResponse
 */
DescribeSceneDefensePoliciesResponse Client::describeSceneDefensePolicies(const DescribeSceneDefensePoliciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSceneDefensePoliciesWithOptions(request, runtime);
}

/**
 * @summary Queries the scheduling rules of Sec-Traffic Manager.
 *
 * @param request DescribeSchedulerRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSchedulerRulesResponse
 */
DescribeSchedulerRulesResponse Client::describeSchedulerRulesWithOptions(const DescribeSchedulerRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
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
 * @summary Queries the scheduling rules of Sec-Traffic Manager.
 *
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
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.getIp();
  }

  if (!!request.hasPage()) {
    query["Page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
    query["ResourceGroupId"] = request.getResourceGroupId();
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
 * @summary Queries the log store information of Anti-DDoS Pro or Anti-DDoS Premium, such as log storage capacity and storage duration of logs.
 *
 * @param request DescribeSlsLogstoreInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSlsLogstoreInfoResponse
 */
DescribeSlsLogstoreInfoResponse Client::describeSlsLogstoreInfoWithOptions(const DescribeSlsLogstoreInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
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
 * @summary Queries the log store information of Anti-DDoS Pro or Anti-DDoS Premium, such as log storage capacity and storage duration of logs.
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
    query["ResourceGroupId"] = request.getResourceGroupId();
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
 * @summary Queries whether Anti-DDoS Proxy are authorized to access other cloud services.
 *
 * @description This operation queries whether your Alibaba Cloud account has authorized Anti-DDoS Pro and Anti-DDoS Premium to access other cloud services.
 * ### QPS limits
 * The maximum number of queries per second (QPS) for this operation is 10 per user. If the number of API calls exceeds this limit, throttling is triggered. This may affect your business operations. Ensure that you call this operation at an appropriate rate.
 *
 * @param request DescribeStsGrantStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeStsGrantStatusResponse
 */
DescribeStsGrantStatusResponse Client::describeStsGrantStatusWithOptions(const DescribeStsGrantStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasRole()) {
    query["Role"] = request.getRole();
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
 * @summary Queries whether Anti-DDoS Proxy are authorized to access other cloud services.
 *
 * @description This operation queries whether your Alibaba Cloud account has authorized Anti-DDoS Pro and Anti-DDoS Premium to access other cloud services.
 * ### QPS limits
 * The maximum number of queries per second (QPS) for this operation is 10 per user. If the number of API calls exceeds this limit, throttling is triggered. This may affect your business operations. Ensure that you call this operation at an appropriate rate.
 *
 * @param request DescribeStsGrantStatusRequest
 * @return DescribeStsGrantStatusResponse
 */
DescribeStsGrantStatusResponse Client::describeStsGrantStatus(const DescribeStsGrantStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeStsGrantStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the billing details of burstable clean bandwidth.
 *
 * @description This operation lets you query the system logs of Anti-DDoS Pro. System logs currently include only the billing logs of burstable clean bandwidth.
 * If you have enabled burstable clean bandwidth, you can call this operation to query the billing details of burstable clean bandwidth.
 * ### QPS limits
 * The QPS limit for this operation is 10 per second per user. If the number of calls per second exceeds this limit, throttling is triggered. This may affect your business operations. Therefore, call this operation at an appropriate frequency.
 *
 * @param request DescribeSystemLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSystemLogResponse
 */
DescribeSystemLogResponse Client::describeSystemLogWithOptions(const DescribeSystemLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasEntityObject()) {
    query["EntityObject"] = request.getEntityObject();
  }

  if (!!request.hasEntityType()) {
    query["EntityType"] = request.getEntityType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries the billing details of burstable clean bandwidth.
 *
 * @description This operation lets you query the system logs of Anti-DDoS Pro. System logs currently include only the billing logs of burstable clean bandwidth.
 * If you have enabled burstable clean bandwidth, you can call this operation to query the billing details of burstable clean bandwidth.
 * ### QPS limits
 * The QPS limit for this operation is 10 per second per user. If the number of calls per second exceeds this limit, throttling is triggered. This may affect your business operations. Therefore, call this operation at an appropriate frequency.
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
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
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
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceIds()) {
    query["ResourceIds"] = request.getResourceIds();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
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
 * @summary 新峰值接口
 *
 * @param request DescribeTotalAttackMaxFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTotalAttackMaxFlowResponse
 */
DescribeTotalAttackMaxFlowResponse Client::describeTotalAttackMaxFlowWithOptions(const DescribeTotalAttackMaxFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary 新峰值接口
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
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Queries the number of times that blackhole filtering can be deactivated.
 *
 * @param request DescribeUnBlackholeCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUnBlackholeCountResponse
 */
DescribeUnBlackholeCountResponse Client::describeUnBlackholeCountWithOptions(const DescribeUnBlackholeCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
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
 * @summary Queries the number of times that blackhole filtering can be deactivated.
 *
 * @param request DescribeUnBlackholeCountRequest
 * @return DescribeUnBlackholeCountResponse
 */
DescribeUnBlackholeCountResponse Client::describeUnBlackholeCount(const DescribeUnBlackholeCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUnBlackholeCountWithOptions(request, runtime);
}

/**
 * @summary Queries the available near-origin traffic diversion quota.
 *
 * @description > This operation is applicable only to Anti-DDoS Pro and Anti-DDoS Premium (the Chinese mainland) service.
 *
 * @param request DescribeUnBlockCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUnBlockCountResponse
 */
DescribeUnBlockCountResponse Client::describeUnBlockCountWithOptions(const DescribeUnBlockCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
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
 * @summary Queries the available near-origin traffic diversion quota.
 *
 * @description > This operation is applicable only to Anti-DDoS Pro and Anti-DDoS Premium (the Chinese mainland) service.
 *
 * @param request DescribeUnBlockCountRequest
 * @return DescribeUnBlockCountResponse
 */
DescribeUnBlockCountResponse Client::describeUnBlockCount(const DescribeUnBlockCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUnBlockCountWithOptions(request, runtime);
}

/**
 * @summary Queries the full log switch status of all domain names.
 *
 * @description This operation is used to query the full log switch status of all domain names that are added to Anti-DDoS Pro for protection.
 * ### QPS limit
 * The QPS limit on this operation is 10 calls per second per user. If the limit is exceeded, API calls are throttled, which may affect your business. We recommend that you call this operation at a proper frequency.
 *
 * @param request DescribeWebAccessLogDispatchStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeWebAccessLogDispatchStatusResponse
 */
DescribeWebAccessLogDispatchStatusResponse Client::describeWebAccessLogDispatchStatusWithOptions(const DescribeWebAccessLogDispatchStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
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
 * @summary Queries the full log switch status of all domain names.
 *
 * @description This operation is used to query the full log switch status of all domain names that are added to Anti-DDoS Pro for protection.
 * ### QPS limit
 * The QPS limit on this operation is 10 calls per second per user. If the limit is exceeded, API calls are throttled, which may affect your business. We recommend that you call this operation at a proper frequency.
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
    query["ResourceGroupId"] = request.getResourceGroupId();
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
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
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
 * @summary Queries the access mode of website businesses.
 *
 * @param request DescribeWebAccessModeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeWebAccessModeResponse
 */
DescribeWebAccessModeResponse Client::describeWebAccessModeWithOptions(const DescribeWebAccessModeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomains()) {
    query["Domains"] = request.getDomains();
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
 * @summary Queries the access mode of website businesses.
 *
 * @param request DescribeWebAccessModeRequest
 * @return DescribeWebAccessModeResponse
 */
DescribeWebAccessModeResponse Client::describeWebAccessMode(const DescribeWebAccessModeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeWebAccessModeWithOptions(request, runtime);
}

/**
 * @summary Queries the configuration information of the Location Blacklist feature (for domain names) in website services.
 *
 * @param request DescribeWebAreaBlockConfigsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeWebAreaBlockConfigsResponse
 */
DescribeWebAreaBlockConfigsResponse Client::describeWebAreaBlockConfigsWithOptions(const DescribeWebAreaBlockConfigsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomains()) {
    query["Domains"] = request.getDomains();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
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
 * @summary Queries the configuration information of the Location Blacklist feature (for domain names) in website services.
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
 * @summary Queries the custom rules of frequency control (HTTP flood mitigation) for website services.
 *
 * @param request DescribeWebCCRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeWebCCRulesResponse
 */
DescribeWebCCRulesResponse Client::describeWebCCRulesWithOptions(const DescribeWebCCRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
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
 * @summary Queries the custom rules of frequency control (HTTP flood mitigation) for website services.
 *
 * @param request DescribeWebCCRulesRequest
 * @return DescribeWebCCRulesResponse
 */
DescribeWebCCRulesResponse Client::describeWebCCRules(const DescribeWebCCRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeWebCCRulesWithOptions(request, runtime);
}

/**
 * @summary Queries the custom rules of frequency control (HTTP flood mitigation) for website services.
 *
 * @param request DescribeWebCCRulesV2Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeWebCCRulesV2Response
 */
DescribeWebCCRulesV2Response Client::describeWebCCRulesV2WithOptions(const DescribeWebCCRulesV2Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasOffset()) {
    query["Offset"] = request.getOffset();
  }

  if (!!request.hasOwner()) {
    query["Owner"] = request.getOwner();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
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
 * @summary Queries the custom rules of frequency control (HTTP flood mitigation) for website services.
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
    query["Domains"] = request.getDomains();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
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
 * @summary Queries the status of protection features for website services.
 *
 * @param request DescribeWebCcProtectSwitchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeWebCcProtectSwitchResponse
 */
DescribeWebCcProtectSwitchResponse Client::describeWebCcProtectSwitchWithOptions(const DescribeWebCcProtectSwitchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomains()) {
    query["Domains"] = request.getDomains();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
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
 * @summary Queries the status of protection features for website services.
 *
 * @param request DescribeWebCcProtectSwitchRequest
 * @return DescribeWebCcProtectSwitchResponse
 */
DescribeWebCcProtectSwitchResponse Client::describeWebCcProtectSwitch(const DescribeWebCcProtectSwitchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeWebCcProtectSwitchWithOptions(request, runtime);
}

/**
 * @summary Queries the range of custom ports supported by Anti-DDoS Proxy for website services.
 *
 * @param request DescribeWebCustomPortsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeWebCustomPortsResponse
 */
DescribeWebCustomPortsResponse Client::describeWebCustomPortsWithOptions(const DescribeWebCustomPortsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
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
 * @summary Queries the range of custom ports supported by Anti-DDoS Proxy for website services.
 *
 * @param request DescribeWebCustomPortsRequest
 * @return DescribeWebCustomPortsResponse
 */
DescribeWebCustomPortsResponse Client::describeWebCustomPorts(const DescribeWebCustomPortsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeWebCustomPortsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about Anti-DDoS Pro or Anti-DDoS Premium instances associated with website services.
 *
 * @param request DescribeWebInstanceRelationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeWebInstanceRelationsResponse
 */
DescribeWebInstanceRelationsResponse Client::describeWebInstanceRelationsWithOptions(const DescribeWebInstanceRelationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomains()) {
    query["Domains"] = request.getDomains();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
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
 * @summary Queries the information about Anti-DDoS Pro or Anti-DDoS Premium instances associated with website services.
 *
 * @param request DescribeWebInstanceRelationsRequest
 * @return DescribeWebInstanceRelationsResponse
 */
DescribeWebInstanceRelationsResponse Client::describeWebInstanceRelations(const DescribeWebInstanceRelationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeWebInstanceRelationsWithOptions(request, runtime);
}

/**
 * @summary Queries the precise access control rules configured for a website.
 *
 * @param request DescribeWebPreciseAccessRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeWebPreciseAccessRuleResponse
 */
DescribeWebPreciseAccessRuleResponse Client::describeWebPreciseAccessRuleWithOptions(const DescribeWebPreciseAccessRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomains()) {
    query["Domains"] = request.getDomains();
  }

  if (!!request.hasOwner()) {
    query["Owner"] = request.getOwner();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
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
 * @summary Queries the precise access control rules configured for a website.
 *
 * @param request DescribeWebPreciseAccessRuleRequest
 * @return DescribeWebPreciseAccessRuleResponse
 */
DescribeWebPreciseAccessRuleResponse Client::describeWebPreciseAccessRule(const DescribeWebPreciseAccessRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeWebPreciseAccessRuleWithOptions(request, runtime);
}

/**
 * @summary 查询报表top IP
 *
 * @param request DescribeWebReportTopIpRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeWebReportTopIpResponse
 */
DescribeWebReportTopIpResponse Client::describeWebReportTopIpWithOptions(const DescribeWebReportTopIpRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasQueryType()) {
    query["QueryType"] = request.getQueryType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTop()) {
    query["Top"] = request.getTop();
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
 * @summary 查询报表top IP
 *
 * @param request DescribeWebReportTopIpRequest
 * @return DescribeWebReportTopIpResponse
 */
DescribeWebReportTopIpResponse Client::describeWebReportTopIp(const DescribeWebReportTopIpRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeWebReportTopIpWithOptions(request, runtime);
}

/**
 * @summary Queries the configurations of website forwarding rules.
 *
 * @description This operation is used to query the configurations of website forwarding rules that you have created by using paging. For example, you can query the forwarding protocol type, origin server address, HTTPS configuration, and IP blacklist configuration.
 * Before you invoke this operation, you must have invoked [CreateWebRule](https://help.aliyun.com/document_detail/157463.html) to create website forwarding rules.
 * ### QPS limit
 * You can invoke this operation up to 50 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. This may affect your business. Invoke this operation within the limit.
 *
 * @param request DescribeWebRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeWebRulesResponse
 */
DescribeWebRulesResponse Client::describeWebRulesWithOptions(const DescribeWebRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCname()) {
    query["Cname"] = request.getCname();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasQueryDomainPattern()) {
    query["QueryDomainPattern"] = request.getQueryDomainPattern();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
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
 * @summary Queries the configurations of website forwarding rules.
 *
 * @description This operation is used to query the configurations of website forwarding rules that you have created by using paging. For example, you can query the forwarding protocol type, origin server address, HTTPS configuration, and IP blacklist configuration.
 * Before you invoke this operation, you must have invoked [CreateWebRule](https://help.aliyun.com/document_detail/157463.html) to create website forwarding rules.
 * ### QPS limit
 * You can invoke this operation up to 50 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. This may affect your business. Invoke this operation within the limit.
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
    query["ObjectType"] = request.getObjectType();
  }

  if (!!request.hasObjects()) {
    query["Objects"] = request.getObjects();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.getPolicyId();
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
 * @summary Disables a scenario-specific policy.
 *
 * @param request DisableSceneDefensePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableSceneDefensePolicyResponse
 */
DisableSceneDefensePolicyResponse Client::disableSceneDefensePolicyWithOptions(const DisableSceneDefensePolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.getPolicyId();
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
 * @summary Disables a scenario-specific policy.
 *
 * @param request DisableSceneDefensePolicyRequest
 * @return DisableSceneDefensePolicyResponse
 */
DisableSceneDefensePolicyResponse Client::disableSceneDefensePolicy(const DisableSceneDefensePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableSceneDefensePolicyWithOptions(request, runtime);
}

/**
 * @summary Shuts down full logs analysis for a website service.
 *
 * @param request DisableWebAccessLogConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableWebAccessLogConfigResponse
 */
DisableWebAccessLogConfigResponse Client::disableWebAccessLogConfigWithOptions(const DisableWebAccessLogConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
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
 * @summary Shuts down full logs analysis for a website service.
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
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
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
 * @summary Disables the custom rule switch for frequency control (HTTP flood mitigation) of a website service.
 *
 * @param request DisableWebCCRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableWebCCRuleResponse
 */
DisableWebCCRuleResponse Client::disableWebCCRuleWithOptions(const DisableWebCCRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
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
 * @summary Disables the custom rule switch for frequency control (HTTP flood mitigation) of a website service.
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
    query["InstanceId"] = request.getInstanceId();
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
    query["InstanceId"] = request.getInstanceId();
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
 * @summary Deletes the Logstore of Anti-DDoS Proxy.
 *
 * @param request EmptySlsLogstoreRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EmptySlsLogstoreResponse
 */
EmptySlsLogstoreResponse Client::emptySlsLogstoreWithOptions(const EmptySlsLogstoreRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
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
 * @summary Deletes the Logstore of Anti-DDoS Proxy.
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
    query["PolicyId"] = request.getPolicyId();
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
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
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
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
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
 * @summary Enables a custom HTTP flood protection rule.
 *
 * @param request EnableWebCCRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableWebCCRuleResponse
 */
EnableWebCCRuleResponse Client::enableWebCCRuleWithOptions(const EnableWebCCRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
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
 * @summary Enables a custom HTTP flood protection rule.
 *
 * @param request EnableWebCCRuleRequest
 * @return EnableWebCCRuleResponse
 */
EnableWebCCRuleResponse Client::enableWebCCRule(const EnableWebCCRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableWebCCRuleWithOptions(request, runtime);
}

/**
 * @summary 95计费切换模式
 *
 * @param request ModifyBizBandWidthModeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyBizBandWidthModeResponse
 */
ModifyBizBandWidthModeResponse Client::modifyBizBandWidthModeWithOptions(const ModifyBizBandWidthModeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMode()) {
    query["Mode"] = request.getMode();
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
 * @summary 95计费切换模式
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
    query["BlackholeStatus"] = request.getBlackholeStatus();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
    query["Duration"] = request.getDuration();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLines()) {
    query["Lines"] = request.getLines();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
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
    query["Cname"] = request.getCname();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.getEnable();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
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
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasHttpsExt()) {
    query["HttpsExt"] = request.getHttpsExt();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasProxyTypes()) {
    query["ProxyTypes"] = request.getProxyTypes();
  }

  if (!!request.hasRealServers()) {
    query["RealServers"] = request.getRealServers();
  }

  if (!!request.hasRsType()) {
    query["RsType"] = request.getRsType();
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
 * @summary Modifies the burstable protection bandwidth of an Anti-DDoS Pro or Anti-DDoS Premium instance in the Chinese mainland.
 *
 * @description > This operation is applicable only to Anti-DDoS Pro (the Chinese mainland) service.
 *
 * @param request ModifyElasticBandWidthRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyElasticBandWidthResponse
 */
ModifyElasticBandWidthResponse Client::modifyElasticBandWidthWithOptions(const ModifyElasticBandWidthRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasElasticBandwidth()) {
    query["ElasticBandwidth"] = request.getElasticBandwidth();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary Modifies the burstable protection bandwidth of an Anti-DDoS Pro or Anti-DDoS Premium instance in the Chinese mainland.
 *
 * @description > This operation is applicable only to Anti-DDoS Pro (the Chinese mainland) service.
 *
 * @param request ModifyElasticBandWidthRequest
 * @return ModifyElasticBandWidthResponse
 */
ModifyElasticBandWidthResponse Client::modifyElasticBandWidth(const ModifyElasticBandWidthRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyElasticBandWidthWithOptions(request, runtime);
}

/**
 * @summary 修改弹性业务带宽
 *
 * @param request ModifyElasticBizBandWidthRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyElasticBizBandWidthResponse
 */
ModifyElasticBizBandWidthResponse Client::modifyElasticBizBandWidthWithOptions(const ModifyElasticBizBandWidthRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasElasticBizBandwidth()) {
    query["ElasticBizBandwidth"] = request.getElasticBizBandwidth();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMode()) {
    query["Mode"] = request.getMode();
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
 * @summary 修改弹性业务带宽
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
 * @description Both IPv4 and IPv6 instances support burstable QPS.
 *
 * @param request ModifyElasticBizQpsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyElasticBizQpsResponse
 */
ModifyElasticBizQpsResponse Client::modifyElasticBizQpsWithOptions(const ModifyElasticBizQpsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMode()) {
    query["Mode"] = request.getMode();
  }

  if (!!request.hasOpsElasticQps()) {
    query["OpsElasticQps"] = request.getOpsElasticQps();
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
 * @description Both IPv4 and IPv6 instances support burstable QPS.
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
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasTtl()) {
    query["Ttl"] = request.getTtl();
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
 * @summary Modifies custom headers for a domain on an Anti-DDoS Pro instance.
 *
 * @param request ModifyHeadersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyHeadersResponse
 */
ModifyHeadersResponse Client::modifyHeadersWithOptions(const ModifyHeadersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomHeaders()) {
    query["CustomHeaders"] = request.getCustomHeaders();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasEmbeddedHeaders()) {
    query["EmbeddedHeaders"] = request.getEmbeddedHeaders();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
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
 * @summary Modifies custom headers for a domain on an Anti-DDoS Pro instance.
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
    query["ForwardProtocol"] = request.getForwardProtocol();
  }

  if (!!request.hasFrontendPort()) {
    query["FrontendPort"] = request.getFrontendPort();
  }

  if (!!request.hasHealthCheck()) {
    query["HealthCheck"] = request.getHealthCheck();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.getEnable();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
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
 * @summary Modifies the specifications of an Anti-DDoS Pro or Anti-DDoS Premium instance.
 *
 * @param request ModifyInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceResponse
 */
ModifyInstanceResponse Client::modifyInstanceWithOptions(const ModifyInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddressType()) {
    query["AddressType"] = request.getAddressType();
  }

  if (!!request.hasBandwidth()) {
    query["Bandwidth"] = request.getBandwidth();
  }

  if (!!request.hasBaseBandwidth()) {
    query["BaseBandwidth"] = request.getBaseBandwidth();
  }

  if (!!request.hasDomainCount()) {
    query["DomainCount"] = request.getDomainCount();
  }

  if (!!request.hasEditionSale()) {
    query["EditionSale"] = request.getEditionSale();
  }

  if (!!request.hasFunctionVersion()) {
    query["FunctionVersion"] = request.getFunctionVersion();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasModifyType()) {
    query["ModifyType"] = request.getModifyType();
  }

  if (!!request.hasNormalBandwidth()) {
    query["NormalBandwidth"] = request.getNormalBandwidth();
  }

  if (!!request.hasNormalQps()) {
    query["NormalQps"] = request.getNormalQps();
  }

  if (!!request.hasPortCount()) {
    query["PortCount"] = request.getPortCount();
  }

  if (!!request.hasProductPlan()) {
    query["ProductPlan"] = request.getProductPlan();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
  }

  if (!!request.hasServiceBandwidth()) {
    query["ServiceBandwidth"] = request.getServiceBandwidth();
  }

  if (!!request.hasServicePartner()) {
    query["ServicePartner"] = request.getServicePartner();
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
 * @summary Modifies the specifications of an Anti-DDoS Pro or Anti-DDoS Premium instance.
 *
 * @param request ModifyInstanceRequest
 * @return ModifyInstanceResponse
 */
ModifyInstanceResponse Client::modifyInstance(const ModifyInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceWithOptions(request, runtime);
}

/**
 * @summary Modifies the remark of an Anti-DDoS Pro or Anti-DDoS Premium instance.
 *
 * @param request ModifyInstanceRemarkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceRemarkResponse
 */
ModifyInstanceRemarkResponse Client::modifyInstanceRemarkWithOptions(const ModifyInstanceRemarkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
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
 * @summary Modifies the remark of an Anti-DDoS Pro or Anti-DDoS Premium instance.
 *
 * @param request ModifyInstanceRemarkRequest
 * @return ModifyInstanceRemarkResponse
 */
ModifyInstanceRemarkResponse Client::modifyInstanceRemark(const ModifyInstanceRemarkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceRemarkWithOptions(request, runtime);
}

/**
 * @summary Modifies the session persistence and DDoS mitigation policy settings for a port forwarding rule.
 *
 * @param request ModifyNetworkRuleAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyNetworkRuleAttributeResponse
 */
ModifyNetworkRuleAttributeResponse Client::modifyNetworkRuleAttributeWithOptions(const ModifyNetworkRuleAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfig()) {
    query["Config"] = request.getConfig();
  }

  if (!!request.hasForwardProtocol()) {
    query["ForwardProtocol"] = request.getForwardProtocol();
  }

  if (!!request.hasFrontendPort()) {
    query["FrontendPort"] = request.getFrontendPort();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasModule()) {
    query["Module"] = request.getModule();
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
 * @summary Modifies the session persistence and DDoS mitigation policy settings for a port forwarding rule.
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
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.getEnable();
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
 * @description This operation can be used with Terraform. For more information, see [What is Terraform](https://help.aliyun.com/document_detail/95820.html).
 *
 * @param request ModifyPortRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyPortResponse
 */
ModifyPortResponse Client::modifyPortWithOptions(const ModifyPortRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackendPort()) {
    query["BackendPort"] = request.getBackendPort();
  }

  if (!!request.hasFrontendPort()) {
    query["FrontendPort"] = request.getFrontendPort();
  }

  if (!!request.hasFrontendProtocol()) {
    query["FrontendProtocol"] = request.getFrontendProtocol();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProxyEnable()) {
    query["ProxyEnable"] = request.getProxyEnable();
  }

  if (!!request.hasRealServers()) {
    query["RealServers"] = request.getRealServers();
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
 * @description This operation can be used with Terraform. For more information, see [What is Terraform](https://help.aliyun.com/document_detail/95820.html).
 *
 * @param request ModifyPortRequest
 * @return ModifyPortResponse
 */
ModifyPortResponse Client::modifyPort(const ModifyPortRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyPortWithOptions(request, runtime);
}

/**
 * @summary Configures AI-based intelligent protection for non-website services.
 *
 * @param request ModifyPortAutoCcStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyPortAutoCcStatusResponse
 */
ModifyPortAutoCcStatusResponse Client::modifyPortAutoCcStatusWithOptions(const ModifyPortAutoCcStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMode()) {
    query["Mode"] = request.getMode();
  }

  if (!!request.hasSwitch()) {
    query["Switch"] = request.getSwitch();
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
 * @summary Configures AI-based intelligent protection for non-website services.
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
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMode()) {
    query["Mode"] = request.getMode();
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
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.getPolicyId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTemplate()) {
    query["Template"] = request.getTemplate();
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
    query["Param"] = request.getParam();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasRuleType()) {
    query["RuleType"] = request.getRuleType();
  }

  if (!!request.hasRules()) {
    query["Rules"] = request.getRules();
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
 * @summary Modifies the TLS security policy of a website forwarding rule.
 *
 * @param request ModifyTlsConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyTlsConfigResponse
 */
ModifyTlsConfigResponse Client::modifyTlsConfigWithOptions(const ModifyTlsConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfig()) {
    query["Config"] = request.getConfig();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
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
 * @summary Modifies the TLS security policy of a website forwarding rule.
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
    query["Config"] = request.getConfig();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
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
    query["Config"] = request.getConfig();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
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
 * @summary Sets the access mode for website services.
 *
 * @param request ModifyWebAccessModeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyWebAccessModeResponse
 */
ModifyWebAccessModeResponse Client::modifyWebAccessModeWithOptions(const ModifyWebAccessModeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessMode()) {
    query["AccessMode"] = request.getAccessMode();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
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
 * @summary Sets the access mode for website services.
 *
 * @param request ModifyWebAccessModeRequest
 * @return ModifyWebAccessModeResponse
 */
ModifyWebAccessModeResponse Client::modifyWebAccessMode(const ModifyWebAccessModeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyWebAccessModeWithOptions(request, runtime);
}

/**
 * @summary Sets the blocked regions for Location Blacklist (domain-specific) of website services.
 *
 * @param request ModifyWebAreaBlockRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyWebAreaBlockResponse
 */
ModifyWebAreaBlockResponse Client::modifyWebAreaBlockWithOptions(const ModifyWebAreaBlockRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasRegions()) {
    query["Regions"] = request.getRegions();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
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
 * @summary Sets the blocked regions for Location Blacklist (domain-specific) of website services.
 *
 * @param request ModifyWebAreaBlockRequest
 * @return ModifyWebAreaBlockResponse
 */
ModifyWebAreaBlockResponse Client::modifyWebAreaBlock(const ModifyWebAreaBlockRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyWebAreaBlockWithOptions(request, runtime);
}

/**
 * @summary Sets the status of the Location Blacklist feature for website services (for domain names).
 *
 * @description This operation sets the status of the Location Blacklist feature for website services (for domain names).
 * ### QPS limits
 * The single-user queries per second (QPS) limit for this operation is 10. API calls that exceed the limit are throttled, which may affect your business. We recommend that you call this operation at an appropriate rate.
 *
 * @param request ModifyWebAreaBlockSwitchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyWebAreaBlockSwitchResponse
 */
ModifyWebAreaBlockSwitchResponse Client::modifyWebAreaBlockSwitchWithOptions(const ModifyWebAreaBlockSwitchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfig()) {
    query["Config"] = request.getConfig();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
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
 * @summary Sets the status of the Location Blacklist feature for website services (for domain names).
 *
 * @description This operation sets the status of the Location Blacklist feature for website services (for domain names).
 * ### QPS limits
 * The single-user queries per second (QPS) limit for this operation is 10. API calls that exceed the limit are throttled, which may affect your business. We recommend that you call this operation at an appropriate rate.
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
    query["CcGlobalSwitch"] = request.getCcGlobalSwitch();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
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
 * @summary Modifies a custom rule for website business frequency control protection (HTTP flood protection).
 *
 * @param request ModifyWebCCRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyWebCCRuleResponse
 */
ModifyWebCCRuleResponse Client::modifyWebCCRuleWithOptions(const ModifyWebCCRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAct()) {
    query["Act"] = request.getAct();
  }

  if (!!request.hasCount()) {
    query["Count"] = request.getCount();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasMode()) {
    query["Mode"] = request.getMode();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasTtl()) {
    query["Ttl"] = request.getTtl();
  }

  if (!!request.hasUri()) {
    query["Uri"] = request.getUri();
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
 * @summary Modifies a custom rule for website business frequency control protection (HTTP flood protection).
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
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasRules()) {
    query["Rules"] = request.getRules();
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
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasMode()) {
    query["Mode"] = request.getMode();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
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
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.getEnable();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
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
    query["Config"] = request.getConfig();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
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
 * @summary Creates or edits a precise access control rule for a website.
 *
 * @param request ModifyWebPreciseAccessRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyWebPreciseAccessRuleResponse
 */
ModifyWebPreciseAccessRuleResponse Client::modifyWebPreciseAccessRuleWithOptions(const ModifyWebPreciseAccessRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasExpires()) {
    query["Expires"] = request.getExpires();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasRules()) {
    query["Rules"] = request.getRules();
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
 * @summary Creates or edits a precise access control rule for a website.
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
    query["Config"] = request.getConfig();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
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
 * @summary Modifies an existing website forwarding rule.
 *
 * @param request ModifyWebRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyWebRuleResponse
 */
ModifyWebRuleResponse Client::modifyWebRuleWithOptions(const ModifyWebRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasHttpsExt()) {
    query["HttpsExt"] = request.getHttpsExt();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasProxyTypes()) {
    query["ProxyTypes"] = request.getProxyTypes();
  }

  if (!!request.hasRealServers()) {
    query["RealServers"] = request.getRealServers();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasRsType()) {
    query["RsType"] = request.getRsType();
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
 * @summary Modifies an existing website forwarding rule.
 *
 * @param request ModifyWebRuleRequest
 * @return ModifyWebRuleResponse
 */
ModifyWebRuleResponse Client::modifyWebRule(const ModifyWebRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyWebRuleWithOptions(request, runtime);
}

/**
 * @summary Release an expired Anti-DDoS Proxy instance.
 *
 * @description After an Anti-DDoS instance expires, it stops providing DDoS attack protection services. Seven days after expiration, it stops forwarding service traffic.
 * - We recommend that you renew your instance before it expires to avoid impacts on service protection and forwarding. You can call [DescribeInstances](https://help.aliyun.com/document_detail/91478.html) to query the expiration time of an instance. To renew the instance, go to the [Anti-DDoS console](https://yundun.console.aliyun.com/?p=ddoscoo) to perform the operation.
 * - If you do not plan to renew the instance, we recommend that you restore the protected service IP (no longer use the Anti-DDoS IP as the service IP) or service DNS parsing (no longer parse service traffic to the CNAME address of Anti-DDoS) before the Anti-DDoS instance expires. This prevents service traffic from being forwarded to the Anti-DDoS instance and avoids disruption to normal service forwarding when the instance expires.
 * After the instance expires, you can call this operation to release the specified Anti-DDoS instance.
 * > Before releasing the specified instance, ensure that you have restored the protected service IP or service DNS parsing.
 *
 * @param request ReleaseInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleaseInstanceResponse
 */
ReleaseInstanceResponse Client::releaseInstanceWithOptions(const ReleaseInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary Release an expired Anti-DDoS Proxy instance.
 *
 * @description After an Anti-DDoS instance expires, it stops providing DDoS attack protection services. Seven days after expiration, it stops forwarding service traffic.
 * - We recommend that you renew your instance before it expires to avoid impacts on service protection and forwarding. You can call [DescribeInstances](https://help.aliyun.com/document_detail/91478.html) to query the expiration time of an instance. To renew the instance, go to the [Anti-DDoS console](https://yundun.console.aliyun.com/?p=ddoscoo) to perform the operation.
 * - If you do not plan to renew the instance, we recommend that you restore the protected service IP (no longer use the Anti-DDoS IP as the service IP) or service DNS parsing (no longer parse service traffic to the CNAME address of Anti-DDoS) before the Anti-DDoS instance expires. This prevents service traffic from being forwarded to the Anti-DDoS instance and avoids disruption to normal service forwarding when the instance expires.
 * After the instance expires, you can call this operation to release the specified Anti-DDoS instance.
 * > Before releasing the specified instance, ensure that you have restored the protected service IP or service DNS parsing.
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
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasRuleType()) {
    query["RuleType"] = request.getRuleType();
  }

  if (!!request.hasSwitchData()) {
    query["SwitchData"] = request.getSwitchData();
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