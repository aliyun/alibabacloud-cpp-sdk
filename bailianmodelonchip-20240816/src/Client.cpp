#include <darabonba/Core.hpp>
#include <alibabacloud/BailianModelOnChip20240816.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::BailianModelOnChip20240816::Models;
namespace AlibabaCloud
{
namespace BailianModelOnChip20240816
{

AlibabaCloud::BailianModelOnChip20240816::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("bailianmodelonchip", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
}


string Client::getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint) {
  if (!Darabonba::isNull(endpoint)) {
    return endpoint;
  }

  if (!Darabonba::isNull(endpointMap) && !Darabonba::isNull(endpointMap.at(regionId))) {
    return endpointMap.at(regionId);
  }

  return Utils::Utils::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

/**
 * @summary 主动交互消息传递
 *
 * @param request ActiveInteractionCreateRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ActiveInteractionCreateResponse
 */
ActiveInteractionCreateResponse Client::activeInteractionCreateWithOptions(const ActiveInteractionCreateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasImage()) {
    body["image"] = request.image();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ActiveInteractionCreate"},
    {"version" , "2024-08-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/open/api/v1/active/interaction/create")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ActiveInteractionCreateResponse>();
}

/**
 * @summary 主动交互消息传递
 *
 * @param request ActiveInteractionCreateRequest
 * @return ActiveInteractionCreateResponse
 */
ActiveInteractionCreateResponse Client::activeInteractionCreate(const ActiveInteractionCreateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return activeInteractionCreateWithOptions(request, headers, runtime);
}

/**
 * @summary 设备注册
 *
 * @param request DeviceRegisterRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeviceRegisterResponse
 */
DeviceRegisterResponse Client::deviceRegisterWithOptions(const DeviceRegisterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["appId"] = request.appId();
  }

  if (!!request.hasNonce()) {
    body["nonce"] = request.nonce();
  }

  if (!!request.hasRequestTime()) {
    body["requestTime"] = request.requestTime();
  }

  if (!!request.hasSignature()) {
    body["signature"] = request.signature();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeviceRegister"},
    {"version" , "2024-08-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/open/api/device/v1/register")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeviceRegisterResponse>();
}

/**
 * @summary 设备注册
 *
 * @param request DeviceRegisterRequest
 * @return DeviceRegisterResponse
 */
DeviceRegisterResponse Client::deviceRegister(const DeviceRegisterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deviceRegisterWithOptions(request, headers, runtime);
}

/**
 * @summary 获取网关校验Token
 *
 * @param request GetTokenRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTokenResponse
 */
GetTokenResponse Client::getTokenWithOptions(const GetTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["appId"] = request.appId();
  }

  if (!!request.hasDeviceName()) {
    body["deviceName"] = request.deviceName();
  }

  if (!!request.hasNonce()) {
    body["nonce"] = request.nonce();
  }

  if (!!request.hasRequestTime()) {
    body["requestTime"] = request.requestTime();
  }

  if (!!request.hasSignature()) {
    body["signature"] = request.signature();
  }

  if (!!request.hasTokenKey()) {
    body["tokenKey"] = request.tokenKey();
  }

  if (!!request.hasTokenType()) {
    body["tokenType"] = request.tokenType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetToken"},
    {"version" , "2024-08-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/open/api/auth/v1/token/get")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTokenResponse>();
}

/**
 * @summary 获取网关校验Token
 *
 * @param request GetTokenRequest
 * @return GetTokenResponse
 */
GetTokenResponse Client::getToken(const GetTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTokenWithOptions(request, headers, runtime);
}

/**
 * @summary 模型类型识别
 *
 * @param tmpReq ModelTypeDetermineRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModelTypeDetermineResponse
 */
ModelTypeDetermineResponse Client::modelTypeDetermineWithOptions(const ModelTypeDetermineRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModelTypeDetermineShrinkRequest request = ModelTypeDetermineShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasHistory()) {
    request.setHistoryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.history(), "history", "json"));
  }

  json body = {};
  if (!!request.hasHistoryShrink()) {
    body["history"] = request.historyShrink();
  }

  if (!!request.hasInputText()) {
    body["inputText"] = request.inputText();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModelTypeDetermine"},
    {"version" , "2024-08-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/open/api/v1/model/type/determine")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModelTypeDetermineResponse>();
}

/**
 * @summary 模型类型识别
 *
 * @param request ModelTypeDetermineRequest
 * @return ModelTypeDetermineResponse
 */
ModelTypeDetermineResponse Client::modelTypeDetermine(const ModelTypeDetermineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modelTypeDetermineWithOptions(request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace BailianModelOnChip20240816