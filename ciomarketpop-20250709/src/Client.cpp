#include <darabonba/Core.hpp>
#include <alibabacloud/CioMarketPop20250709.hpp>
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
using namespace AlibabaCloud::CioMarketPop20250709::Models;
namespace AlibabaCloud
{
namespace CioMarketPop20250709
{

AlibabaCloud::CioMarketPop20250709::Client::Client(Config &config): OpenApiClient(config){
  this->_signatureAlgorithm = "v2";
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("ciomarketpop", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 全员营销
 *
 * @param request GetEveryOneSellsFormListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEveryOneSellsFormListResponse
 */
GetEveryOneSellsFormListResponse Client::getEveryOneSellsFormListWithOptions(const GetEveryOneSellsFormListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "GetEveryOneSellsFormList"},
    {"version" , "2025-07-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "array"}
  }));
  return json(callApi(params, req, runtime)).get<GetEveryOneSellsFormListResponse>();
}

/**
 * @summary 全员营销
 *
 * @param request GetEveryOneSellsFormListRequest
 * @return GetEveryOneSellsFormListResponse
 */
GetEveryOneSellsFormListResponse Client::getEveryOneSellsFormList(const GetEveryOneSellsFormListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getEveryOneSellsFormListWithOptions(request, runtime);
}

/**
 * @summary 推送钉钉消息
 *
 * @param tmpReq PushEveryOneSellMsgRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PushEveryOneSellMsgResponse
 */
PushEveryOneSellMsgResponse Client::pushEveryOneSellMsgWithOptions(const PushEveryOneSellMsgRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  PushEveryOneSellMsgShrinkRequest request = PushEveryOneSellMsgShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDingIdList()) {
    request.setDingIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.dingIdList(), "DingIdList", "json"));
  }

  json body = {};
  if (!!request.hasDingIdListShrink()) {
    body["DingIdList"] = request.dingIdListShrink();
  }

  if (!!request.hasPushMsg()) {
    body["PushMsg"] = request.pushMsg();
  }

  if (!!request.hasPushType()) {
    body["PushType"] = request.pushType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "PushEveryOneSellMsg"},
    {"version" , "2025-07-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "string"}
  }));
  return json(callApi(params, req, runtime)).get<PushEveryOneSellMsgResponse>();
}

/**
 * @summary 推送钉钉消息
 *
 * @param request PushEveryOneSellMsgRequest
 * @return PushEveryOneSellMsgResponse
 */
PushEveryOneSellMsgResponse Client::pushEveryOneSellMsg(const PushEveryOneSellMsgRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pushEveryOneSellMsgWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace CioMarketPop20250709