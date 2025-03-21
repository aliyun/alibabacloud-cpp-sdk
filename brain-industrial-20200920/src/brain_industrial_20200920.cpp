// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/brain_industrial_20200920.hpp>
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

using namespace Alibabacloud_Brain-industrial20200920;

Alibabacloud_Brain-industrial20200920::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("brain-industrial"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Brain-industrial20200920::Client::getEndpoint(shared_ptr<string> productId,
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

ActivateLicenseResponse Alibabacloud_Brain-industrial20200920::Client::activateLicenseWithOptions(shared_ptr<ActivateLicenseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fingerprint)) {
    body->insert(pair<string, string>("Fingerprint", *request->fingerprint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderId)) {
    body->insert(pair<string, string>("OrderId", *request->orderId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ActivateLicense"))},
    {"version", boost::any(string("2020-09-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ActivateLicenseResponse(callApi(params, req, runtime));
  }
  else {
    return ActivateLicenseResponse(execute(params, req, runtime));
  }
}

ActivateLicenseResponse Alibabacloud_Brain-industrial20200920::Client::activateLicense(shared_ptr<ActivateLicenseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return activateLicenseWithOptions(request, runtime);
}

CreateEssOptJobResponse Alibabacloud_Brain-industrial20200920::Client::createEssOptJobWithOptions(shared_ptr<CreateEssOptJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateEssOptJobShrinkRequest> request = make_shared<CreateEssOptJobShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<CreateEssOptJobRequestElecPrice>>(tmpReq->elecPrice)) {
    request->elecPriceShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->elecPrice, make_shared<string>("ElecPrice"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateEssOptJobRequestGenPrice>>(tmpReq->genPrice)) {
    request->genPriceShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->genPrice, make_shared<string>("GenPrice"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateEssOptJobRequestLocation>(tmpReq->location)) {
    request->locationShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->location, make_shared<string>("Location"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateEssOptJobRequestSystemData>>(tmpReq->systemData)) {
    request->systemDataShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->systemData, make_shared<string>("SystemData"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->duration)) {
    body->insert(pair<string, long>("Duration", *request->duration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->elecPriceShrink)) {
    body->insert(pair<string, string>("ElecPrice", *request->elecPriceShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->freq)) {
    body->insert(pair<string, string>("Freq", *request->freq));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->genPriceShrink)) {
    body->insert(pair<string, string>("GenPrice", *request->genPriceShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->locationShrink)) {
    body->insert(pair<string, string>("Location", *request->locationShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelVersion)) {
    body->insert(pair<string, string>("ModelVersion", *request->modelVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->runDate)) {
    body->insert(pair<string, string>("RunDate", *request->runDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->systemDataShrink)) {
    body->insert(pair<string, string>("SystemData", *request->systemDataShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeZone)) {
    body->insert(pair<string, string>("TimeZone", *request->timeZone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topoType)) {
    body->insert(pair<string, string>("TopoType", *request->topoType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateEssOptJob"))},
    {"version", boost::any(string("2020-09-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateEssOptJobResponse(callApi(params, req, runtime));
  }
  else {
    return CreateEssOptJobResponse(execute(params, req, runtime));
  }
}

CreateEssOptJobResponse Alibabacloud_Brain-industrial20200920::Client::createEssOptJob(shared_ptr<CreateEssOptJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEssOptJobWithOptions(request, runtime);
}

CreateLoadForecastJobResponse Alibabacloud_Brain-industrial20200920::Client::createLoadForecastJobWithOptions(shared_ptr<CreateLoadForecastJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateLoadForecastJobShrinkRequest> request = make_shared<CreateLoadForecastJobShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<CreateLoadForecastJobRequestHistoryData>>(tmpReq->historyData)) {
    request->historyDataShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->historyData, make_shared<string>("HistoryData"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceType)) {
    body->insert(pair<string, string>("DeviceType", *request->deviceType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->duration)) {
    body->insert(pair<string, long>("Duration", *request->duration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->freq)) {
    body->insert(pair<string, string>("Freq", *request->freq));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->historyDataShrink)) {
    body->insert(pair<string, string>("HistoryData", *request->historyDataShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelVersion)) {
    body->insert(pair<string, string>("ModelVersion", *request->modelVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->runDate)) {
    body->insert(pair<string, string>("RunDate", *request->runDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->systemType)) {
    body->insert(pair<string, string>("SystemType", *request->systemType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeZone)) {
    body->insert(pair<string, string>("TimeZone", *request->timeZone));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateLoadForecastJob"))},
    {"version", boost::any(string("2020-09-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateLoadForecastJobResponse(callApi(params, req, runtime));
  }
  else {
    return CreateLoadForecastJobResponse(execute(params, req, runtime));
  }
}

CreateLoadForecastJobResponse Alibabacloud_Brain-industrial20200920::Client::createLoadForecastJob(shared_ptr<CreateLoadForecastJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createLoadForecastJobWithOptions(request, runtime);
}

CreatePowerForecastJobResponse Alibabacloud_Brain-industrial20200920::Client::createPowerForecastJobWithOptions(shared_ptr<CreatePowerForecastJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreatePowerForecastJobShrinkRequest> request = make_shared<CreatePowerForecastJobShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<CreatePowerForecastJobRequestHistoryData>>(tmpReq->historyData)) {
    request->historyDataShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->historyData, make_shared<string>("HistoryData"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreatePowerForecastJobRequestLocation>(tmpReq->location)) {
    request->locationShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->location, make_shared<string>("Location"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceType)) {
    body->insert(pair<string, string>("DeviceType", *request->deviceType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->duration)) {
    body->insert(pair<string, long>("Duration", *request->duration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->freq)) {
    body->insert(pair<string, string>("Freq", *request->freq));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->historyDataShrink)) {
    body->insert(pair<string, string>("HistoryData", *request->historyDataShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->locationShrink)) {
    body->insert(pair<string, string>("Location", *request->locationShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelVersion)) {
    body->insert(pair<string, string>("ModelVersion", *request->modelVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->runDate)) {
    body->insert(pair<string, string>("RunDate", *request->runDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->systemType)) {
    body->insert(pair<string, string>("SystemType", *request->systemType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeZone)) {
    body->insert(pair<string, string>("TimeZone", *request->timeZone));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreatePowerForecastJob"))},
    {"version", boost::any(string("2020-09-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreatePowerForecastJobResponse(callApi(params, req, runtime));
  }
  else {
    return CreatePowerForecastJobResponse(execute(params, req, runtime));
  }
}

CreatePowerForecastJobResponse Alibabacloud_Brain-industrial20200920::Client::createPowerForecastJob(shared_ptr<CreatePowerForecastJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPowerForecastJobWithOptions(request, runtime);
}

GetAivppAlgoJobResponse Alibabacloud_Brain-industrial20200920::Client::getAivppAlgoJobWithOptions(shared_ptr<GetAivppAlgoJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    body->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAivppAlgoJob"))},
    {"version", boost::any(string("2020-09-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetAivppAlgoJobResponse(callApi(params, req, runtime));
  }
  else {
    return GetAivppAlgoJobResponse(execute(params, req, runtime));
  }
}

GetAivppAlgoJobResponse Alibabacloud_Brain-industrial20200920::Client::getAivppAlgoJob(shared_ptr<GetAivppAlgoJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAivppAlgoJobWithOptions(request, runtime);
}

GetLicenseResponse Alibabacloud_Brain-industrial20200920::Client::getLicenseWithOptions(shared_ptr<GetLicenseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLicense"))},
    {"version", boost::any(string("2020-09-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetLicenseResponse(callApi(params, req, runtime));
  }
  else {
    return GetLicenseResponse(execute(params, req, runtime));
  }
}

GetLicenseResponse Alibabacloud_Brain-industrial20200920::Client::getLicense(shared_ptr<GetLicenseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLicenseWithOptions(request, runtime);
}

ListAivppResourcesResponse Alibabacloud_Brain-industrial20200920::Client::listAivppResourcesWithOptions(shared_ptr<ListAivppResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    body->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAivppResources"))},
    {"version", boost::any(string("2020-09-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListAivppResourcesResponse(callApi(params, req, runtime));
  }
  else {
    return ListAivppResourcesResponse(execute(params, req, runtime));
  }
}

ListAivppResourcesResponse Alibabacloud_Brain-industrial20200920::Client::listAivppResources(shared_ptr<ListAivppResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAivppResourcesWithOptions(request, runtime);
}

ListLicensesResponse Alibabacloud_Brain-industrial20200920::Client::listLicensesWithOptions(shared_ptr<ListLicensesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    body->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queryStr)) {
    body->insert(pair<string, string>("QueryStr", *request->queryStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLicenses"))},
    {"version", boost::any(string("2020-09-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListLicensesResponse(callApi(params, req, runtime));
  }
  else {
    return ListLicensesResponse(execute(params, req, runtime));
  }
}

ListLicensesResponse Alibabacloud_Brain-industrial20200920::Client::listLicenses(shared_ptr<ListLicensesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listLicensesWithOptions(request, runtime);
}

ListUserResourcesResponse Alibabacloud_Brain-industrial20200920::Client::listUserResourcesWithOptions(shared_ptr<ListUserResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->commodityCode)) {
    body->insert(pair<string, string>("CommodityCode", *request->commodityCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListUserResources"))},
    {"version", boost::any(string("2020-09-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListUserResourcesResponse(callApi(params, req, runtime));
  }
  else {
    return ListUserResourcesResponse(execute(params, req, runtime));
  }
}

ListUserResourcesResponse Alibabacloud_Brain-industrial20200920::Client::listUserResources(shared_ptr<ListUserResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listUserResourcesWithOptions(request, runtime);
}

OpenApiInvokeResponse Alibabacloud_Brain-industrial20200920::Client::openApiInvokeWithOptions(shared_ptr<OpenApiInvokeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    query->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceId)) {
    query->insert(pair<string, string>("ServiceId", *request->serviceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->param)) {
    body->insert(pair<string, string>("Param", *request->param));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OpenApiInvoke"))},
    {"version", boost::any(string("2020-09-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return OpenApiInvokeResponse(callApi(params, req, runtime));
  }
  else {
    return OpenApiInvokeResponse(execute(params, req, runtime));
  }
}

OpenApiInvokeResponse Alibabacloud_Brain-industrial20200920::Client::openApiInvoke(shared_ptr<OpenApiInvokeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return openApiInvokeWithOptions(request, runtime);
}

UpdateLicenseDescriptionResponse Alibabacloud_Brain-industrial20200920::Client::updateLicenseDescriptionWithOptions(shared_ptr<UpdateLicenseDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateLicenseDescription"))},
    {"version", boost::any(string("2020-09-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateLicenseDescriptionResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateLicenseDescriptionResponse(execute(params, req, runtime));
  }
}

UpdateLicenseDescriptionResponse Alibabacloud_Brain-industrial20200920::Client::updateLicenseDescription(shared_ptr<UpdateLicenseDescriptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateLicenseDescriptionWithOptions(request, runtime);
}

