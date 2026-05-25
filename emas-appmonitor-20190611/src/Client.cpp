#include <darabonba/Core.hpp>
#include <alibabacloud/EmasAppmonitor20190611.hpp>
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
using namespace AlibabaCloud::EmasAppmonitor20190611::Models;
namespace AlibabaCloud
{
namespace EmasAppmonitor20190611
{

AlibabaCloud::EmasAppmonitor20190611::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("emas-appmonitor", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary CreateTlogTask
 *
 * @param request CreateTlogTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTlogTaskResponse
 */
CreateTlogTaskResponse Client::createTlogTaskWithOptions(const CreateTlogTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAliYunCurrentPk()) {
    body["AliYunCurrentPk"] = request.getAliYunCurrentPk();
  }

  if (!!request.hasAliYunMainPk()) {
    body["AliYunMainPk"] = request.getAliYunMainPk();
  }

  if (!!request.hasAliYunName()) {
    body["AliYunName"] = request.getAliYunName();
  }

  if (!!request.hasAppKey()) {
    body["AppKey"] = request.getAppKey();
  }

  if (!!request.hasAppVersion()) {
    body["AppVersion"] = request.getAppVersion();
  }

  if (!!request.hasBeginDate()) {
    body["BeginDate"] = request.getBeginDate();
  }

  if (!!request.hasBrand()) {
    body["Brand"] = request.getBrand();
  }

  if (!!request.hasCity()) {
    body["City"] = request.getCity();
  }

  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasCollectionNums()) {
    body["CollectionNums"] = request.getCollectionNums();
  }

  if (!!request.hasDays()) {
    body["Days"] = request.getDays();
  }

  if (!!request.hasDeviceJson()) {
    body["DeviceJson"] = request.getDeviceJson();
  }

  if (!!request.hasEndDate()) {
    body["EndDate"] = request.getEndDate();
  }

  if (!!request.hasErrorType()) {
    body["ErrorType"] = request.getErrorType();
  }

  if (!!request.hasModel()) {
    body["Model"] = request.getModel();
  }

  if (!!request.hasNotifySettingJson()) {
    body["NotifySettingJson"] = request.getNotifySettingJson();
  }

  if (!!request.hasOs()) {
    body["Os"] = request.getOs();
  }

  if (!!request.hasOsVersion()) {
    body["OsVersion"] = request.getOsVersion();
  }

  if (!!request.hasSourceType()) {
    body["SourceType"] = request.getSourceType();
  }

  if (!!request.hasTaskName()) {
    body["TaskName"] = request.getTaskName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateTlogTask"},
    {"version" , "2019-06-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTlogTaskResponse>();
}

/**
 * @summary CreateTlogTask
 *
 * @param request CreateTlogTaskRequest
 * @return CreateTlogTaskResponse
 */
CreateTlogTaskResponse Client::createTlogTask(const CreateTlogTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTlogTaskWithOptions(request, runtime);
}

/**
 * @summary 获取错误事件详情
 *
 * @param request GetErrorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetErrorResponse
 */
GetErrorResponse Client::getErrorWithOptions(const GetErrorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppKey()) {
    body["AppKey"] = request.getAppKey();
  }

  if (!!request.hasBizModule()) {
    body["BizModule"] = request.getBizModule();
  }

  if (!!request.hasClientTime()) {
    body["ClientTime"] = request.getClientTime();
  }

  if (!!request.hasDid()) {
    body["Did"] = request.getDid();
  }

  if (!!request.hasDigestHash()) {
    body["DigestHash"] = request.getDigestHash();
  }

  if (!!request.hasForce()) {
    body["Force"] = request.getForce();
  }

  if (!!request.hasOs()) {
    body["Os"] = request.getOs();
  }

  if (!!request.hasUuid()) {
    body["Uuid"] = request.getUuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetError"},
    {"version" , "2019-06-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetErrorResponse>();
}

/**
 * @summary 获取错误事件详情
 *
 * @param request GetErrorRequest
 * @return GetErrorResponse
 */
GetErrorResponse Client::getError(const GetErrorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getErrorWithOptions(request, runtime);
}

/**
 * @summary 获取某一聚合错误下所有的错误事件列表
 *
 * @param tmpReq GetErrorsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetErrorsResponse
 */
GetErrorsResponse Client::getErrorsWithOptions(const GetErrorsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetErrorsShrinkRequest request = GetErrorsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFilter()) {
    request.setFilterShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFilter(), "Filter", "json"));
  }

  json body = {};
  if (!!request.hasAppKey()) {
    body["AppKey"] = request.getAppKey();
  }

  if (!!request.hasBizModule()) {
    body["BizModule"] = request.getBizModule();
  }

  if (!!request.hasDigestHash()) {
    body["DigestHash"] = request.getDigestHash();
  }

  if (!!request.hasFilterShrink()) {
    body["Filter"] = request.getFilterShrink();
  }

  if (!!request.hasOs()) {
    body["Os"] = request.getOs();
  }

  if (!!request.hasPageIndex()) {
    body["PageIndex"] = request.getPageIndex();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  json bodyFlat = {};
  if (!!request.hasTimeRange()) {
    bodyFlat["TimeRange"] = request.getTimeRange();
  }

  if (!!request.hasUtdid()) {
    body["Utdid"] = request.getUtdid();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetErrors"},
    {"version" , "2019-06-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetErrorsResponse>();
}

/**
 * @summary 获取某一聚合错误下所有的错误事件列表
 *
 * @param request GetErrorsRequest
 * @return GetErrorsResponse
 */
GetErrorsResponse Client::getErrors(const GetErrorsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getErrorsWithOptions(request, runtime);
}

/**
 * @summary 获取聚合错误详情
 *
 * @param tmpReq GetIssueRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetIssueResponse
 */
GetIssueResponse Client::getIssueWithOptions(const GetIssueRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetIssueShrinkRequest request = GetIssueShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFilter()) {
    request.setFilterShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFilter(), "Filter", "json"));
  }

  json body = {};
  if (!!request.hasAppKey()) {
    body["AppKey"] = request.getAppKey();
  }

  if (!!request.hasBizModule()) {
    body["BizModule"] = request.getBizModule();
  }

  if (!!request.hasDigestHash()) {
    body["DigestHash"] = request.getDigestHash();
  }

  if (!!request.hasFilterShrink()) {
    body["Filter"] = request.getFilterShrink();
  }

  if (!!request.hasOs()) {
    body["Os"] = request.getOs();
  }

  json bodyFlat = {};
  if (!!request.hasTimeRange()) {
    bodyFlat["TimeRange"] = request.getTimeRange();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetIssue"},
    {"version" , "2019-06-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetIssueResponse>();
}

/**
 * @summary 获取聚合错误详情
 *
 * @param request GetIssueRequest
 * @return GetIssueResponse
 */
GetIssueResponse Client::getIssue(const GetIssueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getIssueWithOptions(request, runtime);
}

/**
 * @summary 获取聚合错误列表
 *
 * @param tmpReq GetIssuesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetIssuesResponse
 */
GetIssuesResponse Client::getIssuesWithOptions(const GetIssuesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetIssuesShrinkRequest request = GetIssuesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFilter()) {
    request.setFilterShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFilter(), "Filter", "json"));
  }

  json body = {};
  if (!!request.hasAppKey()) {
    body["AppKey"] = request.getAppKey();
  }

  if (!!request.hasBizModule()) {
    body["BizModule"] = request.getBizModule();
  }

  if (!!request.hasFilterShrink()) {
    body["Filter"] = request.getFilterShrink();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasOrderBy()) {
    body["OrderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderType()) {
    body["OrderType"] = request.getOrderType();
  }

  if (!!request.hasOs()) {
    body["Os"] = request.getOs();
  }

  if (!!request.hasPageIndex()) {
    body["PageIndex"] = request.getPageIndex();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
  }

  json bodyFlat = {};
  if (!!request.hasTimeRange()) {
    bodyFlat["TimeRange"] = request.getTimeRange();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetIssues"},
    {"version" , "2019-06-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetIssuesResponse>();
}

/**
 * @summary 获取聚合错误列表
 *
 * @param request GetIssuesRequest
 * @return GetIssuesResponse
 */
GetIssuesResponse Client::getIssues(const GetIssuesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getIssuesWithOptions(request, runtime);
}

/**
 * @summary 获取符号表文件列表
 *
 * @param request GetSymbolicFilesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSymbolicFilesResponse
 */
GetSymbolicFilesResponse Client::getSymbolicFilesWithOptions(const GetSymbolicFilesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppKey()) {
    body["AppKey"] = request.getAppKey();
  }

  if (!!request.hasAppVersion()) {
    body["AppVersion"] = request.getAppVersion();
  }

  if (!!request.hasBuildId()) {
    body["BuildId"] = request.getBuildId();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.getEndTime();
  }

  if (!!request.hasExportStatus()) {
    body["ExportStatus"] = request.getExportStatus();
  }

  if (!!request.hasFileName()) {
    body["FileName"] = request.getFileName();
  }

  if (!!request.hasFileType()) {
    body["FileType"] = request.getFileType();
  }

  if (!!request.hasOs()) {
    body["Os"] = request.getOs();
  }

  if (!!request.hasPageIndex()) {
    body["PageIndex"] = request.getPageIndex();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.getStartTime();
  }

  if (!!request.hasUuid()) {
    body["Uuid"] = request.getUuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetSymbolicFiles"},
    {"version" , "2019-06-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSymbolicFilesResponse>();
}

/**
 * @summary 获取符号表文件列表
 *
 * @param request GetSymbolicFilesRequest
 * @return GetSymbolicFilesResponse
 */
GetSymbolicFilesResponse Client::getSymbolicFiles(const GetSymbolicFilesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSymbolicFilesWithOptions(request, runtime);
}

/**
 * @summary GetTlogCollectList
 *
 * @param request GetTlogCollectListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTlogCollectListResponse
 */
GetTlogCollectListResponse Client::getTlogCollectListWithOptions(const GetTlogCollectListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppKey()) {
    body["AppKey"] = request.getAppKey();
  }

  if (!!request.hasAppVersion()) {
    body["AppVersion"] = request.getAppVersion();
  }

  if (!!request.hasAuthor()) {
    body["Author"] = request.getAuthor();
  }

  if (!!request.hasBeginDate()) {
    body["BeginDate"] = request.getBeginDate();
  }

  if (!!request.hasCity()) {
    body["City"] = request.getCity();
  }

  if (!!request.hasCreateBeginDate()) {
    body["CreateBeginDate"] = request.getCreateBeginDate();
  }

  if (!!request.hasCreateEndDate()) {
    body["CreateEndDate"] = request.getCreateEndDate();
  }

  if (!!request.hasDeviceId()) {
    body["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasEndDate()) {
    body["EndDate"] = request.getEndDate();
  }

  if (!!request.hasKeyword()) {
    body["Keyword"] = request.getKeyword();
  }

  if (!!request.hasModel()) {
    body["Model"] = request.getModel();
  }

  if (!!request.hasOs()) {
    body["Os"] = request.getOs();
  }

  if (!!request.hasOsVersion()) {
    body["OsVersion"] = request.getOsVersion();
  }

  if (!!request.hasPageIndex()) {
    body["PageIndex"] = request.getPageIndex();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPositiveComment()) {
    body["PositiveComment"] = request.getPositiveComment();
  }

  if (!!request.hasSourceType()) {
    body["SourceType"] = request.getSourceType();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
  }

  if (!!request.hasUpdateBeginDate()) {
    body["UpdateBeginDate"] = request.getUpdateBeginDate();
  }

  if (!!request.hasUpdateEndDate()) {
    body["UpdateEndDate"] = request.getUpdateEndDate();
  }

  if (!!request.hasUserNick()) {
    body["UserNick"] = request.getUserNick();
  }

  if (!!request.hasUtdid()) {
    body["Utdid"] = request.getUtdid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetTlogCollectList"},
    {"version" , "2019-06-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTlogCollectListResponse>();
}

/**
 * @summary GetTlogCollectList
 *
 * @param request GetTlogCollectListRequest
 * @return GetTlogCollectListResponse
 */
GetTlogCollectListResponse Client::getTlogCollectList(const GetTlogCollectListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTlogCollectListWithOptions(request, runtime);
}

/**
 * @summary TlogDeviceInfo
 *
 * @param request GetTlogDeviceInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTlogDeviceInfoResponse
 */
GetTlogDeviceInfoResponse Client::getTlogDeviceInfoWithOptions(const GetTlogDeviceInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppKey()) {
    body["AppKey"] = request.getAppKey();
  }

  if (!!request.hasDeviceId()) {
    body["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasOs()) {
    body["Os"] = request.getOs();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetTlogDeviceInfo"},
    {"version" , "2019-06-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTlogDeviceInfoResponse>();
}

/**
 * @summary TlogDeviceInfo
 *
 * @param request GetTlogDeviceInfoRequest
 * @return GetTlogDeviceInfoResponse
 */
GetTlogDeviceInfoResponse Client::getTlogDeviceInfo(const GetTlogDeviceInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTlogDeviceInfoWithOptions(request, runtime);
}

/**
 * @summary GetTlogDeviceList
 *
 * @param request GetTlogDeviceListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTlogDeviceListResponse
 */
GetTlogDeviceListResponse Client::getTlogDeviceListWithOptions(const GetTlogDeviceListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppKey()) {
    body["AppKey"] = request.getAppKey();
  }

  if (!!request.hasAppVersion()) {
    body["AppVersion"] = request.getAppVersion();
  }

  if (!!request.hasBeginDate()) {
    body["BeginDate"] = request.getBeginDate();
  }

  if (!!request.hasBrand()) {
    body["Brand"] = request.getBrand();
  }

  if (!!request.hasCity()) {
    body["City"] = request.getCity();
  }

  if (!!request.hasCreateBeginDate()) {
    body["CreateBeginDate"] = request.getCreateBeginDate();
  }

  if (!!request.hasCreateEndDate()) {
    body["CreateEndDate"] = request.getCreateEndDate();
  }

  if (!!request.hasEndDate()) {
    body["EndDate"] = request.getEndDate();
  }

  if (!!request.hasKeyword()) {
    body["Keyword"] = request.getKeyword();
  }

  if (!!request.hasModel()) {
    body["Model"] = request.getModel();
  }

  if (!!request.hasOs()) {
    body["Os"] = request.getOs();
  }

  if (!!request.hasOsVersion()) {
    body["OsVersion"] = request.getOsVersion();
  }

  if (!!request.hasPageIndex()) {
    body["PageIndex"] = request.getPageIndex();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasUpdateBeginDate()) {
    body["UpdateBeginDate"] = request.getUpdateBeginDate();
  }

  if (!!request.hasUpdateEndDate()) {
    body["UpdateEndDate"] = request.getUpdateEndDate();
  }

  if (!!request.hasUserNick()) {
    body["UserNick"] = request.getUserNick();
  }

  if (!!request.hasUtdid()) {
    body["Utdid"] = request.getUtdid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetTlogDeviceList"},
    {"version" , "2019-06-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTlogDeviceListResponse>();
}

/**
 * @summary GetTlogDeviceList
 *
 * @param request GetTlogDeviceListRequest
 * @return GetTlogDeviceListResponse
 */
GetTlogDeviceListResponse Client::getTlogDeviceList(const GetTlogDeviceListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTlogDeviceListWithOptions(request, runtime);
}

/**
 * @summary GetTlogTaskCollections
 *
 * @param request GetTlogTaskCollectionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTlogTaskCollectionsResponse
 */
GetTlogTaskCollectionsResponse Client::getTlogTaskCollectionsWithOptions(const GetTlogTaskCollectionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppKey()) {
    body["AppKey"] = request.getAppKey();
  }

  if (!!request.hasOs()) {
    body["Os"] = request.getOs();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetTlogTaskCollections"},
    {"version" , "2019-06-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTlogTaskCollectionsResponse>();
}

/**
 * @summary GetTlogTaskCollections
 *
 * @param request GetTlogTaskCollectionsRequest
 * @return GetTlogTaskCollectionsResponse
 */
GetTlogTaskCollectionsResponse Client::getTlogTaskCollections(const GetTlogTaskCollectionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTlogTaskCollectionsWithOptions(request, runtime);
}

/**
 * @summary GetTlogTaskInfo
 *
 * @param request GetTlogTaskInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTlogTaskInfoResponse
 */
GetTlogTaskInfoResponse Client::getTlogTaskInfoWithOptions(const GetTlogTaskInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppKey()) {
    body["AppKey"] = request.getAppKey();
  }

  if (!!request.hasOs()) {
    body["Os"] = request.getOs();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetTlogTaskInfo"},
    {"version" , "2019-06-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTlogTaskInfoResponse>();
}

/**
 * @summary GetTlogTaskInfo
 *
 * @param request GetTlogTaskInfoRequest
 * @return GetTlogTaskInfoResponse
 */
GetTlogTaskInfoResponse Client::getTlogTaskInfo(const GetTlogTaskInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTlogTaskInfoWithOptions(request, runtime);
}

/**
 * @summary RequestUploadToken
 *
 * @param request RequestUploadTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RequestUploadTokenResponse
 */
RequestUploadTokenResponse Client::requestUploadTokenWithOptions(const RequestUploadTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppKey()) {
    body["AppKey"] = request.getAppKey();
  }

  if (!!request.hasOs()) {
    body["Os"] = request.getOs();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RequestUploadToken"},
    {"version" , "2019-06-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RequestUploadTokenResponse>();
}

/**
 * @summary RequestUploadToken
 *
 * @param request RequestUploadTokenRequest
 * @return RequestUploadTokenResponse
 */
RequestUploadTokenResponse Client::requestUploadToken(const RequestUploadTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return requestUploadTokenWithOptions(request, runtime);
}

/**
 * @summary SearchTlog
 *
 * @param request SearchTlogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchTlogResponse
 */
SearchTlogResponse Client::searchTlogWithOptions(const SearchTlogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppKey()) {
    body["AppKey"] = request.getAppKey();
  }

  if (!!request.hasBeginDate()) {
    body["BeginDate"] = request.getBeginDate();
  }

  if (!!request.hasDeviceId()) {
    body["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasEndDate()) {
    body["EndDate"] = request.getEndDate();
  }

  if (!!request.hasKeyword()) {
    body["Keyword"] = request.getKeyword();
  }

  if (!!request.hasLevelJson()) {
    body["LevelJson"] = request.getLevelJson();
  }

  if (!!request.hasOs()) {
    body["Os"] = request.getOs();
  }

  if (!!request.hasPageIndex()) {
    body["PageIndex"] = request.getPageIndex();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SearchTlog"},
    {"version" , "2019-06-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchTlogResponse>();
}

/**
 * @summary SearchTlog
 *
 * @param request SearchTlogRequest
 * @return SearchTlogResponse
 */
SearchTlogResponse Client::searchTlog(const SearchTlogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchTlogWithOptions(request, runtime);
}

/**
 * @summary SubmitSymbolic
 *
 * @param request SubmitSymbolicRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitSymbolicResponse
 */
SubmitSymbolicResponse Client::submitSymbolicWithOptions(const SubmitSymbolicRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppKey()) {
    body["AppKey"] = request.getAppKey();
  }

  if (!!request.hasAppVersion()) {
    body["AppVersion"] = request.getAppVersion();
  }

  if (!!request.hasBuildId()) {
    body["BuildId"] = request.getBuildId();
  }

  if (!!request.hasFileName()) {
    body["FileName"] = request.getFileName();
  }

  if (!!request.hasFilePath()) {
    body["FilePath"] = request.getFilePath();
  }

  if (!!request.hasFileType()) {
    body["FileType"] = request.getFileType();
  }

  if (!!request.hasOs()) {
    body["Os"] = request.getOs();
  }

  if (!!request.hasUuid()) {
    body["Uuid"] = request.getUuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SubmitSymbolic"},
    {"version" , "2019-06-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitSymbolicResponse>();
}

/**
 * @summary SubmitSymbolic
 *
 * @param request SubmitSymbolicRequest
 * @return SubmitSymbolicResponse
 */
SubmitSymbolicResponse Client::submitSymbolic(const SubmitSymbolicRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitSymbolicWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace EmasAppmonitor20190611