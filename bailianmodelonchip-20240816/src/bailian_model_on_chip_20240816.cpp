// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/bailian_model_on_chip_20240816.hpp>
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

using namespace Alibabacloud_BailianModelOnChip20240816;

Alibabacloud_BailianModelOnChip20240816::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("bailianmodelonchip"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_BailianModelOnChip20240816::Client::getEndpoint(shared_ptr<string> productId,
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

CreateChannelSignResponse Alibabacloud_BailianModelOnChip20240816::Client::createChannelSignWithOptions(shared_ptr<CreateChannelSignRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelName)) {
    body->insert(pair<string, string>("channelName", *request->channelName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contact)) {
    body->insert(pair<string, string>("contact", *request->contact));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phone)) {
    body->insert(pair<string, string>("phone", *request->phone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remark)) {
    body->insert(pair<string, string>("remark", *request->remark));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateChannelSign"))},
    {"version", boost::any(string("2024-08-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/open/api/v1/channel/create"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateChannelSignResponse(callApi(params, req, runtime));
}

CreateChannelSignResponse Alibabacloud_BailianModelOnChip20240816::Client::createChannelSign(shared_ptr<CreateChannelSignRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createChannelSignWithOptions(request, headers, runtime);
}

CreateProductResponse Alibabacloud_BailianModelOnChip20240816::Client::createProductWithOptions(shared_ptr<CreateProductRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->euid)) {
    body->insert(pair<string, string>("euid", *request->euid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productName)) {
    body->insert(pair<string, string>("productName", *request->productName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("tenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("userId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateProduct"))},
    {"version", boost::any(string("2024-08-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/open/api/v1/product/create"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateProductResponse(callApi(params, req, runtime));
}

CreateProductResponse Alibabacloud_BailianModelOnChip20240816::Client::createProduct(shared_ptr<CreateProductRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createProductWithOptions(request, headers, runtime);
}

DeleteProductResponse Alibabacloud_BailianModelOnChip20240816::Client::deleteProductWithOptions(shared_ptr<DeleteProductRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    body->insert(pair<string, string>("productKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("tenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("userId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteProduct"))},
    {"version", boost::any(string("2024-08-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/open/api/v1/product/delete"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteProductResponse(callApi(params, req, runtime));
}

DeleteProductResponse Alibabacloud_BailianModelOnChip20240816::Client::deleteProduct(shared_ptr<DeleteProductRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteProductWithOptions(request, headers, runtime);
}

DeviceRegisterResponse Alibabacloud_BailianModelOnChip20240816::Client::deviceRegisterWithOptions(shared_ptr<DeviceRegisterRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("productKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestTime)) {
    query->insert(pair<string, string>("requestTime", *request->requestTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->signature)) {
    query->insert(pair<string, string>("signature", *request->signature));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nonce)) {
    body->insert(pair<string, string>("nonce", *request->nonce));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeviceRegister"))},
    {"version", boost::any(string("2024-08-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/open/api/device/v1/register"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeviceRegisterResponse(callApi(params, req, runtime));
}

DeviceRegisterResponse Alibabacloud_BailianModelOnChip20240816::Client::deviceRegister(shared_ptr<DeviceRegisterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deviceRegisterWithOptions(request, headers, runtime);
}

GetChannelSignResponse Alibabacloud_BailianModelOnChip20240816::Client::getChannelSignWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetChannelSign"))},
    {"version", boost::any(string("2024-08-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/open/api/v1/channel/get"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetChannelSignResponse(callApi(params, req, runtime));
}

GetChannelSignResponse Alibabacloud_BailianModelOnChip20240816::Client::getChannelSign() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getChannelSignWithOptions(headers, runtime);
}

GetQuotaInfoResponse Alibabacloud_BailianModelOnChip20240816::Client::getQuotaInfoWithOptions(shared_ptr<GetQuotaInfoRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->recordId)) {
    body->insert(pair<string, long>("recordId", *request->recordId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetQuotaInfo"))},
    {"version", boost::any(string("2024-08-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/open/api/v1/quota/get"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetQuotaInfoResponse(callApi(params, req, runtime));
}

GetQuotaInfoResponse Alibabacloud_BailianModelOnChip20240816::Client::getQuotaInfo(shared_ptr<GetQuotaInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getQuotaInfoWithOptions(request, headers, runtime);
}

GetTokenResponse Alibabacloud_BailianModelOnChip20240816::Client::getTokenWithOptions(shared_ptr<GetTokenRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    body->insert(pair<string, string>("deviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nonce)) {
    body->insert(pair<string, string>("nonce", *request->nonce));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    body->insert(pair<string, string>("productKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestTime)) {
    body->insert(pair<string, string>("requestTime", *request->requestTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->signature)) {
    body->insert(pair<string, string>("signature", *request->signature));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tokenKey)) {
    body->insert(pair<string, string>("tokenKey", *request->tokenKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tokenType)) {
    body->insert(pair<string, string>("tokenType", *request->tokenType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetToken"))},
    {"version", boost::any(string("2024-08-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/open/api/auth/v1/token/get"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTokenResponse(callApi(params, req, runtime));
}

GetTokenResponse Alibabacloud_BailianModelOnChip20240816::Client::getToken(shared_ptr<GetTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getTokenWithOptions(request, headers, runtime);
}

HalfLLMAppCallResponse Alibabacloud_BailianModelOnChip20240816::Client::halfLLMAppCallWithOptions(shared_ptr<HalfLLMAppCallRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<HalfLLMAppCallShrinkRequest> request = make_shared<HalfLLMAppCallShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(tmpReq->bizParam)) {
    request->bizParamShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->bizParam, make_shared<string>("bizParam"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->modelTypeList)) {
    request->modelTypeListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->modelTypeList, make_shared<string>("modelTypeList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("appId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizParamShrink)) {
    body->insert(pair<string, string>("bizParam", *request->bizParamShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    body->insert(pair<string, string>("deviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelTypeListShrink)) {
    body->insert(pair<string, string>("modelTypeList", *request->modelTypeListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    body->insert(pair<string, string>("productKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    body->insert(pair<string, string>("sessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("tenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    body->insert(pair<string, string>("text", *request->text));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("HalfLLMAppCall"))},
    {"version", boost::any(string("2024-08-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/open/api/device/v1/half/llm/app/call"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HalfLLMAppCallResponse(callApi(params, req, runtime));
}

HalfLLMAppCallResponse Alibabacloud_BailianModelOnChip20240816::Client::halfLLMAppCall(shared_ptr<HalfLLMAppCallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return halfLLMAppCallWithOptions(request, headers, runtime);
}

HalfLLMChatResponse Alibabacloud_BailianModelOnChip20240816::Client::halfLLMChatWithOptions(shared_ptr<HalfLLMChatRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    body->insert(pair<string, string>("deviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableSearch)) {
    body->insert(pair<string, bool>("enableSearch", *request->enableSearch));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputText)) {
    body->insert(pair<string, string>("inputText", *request->inputText));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->model)) {
    body->insert(pair<string, string>("model", *request->model));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    body->insert(pair<string, string>("productKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prompt)) {
    body->insert(pair<string, string>("prompt", *request->prompt));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    body->insert(pair<string, string>("sessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->stream)) {
    body->insert(pair<string, bool>("stream", *request->stream));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("tenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("HalfLLMChat"))},
    {"version", boost::any(string("2024-08-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/open/api/device/v1/half/llm/chat"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HalfLLMChatResponse(callApi(params, req, runtime));
}

HalfLLMChatResponse Alibabacloud_BailianModelOnChip20240816::Client::halfLLMChat(shared_ptr<HalfLLMChatRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return halfLLMChatWithOptions(request, headers, runtime);
}

HalfLLMImageChatResponse Alibabacloud_BailianModelOnChip20240816::Client::halfLLMImageChatWithOptions(shared_ptr<HalfLLMImageChatRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    body->insert(pair<string, string>("deviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableSearch)) {
    body->insert(pair<string, bool>("enableSearch", *request->enableSearch));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageUrl)) {
    body->insert(pair<string, string>("imageUrl", *request->imageUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputText)) {
    body->insert(pair<string, string>("inputText", *request->inputText));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->model)) {
    body->insert(pair<string, string>("model", *request->model));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    body->insert(pair<string, string>("productKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prompt)) {
    body->insert(pair<string, string>("prompt", *request->prompt));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    body->insert(pair<string, string>("sessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("tenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("HalfLLMImageChat"))},
    {"version", boost::any(string("2024-08-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/open/api/device/v1/half/llm/image/chat"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HalfLLMImageChatResponse(callApi(params, req, runtime));
}

HalfLLMImageChatResponse Alibabacloud_BailianModelOnChip20240816::Client::halfLLMImageChat(shared_ptr<HalfLLMImageChatRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return halfLLMImageChatWithOptions(request, headers, runtime);
}

HalfLLMImageOcrResponse Alibabacloud_BailianModelOnChip20240816::Client::halfLLMImageOcrWithOptions(shared_ptr<HalfLLMImageOcrRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    body->insert(pair<string, string>("deviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageUrl)) {
    body->insert(pair<string, string>("imageUrl", *request->imageUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->model)) {
    body->insert(pair<string, string>("model", *request->model));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    body->insert(pair<string, string>("productKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("tenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("HalfLLMImageOcr"))},
    {"version", boost::any(string("2024-08-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/open/api/device/v1/half/llm/image/ocr"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HalfLLMImageOcrResponse(callApi(params, req, runtime));
}

HalfLLMImageOcrResponse Alibabacloud_BailianModelOnChip20240816::Client::halfLLMImageOcr(shared_ptr<HalfLLMImageOcrRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return halfLLMImageOcrWithOptions(request, headers, runtime);
}

HalfLLMTTSChatResponse Alibabacloud_BailianModelOnChip20240816::Client::halfLLMTTSChatWithOptions(shared_ptr<HalfLLMTTSChatRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    body->insert(pair<string, string>("deviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableSearch)) {
    body->insert(pair<string, bool>("enableSearch", *request->enableSearch));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->format)) {
    body->insert(pair<string, string>("format", *request->format));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->model)) {
    body->insert(pair<string, string>("model", *request->model));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pitchRate)) {
    body->insert(pair<string, long>("pitchRate", *request->pitchRate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    body->insert(pair<string, string>("productKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prompt)) {
    body->insert(pair<string, string>("prompt", *request->prompt));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sampleRate)) {
    body->insert(pair<string, long>("sampleRate", *request->sampleRate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    body->insert(pair<string, string>("sessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->speechRate)) {
    body->insert(pair<string, long>("speechRate", *request->speechRate));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->stream)) {
    body->insert(pair<string, bool>("stream", *request->stream));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("tenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    body->insert(pair<string, string>("text", *request->text));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    body->insert(pair<string, string>("url", *request->url));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->voice)) {
    body->insert(pair<string, string>("voice", *request->voice));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->volume)) {
    body->insert(pair<string, long>("volume", *request->volume));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("HalfLLMTTSChat"))},
    {"version", boost::any(string("2024-08-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/open/api/device/v1/half/llm/tts/chat"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HalfLLMTTSChatResponse(callApi(params, req, runtime));
}

HalfLLMTTSChatResponse Alibabacloud_BailianModelOnChip20240816::Client::halfLLMTTSChat(shared_ptr<HalfLLMTTSChatRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return halfLLMTTSChatWithOptions(request, headers, runtime);
}

QueryDevicePageResponse Alibabacloud_BailianModelOnChip20240816::Client::queryDevicePageWithOptions(shared_ptr<QueryDevicePageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    body->insert(pair<string, string>("deviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->disableStatus)) {
    body->insert(pair<string, long>("disableStatus", *request->disableStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageIndex)) {
    body->insert(pair<string, long>("pageIndex", *request->pageIndex));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    body->insert(pair<string, string>("productKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productName)) {
    body->insert(pair<string, string>("productName", *request->productName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    body->insert(pair<string, long>("status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDevicePage"))},
    {"version", boost::any(string("2024-08-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/open/api/device/v1/page"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDevicePageResponse(callApi(params, req, runtime));
}

QueryDevicePageResponse Alibabacloud_BailianModelOnChip20240816::Client::queryDevicePage(shared_ptr<QueryDevicePageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return queryDevicePageWithOptions(request, headers, runtime);
}

QueryProductPageResponse Alibabacloud_BailianModelOnChip20240816::Client::queryProductPageWithOptions(shared_ptr<QueryProductPageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<uint8_t>>(request->modelType)) {
    body->insert(pair<string, vector<uint8_t>>("modelType", *request->modelType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageIndex)) {
    body->insert(pair<string, long>("pageIndex", *request->pageIndex));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productName)) {
    body->insert(pair<string, string>("productName", *request->productName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("tenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("userId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryProductPage"))},
    {"version", boost::any(string("2024-08-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/open/api/v1/product/page"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryProductPageResponse(callApi(params, req, runtime));
}

QueryProductPageResponse Alibabacloud_BailianModelOnChip20240816::Client::queryProductPage(shared_ptr<QueryProductPageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return queryProductPageWithOptions(request, headers, runtime);
}

QueryProductQuotaPageResponse Alibabacloud_BailianModelOnChip20240816::Client::queryProductQuotaPageWithOptions(shared_ptr<QueryProductQuotaPageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageIndex)) {
    body->insert(pair<string, long>("pageIndex", *request->pageIndex));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    body->insert(pair<string, string>("productKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productName)) {
    body->insert(pair<string, string>("productName", *request->productName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->purchaseTimeEnd)) {
    body->insert(pair<string, string>("purchaseTimeEnd", *request->purchaseTimeEnd));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->purchaseTimeStart)) {
    body->insert(pair<string, string>("purchaseTimeStart", *request->purchaseTimeStart));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->purchaseType)) {
    body->insert(pair<string, long>("purchaseType", *request->purchaseType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("tenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("userId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryProductQuotaPage"))},
    {"version", boost::any(string("2024-08-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/open/api/v1/product/quotaPage"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryProductQuotaPageResponse(callApi(params, req, runtime));
}

QueryProductQuotaPageResponse Alibabacloud_BailianModelOnChip20240816::Client::queryProductQuotaPage(shared_ptr<QueryProductQuotaPageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return queryProductQuotaPageWithOptions(request, headers, runtime);
}

QueryTokenUsageResponse Alibabacloud_BailianModelOnChip20240816::Client::queryTokenUsageWithOptions(shared_ptr<QueryTokenUsageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endDate)) {
    body->insert(pair<string, string>("endDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    body->insert(pair<string, string>("productKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startDate)) {
    body->insert(pair<string, string>("startDate", *request->startDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("tenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryTokenUsage"))},
    {"version", boost::any(string("2024-08-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/open/api/v1/token/usage/query"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryTokenUsageResponse(callApi(params, req, runtime));
}

QueryTokenUsageResponse Alibabacloud_BailianModelOnChip20240816::Client::queryTokenUsage(shared_ptr<QueryTokenUsageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return queryTokenUsageWithOptions(request, headers, runtime);
}

RevokeChannelSignResponse Alibabacloud_BailianModelOnChip20240816::Client::revokeChannelSignWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RevokeChannelSign"))},
    {"version", boost::any(string("2024-08-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/open/api/v1/channel/revoke"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RevokeChannelSignResponse(callApi(params, req, runtime));
}

RevokeChannelSignResponse Alibabacloud_BailianModelOnChip20240816::Client::revokeChannelSign() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return revokeChannelSignWithOptions(headers, runtime);
}

UpdateDeviceStatusResponse Alibabacloud_BailianModelOnChip20240816::Client::updateDeviceStatusWithOptions(shared_ptr<UpdateDeviceStatusRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    body->insert(pair<string, string>("deviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    body->insert(pair<string, string>("productKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remark)) {
    body->insert(pair<string, string>("remark", *request->remark));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    body->insert(pair<string, long>("status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDeviceStatus"))},
    {"version", boost::any(string("2024-08-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/open/api/device/v1/update/status"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDeviceStatusResponse(callApi(params, req, runtime));
}

UpdateDeviceStatusResponse Alibabacloud_BailianModelOnChip20240816::Client::updateDeviceStatus(shared_ptr<UpdateDeviceStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateDeviceStatusWithOptions(request, headers, runtime);
}

UpdateImageQuotaResponse Alibabacloud_BailianModelOnChip20240816::Client::updateImageQuotaWithOptions(shared_ptr<UpdateImageQuotaRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->duration)) {
    body->insert(pair<string, long>("duration", *request->duration));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->durationType)) {
    body->insert(pair<string, long>("durationType", *request->durationType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->imageCount)) {
    body->insert(pair<string, long>("imageCount", *request->imageCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->licenseCount)) {
    body->insert(pair<string, long>("licenseCount", *request->licenseCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->packageType)) {
    body->insert(pair<string, long>("packageType", *request->packageType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    body->insert(pair<string, string>("productKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->purchaseType)) {
    body->insert(pair<string, long>("purchaseType", *request->purchaseType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->recordId)) {
    body->insert(pair<string, long>("recordId", *request->recordId));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->settlementAmount)) {
    body->insert(pair<string, double>("settlementAmount", *request->settlementAmount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("tenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->unitPrice)) {
    body->insert(pair<string, double>("unitPrice", *request->unitPrice));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("userId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateImageQuota"))},
    {"version", boost::any(string("2024-08-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/open/api/v1/quota/update/image"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateImageQuotaResponse(callApi(params, req, runtime));
}

UpdateImageQuotaResponse Alibabacloud_BailianModelOnChip20240816::Client::updateImageQuota(shared_ptr<UpdateImageQuotaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateImageQuotaWithOptions(request, headers, runtime);
}

UpdateQuotaResponse Alibabacloud_BailianModelOnChip20240816::Client::updateQuotaWithOptions(shared_ptr<UpdateQuotaRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->duration)) {
    body->insert(pair<string, long>("duration", *request->duration));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->durationType)) {
    body->insert(pair<string, long>("durationType", *request->durationType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->licenseCount)) {
    body->insert(pair<string, long>("licenseCount", *request->licenseCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxQps)) {
    body->insert(pair<string, long>("maxQps", *request->maxQps));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->packageType)) {
    body->insert(pair<string, long>("packageType", *request->packageType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    body->insert(pair<string, string>("productKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->purchaseType)) {
    body->insert(pair<string, long>("purchaseType", *request->purchaseType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->recordId)) {
    body->insert(pair<string, long>("recordId", *request->recordId));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->settlementAmount)) {
    body->insert(pair<string, double>("settlementAmount", *request->settlementAmount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("tenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tokenNumber)) {
    body->insert(pair<string, long>("tokenNumber", *request->tokenNumber));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->unitPrice)) {
    body->insert(pair<string, double>("unitPrice", *request->unitPrice));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("userId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateQuota"))},
    {"version", boost::any(string("2024-08-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/open/api/v1/quota/update"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateQuotaResponse(callApi(params, req, runtime));
}

UpdateQuotaResponse Alibabacloud_BailianModelOnChip20240816::Client::updateQuota(shared_ptr<UpdateQuotaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateQuotaWithOptions(request, headers, runtime);
}

