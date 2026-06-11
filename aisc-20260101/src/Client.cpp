#include <darabonba/Core.hpp>
#include <alibabacloud/AISC20260101.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::AISC20260101::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace AISC20260101
{

AlibabaCloud::AISC20260101::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("aisc", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 批量发起用户自定义Skill检测
 *
 * @param request CreateSkillFileCheckRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSkillFileCheckResponse
 */
CreateSkillFileCheckResponse Client::createSkillFileCheckWithOptions(const CreateSkillFileCheckRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFiles()) {
    query["Files"] = request.getFiles();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSkillFileCheck"},
    {"version" , "2026-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSkillFileCheckResponse>();
}

/**
 * @summary 批量发起用户自定义Skill检测
 *
 * @param request CreateSkillFileCheckRequest
 * @return CreateSkillFileCheckResponse
 */
CreateSkillFileCheckResponse Client::createSkillFileCheck(const CreateSkillFileCheckRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSkillFileCheckWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace AISC20260101