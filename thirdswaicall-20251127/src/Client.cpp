#include <darabonba/Core.hpp>
#include <alibabacloud/ThirdswAicall20251127.hpp>
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
using namespace AlibabaCloud::ThirdswAicall20251127::Models;
namespace AlibabaCloud
{
namespace ThirdswAicall20251127
{

AlibabaCloud::ThirdswAicall20251127::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("thirdswaicall", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 外呼任务通话列表查询
 *
 * @param tmpReq ReadOutboundTaskCallListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReadOutboundTaskCallListResponse
 */
ReadOutboundTaskCallListResponse Client::readOutboundTaskCallListWithOptions(const ReadOutboundTaskCallListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ReadOutboundTaskCallListShrinkRequest request = ReadOutboundTaskCallListShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDisplayStatusList()) {
    request.setDisplayStatusListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDisplayStatusList(), "DisplayStatusList", "json"));
  }

  if (!!tmpReq.hasLabelTags()) {
    request.setLabelTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getLabelTags(), "LabelTags", "json"));
  }

  json body = {};
  if (!!request.hasCurrent()) {
    body["Current"] = request.getCurrent();
  }

  if (!!request.hasCustomerNameOrPhone()) {
    body["CustomerNameOrPhone"] = request.getCustomerNameOrPhone();
  }

  if (!!request.hasDisplayStatusListShrink()) {
    body["DisplayStatusList"] = request.getDisplayStatusListShrink();
  }

  if (!!request.hasLabelTagsShrink()) {
    body["LabelTags"] = request.getLabelTagsShrink();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasSize()) {
    body["Size"] = request.getSize();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasUserId()) {
    body["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ReadOutboundTaskCallList"},
    {"version" , "2025-11-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReadOutboundTaskCallListResponse>();
}

/**
 * @summary 外呼任务通话列表查询
 *
 * @param request ReadOutboundTaskCallListRequest
 * @return ReadOutboundTaskCallListResponse
 */
ReadOutboundTaskCallListResponse Client::readOutboundTaskCallList(const ReadOutboundTaskCallListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return readOutboundTaskCallListWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace ThirdswAicall20251127