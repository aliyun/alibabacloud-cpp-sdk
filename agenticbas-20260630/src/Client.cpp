#include <darabonba/Core.hpp>
#include <alibabacloud/AgenticBAS20260630.hpp>
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
using namespace AlibabaCloud::AgenticBAS20260630::Models;
namespace AlibabaCloud
{
namespace AgenticBAS20260630
{

AlibabaCloud::AgenticBAS20260630::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("agenticbas", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 创建渗透测试任务
 *
 * @param tmpReq CreatePentestTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePentestTaskResponse
 */
CreatePentestTaskResponse Client::createPentestTaskWithOptions(const CreatePentestTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreatePentestTaskShrinkRequest request = CreatePentestTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasOperationInput()) {
    request.setOperationInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOperationInput(), "OperationInput", "json"));
  }

  json query = {};
  if (!!request.hasOperationInputShrink()) {
    query["OperationInput"] = request.getOperationInputShrink();
  }

  if (!!request.hasOperationType()) {
    query["OperationType"] = request.getOperationType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreatePentestTask"},
    {"version" , "2026-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePentestTaskResponse>();
}

/**
 * @summary 创建渗透测试任务
 *
 * @param request CreatePentestTaskRequest
 * @return CreatePentestTaskResponse
 */
CreatePentestTaskResponse Client::createPentestTask(const CreatePentestTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPentestTaskWithOptions(request, runtime);
}

/**
 * @summary 查询渗透测试报告内容
 *
 * @param tmpReq DescribePentestReportContentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePentestReportContentResponse
 */
DescribePentestReportContentResponse Client::describePentestReportContentWithOptions(const DescribePentestReportContentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribePentestReportContentShrinkRequest request = DescribePentestReportContentShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasOperationInput()) {
    request.setOperationInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOperationInput(), "OperationInput", "json"));
  }

  json query = {};
  if (!!request.hasOperationInputShrink()) {
    query["OperationInput"] = request.getOperationInputShrink();
  }

  if (!!request.hasOperationType()) {
    query["OperationType"] = request.getOperationType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePentestReportContent"},
    {"version" , "2026-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePentestReportContentResponse>();
}

/**
 * @summary 查询渗透测试报告内容
 *
 * @param request DescribePentestReportContentRequest
 * @return DescribePentestReportContentResponse
 */
DescribePentestReportContentResponse Client::describePentestReportContent(const DescribePentestReportContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePentestReportContentWithOptions(request, runtime);
}

/**
 * @summary 查询渗透测试任务列表
 *
 * @param tmpReq DescribePentestTaskListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePentestTaskListResponse
 */
DescribePentestTaskListResponse Client::describePentestTaskListWithOptions(const DescribePentestTaskListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribePentestTaskListShrinkRequest request = DescribePentestTaskListShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasOperationInput()) {
    request.setOperationInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOperationInput(), "OperationInput", "json"));
  }

  json query = {};
  if (!!request.hasOperationInputShrink()) {
    query["OperationInput"] = request.getOperationInputShrink();
  }

  if (!!request.hasOperationType()) {
    query["OperationType"] = request.getOperationType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePentestTaskList"},
    {"version" , "2026-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePentestTaskListResponse>();
}

/**
 * @summary 查询渗透测试任务列表
 *
 * @param request DescribePentestTaskListRequest
 * @return DescribePentestTaskListResponse
 */
DescribePentestTaskListResponse Client::describePentestTaskList(const DescribePentestTaskListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePentestTaskListWithOptions(request, runtime);
}

/**
 * @summary 查询渗透测试漏洞列表
 *
 * @param tmpReq DescribePentestVulnListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePentestVulnListResponse
 */
DescribePentestVulnListResponse Client::describePentestVulnListWithOptions(const DescribePentestVulnListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribePentestVulnListShrinkRequest request = DescribePentestVulnListShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasOperationInput()) {
    request.setOperationInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOperationInput(), "OperationInput", "json"));
  }

  json query = {};
  if (!!request.hasOperationInputShrink()) {
    query["OperationInput"] = request.getOperationInputShrink();
  }

  if (!!request.hasOperationType()) {
    query["OperationType"] = request.getOperationType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePentestVulnList"},
    {"version" , "2026-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePentestVulnListResponse>();
}

/**
 * @summary 查询渗透测试漏洞列表
 *
 * @param request DescribePentestVulnListRequest
 * @return DescribePentestVulnListResponse
 */
DescribePentestVulnListResponse Client::describePentestVulnList(const DescribePentestVulnListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePentestVulnListWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace AgenticBAS20260630