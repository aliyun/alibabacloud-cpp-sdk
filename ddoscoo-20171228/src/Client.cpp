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
 * @summary 增加CC规则
 *
 * @param request AddLayer7CCRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddLayer7CCRuleResponse
 */
AddLayer7CCRuleResponse Client::addLayer7CCRuleWithOptions(const AddLayer7CCRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
 * @summary 增加CC规则
 *
 * @param request AddLayer7CCRuleRequest
 * @return AddLayer7CCRuleResponse
 */
AddLayer7CCRuleResponse Client::addLayer7CCRule(const AddLayer7CCRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addLayer7CCRuleWithOptions(request, runtime);
}

/**
 * @summary 关闭日志分发
 *
 * @param request CloseDomainSlsConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloseDomainSlsConfigResponse
 */
CloseDomainSlsConfigResponse Client::closeDomainSlsConfigWithOptions(const CloseDomainSlsConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary 关闭日志分发
 *
 * @param request CloseDomainSlsConfigRequest
 * @return CloseDomainSlsConfigResponse
 */
CloseDomainSlsConfigResponse Client::closeDomainSlsConfig(const CloseDomainSlsConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return closeDomainSlsConfigWithOptions(request, runtime);
}

/**
 * @summary 修改健康检查
 *
 * @param request ConfigHealthCheckRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigHealthCheckResponse
 */
ConfigHealthCheckResponse Client::configHealthCheckWithOptions(const ConfigHealthCheckRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
 * @summary 修改健康检查
 *
 * @param request ConfigHealthCheckRequest
 * @return ConfigHealthCheckResponse
 */
ConfigHealthCheckResponse Client::configHealthCheck(const ConfigHealthCheckRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configHealthCheckWithOptions(request, runtime);
}

/**
 * @summary 修改端口规则
 *
 * @param tmpReq ConfigLayer4RuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigLayer4RuleResponse
 */
ConfigLayer4RuleResponse Client::configLayer4RuleWithOptions(const ConfigLayer4RuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ConfigLayer4RuleShrinkRequest request = ConfigLayer4RuleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUsTimeout()) {
    request.setUsTimeoutShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUsTimeout(), "UsTimeout", "json"));
  }

  json query = {};
  if (!!request.hasListeners()) {
    query["Listeners"] = request.getListeners();
  }

  if (!!request.hasProxyEnable()) {
    query["ProxyEnable"] = request.getProxyEnable();
  }

  if (!!request.hasUsTimeoutShrink()) {
    query["UsTimeout"] = request.getUsTimeoutShrink();
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
 * @summary 修改端口规则
 *
 * @param request ConfigLayer4RuleRequest
 * @return ConfigLayer4RuleResponse
 */
ConfigLayer4RuleResponse Client::configLayer4Rule(const ConfigLayer4RuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configLayer4RuleWithOptions(request, runtime);
}

/**
 * @summary 修改端口规则属性
 *
 * @param request ConfigLayer4RuleAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigLayer4RuleAttributeResponse
 */
ConfigLayer4RuleAttributeResponse Client::configLayer4RuleAttributeWithOptions(const ConfigLayer4RuleAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
 * @summary 修改端口规则属性
 *
 * @param request ConfigLayer4RuleAttributeRequest
 * @return ConfigLayer4RuleAttributeResponse
 */
ConfigLayer4RuleAttributeResponse Client::configLayer4RuleAttribute(const ConfigLayer4RuleAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configLayer4RuleAttributeWithOptions(request, runtime);
}

/**
 * @summary 修改黑白名单
 *
 * @param request ConfigLayer7BlackWhiteListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigLayer7BlackWhiteListResponse
 */
ConfigLayer7BlackWhiteListResponse Client::configLayer7BlackWhiteListWithOptions(const ConfigLayer7BlackWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
 * @summary 修改黑白名单
 *
 * @param request ConfigLayer7BlackWhiteListRequest
 * @return ConfigLayer7BlackWhiteListResponse
 */
ConfigLayer7BlackWhiteListResponse Client::configLayer7BlackWhiteList(const ConfigLayer7BlackWhiteListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configLayer7BlackWhiteListWithOptions(request, runtime);
}

/**
 * @summary 修改CC规则
 *
 * @param request ConfigLayer7CCRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigLayer7CCRuleResponse
 */
ConfigLayer7CCRuleResponse Client::configLayer7CCRuleWithOptions(const ConfigLayer7CCRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
 * @summary 修改CC规则
 *
 * @param request ConfigLayer7CCRuleRequest
 * @return ConfigLayer7CCRuleResponse
 */
ConfigLayer7CCRuleResponse Client::configLayer7CCRule(const ConfigLayer7CCRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configLayer7CCRuleWithOptions(request, runtime);
}

/**
 * @summary 修改CC模板
 *
 * @param request ConfigLayer7CCTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigLayer7CCTemplateResponse
 */
ConfigLayer7CCTemplateResponse Client::configLayer7CCTemplateWithOptions(const ConfigLayer7CCTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
 * @summary 修改CC模板
 *
 * @param request ConfigLayer7CCTemplateRequest
 * @return ConfigLayer7CCTemplateResponse
 */
ConfigLayer7CCTemplateResponse Client::configLayer7CCTemplate(const ConfigLayer7CCTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configLayer7CCTemplateWithOptions(request, runtime);
}

/**
 * @summary 修改证书
 *
 * @param request ConfigLayer7CertRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigLayer7CertResponse
 */
ConfigLayer7CertResponse Client::configLayer7CertWithOptions(const ConfigLayer7CertRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCert()) {
    query["Cert"] = request.getCert();
  }

  if (!!request.hasCertId()) {
    query["CertId"] = request.getCertId();
  }

  if (!!request.hasCertIdentifier()) {
    query["CertIdentifier"] = request.getCertIdentifier();
  }

  if (!!request.hasCertName()) {
    query["CertName"] = request.getCertName();
  }

  if (!!request.hasCertRegion()) {
    query["CertRegion"] = request.getCertRegion();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasKey()) {
    query["Key"] = request.getKey();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
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
 * @summary 修改证书
 *
 * @param request ConfigLayer7CertRequest
 * @return ConfigLayer7CertResponse
 */
ConfigLayer7CertResponse Client::configLayer7Cert(const ConfigLayer7CertRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configLayer7CertWithOptions(request, runtime);
}

/**
 * @summary 修改域名接入规则
 *
 * @param request ConfigLayer7RuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigLayer7RuleResponse
 */
ConfigLayer7RuleResponse Client::configLayer7RuleWithOptions(const ConfigLayer7RuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasProxyTypeList()) {
    query["ProxyTypeList"] = request.getProxyTypeList();
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
 * @summary 修改域名接入规则
 *
 * @param request ConfigLayer7RuleRequest
 * @return ConfigLayer7RuleResponse
 */
ConfigLayer7RuleResponse Client::configLayer7Rule(const ConfigLayer7RuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configLayer7RuleWithOptions(request, runtime);
}

/**
 * @summary 创建异步任务
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
 * @summary 创建异步任务
 *
 * @param request CreateAsyncTaskRequest
 * @return CreateAsyncTaskResponse
 */
CreateAsyncTaskResponse Client::createAsyncTask(const CreateAsyncTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAsyncTaskWithOptions(request, runtime);
}

/**
 * @summary 创建端口接入
 *
 * @param tmpReq CreateLayer4RuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLayer4RuleResponse
 */
CreateLayer4RuleResponse Client::createLayer4RuleWithOptions(const CreateLayer4RuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateLayer4RuleShrinkRequest request = CreateLayer4RuleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUsTimeout()) {
    request.setUsTimeoutShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUsTimeout(), "UsTimeout", "json"));
  }

  json query = {};
  if (!!request.hasListeners()) {
    query["Listeners"] = request.getListeners();
  }

  if (!!request.hasProxyEnable()) {
    query["ProxyEnable"] = request.getProxyEnable();
  }

  if (!!request.hasUsTimeoutShrink()) {
    query["UsTimeout"] = request.getUsTimeoutShrink();
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
 * @summary 创建端口接入
 *
 * @param request CreateLayer4RuleRequest
 * @return CreateLayer4RuleResponse
 */
CreateLayer4RuleResponse Client::createLayer4Rule(const CreateLayer4RuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLayer4RuleWithOptions(request, runtime);
}

/**
 * @summary 创建域名接入规则
 *
 * @param request CreateLayer7RuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLayer7RuleResponse
 */
CreateLayer7RuleResponse Client::createLayer7RuleWithOptions(const CreateLayer7RuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
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
 * @summary 创建域名接入规则
 *
 * @param request CreateLayer7RuleRequest
 * @return CreateLayer7RuleResponse
 */
CreateLayer7RuleResponse Client::createLayer7Rule(const CreateLayer7RuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLayer7RuleWithOptions(request, runtime);
}

/**
 * @summary 删除异步任务
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
 * @summary 删除异步任务
 *
 * @param request DeleteAsyncTaskRequest
 * @return DeleteAsyncTaskResponse
 */
DeleteAsyncTaskResponse Client::deleteAsyncTask(const DeleteAsyncTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAsyncTaskWithOptions(request, runtime);
}

/**
 * @summary 删除端口接入规则
 *
 * @param request DeleteLayer4RuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLayer4RuleResponse
 */
DeleteLayer4RuleResponse Client::deleteLayer4RuleWithOptions(const DeleteLayer4RuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasListeners()) {
    query["Listeners"] = request.getListeners();
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
 * @summary 删除端口接入规则
 *
 * @param request DeleteLayer4RuleRequest
 * @return DeleteLayer4RuleResponse
 */
DeleteLayer4RuleResponse Client::deleteLayer4Rule(const DeleteLayer4RuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteLayer4RuleWithOptions(request, runtime);
}

/**
 * @summary 删除CC规则
 *
 * @param request DeleteLayer7CCRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLayer7CCRuleResponse
 */
DeleteLayer7CCRuleResponse Client::deleteLayer7CCRuleWithOptions(const DeleteLayer7CCRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
 * @summary 删除CC规则
 *
 * @param request DeleteLayer7CCRuleRequest
 * @return DeleteLayer7CCRuleResponse
 */
DeleteLayer7CCRuleResponse Client::deleteLayer7CCRule(const DeleteLayer7CCRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteLayer7CCRuleWithOptions(request, runtime);
}

/**
 * @summary 删除域名接入规则
 *
 * @param request DeleteLayer7RuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLayer7RuleResponse
 */
DeleteLayer7RuleResponse Client::deleteLayer7RuleWithOptions(const DeleteLayer7RuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
 * @summary 删除域名接入规则
 *
 * @param request DeleteLayer7RuleRequest
 * @return DeleteLayer7RuleResponse
 */
DeleteLayer7RuleResponse Client::deleteLayer7Rule(const DeleteLayer7RuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteLayer7RuleWithOptions(request, runtime);
}

/**
 * @summary 查询回源网段
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

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary 查询回源网段
 *
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
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary 查询事件
 *
 * @param request DescribeDDoSEventsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDDoSEventsResponse
 */
DescribeDDoSEventsResponse Client::describeDDoSEventsWithOptions(const DescribeDDoSEventsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEip()) {
    query["Eip"] = request.getEip();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasOffset()) {
    query["Offset"] = request.getOffset();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary 查询事件
 *
 * @param request DescribeDDoSEventsRequest
 * @return DescribeDDoSEventsResponse
 */
DescribeDDoSEventsResponse Client::describeDDoSEvents(const DescribeDDoSEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDDoSEventsWithOptions(request, runtime);
}

/**
 * @summary 查询流量
 *
 * @param request DescribeDDoSTrafficRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDDoSTrafficResponse
 */
DescribeDDoSTrafficResponse Client::describeDDoSTrafficWithOptions(const DescribeDDoSTrafficRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEip()) {
    query["Eip"] = request.getEip();
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

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary 查询流量
 *
 * @param request DescribeDDoSTrafficRequest
 * @return DescribeDDoSTrafficResponse
 */
DescribeDDoSTrafficResponse Client::describeDDoSTraffic(const DescribeDDoSTrafficRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDDoSTrafficWithOptions(request, runtime);
}

/**
 * @summary 查询防护次数
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

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary 查询防护次数
 *
 * @param request DescribeDefenseCountStatisticsRequest
 * @return DescribeDefenseCountStatisticsResponse
 */
DescribeDefenseCountStatisticsResponse Client::describeDefenseCountStatistics(const DescribeDefenseCountStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDefenseCountStatisticsWithOptions(request, runtime);
}

/**
 * @summary 查询域名接入模式
 *
 * @param request DescribeDomainAccessModeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainAccessModeResponse
 */
DescribeDomainAccessModeResponse Client::describeDomainAccessModeWithOptions(const DescribeDomainAccessModeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainList()) {
    query["DomainList"] = request.getDomainList();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary 查询域名接入模式
 *
 * @param request DescribeDomainAccessModeRequest
 * @return DescribeDomainAccessModeResponse
 */
DescribeDomainAccessModeResponse Client::describeDomainAccessMode(const DescribeDomainAccessModeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainAccessModeWithOptions(request, runtime);
}

/**
 * @summary 查询域名攻击事件
 *
 * @param request DescribeDomainAttackEventListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainAttackEventListResponse
 */
DescribeDomainAttackEventListResponse Client::describeDomainAttackEventListWithOptions(const DescribeDomainAttackEventListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
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
 * @summary 查询域名攻击事件
 *
 * @param request DescribeDomainAttackEventListRequest
 * @return DescribeDomainAttackEventListResponse
 */
DescribeDomainAttackEventListResponse Client::describeDomainAttackEventList(const DescribeDomainAttackEventListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainAttackEventListWithOptions(request, runtime);
}

/**
 * @summary 查询域名攻击最大QPS
 *
 * @param request DescribeDomainAttackMaxQpsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainAttackMaxQpsResponse
 */
DescribeDomainAttackMaxQpsResponse Client::describeDomainAttackMaxQpsWithOptions(const DescribeDomainAttackMaxQpsRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
 * @summary 查询域名攻击最大QPS
 *
 * @param request DescribeDomainAttackMaxQpsRequest
 * @return DescribeDomainAttackMaxQpsResponse
 */
DescribeDomainAttackMaxQpsResponse Client::describeDomainAttackMaxQps(const DescribeDomainAttackMaxQpsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainAttackMaxQpsWithOptions(request, runtime);
}

/**
 * @summary 域名概览
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
 * @summary 域名概览
 *
 * @param request DescribeDomainOverviewRequest
 * @return DescribeDomainOverviewResponse
 */
DescribeDomainOverviewResponse Client::describeDomainOverview(const DescribeDomainOverviewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainOverviewWithOptions(request, runtime);
}

/**
 * @summary 查询域名QPS
 *
 * @param request DescribeDomainQpsListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainQpsListResponse
 */
DescribeDomainQpsListResponse Client::describeDomainQpsListWithOptions(const DescribeDomainQpsListRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
 * @summary 查询域名QPS
 *
 * @param request DescribeDomainQpsListRequest
 * @return DescribeDomainQpsListResponse
 */
DescribeDomainQpsListResponse Client::describeDomainQpsList(const DescribeDomainQpsListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainQpsListWithOptions(request, runtime);
}

/**
 * @summary 查询qps
 *
 * @param request DescribeDomainQpsWithCacheRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainQpsWithCacheResponse
 */
DescribeDomainQpsWithCacheResponse Client::describeDomainQpsWithCacheWithOptions(const DescribeDomainQpsWithCacheRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary 查询qps
 *
 * @param request DescribeDomainQpsWithCacheRequest
 * @return DescribeDomainQpsWithCacheResponse
 */
DescribeDomainQpsWithCacheResponse Client::describeDomainQpsWithCache(const DescribeDomainQpsWithCacheRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainQpsWithCacheWithOptions(request, runtime);
}

/**
 * @summary 查询日志分发状态
 *
 * @param request DescribeDomainSlsStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainSlsStatusResponse
 */
DescribeDomainSlsStatusResponse Client::describeDomainSlsStatusWithOptions(const DescribeDomainSlsStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary 查询日志分发状态
 *
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
 * @summary 查询域名
 *
 * @param request DescribeDomainsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainsResponse
 */
DescribeDomainsResponse Client::describeDomainsWithOptions(const DescribeDomainsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasOffset()) {
    query["Offset"] = request.getOffset();
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

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary 查询域名
 *
 * @param request DescribeDomainsRequest
 * @return DescribeDomainsResponse
 */
DescribeDomainsResponse Client::describeDomains(const DescribeDomainsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainsWithOptions(request, runtime);
}

/**
 * @summary 查询弹性带宽规格
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

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary 查询弹性带宽规格
 *
 * @param request DescribeElasticBandwidthSpecRequest
 * @return DescribeElasticBandwidthSpecResponse
 */
DescribeElasticBandwidthSpecResponse Client::describeElasticBandwidthSpec(const DescribeElasticBandwidthSpecRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeElasticBandwidthSpecWithOptions(request, runtime);
}

/**
 * @summary 查询健康检查列表
 *
 * @param request DescribeHealthCheckListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHealthCheckListResponse
 */
DescribeHealthCheckListResponse Client::describeHealthCheckListWithOptions(const DescribeHealthCheckListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasListeners()) {
    query["Listeners"] = request.getListeners();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary 查询健康检查列表
 *
 * @param request DescribeHealthCheckListRequest
 * @return DescribeHealthCheckListResponse
 */
DescribeHealthCheckListResponse Client::describeHealthCheckList(const DescribeHealthCheckListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHealthCheckListWithOptions(request, runtime);
}

/**
 * @summary 查询监控检查状态
 *
 * @param request DescribeHealthCheckStatusListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHealthCheckStatusListResponse
 */
DescribeHealthCheckStatusListResponse Client::describeHealthCheckStatusListWithOptions(const DescribeHealthCheckStatusListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasListeners()) {
    query["Listeners"] = request.getListeners();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary 查询监控检查状态
 *
 * @param request DescribeHealthCheckStatusListRequest
 * @return DescribeHealthCheckStatusListResponse
 */
DescribeHealthCheckStatusListResponse Client::describeHealthCheckStatusList(const DescribeHealthCheckStatusListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHealthCheckStatusListWithOptions(request, runtime);
}

/**
 * @summary 查询实例详情
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

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary 查询实例详情
 *
 * @param request DescribeInstanceDetailsRequest
 * @return DescribeInstanceDetailsResponse
 */
DescribeInstanceDetailsResponse Client::describeInstanceDetails(const DescribeInstanceDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceDetailsWithOptions(request, runtime);
}

/**
 * @summary 查询实例规格
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

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary 查询实例规格
 *
 * @param request DescribeInstanceSpecsRequest
 * @return DescribeInstanceSpecsResponse
 */
DescribeInstanceSpecsResponse Client::describeInstanceSpecs(const DescribeInstanceSpecsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceSpecsWithOptions(request, runtime);
}

/**
 * @summary 查询实例统计
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

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary 查询实例统计
 *
 * @param request DescribeInstanceStatisticsRequest
 * @return DescribeInstanceStatisticsResponse
 */
DescribeInstanceStatisticsResponse Client::describeInstanceStatistics(const DescribeInstanceStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceStatisticsWithOptions(request, runtime);
}

/**
 * @summary 查询实例
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

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
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

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary 查询实例
 *
 * @param request DescribeInstancesRequest
 * @return DescribeInstancesResponse
 */
DescribeInstancesResponse Client::describeInstances(const DescribeInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstancesWithOptions(request, runtime);
}

/**
 * @summary 查询流量
 *
 * @param request DescribeIpTrafficRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeIpTrafficResponse
 */
DescribeIpTrafficResponse Client::describeIpTrafficWithOptions(const DescribeIpTrafficRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEip()) {
    query["Eip"] = request.getEip();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasQueryProtocol()) {
    query["QueryProtocol"] = request.getQueryProtocol();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary 查询流量
 *
 * @param request DescribeIpTrafficRequest
 * @return DescribeIpTrafficResponse
 */
DescribeIpTrafficResponse Client::describeIpTraffic(const DescribeIpTrafficRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeIpTrafficWithOptions(request, runtime);
}

/**
 * @summary 查询端口规则属性
 *
 * @param request DescribeLayer4RuleAttributesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLayer4RuleAttributesResponse
 */
DescribeLayer4RuleAttributesResponse Client::describeLayer4RuleAttributesWithOptions(const DescribeLayer4RuleAttributesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasListeners()) {
    query["Listeners"] = request.getListeners();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary 查询端口规则属性
 *
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
    query["ForwardProtocol"] = request.getForwardProtocol();
  }

  if (!!request.hasFrontendPort()) {
    query["FrontendPort"] = request.getFrontendPort();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOffset()) {
    query["Offset"] = request.getOffset();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary 查询CC规则
 *
 * @param request DescribeLayer7CCRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLayer7CCRulesResponse
 */
DescribeLayer7CCRulesResponse Client::describeLayer7CCRulesWithOptions(const DescribeLayer7CCRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasOffset()) {
    query["Offset"] = request.getOffset();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary 查询CC规则
 *
 * @param request DescribeLayer7CCRulesRequest
 * @return DescribeLayer7CCRulesResponse
 */
DescribeLayer7CCRulesResponse Client::describeLayer7CCRules(const DescribeLayer7CCRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLayer7CCRulesWithOptions(request, runtime);
}

/**
 * @summary 查询日志库存在状态
 *
 * @param request DescribeLogStoreExistStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLogStoreExistStatusResponse
 */
DescribeLogStoreExistStatusResponse Client::describeLogStoreExistStatusWithOptions(const DescribeLogStoreExistStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary 查询日志库存在状态
 *
 * @param request DescribeLogStoreExistStatusRequest
 * @return DescribeLogStoreExistStatusResponse
 */
DescribeLogStoreExistStatusResponse Client::describeLogStoreExistStatus(const DescribeLogStoreExistStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLogStoreExistStatusWithOptions(request, runtime);
}

/**
 * @summary 查询操作日志
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

  if (!!request.hasOpAction()) {
    query["OpAction"] = request.getOpAction();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary 查询操作日志
 *
 * @param request DescribeOpEntitiesRequest
 * @return DescribeOpEntitiesResponse
 */
DescribeOpEntitiesResponse Client::describeOpEntities(const DescribeOpEntitiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOpEntitiesWithOptions(request, runtime);
}

/**
 * @summary 查询域名
 *
 * @param request DescribeSimpleDomainsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSimpleDomainsResponse
 */
DescribeSimpleDomainsResponse Client::describeSimpleDomainsWithOptions(const DescribeSimpleDomainsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary 查询域名
 *
 * @param request DescribeSimpleDomainsRequest
 * @return DescribeSimpleDomainsResponse
 */
DescribeSimpleDomainsResponse Client::describeSimpleDomains(const DescribeSimpleDomainsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSimpleDomainsWithOptions(request, runtime);
}

/**
 * @summary 查询sls授权状态
 *
 * @param request DescribeSlsAuthStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSlsAuthStatusResponse
 */
DescribeSlsAuthStatusResponse Client::describeSlsAuthStatusWithOptions(const DescribeSlsAuthStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary 查询sls授权状态
 *
 * @param request DescribeSlsAuthStatusRequest
 * @return DescribeSlsAuthStatusResponse
 */
DescribeSlsAuthStatusResponse Client::describeSlsAuthStatus(const DescribeSlsAuthStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSlsAuthStatusWithOptions(request, runtime);
}

/**
 * @summary 查询清空次数
 *
 * @param request DescribeSlsEmptyCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSlsEmptyCountResponse
 */
DescribeSlsEmptyCountResponse Client::describeSlsEmptyCountWithOptions(const DescribeSlsEmptyCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary 查询清空次数
 *
 * @param request DescribeSlsEmptyCountRequest
 * @return DescribeSlsEmptyCountResponse
 */
DescribeSlsEmptyCountResponse Client::describeSlsEmptyCount(const DescribeSlsEmptyCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSlsEmptyCountWithOptions(request, runtime);
}

/**
 * @summary 查询全量日志信息
 *
 * @param request DescribeSlsLogstoreInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSlsLogstoreInfoResponse
 */
DescribeSlsLogstoreInfoResponse Client::describeSlsLogstoreInfoWithOptions(const DescribeSlsLogstoreInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary 查询全量日志信息
 *
 * @param request DescribeSlsLogstoreInfoRequest
 * @return DescribeSlsLogstoreInfoResponse
 */
DescribeSlsLogstoreInfoResponse Client::describeSlsLogstoreInfo(const DescribeSlsLogstoreInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSlsLogstoreInfoWithOptions(request, runtime);
}

/**
 * @summary 查询sls开通状态
 *
 * @param request DescribeSlsOpenStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSlsOpenStatusResponse
 */
DescribeSlsOpenStatusResponse Client::describeSlsOpenStatusWithOptions(const DescribeSlsOpenStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary 查询sls开通状态
 *
 * @param request DescribeSlsOpenStatusRequest
 * @return DescribeSlsOpenStatusResponse
 */
DescribeSlsOpenStatusResponse Client::describeSlsOpenStatus(const DescribeSlsOpenStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSlsOpenStatusWithOptions(request, runtime);
}

/**
 * @summary 查询证书列表
 *
 * @param request DescribleCertListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribleCertListResponse
 */
DescribleCertListResponse Client::describleCertListWithOptions(const DescribleCertListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasDomainList()) {
    query["DomainList"] = request.getDomainList();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary 查询证书列表
 *
 * @param request DescribleCertListRequest
 * @return DescribleCertListResponse
 */
DescribleCertListResponse Client::describleCertList(const DescribleCertListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describleCertListWithOptions(request, runtime);
}

/**
 * @summary 查询域名实例关系
 *
 * @param request DescribleLayer7InstanceRelationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribleLayer7InstanceRelationsResponse
 */
DescribleLayer7InstanceRelationsResponse Client::describleLayer7InstanceRelationsWithOptions(const DescribleLayer7InstanceRelationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainList()) {
    query["DomainList"] = request.getDomainList();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary 查询域名实例关系
 *
 * @param request DescribleLayer7InstanceRelationsRequest
 * @return DescribleLayer7InstanceRelationsResponse
 */
DescribleLayer7InstanceRelationsResponse Client::describleLayer7InstanceRelations(const DescribleLayer7InstanceRelationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describleLayer7InstanceRelationsWithOptions(request, runtime);
}

/**
 * @summary 关闭CC
 *
 * @param request DisableLayer7CCRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableLayer7CCResponse
 */
DisableLayer7CCResponse Client::disableLayer7CCWithOptions(const DisableLayer7CCRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary 关闭CC
 *
 * @param request DisableLayer7CCRequest
 * @return DisableLayer7CCResponse
 */
DisableLayer7CCResponse Client::disableLayer7CC(const DisableLayer7CCRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableLayer7CCWithOptions(request, runtime);
}

/**
 * @summary 关闭CC规则
 *
 * @param request DisableLayer7CCRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableLayer7CCRuleResponse
 */
DisableLayer7CCRuleResponse Client::disableLayer7CCRuleWithOptions(const DisableLayer7CCRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary 关闭CC规则
 *
 * @param request DisableLayer7CCRuleRequest
 * @return DisableLayer7CCRuleResponse
 */
DisableLayer7CCRuleResponse Client::disableLayer7CCRule(const DisableLayer7CCRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableLayer7CCRuleWithOptions(request, runtime);
}

/**
 * @summary 清除SLS日志库
 *
 * @param request EmptySlsLogstoreRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EmptySlsLogstoreResponse
 */
EmptySlsLogstoreResponse Client::emptySlsLogstoreWithOptions(const EmptySlsLogstoreRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary 清除SLS日志库
 *
 * @param request EmptySlsLogstoreRequest
 * @return EmptySlsLogstoreResponse
 */
EmptySlsLogstoreResponse Client::emptySlsLogstore(const EmptySlsLogstoreRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return emptySlsLogstoreWithOptions(request, runtime);
}

/**
 * @summary 开启CC
 *
 * @param request EnableLayer7CCRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableLayer7CCResponse
 */
EnableLayer7CCResponse Client::enableLayer7CCWithOptions(const EnableLayer7CCRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary 开启CC
 *
 * @param request EnableLayer7CCRequest
 * @return EnableLayer7CCResponse
 */
EnableLayer7CCResponse Client::enableLayer7CC(const EnableLayer7CCRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableLayer7CCWithOptions(request, runtime);
}

/**
 * @summary 开启CC规则
 *
 * @param request EnableLayer7CCRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableLayer7CCRuleResponse
 */
EnableLayer7CCRuleResponse Client::enableLayer7CCRuleWithOptions(const EnableLayer7CCRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary 开启CC规则
 *
 * @param request EnableLayer7CCRuleRequest
 * @return EnableLayer7CCRuleResponse
 */
EnableLayer7CCRuleResponse Client::enableLayer7CCRule(const EnableLayer7CCRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableLayer7CCRuleWithOptions(request, runtime);
}

/**
 * @summary 查询异步任务
 *
 * @param request ListAsyncTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAsyncTaskResponse
 */
ListAsyncTaskResponse Client::listAsyncTaskWithOptions(const ListAsyncTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary 查询异步任务
 *
 * @param request ListAsyncTaskRequest
 * @return ListAsyncTaskResponse
 */
ListAsyncTaskResponse Client::listAsyncTask(const ListAsyncTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAsyncTaskWithOptions(request, runtime);
}

/**
 * @summary 查询域名接入端口
 *
 * @param request ListLayer7CustomPortsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLayer7CustomPortsResponse
 */
ListLayer7CustomPortsResponse Client::listLayer7CustomPortsWithOptions(const ListLayer7CustomPortsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary 查询域名接入端口
 *
 * @param request ListLayer7CustomPortsRequest
 * @return ListLayer7CustomPortsResponse
 */
ListLayer7CustomPortsResponse Client::listLayer7CustomPorts(const ListLayer7CustomPortsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listLayer7CustomPortsWithOptions(request, runtime);
}

/**
 * @summary 列出tag
 *
 * @param request ListTagKeysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagKeysResponse
 */
ListTagKeysResponse Client::listTagKeysWithOptions(const ListTagKeysRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
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
 * @summary 列出tag
 *
 * @param request ListTagKeysRequest
 * @return ListTagKeysResponse
 */
ListTagKeysResponse Client::listTagKeys(const ListTagKeysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagKeysWithOptions(request, runtime);
}

/**
 * @summary 查询资源
 *
 * @param request ListTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
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
 * @summary 查询资源
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary 查询日志实例
 *
 * @param request ListValueAddedRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListValueAddedResponse
 */
ListValueAddedResponse Client::listValueAddedWithOptions(const ListValueAddedRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary 查询日志实例
 *
 * @param request ListValueAddedRequest
 * @return ListValueAddedResponse
 */
ListValueAddedResponse Client::listValueAdded(const ListValueAddedRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listValueAddedWithOptions(request, runtime);
}

/**
 * @summary 修改弹性业务带宽
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

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary 修改弹性业务带宽
 *
 * @param request ModifyElasticBandWidthRequest
 * @return ModifyElasticBandWidthResponse
 */
ModifyElasticBandWidthResponse Client::modifyElasticBandWidth(const ModifyElasticBandWidthRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyElasticBandWidthWithOptions(request, runtime);
}

/**
 * @summary 修改日志存储时长
 *
 * @param request ModifyFullLogTtlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyFullLogTtlResponse
 */
ModifyFullLogTtlResponse Client::modifyFullLogTtlWithOptions(const ModifyFullLogTtlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasTtl()) {
    query["Ttl"] = request.getTtl();
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
 * @summary 修改日志存储时长
 *
 * @param request ModifyFullLogTtlRequest
 * @return ModifyFullLogTtlResponse
 */
ModifyFullLogTtlResponse Client::modifyFullLogTtl(const ModifyFullLogTtlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyFullLogTtlWithOptions(request, runtime);
}

/**
 * @summary 修改实例备注
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

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary 修改实例备注
 *
 * @param request ModifyInstanceRemarkRequest
 * @return ModifyInstanceRemarkResponse
 */
ModifyInstanceRemarkResponse Client::modifyInstanceRemark(const ModifyInstanceRemarkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceRemarkWithOptions(request, runtime);
}

/**
 * @summary 开启日志分发
 *
 * @param request OpenDomainSlsConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OpenDomainSlsConfigResponse
 */
OpenDomainSlsConfigResponse Client::openDomainSlsConfigWithOptions(const OpenDomainSlsConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary 开启日志分发
 *
 * @param request OpenDomainSlsConfigRequest
 * @return OpenDomainSlsConfigResponse
 */
OpenDomainSlsConfigResponse Client::openDomainSlsConfig(const OpenDomainSlsConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return openDomainSlsConfigWithOptions(request, runtime);
}

/**
 * @summary 释放实例
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

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary 释放实例
 *
 * @param request ReleaseInstanceRequest
 * @return ReleaseInstanceResponse
 */
ReleaseInstanceResponse Client::releaseInstance(const ReleaseInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return releaseInstanceWithOptions(request, runtime);
}

/**
 * @summary 释放日志实例
 *
 * @param request ReleaseValueAddedRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleaseValueAddedResponse
 */
ReleaseValueAddedResponse Client::releaseValueAddedWithOptions(const ReleaseValueAddedRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary 释放日志实例
 *
 * @param request ReleaseValueAddedRequest
 * @return ReleaseValueAddedResponse
 */
ReleaseValueAddedResponse Client::releaseValueAdded(const ReleaseValueAddedRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return releaseValueAddedWithOptions(request, runtime);
}

/**
 * @summary 标签资源
 *
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
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
 * @summary 标签资源
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary 解除资源标签
 *
 * @param request UntagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResourcesWithOptions(const UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
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
 * @summary 解除资源标签
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228