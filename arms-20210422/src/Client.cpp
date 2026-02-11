#include <darabonba/Core.hpp>
#include <alibabacloud/ARMS20210422.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::ARMS20210422::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace ARMS20210422
{

AlibabaCloud::ARMS20210422::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"ap-northeast-2-pop" , "arms.aliyuncs.com"},
    {"cn-beijing-finance-1" , "arms.aliyuncs.com"},
    {"cn-beijing-finance-pop" , "arms.aliyuncs.com"},
    {"cn-beijing-gov-1" , "arms.aliyuncs.com"},
    {"cn-beijing-nu16-b01" , "arms.aliyuncs.com"},
    {"cn-edge-1" , "arms.aliyuncs.com"},
    {"cn-fujian" , "arms.aliyuncs.com"},
    {"cn-haidian-cm12-c01" , "arms.aliyuncs.com"},
    {"cn-hangzhou-bj-b01" , "arms.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1" , "arms.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1" , "arms.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2" , "arms.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3" , "arms.aliyuncs.com"},
    {"cn-hangzhou-test-306" , "arms.aliyuncs.com"},
    {"cn-hongkong-finance-pop" , "arms.aliyuncs.com"},
    {"cn-huhehaote-nebula-1" , "arms.aliyuncs.com"},
    {"cn-qingdao-nebula" , "arms.aliyuncs.com"},
    {"cn-shanghai-et15-b01" , "arms.aliyuncs.com"},
    {"cn-shanghai-et2-b01" , "arms.aliyuncs.com"},
    {"cn-shanghai-inner" , "arms.aliyuncs.com"},
    {"cn-shanghai-internal-test-1" , "arms.aliyuncs.com"},
    {"cn-shenzhen-inner" , "arms.aliyuncs.com"},
    {"cn-shenzhen-st4-d01" , "arms.aliyuncs.com"},
    {"cn-shenzhen-su18-b01" , "arms.aliyuncs.com"},
    {"cn-wuhan" , "arms.aliyuncs.com"},
    {"cn-yushanfang" , "arms.aliyuncs.com"},
    {"cn-zhangbei" , "arms.aliyuncs.com"},
    {"cn-zhangbei-na61-b01" , "arms.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01" , "arms.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1" , "arms.aliyuncs.com"},
    {"eu-west-1-oxs" , "arms.aliyuncs.com"},
    {"me-east-1" , "arms.aliyuncs.com"},
    {"rus-west-1-pop" , "arms.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("arms", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @param request AddGrafanaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddGrafanaResponse
 */
AddGrafanaResponse Client::addGrafanaWithOptions(const AddGrafanaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasIntegration()) {
    query["Integration"] = request.getIntegration();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddGrafana"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddGrafanaResponse>();
}

/**
 * @param request AddGrafanaRequest
 * @return AddGrafanaResponse
 */
AddGrafanaResponse Client::addGrafana(const AddGrafanaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addGrafanaWithOptions(request, runtime);
}

/**
 * @param request AddIntegrationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddIntegrationResponse
 */
AddIntegrationResponse Client::addIntegrationWithOptions(const AddIntegrationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasIntegration()) {
    query["Integration"] = request.getIntegration();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddIntegration"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddIntegrationResponse>();
}

/**
 * @param request AddIntegrationRequest
 * @return AddIntegrationResponse
 */
AddIntegrationResponse Client::addIntegration(const AddIntegrationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addIntegrationWithOptions(request, runtime);
}

/**
 * @param tmpReq ApplyScenarioRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApplyScenarioResponse
 */
ApplyScenarioResponse Client::applyScenarioWithOptions(const ApplyScenarioRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ApplyScenarioShrinkRequest request = ApplyScenarioShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasConfig()) {
    request.setConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getConfig(), "Config", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasConfigShrink()) {
    query["Config"] = request.getConfigShrink();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasScenario()) {
    query["Scenario"] = request.getScenario();
  }

  if (!!request.hasSign()) {
    query["Sign"] = request.getSign();
  }

  if (!!request.hasSnDump()) {
    query["SnDump"] = request.getSnDump();
  }

  if (!!request.hasSnForce()) {
    query["SnForce"] = request.getSnForce();
  }

  if (!!request.hasSnStat()) {
    query["SnStat"] = request.getSnStat();
  }

  if (!!request.hasSnTransfer()) {
    query["SnTransfer"] = request.getSnTransfer();
  }

  if (!!request.hasUpdateOption()) {
    query["UpdateOption"] = request.getUpdateOption();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ApplyScenario"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ApplyScenarioResponse>();
}

/**
 * @param request ApplyScenarioRequest
 * @return ApplyScenarioResponse
 */
ApplyScenarioResponse Client::applyScenario(const ApplyScenarioRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return applyScenarioWithOptions(request, runtime);
}

/**
 * @param request CheckDataConsistencyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckDataConsistencyResponse
 */
CheckDataConsistencyResponse Client::checkDataConsistencyWithOptions(const CheckDataConsistencyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppType()) {
    query["AppType"] = request.getAppType();
  }

  if (!!request.hasCurrentTimestamp()) {
    query["CurrentTimestamp"] = request.getCurrentTimestamp();
  }

  if (!!request.hasPid()) {
    query["Pid"] = request.getPid();
  }

  if (!!request.hasProxyUserId()) {
    query["ProxyUserId"] = request.getProxyUserId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckDataConsistency"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckDataConsistencyResponse>();
}

/**
 * @param request CheckDataConsistencyRequest
 * @return CheckDataConsistencyResponse
 */
CheckDataConsistencyResponse Client::checkDataConsistency(const CheckDataConsistencyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkDataConsistencyWithOptions(request, runtime);
}

/**
 * @param request CheckServiceLinkedRoleForDeletingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckServiceLinkedRoleForDeletingResponse
 */
CheckServiceLinkedRoleForDeletingResponse Client::checkServiceLinkedRoleForDeletingWithOptions(const CheckServiceLinkedRoleForDeletingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeletionTaskId()) {
    query["DeletionTaskId"] = request.getDeletionTaskId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleArn()) {
    query["RoleArn"] = request.getRoleArn();
  }

  if (!!request.hasSPIRegionId()) {
    query["SPIRegionId"] = request.getSPIRegionId();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.getServiceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckServiceLinkedRoleForDeleting"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckServiceLinkedRoleForDeletingResponse>();
}

/**
 * @param request CheckServiceLinkedRoleForDeletingRequest
 * @return CheckServiceLinkedRoleForDeletingResponse
 */
CheckServiceLinkedRoleForDeletingResponse Client::checkServiceLinkedRoleForDeleting(const CheckServiceLinkedRoleForDeletingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkServiceLinkedRoleForDeletingWithOptions(request, runtime);
}

/**
 * @param request CheckServiceStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckServiceStatusResponse
 */
CheckServiceStatusResponse Client::checkServiceStatusWithOptions(const CheckServiceStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSvcCode()) {
    query["SvcCode"] = request.getSvcCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckServiceStatus"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckServiceStatusResponse>();
}

/**
 * @param request CheckServiceStatusRequest
 * @return CheckServiceStatusResponse
 */
CheckServiceStatusResponse Client::checkServiceStatus(const CheckServiceStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkServiceStatusWithOptions(request, runtime);
}

/**
 * @param request ConfigAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigAppResponse
 */
ConfigAppResponse Client::configAppWithOptions(const ConfigAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppIds()) {
    query["AppIds"] = request.getAppIds();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.getEnable();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ConfigApp"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfigAppResponse>();
}

/**
 * @param request ConfigAppRequest
 * @return ConfigAppResponse
 */
ConfigAppResponse Client::configApp(const ConfigAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configAppWithOptions(request, runtime);
}

/**
 * @param request CreateAlertContactRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAlertContactResponse
 */
CreateAlertContactResponse Client::createAlertContactWithOptions(const CreateAlertContactRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactName()) {
    query["ContactName"] = request.getContactName();
  }

  if (!!request.hasDingRobotWebhookUrl()) {
    query["DingRobotWebhookUrl"] = request.getDingRobotWebhookUrl();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasPhoneNum()) {
    query["PhoneNum"] = request.getPhoneNum();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSystemNoc()) {
    query["SystemNoc"] = request.getSystemNoc();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAlertContact"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAlertContactResponse>();
}

/**
 * @param request CreateAlertContactRequest
 * @return CreateAlertContactResponse
 */
CreateAlertContactResponse Client::createAlertContact(const CreateAlertContactRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAlertContactWithOptions(request, runtime);
}

/**
 * @param request CreateAlertContactGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAlertContactGroupResponse
 */
CreateAlertContactGroupResponse Client::createAlertContactGroupWithOptions(const CreateAlertContactGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactGroupName()) {
    query["ContactGroupName"] = request.getContactGroupName();
  }

  if (!!request.hasContactIds()) {
    query["ContactIds"] = request.getContactIds();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAlertContactGroup"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAlertContactGroupResponse>();
}

/**
 * @param request CreateAlertContactGroupRequest
 * @return CreateAlertContactGroupResponse
 */
CreateAlertContactGroupResponse Client::createAlertContactGroup(const CreateAlertContactGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAlertContactGroupWithOptions(request, runtime);
}

/**
 * @param request CreateAlertTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAlertTemplateResponse
 */
CreateAlertTemplateResponse Client::createAlertTemplateWithOptions(const CreateAlertTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAnnotations()) {
    query["Annotations"] = request.getAnnotations();
  }

  if (!!request.hasLabels()) {
    query["Labels"] = request.getLabels();
  }

  if (!!request.hasMatchExpressions()) {
    query["MatchExpressions"] = request.getMatchExpressions();
  }

  if (!!request.hasMessage()) {
    query["Message"] = request.getMessage();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasParentId()) {
    query["ParentId"] = request.getParentId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.getRule();
  }

  if (!!request.hasTemplateProvider()) {
    query["TemplateProvider"] = request.getTemplateProvider();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAlertTemplate"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAlertTemplateResponse>();
}

/**
 * @param request CreateAlertTemplateRequest
 * @return CreateAlertTemplateResponse
 */
CreateAlertTemplateResponse Client::createAlertTemplate(const CreateAlertTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAlertTemplateWithOptions(request, runtime);
}

/**
 * @param request CreateDispatchRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDispatchRuleResponse
 */
CreateDispatchRuleResponse Client::createDispatchRuleWithOptions(const CreateDispatchRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDispatchRule()) {
    query["DispatchRule"] = request.getDispatchRule();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDispatchRule"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDispatchRuleResponse>();
}

/**
 * @param request CreateDispatchRuleRequest
 * @return CreateDispatchRuleResponse
 */
CreateDispatchRuleResponse Client::createDispatchRule(const CreateDispatchRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDispatchRuleWithOptions(request, runtime);
}

/**
 * @param request CreatePrometheusAlertRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePrometheusAlertRuleResponse
 */
CreatePrometheusAlertRuleResponse Client::createPrometheusAlertRuleWithOptions(const CreatePrometheusAlertRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlertName()) {
    query["AlertName"] = request.getAlertName();
  }

  if (!!request.hasAnnotations()) {
    query["Annotations"] = request.getAnnotations();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasDispatchRuleId()) {
    query["DispatchRuleId"] = request.getDispatchRuleId();
  }

  if (!!request.hasDuration()) {
    query["Duration"] = request.getDuration();
  }

  if (!!request.hasExpression()) {
    query["Expression"] = request.getExpression();
  }

  if (!!request.hasLabels()) {
    query["Labels"] = request.getLabels();
  }

  if (!!request.hasMessage()) {
    query["Message"] = request.getMessage();
  }

  if (!!request.hasNotifyType()) {
    query["NotifyType"] = request.getNotifyType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreatePrometheusAlertRule"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePrometheusAlertRuleResponse>();
}

/**
 * @param request CreatePrometheusAlertRuleRequest
 * @return CreatePrometheusAlertRuleResponse
 */
CreatePrometheusAlertRuleResponse Client::createPrometheusAlertRule(const CreatePrometheusAlertRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPrometheusAlertRuleWithOptions(request, runtime);
}

/**
 * @param request CreateRetcodeAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRetcodeAppResponse
 */
CreateRetcodeAppResponse Client::createRetcodeAppWithOptions(const CreateRetcodeAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRetcodeAppName()) {
    query["RetcodeAppName"] = request.getRetcodeAppName();
  }

  if (!!request.hasRetcodeAppType()) {
    query["RetcodeAppType"] = request.getRetcodeAppType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateRetcodeApp"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRetcodeAppResponse>();
}

/**
 * @param request CreateRetcodeAppRequest
 * @return CreateRetcodeAppResponse
 */
CreateRetcodeAppResponse Client::createRetcodeApp(const CreateRetcodeAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRetcodeAppWithOptions(request, runtime);
}

/**
 * @param request CreateWehookRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWehookResponse
 */
CreateWehookResponse Client::createWehookWithOptions(const CreateWehookRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBody()) {
    query["Body"] = request.getBody();
  }

  if (!!request.hasContactName()) {
    query["ContactName"] = request.getContactName();
  }

  if (!!request.hasHttpHeaders()) {
    query["HttpHeaders"] = request.getHttpHeaders();
  }

  if (!!request.hasHttpParams()) {
    query["HttpParams"] = request.getHttpParams();
  }

  if (!!request.hasMethod()) {
    query["Method"] = request.getMethod();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUrl()) {
    query["Url"] = request.getUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateWehook"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateWehookResponse>();
}

/**
 * @param request CreateWehookRequest
 * @return CreateWehookResponse
 */
CreateWehookResponse Client::createWehook(const CreateWehookRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createWehookWithOptions(request, runtime);
}

/**
 * @param request DeleteAlertContactRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAlertContactResponse
 */
DeleteAlertContactResponse Client::deleteAlertContactWithOptions(const DeleteAlertContactRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactId()) {
    query["ContactId"] = request.getContactId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAlertContact"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAlertContactResponse>();
}

/**
 * @param request DeleteAlertContactRequest
 * @return DeleteAlertContactResponse
 */
DeleteAlertContactResponse Client::deleteAlertContact(const DeleteAlertContactRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAlertContactWithOptions(request, runtime);
}

/**
 * @param request DeleteAlertContactGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAlertContactGroupResponse
 */
DeleteAlertContactGroupResponse Client::deleteAlertContactGroupWithOptions(const DeleteAlertContactGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactGroupId()) {
    query["ContactGroupId"] = request.getContactGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAlertContactGroup"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAlertContactGroupResponse>();
}

/**
 * @param request DeleteAlertContactGroupRequest
 * @return DeleteAlertContactGroupResponse
 */
DeleteAlertContactGroupResponse Client::deleteAlertContactGroup(const DeleteAlertContactGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAlertContactGroupWithOptions(request, runtime);
}

/**
 * @param request DeleteAlertRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAlertRulesResponse
 */
DeleteAlertRulesResponse Client::deleteAlertRulesWithOptions(const DeleteAlertRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlertIds()) {
    query["AlertIds"] = request.getAlertIds();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAlertRules"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAlertRulesResponse>();
}

/**
 * @param request DeleteAlertRulesRequest
 * @return DeleteAlertRulesResponse
 */
DeleteAlertRulesResponse Client::deleteAlertRules(const DeleteAlertRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAlertRulesWithOptions(request, runtime);
}

/**
 * @param request DeleteAlertTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAlertTemplateResponse
 */
DeleteAlertTemplateResponse Client::deleteAlertTemplateWithOptions(const DeleteAlertTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAlertTemplate"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAlertTemplateResponse>();
}

/**
 * @param request DeleteAlertTemplateRequest
 * @return DeleteAlertTemplateResponse
 */
DeleteAlertTemplateResponse Client::deleteAlertTemplate(const DeleteAlertTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAlertTemplateWithOptions(request, runtime);
}

/**
 * @param request DeleteDispatchRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDispatchRuleResponse
 */
DeleteDispatchRuleResponse Client::deleteDispatchRuleWithOptions(const DeleteDispatchRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDispatchRule"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDispatchRuleResponse>();
}

/**
 * @param request DeleteDispatchRuleRequest
 * @return DeleteDispatchRuleResponse
 */
DeleteDispatchRuleResponse Client::deleteDispatchRule(const DeleteDispatchRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDispatchRuleWithOptions(request, runtime);
}

/**
 * @param request DeleteGrafanaResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteGrafanaResourceResponse
 */
DeleteGrafanaResourceResponse Client::deleteGrafanaResourceWithOptions(const DeleteGrafanaResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasClusterName()) {
    body["ClusterName"] = request.getClusterName();
  }

  if (!!request.hasUserId()) {
    body["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteGrafanaResource"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteGrafanaResourceResponse>();
}

/**
 * @param request DeleteGrafanaResourceRequest
 * @return DeleteGrafanaResourceResponse
 */
DeleteGrafanaResourceResponse Client::deleteGrafanaResource(const DeleteGrafanaResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteGrafanaResourceWithOptions(request, runtime);
}

/**
 * @param request DeletePrometheusAlertRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePrometheusAlertRuleResponse
 */
DeletePrometheusAlertRuleResponse Client::deletePrometheusAlertRuleWithOptions(const DeletePrometheusAlertRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlertId()) {
    query["AlertId"] = request.getAlertId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePrometheusAlertRule"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePrometheusAlertRuleResponse>();
}

/**
 * @param request DeletePrometheusAlertRuleRequest
 * @return DeletePrometheusAlertRuleResponse
 */
DeletePrometheusAlertRuleResponse Client::deletePrometheusAlertRule(const DeletePrometheusAlertRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePrometheusAlertRuleWithOptions(request, runtime);
}

/**
 * @param request DeleteRetcodeAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRetcodeAppResponse
 */
DeleteRetcodeAppResponse Client::deleteRetcodeAppWithOptions(const DeleteRetcodeAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRetcodeApp"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRetcodeAppResponse>();
}

/**
 * @param request DeleteRetcodeAppRequest
 * @return DeleteRetcodeAppResponse
 */
DeleteRetcodeAppResponse Client::deleteRetcodeApp(const DeleteRetcodeAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRetcodeAppWithOptions(request, runtime);
}

/**
 * @param request DeleteScenarioRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteScenarioResponse
 */
DeleteScenarioResponse Client::deleteScenarioWithOptions(const DeleteScenarioRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasScenarioId()) {
    query["ScenarioId"] = request.getScenarioId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteScenario"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteScenarioResponse>();
}

/**
 * @param request DeleteScenarioRequest
 * @return DeleteScenarioResponse
 */
DeleteScenarioResponse Client::deleteScenario(const DeleteScenarioRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteScenarioWithOptions(request, runtime);
}

/**
 * @param request DeleteTraceAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTraceAppResponse
 */
DeleteTraceAppResponse Client::deleteTraceAppWithOptions(const DeleteTraceAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasPid()) {
    query["Pid"] = request.getPid();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTraceApp"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTraceAppResponse>();
}

/**
 * @param request DeleteTraceAppRequest
 * @return DeleteTraceAppResponse
 */
DeleteTraceAppResponse Client::deleteTraceApp(const DeleteTraceAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTraceAppWithOptions(request, runtime);
}

/**
 * @param request DescribeDispatchRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDispatchRuleResponse
 */
DescribeDispatchRuleResponse Client::describeDispatchRuleWithOptions(const DescribeDispatchRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDispatchRule"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDispatchRuleResponse>();
}

/**
 * @param request DescribeDispatchRuleRequest
 * @return DescribeDispatchRuleResponse
 */
DescribeDispatchRuleResponse Client::describeDispatchRule(const DescribeDispatchRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDispatchRuleWithOptions(request, runtime);
}

/**
 * @param request DescribePrometheusAlertRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePrometheusAlertRuleResponse
 */
DescribePrometheusAlertRuleResponse Client::describePrometheusAlertRuleWithOptions(const DescribePrometheusAlertRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlertId()) {
    query["AlertId"] = request.getAlertId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePrometheusAlertRule"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePrometheusAlertRuleResponse>();
}

/**
 * @param request DescribePrometheusAlertRuleRequest
 * @return DescribePrometheusAlertRuleResponse
 */
DescribePrometheusAlertRuleResponse Client::describePrometheusAlertRule(const DescribePrometheusAlertRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePrometheusAlertRuleWithOptions(request, runtime);
}

/**
 * @param request DescribeTraceLicenseKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTraceLicenseKeyResponse
 */
DescribeTraceLicenseKeyResponse Client::describeTraceLicenseKeyWithOptions(const DescribeTraceLicenseKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTraceLicenseKey"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTraceLicenseKeyResponse>();
}

/**
 * @param request DescribeTraceLicenseKeyRequest
 * @return DescribeTraceLicenseKeyResponse
 */
DescribeTraceLicenseKeyResponse Client::describeTraceLicenseKey(const DescribeTraceLicenseKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTraceLicenseKeyWithOptions(request, runtime);
}

/**
 * @param request DescribeTraceLocationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTraceLocationResponse
 */
DescribeTraceLocationResponse Client::describeTraceLocationWithOptions(const DescribeTraceLocationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTraceLocation"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTraceLocationResponse>();
}

/**
 * @param request DescribeTraceLocationRequest
 * @return DescribeTraceLocationResponse
 */
DescribeTraceLocationResponse Client::describeTraceLocation(const DescribeTraceLocationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTraceLocationWithOptions(request, runtime);
}

/**
 * @param request DisableAlertTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableAlertTemplateResponse
 */
DisableAlertTemplateResponse Client::disableAlertTemplateWithOptions(const DisableAlertTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableAlertTemplate"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableAlertTemplateResponse>();
}

/**
 * @param request DisableAlertTemplateRequest
 * @return DisableAlertTemplateResponse
 */
DisableAlertTemplateResponse Client::disableAlertTemplate(const DisableAlertTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableAlertTemplateWithOptions(request, runtime);
}

/**
 * @param request EnableAlertTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableAlertTemplateResponse
 */
EnableAlertTemplateResponse Client::enableAlertTemplateWithOptions(const EnableAlertTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableAlertTemplate"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableAlertTemplateResponse>();
}

/**
 * @param request EnableAlertTemplateRequest
 * @return EnableAlertTemplateResponse
 */
EnableAlertTemplateResponse Client::enableAlertTemplate(const EnableAlertTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableAlertTemplateWithOptions(request, runtime);
}

/**
 * @param request ExportPrometheusRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportPrometheusRulesResponse
 */
ExportPrometheusRulesResponse Client::exportPrometheusRulesWithOptions(const ExportPrometheusRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNameSpace()) {
    query["NameSpace"] = request.getNameSpace();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ExportPrometheusRules"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportPrometheusRulesResponse>();
}

/**
 * @param request ExportPrometheusRulesRequest
 * @return ExportPrometheusRulesResponse
 */
ExportPrometheusRulesResponse Client::exportPrometheusRules(const ExportPrometheusRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return exportPrometheusRulesWithOptions(request, runtime);
}

/**
 * @param request GetAgentDownloadUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAgentDownloadUrlResponse
 */
GetAgentDownloadUrlResponse Client::getAgentDownloadUrlWithOptions(const GetAgentDownloadUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAgentDownloadUrl"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAgentDownloadUrlResponse>();
}

/**
 * @param request GetAgentDownloadUrlRequest
 * @return GetAgentDownloadUrlResponse
 */
GetAgentDownloadUrlResponse Client::getAgentDownloadUrl(const GetAgentDownloadUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAgentDownloadUrlWithOptions(request, runtime);
}

/**
 * @param request GetAppApiByPageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAppApiByPageResponse
 */
GetAppApiByPageResponse Client::getAppApiByPageWithOptions(const GetAppApiByPageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasIntervalMills()) {
    query["IntervalMills"] = request.getIntervalMills();
  }

  if (!!request.hasPId()) {
    query["PId"] = request.getPId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAppApiByPage"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAppApiByPageResponse>();
}

/**
 * @param request GetAppApiByPageRequest
 * @return GetAppApiByPageResponse
 */
GetAppApiByPageResponse Client::getAppApiByPage(const GetAppApiByPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAppApiByPageWithOptions(request, runtime);
}

/**
 * @param request GetConsistencySnapshotRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetConsistencySnapshotResponse
 */
GetConsistencySnapshotResponse Client::getConsistencySnapshotWithOptions(const GetConsistencySnapshotRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppType()) {
    query["AppType"] = request.getAppType();
  }

  if (!!request.hasCurrentTimestamp()) {
    query["CurrentTimestamp"] = request.getCurrentTimestamp();
  }

  if (!!request.hasPid()) {
    query["Pid"] = request.getPid();
  }

  if (!!request.hasProxyUserId()) {
    query["ProxyUserId"] = request.getProxyUserId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetConsistencySnapshot"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetConsistencySnapshotResponse>();
}

/**
 * @param request GetConsistencySnapshotRequest
 * @return GetConsistencySnapshotResponse
 */
GetConsistencySnapshotResponse Client::getConsistencySnapshot(const GetConsistencySnapshotRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getConsistencySnapshotWithOptions(request, runtime);
}

/**
 * @param request GetIntegrationTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetIntegrationTokenResponse
 */
GetIntegrationTokenResponse Client::getIntegrationTokenWithOptions(const GetIntegrationTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetIntegrationToken"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetIntegrationTokenResponse>();
}

/**
 * @param request GetIntegrationTokenRequest
 * @return GetIntegrationTokenResponse
 */
GetIntegrationTokenResponse Client::getIntegrationToken(const GetIntegrationTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getIntegrationTokenWithOptions(request, runtime);
}

/**
 * @param request GetMultipleTraceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMultipleTraceResponse
 */
GetMultipleTraceResponse Client::getMultipleTraceWithOptions(const GetMultipleTraceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTraceIDs()) {
    query["TraceIDs"] = request.getTraceIDs();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMultipleTrace"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMultipleTraceResponse>();
}

/**
 * @param request GetMultipleTraceRequest
 * @return GetMultipleTraceResponse
 */
GetMultipleTraceResponse Client::getMultipleTrace(const GetMultipleTraceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMultipleTraceWithOptions(request, runtime);
}

/**
 * @param request GetPrometheusApiTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPrometheusApiTokenResponse
 */
GetPrometheusApiTokenResponse Client::getPrometheusApiTokenWithOptions(const GetPrometheusApiTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPrometheusApiToken"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPrometheusApiTokenResponse>();
}

/**
 * @param request GetPrometheusApiTokenRequest
 * @return GetPrometheusApiTokenResponse
 */
GetPrometheusApiTokenResponse Client::getPrometheusApiToken(const GetPrometheusApiTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPrometheusApiTokenWithOptions(request, runtime);
}

/**
 * @param request GetRetcodeShareUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRetcodeShareUrlResponse
 */
GetRetcodeShareUrlResponse Client::getRetcodeShareUrlWithOptions(const GetRetcodeShareUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPid()) {
    query["Pid"] = request.getPid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRetcodeShareUrl"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRetcodeShareUrlResponse>();
}

/**
 * @param request GetRetcodeShareUrlRequest
 * @return GetRetcodeShareUrlResponse
 */
GetRetcodeShareUrlResponse Client::getRetcodeShareUrl(const GetRetcodeShareUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRetcodeShareUrlWithOptions(request, runtime);
}

/**
 * @param request GetStackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetStackResponse
 */
GetStackResponse Client::getStackWithOptions(const GetStackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasPid()) {
    query["Pid"] = request.getPid();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRpcID()) {
    query["RpcID"] = request.getRpcID();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTraceID()) {
    query["TraceID"] = request.getTraceID();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetStack"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetStackResponse>();
}

/**
 * @param request GetStackRequest
 * @return GetStackResponse
 */
GetStackResponse Client::getStack(const GetStackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getStackWithOptions(request, runtime);
}

/**
 * @param request GetTraceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTraceResponse
 */
GetTraceResponse Client::getTraceWithOptions(const GetTraceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTraceID()) {
    query["TraceID"] = request.getTraceID();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTrace"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTraceResponse>();
}

/**
 * @param request GetTraceRequest
 * @return GetTraceResponse
 */
GetTraceResponse Client::getTrace(const GetTraceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTraceWithOptions(request, runtime);
}

/**
 * @param request GetTraceAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTraceAppResponse
 */
GetTraceAppResponse Client::getTraceAppWithOptions(const GetTraceAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPid()) {
    query["Pid"] = request.getPid();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTraceApp"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTraceAppResponse>();
}

/**
 * @param request GetTraceAppRequest
 * @return GetTraceAppResponse
 */
GetTraceAppResponse Client::getTraceApp(const GetTraceAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTraceAppWithOptions(request, runtime);
}

/**
 * @param request ImportAppAlertRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportAppAlertRulesResponse
 */
ImportAppAlertRulesResponse Client::importAppAlertRulesWithOptions(const ImportAppAlertRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactGroupIds()) {
    query["ContactGroupIds"] = request.getContactGroupIds();
  }

  if (!!request.hasIsAutoStart()) {
    query["IsAutoStart"] = request.getIsAutoStart();
  }

  if (!!request.hasPids()) {
    query["Pids"] = request.getPids();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTemplageAlertConfig()) {
    query["TemplageAlertConfig"] = request.getTemplageAlertConfig();
  }

  if (!!request.hasTemplateAlertId()) {
    query["TemplateAlertId"] = request.getTemplateAlertId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ImportAppAlertRules"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImportAppAlertRulesResponse>();
}

/**
 * @param request ImportAppAlertRulesRequest
 * @return ImportAppAlertRulesResponse
 */
ImportAppAlertRulesResponse Client::importAppAlertRules(const ImportAppAlertRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return importAppAlertRulesWithOptions(request, runtime);
}

/**
 * @param request ImportCustomAlertRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportCustomAlertRulesResponse
 */
ImportCustomAlertRulesResponse Client::importCustomAlertRulesWithOptions(const ImportCustomAlertRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactGroupIds()) {
    query["ContactGroupIds"] = request.getContactGroupIds();
  }

  if (!!request.hasIsAutoStart()) {
    query["IsAutoStart"] = request.getIsAutoStart();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTemplageAlertConfig()) {
    query["TemplageAlertConfig"] = request.getTemplageAlertConfig();
  }

  if (!!request.hasTemplateAlertConfig()) {
    query["TemplateAlertConfig"] = request.getTemplateAlertConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ImportCustomAlertRules"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImportCustomAlertRulesResponse>();
}

/**
 * @param request ImportCustomAlertRulesRequest
 * @return ImportCustomAlertRulesResponse
 */
ImportCustomAlertRulesResponse Client::importCustomAlertRules(const ImportCustomAlertRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return importCustomAlertRulesWithOptions(request, runtime);
}

/**
 * @param request ImportPrometheusRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportPrometheusRulesResponse
 */
ImportPrometheusRulesResponse Client::importPrometheusRulesWithOptions(const ImportPrometheusRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasContent()) {
    query["Content"] = request.getContent();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNameSpace()) {
    query["NameSpace"] = request.getNameSpace();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ImportPrometheusRules"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImportPrometheusRulesResponse>();
}

/**
 * @param request ImportPrometheusRulesRequest
 * @return ImportPrometheusRulesResponse
 */
ImportPrometheusRulesResponse Client::importPrometheusRules(const ImportPrometheusRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return importPrometheusRulesWithOptions(request, runtime);
}

/**
 * @param request ListActivatedAlertsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListActivatedAlertsResponse
 */
ListActivatedAlertsResponse Client::listActivatedAlertsWithOptions(const ListActivatedAlertsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasFilter()) {
    query["Filter"] = request.getFilter();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListActivatedAlerts"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListActivatedAlertsResponse>();
}

/**
 * @param request ListActivatedAlertsRequest
 * @return ListActivatedAlertsResponse
 */
ListActivatedAlertsResponse Client::listActivatedAlerts(const ListActivatedAlertsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listActivatedAlertsWithOptions(request, runtime);
}

/**
 * @param request ListAlertTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAlertTemplatesResponse
 */
ListAlertTemplatesResponse Client::listAlertTemplatesWithOptions(const ListAlertTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlertProvider()) {
    query["AlertProvider"] = request.getAlertProvider();
  }

  if (!!request.hasLabels()) {
    query["Labels"] = request.getLabels();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTemplateProvider()) {
    query["TemplateProvider"] = request.getTemplateProvider();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAlertTemplates"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAlertTemplatesResponse>();
}

/**
 * @param request ListAlertTemplatesRequest
 * @return ListAlertTemplatesResponse
 */
ListAlertTemplatesResponse Client::listAlertTemplates(const ListAlertTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAlertTemplatesWithOptions(request, runtime);
}

/**
 * @param request ListClusterFromGrafanaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListClusterFromGrafanaResponse
 */
ListClusterFromGrafanaResponse Client::listClusterFromGrafanaWithOptions(const ListClusterFromGrafanaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListClusterFromGrafana"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListClusterFromGrafanaResponse>();
}

/**
 * @param request ListClusterFromGrafanaRequest
 * @return ListClusterFromGrafanaResponse
 */
ListClusterFromGrafanaResponse Client::listClusterFromGrafana(const ListClusterFromGrafanaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listClusterFromGrafanaWithOptions(request, runtime);
}

/**
 * @param request ListDashboardsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDashboardsResponse
 */
ListDashboardsResponse Client::listDashboardsWithOptions(const ListDashboardsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasClusterType()) {
    query["ClusterType"] = request.getClusterType();
  }

  if (!!request.hasProduct()) {
    query["Product"] = request.getProduct();
  }

  if (!!request.hasRecreateSwitch()) {
    query["RecreateSwitch"] = request.getRecreateSwitch();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.getTitle();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDashboards"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDashboardsResponse>();
}

/**
 * @param request ListDashboardsRequest
 * @return ListDashboardsResponse
 */
ListDashboardsResponse Client::listDashboards(const ListDashboardsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDashboardsWithOptions(request, runtime);
}

/**
 * @param request ListDispatchRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDispatchRuleResponse
 */
ListDispatchRuleResponse Client::listDispatchRuleWithOptions(const ListDispatchRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSystem()) {
    query["System"] = request.getSystem();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDispatchRule"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDispatchRuleResponse>();
}

/**
 * @param request ListDispatchRuleRequest
 * @return ListDispatchRuleResponse
 */
ListDispatchRuleResponse Client::listDispatchRule(const ListDispatchRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDispatchRuleWithOptions(request, runtime);
}

/**
 * @param request ListPromClustersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPromClustersResponse
 */
ListPromClustersResponse Client::listPromClustersWithOptions(const ListPromClustersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPromClusters"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPromClustersResponse>();
}

/**
 * @param request ListPromClustersRequest
 * @return ListPromClustersResponse
 */
ListPromClustersResponse Client::listPromClusters(const ListPromClustersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPromClustersWithOptions(request, runtime);
}

/**
 * @param request ListPrometheusAlertRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPrometheusAlertRulesResponse
 */
ListPrometheusAlertRulesResponse Client::listPrometheusAlertRulesWithOptions(const ListPrometheusAlertRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasMatchExpressions()) {
    query["MatchExpressions"] = request.getMatchExpressions();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPrometheusAlertRules"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPrometheusAlertRulesResponse>();
}

/**
 * @param request ListPrometheusAlertRulesRequest
 * @return ListPrometheusAlertRulesResponse
 */
ListPrometheusAlertRulesResponse Client::listPrometheusAlertRules(const ListPrometheusAlertRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPrometheusAlertRulesWithOptions(request, runtime);
}

/**
 * @param request ListPrometheusAlertTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPrometheusAlertTemplatesResponse
 */
ListPrometheusAlertTemplatesResponse Client::listPrometheusAlertTemplatesWithOptions(const ListPrometheusAlertTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPrometheusAlertTemplates"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPrometheusAlertTemplatesResponse>();
}

/**
 * @param request ListPrometheusAlertTemplatesRequest
 * @return ListPrometheusAlertTemplatesResponse
 */
ListPrometheusAlertTemplatesResponse Client::listPrometheusAlertTemplates(const ListPrometheusAlertTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPrometheusAlertTemplatesWithOptions(request, runtime);
}

/**
 * @param request ListRetcodeAppsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRetcodeAppsResponse
 */
ListRetcodeAppsResponse Client::listRetcodeAppsWithOptions(const ListRetcodeAppsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRetcodeApps"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRetcodeAppsResponse>();
}

/**
 * @param request ListRetcodeAppsRequest
 * @return ListRetcodeAppsResponse
 */
ListRetcodeAppsResponse Client::listRetcodeApps(const ListRetcodeAppsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRetcodeAppsWithOptions(request, runtime);
}

/**
 * @param request ListScenarioRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListScenarioResponse
 */
ListScenarioResponse Client::listScenarioWithOptions(const ListScenarioRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasScenario()) {
    query["Scenario"] = request.getScenario();
  }

  if (!!request.hasSign()) {
    query["Sign"] = request.getSign();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListScenario"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListScenarioResponse>();
}

/**
 * @param request ListScenarioRequest
 * @return ListScenarioResponse
 */
ListScenarioResponse Client::listScenario(const ListScenarioRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listScenarioWithOptions(request, runtime);
}

/**
 * @param request ListServerlessTopNAppsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListServerlessTopNAppsResponse
 */
ListServerlessTopNAppsResponse Client::listServerlessTopNAppsWithOptions(const ListServerlessTopNAppsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.getLimit();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.getOrderBy();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListServerlessTopNApps"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListServerlessTopNAppsResponse>();
}

/**
 * @param request ListServerlessTopNAppsRequest
 * @return ListServerlessTopNAppsResponse
 */
ListServerlessTopNAppsResponse Client::listServerlessTopNApps(const ListServerlessTopNAppsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listServerlessTopNAppsWithOptions(request, runtime);
}

/**
 * @param request ListTraceAppsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTraceAppsResponse
 */
ListTraceAppsResponse Client::listTraceAppsWithOptions(const ListTraceAppsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTraceApps"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTraceAppsResponse>();
}

/**
 * @param request ListTraceAppsRequest
 * @return ListTraceAppsResponse
 */
ListTraceAppsResponse Client::listTraceApps(const ListTraceAppsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTraceAppsWithOptions(request, runtime);
}

/**
 * @param request OpenArmsDefaultSLRRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OpenArmsDefaultSLRResponse
 */
OpenArmsDefaultSLRResponse Client::openArmsDefaultSLRWithOptions(const OpenArmsDefaultSLRRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OpenArmsDefaultSLR"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OpenArmsDefaultSLRResponse>();
}

/**
 * @param request OpenArmsDefaultSLRRequest
 * @return OpenArmsDefaultSLRResponse
 */
OpenArmsDefaultSLRResponse Client::openArmsDefaultSLR(const OpenArmsDefaultSLRRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return openArmsDefaultSLRWithOptions(request, runtime);
}

/**
 * @param request OpenArmsServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OpenArmsServiceResponse
 */
OpenArmsServiceResponse Client::openArmsServiceWithOptions(const OpenArmsServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OpenArmsService"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OpenArmsServiceResponse>();
}

/**
 * @param request OpenArmsServiceRequest
 * @return OpenArmsServiceResponse
 */
OpenArmsServiceResponse Client::openArmsService(const OpenArmsServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return openArmsServiceWithOptions(request, runtime);
}

/**
 * @param request OpenVClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OpenVClusterResponse
 */
OpenVClusterResponse Client::openVClusterWithOptions(const OpenVClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterType()) {
    query["ClusterType"] = request.getClusterType();
  }

  if (!!request.hasLength()) {
    query["Length"] = request.getLength();
  }

  if (!!request.hasProduct()) {
    query["Product"] = request.getProduct();
  }

  if (!!request.hasRecreateSwitch()) {
    query["RecreateSwitch"] = request.getRecreateSwitch();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OpenVCluster"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OpenVClusterResponse>();
}

/**
 * @param request OpenVClusterRequest
 * @return OpenVClusterResponse
 */
OpenVClusterResponse Client::openVCluster(const OpenVClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return openVClusterWithOptions(request, runtime);
}

/**
 * @param request OpenXtraceDefaultSLRRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OpenXtraceDefaultSLRResponse
 */
OpenXtraceDefaultSLRResponse Client::openXtraceDefaultSLRWithOptions(const OpenXtraceDefaultSLRRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OpenXtraceDefaultSLR"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OpenXtraceDefaultSLRResponse>();
}

/**
 * @param request OpenXtraceDefaultSLRRequest
 * @return OpenXtraceDefaultSLRResponse
 */
OpenXtraceDefaultSLRResponse Client::openXtraceDefaultSLR(const OpenXtraceDefaultSLRRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return openXtraceDefaultSLRWithOptions(request, runtime);
}

/**
 * @param request QueryDatasetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDatasetResponse
 */
QueryDatasetResponse Client::queryDatasetWithOptions(const QueryDatasetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatasetId()) {
    query["DatasetId"] = request.getDatasetId();
  }

  if (!!request.hasDateStr()) {
    query["DateStr"] = request.getDateStr();
  }

  if (!!request.hasDimensions()) {
    query["Dimensions"] = request.getDimensions();
  }

  if (!!request.hasHungryMode()) {
    query["HungryMode"] = request.getHungryMode();
  }

  if (!!request.hasIntervalInSec()) {
    query["IntervalInSec"] = request.getIntervalInSec();
  }

  if (!!request.hasIsDrillDown()) {
    query["IsDrillDown"] = request.getIsDrillDown();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.getLimit();
  }

  if (!!request.hasMaxTime()) {
    query["MaxTime"] = request.getMaxTime();
  }

  if (!!request.hasMeasures()) {
    query["Measures"] = request.getMeasures();
  }

  if (!!request.hasMinTime()) {
    query["MinTime"] = request.getMinTime();
  }

  if (!!request.hasOptionalDims()) {
    query["OptionalDims"] = request.getOptionalDims();
  }

  if (!!request.hasOrderByKey()) {
    query["OrderByKey"] = request.getOrderByKey();
  }

  if (!!request.hasProxyUserId()) {
    query["ProxyUserId"] = request.getProxyUserId();
  }

  if (!!request.hasReduceTail()) {
    query["ReduceTail"] = request.getReduceTail();
  }

  if (!!request.hasRequiredDims()) {
    query["RequiredDims"] = request.getRequiredDims();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryDataset"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryDatasetResponse>();
}

/**
 * @param request QueryDatasetRequest
 * @return QueryDatasetResponse
 */
QueryDatasetResponse Client::queryDataset(const QueryDatasetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDatasetWithOptions(request, runtime);
}

/**
 * @param request QueryMetricRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryMetricResponse
 */
QueryMetricResponse Client::queryMetricWithOptions(const QueryMetricRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsistencyDataKey()) {
    query["ConsistencyDataKey"] = request.getConsistencyDataKey();
  }

  if (!!request.hasConsistencyQueryStrategy()) {
    query["ConsistencyQueryStrategy"] = request.getConsistencyQueryStrategy();
  }

  if (!!request.hasDimensions()) {
    query["Dimensions"] = request.getDimensions();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasFilters()) {
    query["Filters"] = request.getFilters();
  }

  if (!!request.hasIntervalInSec()) {
    query["IntervalInSec"] = request.getIntervalInSec();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.getLimit();
  }

  if (!!request.hasMeasures()) {
    query["Measures"] = request.getMeasures();
  }

  if (!!request.hasMetric()) {
    query["Metric"] = request.getMetric();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.getOrderBy();
  }

  if (!!request.hasProxyUserId()) {
    query["ProxyUserId"] = request.getProxyUserId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryMetric"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryMetricResponse>();
}

/**
 * @param request QueryMetricRequest
 * @return QueryMetricResponse
 */
QueryMetricResponse Client::queryMetric(const QueryMetricRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryMetricWithOptions(request, runtime);
}

/**
 * @param request QueryMetricByPageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryMetricByPageResponse
 */
QueryMetricByPageResponse Client::queryMetricByPageWithOptions(const QueryMetricByPageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasCustomFilters()) {
    query["CustomFilters"] = request.getCustomFilters();
  }

  if (!!request.hasDimensions()) {
    query["Dimensions"] = request.getDimensions();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasFilters()) {
    query["Filters"] = request.getFilters();
  }

  if (!!request.hasIntervalInSec()) {
    query["IntervalInSec"] = request.getIntervalInSec();
  }

  if (!!request.hasMeasures()) {
    query["Measures"] = request.getMeasures();
  }

  if (!!request.hasMetric()) {
    query["Metric"] = request.getMetric();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.getOrderBy();
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
    {"action" , "QueryMetricByPage"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryMetricByPageResponse>();
}

/**
 * @param request QueryMetricByPageRequest
 * @return QueryMetricByPageResponse
 */
QueryMetricByPageResponse Client::queryMetricByPage(const QueryMetricByPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryMetricByPageWithOptions(request, runtime);
}

/**
 * @param request SaveTraceAppConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveTraceAppConfigResponse
 */
SaveTraceAppConfigResponse Client::saveTraceAppConfigWithOptions(const SaveTraceAppConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPid()) {
    query["Pid"] = request.getPid();
  }

  if (!!request.hasSettings()) {
    query["Settings"] = request.getSettings();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveTraceAppConfig"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveTraceAppConfigResponse>();
}

/**
 * @param request SaveTraceAppConfigRequest
 * @return SaveTraceAppConfigResponse
 */
SaveTraceAppConfigResponse Client::saveTraceAppConfig(const SaveTraceAppConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveTraceAppConfigWithOptions(request, runtime);
}

/**
 * @param request SearchAlertContactRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchAlertContactResponse
 */
SearchAlertContactResponse Client::searchAlertContactWithOptions(const SearchAlertContactRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactIds()) {
    query["ContactIds"] = request.getContactIds();
  }

  if (!!request.hasContactName()) {
    query["ContactName"] = request.getContactName();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPhone()) {
    query["Phone"] = request.getPhone();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchAlertContact"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchAlertContactResponse>();
}

/**
 * @param request SearchAlertContactRequest
 * @return SearchAlertContactResponse
 */
SearchAlertContactResponse Client::searchAlertContact(const SearchAlertContactRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchAlertContactWithOptions(request, runtime);
}

/**
 * @param request SearchAlertContactGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchAlertContactGroupResponse
 */
SearchAlertContactGroupResponse Client::searchAlertContactGroupWithOptions(const SearchAlertContactGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactGroupIds()) {
    query["ContactGroupIds"] = request.getContactGroupIds();
  }

  if (!!request.hasContactGroupName()) {
    query["ContactGroupName"] = request.getContactGroupName();
  }

  if (!!request.hasContactId()) {
    query["ContactId"] = request.getContactId();
  }

  if (!!request.hasContactName()) {
    query["ContactName"] = request.getContactName();
  }

  if (!!request.hasIsDetail()) {
    query["IsDetail"] = request.getIsDetail();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchAlertContactGroup"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchAlertContactGroupResponse>();
}

/**
 * @param request SearchAlertContactGroupRequest
 * @return SearchAlertContactGroupResponse
 */
SearchAlertContactGroupResponse Client::searchAlertContactGroup(const SearchAlertContactGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchAlertContactGroupWithOptions(request, runtime);
}

/**
 * @param request SearchAlertHistoriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchAlertHistoriesResponse
 */
SearchAlertHistoriesResponse Client::searchAlertHistoriesWithOptions(const SearchAlertHistoriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlertId()) {
    query["AlertId"] = request.getAlertId();
  }

  if (!!request.hasAlertType()) {
    query["AlertType"] = request.getAlertType();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchAlertHistories"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchAlertHistoriesResponse>();
}

/**
 * @param request SearchAlertHistoriesRequest
 * @return SearchAlertHistoriesResponse
 */
SearchAlertHistoriesResponse Client::searchAlertHistories(const SearchAlertHistoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchAlertHistoriesWithOptions(request, runtime);
}

/**
 * @param request SearchAlertRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchAlertRulesResponse
 */
SearchAlertRulesResponse Client::searchAlertRulesWithOptions(const SearchAlertRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppType()) {
    query["AppType"] = request.getAppType();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPid()) {
    query["Pid"] = request.getPid();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.getTitle();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchAlertRules"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchAlertRulesResponse>();
}

/**
 * @param request SearchAlertRulesRequest
 * @return SearchAlertRulesResponse
 */
SearchAlertRulesResponse Client::searchAlertRules(const SearchAlertRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchAlertRulesWithOptions(request, runtime);
}

/**
 * @param request SearchEventsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchEventsResponse
 */
SearchEventsResponse Client::searchEventsWithOptions(const SearchEventsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlertId()) {
    query["AlertId"] = request.getAlertId();
  }

  if (!!request.hasAlertType()) {
    query["AlertType"] = request.getAlertType();
  }

  if (!!request.hasAppType()) {
    query["AppType"] = request.getAppType();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasIsTrigger()) {
    query["IsTrigger"] = request.getIsTrigger();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPid()) {
    query["Pid"] = request.getPid();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchEvents"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchEventsResponse>();
}

/**
 * @param request SearchEventsRequest
 * @return SearchEventsResponse
 */
SearchEventsResponse Client::searchEvents(const SearchEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchEventsWithOptions(request, runtime);
}

/**
 * @param request SearchRetcodeAppByPageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchRetcodeAppByPageResponse
 */
SearchRetcodeAppByPageResponse Client::searchRetcodeAppByPageWithOptions(const SearchRetcodeAppByPageRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasRetcodeAppName()) {
    query["RetcodeAppName"] = request.getRetcodeAppName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchRetcodeAppByPage"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchRetcodeAppByPageResponse>();
}

/**
 * @param request SearchRetcodeAppByPageRequest
 * @return SearchRetcodeAppByPageResponse
 */
SearchRetcodeAppByPageResponse Client::searchRetcodeAppByPage(const SearchRetcodeAppByPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchRetcodeAppByPageWithOptions(request, runtime);
}

/**
 * @param request SearchTraceAppByNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchTraceAppByNameResponse
 */
SearchTraceAppByNameResponse Client::searchTraceAppByNameWithOptions(const SearchTraceAppByNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTraceAppName()) {
    query["TraceAppName"] = request.getTraceAppName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchTraceAppByName"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchTraceAppByNameResponse>();
}

/**
 * @param request SearchTraceAppByNameRequest
 * @return SearchTraceAppByNameResponse
 */
SearchTraceAppByNameResponse Client::searchTraceAppByName(const SearchTraceAppByNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchTraceAppByNameWithOptions(request, runtime);
}

/**
 * @param request SearchTraceAppByPageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchTraceAppByPageResponse
 */
SearchTraceAppByPageResponse Client::searchTraceAppByPageWithOptions(const SearchTraceAppByPageRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasTraceAppName()) {
    query["TraceAppName"] = request.getTraceAppName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchTraceAppByPage"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchTraceAppByPageResponse>();
}

/**
 * @param request SearchTraceAppByPageRequest
 * @return SearchTraceAppByPageResponse
 */
SearchTraceAppByPageResponse Client::searchTraceAppByPage(const SearchTraceAppByPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchTraceAppByPageWithOptions(request, runtime);
}

/**
 * @param request SearchTracesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchTracesResponse
 */
SearchTracesResponse Client::searchTracesWithOptions(const SearchTracesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasExclusionFilters()) {
    query["ExclusionFilters"] = request.getExclusionFilters();
  }

  if (!!request.hasMinDuration()) {
    query["MinDuration"] = request.getMinDuration();
  }

  if (!!request.hasOperationName()) {
    query["OperationName"] = request.getOperationName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasReverse()) {
    query["Reverse"] = request.getReverse();
  }

  if (!!request.hasServiceIp()) {
    query["ServiceIp"] = request.getServiceIp();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.getServiceName();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchTraces"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchTracesResponse>();
}

/**
 * @param request SearchTracesRequest
 * @return SearchTracesResponse
 */
SearchTracesResponse Client::searchTraces(const SearchTracesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchTracesWithOptions(request, runtime);
}

/**
 * @param request SearchTracesByPageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchTracesByPageResponse
 */
SearchTracesByPageResponse Client::searchTracesByPageWithOptions(const SearchTracesByPageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasExclusionFilters()) {
    query["ExclusionFilters"] = request.getExclusionFilters();
  }

  if (!!request.hasMinDuration()) {
    query["MinDuration"] = request.getMinDuration();
  }

  if (!!request.hasOperationName()) {
    query["OperationName"] = request.getOperationName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasReverse()) {
    query["Reverse"] = request.getReverse();
  }

  if (!!request.hasServiceIp()) {
    query["ServiceIp"] = request.getServiceIp();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.getServiceName();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchTracesByPage"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchTracesByPageResponse>();
}

/**
 * @param request SearchTracesByPageRequest
 * @return SearchTracesByPageResponse
 */
SearchTracesByPageResponse Client::searchTracesByPage(const SearchTracesByPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchTracesByPageWithOptions(request, runtime);
}

/**
 * @param request SendCustomIncidentsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendCustomIncidentsResponse
 */
SendCustomIncidentsResponse Client::sendCustomIncidentsWithOptions(const SendCustomIncidentsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIncidents()) {
    query["Incidents"] = request.getIncidents();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SendCustomIncidents"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendCustomIncidentsResponse>();
}

/**
 * @param request SendCustomIncidentsRequest
 * @return SendCustomIncidentsResponse
 */
SendCustomIncidentsResponse Client::sendCustomIncidents(const SendCustomIncidentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendCustomIncidentsWithOptions(request, runtime);
}

/**
 * @param request SendMseIncidentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendMseIncidentResponse
 */
SendMseIncidentResponse Client::sendMseIncidentWithOptions(const SendMseIncidentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIncidents()) {
    query["Incidents"] = request.getIncidents();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SendMseIncident"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendMseIncidentResponse>();
}

/**
 * @param request SendMseIncidentRequest
 * @return SendMseIncidentResponse
 */
SendMseIncidentResponse Client::sendMseIncident(const SendMseIncidentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendMseIncidentWithOptions(request, runtime);
}

/**
 * @param request SetRetcodeShareStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetRetcodeShareStatusResponse
 */
SetRetcodeShareStatusResponse Client::setRetcodeShareStatusWithOptions(const SetRetcodeShareStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPid()) {
    query["Pid"] = request.getPid();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetRetcodeShareStatus"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetRetcodeShareStatusResponse>();
}

/**
 * @param request SetRetcodeShareStatusRequest
 * @return SetRetcodeShareStatusResponse
 */
SetRetcodeShareStatusResponse Client::setRetcodeShareStatus(const SetRetcodeShareStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setRetcodeShareStatusWithOptions(request, runtime);
}

/**
 * @param request StartAlertRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartAlertResponse
 */
StartAlertResponse Client::startAlertWithOptions(const StartAlertRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlertId()) {
    query["AlertId"] = request.getAlertId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartAlert"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartAlertResponse>();
}

/**
 * @param request StartAlertRequest
 * @return StartAlertResponse
 */
StartAlertResponse Client::startAlert(const StartAlertRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startAlertWithOptions(request, runtime);
}

/**
 * @param request StopAlertRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopAlertResponse
 */
StopAlertResponse Client::stopAlertWithOptions(const StopAlertRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlertId()) {
    query["AlertId"] = request.getAlertId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopAlert"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopAlertResponse>();
}

/**
 * @param request StopAlertRequest
 * @return StopAlertResponse
 */
StopAlertResponse Client::stopAlert(const StopAlertRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopAlertWithOptions(request, runtime);
}

/**
 * @param request UpdateAlertContactRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAlertContactResponse
 */
UpdateAlertContactResponse Client::updateAlertContactWithOptions(const UpdateAlertContactRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactId()) {
    query["ContactId"] = request.getContactId();
  }

  if (!!request.hasContactName()) {
    query["ContactName"] = request.getContactName();
  }

  if (!!request.hasDingRobotWebhookUrl()) {
    query["DingRobotWebhookUrl"] = request.getDingRobotWebhookUrl();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasPhoneNum()) {
    query["PhoneNum"] = request.getPhoneNum();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSystemNoc()) {
    query["SystemNoc"] = request.getSystemNoc();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAlertContact"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAlertContactResponse>();
}

/**
 * @param request UpdateAlertContactRequest
 * @return UpdateAlertContactResponse
 */
UpdateAlertContactResponse Client::updateAlertContact(const UpdateAlertContactRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAlertContactWithOptions(request, runtime);
}

/**
 * @param request UpdateAlertContactGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAlertContactGroupResponse
 */
UpdateAlertContactGroupResponse Client::updateAlertContactGroupWithOptions(const UpdateAlertContactGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactGroupId()) {
    query["ContactGroupId"] = request.getContactGroupId();
  }

  if (!!request.hasContactGroupName()) {
    query["ContactGroupName"] = request.getContactGroupName();
  }

  if (!!request.hasContactIds()) {
    query["ContactIds"] = request.getContactIds();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAlertContactGroup"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAlertContactGroupResponse>();
}

/**
 * @param request UpdateAlertContactGroupRequest
 * @return UpdateAlertContactGroupResponse
 */
UpdateAlertContactGroupResponse Client::updateAlertContactGroup(const UpdateAlertContactGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAlertContactGroupWithOptions(request, runtime);
}

/**
 * @param request UpdateAlertRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAlertRuleResponse
 */
UpdateAlertRuleResponse Client::updateAlertRuleWithOptions(const UpdateAlertRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlertId()) {
    query["AlertId"] = request.getAlertId();
  }

  if (!!request.hasContactGroupIds()) {
    query["ContactGroupIds"] = request.getContactGroupIds();
  }

  if (!!request.hasIsAutoStart()) {
    query["IsAutoStart"] = request.getIsAutoStart();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTemplageAlertConfig()) {
    query["TemplageAlertConfig"] = request.getTemplageAlertConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAlertRule"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAlertRuleResponse>();
}

/**
 * @param request UpdateAlertRuleRequest
 * @return UpdateAlertRuleResponse
 */
UpdateAlertRuleResponse Client::updateAlertRule(const UpdateAlertRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAlertRuleWithOptions(request, runtime);
}

/**
 * @param request UpdateAlertTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAlertTemplateResponse
 */
UpdateAlertTemplateResponse Client::updateAlertTemplateWithOptions(const UpdateAlertTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAnnotations()) {
    query["Annotations"] = request.getAnnotations();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasLabels()) {
    query["Labels"] = request.getLabels();
  }

  if (!!request.hasMatchExpressions()) {
    query["MatchExpressions"] = request.getMatchExpressions();
  }

  if (!!request.hasMessage()) {
    query["Message"] = request.getMessage();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.getRule();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAlertTemplate"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAlertTemplateResponse>();
}

/**
 * @param request UpdateAlertTemplateRequest
 * @return UpdateAlertTemplateResponse
 */
UpdateAlertTemplateResponse Client::updateAlertTemplate(const UpdateAlertTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAlertTemplateWithOptions(request, runtime);
}

/**
 * @param request UpdateDispatchRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDispatchRuleResponse
 */
UpdateDispatchRuleResponse Client::updateDispatchRuleWithOptions(const UpdateDispatchRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDispatchRule()) {
    query["DispatchRule"] = request.getDispatchRule();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateDispatchRule"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDispatchRuleResponse>();
}

/**
 * @param request UpdateDispatchRuleRequest
 * @return UpdateDispatchRuleResponse
 */
UpdateDispatchRuleResponse Client::updateDispatchRule(const UpdateDispatchRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDispatchRuleWithOptions(request, runtime);
}

/**
 * @param request UpdatePrometheusAlertRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePrometheusAlertRuleResponse
 */
UpdatePrometheusAlertRuleResponse Client::updatePrometheusAlertRuleWithOptions(const UpdatePrometheusAlertRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlertId()) {
    query["AlertId"] = request.getAlertId();
  }

  if (!!request.hasAlertName()) {
    query["AlertName"] = request.getAlertName();
  }

  if (!!request.hasAnnotations()) {
    query["Annotations"] = request.getAnnotations();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasDispatchRuleId()) {
    query["DispatchRuleId"] = request.getDispatchRuleId();
  }

  if (!!request.hasDuration()) {
    query["Duration"] = request.getDuration();
  }

  if (!!request.hasExpression()) {
    query["Expression"] = request.getExpression();
  }

  if (!!request.hasLabels()) {
    query["Labels"] = request.getLabels();
  }

  if (!!request.hasMessage()) {
    query["Message"] = request.getMessage();
  }

  if (!!request.hasNotifyType()) {
    query["NotifyType"] = request.getNotifyType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdatePrometheusAlertRule"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePrometheusAlertRuleResponse>();
}

/**
 * @param request UpdatePrometheusAlertRuleRequest
 * @return UpdatePrometheusAlertRuleResponse
 */
UpdatePrometheusAlertRuleResponse Client::updatePrometheusAlertRule(const UpdatePrometheusAlertRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePrometheusAlertRuleWithOptions(request, runtime);
}

/**
 * @param request UpdateWebhookRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWebhookResponse
 */
UpdateWebhookResponse Client::updateWebhookWithOptions(const UpdateWebhookRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBody()) {
    query["Body"] = request.getBody();
  }

  if (!!request.hasContactId()) {
    query["ContactId"] = request.getContactId();
  }

  if (!!request.hasContactName()) {
    query["ContactName"] = request.getContactName();
  }

  if (!!request.hasHttpHeaders()) {
    query["HttpHeaders"] = request.getHttpHeaders();
  }

  if (!!request.hasHttpParams()) {
    query["HttpParams"] = request.getHttpParams();
  }

  if (!!request.hasMethod()) {
    query["Method"] = request.getMethod();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUrl()) {
    query["Url"] = request.getUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateWebhook"},
    {"version" , "2021-04-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateWebhookResponse>();
}

/**
 * @param request UpdateWebhookRequest
 * @return UpdateWebhookResponse
 */
UpdateWebhookResponse Client::updateWebhook(const UpdateWebhookRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateWebhookWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace ARMS20210422