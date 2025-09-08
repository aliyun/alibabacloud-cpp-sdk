#include <darabonba/Core.hpp>
#include <alibabacloud/Appflow20230904.hpp>
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
using namespace AlibabaCloud::Appflow20230904::Models;
namespace AlibabaCloud
{
namespace Appflow20230904
{

AlibabaCloud::Appflow20230904::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("appflow", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Generate Login Session Token
 *
 * @param request GenerateUserSessionTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateUserSessionTokenResponse
 */
GenerateUserSessionTokenResponse Client::generateUserSessionTokenWithOptions(const GenerateUserSessionTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChatbotId()) {
    query["ChatbotId"] = request.chatbotId();
  }

  if (!!request.hasExpireSecond()) {
    query["ExpireSecond"] = request.expireSecond();
  }

  if (!!request.hasExtraInfo()) {
    query["ExtraInfo"] = request.extraInfo();
  }

  if (!!request.hasIntegrateId()) {
    query["IntegrateId"] = request.integrateId();
  }

  if (!!request.hasUserAvatar()) {
    query["UserAvatar"] = request.userAvatar();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.userName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GenerateUserSessionToken"},
    {"version" , "2023-09-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateUserSessionTokenResponse>();
}

/**
 * @summary Generate Login Session Token
 *
 * @param request GenerateUserSessionTokenRequest
 * @return GenerateUserSessionTokenResponse
 */
GenerateUserSessionTokenResponse Client::generateUserSessionToken(const GenerateUserSessionTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateUserSessionTokenWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Appflow20230904