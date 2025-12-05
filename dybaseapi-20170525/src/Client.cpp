#include <darabonba/Core.hpp>
#include <alibabacloud/Dybaseapi20170525.hpp>
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
using namespace AlibabaCloud::Dybaseapi20170525::Models;
namespace AlibabaCloud
{
namespace Dybaseapi20170525
{

AlibabaCloud::Dybaseapi20170525::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("dybaseapi", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @param request QueryTokenForMnsQueueRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryTokenForMnsQueueResponse
 */
QueryTokenForMnsQueueResponse Client::queryTokenForMnsQueueWithOptions(const QueryTokenForMnsQueueRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMessageType()) {
    query["MessageType"] = request.messageType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasQueueName()) {
    query["QueueName"] = request.queueName();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryTokenForMnsQueue"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryTokenForMnsQueueResponse>();
}

/**
 * @param request QueryTokenForMnsQueueRequest
 * @return QueryTokenForMnsQueueResponse
 */
QueryTokenForMnsQueueResponse Client::queryTokenForMnsQueue(const QueryTokenForMnsQueueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryTokenForMnsQueueWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Dybaseapi20170525