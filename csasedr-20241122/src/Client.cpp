#include <darabonba/Core.hpp>
#include <alibabacloud/CsasEdr20241122.hpp>
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
using namespace AlibabaCloud::CsasEdr20241122::Models;
namespace AlibabaCloud
{
namespace CsasEdr20241122
{

AlibabaCloud::CsasEdr20241122::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("csasedr", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Queries security alert types.
 *
 * @param request DescribeNsasSuspEventTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNsasSuspEventTypeResponse
 */
DescribeNsasSuspEventTypeResponse Client::describeNsasSuspEventTypeWithOptions(const DescribeNsasSuspEventTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContainerFieldName()) {
    query["ContainerFieldName"] = request.getContainerFieldName();
  }

  if (!!request.hasContainerFieldValue()) {
    query["ContainerFieldValue"] = request.getContainerFieldValue();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasUuids()) {
    query["Uuids"] = request.getUuids();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNsasSuspEventType"},
    {"version" , "2024-11-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNsasSuspEventTypeResponse>();
}

/**
 * @summary Queries security alert types.
 *
 * @param request DescribeNsasSuspEventTypeRequest
 * @return DescribeNsasSuspEventTypeResponse
 */
DescribeNsasSuspEventTypeResponse Client::describeNsasSuspEventType(const DescribeNsasSuspEventTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNsasSuspEventTypeWithOptions(request, runtime);
}

/**
 * @summary Queries the handling operations, operability, and whitelist rule configurations for a specified endpoint alert in its current state.
 *
 * @description This operation queries the handling operations that can be displayed for a specified endpoint alert. When initiating a subsequent response, you must select the operation items returned in this response where UserCanOperate is true, and submit parameters as required by the response operation. The query result does not guarantee that the subsequent response will succeed.
 * The actual returned results are affected by feature switches, canary releases, dynamic allowlists, alert templates, alert statuses, and filter conditions. The list may be empty. The examples are used to illustrate field formats or rule combinations and do not represent that a specific alert will definitely return these values. MappingMarkFields and its subfields are generic compatibility structures. The current query pipeline does not populate their elements, and you should not infer that this operation supports the corresponding capabilities based on them.
 *
 * @param request DescribeSecurityEventOperationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSecurityEventOperationsResponse
 */
DescribeSecurityEventOperationsResponse Client::describeSecurityEventOperationsWithOptions(const DescribeSecurityEventOperationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSecurityEventId()) {
    query["SecurityEventId"] = request.getSecurityEventId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSecurityEventOperations"},
    {"version" , "2024-11-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSecurityEventOperationsResponse>();
}

/**
 * @summary Queries the handling operations, operability, and whitelist rule configurations for a specified endpoint alert in its current state.
 *
 * @description This operation queries the handling operations that can be displayed for a specified endpoint alert. When initiating a subsequent response, you must select the operation items returned in this response where UserCanOperate is true, and submit parameters as required by the response operation. The query result does not guarantee that the subsequent response will succeed.
 * The actual returned results are affected by feature switches, canary releases, dynamic allowlists, alert templates, alert statuses, and filter conditions. The list may be empty. The examples are used to illustrate field formats or rule combinations and do not represent that a specific alert will definitely return these values. MappingMarkFields and its subfields are generic compatibility structures. The current query pipeline does not populate their elements, and you should not infer that this operation supports the corresponding capabilities based on them.
 *
 * @param request DescribeSecurityEventOperationsRequest
 * @return DescribeSecurityEventOperationsResponse
 */
DescribeSecurityEventOperationsResponse Client::describeSecurityEventOperations(const DescribeSecurityEventOperationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSecurityEventOperationsWithOptions(request, runtime);
}

/**
 * @summary Queries endpoint security alerts and supports filtering by alert, endpoint, and processing status.
 *
 * @param request DescribeSuspEventsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSuspEventsResponse
 */
DescribeSuspEventsResponse Client::describeSuspEventsWithOptions(const DescribeSuspEventsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlarmEventName()) {
    query["AlarmEventName"] = request.getAlarmEventName();
  }

  if (!!request.hasAlarmUniqueInfo()) {
    query["AlarmUniqueInfo"] = request.getAlarmUniqueInfo();
  }

  if (!!request.hasAssetsTypeList()) {
    query["AssetsTypeList"] = request.getAssetsTypeList();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasContainerFieldName()) {
    query["ContainerFieldName"] = request.getContainerFieldName();
  }

  if (!!request.hasContainerFieldValue()) {
    query["ContainerFieldValue"] = request.getContainerFieldValue();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDealed()) {
    query["Dealed"] = request.getDealed();
  }

  if (!!request.hasDepartment()) {
    query["Department"] = request.getDepartment();
  }

  if (!!request.hasEventNames()) {
    query["EventNames"] = request.getEventNames();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasHostName()) {
    query["HostName"] = request.getHostName();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasInnerIp()) {
    query["InnerIp"] = request.getInnerIp();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLevels()) {
    query["Levels"] = request.getLevels();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOperateErrorCodeList()) {
    query["OperateErrorCodeList"] = request.getOperateErrorCodeList();
  }

  if (!!request.hasOperateTimeEnd()) {
    query["OperateTimeEnd"] = request.getOperateTimeEnd();
  }

  if (!!request.hasOperateTimeStart()) {
    query["OperateTimeStart"] = request.getOperateTimeStart();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasParentEventTypes()) {
    query["ParentEventTypes"] = request.getParentEventTypes();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasSortColumn()) {
    query["SortColumn"] = request.getSortColumn();
  }

  if (!!request.hasSortType()) {
    query["SortType"] = request.getSortType();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasSrcIp()) {
    query["SrcIp"] = request.getSrcIp();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasStrictMode()) {
    query["StrictMode"] = request.getStrictMode();
  }

  if (!!request.hasTargetType()) {
    query["TargetType"] = request.getTargetType();
  }

  if (!!request.hasTimeEnd()) {
    query["TimeEnd"] = request.getTimeEnd();
  }

  if (!!request.hasTimeStart()) {
    query["TimeStart"] = request.getTimeStart();
  }

  if (!!request.hasUniqueInfo()) {
    query["UniqueInfo"] = request.getUniqueInfo();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  if (!!request.hasUuids()) {
    query["Uuids"] = request.getUuids();
  }

  json body = {};
  if (!!request.hasTacticId()) {
    body["TacticId"] = request.getTacticId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DescribeSuspEvents"},
    {"version" , "2024-11-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSuspEventsResponse>();
}

/**
 * @summary Queries endpoint security alerts and supports filtering by alert, endpoint, and processing status.
 *
 * @param request DescribeSuspEventsRequest
 * @return DescribeSuspEventsResponse
 */
DescribeSuspEventsResponse Client::describeSuspEvents(const DescribeSuspEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSuspEventsWithOptions(request, runtime);
}

/**
 * @summary Handles security alert events.
 *
 * @param request HandleSecurityEventsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return HandleSecurityEventsResponse
 */
HandleSecurityEventsResponse Client::handleSecurityEventsWithOptions(const HandleSecurityEventsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMarkBatch()) {
    query["MarkBatch"] = request.getMarkBatch();
  }

  if (!!request.hasMarkMissParam()) {
    query["MarkMissParam"] = request.getMarkMissParam();
  }

  if (!!request.hasOperationCode()) {
    query["OperationCode"] = request.getOperationCode();
  }

  if (!!request.hasOperationParams()) {
    query["OperationParams"] = request.getOperationParams();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasSecurityEventIds()) {
    query["SecurityEventIds"] = request.getSecurityEventIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "HandleSecurityEvents"},
    {"version" , "2024-11-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<HandleSecurityEventsResponse>();
}

/**
 * @summary Handles security alert events.
 *
 * @param request HandleSecurityEventsRequest
 * @return HandleSecurityEventsResponse
 */
HandleSecurityEventsResponse Client::handleSecurityEvents(const HandleSecurityEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return handleSecurityEventsWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace CsasEdr20241122