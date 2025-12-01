#include <darabonba/Core.hpp>
#include <alibabacloud/Mssp20161228.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Mssp20161228::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Mssp20161228
{

AlibabaCloud::Mssp20161228::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("mssp", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Confirm Receipt of Security Assessment Report
 *
 * @param request ConfirmDjbhReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfirmDjbhReportResponse
 */
ConfirmDjbhReportResponse Client::confirmDjbhReportWithOptions(const ConfirmDjbhReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ConfirmDjbhReport"},
    {"version" , "2016-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfirmDjbhReportResponse>();
}

/**
 * @summary Confirm Receipt of Security Assessment Report
 *
 * @param request ConfirmDjbhReportRequest
 * @return ConfirmDjbhReportResponse
 */
ConfirmDjbhReportResponse Client::confirmDjbhReport(const ConfirmDjbhReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return confirmDjbhReportWithOptions(request, runtime);
}

/**
 * @summary Create Service-Linked Role
 *
 * @param request CreateServiceLinkedRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateServiceLinkedRoleResponse
 */
CreateServiceLinkedRoleResponse Client::createServiceLinkedRoleWithOptions(const CreateServiceLinkedRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateServiceLinkedRole"},
    {"version" , "2016-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateServiceLinkedRoleResponse>();
}

/**
 * @summary Create Service-Linked Role
 *
 * @param request CreateServiceLinkedRoleRequest
 * @return CreateServiceLinkedRoleResponse
 */
CreateServiceLinkedRoleResponse Client::createServiceLinkedRole(const CreateServiceLinkedRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createServiceLinkedRoleWithOptions(request, runtime);
}

/**
 * @summary Create Service Work Order
 *
 * @param request CreateServiceWorkOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateServiceWorkOrderResponse
 */
CreateServiceWorkOrderResponse Client::createServiceWorkOrderWithOptions(const CreateServiceWorkOrderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCreator()) {
    body["Creator"] = request.creator();
  }

  if (!!request.hasCustomerId()) {
    body["CustomerId"] = request.customerId();
  }

  if (!!request.hasDurationDay()) {
    body["DurationDay"] = request.durationDay();
  }

  if (!!request.hasIsAttachment()) {
    body["IsAttachment"] = request.isAttachment();
  }

  if (!!request.hasIsMilestone()) {
    body["IsMilestone"] = request.isMilestone();
  }

  if (!!request.hasIsWorkOrderNotify()) {
    body["IsWorkOrderNotify"] = request.isWorkOrderNotify();
  }

  if (!!request.hasNotifyDay()) {
    body["NotifyDay"] = request.notifyDay();
  }

  if (!!request.hasNotifyId()) {
    body["NotifyId"] = request.notifyId();
  }

  if (!!request.hasOperateRemark()) {
    body["OperateRemark"] = request.operateRemark();
  }

  if (!!request.hasOperateType()) {
    body["OperateType"] = request.operateType();
  }

  if (!!request.hasOperator()) {
    body["Operator"] = request._operator();
  }

  if (!!request.hasOwnerId()) {
    body["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPriority()) {
    body["Priority"] = request.priority();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  if (!!request.hasWorkOrderDetail()) {
    body["WorkOrderDetail"] = request.workOrderDetail();
  }

  if (!!request.hasWorkOrderName()) {
    body["WorkOrderName"] = request.workOrderName();
  }

  if (!!request.hasWorkOrderSource()) {
    body["WorkOrderSource"] = request.workOrderSource();
  }

  if (!!request.hasWorkOrderStatus()) {
    body["WorkOrderStatus"] = request.workOrderStatus();
  }

  if (!!request.hasWorkOrderType()) {
    body["WorkOrderType"] = request.workOrderType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateServiceWorkOrder"},
    {"version" , "2016-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateServiceWorkOrderResponse>();
}

/**
 * @summary Create Service Work Order
 *
 * @param request CreateServiceWorkOrderRequest
 * @return CreateServiceWorkOrderResponse
 */
CreateServiceWorkOrderResponse Client::createServiceWorkOrder(const CreateServiceWorkOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createServiceWorkOrderWithOptions(request, runtime);
}

/**
 * @summary Delete Security Assessment Report
 *
 * @param request DeleteDjbhReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDjbhReportResponse
 */
DeleteDjbhReportResponse Client::deleteDjbhReportWithOptions(const DeleteDjbhReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteDjbhReport"},
    {"version" , "2016-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDjbhReportResponse>();
}

/**
 * @summary Delete Security Assessment Report
 *
 * @param request DeleteDjbhReportRequest
 * @return DeleteDjbhReportResponse
 */
DeleteDjbhReportResponse Client::deleteDjbhReport(const DeleteDjbhReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDjbhReportWithOptions(request, runtime);
}

/**
 * @summary Query Service-Linked Role
 *
 * @param request DescribeServiceLinkedRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeServiceLinkedRoleResponse
 */
DescribeServiceLinkedRoleResponse Client::describeServiceLinkedRoleWithOptions(const DescribeServiceLinkedRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeServiceLinkedRole"},
    {"version" , "2016-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeServiceLinkedRoleResponse>();
}

/**
 * @summary Query Service-Linked Role
 *
 * @param request DescribeServiceLinkedRoleRequest
 * @return DescribeServiceLinkedRoleResponse
 */
DescribeServiceLinkedRoleResponse Client::describeServiceLinkedRole(const DescribeServiceLinkedRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeServiceLinkedRoleWithOptions(request, runtime);
}

/**
 * @summary Process Service Work Order
 *
 * @param request DisposeServiceWorkOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisposeServiceWorkOrderResponse
 */
DisposeServiceWorkOrderResponse Client::disposeServiceWorkOrderWithOptions(const DisposeServiceWorkOrderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAttachmentName()) {
    body["AttachmentName"] = request.attachmentName();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasForwardOwnerId()) {
    body["ForwardOwnerId"] = request.forwardOwnerId();
  }

  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasIsAttachment()) {
    body["IsAttachment"] = request.isAttachment();
  }

  if (!!request.hasIsWorkOrderNotify()) {
    body["IsWorkOrderNotify"] = request.isWorkOrderNotify();
  }

  if (!!request.hasNotifyId()) {
    body["NotifyId"] = request.notifyId();
  }

  if (!!request.hasOperateRemark()) {
    body["OperateRemark"] = request.operateRemark();
  }

  if (!!request.hasOperateType()) {
    body["OperateType"] = request.operateType();
  }

  if (!!request.hasOperator()) {
    body["Operator"] = request._operator();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  if (!!request.hasUpgradeOwnerId()) {
    body["UpgradeOwnerId"] = request.upgradeOwnerId();
  }

  if (!!request.hasWorkOrderDetail()) {
    body["WorkOrderDetail"] = request.workOrderDetail();
  }

  if (!!request.hasWorkOrderName()) {
    body["WorkOrderName"] = request.workOrderName();
  }

  if (!!request.hasWorkOrderStatus()) {
    body["WorkOrderStatus"] = request.workOrderStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DisposeServiceWorkOrder"},
    {"version" , "2016-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisposeServiceWorkOrderResponse>();
}

/**
 * @summary Process Service Work Order
 *
 * @param request DisposeServiceWorkOrderRequest
 * @return DisposeServiceWorkOrderResponse
 */
DisposeServiceWorkOrderResponse Client::disposeServiceWorkOrder(const DisposeServiceWorkOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disposeServiceWorkOrderWithOptions(request, runtime);
}

/**
 * @summary Handle Alert Work Order
 *
 * @param tmpReq DisposeWorkTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisposeWorkTaskResponse
 */
DisposeWorkTaskResponse Client::disposeWorkTaskWithOptions(const DisposeWorkTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DisposeWorkTaskShrinkRequest request = DisposeWorkTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasWorkTaskAnalysisResults()) {
    request.setWorkTaskAnalysisResultsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.workTaskAnalysisResults(), "WorkTaskAnalysisResults", "json"));
  }

  json body = {};
  if (!!request.hasOperator()) {
    body["Operator"] = request._operator();
  }

  if (!!request.hasOptRemark()) {
    body["OptRemark"] = request.optRemark();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.status();
  }

  if (!!request.hasTaskIds()) {
    body["TaskIds"] = request.taskIds();
  }

  if (!!request.hasWorkTaskAnalysisResultsShrink()) {
    body["WorkTaskAnalysisResults"] = request.workTaskAnalysisResultsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DisposeWorkTask"},
    {"version" , "2016-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisposeWorkTaskResponse>();
}

/**
 * @summary Handle Alert Work Order
 *
 * @param request DisposeWorkTaskRequest
 * @return DisposeWorkTaskResponse
 */
DisposeWorkTaskResponse Client::disposeWorkTask(const DisposeWorkTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disposeWorkTaskWithOptions(request, runtime);
}

/**
 * @summary Query Alarm Details
 *
 * @param request GetAlarmDetailByIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAlarmDetailByIdResponse
 */
GetAlarmDetailByIdResponse Client::getAlarmDetailByIdWithOptions(const GetAlarmDetailByIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetAlarmDetailById"},
    {"version" , "2016-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAlarmDetailByIdResponse>();
}

/**
 * @summary Query Alarm Details
 *
 * @param request GetAlarmDetailByIdRequest
 * @return GetAlarmDetailByIdResponse
 */
GetAlarmDetailByIdResponse Client::getAlarmDetailById(const GetAlarmDetailByIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAlarmDetailByIdWithOptions(request, runtime);
}

/**
 * @summary Trend of Attacked Asset Convergence
 *
 * @param request GetAttackedAssetDealRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAttackedAssetDealResponse
 */
GetAttackedAssetDealResponse Client::getAttackedAssetDealWithOptions(const GetAttackedAssetDealRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDateType()) {
    body["DateType"] = request.dateType();
  }

  if (!!request.hasEndDate()) {
    body["EndDate"] = request.endDate();
  }

  if (!!request.hasStartDate()) {
    body["StartDate"] = request.startDate();
  }

  if (!!request.hasSuspEventSource()) {
    body["SuspEventSource"] = request.suspEventSource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetAttackedAssetDeal"},
    {"version" , "2016-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAttackedAssetDealResponse>();
}

/**
 * @summary Trend of Attacked Asset Convergence
 *
 * @param request GetAttackedAssetDealRequest
 * @return GetAttackedAssetDealResponse
 */
GetAttackedAssetDealResponse Client::getAttackedAssetDeal(const GetAttackedAssetDealRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAttackedAssetDealWithOptions(request, runtime);
}

/**
 * @summary Compliance Risk Convergence Trend
 *
 * @param request GetBaselineSummaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBaselineSummaryResponse
 */
GetBaselineSummaryResponse Client::getBaselineSummaryWithOptions(const GetBaselineSummaryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDateType()) {
    body["DateType"] = request.dateType();
  }

  if (!!request.hasEndDate()) {
    body["EndDate"] = request.endDate();
  }

  if (!!request.hasStartDate()) {
    body["StartDate"] = request.startDate();
  }

  if (!!request.hasSuspEventSource()) {
    body["SuspEventSource"] = request.suspEventSource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetBaselineSummary"},
    {"version" , "2016-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetBaselineSummaryResponse>();
}

/**
 * @summary Compliance Risk Convergence Trend
 *
 * @param request GetBaselineSummaryRequest
 * @return GetBaselineSummaryResponse
 */
GetBaselineSummaryResponse Client::getBaselineSummary(const GetBaselineSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBaselineSummaryWithOptions(request, runtime);
}

/**
 * @summary Get Console Score
 *
 * @param request GetConsoleScoreRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetConsoleScoreResponse
 */
GetConsoleScoreResponse Client::getConsoleScoreWithOptions(const GetConsoleScoreRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDateType()) {
    body["DateType"] = request.dateType();
  }

  if (!!request.hasEndDate()) {
    body["EndDate"] = request.endDate();
  }

  if (!!request.hasStartDate()) {
    body["StartDate"] = request.startDate();
  }

  if (!!request.hasSuspEventSource()) {
    body["SuspEventSource"] = request.suspEventSource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetConsoleScore"},
    {"version" , "2016-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetConsoleScoreResponse>();
}

/**
 * @summary Get Console Score
 *
 * @param request GetConsoleScoreRequest
 * @return GetConsoleScoreResponse
 */
GetConsoleScoreResponse Client::getConsoleScore(const GetConsoleScoreRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getConsoleScoreWithOptions(request, runtime);
}

/**
 * @summary Query Risk Details
 *
 * @param request GetDetailByIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDetailByIdResponse
 */
GetDetailByIdResponse Client::getDetailByIdWithOptions(const GetDetailByIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetDetailById"},
    {"version" , "2016-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDetailByIdResponse>();
}

/**
 * @summary Query Risk Details
 *
 * @param request GetDetailByIdRequest
 * @return GetDetailByIdResponse
 */
GetDetailByIdResponse Client::getDetailById(const GetDetailByIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDetailByIdWithOptions(request, runtime);
}

/**
 * @summary Single Service Report Download
 *
 * @param request GetDocumentDownloadUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDocumentDownloadUrlResponse
 */
GetDocumentDownloadUrlResponse Client::getDocumentDownloadUrlWithOptions(const GetDocumentDownloadUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFileKey()) {
    body["FileKey"] = request.fileKey();
  }

  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasReportType()) {
    body["ReportType"] = request.reportType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetDocumentDownloadUrl"},
    {"version" , "2016-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDocumentDownloadUrlResponse>();
}

/**
 * @summary Single Service Report Download
 *
 * @param request GetDocumentDownloadUrlRequest
 * @return GetDocumentDownloadUrlResponse
 */
GetDocumentDownloadUrlResponse Client::getDocumentDownloadUrl(const GetDocumentDownloadUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDocumentDownloadUrlWithOptions(request, runtime);
}

/**
 * @summary Service Report Query
 *
 * @param request GetDocumentPageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDocumentPageResponse
 */
GetDocumentPageResponse Client::getDocumentPageWithOptions(const GetDocumentPageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCurrentPage()) {
    body["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasDeliveredBy()) {
    body["DeliveredBy"] = request.deliveredBy();
  }

  if (!!request.hasDocumentName()) {
    body["DocumentName"] = request.documentName();
  }

  if (!!request.hasDocumentType()) {
    body["DocumentType"] = request.documentType();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasReportType()) {
    body["ReportType"] = request.reportType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetDocumentPage"},
    {"version" , "2016-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDocumentPageResponse>();
}

/**
 * @summary Service Report Query
 *
 * @param request GetDocumentPageRequest
 * @return GetDocumentPageResponse
 */
GetDocumentPageResponse Client::getDocumentPage(const GetDocumentPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDocumentPageWithOptions(request, runtime);
}

/**
 * @summary Service Report Home Page Statistics Acquisition
 *
 * @param request GetDocumentSummaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDocumentSummaryResponse
 */
GetDocumentSummaryResponse Client::getDocumentSummaryWithOptions(const GetDocumentSummaryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasReportType()) {
    body["ReportType"] = request.reportType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetDocumentSummary"},
    {"version" , "2016-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDocumentSummaryResponse>();
}

/**
 * @summary Service Report Home Page Statistics Acquisition
 *
 * @param request GetDocumentSummaryRequest
 * @return GetDocumentSummaryResponse
 */
GetDocumentSummaryResponse Client::getDocumentSummary(const GetDocumentSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDocumentSummaryWithOptions(request, runtime);
}

/**
 * @summary Get Recently Uploaded Service Reports
 *
 * @param request GetRecentDocumentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRecentDocumentResponse
 */
GetRecentDocumentResponse Client::getRecentDocumentWithOptions(const GetRecentDocumentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDateType()) {
    body["DateType"] = request.dateType();
  }

  if (!!request.hasEndDate()) {
    body["EndDate"] = request.endDate();
  }

  if (!!request.hasStartDate()) {
    body["StartDate"] = request.startDate();
  }

  if (!!request.hasSuspEventSource()) {
    body["SuspEventSource"] = request.suspEventSource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetRecentDocument"},
    {"version" , "2016-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRecentDocumentResponse>();
}

/**
 * @summary Get Recently Uploaded Service Reports
 *
 * @param request GetRecentDocumentRequest
 * @return GetRecentDocumentResponse
 */
GetRecentDocumentResponse Client::getRecentDocument(const GetRecentDocumentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRecentDocumentWithOptions(request, runtime);
}

/**
 * @summary Get Safety Coverage
 *
 * @param request GetSafetyCoverRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSafetyCoverResponse
 */
GetSafetyCoverResponse Client::getSafetyCoverWithOptions(const GetSafetyCoverRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDateType()) {
    body["DateType"] = request.dateType();
  }

  if (!!request.hasEndDate()) {
    body["EndDate"] = request.endDate();
  }

  if (!!request.hasStartDate()) {
    body["StartDate"] = request.startDate();
  }

  if (!!request.hasSuspEventSource()) {
    body["SuspEventSource"] = request.suspEventSource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetSafetyCover"},
    {"version" , "2016-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSafetyCoverResponse>();
}

/**
 * @summary Get Safety Coverage
 *
 * @param request GetSafetyCoverRequest
 * @return GetSafetyCoverResponse
 */
GetSafetyCoverResponse Client::getSafetyCover(const GetSafetyCoverRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSafetyCoverWithOptions(request, runtime);
}

/**
 * @summary Get SOW List
 *
 * @param request GetSowListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSowListResponse
 */
GetSowListResponse Client::getSowListWithOptions(const GetSowListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDateType()) {
    body["DateType"] = request.dateType();
  }

  if (!!request.hasEndDate()) {
    body["EndDate"] = request.endDate();
  }

  if (!!request.hasStartDate()) {
    body["StartDate"] = request.startDate();
  }

  if (!!request.hasSuspEventSource()) {
    body["SuspEventSource"] = request.suspEventSource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetSowList"},
    {"version" , "2016-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSowListResponse>();
}

/**
 * @summary Get SOW List
 *
 * @param request GetSowListRequest
 * @return GetSowListResponse
 */
GetSowListResponse Client::getSowList(const GetSowListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSowListWithOptions(request, runtime);
}

/**
 * @summary Alarm Disposal Query
 *
 * @param request GetSuspEventPageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSuspEventPageResponse
 */
GetSuspEventPageResponse Client::getSuspEventPageWithOptions(const GetSuspEventPageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAlarmEndTime()) {
    body["AlarmEndTime"] = request.alarmEndTime();
  }

  if (!!request.hasAlarmStartTime()) {
    body["AlarmStartTime"] = request.alarmStartTime();
  }

  if (!!request.hasCurrentPage()) {
    body["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasSource()) {
    body["Source"] = request.source();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetSuspEventPage"},
    {"version" , "2016-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSuspEventPageResponse>();
}

/**
 * @summary Alarm Disposal Query
 *
 * @param request GetSuspEventPageRequest
 * @return GetSuspEventPageResponse
 */
GetSuspEventPageResponse Client::getSuspEventPage(const GetSuspEventPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSuspEventPageWithOptions(request, runtime);
}

/**
 * @summary Get Alert Statistics
 *
 * @param request GetSuspEventSummaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSuspEventSummaryResponse
 */
GetSuspEventSummaryResponse Client::getSuspEventSummaryWithOptions(const GetSuspEventSummaryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDateType()) {
    body["DateType"] = request.dateType();
  }

  if (!!request.hasEndDate()) {
    body["EndDate"] = request.endDate();
  }

  if (!!request.hasStartDate()) {
    body["StartDate"] = request.startDate();
  }

  if (!!request.hasSuspEventSource()) {
    body["SuspEventSource"] = request.suspEventSource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetSuspEventSummary"},
    {"version" , "2016-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSuspEventSummaryResponse>();
}

/**
 * @summary Get Alert Statistics
 *
 * @param request GetSuspEventSummaryRequest
 * @return GetSuspEventSummaryResponse
 */
GetSuspEventSummaryResponse Client::getSuspEventSummary(const GetSuspEventSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSuspEventSummaryWithOptions(request, runtime);
}

/**
 * @summary Alarm Page Statistics
 *
 * @param request GetSuspPageSummaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSuspPageSummaryResponse
 */
GetSuspPageSummaryResponse Client::getSuspPageSummaryWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetSuspPageSummary"},
    {"version" , "2016-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSuspPageSummaryResponse>();
}

/**
 * @summary Alarm Page Statistics
 *
 * @return GetSuspPageSummaryResponse
 */
GetSuspPageSummaryResponse Client::getSuspPageSummary() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSuspPageSummaryWithOptions(runtime);
}

/**
 * @summary Query User Activation Status
 *
 * @param request GetUserStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserStatusResponse
 */
GetUserStatusResponse Client::getUserStatusWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetUserStatus"},
    {"version" , "2016-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserStatusResponse>();
}

/**
 * @summary Query User Activation Status
 *
 * @return GetUserStatusResponse
 */
GetUserStatusResponse Client::getUserStatus() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserStatusWithOptions(runtime);
}

/**
 * @summary Risk Query
 *
 * @param request GetVulItemPageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVulItemPageResponse
 */
GetVulItemPageResponse Client::getVulItemPageWithOptions(const GetVulItemPageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAliasName()) {
    body["AliasName"] = request.aliasName();
  }

  if (!!request.hasCurrentPage()) {
    body["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasDealed()) {
    body["Dealed"] = request.dealed();
  }

  if (!!request.hasLevel()) {
    body["Level"] = request.level();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasScanType()) {
    body["ScanType"] = request.scanType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetVulItemPage"},
    {"version" , "2016-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetVulItemPageResponse>();
}

/**
 * @summary Risk Query
 *
 * @param request GetVulItemPageRequest
 * @return GetVulItemPageResponse
 */
GetVulItemPageResponse Client::getVulItemPage(const GetVulItemPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getVulItemPageWithOptions(request, runtime);
}

/**
 * @summary Query processed details
 *
 * @param request GetVulListByIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVulListByIdResponse
 */
GetVulListByIdResponse Client::getVulListByIdWithOptions(const GetVulListByIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCurrentPage()) {
    body["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasDealed()) {
    body["Dealed"] = request.dealed();
  }

  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasNecessity()) {
    body["Necessity"] = request.necessity();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasRemark()) {
    body["Remark"] = request.remark();
  }

  if (!!request.hasUuids()) {
    body["Uuids"] = request.uuids();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetVulListById"},
    {"version" , "2016-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetVulListByIdResponse>();
}

/**
 * @summary Query processed details
 *
 * @param request GetVulListByIdRequest
 * @return GetVulListByIdResponse
 */
GetVulListByIdResponse Client::getVulListById(const GetVulListByIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getVulListByIdWithOptions(request, runtime);
}

/**
 * @summary Risk Page Statistics
 *
 * @param request GetVulPageSummaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVulPageSummaryResponse
 */
GetVulPageSummaryResponse Client::getVulPageSummaryWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetVulPageSummary"},
    {"version" , "2016-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetVulPageSummaryResponse>();
}

/**
 * @summary Risk Page Statistics
 *
 * @return GetVulPageSummaryResponse
 */
GetVulPageSummaryResponse Client::getVulPageSummary() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getVulPageSummaryWithOptions(runtime);
}

/**
 * @summary Get Risk Statistics
 *
 * @param request GetVulSummaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVulSummaryResponse
 */
GetVulSummaryResponse Client::getVulSummaryWithOptions(const GetVulSummaryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDateType()) {
    body["DateType"] = request.dateType();
  }

  if (!!request.hasEndDate()) {
    body["EndDate"] = request.endDate();
  }

  if (!!request.hasStartDate()) {
    body["StartDate"] = request.startDate();
  }

  if (!!request.hasSuspEventSource()) {
    body["SuspEventSource"] = request.suspEventSource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetVulSummary"},
    {"version" , "2016-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetVulSummaryResponse>();
}

/**
 * @summary Get Risk Statistics
 *
 * @param request GetVulSummaryRequest
 * @return GetVulSummaryResponse
 */
GetVulSummaryResponse Client::getVulSummary(const GetVulSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getVulSummaryWithOptions(request, runtime);
}

/**
 * @summary Get the First Line Work Order Statistics
 *
 * @param request GetWorkTaskSummaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWorkTaskSummaryResponse
 */
GetWorkTaskSummaryResponse Client::getWorkTaskSummaryWithOptions(const GetWorkTaskSummaryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDateType()) {
    body["DateType"] = request.dateType();
  }

  if (!!request.hasEndDate()) {
    body["EndDate"] = request.endDate();
  }

  if (!!request.hasStartDate()) {
    body["StartDate"] = request.startDate();
  }

  if (!!request.hasSuspEventSource()) {
    body["SuspEventSource"] = request.suspEventSource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetWorkTaskSummary"},
    {"version" , "2016-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWorkTaskSummaryResponse>();
}

/**
 * @summary Get the First Line Work Order Statistics
 *
 * @param request GetWorkTaskSummaryRequest
 * @return GetWorkTaskSummaryResponse
 */
GetWorkTaskSummaryResponse Client::getWorkTaskSummary(const GetWorkTaskSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getWorkTaskSummaryWithOptions(request, runtime);
}

/**
 * @summary Service Customer Information Query
 *
 * @param request PageServiceCustomerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PageServiceCustomerResponse
 */
PageServiceCustomerResponse Client::pageServiceCustomerWithOptions(const PageServiceCustomerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAuthStatus()) {
    body["AuthStatus"] = request.authStatus();
  }

  if (!!request.hasCmAuthStatus()) {
    body["CmAuthStatus"] = request.cmAuthStatus();
  }

  if (!!request.hasCurrentPage()) {
    body["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasMonitorAuthStatus()) {
    body["MonitorAuthStatus"] = request.monitorAuthStatus();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "PageServiceCustomer"},
    {"version" , "2016-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PageServiceCustomerResponse>();
}

/**
 * @summary Service Customer Information Query
 *
 * @param request PageServiceCustomerRequest
 * @return PageServiceCustomerResponse
 */
PageServiceCustomerResponse Client::pageServiceCustomer(const PageServiceCustomerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pageServiceCustomerWithOptions(request, runtime);
}

/**
 * @summary Send Custom Alert Event
 *
 * @param request SendCustomEventRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendCustomEventResponse
 */
SendCustomEventResponse Client::sendCustomEventWithOptions(const SendCustomEventRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCustomerId()) {
    body["CustomerId"] = request.customerId();
  }

  if (!!request.hasDataSource()) {
    body["DataSource"] = request.dataSource();
  }

  if (!!request.hasEventDescription()) {
    body["EventDescription"] = request.eventDescription();
  }

  if (!!request.hasEventDetails()) {
    body["EventDetails"] = request.eventDetails();
  }

  if (!!request.hasEventMarkdown()) {
    body["EventMarkdown"] = request.eventMarkdown();
  }

  if (!!request.hasEventName()) {
    body["EventName"] = request.eventName();
  }

  if (!!request.hasEventType()) {
    body["EventType"] = request.eventType();
  }

  if (!!request.hasFindTime()) {
    body["FindTime"] = request.findTime();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInstanceName()) {
    body["InstanceName"] = request.instanceName();
  }

  if (!!request.hasIsSend()) {
    body["IsSend"] = request.isSend();
  }

  if (!!request.hasLevel()) {
    body["Level"] = request.level();
  }

  if (!!request.hasOccurrenceTime()) {
    body["OccurrenceTime"] = request.occurrenceTime();
  }

  if (!!request.hasOwnerId()) {
    body["OwnerId"] = request.ownerId();
  }

  if (!!request.hasProduct()) {
    body["Product"] = request.product();
  }

  if (!!request.hasUniqueId()) {
    body["UniqueId"] = request.uniqueId();
  }

  if (!!request.hasUuid()) {
    body["Uuid"] = request.uuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SendCustomEvent"},
    {"version" , "2016-12-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendCustomEventResponse>();
}

/**
 * @summary Send Custom Alert Event
 *
 * @param request SendCustomEventRequest
 * @return SendCustomEventResponse
 */
SendCustomEventResponse Client::sendCustomEvent(const SendCustomEventRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendCustomEventWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Mssp20161228