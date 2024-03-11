// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/carbon_footprint_20230711.hpp>
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

using namespace Alibabacloud_CarbonFootprint20230711;

Alibabacloud_CarbonFootprint20230711::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("carbonfootprint"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_CarbonFootprint20230711::Client::getEndpoint(shared_ptr<string> productId,
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

AllowResponse Alibabacloud_CarbonFootprint20230711::Client::allowWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Allow"))},
    {"version", boost::any(string("2023-07-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AllowResponse(callApi(params, req, runtime));
}

AllowResponse Alibabacloud_CarbonFootprint20230711::Client::allow() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return allowWithOptions(runtime);
}

GetSummaryDataResponse Alibabacloud_CarbonFootprint20230711::Client::getSummaryDataWithOptions(shared_ptr<GetSummaryDataRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetSummaryDataShrinkRequest> request = make_shared<GetSummaryDataShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->uids)) {
    request->uidsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->uids, make_shared<string>("Uids"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->group)) {
    query->insert(pair<string, string>("Group", *request->group));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uidsShrink)) {
    query->insert(pair<string, string>("Uids", *request->uidsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSummaryData"))},
    {"version", boost::any(string("2023-07-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSummaryDataResponse(callApi(params, req, runtime));
}

GetSummaryDataResponse Alibabacloud_CarbonFootprint20230711::Client::getSummaryData(shared_ptr<GetSummaryDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSummaryDataWithOptions(request, runtime);
}

QueryCarbonTrackResponse Alibabacloud_CarbonFootprint20230711::Client::queryCarbonTrackWithOptions(shared_ptr<QueryCarbonTrackRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryCarbonTrackShrinkRequest> request = make_shared<QueryCarbonTrackShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->uids)) {
    request->uidsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->uids, make_shared<string>("Uids"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->filterRDAccount)) {
    query->insert(pair<string, long>("FilterRDAccount", *request->filterRDAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->group)) {
    query->insert(pair<string, string>("Group", *request->group));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->topNum)) {
    query->insert(pair<string, long>("TopNum", *request->topNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uidsShrink)) {
    query->insert(pair<string, string>("Uids", *request->uidsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->useCode)) {
    query->insert(pair<string, long>("UseCode", *request->useCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryCarbonTrack"))},
    {"version", boost::any(string("2023-07-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryCarbonTrackResponse(callApi(params, req, runtime));
}

QueryCarbonTrackResponse Alibabacloud_CarbonFootprint20230711::Client::queryCarbonTrack(shared_ptr<QueryCarbonTrackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryCarbonTrackWithOptions(request, runtime);
}

QueryMultiAccountCarbonTrackResponse Alibabacloud_CarbonFootprint20230711::Client::queryMultiAccountCarbonTrackWithOptions(shared_ptr<QueryMultiAccountCarbonTrackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryMultiAccountCarbonTrack"))},
    {"version", boost::any(string("2023-07-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryMultiAccountCarbonTrackResponse(callApi(params, req, runtime));
}

QueryMultiAccountCarbonTrackResponse Alibabacloud_CarbonFootprint20230711::Client::queryMultiAccountCarbonTrack(shared_ptr<QueryMultiAccountCarbonTrackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMultiAccountCarbonTrackWithOptions(request, runtime);
}

VerifyResponse Alibabacloud_CarbonFootprint20230711::Client::verifyWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Verify"))},
    {"version", boost::any(string("2023-07-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VerifyResponse(callApi(params, req, runtime));
}

VerifyResponse Alibabacloud_CarbonFootprint20230711::Client::verify() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return verifyWithOptions(runtime);
}

