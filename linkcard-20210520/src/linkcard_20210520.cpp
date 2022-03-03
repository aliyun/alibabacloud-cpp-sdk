// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/linkcard_20210520.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_Linkcard20210520;

Alibabacloud_Linkcard20210520::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("central");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("linkcard"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Linkcard20210520::Client::getEndpoint(shared_ptr<string> productId,
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

GetCardDetailResponse Alibabacloud_Linkcard20210520::Client::getCardDetailWithOptions(shared_ptr<GetCardDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->destroyCard)) {
    query->insert(pair<string, bool>("DestroyCard", *request->destroyCard));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iccid)) {
    query->insert(pair<string, string>("Iccid", *request->iccid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->showPsim)) {
    query->insert(pair<string, bool>("ShowPsim", *request->showPsim));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCardDetail"))},
    {"version", boost::any(string("2021-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCardDetailResponse(callApi(params, req, runtime));
}

GetCardDetailResponse Alibabacloud_Linkcard20210520::Client::getCardDetail(shared_ptr<GetCardDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCardDetailWithOptions(request, runtime);
}

GetCardFlowInfoResponse Alibabacloud_Linkcard20210520::Client::getCardFlowInfoWithOptions(shared_ptr<GetCardFlowInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->dateList)) {
    query->insert(pair<string, vector<string>>("DateList", *request->dateList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iccid)) {
    query->insert(pair<string, string>("Iccid", *request->iccid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCardFlowInfo"))},
    {"version", boost::any(string("2021-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCardFlowInfoResponse(callApi(params, req, runtime));
}

GetCardFlowInfoResponse Alibabacloud_Linkcard20210520::Client::getCardFlowInfo(shared_ptr<GetCardFlowInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCardFlowInfoWithOptions(request, runtime);
}

GetCredentialPoolStatisticsResponse Alibabacloud_Linkcard20210520::Client::getCredentialPoolStatisticsWithOptions(shared_ptr<GetCredentialPoolStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->credentialNO)) {
    query->insert(pair<string, string>("CredentialNO", *request->credentialNO));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->date)) {
    query->insert(pair<string, string>("Date", *request->date));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCredentialPoolStatistics"))},
    {"version", boost::any(string("2021-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCredentialPoolStatisticsResponse(callApi(params, req, runtime));
}

GetCredentialPoolStatisticsResponse Alibabacloud_Linkcard20210520::Client::getCredentialPoolStatistics(shared_ptr<GetCredentialPoolStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCredentialPoolStatisticsWithOptions(request, runtime);
}

RebindResumeSingleCardResponse Alibabacloud_Linkcard20210520::Client::rebindResumeSingleCardWithOptions(shared_ptr<RebindResumeSingleCardRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RebindResumeSingleCardShrinkRequest> request = make_shared<RebindResumeSingleCardShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->optMsisdns)) {
    request->optMsisdnsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->optMsisdns, make_shared<string>("OptMsisdns"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iccid)) {
    query->insert(pair<string, string>("Iccid", *request->iccid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->optMsisdnsShrink)) {
    query->insert(pair<string, string>("OptMsisdns", *request->optMsisdnsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RebindResumeSingleCard"))},
    {"version", boost::any(string("2021-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RebindResumeSingleCardResponse(callApi(params, req, runtime));
}

RebindResumeSingleCardResponse Alibabacloud_Linkcard20210520::Client::rebindResumeSingleCard(shared_ptr<RebindResumeSingleCardRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rebindResumeSingleCardWithOptions(request, runtime);
}

ResumeSingleCardResponse Alibabacloud_Linkcard20210520::Client::resumeSingleCardWithOptions(shared_ptr<ResumeSingleCardRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ResumeSingleCardShrinkRequest> request = make_shared<ResumeSingleCardShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->optMsisdns)) {
    request->optMsisdnsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->optMsisdns, make_shared<string>("OptMsisdns"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iccid)) {
    query->insert(pair<string, string>("Iccid", *request->iccid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->optMsisdnsShrink)) {
    query->insert(pair<string, string>("OptMsisdns", *request->optMsisdnsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResumeSingleCard"))},
    {"version", boost::any(string("2021-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResumeSingleCardResponse(callApi(params, req, runtime));
}

ResumeSingleCardResponse Alibabacloud_Linkcard20210520::Client::resumeSingleCard(shared_ptr<ResumeSingleCardRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resumeSingleCardWithOptions(request, runtime);
}

StopSingleCardResponse Alibabacloud_Linkcard20210520::Client::stopSingleCardWithOptions(shared_ptr<StopSingleCardRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<StopSingleCardShrinkRequest> request = make_shared<StopSingleCardShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->optMsisdns)) {
    request->optMsisdnsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->optMsisdns, make_shared<string>("OptMsisdns"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iccid)) {
    query->insert(pair<string, string>("Iccid", *request->iccid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->optMsisdnsShrink)) {
    query->insert(pair<string, string>("OptMsisdns", *request->optMsisdnsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopSingleCard"))},
    {"version", boost::any(string("2021-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopSingleCardResponse(callApi(params, req, runtime));
}

StopSingleCardResponse Alibabacloud_Linkcard20210520::Client::stopSingleCard(shared_ptr<StopSingleCardRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopSingleCardWithOptions(request, runtime);
}

