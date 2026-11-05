#include <darabonba/Core.hpp>
#include <alibabacloud/AgenticBAS20260630.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/gateway/POP.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::Gateway;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::AgenticBAS20260630::Models;
namespace AlibabaCloud
{
namespace AgenticBAS20260630
{

AlibabaCloud::AgenticBAS20260630::Client::Client(Config &config): OpenApiClient(config){
  this->_productId = "AgenticBAS";
  shared_ptr<POP> gatewayClient = make_shared<POP>();
  this->_spi = gatewayClient;
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
 * @summary Creates penetration testing tasks for authorized assets of the current account and returns the task IDs. You can specify up to five targets at a time, and one task is created for each target.
 *
 * @description Creates penetration testing tasks for authorized assets of the current account and returns the task IDs. You can specify up to five targets at a time, and one task is created for each target.
 * Before you call this operation, you must activate the AgenticBAS service or meet the validity period and quota conditions of the trial service. The target assets must meet the ownership verification requirements of the selected asset source. Business parameters are passed in OperationInput. VulnCheckItems and PentestRequirement cannot be empty at the same time. Currently, only IMMEDIATE execution is supported, and scheduled execution is not supported.
 * A successful creation response only indicates that the tasks are created and does not wait for the scan to complete. Save the TaskId in TaskList, query the status and usage by calling DescribePentestTaskList, and then use the same TaskId to query vulnerabilities or reports. Tasks may enter a queue. If a report is not generated, the query response may not contain a download link.
 * Credentials use an object structure of "identity name -> credential configuration". The following are synthetic examples. Replace them with authorized test identities in actual calls.
 * ```json
 * {
 *   "Credentials": {
 *     "accountUser": {
 *       "account": {
 *         "username": "example-user",
 *         "password": "example-password"
 *       }
 *     },
 *     "cookieUser": {
 *       "cookies": [
 *         {
 *           "name": "session",
 *           "value": "example-session",
 *           "domain": "example.com",
 *           "path": "/",
 *           "secure": true,
 *           "httpOnly": true,
 *           "sameSite": "Lax"
 *         }
 *       ]
 *     },
 *     "localUser": {
 *       "localStorage": {
 *         "access_token": "example-local-token"
 *       }
 *     },
 *     "sessionUser": {
 *       "sessionStorage": {
 *         "session_token": "example-session-token"
 *       }
 *     },
 *     "headerUser": {
 *       "extraHeaders": {
 *         "Authorization": "Bearer example-token"
 *       }
 *     }
 *   }
 * }
 * ```
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
 * @summary Creates penetration testing tasks for authorized assets of the current account and returns the task IDs. You can specify up to five targets at a time, and one task is created for each target.
 *
 * @description Creates penetration testing tasks for authorized assets of the current account and returns the task IDs. You can specify up to five targets at a time, and one task is created for each target.
 * Before you call this operation, you must activate the AgenticBAS service or meet the validity period and quota conditions of the trial service. The target assets must meet the ownership verification requirements of the selected asset source. Business parameters are passed in OperationInput. VulnCheckItems and PentestRequirement cannot be empty at the same time. Currently, only IMMEDIATE execution is supported, and scheduled execution is not supported.
 * A successful creation response only indicates that the tasks are created and does not wait for the scan to complete. Save the TaskId in TaskList, query the status and usage by calling DescribePentestTaskList, and then use the same TaskId to query vulnerabilities or reports. Tasks may enter a queue. If a report is not generated, the query response may not contain a download link.
 * Credentials use an object structure of "identity name -> credential configuration". The following are synthetic examples. Replace them with authorized test identities in actual calls.
 * ```json
 * {
 *   "Credentials": {
 *     "accountUser": {
 *       "account": {
 *         "username": "example-user",
 *         "password": "example-password"
 *       }
 *     },
 *     "cookieUser": {
 *       "cookies": [
 *         {
 *           "name": "session",
 *           "value": "example-session",
 *           "domain": "example.com",
 *           "path": "/",
 *           "secure": true,
 *           "httpOnly": true,
 *           "sameSite": "Lax"
 *         }
 *       ]
 *     },
 *     "localUser": {
 *       "localStorage": {
 *         "access_token": "example-local-token"
 *       }
 *     },
 *     "sessionUser": {
 *       "sessionStorage": {
 *         "session_token": "example-session-token"
 *       }
 *     },
 *     "headerUser": {
 *       "extraHeaders": {
 *         "Authorization": "Bearer example-token"
 *       }
 *     }
 *   }
 * }
 * ```
 *
 * @param request CreatePentestTaskRequest
 * @return CreatePentestTaskResponse
 */
CreatePentestTaskResponse Client::createPentestTask(const CreatePentestTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPentestTaskWithOptions(request, runtime);
}

/**
 * @summary Queries the PDF report of a specified penetration test task under the current account and returns a temporary OSS download URL and its expiration time. The report content is not returned.
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
 * @summary Queries the PDF report of a specified penetration test task under the current account and returns a temporary OSS download URL and its expiration time. The report content is not returned.
 *
 * @param request DescribePentestReportContentRequest
 * @return DescribePentestReportContentResponse
 */
DescribePentestReportContentResponse Client::describePentestReportContent(const DescribePentestReportContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePentestReportContentWithOptions(request, runtime);
}

/**
 * @summary Queries the penetration testing tasks of the current account by using paging and returns the task status, execution duration, Credits usage, time, and vulnerability statistics.
 *
 * @description Queries the penetration testing tasks of the current account by using paging and returns the task status, execution duration, Credits usage, time, and vulnerability statistics.
 * Use OperationInput to specify query conditions. Paging is implemented by using CurrentPage and PageSize. By default, the first page is queried and each page contains 10 entries. You can filter tasks by task name keyword and task status.
 * The response includes TaskList and PageInfo. Duration indicates the execution duration in seconds. CreditsUsed indicates the used Credits. Tasks that have not started may not have a start time or execution duration, and unfinished tasks may not have a completion time. UNIX timestamps uniformly use UNIX seconds. When displaying, you can convert them to the time zone of the caller.
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
 * @summary Queries the penetration testing tasks of the current account by using paging and returns the task status, execution duration, Credits usage, time, and vulnerability statistics.
 *
 * @description Queries the penetration testing tasks of the current account by using paging and returns the task status, execution duration, Credits usage, time, and vulnerability statistics.
 * Use OperationInput to specify query conditions. Paging is implemented by using CurrentPage and PageSize. By default, the first page is queried and each page contains 10 entries. You can filter tasks by task name keyword and task status.
 * The response includes TaskList and PageInfo. Duration indicates the execution duration in seconds. CreditsUsed indicates the used Credits. Tasks that have not started may not have a start time or execution duration, and unfinished tasks may not have a completion time. UNIX timestamps uniformly use UNIX seconds. When displaying, you can convert them to the time zone of the caller.
 *
 * @param request DescribePentestTaskListRequest
 * @return DescribePentestTaskListResponse
 */
DescribePentestTaskListResponse Client::describePentestTaskList(const DescribePentestTaskListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePentestTaskListWithOptions(request, runtime);
}

/**
 * @summary Queries penetration test vulnerabilities for the current account by task ID with paging. Returns vulnerability titles, severity levels, authentication statuses, affected URLs, and discovery times. Supports filtering by severity level.
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
 * @summary Queries penetration test vulnerabilities for the current account by task ID with paging. Returns vulnerability titles, severity levels, authentication statuses, affected URLs, and discovery times. Supports filtering by severity level.
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