#include <darabonba/Core.hpp>
#include <alibabacloud/NlsCloudMeta20190228.hpp>
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
using namespace AlibabaCloud::NlsCloudMeta20190228::Models;
namespace AlibabaCloud
{
namespace NlsCloudMeta20190228
{

AlibabaCloud::NlsCloudMeta20190228::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("nls-cloud-meta", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 创建鉴权Token
 *
 * @param request CreateTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTokenResponse
 */
CreateTokenResponse Client::createTokenWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "CreateToken"},
    {"version" , "2019-02-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTokenResponse>();
}

/**
 * @summary 创建鉴权Token
 *
 * @return CreateTokenResponse
 */
CreateTokenResponse Client::createToken() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTokenWithOptions(runtime);
}
} // namespace AlibabaCloud
} // namespace NlsCloudMeta20190228