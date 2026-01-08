#include <darabonba/Core.hpp>
#include <alibabacloud/SasRasp20240727.hpp>
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
using namespace AlibabaCloud::SasRasp20240727::Models;
namespace AlibabaCloud
{
namespace SasRasp20240727
{

AlibabaCloud::SasRasp20240727::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("sasrasp", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary DescribeAttackProtectionCount
 *
 * @param request DescribeAttackProtectionCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAttackProtectionCountResponse
 */
DescribeAttackProtectionCountResponse Client::describeAttackProtectionCountWithOptions(const DescribeAttackProtectionCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentType()) {
    query["AgentType"] = request.getAgentType();
  }

  if (!!request.hasEndTimestamp()) {
    query["EndTimestamp"] = request.getEndTimestamp();
  }

  if (!!request.hasStartTimestamp()) {
    query["StartTimestamp"] = request.getStartTimestamp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAttackProtectionCount"},
    {"version" , "2024-07-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAttackProtectionCountResponse>();
}

/**
 * @summary DescribeAttackProtectionCount
 *
 * @param request DescribeAttackProtectionCountRequest
 * @return DescribeAttackProtectionCountResponse
 */
DescribeAttackProtectionCountResponse Client::describeAttackProtectionCount(const DescribeAttackProtectionCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAttackProtectionCountWithOptions(request, runtime);
}

/**
 * @summary 查询攻击项
 *
 * @param request DescribeAttacksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAttacksResponse
 */
DescribeAttacksResponse Client::describeAttacksWithOptions(const DescribeAttacksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentType()) {
    query["AgentType"] = request.getAgentType();
  }

  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasAttackHostId()) {
    query["AttackHostId"] = request.getAttackHostId();
  }

  if (!!request.hasAttackType()) {
    query["AttackType"] = request.getAttackType();
  }

  if (!!request.hasAttackUrl()) {
    query["AttackUrl"] = request.getAttackUrl();
  }

  if (!!request.hasEndTimestamp()) {
    query["EndTimestamp"] = request.getEndTimestamp();
  }

  if (!!request.hasHandleStatus()) {
    query["HandleStatus"] = request.getHandleStatus();
  }

  if (!!request.hasHandlerType()) {
    query["HandlerType"] = request.getHandlerType();
  }

  if (!!request.hasHostname()) {
    query["Hostname"] = request.getHostname();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.getIp();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPid()) {
    query["Pid"] = request.getPid();
  }

  if (!!request.hasRaspType()) {
    query["RaspType"] = request.getRaspType();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasRemote()) {
    query["Remote"] = request.getRemote();
  }

  if (!!request.hasSeverity()) {
    query["Severity"] = request.getSeverity();
  }

  if (!!request.hasStartTimestamp()) {
    query["StartTimestamp"] = request.getStartTimestamp();
  }

  if (!!request.hasUnionId()) {
    query["UnionId"] = request.getUnionId();
  }

  json body = {};
  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DescribeAttacks"},
    {"version" , "2024-07-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAttacksResponse>();
}

/**
 * @summary 查询攻击项
 *
 * @param request DescribeAttacksRequest
 * @return DescribeAttacksResponse
 */
DescribeAttacksResponse Client::describeAttacks(const DescribeAttacksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAttacksWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace SasRasp20240727