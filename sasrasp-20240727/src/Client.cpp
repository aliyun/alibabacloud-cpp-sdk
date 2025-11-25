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
    query["AgentType"] = request.agentType();
  }

  if (!!request.hasEndTimestamp()) {
    query["EndTimestamp"] = request.endTimestamp();
  }

  if (!!request.hasStartTimestamp()) {
    query["StartTimestamp"] = request.startTimestamp();
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
    query["AgentType"] = request.agentType();
  }

  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasAttackHostId()) {
    query["AttackHostId"] = request.attackHostId();
  }

  if (!!request.hasAttackType()) {
    query["AttackType"] = request.attackType();
  }

  if (!!request.hasAttackUrl()) {
    query["AttackUrl"] = request.attackUrl();
  }

  if (!!request.hasEndTimestamp()) {
    query["EndTimestamp"] = request.endTimestamp();
  }

  if (!!request.hasHandlerType()) {
    query["HandlerType"] = request.handlerType();
  }

  if (!!request.hasHostname()) {
    query["Hostname"] = request.hostname();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.ip();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPid()) {
    query["Pid"] = request.pid();
  }

  if (!!request.hasRaspType()) {
    query["RaspType"] = request.raspType();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.region();
  }

  if (!!request.hasRemote()) {
    query["Remote"] = request.remote();
  }

  if (!!request.hasSeverity()) {
    query["Severity"] = request.severity();
  }

  if (!!request.hasStartTimestamp()) {
    query["StartTimestamp"] = request.startTimestamp();
  }

  if (!!request.hasUnionId()) {
    query["UnionId"] = request.unionId();
  }

  json body = {};
  if (!!request.hasLang()) {
    body["Lang"] = request.lang();
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