#include <darabonba/Core.hpp>
#include <alibabacloud/AISC20260101.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::AISC20260101::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace AISC20260101
{

AlibabaCloud::AISC20260101::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-zhangjiakou" , "aisc.cn-shanghai.aliyuncs.com"},
    {"cn-wulanchabu" , "aisc.cn-shanghai.aliyuncs.com"},
    {"cn-shanghai" , "aisc.cn-shanghai.aliyuncs.com"},
    {"cn-qingdao" , "aisc.cn-shanghai.aliyuncs.com"},
    {"cn-nanjing" , "aisc.cn-shanghai.aliyuncs.com"},
    {"cn-huhehaote" , "aisc.cn-shanghai.aliyuncs.com"},
    {"cn-hangzhou" , "aisc.cn-shanghai.aliyuncs.com"},
    {"cn-guangzhou" , "aisc.cn-shanghai.aliyuncs.com"},
    {"cn-beijing" , "aisc.cn-shanghai.aliyuncs.com"},
    {"ap-southeast-7" , "aisc.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-6" , "aisc.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-5" , "aisc.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-1" , "aisc.ap-southeast-1.aliyuncs.com"},
    {"ap-northeast-2" , "aisc.ap-southeast-1.aliyuncs.com"},
    {"ap-northeast-1" , "aisc.ap-southeast-1.aliyuncs.com"},
    {"eu-central-1" , "aisc.ap-southeast-1.aliyuncs.com"},
    {"eu-west-1" , "aisc.ap-southeast-1.aliyuncs.com"},
    {"us-east-1" , "aisc.ap-southeast-1.aliyuncs.com"},
    {"us-west-1" , "aisc.ap-southeast-1.aliyuncs.com"},
    {"me-east-1" , "aisc.ap-southeast-1.aliyuncs.com"},
    {"cn-beijing-finance-1" , "aisc.cn-shanghai.aliyuncs.com"},
    {"cn-hangzhou-finance" , "aisc.cn-shanghai.aliyuncs.com"},
    {"cn-heyuan-acdr-1" , "aisc.cn-shanghai.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "aisc.cn-shanghai.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "aisc.cn-shanghai.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("aisc", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Initiates batch detection for user-defined skills.
 *
 * @param request CreateSkillFileCheckRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSkillFileCheckResponse
 */
CreateSkillFileCheckResponse Client::createSkillFileCheckWithOptions(const CreateSkillFileCheckRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFiles()) {
    query["Files"] = request.getFiles();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSkillFileCheck"},
    {"version" , "2026-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSkillFileCheckResponse>();
}

/**
 * @summary Initiates batch detection for user-defined skills.
 *
 * @param request CreateSkillFileCheckRequest
 * @return CreateSkillFileCheckResponse
 */
CreateSkillFileCheckResponse Client::createSkillFileCheck(const CreateSkillFileCheckRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSkillFileCheckWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of agent risk events.
 *
 * @param request ListAIAgentEventRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAIAgentEventResponse
 */
ListAIAgentEventResponse Client::listAIAgentEventWithOptions(const ListAIAgentEventRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasAssetName()) {
    query["AssetName"] = request.getAssetName();
  }

  if (!!request.hasAssetType()) {
    query["AssetType"] = request.getAssetType();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasInfraInstanceId()) {
    query["InfraInstanceId"] = request.getInfraInstanceId();
  }

  if (!!request.hasInfraName()) {
    query["InfraName"] = request.getInfraName();
  }

  if (!!request.hasInfraRegionId()) {
    query["InfraRegionId"] = request.getInfraRegionId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRiskLevel()) {
    query["RiskLevel"] = request.getRiskLevel();
  }

  if (!!request.hasRiskName()) {
    query["RiskName"] = request.getRiskName();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasStatusList()) {
    query["StatusList"] = request.getStatusList();
  }

  if (!!request.hasVendor()) {
    query["Vendor"] = request.getVendor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAIAgentEvent"},
    {"version" , "2026-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAIAgentEventResponse>();
}

/**
 * @summary Retrieves a list of agent risk events.
 *
 * @param request ListAIAgentEventRequest
 * @return ListAIAgentEventResponse
 */
ListAIAgentEventResponse Client::listAIAgentEvent(const ListAIAgentEventRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAIAgentEventWithOptions(request, runtime);
}

/**
 * @summary Get subtask information.
 *
 * @param request ListSubTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSubTasksResponse
 */
ListSubTasksResponse Client::listSubTasksWithOptions(const ListSubTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRootTaskId()) {
    query["RootTaskId"] = request.getRootTaskId();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.getTaskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSubTasks"},
    {"version" , "2026-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSubTasksResponse>();
}

/**
 * @summary Get subtask information.
 *
 * @param request ListSubTasksRequest
 * @return ListSubTasksResponse
 */
ListSubTasksResponse Client::listSubTasks(const ListSubTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSubTasksWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace AISC20260101