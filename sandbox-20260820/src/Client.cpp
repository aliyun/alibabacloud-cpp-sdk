#include <darabonba/Core.hpp>
#include <alibabacloud/Sandbox20260820.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/encode/Encoder.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::Sandbox20260820::Models;
namespace AlibabaCloud
{
namespace Sandbox20260820
{

AlibabaCloud::Sandbox20260820::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("sandbox", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 更新 Template
 *
 * @param request UpdateTemplateRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTemplateResponse
 */
UpdateTemplateResponse Client::updateTemplateWithOptions(const string &templateID, const UpdateTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTeamID()) {
    query["teamID"] = request.getTeamID();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "UpdateTemplate"},
    {"version" , "2026-08-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/2026-08-20/templates/" , Darabonba::Encode::Encoder::percentEncode(templateID))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTemplateResponse>();
}

/**
 * @summary 更新 Template
 *
 * @param request UpdateTemplateRequest
 * @return UpdateTemplateResponse
 */
UpdateTemplateResponse Client::updateTemplate(const string &templateID, const UpdateTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateTemplateWithOptions(templateID, request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace Sandbox20260820