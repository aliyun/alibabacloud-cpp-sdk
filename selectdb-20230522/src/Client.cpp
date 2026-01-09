#include <darabonba/Core.hpp>
#include <alibabacloud/Selectdb20230522.hpp>
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
using namespace AlibabaCloud::Selectdb20230522::Models;
namespace AlibabaCloud
{
namespace Selectdb20230522
{

AlibabaCloud::Selectdb20230522::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("selectdb", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Applies for a public endpoint for an ApsaraDB for SelectDB instance.
 *
 * @param request AllocateInstancePublicConnectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AllocateInstancePublicConnectionResponse
 */
AllocateInstancePublicConnectionResponse Client::allocateInstancePublicConnectionWithOptions(const AllocateInstancePublicConnectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectionStringPrefix()) {
    query["ConnectionStringPrefix"] = request.getConnectionStringPrefix();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasNetType()) {
    query["NetType"] = request.getNetType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AllocateInstancePublicConnection"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AllocateInstancePublicConnectionResponse>();
}

/**
 * @summary Applies for a public endpoint for an ApsaraDB for SelectDB instance.
 *
 * @param request AllocateInstancePublicConnectionRequest
 * @return AllocateInstancePublicConnectionResponse
 */
AllocateInstancePublicConnectionResponse Client::allocateInstancePublicConnection(const AllocateInstancePublicConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return allocateInstancePublicConnectionWithOptions(request, runtime);
}

/**
 * @summary 资源转组
 *
 * @param request ChangeResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroupWithOptions(const ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChangeResourceGroup"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeResourceGroupResponse>();
}

/**
 * @summary 资源转组
 *
 * @param request ChangeResourceGroupRequest
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroup(const ChangeResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeResourceGroupWithOptions(request, runtime);
}

/**
 * @summary SelectDB实例创建前检查
 *
 * @param request CheckCreateDBInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckCreateDBInstanceResponse
 */
CheckCreateDBInstanceResponse Client::checkCreateDBInstanceWithOptions(const CheckCreateDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCacheSize()) {
    query["CacheSize"] = request.getCacheSize();
  }

  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.getChargeType();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasConnectionString()) {
    query["ConnectionString"] = request.getConnectionString();
  }

  if (!!request.hasDBInstanceClass()) {
    query["DBInstanceClass"] = request.getDBInstanceClass();
  }

  if (!!request.hasDBInstanceDescription()) {
    query["DBInstanceDescription"] = request.getDBInstanceDescription();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.getEngine();
  }

  if (!!request.hasEngineVersion()) {
    query["EngineVersion"] = request.getEngineVersion();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityIPList()) {
    query["SecurityIPList"] = request.getSecurityIPList();
  }

  if (!!request.hasUsedTime()) {
    query["UsedTime"] = request.getUsedTime();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckCreateDBInstance"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckCreateDBInstanceResponse>();
}

/**
 * @summary SelectDB实例创建前检查
 *
 * @param request CheckCreateDBInstanceRequest
 * @return CheckCreateDBInstanceResponse
 */
CheckCreateDBInstanceResponse Client::checkCreateDBInstance(const CheckCreateDBInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkCreateDBInstanceWithOptions(request, runtime);
}

/**
 * @summary 判断指定 IP 是否已经存在于网络白名单组
 *
 * @param request CheckIpExistsInSecurityIpListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckIpExistsInSecurityIpListResponse
 */
CheckIpExistsInSecurityIpListResponse Client::checkIpExistsInSecurityIpListWithOptions(const CheckIpExistsInSecurityIpListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckIpExistsInSecurityIpList"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckIpExistsInSecurityIpListResponse>();
}

/**
 * @summary 判断指定 IP 是否已经存在于网络白名单组
 *
 * @param request CheckIpExistsInSecurityIpListRequest
 * @return CheckIpExistsInSecurityIpListResponse
 */
CheckIpExistsInSecurityIpListResponse Client::checkIpExistsInSecurityIpList(const CheckIpExistsInSecurityIpListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkIpExistsInSecurityIpListWithOptions(request, runtime);
}

/**
 * @summary 检查服务关联角色
 *
 * @param request CheckServiceLinkedRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckServiceLinkedRoleResponse
 */
CheckServiceLinkedRoleResponse Client::checkServiceLinkedRoleWithOptions(const CheckServiceLinkedRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckServiceLinkedRole"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckServiceLinkedRoleResponse>();
}

/**
 * @summary 检查服务关联角色
 *
 * @param request CheckServiceLinkedRoleRequest
 * @return CheckServiceLinkedRoleResponse
 */
CheckServiceLinkedRoleResponse Client::checkServiceLinkedRole(const CheckServiceLinkedRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkServiceLinkedRoleWithOptions(request, runtime);
}

/**
 * @summary Creates a cluster in an ApsaraDB for SelectDB instance.
 *
 * @description > : For an instance that uses the pay-as-you-go billing method, you can create only pay-as-you-go clusters. For an instance that uses the subscription billing method, you can create pay-as-you-go or subscription clusters.
 *
 * @param request CreateDBClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDBClusterResponse
 */
CreateDBClusterResponse Client::createDBClusterWithOptions(const CreateDBClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCacheSize()) {
    query["CacheSize"] = request.getCacheSize();
  }

  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.getChargeType();
  }

  if (!!request.hasClusterNodeCount()) {
    query["ClusterNodeCount"] = request.getClusterNodeCount();
  }

  if (!!request.hasClusterNodeType()) {
    query["ClusterNodeType"] = request.getClusterNodeType();
  }

  if (!!request.hasDBClusterClass()) {
    query["DBClusterClass"] = request.getDBClusterClass();
  }

  if (!!request.hasDBClusterDescription()) {
    query["DBClusterDescription"] = request.getDBClusterDescription();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.getEngine();
  }

  if (!!request.hasEngineVersion()) {
    query["EngineVersion"] = request.getEngineVersion();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasScaleMax()) {
    query["ScaleMax"] = request.getScaleMax();
  }

  if (!!request.hasScaleMin()) {
    query["ScaleMin"] = request.getScaleMin();
  }

  if (!!request.hasUsedTime()) {
    query["UsedTime"] = request.getUsedTime();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  json body = {};
  if (!!request.hasDBInstanceId()) {
    body["DBInstanceId"] = request.getDBInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateDBCluster"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDBClusterResponse>();
}

/**
 * @summary Creates a cluster in an ApsaraDB for SelectDB instance.
 *
 * @description > : For an instance that uses the pay-as-you-go billing method, you can create only pay-as-you-go clusters. For an instance that uses the subscription billing method, you can create pay-as-you-go or subscription clusters.
 *
 * @param request CreateDBClusterRequest
 * @return CreateDBClusterResponse
 */
CreateDBClusterResponse Client::createDBCluster(const CreateDBClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDBClusterWithOptions(request, runtime);
}

/**
 * @summary Creates a binding relationship for clusters. If the zone-redundant storage (ZRS) deployment method is used, you can create a binding relationship between two clusters.
 *
 * @description This operation is supported only for instances that use the zone-redundant storage (ZRS) feature and meet the following requirements:
 * *   The instance clusters reside in different zones.
 * *   The billing method of the instance clusters is consistent.
 *
 * @param request CreateDBClusterBindingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDBClusterBindingResponse
 */
CreateDBClusterBindingResponse Client::createDBClusterBindingWithOptions(const CreateDBClusterBindingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBClusterIdBak()) {
    query["DBClusterIdBak"] = request.getDBClusterIdBak();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDBClusterBinding"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDBClusterBindingResponse>();
}

/**
 * @summary Creates a binding relationship for clusters. If the zone-redundant storage (ZRS) deployment method is used, you can create a binding relationship between two clusters.
 *
 * @description This operation is supported only for instances that use the zone-redundant storage (ZRS) feature and meet the following requirements:
 * *   The instance clusters reside in different zones.
 * *   The billing method of the instance clusters is consistent.
 *
 * @param request CreateDBClusterBindingRequest
 * @return CreateDBClusterBindingResponse
 */
CreateDBClusterBindingResponse Client::createDBClusterBinding(const CreateDBClusterBindingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDBClusterBindingWithOptions(request, runtime);
}

/**
 * @summary Creates an ApsaraDB for SelectDB instance.
 *
 * @param tmpReq CreateDBInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDBInstanceResponse
 */
CreateDBInstanceResponse Client::createDBInstanceWithOptions(const CreateDBInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateDBInstanceShrinkRequest request = CreateDBInstanceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasMultiZone()) {
    request.setMultiZoneShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMultiZone(), "MultiZone", "json"));
  }

  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTag(), "Tag", "json"));
  }

  json query = {};
  if (!!request.hasAddVPCIPs()) {
    query["AddVPCIPs"] = request.getAddVPCIPs();
  }

  if (!!request.hasCacheSize()) {
    query["CacheSize"] = request.getCacheSize();
  }

  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.getChargeType();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasClusterNodeCount()) {
    query["ClusterNodeCount"] = request.getClusterNodeCount();
  }

  if (!!request.hasClusterNodeType()) {
    query["ClusterNodeType"] = request.getClusterNodeType();
  }

  if (!!request.hasConnectionString()) {
    query["ConnectionString"] = request.getConnectionString();
  }

  if (!!request.hasDBInstanceClass()) {
    query["DBInstanceClass"] = request.getDBInstanceClass();
  }

  if (!!request.hasDBInstanceDescription()) {
    query["DBInstanceDescription"] = request.getDBInstanceDescription();
  }

  if (!!request.hasDeployScheme()) {
    query["DeployScheme"] = request.getDeployScheme();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.getEngine();
  }

  if (!!request.hasEngineVersion()) {
    query["EngineVersion"] = request.getEngineVersion();
  }

  if (!!request.hasMultiZoneShrink()) {
    query["MultiZone"] = request.getMultiZoneShrink();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasScaleMax()) {
    query["ScaleMax"] = request.getScaleMax();
  }

  if (!!request.hasScaleMin()) {
    query["ScaleMin"] = request.getScaleMin();
  }

  if (!!request.hasSecurityIPList()) {
    query["SecurityIPList"] = request.getSecurityIPList();
  }

  if (!!request.hasTagShrink()) {
    query["Tag"] = request.getTagShrink();
  }

  if (!!request.hasUsedTime()) {
    query["UsedTime"] = request.getUsedTime();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  json body = {};
  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.getResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateDBInstance"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDBInstanceResponse>();
}

/**
 * @summary Creates an ApsaraDB for SelectDB instance.
 *
 * @param request CreateDBInstanceRequest
 * @return CreateDBInstanceResponse
 */
CreateDBInstanceResponse Client::createDBInstance(const CreateDBInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDBInstanceWithOptions(request, runtime);
}

/**
 * @summary Creates a scheduled scaling rule.
 *
 * @param request CreateElasticRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateElasticRuleResponse
 */
CreateElasticRuleResponse Client::createElasticRuleWithOptions(const CreateElasticRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterClass()) {
    query["ClusterClass"] = request.getClusterClass();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasDbInstanceId()) {
    query["DbInstanceId"] = request.getDbInstanceId();
  }

  if (!!request.hasElasticRuleStartTime()) {
    query["ElasticRuleStartTime"] = request.getElasticRuleStartTime();
  }

  if (!!request.hasExecutionPeriod()) {
    query["ExecutionPeriod"] = request.getExecutionPeriod();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateElasticRule"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateElasticRuleResponse>();
}

/**
 * @summary Creates a scheduled scaling rule.
 *
 * @param request CreateElasticRuleRequest
 * @return CreateElasticRuleResponse
 */
CreateElasticRuleResponse Client::createElasticRule(const CreateElasticRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createElasticRuleWithOptions(request, runtime);
}

/**
 * @summary Creates a service-linked role for ApsaraDB for SelectDB.
 *
 * @param request CreateServiceLinkedRoleForSelectDBRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateServiceLinkedRoleForSelectDBResponse
 */
CreateServiceLinkedRoleForSelectDBResponse Client::createServiceLinkedRoleForSelectDBWithOptions(const CreateServiceLinkedRoleForSelectDBRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateServiceLinkedRoleForSelectDB"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateServiceLinkedRoleForSelectDBResponse>();
}

/**
 * @summary Creates a service-linked role for ApsaraDB for SelectDB.
 *
 * @param request CreateServiceLinkedRoleForSelectDBRequest
 * @return CreateServiceLinkedRoleForSelectDBResponse
 */
CreateServiceLinkedRoleForSelectDBResponse Client::createServiceLinkedRoleForSelectDB(const CreateServiceLinkedRoleForSelectDBRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createServiceLinkedRoleForSelectDBWithOptions(request, runtime);
}

/**
 * @summary 创建虚拟集群
 *
 * @param request CreateVirtualClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVirtualClusterResponse
 */
CreateVirtualClusterResponse Client::createVirtualClusterWithOptions(const CreateVirtualClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActiveClusterId()) {
    query["ActiveClusterId"] = request.getActiveClusterId();
  }

  if (!!request.hasClusterName()) {
    query["ClusterName"] = request.getClusterName();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasStandbyClusterId()) {
    query["StandbyClusterId"] = request.getStandbyClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateVirtualCluster"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateVirtualClusterResponse>();
}

/**
 * @summary 创建虚拟集群
 *
 * @param request CreateVirtualClusterRequest
 * @return CreateVirtualClusterResponse
 */
CreateVirtualClusterResponse Client::createVirtualCluster(const CreateVirtualClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createVirtualClusterWithOptions(request, runtime);
}

/**
 * @summary Deletes a cluster from an instance.
 *
 * @param request DeleteDBClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDBClusterResponse
 */
DeleteDBClusterResponse Client::deleteDBClusterWithOptions(const DeleteDBClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  json body = {};
  if (!!request.hasDBInstanceId()) {
    body["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.getResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteDBCluster"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDBClusterResponse>();
}

/**
 * @summary Deletes a cluster from an instance.
 *
 * @param request DeleteDBClusterRequest
 * @return DeleteDBClusterResponse
 */
DeleteDBClusterResponse Client::deleteDBCluster(const DeleteDBClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDBClusterWithOptions(request, runtime);
}

/**
 * @summary Deletes the binding relationship between two clusters for mutual backup.
 *
 * @param request DeleteDBClusterBindingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDBClusterBindingResponse
 */
DeleteDBClusterBindingResponse Client::deleteDBClusterBindingWithOptions(const DeleteDBClusterBindingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBClusterIdBak()) {
    query["DBClusterIdBak"] = request.getDBClusterIdBak();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDBClusterBinding"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDBClusterBindingResponse>();
}

/**
 * @summary Deletes the binding relationship between two clusters for mutual backup.
 *
 * @param request DeleteDBClusterBindingRequest
 * @return DeleteDBClusterBindingResponse
 */
DeleteDBClusterBindingResponse Client::deleteDBClusterBinding(const DeleteDBClusterBindingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDBClusterBindingWithOptions(request, runtime);
}

/**
 * @summary 删除DB实例
 *
 * @param request DeleteDBInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDBInstanceResponse
 */
DeleteDBInstanceResponse Client::deleteDBInstanceWithOptions(const DeleteDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  json body = {};
  if (!!request.hasDBInstanceId()) {
    body["DBInstanceId"] = request.getDBInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteDBInstance"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDBInstanceResponse>();
}

/**
 * @summary 删除DB实例
 *
 * @param request DeleteDBInstanceRequest
 * @return DeleteDBInstanceResponse
 */
DeleteDBInstanceResponse Client::deleteDBInstance(const DeleteDBInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDBInstanceWithOptions(request, runtime);
}

/**
 * @summary Deletes a scheduled scaling rule.
 *
 * @param request DeleteElasticRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteElasticRuleResponse
 */
DeleteElasticRuleResponse Client::deleteElasticRuleWithOptions(const DeleteElasticRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasDbInstanceId()) {
    query["DbInstanceId"] = request.getDbInstanceId();
  }

  if (!!request.hasProduct()) {
    query["Product"] = request.getProduct();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteElasticRule"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteElasticRuleResponse>();
}

/**
 * @summary Deletes a scheduled scaling rule.
 *
 * @param request DeleteElasticRuleRequest
 * @return DeleteElasticRuleResponse
 */
DeleteElasticRuleResponse Client::deleteElasticRule(const DeleteElasticRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteElasticRuleWithOptions(request, runtime);
}

/**
 * @summary 删除虚拟集群
 *
 * @param request DeleteVirtualClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteVirtualClusterResponse
 */
DeleteVirtualClusterResponse Client::deleteVirtualClusterWithOptions(const DeleteVirtualClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteVirtualCluster"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteVirtualClusterResponse>();
}

/**
 * @summary 删除虚拟集群
 *
 * @param request DeleteVirtualClusterRequest
 * @return DeleteVirtualClusterResponse
 */
DeleteVirtualClusterResponse Client::deleteVirtualCluster(const DeleteVirtualClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteVirtualClusterWithOptions(request, runtime);
}

/**
 * @summary Queries the information about all instance specifications.
 *
 * @param request DescribeAllDBInstanceClassRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAllDBInstanceClassResponse
 */
DescribeAllDBInstanceClassResponse Client::describeAllDBInstanceClassWithOptions(const DescribeAllDBInstanceClassRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAllDBInstanceClass"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAllDBInstanceClassResponse>();
}

/**
 * @summary Queries the information about all instance specifications.
 *
 * @param request DescribeAllDBInstanceClassRequest
 * @return DescribeAllDBInstanceClassResponse
 */
DescribeAllDBInstanceClassResponse Client::describeAllDBInstanceClass(const DescribeAllDBInstanceClassRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAllDBInstanceClassWithOptions(request, runtime);
}

/**
 * @summary Queries the configuration information about a cluster in an ApsaraDB for SelectDB instance.
 *
 * @param request DescribeDBClusterConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBClusterConfigResponse
 */
DescribeDBClusterConfigResponse Client::describeDBClusterConfigWithOptions(const DescribeDBClusterConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigKey()) {
    query["ConfigKey"] = request.getConfigKey();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBClusterConfig"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBClusterConfigResponse>();
}

/**
 * @summary Queries the configuration information about a cluster in an ApsaraDB for SelectDB instance.
 *
 * @param request DescribeDBClusterConfigRequest
 * @return DescribeDBClusterConfigResponse
 */
DescribeDBClusterConfigResponse Client::describeDBClusterConfig(const DescribeDBClusterConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClusterConfigWithOptions(request, runtime);
}

/**
 * @summary Queries the configuration change logs of a cluster in an ApsaraDB for SelectDB instance.
 *
 * @param request DescribeDBClusterConfigChangeLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBClusterConfigChangeLogsResponse
 */
DescribeDBClusterConfigChangeLogsResponse Client::describeDBClusterConfigChangeLogsWithOptions(const DescribeDBClusterConfigChangeLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigKey()) {
    query["ConfigKey"] = request.getConfigKey();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBClusterConfigChangeLogs"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBClusterConfigChangeLogsResponse>();
}

/**
 * @summary Queries the configuration change logs of a cluster in an ApsaraDB for SelectDB instance.
 *
 * @param request DescribeDBClusterConfigChangeLogsRequest
 * @return DescribeDBClusterConfigChangeLogsResponse
 */
DescribeDBClusterConfigChangeLogsResponse Client::describeDBClusterConfigChangeLogs(const DescribeDBClusterConfigChangeLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClusterConfigChangeLogsWithOptions(request, runtime);
}

/**
 * @summary 获取集群的各规格缓存限制
 *
 * @param request DescribeDBClusterStorageLimitationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBClusterStorageLimitationResponse
 */
DescribeDBClusterStorageLimitationResponse Client::describeDBClusterStorageLimitationWithOptions(const DescribeDBClusterStorageLimitationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBClusterStorageLimitation"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBClusterStorageLimitationResponse>();
}

/**
 * @summary 获取集群的各规格缓存限制
 *
 * @param request DescribeDBClusterStorageLimitationRequest
 * @return DescribeDBClusterStorageLimitationResponse
 */
DescribeDBClusterStorageLimitationResponse Client::describeDBClusterStorageLimitation(const DescribeDBClusterStorageLimitationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClusterStorageLimitationWithOptions(request, runtime);
}

/**
 * @summary Queries the details about an ApsaraDB for SelectDB instance.
 *
 * @param request DescribeDBInstanceAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstanceAttributeResponse
 */
DescribeDBInstanceAttributeResponse Client::describeDBInstanceAttributeWithOptions(const DescribeDBInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstanceAttribute"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstanceAttributeResponse>();
}

/**
 * @summary Queries the details about an ApsaraDB for SelectDB instance.
 *
 * @param request DescribeDBInstanceAttributeRequest
 * @return DescribeDBInstanceAttributeResponse
 */
DescribeDBInstanceAttributeResponse Client::describeDBInstanceAttribute(const DescribeDBInstanceAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries the network information about an ApsaraDB for SelectDB instance.
 *
 * @param request DescribeDBInstanceNetInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstanceNetInfoResponse
 */
DescribeDBInstanceNetInfoResponse Client::describeDBInstanceNetInfoWithOptions(const DescribeDBInstanceNetInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstanceNetInfo"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstanceNetInfoResponse>();
}

/**
 * @summary Queries the network information about an ApsaraDB for SelectDB instance.
 *
 * @param request DescribeDBInstanceNetInfoRequest
 * @return DescribeDBInstanceNetInfoResponse
 */
DescribeDBInstanceNetInfoResponse Client::describeDBInstanceNetInfo(const DescribeDBInstanceNetInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceNetInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the information about ApsaraDB for SelectDB instances.
 *
 * @param tmpReq DescribeDBInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstancesResponse
 */
DescribeDBInstancesResponse Client::describeDBInstancesWithOptions(const DescribeDBInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeDBInstancesShrinkRequest request = DescribeDBInstancesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTag(), "Tag", "json"));
  }

  json query = {};
  if (!!request.hasDBInstanceDescription()) {
    query["DBInstanceDescription"] = request.getDBInstanceDescription();
  }

  if (!!request.hasDBInstanceIds()) {
    query["DBInstanceIds"] = request.getDBInstanceIds();
  }

  if (!!request.hasDBInstanceStatus()) {
    query["DBInstanceStatus"] = request.getDBInstanceStatus();
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

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTagShrink()) {
    query["Tag"] = request.getTagShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstances"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstancesResponse>();
}

/**
 * @summary Queries the information about ApsaraDB for SelectDB instances.
 *
 * @param request DescribeDBInstancesRequest
 * @return DescribeDBInstancesResponse
 */
DescribeDBInstancesResponse Client::describeDBInstances(const DescribeDBInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries scheduled scaling rules.
 *
 * @param request DescribeElasticRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeElasticRulesResponse
 */
DescribeElasticRulesResponse Client::describeElasticRulesWithOptions(const DescribeElasticRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeElasticRules"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeElasticRulesResponse>();
}

/**
 * @summary Queries scheduled scaling rules.
 *
 * @param request DescribeElasticRulesRequest
 * @return DescribeElasticRulesResponse
 */
DescribeElasticRulesResponse Client::describeElasticRules(const DescribeElasticRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeElasticRulesWithOptions(request, runtime);
}

/**
 * @summary Queries available regions and zones.
 *
 * @param request DescribeRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegionsWithOptions(const DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRegions"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRegionsResponse>();
}

/**
 * @summary Queries available regions and zones.
 *
 * @param request DescribeRegionsRequest
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions(const DescribeRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRegionsWithOptions(request, runtime);
}

/**
 * @summary Queries the IP addresses in the whitelists of an ApsaraDB for SelectDB instance.
 *
 * @param request DescribeSecurityIPListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSecurityIPListResponse
 */
DescribeSecurityIPListResponse Client::describeSecurityIPListWithOptions(const DescribeSecurityIPListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSecurityIPList"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSecurityIPListResponse>();
}

/**
 * @summary Queries the IP addresses in the whitelists of an ApsaraDB for SelectDB instance.
 *
 * @param request DescribeSecurityIPListRequest
 * @return DescribeSecurityIPListResponse
 */
DescribeSecurityIPListResponse Client::describeSecurityIPList(const DescribeSecurityIPListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSecurityIPListWithOptions(request, runtime);
}

/**
 * @summary DescribeVSwitches
 *
 * @param request DescribeVSwitchesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVSwitchesResponse
 */
DescribeVSwitchesResponse Client::describeVSwitchesWithOptions(const DescribeVSwitchesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
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

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVSwitches"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVSwitchesResponse>();
}

/**
 * @summary DescribeVSwitches
 *
 * @param request DescribeVSwitchesRequest
 * @return DescribeVSwitchesResponse
 */
DescribeVSwitchesResponse Client::describeVSwitches(const DescribeVSwitchesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVSwitchesWithOptions(request, runtime);
}

/**
 * @summary DescribeZones
 *
 * @param request DescribeZonesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeZonesResponse
 */
DescribeZonesResponse Client::describeZonesWithOptions(const DescribeZonesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeZones"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeZonesResponse>();
}

/**
 * @summary DescribeZones
 *
 * @param request DescribeZonesRequest
 * @return DescribeZonesResponse
 */
DescribeZonesResponse Client::describeZones(const DescribeZonesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeZonesWithOptions(request, runtime);
}

/**
 * @summary Uses the scheduled scaling policy.
 *
 * @param request EnDisableScalingRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnDisableScalingRulesResponse
 */
EnDisableScalingRulesResponse Client::enDisableScalingRulesWithOptions(const EnDisableScalingRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasDbInstanceId()) {
    query["DbInstanceId"] = request.getDbInstanceId();
  }

  if (!!request.hasProduct()) {
    query["Product"] = request.getProduct();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasScalingRulesEnable()) {
    query["ScalingRulesEnable"] = request.getScalingRulesEnable();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnDisableScalingRules"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnDisableScalingRulesResponse>();
}

/**
 * @summary Uses the scheduled scaling policy.
 *
 * @param request EnDisableScalingRulesRequest
 * @return EnDisableScalingRulesResponse
 */
EnDisableScalingRulesResponse Client::enDisableScalingRules(const EnDisableScalingRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enDisableScalingRulesWithOptions(request, runtime);
}

/**
 * @summary Queries the pricing for creating a cluster in an ApsaraDB for SelectDB instance.
 *
 * @param request GetCreateBEClusterInquiryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCreateBEClusterInquiryResponse
 */
GetCreateBEClusterInquiryResponse Client::getCreateBEClusterInquiryWithOptions(const GetCreateBEClusterInquiryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCreateBEClusterInquiry"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCreateBEClusterInquiryResponse>();
}

/**
 * @summary Queries the pricing for creating a cluster in an ApsaraDB for SelectDB instance.
 *
 * @param request GetCreateBEClusterInquiryRequest
 * @return GetCreateBEClusterInquiryResponse
 */
GetCreateBEClusterInquiryResponse Client::getCreateBEClusterInquiry(const GetCreateBEClusterInquiryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCreateBEClusterInquiryWithOptions(request, runtime);
}

/**
 * @summary Queries the pricing for changing the specifications of a cluster in an ApsaraDB for SelectDB instance.
 *
 * @param request GetModifyBEClusterInquiryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetModifyBEClusterInquiryResponse
 */
GetModifyBEClusterInquiryResponse Client::getModifyBEClusterInquiryWithOptions(const GetModifyBEClusterInquiryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetModifyBEClusterInquiry"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetModifyBEClusterInquiryResponse>();
}

/**
 * @summary Queries the pricing for changing the specifications of a cluster in an ApsaraDB for SelectDB instance.
 *
 * @param request GetModifyBEClusterInquiryRequest
 * @return GetModifyBEClusterInquiryResponse
 */
GetModifyBEClusterInquiryResponse Client::getModifyBEClusterInquiry(const GetModifyBEClusterInquiryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getModifyBEClusterInquiryWithOptions(request, runtime);
}

/**
 * @summary Modifies the name of a cluster in an ApsaraDB for SelectDB instance.
 *
 * @param request ModifyBEClusterAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyBEClusterAttributeResponse
 */
ModifyBEClusterAttributeResponse Client::modifyBEClusterAttributeWithOptions(const ModifyBEClusterAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasInstanceAttributeType()) {
    query["InstanceAttributeType"] = request.getInstanceAttributeType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasValue()) {
    query["Value"] = request.getValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyBEClusterAttribute"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyBEClusterAttributeResponse>();
}

/**
 * @summary Modifies the name of a cluster in an ApsaraDB for SelectDB instance.
 *
 * @param request ModifyBEClusterAttributeRequest
 * @return ModifyBEClusterAttributeResponse
 */
ModifyBEClusterAttributeResponse Client::modifyBEClusterAttribute(const ModifyBEClusterAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyBEClusterAttributeWithOptions(request, runtime);
}

/**
 * @summary 集群变配
 *
 * @param request ModifyDBClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBClusterResponse
 */
ModifyDBClusterResponse Client::modifyDBClusterWithOptions(const ModifyDBClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCacheSize()) {
    query["CacheSize"] = request.getCacheSize();
  }

  if (!!request.hasClusterNodeCount()) {
    query["ClusterNodeCount"] = request.getClusterNodeCount();
  }

  if (!!request.hasClusterNodeType()) {
    query["ClusterNodeType"] = request.getClusterNodeType();
  }

  if (!!request.hasDBClusterClass()) {
    query["DBClusterClass"] = request.getDBClusterClass();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.getEngine();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasScaleMax()) {
    query["ScaleMax"] = request.getScaleMax();
  }

  if (!!request.hasScaleMin()) {
    query["ScaleMin"] = request.getScaleMin();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBCluster"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBClusterResponse>();
}

/**
 * @summary 集群变配
 *
 * @param request ModifyDBClusterRequest
 * @return ModifyDBClusterResponse
 */
ModifyDBClusterResponse Client::modifyDBCluster(const ModifyDBClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBClusterWithOptions(request, runtime);
}

/**
 * @summary Modifies the configurations of a cluster in an ApsaraDB for SelectDB instance.
 *
 * @param request ModifyDBClusterConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBClusterConfigResponse
 */
ModifyDBClusterConfigResponse Client::modifyDBClusterConfigWithOptions(const ModifyDBClusterConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigKey()) {
    query["ConfigKey"] = request.getConfigKey();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasParallelOperation()) {
    query["ParallelOperation"] = request.getParallelOperation();
  }

  if (!!request.hasParameters()) {
    query["Parameters"] = request.getParameters();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSwitchTimeMode()) {
    query["SwitchTimeMode"] = request.getSwitchTimeMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBClusterConfig"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBClusterConfigResponse>();
}

/**
 * @summary Modifies the configurations of a cluster in an ApsaraDB for SelectDB instance.
 *
 * @param request ModifyDBClusterConfigRequest
 * @return ModifyDBClusterConfigResponse
 */
ModifyDBClusterConfigResponse Client::modifyDBClusterConfig(const ModifyDBClusterConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBClusterConfigWithOptions(request, runtime);
}

/**
 * @summary Modifies the maintenance window or description of an ApsaraDB for SelectDB instance.
 *
 * @param request ModifyDBInstanceAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBInstanceAttributeResponse
 */
ModifyDBInstanceAttributeResponse Client::modifyDBInstanceAttributeWithOptions(const ModifyDBInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasInstanceAttributeType()) {
    query["InstanceAttributeType"] = request.getInstanceAttributeType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasValue()) {
    query["Value"] = request.getValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBInstanceAttribute"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBInstanceAttributeResponse>();
}

/**
 * @summary Modifies the maintenance window or description of an ApsaraDB for SelectDB instance.
 *
 * @param request ModifyDBInstanceAttributeRequest
 * @return ModifyDBInstanceAttributeResponse
 */
ModifyDBInstanceAttributeResponse Client::modifyDBInstanceAttribute(const ModifyDBInstanceAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceAttributeWithOptions(request, runtime);
}

/**
 * @summary Modifies a scheduled scaling rule.
 *
 * @param request ModifyElasticRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyElasticRuleResponse
 */
ModifyElasticRuleResponse Client::modifyElasticRuleWithOptions(const ModifyElasticRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterClass()) {
    query["ClusterClass"] = request.getClusterClass();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasDbInstanceId()) {
    query["DbInstanceId"] = request.getDbInstanceId();
  }

  if (!!request.hasElasticRuleStartTime()) {
    query["ElasticRuleStartTime"] = request.getElasticRuleStartTime();
  }

  if (!!request.hasExecutionPeriod()) {
    query["ExecutionPeriod"] = request.getExecutionPeriod();
  }

  if (!!request.hasProduct()) {
    query["Product"] = request.getProduct();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyElasticRule"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyElasticRuleResponse>();
}

/**
 * @summary Modifies a scheduled scaling rule.
 *
 * @param request ModifyElasticRuleRequest
 * @return ModifyElasticRuleResponse
 */
ModifyElasticRuleResponse Client::modifyElasticRule(const ModifyElasticRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyElasticRuleWithOptions(request, runtime);
}

/**
 * @summary Modifies the IP addresses in a whitelist of an ApsaraDB for SelectDB instance.
 *
 * @param request ModifySecurityIPListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySecurityIPListResponse
 */
ModifySecurityIPListResponse Client::modifySecurityIPListWithOptions(const ModifySecurityIPListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasModifyMode()) {
    query["ModifyMode"] = request.getModifyMode();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityIPList()) {
    query["SecurityIPList"] = request.getSecurityIPList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySecurityIPList"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySecurityIPListResponse>();
}

/**
 * @summary Modifies the IP addresses in a whitelist of an ApsaraDB for SelectDB instance.
 *
 * @param request ModifySecurityIPListRequest
 * @return ModifySecurityIPListResponse
 */
ModifySecurityIPListResponse Client::modifySecurityIPList(const ModifySecurityIPListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySecurityIPListWithOptions(request, runtime);
}

/**
 * @summary 修改虚拟集群
 *
 * @param request ModifyVirtualClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyVirtualClusterResponse
 */
ModifyVirtualClusterResponse Client::modifyVirtualClusterWithOptions(const ModifyVirtualClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActiveClusterId()) {
    query["ActiveClusterId"] = request.getActiveClusterId();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasStandbyClusterId()) {
    query["StandbyClusterId"] = request.getStandbyClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyVirtualCluster"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyVirtualClusterResponse>();
}

/**
 * @summary 修改虚拟集群
 *
 * @param request ModifyVirtualClusterRequest
 * @return ModifyVirtualClusterResponse
 */
ModifyVirtualClusterResponse Client::modifyVirtualCluster(const ModifyVirtualClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyVirtualClusterWithOptions(request, runtime);
}

/**
 * @summary Releases the public endpoint of an ApsaraDB for SelectDB instance.
 *
 * @param request ReleaseInstancePublicConnectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleaseInstancePublicConnectionResponse
 */
ReleaseInstancePublicConnectionResponse Client::releaseInstancePublicConnectionWithOptions(const ReleaseInstancePublicConnectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectionString()) {
    query["ConnectionString"] = request.getConnectionString();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReleaseInstancePublicConnection"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReleaseInstancePublicConnectionResponse>();
}

/**
 * @summary Releases the public endpoint of an ApsaraDB for SelectDB instance.
 *
 * @param request ReleaseInstancePublicConnectionRequest
 * @return ReleaseInstancePublicConnectionResponse
 */
ReleaseInstancePublicConnectionResponse Client::releaseInstancePublicConnection(const ReleaseInstancePublicConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return releaseInstancePublicConnectionWithOptions(request, runtime);
}

/**
 * @summary Resets the password of an account for an ApsaraDB for SelectDB instance.
 *
 * @param request ResetAccountPasswordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetAccountPasswordResponse
 */
ResetAccountPasswordResponse Client::resetAccountPasswordWithOptions(const ResetAccountPasswordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResetAccountPassword"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetAccountPasswordResponse>();
}

/**
 * @summary Resets the password of an account for an ApsaraDB for SelectDB instance.
 *
 * @param request ResetAccountPasswordRequest
 * @return ResetAccountPasswordResponse
 */
ResetAccountPasswordResponse Client::resetAccountPassword(const ResetAccountPasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetAccountPasswordWithOptions(request, runtime);
}

/**
 * @summary Restarts a cluster in an ApsaraDB for SelectDB instance.
 *
 * @param request RestartDBClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestartDBClusterResponse
 */
RestartDBClusterResponse Client::restartDBClusterWithOptions(const RestartDBClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasParallelOperation()) {
    query["ParallelOperation"] = request.getParallelOperation();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  json body = {};
  if (!!request.hasDBInstanceId()) {
    body["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.getResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RestartDBCluster"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RestartDBClusterResponse>();
}

/**
 * @summary Restarts a cluster in an ApsaraDB for SelectDB instance.
 *
 * @param request RestartDBClusterRequest
 * @return RestartDBClusterResponse
 */
RestartDBClusterResponse Client::restartDBCluster(const RestartDBClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return restartDBClusterWithOptions(request, runtime);
}

/**
 * @summary 暂停后恢复集群
 *
 * @param request StartBEClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartBEClusterResponse
 */
StartBEClusterResponse Client::startBEClusterWithOptions(const StartBEClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartBECluster"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartBEClusterResponse>();
}

/**
 * @summary 暂停后恢复集群
 *
 * @param request StartBEClusterRequest
 * @return StartBEClusterResponse
 */
StartBEClusterResponse Client::startBECluster(const StartBEClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startBEClusterWithOptions(request, runtime);
}

/**
 * @summary 暂停BE集群
 *
 * @param request StopBEClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopBEClusterResponse
 */
StopBEClusterResponse Client::stopBEClusterWithOptions(const StopBEClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopBECluster"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopBEClusterResponse>();
}

/**
 * @summary 暂停BE集群
 *
 * @param request StopBEClusterRequest
 * @return StopBEClusterResponse
 */
StopBEClusterResponse Client::stopBECluster(const StopBEClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopBEClusterWithOptions(request, runtime);
}

/**
 * @summary 资源打用户标签
 *
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TagResources"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TagResourcesResponse>();
}

/**
 * @summary 资源打用户标签
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary 资源去除用户标签
 *
 * @param request UntagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResourcesWithOptions(const UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAll()) {
    query["All"] = request.getAll();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTagKey()) {
    query["TagKey"] = request.getTagKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UntagResources"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UntagResourcesResponse>();
}

/**
 * @summary 资源去除用户标签
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @summary UpgradeDBInstanceDeployScheme
 *
 * @param tmpReq UpgradeDBInstanceDeploySchemeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeDBInstanceDeploySchemeResponse
 */
UpgradeDBInstanceDeploySchemeResponse Client::upgradeDBInstanceDeploySchemeWithOptions(const UpgradeDBInstanceDeploySchemeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpgradeDBInstanceDeploySchemeShrinkRequest request = UpgradeDBInstanceDeploySchemeShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasMultiZone()) {
    request.setMultiZoneShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMultiZone(), "MultiZone", "json"));
  }

  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasMultiZoneShrink()) {
    query["MultiZone"] = request.getMultiZoneShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradeDBInstanceDeployScheme"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradeDBInstanceDeploySchemeResponse>();
}

/**
 * @summary UpgradeDBInstanceDeployScheme
 *
 * @param request UpgradeDBInstanceDeploySchemeRequest
 * @return UpgradeDBInstanceDeploySchemeResponse
 */
UpgradeDBInstanceDeploySchemeResponse Client::upgradeDBInstanceDeployScheme(const UpgradeDBInstanceDeploySchemeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradeDBInstanceDeploySchemeWithOptions(request, runtime);
}

/**
 * @summary Updates the database engine version of an ApsaraDB for SelectDB instance.
 *
 * @param request UpgradeDBInstanceEngineVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeDBInstanceEngineVersionResponse
 */
UpgradeDBInstanceEngineVersionResponse Client::upgradeDBInstanceEngineVersionWithOptions(const UpgradeDBInstanceEngineVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasEngineVersion()) {
    query["EngineVersion"] = request.getEngineVersion();
  }

  if (!!request.hasParallelOperation()) {
    query["ParallelOperation"] = request.getParallelOperation();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSwitchTimeMode()) {
    query["SwitchTimeMode"] = request.getSwitchTimeMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradeDBInstanceEngineVersion"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradeDBInstanceEngineVersionResponse>();
}

/**
 * @summary Updates the database engine version of an ApsaraDB for SelectDB instance.
 *
 * @param request UpgradeDBInstanceEngineVersionRequest
 * @return UpgradeDBInstanceEngineVersionResponse
 */
UpgradeDBInstanceEngineVersionResponse Client::upgradeDBInstanceEngineVersion(const UpgradeDBInstanceEngineVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradeDBInstanceEngineVersionWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Selectdb20230522