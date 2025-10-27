#include <darabonba/Core.hpp>
#include <alibabacloud/Captcha20230305.hpp>
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
using namespace AlibabaCloud::Captcha20230305::Models;
namespace AlibabaCloud
{
namespace Captcha20230305
{

AlibabaCloud::Captcha20230305::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("captcha", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 验证码验证
 *
 * @param request VerifyCaptchaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return VerifyCaptchaResponse
 */
VerifyCaptchaResponse Client::verifyCaptchaWithOptions(const VerifyCaptchaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCaptchaVerifyParam()) {
    query["CaptchaVerifyParam"] = request.captchaVerifyParam();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "VerifyCaptcha"},
    {"version" , "2023-03-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<VerifyCaptchaResponse>();
}

/**
 * @summary 验证码验证
 *
 * @param request VerifyCaptchaRequest
 * @return VerifyCaptchaResponse
 */
VerifyCaptchaResponse Client::verifyCaptcha(const VerifyCaptchaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return verifyCaptchaWithOptions(request, runtime);
}

/**
 * @summary 验证码验证
 *
 * @param request VerifyIntelligentCaptchaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return VerifyIntelligentCaptchaResponse
 */
VerifyIntelligentCaptchaResponse Client::verifyIntelligentCaptchaWithOptions(const VerifyIntelligentCaptchaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCaptchaVerifyParam()) {
    body["CaptchaVerifyParam"] = request.captchaVerifyParam();
  }

  if (!!request.hasSceneId()) {
    body["SceneId"] = request.sceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "VerifyIntelligentCaptcha"},
    {"version" , "2023-03-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<VerifyIntelligentCaptchaResponse>();
}

/**
 * @summary 验证码验证
 *
 * @param request VerifyIntelligentCaptchaRequest
 * @return VerifyIntelligentCaptchaResponse
 */
VerifyIntelligentCaptchaResponse Client::verifyIntelligentCaptcha(const VerifyIntelligentCaptchaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return verifyIntelligentCaptchaWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Captcha20230305