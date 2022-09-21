// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/dytnsapi_20200217.hpp>
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

using namespace Alibabacloud_Dytnsapi20200217;

Alibabacloud_Dytnsapi20200217::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("central");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("dytnsapi"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Dytnsapi20200217::Client::getEndpoint(shared_ptr<string> productId,
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

DescribeEmptyNumberDetectResponse Alibabacloud_Dytnsapi20200217::Client::describeEmptyNumberDetectWithOptions(shared_ptr<DescribeEmptyNumberDetectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->encryptType)) {
    query->insert(pair<string, string>("EncryptType", *request->encryptType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phone)) {
    query->insert(pair<string, string>("Phone", *request->phone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEmptyNumberDetect"))},
    {"version", boost::any(string("2020-02-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEmptyNumberDetectResponse(callApi(params, req, runtime));
}

DescribeEmptyNumberDetectResponse Alibabacloud_Dytnsapi20200217::Client::describeEmptyNumberDetect(shared_ptr<DescribeEmptyNumberDetectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEmptyNumberDetectWithOptions(request, runtime);
}

DescribePhoneNumberAnalysisResponse Alibabacloud_Dytnsapi20200217::Client::describePhoneNumberAnalysisWithOptions(shared_ptr<DescribePhoneNumberAnalysisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authCode)) {
    query->insert(pair<string, string>("AuthCode", *request->authCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputNumber)) {
    query->insert(pair<string, string>("InputNumber", *request->inputNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mask)) {
    query->insert(pair<string, string>("Mask", *request->mask));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->numberType)) {
    query->insert(pair<string, long>("NumberType", *request->numberType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->rate)) {
    query->insert(pair<string, long>("Rate", *request->rate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePhoneNumberAnalysis"))},
    {"version", boost::any(string("2020-02-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePhoneNumberAnalysisResponse(callApi(params, req, runtime));
}

DescribePhoneNumberAnalysisResponse Alibabacloud_Dytnsapi20200217::Client::describePhoneNumberAnalysis(shared_ptr<DescribePhoneNumberAnalysisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePhoneNumberAnalysisWithOptions(request, runtime);
}

DescribePhoneNumberAttributeResponse Alibabacloud_Dytnsapi20200217::Client::describePhoneNumberAttributeWithOptions(shared_ptr<DescribePhoneNumberAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNumber)) {
    query->insert(pair<string, string>("PhoneNumber", *request->phoneNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePhoneNumberAttribute"))},
    {"version", boost::any(string("2020-02-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePhoneNumberAttributeResponse(callApi(params, req, runtime));
}

DescribePhoneNumberAttributeResponse Alibabacloud_Dytnsapi20200217::Client::describePhoneNumberAttribute(shared_ptr<DescribePhoneNumberAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePhoneNumberAttributeWithOptions(request, runtime);
}

DescribePhoneNumberOnlineTimeResponse Alibabacloud_Dytnsapi20200217::Client::describePhoneNumberOnlineTimeWithOptions(shared_ptr<DescribePhoneNumberOnlineTimeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authCode)) {
    query->insert(pair<string, string>("AuthCode", *request->authCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->carrier)) {
    query->insert(pair<string, string>("Carrier", *request->carrier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputNumber)) {
    query->insert(pair<string, string>("InputNumber", *request->inputNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mask)) {
    query->insert(pair<string, string>("Mask", *request->mask));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePhoneNumberOnlineTime"))},
    {"version", boost::any(string("2020-02-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePhoneNumberOnlineTimeResponse(callApi(params, req, runtime));
}

DescribePhoneNumberOnlineTimeResponse Alibabacloud_Dytnsapi20200217::Client::describePhoneNumberOnlineTime(shared_ptr<DescribePhoneNumberOnlineTimeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePhoneNumberOnlineTimeWithOptions(request, runtime);
}

DescribePhoneNumberOperatorAttributeResponse Alibabacloud_Dytnsapi20200217::Client::describePhoneNumberOperatorAttributeWithOptions(shared_ptr<DescribePhoneNumberOperatorAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authCode)) {
    query->insert(pair<string, string>("AuthCode", *request->authCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputNumber)) {
    query->insert(pair<string, string>("InputNumber", *request->inputNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mask)) {
    query->insert(pair<string, string>("Mask", *request->mask));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePhoneNumberOperatorAttribute"))},
    {"version", boost::any(string("2020-02-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePhoneNumberOperatorAttributeResponse(callApi(params, req, runtime));
}

DescribePhoneNumberOperatorAttributeResponse Alibabacloud_Dytnsapi20200217::Client::describePhoneNumberOperatorAttribute(shared_ptr<DescribePhoneNumberOperatorAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePhoneNumberOperatorAttributeWithOptions(request, runtime);
}

DescribePhoneNumberResaleResponse Alibabacloud_Dytnsapi20200217::Client::describePhoneNumberResaleWithOptions(shared_ptr<DescribePhoneNumberResaleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNumber)) {
    query->insert(pair<string, string>("PhoneNumber", *request->phoneNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->since)) {
    query->insert(pair<string, string>("Since", *request->since));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePhoneNumberResale"))},
    {"version", boost::any(string("2020-02-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePhoneNumberResaleResponse(callApi(params, req, runtime));
}

DescribePhoneNumberResaleResponse Alibabacloud_Dytnsapi20200217::Client::describePhoneNumberResale(shared_ptr<DescribePhoneNumberResaleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePhoneNumberResaleWithOptions(request, runtime);
}

DescribePhoneNumberStatusResponse Alibabacloud_Dytnsapi20200217::Client::describePhoneNumberStatusWithOptions(shared_ptr<DescribePhoneNumberStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNumber)) {
    query->insert(pair<string, string>("PhoneNumber", *request->phoneNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePhoneNumberStatus"))},
    {"version", boost::any(string("2020-02-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePhoneNumberStatusResponse(callApi(params, req, runtime));
}

DescribePhoneNumberStatusResponse Alibabacloud_Dytnsapi20200217::Client::describePhoneNumberStatus(shared_ptr<DescribePhoneNumberStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePhoneNumberStatusWithOptions(request, runtime);
}

DescribePhoneTwiceTelVerifyResponse Alibabacloud_Dytnsapi20200217::Client::describePhoneTwiceTelVerifyWithOptions(shared_ptr<DescribePhoneTwiceTelVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authCode)) {
    query->insert(pair<string, string>("AuthCode", *request->authCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputNumber)) {
    query->insert(pair<string, string>("InputNumber", *request->inputNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mask)) {
    query->insert(pair<string, string>("Mask", *request->mask));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePhoneTwiceTelVerify"))},
    {"version", boost::any(string("2020-02-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePhoneTwiceTelVerifyResponse(callApi(params, req, runtime));
}

DescribePhoneTwiceTelVerifyResponse Alibabacloud_Dytnsapi20200217::Client::describePhoneTwiceTelVerify(shared_ptr<DescribePhoneTwiceTelVerifyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePhoneTwiceTelVerifyWithOptions(request, runtime);
}

InvalidPhoneNumberFilterResponse Alibabacloud_Dytnsapi20200217::Client::invalidPhoneNumberFilterWithOptions(shared_ptr<InvalidPhoneNumberFilterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authCode)) {
    query->insert(pair<string, string>("AuthCode", *request->authCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputNumber)) {
    query->insert(pair<string, string>("InputNumber", *request->inputNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mask)) {
    query->insert(pair<string, string>("Mask", *request->mask));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InvalidPhoneNumberFilter"))},
    {"version", boost::any(string("2020-02-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InvalidPhoneNumberFilterResponse(callApi(params, req, runtime));
}

InvalidPhoneNumberFilterResponse Alibabacloud_Dytnsapi20200217::Client::invalidPhoneNumberFilter(shared_ptr<InvalidPhoneNumberFilterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return invalidPhoneNumberFilterWithOptions(request, runtime);
}

PhoneNumberEncryptResponse Alibabacloud_Dytnsapi20200217::Client::phoneNumberEncryptWithOptions(shared_ptr<PhoneNumberEncryptRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authCode)) {
    query->insert(pair<string, string>("AuthCode", *request->authCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputNumber)) {
    query->insert(pair<string, string>("InputNumber", *request->inputNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mask)) {
    query->insert(pair<string, string>("Mask", *request->mask));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PhoneNumberEncrypt"))},
    {"version", boost::any(string("2020-02-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PhoneNumberEncryptResponse(callApi(params, req, runtime));
}

PhoneNumberEncryptResponse Alibabacloud_Dytnsapi20200217::Client::phoneNumberEncrypt(shared_ptr<PhoneNumberEncryptRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return phoneNumberEncryptWithOptions(request, runtime);
}

PhoneNumberStatusForAccountResponse Alibabacloud_Dytnsapi20200217::Client::phoneNumberStatusForAccountWithOptions(shared_ptr<PhoneNumberStatusForAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authCode)) {
    query->insert(pair<string, string>("AuthCode", *request->authCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputNumber)) {
    query->insert(pair<string, string>("InputNumber", *request->inputNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mask)) {
    query->insert(pair<string, string>("Mask", *request->mask));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PhoneNumberStatusForAccount"))},
    {"version", boost::any(string("2020-02-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PhoneNumberStatusForAccountResponse(callApi(params, req, runtime));
}

PhoneNumberStatusForAccountResponse Alibabacloud_Dytnsapi20200217::Client::phoneNumberStatusForAccount(shared_ptr<PhoneNumberStatusForAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return phoneNumberStatusForAccountWithOptions(request, runtime);
}

PhoneNumberStatusForRealResponse Alibabacloud_Dytnsapi20200217::Client::phoneNumberStatusForRealWithOptions(shared_ptr<PhoneNumberStatusForRealRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authCode)) {
    query->insert(pair<string, string>("AuthCode", *request->authCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputNumber)) {
    query->insert(pair<string, string>("InputNumber", *request->inputNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mask)) {
    query->insert(pair<string, string>("Mask", *request->mask));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PhoneNumberStatusForReal"))},
    {"version", boost::any(string("2020-02-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PhoneNumberStatusForRealResponse(callApi(params, req, runtime));
}

PhoneNumberStatusForRealResponse Alibabacloud_Dytnsapi20200217::Client::phoneNumberStatusForReal(shared_ptr<PhoneNumberStatusForRealRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return phoneNumberStatusForRealWithOptions(request, runtime);
}

PhoneNumberStatusForSmsResponse Alibabacloud_Dytnsapi20200217::Client::phoneNumberStatusForSmsWithOptions(shared_ptr<PhoneNumberStatusForSmsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authCode)) {
    query->insert(pair<string, string>("AuthCode", *request->authCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputNumber)) {
    query->insert(pair<string, string>("InputNumber", *request->inputNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mask)) {
    query->insert(pair<string, string>("Mask", *request->mask));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PhoneNumberStatusForSms"))},
    {"version", boost::any(string("2020-02-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PhoneNumberStatusForSmsResponse(callApi(params, req, runtime));
}

PhoneNumberStatusForSmsResponse Alibabacloud_Dytnsapi20200217::Client::phoneNumberStatusForSms(shared_ptr<PhoneNumberStatusForSmsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return phoneNumberStatusForSmsWithOptions(request, runtime);
}

PhoneNumberStatusForVirtualResponse Alibabacloud_Dytnsapi20200217::Client::phoneNumberStatusForVirtualWithOptions(shared_ptr<PhoneNumberStatusForVirtualRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authCode)) {
    query->insert(pair<string, string>("AuthCode", *request->authCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputNumber)) {
    query->insert(pair<string, string>("InputNumber", *request->inputNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mask)) {
    query->insert(pair<string, string>("Mask", *request->mask));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PhoneNumberStatusForVirtual"))},
    {"version", boost::any(string("2020-02-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PhoneNumberStatusForVirtualResponse(callApi(params, req, runtime));
}

PhoneNumberStatusForVirtualResponse Alibabacloud_Dytnsapi20200217::Client::phoneNumberStatusForVirtual(shared_ptr<PhoneNumberStatusForVirtualRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return phoneNumberStatusForVirtualWithOptions(request, runtime);
}

PhoneNumberStatusForVoiceResponse Alibabacloud_Dytnsapi20200217::Client::phoneNumberStatusForVoiceWithOptions(shared_ptr<PhoneNumberStatusForVoiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authCode)) {
    query->insert(pair<string, string>("AuthCode", *request->authCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputNumber)) {
    query->insert(pair<string, string>("InputNumber", *request->inputNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mask)) {
    query->insert(pair<string, string>("Mask", *request->mask));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PhoneNumberStatusForVoice"))},
    {"version", boost::any(string("2020-02-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PhoneNumberStatusForVoiceResponse(callApi(params, req, runtime));
}

PhoneNumberStatusForVoiceResponse Alibabacloud_Dytnsapi20200217::Client::phoneNumberStatusForVoice(shared_ptr<PhoneNumberStatusForVoiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return phoneNumberStatusForVoiceWithOptions(request, runtime);
}

ThreeElementsVerificationResponse Alibabacloud_Dytnsapi20200217::Client::threeElementsVerificationWithOptions(shared_ptr<ThreeElementsVerificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authCode)) {
    query->insert(pair<string, string>("AuthCode", *request->authCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certCode)) {
    query->insert(pair<string, string>("CertCode", *request->certCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputNumber)) {
    query->insert(pair<string, string>("InputNumber", *request->inputNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mask)) {
    query->insert(pair<string, string>("Mask", *request->mask));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ThreeElementsVerification"))},
    {"version", boost::any(string("2020-02-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ThreeElementsVerificationResponse(callApi(params, req, runtime));
}

ThreeElementsVerificationResponse Alibabacloud_Dytnsapi20200217::Client::threeElementsVerification(shared_ptr<ThreeElementsVerificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return threeElementsVerificationWithOptions(request, runtime);
}

TwoElementsVerificationResponse Alibabacloud_Dytnsapi20200217::Client::twoElementsVerificationWithOptions(shared_ptr<TwoElementsVerificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authCode)) {
    query->insert(pair<string, string>("AuthCode", *request->authCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputNumber)) {
    query->insert(pair<string, string>("InputNumber", *request->inputNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mask)) {
    query->insert(pair<string, string>("Mask", *request->mask));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TwoElementsVerification"))},
    {"version", boost::any(string("2020-02-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TwoElementsVerificationResponse(callApi(params, req, runtime));
}

TwoElementsVerificationResponse Alibabacloud_Dytnsapi20200217::Client::twoElementsVerification(shared_ptr<TwoElementsVerificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return twoElementsVerificationWithOptions(request, runtime);
}

