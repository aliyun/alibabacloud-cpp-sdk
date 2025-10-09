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
    body["AppKey"] = request.appKey();
  }

  if (!!request.hasBizModule()) {
    body["BizModule"] = request.bizModule();
  }

  if (!!request.hasClientTime()) {
    body["ClientTime"] = request.clientTime();
  }

  if (!!request.hasDid()) {
    body["Did"] = request.did();
  }

  if (!!request.hasDigestHash()) {
    body["DigestHash"] = request.digestHash();
  }

  if (!!request.hasForce()) {
    body["Force"] = request.force();
  }

  if (!!request.hasOs()) {
    body["Os"] = request.os();
  }

  if (!!request.hasUuid()) {
    body["Uuid"] = request.uuid();
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
    request.setFilterShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.filter(), "Filter", "json"));
  }

  json body = {};
  if (!!request.hasAppKey()) {
    body["AppKey"] = request.appKey();
  }

  if (!!request.hasBizModule()) {
    body["BizModule"] = request.bizModule();
  }

  if (!!request.hasDigestHash()) {
    body["DigestHash"] = request.digestHash();
  }

  if (!!request.hasFilterShrink()) {
    body["Filter"] = request.filterShrink();
  }

  if (!!request.hasOs()) {
    body["Os"] = request.os();
  }

  if (!!request.hasPageIndex()) {
    body["PageIndex"] = request.pageIndex();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  json bodyFlat = {};
  if (!!request.hasTimeRange()) {
    bodyFlat["TimeRange"] = request.timeRange();
  }

  if (!!request.hasUtdid()) {
    body["Utdid"] = request.utdid();
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
    request.setFilterShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.filter(), "Filter", "json"));
  }

  json body = {};
  if (!!request.hasAppKey()) {
    body["AppKey"] = request.appKey();
  }

  if (!!request.hasBizModule()) {
    body["BizModule"] = request.bizModule();
  }

  if (!!request.hasDigestHash()) {
    body["DigestHash"] = request.digestHash();
  }

  if (!!request.hasFilterShrink()) {
    body["Filter"] = request.filterShrink();
  }

  if (!!request.hasOs()) {
    body["Os"] = request.os();
  }

  json bodyFlat = {};
  if (!!request.hasTimeRange()) {
    bodyFlat["TimeRange"] = request.timeRange();
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
    request.setFilterShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.filter(), "Filter", "json"));
  }

  json body = {};
  if (!!request.hasAppKey()) {
    body["AppKey"] = request.appKey();
  }

  if (!!request.hasBizModule()) {
    body["BizModule"] = request.bizModule();
  }

  if (!!request.hasFilterShrink()) {
    body["Filter"] = request.filterShrink();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasOrderBy()) {
    body["OrderBy"] = request.orderBy();
  }

  if (!!request.hasOrderType()) {
    body["OrderType"] = request.orderType();
  }

  if (!!request.hasOs()) {
    body["Os"] = request.os();
  }

  if (!!request.hasPageIndex()) {
    body["PageIndex"] = request.pageIndex();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.status();
  }

  json bodyFlat = {};
  if (!!request.hasTimeRange()) {
    bodyFlat["TimeRange"] = request.timeRange();
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
    body["AppKey"] = request.appKey();
  }

  if (!!request.hasAppVersion()) {
    body["AppVersion"] = request.appVersion();
  }

  if (!!request.hasBuildId()) {
    body["BuildId"] = request.buildId();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasExportStatus()) {
    body["ExportStatus"] = request.exportStatus();
  }

  if (!!request.hasFileName()) {
    body["FileName"] = request.fileName();
  }

  if (!!request.hasFileType()) {
    body["FileType"] = request.fileType();
  }

  if (!!request.hasOs()) {
    body["Os"] = request.os();
  }

  if (!!request.hasPageIndex()) {
    body["PageIndex"] = request.pageIndex();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  if (!!request.hasUuid()) {
    body["Uuid"] = request.uuid();
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
    body["AppKey"] = request.appKey();
  }

  if (!!request.hasOs()) {
    body["Os"] = request.os();
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
    body["AppKey"] = request.appKey();
  }

  if (!!request.hasAppVersion()) {
    body["AppVersion"] = request.appVersion();
  }

  if (!!request.hasBuildId()) {
    body["BuildId"] = request.buildId();
  }

  if (!!request.hasFileName()) {
    body["FileName"] = request.fileName();
  }

  if (!!request.hasFilePath()) {
    body["FilePath"] = request.filePath();
  }

  if (!!request.hasFileType()) {
    body["FileType"] = request.fileType();
  }

  if (!!request.hasOs()) {
    body["Os"] = request.os();
  }

  if (!!request.hasUuid()) {
    body["Uuid"] = request.uuid();
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