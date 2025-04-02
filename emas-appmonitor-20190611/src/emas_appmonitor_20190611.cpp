// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/emas_appmonitor_20190611.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_Emas-appmonitor20190611;

Alibabacloud_Emas-appmonitor20190611::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("emas-appmonitor"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Emas-appmonitor20190611::Client::getEndpoint(shared_ptr<string> productId,
                                                                 shared_ptr<string> regionId,
                                                                 shared_ptr<string> endpointRule,
                                                                 shared_ptr<string> network,
                                                                 shared_ptr<string> suffix,
                                                                 shared_ptr<map<string, string>> endpointMap,
                                                                 shared_ptr<string> endpoint) {
  if (!Darabonba_Util::Client::empty(endpoint)) {
    return *endpoint;
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(endpointMap) && !Darabonba_Util::Client::empty(make_shared<string>((*endpointMap)[regionId]))) {
    return (*endpointMap)[regionId];
  }
  return Alibabacloud_EndpointUtil::Client::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

GetErrorResponse Alibabacloud_Emas-appmonitor20190611::Client::getErrorWithOptions(shared_ptr<GetErrorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->appKey)) {
    body->insert(pair<string, long>("AppKey", *request->appKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizModule)) {
    body->insert(pair<string, string>("BizModule", *request->bizModule));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->clientTime)) {
    body->insert(pair<string, long>("ClientTime", *request->clientTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->did)) {
    body->insert(pair<string, string>("Did", *request->did));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->force)) {
    body->insert(pair<string, bool>("Force", *request->force));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->os)) {
    body->insert(pair<string, string>("Os", *request->os));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uuid)) {
    body->insert(pair<string, string>("Uuid", *request->uuid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetError"))},
    {"version", boost::any(string("2019-06-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetErrorResponse(callApi(params, req, runtime));
  }
  else {
    return GetErrorResponse(execute(params, req, runtime));
  }
}

GetErrorResponse Alibabacloud_Emas-appmonitor20190611::Client::getError(shared_ptr<GetErrorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getErrorWithOptions(request, runtime);
}

GetErrorsResponse Alibabacloud_Emas-appmonitor20190611::Client::getErrorsWithOptions(shared_ptr<GetErrorsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetErrorsShrinkRequest> request = make_shared<GetErrorsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<GetErrorsRequestFilter>(tmpReq->filter)) {
    request->filterShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->filter, make_shared<string>("Filter"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->appKey)) {
    body->insert(pair<string, long>("AppKey", *request->appKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizModule)) {
    body->insert(pair<string, string>("BizModule", *request->bizModule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->digestHash)) {
    body->insert(pair<string, string>("DigestHash", *request->digestHash));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterShrink)) {
    body->insert(pair<string, string>("Filter", *request->filterShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->os)) {
    body->insert(pair<string, string>("Os", *request->os));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageIndex)) {
    body->insert(pair<string, long>("PageIndex", *request->pageIndex));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<map<string, boost::any>> bodyFlat = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<GetErrorsShrinkRequestTimeRange>(request->timeRange)) {
    bodyFlat->insert(pair<string, GetErrorsShrinkRequestTimeRange>("TimeRange", *request->timeRange));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->utdid)) {
    body->insert(pair<string, string>("Utdid", *request->utdid));
  }
  body = make_shared<map<string, boost::any>>(Darabonba::Converter::merge(map<string, boost::any>(), !body ? map<string, boost::any>() : *body, Darabonba::Converter::toGenericMap(Alibabacloud_OpenApiUtil::Client::query(bodyFlat))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetErrors"))},
    {"version", boost::any(string("2019-06-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetErrorsResponse(callApi(params, req, runtime));
  }
  else {
    return GetErrorsResponse(execute(params, req, runtime));
  }
}

GetErrorsResponse Alibabacloud_Emas-appmonitor20190611::Client::getErrors(shared_ptr<GetErrorsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getErrorsWithOptions(request, runtime);
}

GetIssueResponse Alibabacloud_Emas-appmonitor20190611::Client::getIssueWithOptions(shared_ptr<GetIssueRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetIssueShrinkRequest> request = make_shared<GetIssueShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<GetIssueRequestFilter>(tmpReq->filter)) {
    request->filterShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->filter, make_shared<string>("Filter"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->appKey)) {
    body->insert(pair<string, long>("AppKey", *request->appKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizModule)) {
    body->insert(pair<string, string>("BizModule", *request->bizModule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->digestHash)) {
    body->insert(pair<string, string>("DigestHash", *request->digestHash));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterShrink)) {
    body->insert(pair<string, string>("Filter", *request->filterShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->os)) {
    body->insert(pair<string, string>("Os", *request->os));
  }
  shared_ptr<map<string, boost::any>> bodyFlat = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<GetIssueShrinkRequestTimeRange>(request->timeRange)) {
    bodyFlat->insert(pair<string, GetIssueShrinkRequestTimeRange>("TimeRange", *request->timeRange));
  }
  body = make_shared<map<string, boost::any>>(Darabonba::Converter::merge(map<string, boost::any>(), !body ? map<string, boost::any>() : *body, Darabonba::Converter::toGenericMap(Alibabacloud_OpenApiUtil::Client::query(bodyFlat))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetIssue"))},
    {"version", boost::any(string("2019-06-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetIssueResponse(callApi(params, req, runtime));
  }
  else {
    return GetIssueResponse(execute(params, req, runtime));
  }
}

GetIssueResponse Alibabacloud_Emas-appmonitor20190611::Client::getIssue(shared_ptr<GetIssueRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getIssueWithOptions(request, runtime);
}

GetIssuesResponse Alibabacloud_Emas-appmonitor20190611::Client::getIssuesWithOptions(shared_ptr<GetIssuesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetIssuesShrinkRequest> request = make_shared<GetIssuesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<GetIssuesRequestFilter>(tmpReq->filter)) {
    request->filterShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->filter, make_shared<string>("Filter"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->appKey)) {
    body->insert(pair<string, long>("AppKey", *request->appKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizModule)) {
    body->insert(pair<string, string>("BizModule", *request->bizModule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterShrink)) {
    body->insert(pair<string, string>("Filter", *request->filterShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    body->insert(pair<string, string>("OrderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderType)) {
    body->insert(pair<string, string>("OrderType", *request->orderType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->os)) {
    body->insert(pair<string, string>("Os", *request->os));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageIndex)) {
    body->insert(pair<string, long>("PageIndex", *request->pageIndex));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    body->insert(pair<string, long>("Status", *request->status));
  }
  shared_ptr<map<string, boost::any>> bodyFlat = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<GetIssuesShrinkRequestTimeRange>(request->timeRange)) {
    bodyFlat->insert(pair<string, GetIssuesShrinkRequestTimeRange>("TimeRange", *request->timeRange));
  }
  body = make_shared<map<string, boost::any>>(Darabonba::Converter::merge(map<string, boost::any>(), !body ? map<string, boost::any>() : *body, Darabonba::Converter::toGenericMap(Alibabacloud_OpenApiUtil::Client::query(bodyFlat))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetIssues"))},
    {"version", boost::any(string("2019-06-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetIssuesResponse(callApi(params, req, runtime));
  }
  else {
    return GetIssuesResponse(execute(params, req, runtime));
  }
}

GetIssuesResponse Alibabacloud_Emas-appmonitor20190611::Client::getIssues(shared_ptr<GetIssuesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getIssuesWithOptions(request, runtime);
}

GetSymbolicFilesResponse Alibabacloud_Emas-appmonitor20190611::Client::getSymbolicFilesWithOptions(shared_ptr<GetSymbolicFilesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->appKey)) {
    body->insert(pair<string, long>("AppKey", *request->appKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appVersion)) {
    body->insert(pair<string, string>("AppVersion", *request->appVersion));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    body->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->exportStatus)) {
    body->insert(pair<string, string>("ExportStatus", *request->exportStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    body->insert(pair<string, string>("FileName", *request->fileName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileType)) {
    body->insert(pair<string, string>("FileType", *request->fileType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->os)) {
    body->insert(pair<string, string>("Os", *request->os));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageIndex)) {
    body->insert(pair<string, long>("PageIndex", *request->pageIndex));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    body->insert(pair<string, long>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uuid)) {
    body->insert(pair<string, string>("Uuid", *request->uuid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSymbolicFiles"))},
    {"version", boost::any(string("2019-06-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetSymbolicFilesResponse(callApi(params, req, runtime));
  }
  else {
    return GetSymbolicFilesResponse(execute(params, req, runtime));
  }
}

GetSymbolicFilesResponse Alibabacloud_Emas-appmonitor20190611::Client::getSymbolicFiles(shared_ptr<GetSymbolicFilesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSymbolicFilesWithOptions(request, runtime);
}

RequestUploadTokenResponse Alibabacloud_Emas-appmonitor20190611::Client::requestUploadTokenWithOptions(shared_ptr<RequestUploadTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->appKey)) {
    body->insert(pair<string, long>("AppKey", *request->appKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->os)) {
    body->insert(pair<string, string>("Os", *request->os));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RequestUploadToken"))},
    {"version", boost::any(string("2019-06-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RequestUploadTokenResponse(callApi(params, req, runtime));
  }
  else {
    return RequestUploadTokenResponse(execute(params, req, runtime));
  }
}

RequestUploadTokenResponse Alibabacloud_Emas-appmonitor20190611::Client::requestUploadToken(shared_ptr<RequestUploadTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return requestUploadTokenWithOptions(request, runtime);
}

SubmitSymbolicResponse Alibabacloud_Emas-appmonitor20190611::Client::submitSymbolicWithOptions(shared_ptr<SubmitSymbolicRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->appKey)) {
    body->insert(pair<string, long>("AppKey", *request->appKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appVersion)) {
    body->insert(pair<string, string>("AppVersion", *request->appVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->buildId)) {
    body->insert(pair<string, string>("BuildId", *request->buildId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    body->insert(pair<string, string>("FileName", *request->fileName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filePath)) {
    body->insert(pair<string, string>("FilePath", *request->filePath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileType)) {
    body->insert(pair<string, string>("FileType", *request->fileType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->os)) {
    body->insert(pair<string, string>("Os", *request->os));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uuid)) {
    body->insert(pair<string, string>("Uuid", *request->uuid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitSymbolic"))},
    {"version", boost::any(string("2019-06-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SubmitSymbolicResponse(callApi(params, req, runtime));
  }
  else {
    return SubmitSymbolicResponse(execute(params, req, runtime));
  }
}

SubmitSymbolicResponse Alibabacloud_Emas-appmonitor20190611::Client::submitSymbolic(shared_ptr<SubmitSymbolicRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitSymbolicWithOptions(request, runtime);
}

