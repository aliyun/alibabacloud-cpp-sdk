#include <darabonba/Core.hpp>
#include <alibabacloud/Metaspace20220307.hpp>
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
using namespace AlibabaCloud::Metaspace20220307::Models;
namespace AlibabaCloud
{
namespace Metaspace20220307
{

AlibabaCloud::Metaspace20220307::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("metaspace", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 用协同码发起协同
 *
 * @param request ApplyCoordinationWithCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApplyCoordinationWithCodeResponse
 */
ApplyCoordinationWithCodeResponse Client::applyCoordinationWithCodeWithOptions(const ApplyCoordinationWithCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCoordinationCode()) {
    body["CoordinationCode"] = request.coordinationCode();
  }

  if (!!request.hasLoginRegionId()) {
    body["LoginRegionId"] = request.loginRegionId();
  }

  if (!!request.hasLoginToken()) {
    body["LoginToken"] = request.loginToken();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.sessionId();
  }

  if (!!request.hasUuid()) {
    body["Uuid"] = request.uuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ApplyCoordinationWithCode"},
    {"version" , "2022-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<ApplyCoordinationWithCodeResponse>();
}

/**
 * @summary 用协同码发起协同
 *
 * @param request ApplyCoordinationWithCodeRequest
 * @return ApplyCoordinationWithCodeResponse
 */
ApplyCoordinationWithCodeResponse Client::applyCoordinationWithCode(const ApplyCoordinationWithCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return applyCoordinationWithCodeWithOptions(request, runtime);
}

/**
 * @summary Owner主动结束本次协同，同步失效协同码
 *
 * @param request EndAllCoordinationByOwnerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EndAllCoordinationByOwnerResponse
 */
EndAllCoordinationByOwnerResponse Client::endAllCoordinationByOwnerWithOptions(const EndAllCoordinationByOwnerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLoginRegionId()) {
    body["LoginRegionId"] = request.loginRegionId();
  }

  if (!!request.hasLoginToken()) {
    body["LoginToken"] = request.loginToken();
  }

  if (!!request.hasResourceId()) {
    body["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceRegionId()) {
    body["ResourceRegionId"] = request.resourceRegionId();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.resourceType();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.sessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "EndAllCoordinationByOwner"},
    {"version" , "2022-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<EndAllCoordinationByOwnerResponse>();
}

/**
 * @summary Owner主动结束本次协同，同步失效协同码
 *
 * @param request EndAllCoordinationByOwnerRequest
 * @return EndAllCoordinationByOwnerResponse
 */
EndAllCoordinationByOwnerResponse Client::endAllCoordinationByOwner(const EndAllCoordinationByOwnerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return endAllCoordinationByOwnerWithOptions(request, runtime);
}

/**
 * @summary 生成协同码
 *
 * @param request GenerateCoordinationCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateCoordinationCodeResponse
 */
GenerateCoordinationCodeResponse Client::generateCoordinationCodeWithOptions(const GenerateCoordinationCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLoginRegionId()) {
    body["LoginRegionId"] = request.loginRegionId();
  }

  if (!!request.hasLoginToken()) {
    body["LoginToken"] = request.loginToken();
  }

  if (!!request.hasResourceId()) {
    body["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceName()) {
    body["ResourceName"] = request.resourceName();
  }

  if (!!request.hasResourceRegionId()) {
    body["ResourceRegionId"] = request.resourceRegionId();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.resourceType();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.sessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GenerateCoordinationCode"},
    {"version" , "2022-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<GenerateCoordinationCodeResponse>();
}

/**
 * @summary 生成协同码
 *
 * @param request GenerateCoordinationCodeRequest
 * @return GenerateCoordinationCodeResponse
 */
GenerateCoordinationCodeResponse Client::generateCoordinationCode(const GenerateCoordinationCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateCoordinationCodeWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Metaspace20220307