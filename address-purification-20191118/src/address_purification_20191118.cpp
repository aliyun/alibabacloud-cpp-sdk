// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/address_purification_20191118.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

using namespace Alibabacloud_Address-purification20191118;

Alibabacloud_Address-purification20191118::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("address-purification"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Address-purification20191118::Client::getEndpoint(shared_ptr<string> productId,
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

CorrectAddressResponse Alibabacloud_Address-purification20191118::Client::correctAddressWithOptions(shared_ptr<CorrectAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appKey)) {
    body->insert(pair<string, string>("AppKey", *request->appKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->defaultCity)) {
    body->insert(pair<string, string>("DefaultCity", *request->defaultCity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->defaultDistrict)) {
    body->insert(pair<string, string>("DefaultDistrict", *request->defaultDistrict));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->defaultProvince)) {
    body->insert(pair<string, string>("DefaultProvince", *request->defaultProvince));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    body->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    body->insert(pair<string, string>("Text", *request->text));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CorrectAddress"))},
    {"version", boost::any(string("2019-11-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CorrectAddressResponse(callApi(params, req, runtime));
}

CorrectAddressResponse Alibabacloud_Address-purification20191118::Client::correctAddress(shared_ptr<CorrectAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return correctAddressWithOptions(request, runtime);
}

ExtractAddressResponse Alibabacloud_Address-purification20191118::Client::extractAddressWithOptions(shared_ptr<ExtractAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appKey)) {
    body->insert(pair<string, string>("AppKey", *request->appKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->defaultCity)) {
    body->insert(pair<string, string>("DefaultCity", *request->defaultCity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->defaultDistrict)) {
    body->insert(pair<string, string>("DefaultDistrict", *request->defaultDistrict));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->defaultProvince)) {
    body->insert(pair<string, string>("DefaultProvince", *request->defaultProvince));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    body->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    body->insert(pair<string, string>("Text", *request->text));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExtractAddress"))},
    {"version", boost::any(string("2019-11-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExtractAddressResponse(callApi(params, req, runtime));
}

ExtractAddressResponse Alibabacloud_Address-purification20191118::Client::extractAddress(shared_ptr<ExtractAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return extractAddressWithOptions(request, runtime);
}

ExtractNameResponse Alibabacloud_Address-purification20191118::Client::extractNameWithOptions(shared_ptr<ExtractNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appKey)) {
    body->insert(pair<string, string>("AppKey", *request->appKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->defaultCity)) {
    body->insert(pair<string, string>("DefaultCity", *request->defaultCity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->defaultDistrict)) {
    body->insert(pair<string, string>("DefaultDistrict", *request->defaultDistrict));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->defaultProvince)) {
    body->insert(pair<string, string>("DefaultProvince", *request->defaultProvince));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    body->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    body->insert(pair<string, string>("Text", *request->text));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExtractName"))},
    {"version", boost::any(string("2019-11-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExtractNameResponse(callApi(params, req, runtime));
}

ExtractNameResponse Alibabacloud_Address-purification20191118::Client::extractName(shared_ptr<ExtractNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return extractNameWithOptions(request, runtime);
}

ExtractPhoneResponse Alibabacloud_Address-purification20191118::Client::extractPhoneWithOptions(shared_ptr<ExtractPhoneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appKey)) {
    body->insert(pair<string, string>("AppKey", *request->appKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->defaultCity)) {
    body->insert(pair<string, string>("DefaultCity", *request->defaultCity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->defaultDistrict)) {
    body->insert(pair<string, string>("DefaultDistrict", *request->defaultDistrict));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->defaultProvince)) {
    body->insert(pair<string, string>("DefaultProvince", *request->defaultProvince));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    body->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    body->insert(pair<string, string>("Text", *request->text));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExtractPhone"))},
    {"version", boost::any(string("2019-11-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExtractPhoneResponse(callApi(params, req, runtime));
}

ExtractPhoneResponse Alibabacloud_Address-purification20191118::Client::extractPhone(shared_ptr<ExtractPhoneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return extractPhoneWithOptions(request, runtime);
}

GetAddressDivisionCodeResponse Alibabacloud_Address-purification20191118::Client::getAddressDivisionCodeWithOptions(shared_ptr<GetAddressDivisionCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appKey)) {
    body->insert(pair<string, string>("AppKey", *request->appKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->defaultCity)) {
    body->insert(pair<string, string>("DefaultCity", *request->defaultCity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->defaultDistrict)) {
    body->insert(pair<string, string>("DefaultDistrict", *request->defaultDistrict));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->defaultProvince)) {
    body->insert(pair<string, string>("DefaultProvince", *request->defaultProvince));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    body->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    body->insert(pair<string, string>("Text", *request->text));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAddressDivisionCode"))},
    {"version", boost::any(string("2019-11-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAddressDivisionCodeResponse(callApi(params, req, runtime));
}

GetAddressDivisionCodeResponse Alibabacloud_Address-purification20191118::Client::getAddressDivisionCode(shared_ptr<GetAddressDivisionCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAddressDivisionCodeWithOptions(request, runtime);
}

GetAddressSimilarityResponse Alibabacloud_Address-purification20191118::Client::getAddressSimilarityWithOptions(shared_ptr<GetAddressSimilarityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appKey)) {
    body->insert(pair<string, string>("AppKey", *request->appKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->defaultCity)) {
    body->insert(pair<string, string>("DefaultCity", *request->defaultCity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->defaultDistrict)) {
    body->insert(pair<string, string>("DefaultDistrict", *request->defaultDistrict));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->defaultProvince)) {
    body->insert(pair<string, string>("DefaultProvince", *request->defaultProvince));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    body->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    body->insert(pair<string, string>("Text", *request->text));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAddressSimilarity"))},
    {"version", boost::any(string("2019-11-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAddressSimilarityResponse(callApi(params, req, runtime));
}

GetAddressSimilarityResponse Alibabacloud_Address-purification20191118::Client::getAddressSimilarity(shared_ptr<GetAddressSimilarityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAddressSimilarityWithOptions(request, runtime);
}

GetZipcodeResponse Alibabacloud_Address-purification20191118::Client::getZipcodeWithOptions(shared_ptr<GetZipcodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appKey)) {
    body->insert(pair<string, string>("AppKey", *request->appKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->defaultCity)) {
    body->insert(pair<string, string>("DefaultCity", *request->defaultCity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->defaultDistrict)) {
    body->insert(pair<string, string>("DefaultDistrict", *request->defaultDistrict));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->defaultProvince)) {
    body->insert(pair<string, string>("DefaultProvince", *request->defaultProvince));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    body->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    body->insert(pair<string, string>("Text", *request->text));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetZipcode"))},
    {"version", boost::any(string("2019-11-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetZipcodeResponse(callApi(params, req, runtime));
}

GetZipcodeResponse Alibabacloud_Address-purification20191118::Client::getZipcode(shared_ptr<GetZipcodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getZipcodeWithOptions(request, runtime);
}

StructureAddressResponse Alibabacloud_Address-purification20191118::Client::structureAddressWithOptions(shared_ptr<StructureAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appKey)) {
    body->insert(pair<string, string>("AppKey", *request->appKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->defaultCity)) {
    body->insert(pair<string, string>("DefaultCity", *request->defaultCity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->defaultDistrict)) {
    body->insert(pair<string, string>("DefaultDistrict", *request->defaultDistrict));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->defaultProvince)) {
    body->insert(pair<string, string>("DefaultProvince", *request->defaultProvince));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    body->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    body->insert(pair<string, string>("Text", *request->text));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StructureAddress"))},
    {"version", boost::any(string("2019-11-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StructureAddressResponse(callApi(params, req, runtime));
}

StructureAddressResponse Alibabacloud_Address-purification20191118::Client::structureAddress(shared_ptr<StructureAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return structureAddressWithOptions(request, runtime);
}

