#include <darabonba/Core.hpp>
#include <alibabacloud/Mobi20240411.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Mobi20240411::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Mobi20240411
{

AlibabaCloud::Mobi20240411::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("mobi", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 通过模板创建应用
 *
 * @param request CreateAppFromTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAppFromTemplateResponse
 */
CreateAppFromTemplateResponse Client::createAppFromTemplateWithOptions(const CreateAppFromTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActualParameters()) {
    query["ActualParameters"] = request.actualParameters();
  }

  if (!!request.hasAgentId()) {
    query["AgentId"] = request.agentId();
  }

  if (!!request.hasConnectionsContent()) {
    query["ConnectionsContent"] = request.connectionsContent();
  }

  if (!!request.hasDatabasesContent()) {
    query["DatabasesContent"] = request.databasesContent();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasFrom()) {
    query["From"] = request.from();
  }

  if (!!request.hasIcon()) {
    query["Icon"] = request.icon();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  if (!!request.hasVariablesContent()) {
    query["VariablesContent"] = request.variablesContent();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAppFromTemplate"},
    {"version" , "2024-04-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAppFromTemplateResponse>();
}

/**
 * @summary 通过模板创建应用
 *
 * @param request CreateAppFromTemplateRequest
 * @return CreateAppFromTemplateResponse
 */
CreateAppFromTemplateResponse Client::createAppFromTemplate(const CreateAppFromTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAppFromTemplateWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Mobi20240411