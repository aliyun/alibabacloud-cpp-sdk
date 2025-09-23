#include <darabonba/Core.hpp>
#include <alibabacloud/Ddoscoo20171228.hpp>
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
using namespace AlibabaCloud::Ddoscoo20171228::Models;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{

AlibabaCloud::Ddoscoo20171228::Client::Client(Config &config): OpenApiClient(config){
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
 * @param request AddLayer7CCRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddLayer7CCRuleResponse
 */
AddLayer7CCRuleResponse Client::addLayer7CCRuleWithOptions(const AddLayer7CCRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "AddLayer7CCRule"},
    {"version" , "2017-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddLayer7CCRuleResponse>();
}

/**
 * @param request AddLayer7CCRuleRequest
 * @return AddLayer7CCRuleResponse
 */
AddLayer7CCRuleResponse Client::addLayer7CCRule(const AddLayer7CCRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addLayer7CCRuleWithOptions(request, runtime);
}

/**
 * @param request CloseDomainSlsConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloseDomainSlsConfigResponse
 */
CloseDomainSlsConfigResponse Client::closeDomainSlsConfigWithOptions(const CloseDomainSlsConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloseDomainSlsConfig"},
    {"version" , "2017-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloseDomainSlsConfigResponse>();
}

/**
 * @param request CloseDomainSlsConfigRequest
 * @return CloseDomainSlsConfigResponse
 */
CloseDomainSlsConfigResponse Client::closeDomainSlsConfig(const CloseDomainSlsConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return closeDomainSlsConfigWithOptions(request, runtime);
}

/**
 * @param request ConfigHealthCheckRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigHealthCheckResponse
 */
ConfigHealthCheckResponse Client::configHealthCheckWithOptions(const ConfigHealthCheckRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "ConfigHealthCheck"},
    {"version" , "2017-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfigHealthCheckResponse>();
}

/**
 * @param request ConfigHealthCheckRequest
 * @return ConfigHealthCheckResponse
 */
ConfigHealthCheckResponse Client::configHealthCheck(const ConfigHealthCheckRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configHealthCheckWithOptions(request, runtime);
}

/**
 * @param tmpReq ConfigLayer4RuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigLayer4RuleResponse
 */
ConfigLayer4RuleResponse Client::configLayer4RuleWithOptions(const ConfigLayer4RuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ConfigLayer4RuleShrinkRequest request = ConfigLayer4RuleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUsTimeout()) {
    request.setUsTimeoutShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.usTimeout(), "UsTimeout", "json"));
  }

  json query = {};
  if (!!request.hasListeners()) {
    query["Listeners"] = request.listeners();
  }

  if (!!request.hasProxyEnable()) {
    query["ProxyEnable"] = request.proxyEnable();
  }

  if (!!request.hasUsTimeoutShrink()) {
    query["UsTimeout"] = request.usTimeoutShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ConfigLayer4Rule"},
    {"version" , "2017-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfigLayer4RuleResponse>();
}

/**
 * @param request ConfigLayer4RuleRequest
 * @return ConfigLayer4RuleResponse
 */
ConfigLayer4RuleResponse Client::configLayer4Rule(const ConfigLayer4RuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configLayer4RuleWithOptions(request, runtime);
}

/**
 * @param request ConfigLayer4RuleAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigLayer4RuleAttributeResponse
 */
ConfigLayer4RuleAttributeResponse Client::configLayer4RuleAttributeWithOptions(const ConfigLayer4RuleAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "ConfigLayer4RuleAttribute"},
    {"version" , "2017-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfigLayer4RuleAttributeResponse>();
}

/**
 * @param request ConfigLayer4RuleAttributeRequest
 * @return ConfigLayer4RuleAttributeResponse
 */
ConfigLayer4RuleAttributeResponse Client::configLayer4RuleAttribute(const ConfigLayer4RuleAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configLayer4RuleAttributeWithOptions(request, runtime);
}

/**
 * @param request ConfigLayer7BlackWhiteListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigLayer7BlackWhiteListResponse
 */
ConfigLayer7BlackWhiteListResponse Client::configLayer7BlackWhiteListWithOptions(const ConfigLayer7BlackWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "ConfigLayer7BlackWhiteList"},
    {"version" , "2017-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfigLayer7BlackWhiteListResponse>();
}

/**
 * @param request ConfigLayer7BlackWhiteListRequest
 * @return ConfigLayer7BlackWhiteListResponse
 */
ConfigLayer7BlackWhiteListResponse Client::configLayer7BlackWhiteList(const ConfigLayer7BlackWhiteListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configLayer7BlackWhiteListWithOptions(request, runtime);
}

/**
 * @param request ConfigLayer7CCRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigLayer7CCRuleResponse
 */
ConfigLayer7CCRuleResponse Client::configLayer7CCRuleWithOptions(const ConfigLayer7CCRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "ConfigLayer7CCRule"},
    {"version" , "2017-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfigLayer7CCRuleResponse>();
}

/**
 * @param request ConfigLayer7CCRuleRequest
 * @return ConfigLayer7CCRuleResponse
 */
ConfigLayer7CCRuleResponse Client::configLayer7CCRule(const ConfigLayer7CCRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configLayer7CCRuleWithOptions(request, runtime);
}

/**
 * @param request ConfigLayer7CCTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigLayer7CCTemplateResponse
 */
ConfigLayer7CCTemplateResponse Client::configLayer7CCTemplateWithOptions(const ConfigLayer7CCTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "ConfigLayer7CCTemplate"},
    {"version" , "2017-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfigLayer7CCTemplateResponse>();
}

/**
 * @param request ConfigLayer7CCTemplateRequest
 * @return ConfigLayer7CCTemplateResponse
 */
ConfigLayer7CCTemplateResponse Client::configLayer7CCTemplate(const ConfigLayer7CCTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configLayer7CCTemplateWithOptions(request, runtime);
}

/**
 * @param request ConfigLayer7CertRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigLayer7CertResponse
 */
ConfigLayer7CertResponse Client::configLayer7CertWithOptions(const ConfigLayer7CertRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCert()) {
    query["Cert"] = request.cert();
  }

  if (!!request.hasCertId()) {
    query["CertId"] = request.certId();
  }

  if (!!request.hasCertIdentifier()) {
    query["CertIdentifier"] = request.certIdentifier();
  }

  if (!!request.hasCertName()) {
    query["CertName"] = request.certName();
  }

  if (!!request.hasCertRegion()) {
    query["CertRegion"] = request.certRegion();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasKey()) {
    query["Key"] = request.key();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ConfigLayer7Cert"},
    {"version" , "2017-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfigLayer7CertResponse>();
}

/**
 * @param request ConfigLayer7CertRequest
 * @return ConfigLayer7CertResponse
 */
ConfigLayer7CertResponse Client::configLayer7Cert(const ConfigLayer7CertRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configLayer7CertWithOptions(request, runtime);
}

/**
 * @param request ConfigLayer7RuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigLayer7RuleResponse
 */
ConfigLayer7RuleResponse Client::configLayer7RuleWithOptions(const ConfigLayer7RuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.instanceIds();
  }

  if (!!request.hasProxyTypeList()) {
    query["ProxyTypeList"] = request.proxyTypeList();
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
    {"action" , "ConfigLayer7Rule"},
    {"version" , "2017-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfigLayer7RuleResponse>();
}

/**
 * @param request ConfigLayer7RuleRequest
 * @return ConfigLayer7RuleResponse
 */
ConfigLayer7RuleResponse Client::configLayer7Rule(const ConfigLayer7RuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configLayer7RuleWithOptions(request, runtime);
}

/**
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
    {"version" , "2017-12-28"},
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
 * @param request CreateAsyncTaskRequest
 * @return CreateAsyncTaskResponse
 */
CreateAsyncTaskResponse Client::createAsyncTask(const CreateAsyncTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAsyncTaskWithOptions(request, runtime);
}

/**
 * @param tmpReq CreateLayer4RuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLayer4RuleResponse
 */
CreateLayer4RuleResponse Client::createLayer4RuleWithOptions(const CreateLayer4RuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateLayer4RuleShrinkRequest request = CreateLayer4RuleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUsTimeout()) {
    request.setUsTimeoutShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.usTimeout(), "UsTimeout", "json"));
  }

  json query = {};
  if (!!request.hasListeners()) {
    query["Listeners"] = request.listeners();
  }

  if (!!request.hasProxyEnable()) {
    query["ProxyEnable"] = request.proxyEnable();
  }

  if (!!request.hasUsTimeoutShrink()) {
    query["UsTimeout"] = request.usTimeoutShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateLayer4Rule"},
    {"version" , "2017-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLayer4RuleResponse>();
}

/**
 * @param request CreateLayer4RuleRequest
 * @return CreateLayer4RuleResponse
 */
CreateLayer4RuleResponse Client::createLayer4Rule(const CreateLayer4RuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLayer4RuleWithOptions(request, runtime);
}

/**
 * @param request CreateLayer7RuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLayer7RuleResponse
 */
CreateLayer7RuleResponse Client::createLayer7RuleWithOptions(const CreateLayer7RuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
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
    {"action" , "CreateLayer7Rule"},
    {"version" , "2017-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLayer7RuleResponse>();
}

/**
 * @param request CreateLayer7RuleRequest
 * @return CreateLayer7RuleResponse
 */
CreateLayer7RuleResponse Client::createLayer7Rule(const CreateLayer7RuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLayer7RuleWithOptions(request, runtime);
}

/**
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
    {"version" , "2017-12-28"},
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
 * @param request DeleteAsyncTaskRequest
 * @return DeleteAsyncTaskResponse
 */
DeleteAsyncTaskResponse Client::deleteAsyncTask(const DeleteAsyncTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAsyncTaskWithOptions(request, runtime);
}

/**
 * @param request DeleteLayer4RuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLayer4RuleResponse
 */
DeleteLayer4RuleResponse Client::deleteLayer4RuleWithOptions(const DeleteLayer4RuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasListeners()) {
    query["Listeners"] = request.listeners();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteLayer4Rule"},
    {"version" , "2017-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLayer4RuleResponse>();
}

/**
 * @param request DeleteLayer4RuleRequest
 * @return DeleteLayer4RuleResponse
 */
DeleteLayer4RuleResponse Client::deleteLayer4Rule(const DeleteLayer4RuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteLayer4RuleWithOptions(request, runtime);
}

/**
 * @param request DeleteLayer7CCRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLayer7CCRuleResponse
 */
DeleteLayer7CCRuleResponse Client::deleteLayer7CCRuleWithOptions(const DeleteLayer7CCRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "DeleteLayer7CCRule"},
    {"version" , "2017-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLayer7CCRuleResponse>();
}

/**
 * @param request DeleteLayer7CCRuleRequest
 * @return DeleteLayer7CCRuleResponse
 */
DeleteLayer7CCRuleResponse Client::deleteLayer7CCRule(const DeleteLayer7CCRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteLayer7CCRuleWithOptions(request, runtime);
}

/**
 * @param request DeleteLayer7RuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLayer7RuleResponse
 */
DeleteLayer7RuleResponse Client::deleteLayer7RuleWithOptions(const DeleteLayer7RuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "DeleteLayer7Rule"},
    {"version" , "2017-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLayer7RuleResponse>();
}

/**
 * @param request DeleteLayer7RuleRequest
 * @return DeleteLayer7RuleResponse
 */
DeleteLayer7RuleResponse Client::deleteLayer7Rule(const DeleteLayer7RuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteLayer7RuleWithOptions(request, runtime);
}

/**
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

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBackSourceCidr"},
    {"version" , "2017-12-28"},
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
 * @param request DescribeBackSourceCidrRequest
 * @return DescribeBackSourceCidrResponse
 */
DescribeBackSourceCidrResponse Client::describeBackSourceCidr(const DescribeBackSourceCidrRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackSourceCidrWithOptions(request, runtime);
}

/**
 * @summary rosetta迁移
 *
 * @param request DescribeBatchSlsDispatchStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBatchSlsDispatchStatusResponse
 */
DescribeBatchSlsDispatchStatusResponse Client::describeBatchSlsDispatchStatusWithOptions(const DescribeBatchSlsDispatchStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBatchSlsDispatchStatus"},
    {"version" , "2017-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBatchSlsDispatchStatusResponse>();
}

/**
 * @summary rosetta迁移
 *
 * @param request DescribeBatchSlsDispatchStatusRequest
 * @return DescribeBatchSlsDispatchStatusResponse
 */
DescribeBatchSlsDispatchStatusResponse Client::describeBatchSlsDispatchStatus(const DescribeBatchSlsDispatchStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBatchSlsDispatchStatusWithOptions(request, runtime);
}

/**
 * @param request DescribeDDoSEventsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDDoSEventsResponse
 */
DescribeDDoSEventsResponse Client::describeDDoSEventsWithOptions(const DescribeDDoSEventsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEip()) {
    query["Eip"] = request.eip();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasOffset()) {
    query["Offset"] = request.offset();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDDoSEvents"},
    {"version" , "2017-12-28"},
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
 * @param request DescribeDDoSEventsRequest
 * @return DescribeDDoSEventsResponse
 */
DescribeDDoSEventsResponse Client::describeDDoSEvents(const DescribeDDoSEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDDoSEventsWithOptions(request, runtime);
}

/**
 * @param request DescribeDDoSTrafficRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDDoSTrafficResponse
 */
DescribeDDoSTrafficResponse Client::describeDDoSTrafficWithOptions(const DescribeDDoSTrafficRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEip()) {
    query["Eip"] = request.eip();
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

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDDoSTraffic"},
    {"version" , "2017-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDDoSTrafficResponse>();
}

/**
 * @param request DescribeDDoSTrafficRequest
 * @return DescribeDDoSTrafficResponse
 */
DescribeDDoSTrafficResponse Client::describeDDoSTraffic(const DescribeDDoSTrafficRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDDoSTrafficWithOptions(request, runtime);
}

/**
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

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDefenseCountStatistics"},
    {"version" , "2017-12-28"},
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
 * @param request DescribeDefenseCountStatisticsRequest
 * @return DescribeDefenseCountStatisticsResponse
 */
DescribeDefenseCountStatisticsResponse Client::describeDefenseCountStatistics(const DescribeDefenseCountStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDefenseCountStatisticsWithOptions(request, runtime);
}

/**
 * @param request DescribeDomainAccessModeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainAccessModeResponse
 */
DescribeDomainAccessModeResponse Client::describeDomainAccessModeWithOptions(const DescribeDomainAccessModeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainList()) {
    query["DomainList"] = request.domainList();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainAccessMode"},
    {"version" , "2017-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainAccessModeResponse>();
}

/**
 * @param request DescribeDomainAccessModeRequest
 * @return DescribeDomainAccessModeResponse
 */
DescribeDomainAccessModeResponse Client::describeDomainAccessMode(const DescribeDomainAccessModeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainAccessModeWithOptions(request, runtime);
}

/**
 * @param request DescribeDomainAttackEventListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainAttackEventListResponse
 */
DescribeDomainAttackEventListResponse Client::describeDomainAttackEventListWithOptions(const DescribeDomainAttackEventListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
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
    {"action" , "DescribeDomainAttackEventList"},
    {"version" , "2017-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainAttackEventListResponse>();
}

/**
 * @param request DescribeDomainAttackEventListRequest
 * @return DescribeDomainAttackEventListResponse
 */
DescribeDomainAttackEventListResponse Client::describeDomainAttackEventList(const DescribeDomainAttackEventListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainAttackEventListWithOptions(request, runtime);
}

/**
 * @param request DescribeDomainAttackMaxQpsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainAttackMaxQpsResponse
 */
DescribeDomainAttackMaxQpsResponse Client::describeDomainAttackMaxQpsWithOptions(const DescribeDomainAttackMaxQpsRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "DescribeDomainAttackMaxQps"},
    {"version" , "2017-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainAttackMaxQpsResponse>();
}

/**
 * @param request DescribeDomainAttackMaxQpsRequest
 * @return DescribeDomainAttackMaxQpsResponse
 */
DescribeDomainAttackMaxQpsResponse Client::describeDomainAttackMaxQps(const DescribeDomainAttackMaxQpsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainAttackMaxQpsWithOptions(request, runtime);
}

/**
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
    {"version" , "2017-12-28"},
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
 * @param request DescribeDomainOverviewRequest
 * @return DescribeDomainOverviewResponse
 */
DescribeDomainOverviewResponse Client::describeDomainOverview(const DescribeDomainOverviewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainOverviewWithOptions(request, runtime);
}

/**
 * @param request DescribeDomainQpsListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainQpsListResponse
 */
DescribeDomainQpsListResponse Client::describeDomainQpsListWithOptions(const DescribeDomainQpsListRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "DescribeDomainQpsList"},
    {"version" , "2017-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainQpsListResponse>();
}

/**
 * @param request DescribeDomainQpsListRequest
 * @return DescribeDomainQpsListResponse
 */
DescribeDomainQpsListResponse Client::describeDomainQpsList(const DescribeDomainQpsListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainQpsListWithOptions(request, runtime);
}

/**
 * @param request DescribeDomainQpsWithCacheRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainQpsWithCacheResponse
 */
DescribeDomainQpsWithCacheResponse Client::describeDomainQpsWithCacheWithOptions(const DescribeDomainQpsWithCacheRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainQpsWithCache"},
    {"version" , "2017-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainQpsWithCacheResponse>();
}

/**
 * @param request DescribeDomainQpsWithCacheRequest
 * @return DescribeDomainQpsWithCacheResponse
 */
DescribeDomainQpsWithCacheResponse Client::describeDomainQpsWithCache(const DescribeDomainQpsWithCacheRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainQpsWithCacheWithOptions(request, runtime);
}

/**
 * @param request DescribeDomainSlsStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainSlsStatusResponse
 */
DescribeDomainSlsStatusResponse Client::describeDomainSlsStatusWithOptions(const DescribeDomainSlsStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainSlsStatus"},
    {"version" , "2017-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainSlsStatusResponse>();
}

/**
 * @param request DescribeDomainSlsStatusRequest
 * @return DescribeDomainSlsStatusResponse
 */
DescribeDomainSlsStatusResponse Client::describeDomainSlsStatus(const DescribeDomainSlsStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainSlsStatusWithOptions(request, runtime);
}

/**
 * @summary 查询网站业务的响应状态码统计信息
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
    {"version" , "2017-12-28"},
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
 * @summary 查询网站业务的响应状态码统计信息
 *
 * @param request DescribeDomainStatusCodeListRequest
 * @return DescribeDomainStatusCodeListResponse
 */
DescribeDomainStatusCodeListResponse Client::describeDomainStatusCodeList(const DescribeDomainStatusCodeListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainStatusCodeListWithOptions(request, runtime);
}

/**
 * @param request DescribeDomainsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainsResponse
 */
DescribeDomainsResponse Client::describeDomainsWithOptions(const DescribeDomainsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.instanceIds();
  }

  if (!!request.hasOffset()) {
    query["Offset"] = request.offset();
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

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomains"},
    {"version" , "2017-12-28"},
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
 * @param request DescribeDomainsRequest
 * @return DescribeDomainsResponse
 */
DescribeDomainsResponse Client::describeDomains(const DescribeDomainsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainsWithOptions(request, runtime);
}

/**
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

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeElasticBandwidthSpec"},
    {"version" , "2017-12-28"},
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
 * @param request DescribeElasticBandwidthSpecRequest
 * @return DescribeElasticBandwidthSpecResponse
 */
DescribeElasticBandwidthSpecResponse Client::describeElasticBandwidthSpec(const DescribeElasticBandwidthSpecRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeElasticBandwidthSpecWithOptions(request, runtime);
}

/**
 * @param request DescribeHealthCheckListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHealthCheckListResponse
 */
DescribeHealthCheckListResponse Client::describeHealthCheckListWithOptions(const DescribeHealthCheckListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasListeners()) {
    query["Listeners"] = request.listeners();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHealthCheckList"},
    {"version" , "2017-12-28"},
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
 * @param request DescribeHealthCheckListRequest
 * @return DescribeHealthCheckListResponse
 */
DescribeHealthCheckListResponse Client::describeHealthCheckList(const DescribeHealthCheckListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHealthCheckListWithOptions(request, runtime);
}

/**
 * @param request DescribeHealthCheckStatusListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHealthCheckStatusListResponse
 */
DescribeHealthCheckStatusListResponse Client::describeHealthCheckStatusListWithOptions(const DescribeHealthCheckStatusListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasListeners()) {
    query["Listeners"] = request.listeners();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHealthCheckStatusList"},
    {"version" , "2017-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHealthCheckStatusListResponse>();
}

/**
 * @param request DescribeHealthCheckStatusListRequest
 * @return DescribeHealthCheckStatusListResponse
 */
DescribeHealthCheckStatusListResponse Client::describeHealthCheckStatusList(const DescribeHealthCheckStatusListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHealthCheckStatusListWithOptions(request, runtime);
}

/**
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

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceDetails"},
    {"version" , "2017-12-28"},
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
 * @param request DescribeInstanceDetailsRequest
 * @return DescribeInstanceDetailsResponse
 */
DescribeInstanceDetailsResponse Client::describeInstanceDetails(const DescribeInstanceDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceDetailsWithOptions(request, runtime);
}

/**
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

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceSpecs"},
    {"version" , "2017-12-28"},
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
 * @param request DescribeInstanceSpecsRequest
 * @return DescribeInstanceSpecsResponse
 */
DescribeInstanceSpecsResponse Client::describeInstanceSpecs(const DescribeInstanceSpecsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceSpecsWithOptions(request, runtime);
}

/**
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

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceStatistics"},
    {"version" , "2017-12-28"},
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
 * @param request DescribeInstanceStatisticsRequest
 * @return DescribeInstanceStatisticsResponse
 */
DescribeInstanceStatisticsResponse Client::describeInstanceStatistics(const DescribeInstanceStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceStatisticsWithOptions(request, runtime);
}

/**
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

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
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

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
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
    {"version" , "2017-12-28"},
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
 * @param request DescribeInstancesRequest
 * @return DescribeInstancesResponse
 */
DescribeInstancesResponse Client::describeInstances(const DescribeInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstancesWithOptions(request, runtime);
}

/**
 * @param request DescribeIpTrafficRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeIpTrafficResponse
 */
DescribeIpTrafficResponse Client::describeIpTrafficWithOptions(const DescribeIpTrafficRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEip()) {
    query["Eip"] = request.eip();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.port();
  }

  if (!!request.hasQueryProtocol()) {
    query["QueryProtocol"] = request.queryProtocol();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeIpTraffic"},
    {"version" , "2017-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeIpTrafficResponse>();
}

/**
 * @param request DescribeIpTrafficRequest
 * @return DescribeIpTrafficResponse
 */
DescribeIpTrafficResponse Client::describeIpTraffic(const DescribeIpTrafficRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeIpTrafficWithOptions(request, runtime);
}

/**
 * @param request DescribeLayer4RuleAttributesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLayer4RuleAttributesResponse
 */
DescribeLayer4RuleAttributesResponse Client::describeLayer4RuleAttributesWithOptions(const DescribeLayer4RuleAttributesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasListeners()) {
    query["Listeners"] = request.listeners();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLayer4RuleAttributes"},
    {"version" , "2017-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLayer4RuleAttributesResponse>();
}

/**
 * @param request DescribeLayer4RuleAttributesRequest
 * @return DescribeLayer4RuleAttributesResponse
 */
DescribeLayer4RuleAttributesResponse Client::describeLayer4RuleAttributes(const DescribeLayer4RuleAttributesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLayer4RuleAttributesWithOptions(request, runtime);
}

/**
 * @summary Call DescribeLayer4Rules to query the detailed configuration of port forwarding rules for DDoS protection instances.
 *
 * @param request DescribeLayer4RulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLayer4RulesResponse
 */
DescribeLayer4RulesResponse Client::describeLayer4RulesWithOptions(const DescribeLayer4RulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasOffset()) {
    query["Offset"] = request.offset();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLayer4Rules"},
    {"version" , "2017-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLayer4RulesResponse>();
}

/**
 * @summary Call DescribeLayer4Rules to query the detailed configuration of port forwarding rules for DDoS protection instances.
 *
 * @param request DescribeLayer4RulesRequest
 * @return DescribeLayer4RulesResponse
 */
DescribeLayer4RulesResponse Client::describeLayer4Rules(const DescribeLayer4RulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLayer4RulesWithOptions(request, runtime);
}

/**
 * @param request DescribeLayer7CCRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLayer7CCRulesResponse
 */
DescribeLayer7CCRulesResponse Client::describeLayer7CCRulesWithOptions(const DescribeLayer7CCRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasOffset()) {
    query["Offset"] = request.offset();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLayer7CCRules"},
    {"version" , "2017-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLayer7CCRulesResponse>();
}

/**
 * @param request DescribeLayer7CCRulesRequest
 * @return DescribeLayer7CCRulesResponse
 */
DescribeLayer7CCRulesResponse Client::describeLayer7CCRules(const DescribeLayer7CCRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLayer7CCRulesWithOptions(request, runtime);
}

/**
 * @param request DescribeLogStoreExistStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLogStoreExistStatusResponse
 */
DescribeLogStoreExistStatusResponse Client::describeLogStoreExistStatusWithOptions(const DescribeLogStoreExistStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLogStoreExistStatus"},
    {"version" , "2017-12-28"},
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
 * @param request DescribeLogStoreExistStatusRequest
 * @return DescribeLogStoreExistStatusResponse
 */
DescribeLogStoreExistStatusResponse Client::describeLogStoreExistStatus(const DescribeLogStoreExistStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLogStoreExistStatusWithOptions(request, runtime);
}

/**
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

  if (!!request.hasOpAction()) {
    query["OpAction"] = request.opAction();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeOpEntities"},
    {"version" , "2017-12-28"},
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
 * @param request DescribeOpEntitiesRequest
 * @return DescribeOpEntitiesResponse
 */
DescribeOpEntitiesResponse Client::describeOpEntities(const DescribeOpEntitiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOpEntitiesWithOptions(request, runtime);
}

/**
 * @param request DescribeSimpleDomainsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSimpleDomainsResponse
 */
DescribeSimpleDomainsResponse Client::describeSimpleDomainsWithOptions(const DescribeSimpleDomainsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.instanceIds();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSimpleDomains"},
    {"version" , "2017-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSimpleDomainsResponse>();
}

/**
 * @param request DescribeSimpleDomainsRequest
 * @return DescribeSimpleDomainsResponse
 */
DescribeSimpleDomainsResponse Client::describeSimpleDomains(const DescribeSimpleDomainsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSimpleDomainsWithOptions(request, runtime);
}

/**
 * @param request DescribeSlsAuthStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSlsAuthStatusResponse
 */
DescribeSlsAuthStatusResponse Client::describeSlsAuthStatusWithOptions(const DescribeSlsAuthStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSlsAuthStatus"},
    {"version" , "2017-12-28"},
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
 * @param request DescribeSlsAuthStatusRequest
 * @return DescribeSlsAuthStatusResponse
 */
DescribeSlsAuthStatusResponse Client::describeSlsAuthStatus(const DescribeSlsAuthStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSlsAuthStatusWithOptions(request, runtime);
}

/**
 * @param request DescribeSlsEmptyCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSlsEmptyCountResponse
 */
DescribeSlsEmptyCountResponse Client::describeSlsEmptyCountWithOptions(const DescribeSlsEmptyCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSlsEmptyCount"},
    {"version" , "2017-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSlsEmptyCountResponse>();
}

/**
 * @param request DescribeSlsEmptyCountRequest
 * @return DescribeSlsEmptyCountResponse
 */
DescribeSlsEmptyCountResponse Client::describeSlsEmptyCount(const DescribeSlsEmptyCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSlsEmptyCountWithOptions(request, runtime);
}

/**
 * @param request DescribeSlsLogstoreInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSlsLogstoreInfoResponse
 */
DescribeSlsLogstoreInfoResponse Client::describeSlsLogstoreInfoWithOptions(const DescribeSlsLogstoreInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSlsLogstoreInfo"},
    {"version" , "2017-12-28"},
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
 * @param request DescribeSlsLogstoreInfoRequest
 * @return DescribeSlsLogstoreInfoResponse
 */
DescribeSlsLogstoreInfoResponse Client::describeSlsLogstoreInfo(const DescribeSlsLogstoreInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSlsLogstoreInfoWithOptions(request, runtime);
}

/**
 * @param request DescribeSlsOpenStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSlsOpenStatusResponse
 */
DescribeSlsOpenStatusResponse Client::describeSlsOpenStatusWithOptions(const DescribeSlsOpenStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSlsOpenStatus"},
    {"version" , "2017-12-28"},
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
 * @param request DescribeSlsOpenStatusRequest
 * @return DescribeSlsOpenStatusResponse
 */
DescribeSlsOpenStatusResponse Client::describeSlsOpenStatus(const DescribeSlsOpenStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSlsOpenStatusWithOptions(request, runtime);
}

/**
 * @param request DescribleCertListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribleCertListResponse
 */
DescribleCertListResponse Client::describleCertListWithOptions(const DescribleCertListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribleCertList"},
    {"version" , "2017-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribleCertListResponse>();
}

/**
 * @param request DescribleCertListRequest
 * @return DescribleCertListResponse
 */
DescribleCertListResponse Client::describleCertList(const DescribleCertListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describleCertListWithOptions(request, runtime);
}

/**
 * @param request DescribleLayer7InstanceRelationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribleLayer7InstanceRelationsResponse
 */
DescribleLayer7InstanceRelationsResponse Client::describleLayer7InstanceRelationsWithOptions(const DescribleLayer7InstanceRelationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainList()) {
    query["DomainList"] = request.domainList();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribleLayer7InstanceRelations"},
    {"version" , "2017-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribleLayer7InstanceRelationsResponse>();
}

/**
 * @param request DescribleLayer7InstanceRelationsRequest
 * @return DescribleLayer7InstanceRelationsResponse
 */
DescribleLayer7InstanceRelationsResponse Client::describleLayer7InstanceRelations(const DescribleLayer7InstanceRelationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describleLayer7InstanceRelationsWithOptions(request, runtime);
}

/**
 * @param request DisableLayer7CCRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableLayer7CCResponse
 */
DisableLayer7CCResponse Client::disableLayer7CCWithOptions(const DisableLayer7CCRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableLayer7CC"},
    {"version" , "2017-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableLayer7CCResponse>();
}

/**
 * @param request DisableLayer7CCRequest
 * @return DisableLayer7CCResponse
 */
DisableLayer7CCResponse Client::disableLayer7CC(const DisableLayer7CCRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableLayer7CCWithOptions(request, runtime);
}

/**
 * @param request DisableLayer7CCRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableLayer7CCRuleResponse
 */
DisableLayer7CCRuleResponse Client::disableLayer7CCRuleWithOptions(const DisableLayer7CCRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableLayer7CCRule"},
    {"version" , "2017-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableLayer7CCRuleResponse>();
}

/**
 * @param request DisableLayer7CCRuleRequest
 * @return DisableLayer7CCRuleResponse
 */
DisableLayer7CCRuleResponse Client::disableLayer7CCRule(const DisableLayer7CCRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableLayer7CCRuleWithOptions(request, runtime);
}

/**
 * @param request EmptySlsLogstoreRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EmptySlsLogstoreResponse
 */
EmptySlsLogstoreResponse Client::emptySlsLogstoreWithOptions(const EmptySlsLogstoreRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EmptySlsLogstore"},
    {"version" , "2017-12-28"},
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
 * @param request EmptySlsLogstoreRequest
 * @return EmptySlsLogstoreResponse
 */
EmptySlsLogstoreResponse Client::emptySlsLogstore(const EmptySlsLogstoreRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return emptySlsLogstoreWithOptions(request, runtime);
}

/**
 * @param request EnableLayer7CCRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableLayer7CCResponse
 */
EnableLayer7CCResponse Client::enableLayer7CCWithOptions(const EnableLayer7CCRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableLayer7CC"},
    {"version" , "2017-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableLayer7CCResponse>();
}

/**
 * @param request EnableLayer7CCRequest
 * @return EnableLayer7CCResponse
 */
EnableLayer7CCResponse Client::enableLayer7CC(const EnableLayer7CCRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableLayer7CCWithOptions(request, runtime);
}

/**
 * @param request EnableLayer7CCRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableLayer7CCRuleResponse
 */
EnableLayer7CCRuleResponse Client::enableLayer7CCRuleWithOptions(const EnableLayer7CCRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableLayer7CCRule"},
    {"version" , "2017-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableLayer7CCRuleResponse>();
}

/**
 * @param request EnableLayer7CCRuleRequest
 * @return EnableLayer7CCRuleResponse
 */
EnableLayer7CCRuleResponse Client::enableLayer7CCRule(const EnableLayer7CCRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableLayer7CCRuleWithOptions(request, runtime);
}

/**
 * @param request ListAsyncTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAsyncTaskResponse
 */
ListAsyncTaskResponse Client::listAsyncTaskWithOptions(const ListAsyncTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAsyncTask"},
    {"version" , "2017-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAsyncTaskResponse>();
}

/**
 * @param request ListAsyncTaskRequest
 * @return ListAsyncTaskResponse
 */
ListAsyncTaskResponse Client::listAsyncTask(const ListAsyncTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAsyncTaskWithOptions(request, runtime);
}

/**
 * @param request ListLayer7CustomPortsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLayer7CustomPortsResponse
 */
ListLayer7CustomPortsResponse Client::listLayer7CustomPortsWithOptions(const ListLayer7CustomPortsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListLayer7CustomPorts"},
    {"version" , "2017-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLayer7CustomPortsResponse>();
}

/**
 * @param request ListLayer7CustomPortsRequest
 * @return ListLayer7CustomPortsResponse
 */
ListLayer7CustomPortsResponse Client::listLayer7CustomPorts(const ListLayer7CustomPortsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listLayer7CustomPortsWithOptions(request, runtime);
}

/**
 * @param request ListTagKeysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagKeysResponse
 */
ListTagKeysResponse Client::listTagKeysWithOptions(const ListTagKeysRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
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
    {"action" , "ListTagKeys"},
    {"version" , "2017-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagKeysResponse>();
}

/**
 * @param request ListTagKeysRequest
 * @return ListTagKeysResponse
 */
ListTagKeysResponse Client::listTagKeys(const ListTagKeysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagKeysWithOptions(request, runtime);
}

/**
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

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
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
    {"version" , "2017-12-28"},
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
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @param request ListValueAddedRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListValueAddedResponse
 */
ListValueAddedResponse Client::listValueAddedWithOptions(const ListValueAddedRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListValueAdded"},
    {"version" , "2017-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListValueAddedResponse>();
}

/**
 * @param request ListValueAddedRequest
 * @return ListValueAddedResponse
 */
ListValueAddedResponse Client::listValueAdded(const ListValueAddedRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listValueAddedWithOptions(request, runtime);
}

/**
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

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyElasticBandWidth"},
    {"version" , "2017-12-28"},
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
 * @param request ModifyElasticBandWidthRequest
 * @return ModifyElasticBandWidthResponse
 */
ModifyElasticBandWidthResponse Client::modifyElasticBandWidth(const ModifyElasticBandWidthRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyElasticBandWidthWithOptions(request, runtime);
}

/**
 * @param request ModifyFullLogTtlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyFullLogTtlResponse
 */
ModifyFullLogTtlResponse Client::modifyFullLogTtlWithOptions(const ModifyFullLogTtlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  if (!!request.hasTtl()) {
    query["Ttl"] = request.ttl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyFullLogTtl"},
    {"version" , "2017-12-28"},
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
 * @param request ModifyFullLogTtlRequest
 * @return ModifyFullLogTtlResponse
 */
ModifyFullLogTtlResponse Client::modifyFullLogTtl(const ModifyFullLogTtlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyFullLogTtlWithOptions(request, runtime);
}

/**
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

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyInstanceRemark"},
    {"version" , "2017-12-28"},
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
 * @param request ModifyInstanceRemarkRequest
 * @return ModifyInstanceRemarkResponse
 */
ModifyInstanceRemarkResponse Client::modifyInstanceRemark(const ModifyInstanceRemarkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceRemarkWithOptions(request, runtime);
}

/**
 * @param request OpenDomainSlsConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OpenDomainSlsConfigResponse
 */
OpenDomainSlsConfigResponse Client::openDomainSlsConfigWithOptions(const OpenDomainSlsConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OpenDomainSlsConfig"},
    {"version" , "2017-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OpenDomainSlsConfigResponse>();
}

/**
 * @param request OpenDomainSlsConfigRequest
 * @return OpenDomainSlsConfigResponse
 */
OpenDomainSlsConfigResponse Client::openDomainSlsConfig(const OpenDomainSlsConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return openDomainSlsConfigWithOptions(request, runtime);
}

/**
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

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReleaseInstance"},
    {"version" , "2017-12-28"},
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
 * @param request ReleaseInstanceRequest
 * @return ReleaseInstanceResponse
 */
ReleaseInstanceResponse Client::releaseInstance(const ReleaseInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return releaseInstanceWithOptions(request, runtime);
}

/**
 * @param request ReleaseValueAddedRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleaseValueAddedResponse
 */
ReleaseValueAddedResponse Client::releaseValueAddedWithOptions(const ReleaseValueAddedRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReleaseValueAdded"},
    {"version" , "2017-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReleaseValueAddedResponse>();
}

/**
 * @param request ReleaseValueAddedRequest
 * @return ReleaseValueAddedResponse
 */
ReleaseValueAddedResponse Client::releaseValueAdded(const ReleaseValueAddedRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return releaseValueAddedWithOptions(request, runtime);
}

/**
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
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
    {"version" , "2017-12-28"},
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
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
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

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
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
    {"version" , "2017-12-28"},
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
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228