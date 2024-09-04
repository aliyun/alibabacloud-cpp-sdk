// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/traffic_fx_open_20240815.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

using namespace Alibabacloud_TrafficFxOpen20240815;

Alibabacloud_TrafficFxOpen20240815::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("trafficfxopen"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_TrafficFxOpen20240815::Client::getEndpoint(shared_ptr<string> productId,
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

ConvertUrlResponse Alibabacloud_TrafficFxOpen20240815::Client::convertUrlWithOptions(shared_ptr<ConvertUrlRequest> request, shared_ptr<ConvertUrlHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->countryCallingCode)) {
    body->insert(pair<string, string>("countryCallingCode", *request->countryCallingCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jumpUrl)) {
    body->insert(pair<string, string>("jumpUrl", *request->jumpUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phone)) {
    body->insert(pair<string, string>("phone", *request->phone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scene)) {
    body->insert(pair<string, string>("scene", *request->scene));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    body->insert(pair<string, string>("source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdId)) {
    body->insert(pair<string, string>("thirdId", *request->thirdId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uid)) {
    body->insert(pair<string, string>("uid", *request->uid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->xenv)) {
    body->insert(pair<string, string>("xenv", *request->xenv));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAirticketAccessToken)) {
    realHeaders->insert(pair<string, string>("xAcsAirticketAccessToken", Darabonba_Util::Client::toJSONString(headers->xAcsAirticketAccessToken)));
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAirticketLanguage)) {
    realHeaders->insert(pair<string, string>("xAcsAirticketLanguage", Darabonba_Util::Client::toJSONString(headers->xAcsAirticketLanguage)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ConvertUrl"))},
    {"version", boost::any(string("2024-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/distribution/trade/convertUrl"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ConvertUrlResponse(callApi(params, req, runtime));
}

ConvertUrlResponse Alibabacloud_TrafficFxOpen20240815::Client::convertUrl(shared_ptr<ConvertUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ConvertUrlHeaders> headers = make_shared<ConvertUrlHeaders>();
  return convertUrlWithOptions(request, headers, runtime);
}

GetTokenResponse Alibabacloud_TrafficFxOpen20240815::Client::getTokenWithOptions(shared_ptr<GetTokenRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appKey)) {
    query->insert(pair<string, string>("appKey", *request->appKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appSecret)) {
    query->insert(pair<string, string>("appSecret", *request->appSecret));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetToken"))},
    {"version", boost::any(string("2024-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/distribution/trade/getToken"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTokenResponse(callApi(params, req, runtime));
}

GetTokenResponse Alibabacloud_TrafficFxOpen20240815::Client::getToken(shared_ptr<GetTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getTokenWithOptions(request, headers, runtime);
}

SearchResponse Alibabacloud_TrafficFxOpen20240815::Client::searchWithOptions(shared_ptr<SearchRequest> request, shared_ptr<SearchHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->scene)) {
    body->insert(pair<string, string>("scene", *request->scene));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchParam)) {
    body->insert(pair<string, string>("searchParam", *request->searchParam));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    body->insert(pair<string, string>("source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->terminal)) {
    body->insert(pair<string, string>("terminal", *request->terminal));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("userId", *request->userId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAirticketAccessToken)) {
    realHeaders->insert(pair<string, string>("xAcsAirticketAccessToken", Darabonba_Util::Client::toJSONString(headers->xAcsAirticketAccessToken)));
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAirticketLanguage)) {
    realHeaders->insert(pair<string, string>("xAcsAirticketLanguage", Darabonba_Util::Client::toJSONString(headers->xAcsAirticketLanguage)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Search"))},
    {"version", boost::any(string("2024-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/distribution/trade/search"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SearchResponse(callApi(params, req, runtime));
}

SearchResponse Alibabacloud_TrafficFxOpen20240815::Client::search(shared_ptr<SearchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<SearchHeaders> headers = make_shared<SearchHeaders>();
  return searchWithOptions(request, headers, runtime);
}

