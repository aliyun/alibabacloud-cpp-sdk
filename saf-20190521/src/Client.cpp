#include <darabonba/Core.hpp>
#include <alibabacloud/Saf20190521.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Saf20190521::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Saf20190521
{

AlibabaCloud::Saf20190521::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-hangzhou" , "saf.cn-shanghai.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("saf", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Detects risks. This API operation supports public service invocation and allows you to invoke custom events.
 *
 * @param request ExecuteRequestRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteRequestResponse
 */
ExecuteRequestResponse Client::executeRequestWithOptions(const ExecuteRequestRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasService()) {
    query["Service"] = request.getService();
  }

  if (!!request.hasServiceParameters()) {
    query["ServiceParameters"] = request.getServiceParameters();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ExecuteRequest"},
    {"version" , "2019-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteRequestResponse>();
}

/**
 * @summary Detects risks. This API operation supports public service invocation and allows you to invoke custom events.
 *
 * @param request ExecuteRequestRequest
 * @return ExecuteRequestResponse
 */
ExecuteRequestResponse Client::executeRequest(const ExecuteRequestRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return executeRequestWithOptions(request, runtime);
}

/**
 * @summary Detects risks. This operation supports only custom event calls and is available only in the Malaysia region.
 *
 * @param request ExecuteRequestMLRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteRequestMLResponse
 */
ExecuteRequestMLResponse Client::executeRequestMLWithOptions(const ExecuteRequestMLRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasService()) {
    query["Service"] = request.getService();
  }

  if (!!request.hasServiceParameters()) {
    query["ServiceParameters"] = request.getServiceParameters();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ExecuteRequestML"},
    {"version" , "2019-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteRequestMLResponse>();
}

/**
 * @summary Detects risks. This operation supports only custom event calls and is available only in the Malaysia region.
 *
 * @param request ExecuteRequestMLRequest
 * @return ExecuteRequestMLResponse
 */
ExecuteRequestMLResponse Client::executeRequestML(const ExecuteRequestMLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return executeRequestMLWithOptions(request, runtime);
}

/**
 * @summary Detects risks. This API allows you to invoke public services and custom events.
 *
 * @param request ExecuteRequestSGRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteRequestSGResponse
 */
ExecuteRequestSGResponse Client::executeRequestSGWithOptions(const ExecuteRequestSGRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasService()) {
    query["Service"] = request.getService();
  }

  if (!!request.hasServiceParameters()) {
    query["ServiceParameters"] = request.getServiceParameters();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ExecuteRequestSG"},
    {"version" , "2019-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteRequestSGResponse>();
}

/**
 * @summary Detects risks. This API allows you to invoke public services and custom events.
 *
 * @param request ExecuteRequestSGRequest
 * @return ExecuteRequestSGResponse
 */
ExecuteRequestSGResponse Client::executeRequestSG(const ExecuteRequestSGRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return executeRequestSGWithOptions(request, runtime);
}

/**
 * @summary Detects risks. This operation supports only custom event calls.
 *
 * @param request RequestDecisionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RequestDecisionResponse
 */
RequestDecisionResponse Client::requestDecisionWithOptions(const RequestDecisionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEventCode()) {
    query["EventCode"] = request.getEventCode();
  }

  if (!!request.hasServiceParameters()) {
    query["ServiceParameters"] = request.getServiceParameters();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RequestDecision"},
    {"version" , "2019-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RequestDecisionResponse>();
}

/**
 * @summary Detects risks. This operation supports only custom event calls.
 *
 * @param request RequestDecisionRequest
 * @return RequestDecisionResponse
 */
RequestDecisionResponse Client::requestDecision(const RequestDecisionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return requestDecisionWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Saf20190521