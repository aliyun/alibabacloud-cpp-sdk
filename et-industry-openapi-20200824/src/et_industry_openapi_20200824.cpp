// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/et_industry_openapi_20200824.hpp>
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

using namespace Alibabacloud_Et-industry-openapi20200824;

Alibabacloud_Et-industry-openapi20200824::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"cn-hangzhou", "et-industry.cn-hangzhou.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("et-industry-openapi"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Et-industry-openapi20200824::Client::getEndpoint(shared_ptr<string> productId,
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

GetMqttConnectResponse Alibabacloud_Et-industry-openapi20200824::Client::getMqttConnectWithOptions(shared_ptr<GetMqttConnectRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->request)) {
    body->insert(pair<string, map<string, boost::any>>("Request", *request->request));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMqttConnect"))},
    {"version", boost::any(string("2020-08-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/igate/collaboration/pop/getmqttconnect"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetMqttConnectResponse(callApi(params, req, runtime));
  }
  else {
    return GetMqttConnectResponse(execute(params, req, runtime));
  }
}

GetMqttConnectResponse Alibabacloud_Et-industry-openapi20200824::Client::getMqttConnect(shared_ptr<GetMqttConnectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getMqttConnectWithOptions(request, headers, runtime);
}

GetNonceResponse Alibabacloud_Et-industry-openapi20200824::Client::getNonceWithOptions(shared_ptr<GetNonceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->request)) {
    body->insert(pair<string, map<string, boost::any>>("Request", *request->request));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetNonce"))},
    {"version", boost::any(string("2020-08-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/igate/collaboration/pop/getnonce"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetNonceResponse(callApi(params, req, runtime));
  }
  else {
    return GetNonceResponse(execute(params, req, runtime));
  }
}

GetNonceResponse Alibabacloud_Et-industry-openapi20200824::Client::getNonce(shared_ptr<GetNonceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getNonceWithOptions(request, headers, runtime);
}

ListMeasurePointListByNodeCodePageResponse Alibabacloud_Et-industry-openapi20200824::Client::listMeasurePointListByNodeCodePageWithOptions(shared_ptr<ListMeasurePointListByNodeCodePageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->request)) {
    body->insert(pair<string, map<string, boost::any>>("Request", *request->request));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMeasurePointListByNodeCodePage"))},
    {"version", boost::any(string("2020-08-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/igate/node/pop/measurepointlistbynodecodepage"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListMeasurePointListByNodeCodePageResponse(callApi(params, req, runtime));
  }
  else {
    return ListMeasurePointListByNodeCodePageResponse(execute(params, req, runtime));
  }
}

ListMeasurePointListByNodeCodePageResponse Alibabacloud_Et-industry-openapi20200824::Client::listMeasurePointListByNodeCodePage(shared_ptr<ListMeasurePointListByNodeCodePageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listMeasurePointListByNodeCodePageWithOptions(request, headers, runtime);
}

MultiFieldBatchUploadResponse Alibabacloud_Et-industry-openapi20200824::Client::multiFieldBatchUploadWithOptions(shared_ptr<MultiFieldBatchUploadRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->body)) {
    body->insert(pair<string, map<string, boost::any>>("body", *request->body));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("MultiFieldBatchUpload"))},
    {"version", boost::any(string("2020-08-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/igate/timeseries/upload/pop/multifieldbatchv2"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return MultiFieldBatchUploadResponse(callApi(params, req, runtime));
  }
  else {
    return MultiFieldBatchUploadResponse(execute(params, req, runtime));
  }
}

MultiFieldBatchUploadResponse Alibabacloud_Et-industry-openapi20200824::Client::multiFieldBatchUpload(shared_ptr<MultiFieldBatchUploadRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return multiFieldBatchUploadWithOptions(request, headers, runtime);
}

MultiSourcePointBatchUploadResponse Alibabacloud_Et-industry-openapi20200824::Client::multiSourcePointBatchUploadWithOptions(shared_ptr<MultiSourcePointBatchUploadRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->body)) {
    body->insert(pair<string, map<string, boost::any>>("body", *request->body));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("MultiSourcePointBatchUpload"))},
    {"version", boost::any(string("2020-08-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/igate/timeseries/upload/pop/sourcepointbatchv2"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return MultiSourcePointBatchUploadResponse(callApi(params, req, runtime));
  }
  else {
    return MultiSourcePointBatchUploadResponse(execute(params, req, runtime));
  }
}

MultiSourcePointBatchUploadResponse Alibabacloud_Et-industry-openapi20200824::Client::multiSourcePointBatchUpload(shared_ptr<MultiSourcePointBatchUploadRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return multiSourcePointBatchUploadWithOptions(request, headers, runtime);
}

QueryFieldLatestBySourcePointResponse Alibabacloud_Et-industry-openapi20200824::Client::queryFieldLatestBySourcePointWithOptions(shared_ptr<QueryFieldLatestBySourcePointRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->request)) {
    body->insert(pair<string, map<string, boost::any>>("Request", *request->request));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryFieldLatestBySourcePoint"))},
    {"version", boost::any(string("2020-08-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/igate/timeseries/query/pop/multifieldlatestbysourcepoint"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return QueryFieldLatestBySourcePointResponse(callApi(params, req, runtime));
  }
  else {
    return QueryFieldLatestBySourcePointResponse(execute(params, req, runtime));
  }
}

QueryFieldLatestBySourcePointResponse Alibabacloud_Et-industry-openapi20200824::Client::queryFieldLatestBySourcePoint(shared_ptr<QueryFieldLatestBySourcePointRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return queryFieldLatestBySourcePointWithOptions(request, headers, runtime);
}

QueryIndustryDeviceDataResponse Alibabacloud_Et-industry-openapi20200824::Client::queryIndustryDeviceDataWithOptions(shared_ptr<QueryIndustryDeviceDataRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->request)) {
    body->insert(pair<string, map<string, boost::any>>("Request", *request->request));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryIndustryDeviceData"))},
    {"version", boost::any(string("2020-08-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/igate/timeseries/query/pop/multifieldlatest"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return QueryIndustryDeviceDataResponse(callApi(params, req, runtime));
  }
  else {
    return QueryIndustryDeviceDataResponse(execute(params, req, runtime));
  }
}

QueryIndustryDeviceDataResponse Alibabacloud_Et-industry-openapi20200824::Client::queryIndustryDeviceData(shared_ptr<QueryIndustryDeviceDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return queryIndustryDeviceDataWithOptions(request, headers, runtime);
}

QueryIndustryDeviceLimitsDataResponse Alibabacloud_Et-industry-openapi20200824::Client::queryIndustryDeviceLimitsDataWithOptions(shared_ptr<QueryIndustryDeviceLimitsDataRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->request)) {
    body->insert(pair<string, map<string, boost::any>>("Request", *request->request));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryIndustryDeviceLimitsData"))},
    {"version", boost::any(string("2020-08-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/igate/timeseries/query/pop/multifieldrange"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return QueryIndustryDeviceLimitsDataResponse(callApi(params, req, runtime));
  }
  else {
    return QueryIndustryDeviceLimitsDataResponse(execute(params, req, runtime));
  }
}

QueryIndustryDeviceLimitsDataResponse Alibabacloud_Et-industry-openapi20200824::Client::queryIndustryDeviceLimitsData(shared_ptr<QueryIndustryDeviceLimitsDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return queryIndustryDeviceLimitsDataWithOptions(request, headers, runtime);
}

QueryIndustryDeviceStatusDataResponse Alibabacloud_Et-industry-openapi20200824::Client::queryIndustryDeviceStatusDataWithOptions(shared_ptr<QueryIndustryDeviceStatusDataRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->request)) {
    body->insert(pair<string, map<string, boost::any>>("Request", *request->request));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryIndustryDeviceStatusData"))},
    {"version", boost::any(string("2020-08-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/igate/timeseries/query/pop/multifieldrangestatus"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return QueryIndustryDeviceStatusDataResponse(callApi(params, req, runtime));
  }
  else {
    return QueryIndustryDeviceStatusDataResponse(execute(params, req, runtime));
  }
}

QueryIndustryDeviceStatusDataResponse Alibabacloud_Et-industry-openapi20200824::Client::queryIndustryDeviceStatusData(shared_ptr<QueryIndustryDeviceStatusDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return queryIndustryDeviceStatusDataWithOptions(request, headers, runtime);
}

SourcePointBatchResponse Alibabacloud_Et-industry-openapi20200824::Client::sourcePointBatchWithOptions(shared_ptr<SourcePointBatchRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->request)) {
    body->insert(pair<string, map<string, boost::any>>("Request", *request->request));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SourcePointBatch"))},
    {"version", boost::any(string("2020-08-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/igate/timeseries/upload/pop/sourcepointbatch"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SourcePointBatchResponse(callApi(params, req, runtime));
  }
  else {
    return SourcePointBatchResponse(execute(params, req, runtime));
  }
}

SourcePointBatchResponse Alibabacloud_Et-industry-openapi20200824::Client::sourcePointBatch(shared_ptr<SourcePointBatchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return sourcePointBatchWithOptions(request, headers, runtime);
}

UploadIndustryDeviceDataResponse Alibabacloud_Et-industry-openapi20200824::Client::uploadIndustryDeviceDataWithOptions(shared_ptr<UploadIndustryDeviceDataRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->request)) {
    body->insert(pair<string, map<string, boost::any>>("Request", *request->request));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UploadIndustryDeviceData"))},
    {"version", boost::any(string("2020-08-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/igate/timeseries/upload/pop/multifieldbatch"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UploadIndustryDeviceDataResponse(callApi(params, req, runtime));
  }
  else {
    return UploadIndustryDeviceDataResponse(execute(params, req, runtime));
  }
}

UploadIndustryDeviceDataResponse Alibabacloud_Et-industry-openapi20200824::Client::uploadIndustryDeviceData(shared_ptr<UploadIndustryDeviceDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return uploadIndustryDeviceDataWithOptions(request, headers, runtime);
}

