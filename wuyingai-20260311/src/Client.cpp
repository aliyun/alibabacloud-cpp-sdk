#include <darabonba/Core.hpp>
#include <alibabacloud/WuyingAI20260311.hpp>
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
using namespace AlibabaCloud::WuyingAI20260311::Models;
namespace AlibabaCloud
{
namespace WuyingAI20260311
{

AlibabaCloud::WuyingAI20260311::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("wuyingai", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 获取用户进行对话所需的访问令牌（AccessToken），用于后续调用 Chat 接口进行身份验证。
 *
 * @param request GetAccessTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAccessTokenResponse
 */
GetAccessTokenResponse Client::getAccessTokenWithOptions(const GetAccessTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExternalUserId()) {
    query["ExternalUserId"] = request.getExternalUserId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAccessToken"},
    {"version" , "2026-03-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAccessTokenResponse>();
}

/**
 * @summary 获取用户进行对话所需的访问令牌（AccessToken），用于后续调用 Chat 接口进行身份验证。
 *
 * @param request GetAccessTokenRequest
 * @return GetAccessTokenResponse
 */
GetAccessTokenResponse Client::getAccessToken(const GetAccessTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAccessTokenWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace WuyingAI20260311