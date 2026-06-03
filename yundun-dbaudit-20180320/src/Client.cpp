#include <darabonba/Core.hpp>
#include <alibabacloud/YundunDbaudit20180320.hpp>
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
using namespace AlibabaCloud::YundunDbaudit20180320::Models;
namespace AlibabaCloud
{
namespace YundunDbaudit20180320
{

AlibabaCloud::YundunDbaudit20180320::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "central";
  checkConfig(config);
  this->_endpoint = getEndpoint("yundun-dbaudit", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 配置实例网络
 *
 * @param request ConfigInstanceNetworkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigInstanceNetworkResponse
 */
ConfigInstanceNetworkResponse Client::configInstanceNetworkWithOptions(const ConfigInstanceNetworkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPrivateWhiteList()) {
    query["PrivateWhiteList"] = request.getPrivateWhiteList();
  }

  if (!!request.hasPublicAccessControl()) {
    query["PublicAccessControl"] = request.getPublicAccessControl();
  }

  if (!!request.hasPublicWhiteList()) {
    query["PublicWhiteList"] = request.getPublicWhiteList();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSecurityGroupIds()) {
    query["SecurityGroupIds"] = request.getSecurityGroupIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ConfigInstanceNetwork"},
    {"version" , "2018-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfigInstanceNetworkResponse>();
}

/**
 * @summary 配置实例网络
 *
 * @param request ConfigInstanceNetworkRequest
 * @return ConfigInstanceNetworkResponse
 */
ConfigInstanceNetworkResponse Client::configInstanceNetwork(const ConfigInstanceNetworkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configInstanceNetworkWithOptions(request, runtime);
}

/**
 * @summary 获取实例属性
 *
 * @param request DescribeInstanceAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceAttributeResponse
 */
DescribeInstanceAttributeResponse Client::describeInstanceAttributeWithOptions(const DescribeInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceAttribute"},
    {"version" , "2018-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceAttributeResponse>();
}

/**
 * @summary 获取实例属性
 *
 * @param request DescribeInstanceAttributeRequest
 * @return DescribeInstanceAttributeResponse
 */
DescribeInstanceAttributeResponse Client::describeInstanceAttribute(const DescribeInstanceAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceAttributeWithOptions(request, runtime);
}

/**
 * @summary 获取实例列表
 *
 * @param request DescribeInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstancesResponse
 */
DescribeInstancesResponse Client::describeInstancesWithOptions(const DescribeInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceStatus()) {
    query["InstanceStatus"] = request.getInstanceStatus();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstances"},
    {"version" , "2018-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstancesResponse>();
}

/**
 * @summary 获取实例列表
 *
 * @param request DescribeInstancesRequest
 * @return DescribeInstancesResponse
 */
DescribeInstancesResponse Client::describeInstances(const DescribeInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstancesWithOptions(request, runtime);
}

/**
 * @summary 获取登录凭据
 *
 * @param request DescribeLoginTicketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLoginTicketResponse
 */
DescribeLoginTicketResponse Client::describeLoginTicketWithOptions(const DescribeLoginTicketRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLoginTicket"},
    {"version" , "2018-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLoginTicketResponse>();
}

/**
 * @summary 获取登录凭据
 *
 * @param request DescribeLoginTicketRequest
 * @return DescribeLoginTicketResponse
 */
DescribeLoginTicketResponse Client::describeLoginTicket(const DescribeLoginTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLoginTicketWithOptions(request, runtime);
}

/**
 * @summary 获取同步信息
 *
 * @param request DescribeSyncInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSyncInfoResponse
 */
DescribeSyncInfoResponse Client::describeSyncInfoWithOptions(const DescribeSyncInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSyncInfo"},
    {"version" , "2018-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSyncInfoResponse>();
}

/**
 * @summary 获取同步信息
 *
 * @param request DescribeSyncInfoRequest
 * @return DescribeSyncInfoResponse
 */
DescribeSyncInfoResponse Client::describeSyncInfo(const DescribeSyncInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSyncInfoWithOptions(request, runtime);
}

/**
 * @summary 获取Agent列表
 *
 * @param request GetAgentListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAgentListResponse
 */
GetAgentListResponse Client::getAgentListWithOptions(const GetAgentListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentIp()) {
    query["AgentIp"] = request.getAgentIp();
  }

  if (!!request.hasAgentOs()) {
    query["AgentOs"] = request.getAgentOs();
  }

  if (!!request.hasAgentStatus()) {
    query["AgentStatus"] = request.getAgentStatus();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAgentList"},
    {"version" , "2018-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAgentListResponse>();
}

/**
 * @summary 获取Agent列表
 *
 * @param request GetAgentListRequest
 * @return GetAgentListResponse
 */
GetAgentListResponse Client::getAgentList(const GetAgentListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAgentListWithOptions(request, runtime);
}

/**
 * @summary 查询审计统计数
 *
 * @param request GetAuditCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAuditCountResponse
 */
GetAuditCountResponse Client::getAuditCountWithOptions(const GetAuditCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBeginDate()) {
    query["BeginDate"] = request.getBeginDate();
  }

  if (!!request.hasDbId()) {
    query["DbId"] = request.getDbId();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAuditCount"},
    {"version" , "2018-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAuditCountResponse>();
}

/**
 * @summary 查询审计统计数
 *
 * @param request GetAuditCountRequest
 * @return GetAuditCountResponse
 */
GetAuditCountResponse Client::getAuditCount(const GetAuditCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAuditCountWithOptions(request, runtime);
}

/**
 * @summary 按时间分布查询审计统计数
 *
 * @param request GetAuditCountDistributionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAuditCountDistributionResponse
 */
GetAuditCountDistributionResponse Client::getAuditCountDistributionWithOptions(const GetAuditCountDistributionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBeginDate()) {
    query["BeginDate"] = request.getBeginDate();
  }

  if (!!request.hasDbId()) {
    query["DbId"] = request.getDbId();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAuditCountDistribution"},
    {"version" , "2018-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAuditCountDistributionResponse>();
}

/**
 * @summary 按时间分布查询审计统计数
 *
 * @param request GetAuditCountDistributionRequest
 * @return GetAuditCountDistributionResponse
 */
GetAuditCountDistributionResponse Client::getAuditCountDistribution(const GetAuditCountDistributionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAuditCountDistributionWithOptions(request, runtime);
}

/**
 * @summary 按数据源分组查询审计统计数
 *
 * @param request GetDBAuditCountListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDBAuditCountListResponse
 */
GetDBAuditCountListResponse Client::getDBAuditCountListWithOptions(const GetDBAuditCountListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBeginDate()) {
    query["BeginDate"] = request.getBeginDate();
  }

  if (!!request.hasDbId()) {
    query["DbId"] = request.getDbId();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDBAuditCountList"},
    {"version" , "2018-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDBAuditCountListResponse>();
}

/**
 * @summary 按数据源分组查询审计统计数
 *
 * @param request GetDBAuditCountListRequest
 * @return GetDBAuditCountListResponse
 */
GetDBAuditCountListResponse Client::getDBAuditCountList(const GetDBAuditCountListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDBAuditCountListWithOptions(request, runtime);
}

/**
 * @summary 获取单条语句详细信息
 *
 * @param request GetLogDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLogDetailResponse
 */
GetLogDetailResponse Client::getLogDetailWithOptions(const GetLogDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBeginDate()) {
    query["BeginDate"] = request.getBeginDate();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSqlId()) {
    query["SqlId"] = request.getSqlId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLogDetail"},
    {"version" , "2018-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLogDetailResponse>();
}

/**
 * @summary 获取单条语句详细信息
 *
 * @param request GetLogDetailRequest
 * @return GetLogDetailResponse
 */
GetLogDetailResponse Client::getLogDetail(const GetLogDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLogDetailWithOptions(request, runtime);
}

/**
 * @summary 获取语句详情列表
 *
 * @param request GetLogListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLogListResponse
 */
GetLogListResponse Client::getLogListWithOptions(const GetLogListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBeginDate()) {
    query["BeginDate"] = request.getBeginDate();
  }

  if (!!request.hasClientIpList()) {
    query["ClientIpList"] = request.getClientIpList();
  }

  if (!!request.hasClientProgramList()) {
    query["ClientProgramList"] = request.getClientProgramList();
  }

  if (!!request.hasDbHostList()) {
    query["DbHostList"] = request.getDbHostList();
  }

  if (!!request.hasDbId()) {
    query["DbId"] = request.getDbId();
  }

  if (!!request.hasDbUserList()) {
    query["DbUserList"] = request.getDbUserList();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIsSuccess()) {
    query["IsSuccess"] = request.getIsSuccess();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasMaxAffectRows()) {
    query["MaxAffectRows"] = request.getMaxAffectRows();
  }

  if (!!request.hasMaxExecCostUS()) {
    query["MaxExecCostUS"] = request.getMaxExecCostUS();
  }

  if (!!request.hasMinAffectRows()) {
    query["MinAffectRows"] = request.getMinAffectRows();
  }

  if (!!request.hasMinExecCostUS()) {
    query["MinExecCostUS"] = request.getMinExecCostUS();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRiskLevelList()) {
    query["RiskLevelList"] = request.getRiskLevelList();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasRuleTypeList()) {
    query["RuleTypeList"] = request.getRuleTypeList();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.getSessionId();
  }

  if (!!request.hasSqlId()) {
    query["SqlId"] = request.getSqlId();
  }

  if (!!request.hasSqlKey()) {
    query["SqlKey"] = request.getSqlKey();
  }

  if (!!request.hasSqlTypeList()) {
    query["SqlTypeList"] = request.getSqlTypeList();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLogList"},
    {"version" , "2018-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLogListResponse>();
}

/**
 * @summary 获取语句详情列表
 *
 * @param request GetLogListRequest
 * @return GetLogListResponse
 */
GetLogListResponse Client::getLogList(const GetLogListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLogListWithOptions(request, runtime);
}

/**
 * @summary 获取语句类型分布信息
 *
 * @param request GetLogTypeDistributionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLogTypeDistributionResponse
 */
GetLogTypeDistributionResponse Client::getLogTypeDistributionWithOptions(const GetLogTypeDistributionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBeginDate()) {
    query["BeginDate"] = request.getBeginDate();
  }

  if (!!request.hasDbId()) {
    query["DbId"] = request.getDbId();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLogTypeDistribution"},
    {"version" , "2018-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLogTypeDistributionResponse>();
}

/**
 * @summary 获取语句类型分布信息
 *
 * @param request GetLogTypeDistributionRequest
 * @return GetLogTypeDistributionResponse
 */
GetLogTypeDistributionResponse Client::getLogTypeDistribution(const GetLogTypeDistributionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLogTypeDistributionWithOptions(request, runtime);
}

/**
 * @summary 获取风险级别分布情况
 *
 * @param request GetRiskLevelDistributionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRiskLevelDistributionResponse
 */
GetRiskLevelDistributionResponse Client::getRiskLevelDistributionWithOptions(const GetRiskLevelDistributionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBeginDate()) {
    query["BeginDate"] = request.getBeginDate();
  }

  if (!!request.hasDbId()) {
    query["DbId"] = request.getDbId();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRiskLevelDistribution"},
    {"version" , "2018-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRiskLevelDistributionResponse>();
}

/**
 * @summary 获取风险级别分布情况
 *
 * @param request GetRiskLevelDistributionRequest
 * @return GetRiskLevelDistributionResponse
 */
GetRiskLevelDistributionResponse Client::getRiskLevelDistribution(const GetRiskLevelDistributionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRiskLevelDistributionWithOptions(request, runtime);
}

/**
 * @summary 获取会话分布情况
 *
 * @param request GetSessionDistributionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSessionDistributionResponse
 */
GetSessionDistributionResponse Client::getSessionDistributionWithOptions(const GetSessionDistributionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBeginDate()) {
    query["BeginDate"] = request.getBeginDate();
  }

  if (!!request.hasDbId()) {
    query["DbId"] = request.getDbId();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSessionDistribution"},
    {"version" , "2018-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSessionDistributionResponse>();
}

/**
 * @summary 获取会话分布情况
 *
 * @param request GetSessionDistributionRequest
 * @return GetSessionDistributionResponse
 */
GetSessionDistributionResponse Client::getSessionDistribution(const GetSessionDistributionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSessionDistributionWithOptions(request, runtime);
}

/**
 * @summary 获取指定日期会话列表
 *
 * @param request GetSessionListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSessionListResponse
 */
GetSessionListResponse Client::getSessionListWithOptions(const GetSessionListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActionList()) {
    query["ActionList"] = request.getActionList();
  }

  if (!!request.hasBeginDate()) {
    query["BeginDate"] = request.getBeginDate();
  }

  if (!!request.hasClientIpList()) {
    query["ClientIpList"] = request.getClientIpList();
  }

  if (!!request.hasClientProgramList()) {
    query["ClientProgramList"] = request.getClientProgramList();
  }

  if (!!request.hasDbHostList()) {
    query["DbHostList"] = request.getDbHostList();
  }

  if (!!request.hasDbId()) {
    query["DbId"] = request.getDbId();
  }

  if (!!request.hasDbUserList()) {
    query["DbUserList"] = request.getDbUserList();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.getSessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSessionList"},
    {"version" , "2018-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSessionListResponse>();
}

/**
 * @summary 获取指定日期会话列表
 *
 * @param request GetSessionListRequest
 * @return GetSessionListResponse
 */
GetSessionListResponse Client::getSessionList(const GetSessionListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSessionListWithOptions(request, runtime);
}

/**
 * @summary 获取数据源审计属性
 *
 * @param request ListDataSourceAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataSourceAttributeResponse
 */
ListDataSourceAttributeResponse Client::listDataSourceAttributeWithOptions(const ListDataSourceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbIds()) {
    query["DbIds"] = request.getDbIds();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataSourceAttribute"},
    {"version" , "2018-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataSourceAttributeResponse>();
}

/**
 * @summary 获取数据源审计属性
 *
 * @param request ListDataSourceAttributeRequest
 * @return ListDataSourceAttributeResponse
 */
ListDataSourceAttributeResponse Client::listDataSourceAttribute(const ListDataSourceAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataSourceAttributeWithOptions(request, runtime);
}

/**
 * @summary 查询数据源列表
 *
 * @param request ListDataSourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataSourcesResponse
 */
ListDataSourcesResponse Client::listDataSourcesWithOptions(const ListDataSourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbId()) {
    query["DbId"] = request.getDbId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataSources"},
    {"version" , "2018-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataSourcesResponse>();
}

/**
 * @summary 查询数据源列表
 *
 * @param request ListDataSourcesRequest
 * @return ListDataSourcesResponse
 */
ListDataSourcesResponse Client::listDataSources(const ListDataSourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataSourcesWithOptions(request, runtime);
}

/**
 * @summary 查询系统告警
 *
 * @param request ListSystemAlarmsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSystemAlarmsResponse
 */
ListSystemAlarmsResponse Client::listSystemAlarmsWithOptions(const ListSystemAlarmsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlarmType()) {
    query["AlarmType"] = request.getAlarmType();
  }

  if (!!request.hasBeginDate()) {
    query["BeginDate"] = request.getBeginDate();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSystemAlarms"},
    {"version" , "2018-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSystemAlarmsResponse>();
}

/**
 * @summary 查询系统告警
 *
 * @param request ListSystemAlarmsRequest
 * @return ListSystemAlarmsResponse
 */
ListSystemAlarmsResponse Client::listSystemAlarms(const ListSystemAlarmsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSystemAlarmsWithOptions(request, runtime);
}

/**
 * @summary 修改指定实例的信息
 *
 * @param request ModifyInstanceAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceAttributeResponse
 */
ModifyInstanceAttributeResponse Client::modifyInstanceAttributeWithOptions(const ModifyInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyInstanceAttribute"},
    {"version" , "2018-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceAttributeResponse>();
}

/**
 * @summary 修改指定实例的信息
 *
 * @param request ModifyInstanceAttributeRequest
 * @return ModifyInstanceAttributeResponse
 */
ModifyInstanceAttributeResponse Client::modifyInstanceAttribute(const ModifyInstanceAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceAttributeWithOptions(request, runtime);
}

/**
 * @summary 启动审计实例
 *
 * @param request StartInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartInstanceResponse
 */
StartInstanceResponse Client::startInstanceWithOptions(const StartInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasVswitchId()) {
    query["VswitchId"] = request.getVswitchId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartInstance"},
    {"version" , "2018-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartInstanceResponse>();
}

/**
 * @summary 启动审计实例
 *
 * @param request StartInstanceRequest
 * @return StartInstanceResponse
 */
StartInstanceResponse Client::startInstance(const StartInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startInstanceWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace YundunDbaudit20180320