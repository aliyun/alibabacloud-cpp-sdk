// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/amp_test_20201230.hpp>
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

using namespace Alibabacloud_AmpTest20201230;

Alibabacloud_AmpTest20201230::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("amptest"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_AmpTest20201230::Client::getEndpoint(shared_ptr<string> productId,
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

CreateRulesResponse Alibabacloud_AmpTest20201230::Client::createRulesWithOptions(shared_ptr<CreateRulesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateRulesShrinkRequest> request = make_shared<CreateRulesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateRulesRequestHome>(tmpReq->home)) {
    request->homeShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->home->toMap()), make_shared<string>("Home"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->homeShrink)) {
    query->insert(pair<string, string>("Home", *request->homeShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRules"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateRulesResponse(callApi(params, req, runtime));
}

CreateRulesResponse Alibabacloud_AmpTest20201230::Client::createRules(shared_ptr<CreateRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRulesWithOptions(request, runtime);
}

HuichengTestGrayResponse Alibabacloud_AmpTest20201230::Client::huichengTestGrayWithOptions(shared_ptr<HuichengTestGrayRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<HuichengTestGrayShrinkRequest> request = make_shared<HuichengTestGrayShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<HuichengTestGrayRequestHome>(tmpReq->home)) {
    request->homeShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->home->toMap()), make_shared<string>("Home"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->homeShrink)) {
    query->insert(pair<string, string>("Home", *request->homeShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("HuichengTestGray"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HuichengTestGrayResponse(callApi(params, req, runtime));
}

HuichengTestGrayResponse Alibabacloud_AmpTest20201230::Client::huichengTestGray(shared_ptr<HuichengTestGrayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return huichengTestGrayWithOptions(request, runtime);
}

HuichengTestGrayEightResponse Alibabacloud_AmpTest20201230::Client::huichengTestGrayEightWithOptions(shared_ptr<HuichengTestGrayEightRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<HuichengTestGrayEightShrinkRequest> request = make_shared<HuichengTestGrayEightShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<HuichengTestGrayEightRequestHome>(tmpReq->home)) {
    request->homeShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->home->toMap()), make_shared<string>("Home"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->homeShrink)) {
    query->insert(pair<string, string>("Home", *request->homeShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("HuichengTestGrayEight"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HuichengTestGrayEightResponse(callApi(params, req, runtime));
}

HuichengTestGrayEightResponse Alibabacloud_AmpTest20201230::Client::huichengTestGrayEight(shared_ptr<HuichengTestGrayEightRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return huichengTestGrayEightWithOptions(request, runtime);
}

HuichengTestGrayFifthResponse Alibabacloud_AmpTest20201230::Client::huichengTestGrayFifthWithOptions(shared_ptr<HuichengTestGrayFifthRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<HuichengTestGrayFifthShrinkRequest> request = make_shared<HuichengTestGrayFifthShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<HuichengTestGrayFifthRequestHome>(tmpReq->home)) {
    request->homeShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->home->toMap()), make_shared<string>("Home"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->homeShrink)) {
    query->insert(pair<string, string>("Home", *request->homeShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("HuichengTestGrayFifth"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HuichengTestGrayFifthResponse(callApi(params, req, runtime));
}

HuichengTestGrayFifthResponse Alibabacloud_AmpTest20201230::Client::huichengTestGrayFifth(shared_ptr<HuichengTestGrayFifthRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return huichengTestGrayFifthWithOptions(request, runtime);
}

HuichengTestGrayNineResponse Alibabacloud_AmpTest20201230::Client::huichengTestGrayNineWithOptions(shared_ptr<HuichengTestGrayNineRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<HuichengTestGrayNineShrinkRequest> request = make_shared<HuichengTestGrayNineShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<HuichengTestGrayNineRequestHome>(tmpReq->home)) {
    request->homeShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->home->toMap()), make_shared<string>("Home"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->homeShrink)) {
    query->insert(pair<string, string>("Home", *request->homeShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("HuichengTestGrayNine"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HuichengTestGrayNineResponse(callApi(params, req, runtime));
}

HuichengTestGrayNineResponse Alibabacloud_AmpTest20201230::Client::huichengTestGrayNine(shared_ptr<HuichengTestGrayNineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return huichengTestGrayNineWithOptions(request, runtime);
}

HuichengTestGraySecondResponse Alibabacloud_AmpTest20201230::Client::huichengTestGraySecondWithOptions(shared_ptr<HuichengTestGraySecondRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<HuichengTestGraySecondShrinkRequest> request = make_shared<HuichengTestGraySecondShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<HuichengTestGraySecondRequestHome>(tmpReq->home)) {
    request->homeShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->home->toMap()), make_shared<string>("Home"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->homeShrink)) {
    query->insert(pair<string, string>("Home", *request->homeShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("HuichengTestGraySecond"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HuichengTestGraySecondResponse(callApi(params, req, runtime));
}

HuichengTestGraySecondResponse Alibabacloud_AmpTest20201230::Client::huichengTestGraySecond(shared_ptr<HuichengTestGraySecondRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return huichengTestGraySecondWithOptions(request, runtime);
}

HuichengTestGraySevenResponse Alibabacloud_AmpTest20201230::Client::huichengTestGraySevenWithOptions(shared_ptr<HuichengTestGraySevenRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<HuichengTestGraySevenShrinkRequest> request = make_shared<HuichengTestGraySevenShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<HuichengTestGraySevenRequestHome>(tmpReq->home)) {
    request->homeShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->home->toMap()), make_shared<string>("Home"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->homeShrink)) {
    query->insert(pair<string, string>("Home", *request->homeShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("HuichengTestGraySeven"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HuichengTestGraySevenResponse(callApi(params, req, runtime));
}

HuichengTestGraySevenResponse Alibabacloud_AmpTest20201230::Client::huichengTestGraySeven(shared_ptr<HuichengTestGraySevenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return huichengTestGraySevenWithOptions(request, runtime);
}

HuichengTestGraySixResponse Alibabacloud_AmpTest20201230::Client::huichengTestGraySixWithOptions(shared_ptr<HuichengTestGraySixRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<HuichengTestGraySixShrinkRequest> request = make_shared<HuichengTestGraySixShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<HuichengTestGraySixRequestHome>(tmpReq->home)) {
    request->homeShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->home->toMap()), make_shared<string>("Home"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->homeShrink)) {
    query->insert(pair<string, string>("Home", *request->homeShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("HuichengTestGraySix"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HuichengTestGraySixResponse(callApi(params, req, runtime));
}

HuichengTestGraySixResponse Alibabacloud_AmpTest20201230::Client::huichengTestGraySix(shared_ptr<HuichengTestGraySixRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return huichengTestGraySixWithOptions(request, runtime);
}

HuichengTestGrayTenResponse Alibabacloud_AmpTest20201230::Client::huichengTestGrayTenWithOptions(shared_ptr<HuichengTestGrayTenRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<HuichengTestGrayTenShrinkRequest> request = make_shared<HuichengTestGrayTenShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<HuichengTestGrayTenRequestHome>(tmpReq->home)) {
    request->homeShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->home->toMap()), make_shared<string>("Home"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->homeShrink)) {
    query->insert(pair<string, string>("Home", *request->homeShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("HuichengTestGrayTen"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HuichengTestGrayTenResponse(callApi(params, req, runtime));
}

HuichengTestGrayTenResponse Alibabacloud_AmpTest20201230::Client::huichengTestGrayTen(shared_ptr<HuichengTestGrayTenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return huichengTestGrayTenWithOptions(request, runtime);
}

HuichengTestGrayThirdResponse Alibabacloud_AmpTest20201230::Client::huichengTestGrayThirdWithOptions(shared_ptr<HuichengTestGrayThirdRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<HuichengTestGrayThirdShrinkRequest> request = make_shared<HuichengTestGrayThirdShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<HuichengTestGrayThirdRequestHome>(tmpReq->home)) {
    request->homeShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->home->toMap()), make_shared<string>("Home"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->homeShrink)) {
    query->insert(pair<string, string>("Home", *request->homeShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("HuichengTestGrayThird"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HuichengTestGrayThirdResponse(callApi(params, req, runtime));
}

HuichengTestGrayThirdResponse Alibabacloud_AmpTest20201230::Client::huichengTestGrayThird(shared_ptr<HuichengTestGrayThirdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return huichengTestGrayThirdWithOptions(request, runtime);
}

HuichengTestResourceOwnerIdResponse Alibabacloud_AmpTest20201230::Client::huichengTestResourceOwnerIdWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("HuichengTestResourceOwnerId"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HuichengTestResourceOwnerIdResponse(callApi(params, req, runtime));
}

HuichengTestResourceOwnerIdResponse Alibabacloud_AmpTest20201230::Client::huichengTestResourceOwnerId() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return huichengTestResourceOwnerIdWithOptions(runtime);
}

HuichengetResponse Alibabacloud_AmpTest20201230::Client::huichengetWithOptions(shared_ptr<HuichengetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->add)) {
    query->insert(pair<string, string>("Add", *request->add));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->address)) {
    query->insert(pair<string, string>("Address", *request->address));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->apple)) {
    query->insert(pair<string, string>("Apple", *request->apple));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->blue)) {
    query->insert(pair<string, string>("Blue", *request->blue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    query->insert(pair<string, string>("Code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->east)) {
    query->insert(pair<string, string>("East", *request->east));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->enight)) {
    query->insert(pair<string, string>("Enight", *request->enight));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->five)) {
    query->insert(pair<string, string>("Five", *request->five));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->four)) {
    query->insert(pair<string, string>("Four", *request->four));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hello)) {
    query->insert(pair<string, string>("Hello", *request->hello));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hold)) {
    query->insert(pair<string, string>("Hold", *request->hold));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jack)) {
    query->insert(pair<string, string>("Jack", *request->jack));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->list)) {
    query->insert(pair<string, string>("List", *request->list));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mack)) {
    query->insert(pair<string, string>("Mack", *request->mack));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->new1)) {
    query->insert(pair<string, string>("New1", *request->new1));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newName)) {
    query->insert(pair<string, string>("NewName", *request->newName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->news)) {
    query->insert(pair<string, string>("News", *request->news));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nigh)) {
    query->insert(pair<string, string>("Nigh", *request->nigh));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->now)) {
    query->insert(pair<string, string>("Now", *request->now));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->params)) {
    query->insert(pair<string, string>("Params", *request->params));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->params1)) {
    query->insert(pair<string, string>("Params1", *request->params1));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->params2)) {
    query->insert(pair<string, string>("Params2", *request->params2));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->params3)) {
    query->insert(pair<string, string>("Params3", *request->params3));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->params4)) {
    query->insert(pair<string, string>("Params4", *request->params4));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->red)) {
    query->insert(pair<string, string>("Red", *request->red));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rong)) {
    query->insert(pair<string, string>("Rong", *request->rong));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->six)) {
    query->insert(pair<string, string>("Six", *request->six));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tea)) {
    query->insert(pair<string, string>("Tea", *request->tea));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ten)) {
    query->insert(pair<string, string>("Ten", *request->ten));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->three)) {
    query->insert(pair<string, string>("Three", *request->three));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->two)) {
    query->insert(pair<string, string>("Two", *request->two));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->visity)) {
    query->insert(pair<string, string>("Visity", *request->visity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->white)) {
    query->insert(pair<string, string>("White", *request->white));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Huichenget"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HuichengetResponse(callApi(params, req, runtime));
}

HuichengetResponse Alibabacloud_AmpTest20201230::Client::huichenget(shared_ptr<HuichengetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return huichengetWithOptions(request, runtime);
}

HuichengetestResponse Alibabacloud_AmpTest20201230::Client::huichengetestWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Huichengetest"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HuichengetestResponse(callApi(params, req, runtime));
}

HuichengetestResponse Alibabacloud_AmpTest20201230::Client::huichengetest() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return huichengetestWithOptions(runtime);
}

