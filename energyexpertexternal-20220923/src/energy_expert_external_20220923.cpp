// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/energy_expert_external_20220923.hpp>
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

using namespace Alibabacloud_EnergyExpertExternal20220923;

Alibabacloud_EnergyExpertExternal20220923::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("energyexpertexternal"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_EnergyExpertExternal20220923::Client::getEndpoint(shared_ptr<string> productId,
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

GenerateResultResponse Alibabacloud_EnergyExpertExternal20220923::Client::generateResultWithOptions(shared_ptr<GenerateResultRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productId)) {
    body->insert(pair<string, long>("productId", *request->productId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productType)) {
    body->insert(pair<string, long>("productType", *request->productType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GenerateResult"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/carbon/footprint/result/generate"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GenerateResultResponse(callApi(params, req, runtime));
}

GenerateResultResponse Alibabacloud_EnergyExpertExternal20220923::Client::generateResult(shared_ptr<GenerateResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return generateResultWithOptions(request, headers, runtime);
}

GetAreaElecConstituteResponse Alibabacloud_EnergyExpertExternal20220923::Client::getAreaElecConstituteWithOptions(shared_ptr<GetAreaElecConstituteRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->year)) {
    body->insert(pair<string, long>("year", *request->year));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAreaElecConstitute"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/carbon/emission/analysis/elec/area"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAreaElecConstituteResponse(callApi(params, req, runtime));
}

GetAreaElecConstituteResponse Alibabacloud_EnergyExpertExternal20220923::Client::getAreaElecConstitute(shared_ptr<GetAreaElecConstituteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getAreaElecConstituteWithOptions(request, headers, runtime);
}

GetCarbonEmissionTrendResponse Alibabacloud_EnergyExpertExternal20220923::Client::getCarbonEmissionTrendWithOptions(shared_ptr<GetCarbonEmissionTrendRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->moduleCode)) {
    body->insert(pair<string, string>("moduleCode", *request->moduleCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->moduleType)) {
    body->insert(pair<string, long>("moduleType", *request->moduleType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->trendType)) {
    body->insert(pair<string, long>("trendType", *request->trendType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->yearList)) {
    body->insert(pair<string, vector<long>>("yearList", *request->yearList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCarbonEmissionTrend"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/carbon/emission/analysis/trend"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCarbonEmissionTrendResponse(callApi(params, req, runtime));
}

GetCarbonEmissionTrendResponse Alibabacloud_EnergyExpertExternal20220923::Client::getCarbonEmissionTrend(shared_ptr<GetCarbonEmissionTrendRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getCarbonEmissionTrendWithOptions(request, headers, runtime);
}

GetDataItemListResponse Alibabacloud_EnergyExpertExternal20220923::Client::getDataItemListWithOptions(shared_ptr<GetDataItemListRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("code", *request->code));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataItemList"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/carbon/emission/data/item/list"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDataItemListResponse(callApi(params, req, runtime));
}

GetDataItemListResponse Alibabacloud_EnergyExpertExternal20220923::Client::getDataItemList(shared_ptr<GetDataItemListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getDataItemListWithOptions(request, headers, runtime);
}

GetDataQualityAnalysisResponse Alibabacloud_EnergyExpertExternal20220923::Client::getDataQualityAnalysisWithOptions(shared_ptr<GetDataQualityAnalysisRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dataQualityEvaluationType)) {
    body->insert(pair<string, long>("dataQualityEvaluationType", *request->dataQualityEvaluationType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productId)) {
    body->insert(pair<string, long>("productId", *request->productId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productType)) {
    body->insert(pair<string, long>("productType", *request->productType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataQualityAnalysis"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/carbon/footprint/data/quality/analysis"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDataQualityAnalysisResponse(callApi(params, req, runtime));
}

GetDataQualityAnalysisResponse Alibabacloud_EnergyExpertExternal20220923::Client::getDataQualityAnalysis(shared_ptr<GetDataQualityAnalysisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getDataQualityAnalysisWithOptions(request, headers, runtime);
}

GetDeviceInfoResponse Alibabacloud_EnergyExpertExternal20220923::Client::getDeviceInfoWithOptions(shared_ptr<GetDeviceInfoRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceId)) {
    query->insert(pair<string, string>("deviceId", *request->deviceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ds)) {
    query->insert(pair<string, string>("ds", *request->ds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->factoryId)) {
    query->insert(pair<string, string>("factoryId", *request->factoryId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDeviceInfo"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/external/getDeviceInfo"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDeviceInfoResponse(callApi(params, req, runtime));
}

GetDeviceInfoResponse Alibabacloud_EnergyExpertExternal20220923::Client::getDeviceInfo(shared_ptr<GetDeviceInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getDeviceInfoWithOptions(request, headers, runtime);
}

GetDeviceListResponse Alibabacloud_EnergyExpertExternal20220923::Client::getDeviceListWithOptions(shared_ptr<GetDeviceListRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->factoryId)) {
    query->insert(pair<string, string>("factoryId", *request->factoryId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDeviceList"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/external/getDeviceList"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDeviceListResponse(callApi(params, req, runtime));
}

GetDeviceListResponse Alibabacloud_EnergyExpertExternal20220923::Client::getDeviceList(shared_ptr<GetDeviceListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getDeviceListWithOptions(request, headers, runtime);
}

GetElecConstituteResponse Alibabacloud_EnergyExpertExternal20220923::Client::getElecConstituteWithOptions(shared_ptr<GetElecConstituteRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->year)) {
    body->insert(pair<string, long>("year", *request->year));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetElecConstitute"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/carbon/emission/analysis/elec/constitute"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetElecConstituteResponse(callApi(params, req, runtime));
}

GetElecConstituteResponse Alibabacloud_EnergyExpertExternal20220923::Client::getElecConstitute(shared_ptr<GetElecConstituteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getElecConstituteWithOptions(request, headers, runtime);
}

GetElecTrendResponse Alibabacloud_EnergyExpertExternal20220923::Client::getElecTrendWithOptions(shared_ptr<GetElecTrendRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->yearList)) {
    body->insert(pair<string, vector<long>>("yearList", *request->yearList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetElecTrend"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/carbon/emission/analysis/elec/trend"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetElecTrendResponse(callApi(params, req, runtime));
}

GetElecTrendResponse Alibabacloud_EnergyExpertExternal20220923::Client::getElecTrend(shared_ptr<GetElecTrendRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getElecTrendWithOptions(request, headers, runtime);
}

GetEmissionSourceConstituteResponse Alibabacloud_EnergyExpertExternal20220923::Client::getEmissionSourceConstituteWithOptions(shared_ptr<GetEmissionSourceConstituteRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->moduleCode)) {
    body->insert(pair<string, string>("moduleCode", *request->moduleCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->moduleType)) {
    body->insert(pair<string, long>("moduleType", *request->moduleType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->year)) {
    body->insert(pair<string, long>("year", *request->year));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEmissionSourceConstitute"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/carbon/emission/analysis/constitute"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEmissionSourceConstituteResponse(callApi(params, req, runtime));
}

GetEmissionSourceConstituteResponse Alibabacloud_EnergyExpertExternal20220923::Client::getEmissionSourceConstitute(shared_ptr<GetEmissionSourceConstituteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getEmissionSourceConstituteWithOptions(request, headers, runtime);
}

GetEmissionSummaryResponse Alibabacloud_EnergyExpertExternal20220923::Client::getEmissionSummaryWithOptions(shared_ptr<GetEmissionSummaryRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->moduleCode)) {
    body->insert(pair<string, string>("moduleCode", *request->moduleCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->moduleType)) {
    body->insert(pair<string, long>("moduleType", *request->moduleType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->year)) {
    body->insert(pair<string, long>("year", *request->year));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEmissionSummary"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/carbon/emission/analysis/summary"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEmissionSummaryResponse(callApi(params, req, runtime));
}

GetEmissionSummaryResponse Alibabacloud_EnergyExpertExternal20220923::Client::getEmissionSummary(shared_ptr<GetEmissionSummaryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getEmissionSummaryWithOptions(request, headers, runtime);
}

GetEpdInventoryConstituteResponse Alibabacloud_EnergyExpertExternal20220923::Client::getEpdInventoryConstituteWithOptions(shared_ptr<GetEpdInventoryConstituteRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productId)) {
    body->insert(pair<string, long>("productId", *request->productId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productType)) {
    body->insert(pair<string, long>("productType", *request->productType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEpdInventoryConstitute"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/carbon/footprint/result/epd/inventory/constitute"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEpdInventoryConstituteResponse(callApi(params, req, runtime));
}

GetEpdInventoryConstituteResponse Alibabacloud_EnergyExpertExternal20220923::Client::getEpdInventoryConstitute(shared_ptr<GetEpdInventoryConstituteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getEpdInventoryConstituteWithOptions(request, headers, runtime);
}

GetEpdSummaryResponse Alibabacloud_EnergyExpertExternal20220923::Client::getEpdSummaryWithOptions(shared_ptr<GetEpdSummaryRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productId)) {
    body->insert(pair<string, long>("productId", *request->productId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productType)) {
    body->insert(pair<string, long>("productType", *request->productType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEpdSummary"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/carbon/footprint/result/epd/summary"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEpdSummaryResponse(callApi(params, req, runtime));
}

GetEpdSummaryResponse Alibabacloud_EnergyExpertExternal20220923::Client::getEpdSummary(shared_ptr<GetEpdSummaryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getEpdSummaryWithOptions(request, headers, runtime);
}

GetFootprintListResponse Alibabacloud_EnergyExpertExternal20220923::Client::getFootprintListWithOptions(shared_ptr<GetFootprintListRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    body->insert(pair<string, long>("currentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productType)) {
    body->insert(pair<string, long>("productType", *request->productType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFootprintList"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/carbon/footprint/product/list"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFootprintListResponse(callApi(params, req, runtime));
}

GetFootprintListResponse Alibabacloud_EnergyExpertExternal20220923::Client::getFootprintList(shared_ptr<GetFootprintListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getFootprintListWithOptions(request, headers, runtime);
}

GetGasConstituteResponse Alibabacloud_EnergyExpertExternal20220923::Client::getGasConstituteWithOptions(shared_ptr<GetGasConstituteRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->moduleCode)) {
    body->insert(pair<string, string>("moduleCode", *request->moduleCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->moduleType)) {
    body->insert(pair<string, long>("moduleType", *request->moduleType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->year)) {
    body->insert(pair<string, long>("year", *request->year));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetGasConstitute"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/carbon/emission/analysis/gas/constitute"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetGasConstituteResponse(callApi(params, req, runtime));
}

GetGasConstituteResponse Alibabacloud_EnergyExpertExternal20220923::Client::getGasConstitute(shared_ptr<GetGasConstituteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getGasConstituteWithOptions(request, headers, runtime);
}

GetGwpBenchmarkListResponse Alibabacloud_EnergyExpertExternal20220923::Client::getGwpBenchmarkListWithOptions(shared_ptr<GetGwpBenchmarkListRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productId)) {
    body->insert(pair<string, long>("productId", *request->productId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productType)) {
    body->insert(pair<string, long>("productType", *request->productType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetGwpBenchmarkList"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/carbon/footprint/result/gwp/benchmark/list"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetGwpBenchmarkListResponse(callApi(params, req, runtime));
}

GetGwpBenchmarkListResponse Alibabacloud_EnergyExpertExternal20220923::Client::getGwpBenchmarkList(shared_ptr<GetGwpBenchmarkListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getGwpBenchmarkListWithOptions(request, headers, runtime);
}

GetGwpBenchmarkSummaryResponse Alibabacloud_EnergyExpertExternal20220923::Client::getGwpBenchmarkSummaryWithOptions(shared_ptr<GetGwpBenchmarkSummaryRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productId)) {
    body->insert(pair<string, long>("productId", *request->productId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productType)) {
    body->insert(pair<string, long>("productType", *request->productType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetGwpBenchmarkSummary"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/carbon/footprint/result/gwp/benchmark/summary"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetGwpBenchmarkSummaryResponse(callApi(params, req, runtime));
}

GetGwpBenchmarkSummaryResponse Alibabacloud_EnergyExpertExternal20220923::Client::getGwpBenchmarkSummary(shared_ptr<GetGwpBenchmarkSummaryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getGwpBenchmarkSummaryWithOptions(request, headers, runtime);
}

GetGwpInventoryConstituteResponse Alibabacloud_EnergyExpertExternal20220923::Client::getGwpInventoryConstituteWithOptions(shared_ptr<GetGwpInventoryConstituteRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productId)) {
    body->insert(pair<string, long>("productId", *request->productId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productType)) {
    body->insert(pair<string, long>("productType", *request->productType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetGwpInventoryConstitute"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/carbon/footprint/result/gwp/inventory/constitute"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetGwpInventoryConstituteResponse(callApi(params, req, runtime));
}

GetGwpInventoryConstituteResponse Alibabacloud_EnergyExpertExternal20220923::Client::getGwpInventoryConstitute(shared_ptr<GetGwpInventoryConstituteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getGwpInventoryConstituteWithOptions(request, headers, runtime);
}

GetGwpInventorySummaryResponse Alibabacloud_EnergyExpertExternal20220923::Client::getGwpInventorySummaryWithOptions(shared_ptr<GetGwpInventorySummaryRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productId)) {
    body->insert(pair<string, long>("productId", *request->productId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productType)) {
    body->insert(pair<string, long>("productType", *request->productType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetGwpInventorySummary"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/carbon/footprint/result/gwp/inventory/summary"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetGwpInventorySummaryResponse(callApi(params, req, runtime));
}

GetGwpInventorySummaryResponse Alibabacloud_EnergyExpertExternal20220923::Client::getGwpInventorySummary(shared_ptr<GetGwpInventorySummaryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getGwpInventorySummaryWithOptions(request, headers, runtime);
}

GetInventoryListResponse Alibabacloud_EnergyExpertExternal20220923::Client::getInventoryListWithOptions(shared_ptr<GetInventoryListRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->emissionType)) {
    body->insert(pair<string, string>("emissionType", *request->emissionType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->group)) {
    body->insert(pair<string, string>("group", *request->group));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->methodType)) {
    body->insert(pair<string, string>("methodType", *request->methodType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productId)) {
    body->insert(pair<string, long>("productId", *request->productId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productType)) {
    body->insert(pair<string, long>("productType", *request->productType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetInventoryList"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/carbon/footprint/result/inventory/list"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetInventoryListResponse(callApi(params, req, runtime));
}

GetInventoryListResponse Alibabacloud_EnergyExpertExternal20220923::Client::getInventoryList(shared_ptr<GetInventoryListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getInventoryListWithOptions(request, headers, runtime);
}

GetOrgAndFactoryResponse Alibabacloud_EnergyExpertExternal20220923::Client::getOrgAndFactoryWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetOrgAndFactory"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/external/getOrgAndFactory"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetOrgAndFactoryResponse(callApi(params, req, runtime));
}

GetOrgAndFactoryResponse Alibabacloud_EnergyExpertExternal20220923::Client::getOrgAndFactory() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getOrgAndFactoryWithOptions(headers, runtime);
}

GetOrgConstituteResponse Alibabacloud_EnergyExpertExternal20220923::Client::getOrgConstituteWithOptions(shared_ptr<GetOrgConstituteRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->moduleCode)) {
    body->insert(pair<string, string>("moduleCode", *request->moduleCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->moduleType)) {
    body->insert(pair<string, long>("moduleType", *request->moduleType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->year)) {
    body->insert(pair<string, long>("year", *request->year));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetOrgConstitute"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/carbon/emission/analysis/org"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetOrgConstituteResponse(callApi(params, req, runtime));
}

GetOrgConstituteResponse Alibabacloud_EnergyExpertExternal20220923::Client::getOrgConstitute(shared_ptr<GetOrgConstituteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getOrgConstituteWithOptions(request, headers, runtime);
}

GetPcrInfoResponse Alibabacloud_EnergyExpertExternal20220923::Client::getPcrInfoWithOptions(shared_ptr<GetPcrInfoRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productId)) {
    body->insert(pair<string, string>("productId", *request->productId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productType)) {
    body->insert(pair<string, long>("productType", *request->productType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPcrInfo"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/carbon/footprint/result/pcr/detail"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPcrInfoResponse(callApi(params, req, runtime));
}

GetPcrInfoResponse Alibabacloud_EnergyExpertExternal20220923::Client::getPcrInfo(shared_ptr<GetPcrInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getPcrInfoWithOptions(request, headers, runtime);
}

GetReductionProposalResponse Alibabacloud_EnergyExpertExternal20220923::Client::getReductionProposalWithOptions(shared_ptr<GetReductionProposalRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dataQualityEvaluationType)) {
    body->insert(pair<string, long>("dataQualityEvaluationType", *request->dataQualityEvaluationType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productId)) {
    body->insert(pair<string, long>("productId", *request->productId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productType)) {
    body->insert(pair<string, long>("productType", *request->productType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetReductionProposal"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/carbon/footprint/result/reduction/proposal"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetReductionProposalResponse(callApi(params, req, runtime));
}

GetReductionProposalResponse Alibabacloud_EnergyExpertExternal20220923::Client::getReductionProposal(shared_ptr<GetReductionProposalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getReductionProposalWithOptions(request, headers, runtime);
}

IsCompletedResponse Alibabacloud_EnergyExpertExternal20220923::Client::isCompletedWithOptions(shared_ptr<IsCompletedRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productId)) {
    body->insert(pair<string, long>("productId", *request->productId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productType)) {
    body->insert(pair<string, long>("productType", *request->productType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("IsCompleted"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/carbon/footprint/result/completed"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return IsCompletedResponse(callApi(params, req, runtime));
}

IsCompletedResponse Alibabacloud_EnergyExpertExternal20220923::Client::isCompleted(shared_ptr<IsCompletedRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return isCompletedWithOptions(request, headers, runtime);
}

PushDeviceDataResponse Alibabacloud_EnergyExpertExternal20220923::Client::pushDeviceDataWithOptions(shared_ptr<PushDeviceDataRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceType)) {
    body->insert(pair<string, string>("deviceType", *request->deviceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<PushDeviceDataRequestDevices>>(request->devices)) {
    body->insert(pair<string, vector<PushDeviceDataRequestDevices>>("devices", *request->devices));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PushDeviceData"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/data/increment/push"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PushDeviceDataResponse(callApi(params, req, runtime));
}

PushDeviceDataResponse Alibabacloud_EnergyExpertExternal20220923::Client::pushDeviceData(shared_ptr<PushDeviceDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return pushDeviceDataWithOptions(request, headers, runtime);
}

PushItemDataResponse Alibabacloud_EnergyExpertExternal20220923::Client::pushItemDataWithOptions(shared_ptr<PushItemDataRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<PushItemDataRequestItems>(request->items)) {
    body->insert(pair<string, PushItemDataRequestItems>("items", *request->items));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->year)) {
    body->insert(pair<string, string>("year", *request->year));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PushItemData"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/carbon/emission/data/item/push"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PushItemDataResponse(callApi(params, req, runtime));
}

PushItemDataResponse Alibabacloud_EnergyExpertExternal20220923::Client::pushItemData(shared_ptr<PushItemDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return pushItemDataWithOptions(request, headers, runtime);
}

RecalculateCarbonEmissionResponse Alibabacloud_EnergyExpertExternal20220923::Client::recalculateCarbonEmissionWithOptions(shared_ptr<RecalculateCarbonEmissionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->year)) {
    body->insert(pair<string, string>("year", *request->year));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecalculateCarbonEmission"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/carbon/emission/data/item/recalculate"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecalculateCarbonEmissionResponse(callApi(params, req, runtime));
}

RecalculateCarbonEmissionResponse Alibabacloud_EnergyExpertExternal20220923::Client::recalculateCarbonEmission(shared_ptr<RecalculateCarbonEmissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return recalculateCarbonEmissionWithOptions(request, headers, runtime);
}

