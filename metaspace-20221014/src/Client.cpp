#include <darabonba/Core.hpp>
#include <alibabacloud/Metaspace20221014.hpp>
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
using namespace AlibabaCloud::Metaspace20221014::Models;
namespace AlibabaCloud
{
namespace Metaspace20221014
{

AlibabaCloud::Metaspace20221014::Client::Client(Config &config): OpenApiClient(config){
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
 * @summary 协同者发起流协同请求并获取协同ticket的API接口。
 *
 * @description ## 请求说明
 * - 该API为内部使用，主要用于协同者发起流协同。
 * - `DependOnMainStream`参数指定了是否依赖主流的状态来建立或断开协同流。
 * - 当`InitiatorType`设置为强制协同类型时（如`ADMIN_INITIATE_FORCE`或`COORDINATOR_INITIATE_FORCE`），将返回一个`CoordinateTicket`。
 * - 协同资源列表`CoordinationResourceCandidates`中必须包含至少一项资源信息，并且所有提供的资源ID、类型和地区等信息需准确无误。
 * - 确保`OwnerAliUid`与协同者的租户ID相同，否则可能无法成功发起协同请求。
 * - 对于AD用户，请务必填写`AdDomainName`字段。
 *
 * @param request ApplyCoordinationForCoordinatorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApplyCoordinationForCoordinatorResponse
 */
ApplyCoordinationForCoordinatorResponse Client::applyCoordinationForCoordinatorWithOptions(const ApplyCoordinationForCoordinatorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  json bodyFlat = {};
  if (!!request.hasCoordinationResourceCandidates()) {
    bodyFlat["CoordinationResourceCandidates"] = request.coordinationResourceCandidates();
  }

  if (!!request.hasInitiatorType()) {
    body["InitiatorType"] = request.initiatorType();
  }

  if (!!request.hasUuid()) {
    body["Uuid"] = request.uuid();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ApplyCoordinationForCoordinator"},
    {"version" , "2022-10-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ApplyCoordinationForCoordinatorResponse>();
}

/**
 * @summary 协同者发起流协同请求并获取协同ticket的API接口。
 *
 * @description ## 请求说明
 * - 该API为内部使用，主要用于协同者发起流协同。
 * - `DependOnMainStream`参数指定了是否依赖主流的状态来建立或断开协同流。
 * - 当`InitiatorType`设置为强制协同类型时（如`ADMIN_INITIATE_FORCE`或`COORDINATOR_INITIATE_FORCE`），将返回一个`CoordinateTicket`。
 * - 协同资源列表`CoordinationResourceCandidates`中必须包含至少一项资源信息，并且所有提供的资源ID、类型和地区等信息需准确无误。
 * - 确保`OwnerAliUid`与协同者的租户ID相同，否则可能无法成功发起协同请求。
 * - 对于AD用户，请务必填写`AdDomainName`字段。
 *
 * @param request ApplyCoordinationForCoordinatorRequest
 * @return ApplyCoordinationForCoordinatorResponse
 */
ApplyCoordinationForCoordinatorResponse Client::applyCoordinationForCoordinator(const ApplyCoordinationForCoordinatorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return applyCoordinationForCoordinatorWithOptions(request, runtime);
}

/**
 * @summary 取消协同请求
 *
 * @param request CancelCoordinationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelCoordinationResponse
 */
CancelCoordinationResponse Client::cancelCoordinationWithOptions(const CancelCoordinationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  json bodyFlat = {};
  if (!!request.hasCoIds()) {
    bodyFlat["CoIds"] = request.coIds();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CancelCoordination"},
    {"version" , "2022-10-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelCoordinationResponse>();
}

/**
 * @summary 取消协同请求
 *
 * @param request CancelCoordinationRequest
 * @return CancelCoordinationResponse
 */
CancelCoordinationResponse Client::cancelCoordination(const CancelCoordinationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelCoordinationWithOptions(request, runtime);
}

/**
 * @summary 获取协同流连接ticket
 *
 * @param request GetCoordinationTicketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCoordinationTicketResponse
 */
GetCoordinationTicketResponse Client::getCoordinationTicketWithOptions(const GetCoordinationTicketRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCoId()) {
    body["CoId"] = request.coId();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetCoordinationTicket"},
    {"version" , "2022-10-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCoordinationTicketResponse>();
}

/**
 * @summary 获取协同流连接ticket
 *
 * @param request GetCoordinationTicketRequest
 * @return GetCoordinationTicketResponse
 */
GetCoordinationTicketResponse Client::getCoordinationTicket(const GetCoordinationTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCoordinationTicketWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Metaspace20221014