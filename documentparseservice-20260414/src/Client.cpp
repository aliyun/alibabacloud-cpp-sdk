#include <darabonba/Core.hpp>
#include <alibabacloud/DocumentParseService20260414.hpp>
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
using namespace AlibabaCloud::DocumentParseService20260414::Models;
namespace AlibabaCloud
{
namespace DocumentParseService20260414
{

AlibabaCloud::DocumentParseService20260414::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("documentparseservice", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 文档解析测试接口
 *
 * @param request DocumentParseOnlineApiRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DocumentParseOnlineApiResponse
 */
DocumentParseOnlineApiResponse Client::documentParseOnlineApiWithOptions(const DocumentParseOnlineApiRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasImageUrl()) {
    query["ImageUrl"] = request.getImageUrl();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DocumentParseOnlineApi"},
    {"version" , "2026-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DocumentParseOnlineApiResponse>();
}

/**
 * @summary 文档解析测试接口
 *
 * @param request DocumentParseOnlineApiRequest
 * @return DocumentParseOnlineApiResponse
 */
DocumentParseOnlineApiResponse Client::documentParseOnlineApi(const DocumentParseOnlineApiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return documentParseOnlineApiWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace DocumentParseService20260414