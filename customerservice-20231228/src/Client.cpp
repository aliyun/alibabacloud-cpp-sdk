#include <darabonba/Core.hpp>
#include <alibabacloud/CustomerService20231228.hpp>
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
using namespace AlibabaCloud::CustomerService20231228::Models;
namespace AlibabaCloud
{
namespace CustomerService20231228
{

AlibabaCloud::CustomerService20231228::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("customerservice", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 获取我的企业支持计划
 *
 * @param request ListEnterpriseSupportPlanRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEnterpriseSupportPlanResponse
 */
ListEnterpriseSupportPlanResponse Client::listEnterpriseSupportPlanWithOptions(const ListEnterpriseSupportPlanRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPageNum()) {
    body["pageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    body["pageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListEnterpriseSupportPlan"},
    {"version" , "2023-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/customerWorkbench/pop/api/enterpriseSupport/listEnterpriseSupportPlan")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEnterpriseSupportPlanResponse>();
}

/**
 * @summary 获取我的企业支持计划
 *
 * @param request ListEnterpriseSupportPlanRequest
 * @return ListEnterpriseSupportPlanResponse
 */
ListEnterpriseSupportPlanResponse Client::listEnterpriseSupportPlan(const ListEnterpriseSupportPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listEnterpriseSupportPlanWithOptions(request, headers, runtime);
}

/**
 * @summary 获取我的企业支持计划(下拉)
 *
 * @param request ListEnterpriseSupportPlanSimpleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEnterpriseSupportPlanSimpleResponse
 */
ListEnterpriseSupportPlanSimpleResponse Client::listEnterpriseSupportPlanSimpleWithOptions(const ListEnterpriseSupportPlanSimpleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPageNum()) {
    body["pageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    body["pageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListEnterpriseSupportPlanSimple"},
    {"version" , "2023-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/customerWorkbench/pop/api/enterpriseSupport/listEnterpriseSupportPlanSimple")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEnterpriseSupportPlanSimpleResponse>();
}

/**
 * @summary 获取我的企业支持计划(下拉)
 *
 * @param request ListEnterpriseSupportPlanSimpleRequest
 * @return ListEnterpriseSupportPlanSimpleResponse
 */
ListEnterpriseSupportPlanSimpleResponse Client::listEnterpriseSupportPlanSimple(const ListEnterpriseSupportPlanSimpleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listEnterpriseSupportPlanSimpleWithOptions(request, headers, runtime);
}

/**
 * @summary 获取专家服务列表
 *
 * @param request ListServiceApplyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListServiceApplyResponse
 */
ListServiceApplyResponse Client::listServiceApplyWithOptions(const ListServiceApplyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApplyType()) {
    body["applyType"] = request.getApplyType();
  }

  if (!!request.hasEndDate()) {
    body["endDate"] = request.getEndDate();
  }

  if (!!request.hasPageNum()) {
    body["pageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    body["pageSize"] = request.getPageSize();
  }

  if (!!request.hasProductCode()) {
    body["productCode"] = request.getProductCode();
  }

  if (!!request.hasStartDate()) {
    body["startDate"] = request.getStartDate();
  }

  if (!!request.hasStatus()) {
    body["status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListServiceApply"},
    {"version" , "2023-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/customerWorkbench/pop/api/expert/service/listServiceApply")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListServiceApplyResponse>();
}

/**
 * @summary 获取专家服务列表
 *
 * @param request ListServiceApplyRequest
 * @return ListServiceApplyResponse
 */
ListServiceApplyResponse Client::listServiceApply(const ListServiceApplyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listServiceApplyWithOptions(request, headers, runtime);
}

/**
 * @summary 通过UID分页获取云企任务单
 *
 * @param request ListYunQiTaskByUidRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListYunQiTaskByUidResponse
 */
ListYunQiTaskByUidResponse Client::listYunQiTaskByUidWithOptions(const ListYunQiTaskByUidRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCreateTimeEnd()) {
    body["createTimeEnd"] = request.getCreateTimeEnd();
  }

  if (!!request.hasCreateTimeStart()) {
    body["createTimeStart"] = request.getCreateTimeStart();
  }

  if (!!request.hasFreeOrderApplyCodes()) {
    body["freeOrderApplyCodes"] = request.getFreeOrderApplyCodes();
  }

  if (!!request.hasFreeOrderApplyIds()) {
    body["freeOrderApplyIds"] = request.getFreeOrderApplyIds();
  }

  if (!!request.hasOrderIds()) {
    body["orderIds"] = request.getOrderIds();
  }

  if (!!request.hasPageNum()) {
    body["pageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    body["pageSize"] = request.getPageSize();
  }

  if (!!request.hasStatusList()) {
    body["statusList"] = request.getStatusList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListYunQiTaskByUid"},
    {"version" , "2023-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/customerWorkbench/pop/api/record/listYunQiTaskByUid")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListYunQiTaskByUidResponse>();
}

/**
 * @summary 通过UID分页获取云企任务单
 *
 * @param request ListYunQiTaskByUidRequest
 * @return ListYunQiTaskByUidResponse
 */
ListYunQiTaskByUidResponse Client::listYunQiTaskByUid(const ListYunQiTaskByUidRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listYunQiTaskByUidWithOptions(request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace CustomerService20231228