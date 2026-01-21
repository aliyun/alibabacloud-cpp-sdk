#include <darabonba/Core.hpp>
#include <alibabacloud/Bsn20150512.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Bsn20150512::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Bsn20150512
{

AlibabaCloud::Bsn20150512::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("bsn", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @param request GetBsnByResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBsnByResourceResponse
 */
GetBsnByResourceResponse Client::getBsnByResourceWithOptions(const GetBsnByResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliuid()) {
    query["aliuid"] = request.getAliuid();
  }

  if (!!request.hasResourceId()) {
    query["resourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["resourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetBsnByResource"},
    {"version" , "2015-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetBsnByResourceResponse>();
}

/**
 * @param request GetBsnByResourceRequest
 * @return GetBsnByResourceResponse
 */
GetBsnByResourceResponse Client::getBsnByResource(const GetBsnByResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBsnByResourceWithOptions(request, runtime);
}

/**
 * @summary 授权服务码，供虚商使用
 *
 * @param request GrantBsnCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GrantBsnCodeResponse
 */
GrantBsnCodeResponse Client::grantBsnCodeWithOptions(const GrantBsnCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliUid()) {
    query["AliUid"] = request.getAliUid();
  }

  if (!!request.hasGrantToAliuid()) {
    query["GrantToAliuid"] = request.getGrantToAliuid();
  }

  if (!!request.hasNotes()) {
    query["Notes"] = request.getNotes();
  }

  if (!!request.hasSn()) {
    query["Sn"] = request.getSn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GrantBsnCode"},
    {"version" , "2015-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GrantBsnCodeResponse>();
}

/**
 * @summary 授权服务码，供虚商使用
 *
 * @param request GrantBsnCodeRequest
 * @return GrantBsnCodeResponse
 */
GrantBsnCodeResponse Client::grantBsnCode(const GrantBsnCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return grantBsnCodeWithOptions(request, runtime);
}

/**
 * @param request ProductBindBsnRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ProductBindBsnResponse
 */
ProductBindBsnResponse Client::productBindBsnWithOptions(const ProductBindBsnRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliuid()) {
    query["aliuid"] = request.getAliuid();
  }

  if (!!request.hasNum()) {
    query["num"] = request.getNum();
  }

  if (!!request.hasResourceId()) {
    query["resourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["resourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ProductBindBsn"},
    {"version" , "2015-05-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ProductBindBsnResponse>();
}

/**
 * @param request ProductBindBsnRequest
 * @return ProductBindBsnResponse
 */
ProductBindBsnResponse Client::productBindBsn(const ProductBindBsnRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return productBindBsnWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Bsn20150512