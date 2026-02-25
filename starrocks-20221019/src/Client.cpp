#include <darabonba/Core.hpp>
#include <alibabacloud/Starrocks20221019.hpp>
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
using namespace AlibabaCloud::Starrocks20221019::Models;
namespace AlibabaCloud
{
namespace Starrocks20221019
{

AlibabaCloud::Starrocks20221019::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("starrocks", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 新建网关
 *
 * @param request AddGatewayRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddGatewayResponse
 */
AddGatewayResponse Client::addGatewayWithOptions(const AddGatewayRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFeNodeNumber()) {
    query["FeNodeNumber"] = request.getFeNodeNumber();
  }

  if (!!request.hasGatewayName()) {
    query["GatewayName"] = request.getGatewayName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddGateway"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/gateway/add")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddGatewayResponse>();
}

/**
 * @summary 新建网关
 *
 * @param request AddGatewayRequest
 * @return AddGatewayResponse
 */
AddGatewayResponse Client::addGateway(const AddGatewayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return addGatewayWithOptions(request, headers, runtime);
}

/**
 * @summary This interface is used to modify the resource group of a Serverless StarRocks instance.
 *
 * @param request ChangeResourceGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroupWithOptions(const ChangeResourceGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNewResourceGroupId()) {
    query["NewResourceGroupId"] = request.getNewResourceGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChangeResourceGroup"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/resourceGroup/change")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeResourceGroupResponse>();
}

/**
 * @summary This interface is used to modify the resource group of a Serverless StarRocks instance.
 *
 * @param request ChangeResourceGroupRequest
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroup(const ChangeResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return changeResourceGroupWithOptions(request, headers, runtime);
}

/**
 * @summary 创建StarRocks集群
 *
 * @param request CreateInstanceV1Request
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateInstanceV1Response
 */
CreateInstanceV1Response Client::createInstanceV1WithOptions(const CreateInstanceV1Request &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAdminPassword()) {
    body["AdminPassword"] = request.getAdminPassword();
  }

  if (!!request.hasAgentNodeGroup()) {
    body["AgentNodeGroup"] = request.getAgentNodeGroup();
  }

  if (!!request.hasAutoPay()) {
    body["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasAutoRenew()) {
    body["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasBackendNodeGroups()) {
    body["BackendNodeGroups"] = request.getBackendNodeGroups();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDlfCatalogName()) {
    body["DlfCatalogName"] = request.getDlfCatalogName();
  }

  if (!!request.hasDlfCatalogType()) {
    body["DlfCatalogType"] = request.getDlfCatalogType();
  }

  if (!!request.hasDuration()) {
    body["Duration"] = request.getDuration();
  }

  if (!!request.hasEncrypted()) {
    body["Encrypted"] = request.getEncrypted();
  }

  if (!!request.hasFrontendNodeGroups()) {
    body["FrontendNodeGroups"] = request.getFrontendNodeGroups();
  }

  if (!!request.hasGatewayType()) {
    body["GatewayType"] = request.getGatewayType();
  }

  if (!!request.hasInstanceName()) {
    body["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasKmsKeyId()) {
    body["KmsKeyId"] = request.getKmsKeyId();
  }

  if (!!request.hasLinkedRamUserName()) {
    body["LinkedRamUserName"] = request.getLinkedRamUserName();
  }

  if (!!request.hasObserverNodeGroups()) {
    body["ObserverNodeGroups"] = request.getObserverNodeGroups();
  }

  if (!!request.hasOssAccessingRoleName()) {
    body["OssAccessingRoleName"] = request.getOssAccessingRoleName();
  }

  if (!!request.hasPackageType()) {
    body["PackageType"] = request.getPackageType();
  }

  if (!!request.hasPayType()) {
    body["PayType"] = request.getPayType();
  }

  if (!!request.hasPricingCycle()) {
    body["PricingCycle"] = request.getPricingCycle();
  }

  if (!!request.hasPrincipalType()) {
    body["PrincipalType"] = request.getPrincipalType();
  }

  if (!!request.hasPromotionOptionNo()) {
    body["PromotionOptionNo"] = request.getPromotionOptionNo();
  }

  if (!!request.hasRamUserId()) {
    body["RamUserId"] = request.getRamUserId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasRunMode()) {
    body["RunMode"] = request.getRunMode();
  }

  if (!!request.hasTags()) {
    body["Tags"] = request.getTags();
  }

  if (!!request.hasVSwitches()) {
    body["VSwitches"] = request.getVSwitches();
  }

  if (!!request.hasVersion()) {
    body["Version"] = request.getVersion();
  }

  if (!!request.hasVpcId()) {
    body["VpcId"] = request.getVpcId();
  }

  if (!!request.hasZoneId()) {
    body["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateInstanceV1"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/cluster/createV1")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateInstanceV1Response>();
}

/**
 * @summary 创建StarRocks集群
 *
 * @param request CreateInstanceV1Request
 * @return CreateInstanceV1Response
 */
CreateInstanceV1Response Client::createInstanceV1(const CreateInstanceV1Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createInstanceV1WithOptions(request, headers, runtime);
}

/**
 * @summary This interface is used to create the AliyunServiceRoleForEMRStarRocks role for users.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateServiceLinkedRoleResponse
 */
CreateServiceLinkedRoleResponse Client::createServiceLinkedRoleWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateServiceLinkedRole"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/user/create_default_role")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateServiceLinkedRoleResponse>();
}

/**
 * @summary This interface is used to create the AliyunServiceRoleForEMRStarRocks role for users.
 *
 * @return CreateServiceLinkedRoleResponse
 */
CreateServiceLinkedRoleResponse Client::createServiceLinkedRole() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createServiceLinkedRoleWithOptions(headers, runtime);
}

/**
 * @summary 删除网关
 *
 * @param request DeleteGatewayRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteGatewayResponse
 */
DeleteGatewayResponse Client::deleteGatewayWithOptions(const DeleteGatewayRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGatewayId()) {
    query["GatewayId"] = request.getGatewayId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteGateway"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/gateway/delete")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteGatewayResponse>();
}

/**
 * @summary 删除网关
 *
 * @param request DeleteGatewayRequest
 * @return DeleteGatewayResponse
 */
DeleteGatewayResponse Client::deleteGateway(const DeleteGatewayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteGatewayWithOptions(request, headers, runtime);
}

/**
 * @summary This operation is used to query Serverless StarRocks instances, supporting filtering based on instance name or tags and other information.
 *
 * @param tmpReq DescribeInstancesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstancesResponse
 */
DescribeInstancesResponse Client::describeInstancesWithOptions(const DescribeInstancesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeInstancesShrinkRequest request = DescribeInstancesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTag(), "Tag", "json"));
  }

  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasInstanceStatus()) {
    query["InstanceStatus"] = request.getInstanceStatus();
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

  if (!!request.hasTagShrink()) {
    query["Tag"] = request.getTagShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstances"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/starrocks/describeInstances")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstancesResponse>();
}

/**
 * @summary This operation is used to query Serverless StarRocks instances, supporting filtering based on instance name or tags and other information.
 *
 * @param request DescribeInstancesRequest
 * @return DescribeInstancesResponse
 */
DescribeInstancesResponse Client::describeInstances(const DescribeInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeInstancesWithOptions(request, headers, runtime);
}

/**
 * @summary 获取节点组信息
 *
 * @param request DescribeNodeGroupsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNodeGroupsResponse
 */
DescribeNodeGroupsResponse Client::describeNodeGroupsWithOptions(const DescribeNodeGroupsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  json body = {};
  if (!!request.hasComponentType()) {
    body["componentType"] = request.getComponentType();
  }

  if (!!request.hasInstanceId()) {
    body["instanceId"] = request.getInstanceId();
  }

  if (!!request.hasNodeGroupIds()) {
    body["nodeGroupIds"] = request.getNodeGroupIds();
  }

  if (!!request.hasNodeGroupName()) {
    body["nodeGroupName"] = request.getNodeGroupName();
  }

  if (!!request.hasStatus()) {
    body["status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DescribeNodeGroups"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/nodegroup/describeNodeGroups")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNodeGroupsResponse>();
}

/**
 * @summary 获取节点组信息
 *
 * @param request DescribeNodeGroupsRequest
 * @return DescribeNodeGroupsResponse
 */
DescribeNodeGroupsResponse Client::describeNodeGroups(const DescribeNodeGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeNodeGroupsWithOptions(request, headers, runtime);
}

/**
 * @summary StarRocks关闭SSL
 *
 * @param request DisableSSLConnectionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableSSLConnectionResponse
 */
DisableSSLConnectionResponse Client::disableSSLConnectionWithOptions(const DisableSSLConnectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableSSLConnection"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/starrocks/disableSSLConnection")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableSSLConnectionResponse>();
}

/**
 * @summary StarRocks关闭SSL
 *
 * @param request DisableSSLConnectionRequest
 * @return DisableSSLConnectionResponse
 */
DisableSSLConnectionResponse Client::disableSSLConnection(const DisableSSLConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return disableSSLConnectionWithOptions(request, headers, runtime);
}

/**
 * @summary StarRocks开启SSL
 *
 * @param request EnableSSLConnectionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableSSLConnectionResponse
 */
EnableSSLConnectionResponse Client::enableSSLConnectionWithOptions(const EnableSSLConnectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCustomSSLCertificate()) {
    body["CustomSSLCertificate"] = request.getCustomSSLCertificate();
  }

  if (!!request.hasEnableCustom()) {
    body["EnableCustom"] = request.getEnableCustom();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRenewal()) {
    body["Renewal"] = request.getRenewal();
  }

  if (!!request.hasSslKeyPassword()) {
    body["SslKeyPassword"] = request.getSslKeyPassword();
  }

  if (!!request.hasSslKeystorePassword()) {
    body["SslKeystorePassword"] = request.getSslKeystorePassword();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "EnableSSLConnection"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/starrocks/enableSSLConnection")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableSSLConnectionResponse>();
}

/**
 * @summary StarRocks开启SSL
 *
 * @param request EnableSSLConnectionRequest
 * @return EnableSSLConnectionResponse
 */
EnableSSLConnectionResponse Client::enableSSLConnection(const EnableSSLConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return enableSSLConnectionWithOptions(request, headers, runtime);
}

/**
 * @summary 获取StarRocks集群实例的特性开关
 *
 * @param request GetInstanceFeatureGateRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceFeatureGateResponse
 */
GetInstanceFeatureGateResponse Client::getInstanceFeatureGateWithOptions(const GetInstanceFeatureGateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstanceFeatureGate"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/features/featureGate")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceFeatureGateResponse>();
}

/**
 * @summary 获取StarRocks集群实例的特性开关
 *
 * @param request GetInstanceFeatureGateRequest
 * @return GetInstanceFeatureGateResponse
 */
GetInstanceFeatureGateResponse Client::getInstanceFeatureGate(const GetInstanceFeatureGateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getInstanceFeatureGateWithOptions(request, headers, runtime);
}

/**
 * @summary 默认网关开启内网SLB
 *
 * @param request IsolateLeaderRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return IsolateLeaderResponse
 */
IsolateLeaderResponse Client::isolateLeaderWithOptions(const IsolateLeaderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIsolateLeader()) {
    query["IsolateLeader"] = request.getIsolateLeader();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "IsolateLeader"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/gateway/isolateLeader")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<IsolateLeaderResponse>();
}

/**
 * @summary 默认网关开启内网SLB
 *
 * @param request IsolateLeaderRequest
 * @return IsolateLeaderResponse
 */
IsolateLeaderResponse Client::isolateLeader(const IsolateLeaderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return isolateLeaderWithOptions(request, headers, runtime);
}

/**
 * @summary 获取网关列表
 *
 * @param request ListGatewayRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGatewayResponse
 */
ListGatewayResponse Client::listGatewayWithOptions(const ListGatewayRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListGateway"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/gateway/list")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListGatewayResponse>();
}

/**
 * @summary 获取网关列表
 *
 * @param request ListGatewayRequest
 * @return ListGatewayResponse
 */
ListGatewayResponse Client::listGateway(const ListGatewayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listGatewayWithOptions(request, headers, runtime);
}

/**
 * @summary 修改实例的付费类型
 *
 * @param request ModifyChargeTypeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyChargeTypeResponse
 */
ModifyChargeTypeResponse Client::modifyChargeTypeWithOptions(const ModifyChargeTypeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasBillingInstanceIds()) {
    query["BillingInstanceIds"] = request.getBillingInstanceIds();
  }

  if (!!request.hasDuration()) {
    query["Duration"] = request.getDuration();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPricingCycle()) {
    query["PricingCycle"] = request.getPricingCycle();
  }

  if (!!request.hasPromotionOptionNo()) {
    query["PromotionOptionNo"] = request.getPromotionOptionNo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyChargeType"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/cluster/modifyChargeType")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyChargeTypeResponse>();
}

/**
 * @summary 修改实例的付费类型
 *
 * @param request ModifyChargeTypeRequest
 * @return ModifyChargeTypeResponse
 */
ModifyChargeTypeResponse Client::modifyChargeType(const ModifyChargeTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modifyChargeTypeWithOptions(request, headers, runtime);
}

/**
 * @summary Modifies the number of CUs for a warehouse of an E-MapReduce (EMR) Serverless StarRocks instance.
 *
 * @description Before you call this operation, make sure that you understand the billing methods and [billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of EMR Serverless StarRocks instances.
 * Before you call this operation, take note of the following items:
 * *   You can modify the number of CUs for a warehouse of only StarRocks instances of Standard Edition.
 * *   You can increase the number of disks only for warehouses of the standard specifications.
 * *   The instance must be in the Running state.
 * After you modify the number of CUs for a warehouse, the billing of CUs has the following changes:
 * *   Pay-as-you-go StarRocks instances: You are charged based on the number of CUs.
 * *   Subscription StarRocks instances: You are charged additionally based on the price difference between the number of CUs before and after the change and the remaining days of the billing cycle. The billing cycle starts from 00:00 the next day until the end of the subscription period.
 *
 * @param request ModifyCuRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyCuResponse
 */
ModifyCuResponse Client::modifyCuWithOptions(const ModifyCuRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFastMode()) {
    query["FastMode"] = request.getFastMode();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNodeGroupId()) {
    query["NodeGroupId"] = request.getNodeGroupId();
  }

  if (!!request.hasPromotionOptionNo()) {
    query["PromotionOptionNo"] = request.getPromotionOptionNo();
  }

  if (!!request.hasTarget()) {
    query["Target"] = request.getTarget();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyCu"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/resourceChange/modifyCu")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyCuResponse>();
}

/**
 * @summary Modifies the number of CUs for a warehouse of an E-MapReduce (EMR) Serverless StarRocks instance.
 *
 * @description Before you call this operation, make sure that you understand the billing methods and [billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of EMR Serverless StarRocks instances.
 * Before you call this operation, take note of the following items:
 * *   You can modify the number of CUs for a warehouse of only StarRocks instances of Standard Edition.
 * *   You can increase the number of disks only for warehouses of the standard specifications.
 * *   The instance must be in the Running state.
 * After you modify the number of CUs for a warehouse, the billing of CUs has the following changes:
 * *   Pay-as-you-go StarRocks instances: You are charged based on the number of CUs.
 * *   Subscription StarRocks instances: You are charged additionally based on the price difference between the number of CUs before and after the change and the remaining days of the billing cycle. The billing cycle starts from 00:00 the next day until the end of the subscription period.
 *
 * @param request ModifyCuRequest
 * @return ModifyCuResponse
 */
ModifyCuResponse Client::modifyCu(const ModifyCuRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modifyCuWithOptions(request, headers, runtime);
}

/**
 * @summary Performs a precheck before you modify the number of CUs for a warehouse.
 *
 * @param request ModifyCuPreCheckRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyCuPreCheckResponse
 */
ModifyCuPreCheckResponse Client::modifyCuPreCheckWithOptions(const ModifyCuPreCheckRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNodeGroupId()) {
    query["NodeGroupId"] = request.getNodeGroupId();
  }

  if (!!request.hasTarget()) {
    query["Target"] = request.getTarget();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyCuPreCheck"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/resourceChange/modifyCuPreCheck")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyCuPreCheckResponse>();
}

/**
 * @summary Performs a precheck before you modify the number of CUs for a warehouse.
 *
 * @param request ModifyCuPreCheckRequest
 * @return ModifyCuPreCheckResponse
 */
ModifyCuPreCheckResponse Client::modifyCuPreCheck(const ModifyCuPreCheckRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modifyCuPreCheckWithOptions(request, headers, runtime);
}

/**
 * @summary Increases the number of disks for a warehouse of an E-MapReduce (EMR) Serverless StarRocks instance.
 *
 * @description Before you call this operation, make sure that you understand the billing methods and [billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of EMR Serverless StarRocks instances. Before you call this operation, take note of the following items:
 * *   You can increase the number of disks only for StarRocks instances of Standard Edition.
 * *   You can increase the number of disks only for warehouses of the standard specifications.
 * *   The instance must be in the Running state.
 * After you increase the number of disks for a warehouse, the billing of disks has the following changes:
 * *   Pay-as-you-go StarRocks instances: You are charged for the disk based on the new disk type.
 * *   Subscription StarRocks instances: You are charged additionally based on the price difference between the number of disks before and after the change and the remaining days of the billing cycle. The billing cycle starts from 00:00 the next day until the end of the subscription period.
 *
 * @param request ModifyDiskNumberRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDiskNumberResponse
 */
ModifyDiskNumberResponse Client::modifyDiskNumberWithOptions(const ModifyDiskNumberRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFastMode()) {
    query["FastMode"] = request.getFastMode();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNodeGroupId()) {
    query["NodeGroupId"] = request.getNodeGroupId();
  }

  if (!!request.hasPromotionOptionNo()) {
    query["PromotionOptionNo"] = request.getPromotionOptionNo();
  }

  if (!!request.hasTarget()) {
    query["Target"] = request.getTarget();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDiskNumber"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/resourceChange/modifyDiskNumber")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDiskNumberResponse>();
}

/**
 * @summary Increases the number of disks for a warehouse of an E-MapReduce (EMR) Serverless StarRocks instance.
 *
 * @description Before you call this operation, make sure that you understand the billing methods and [billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of EMR Serverless StarRocks instances. Before you call this operation, take note of the following items:
 * *   You can increase the number of disks only for StarRocks instances of Standard Edition.
 * *   You can increase the number of disks only for warehouses of the standard specifications.
 * *   The instance must be in the Running state.
 * After you increase the number of disks for a warehouse, the billing of disks has the following changes:
 * *   Pay-as-you-go StarRocks instances: You are charged for the disk based on the new disk type.
 * *   Subscription StarRocks instances: You are charged additionally based on the price difference between the number of disks before and after the change and the remaining days of the billing cycle. The billing cycle starts from 00:00 the next day until the end of the subscription period.
 *
 * @param request ModifyDiskNumberRequest
 * @return ModifyDiskNumberResponse
 */
ModifyDiskNumberResponse Client::modifyDiskNumber(const ModifyDiskNumberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modifyDiskNumberWithOptions(request, headers, runtime);
}

/**
 * @summary Modifies the disk performance level for a warehouse of an E-MapReduce (EMR) Serverless StarRocks instance.
 *
 * @description Before you call this operation, make sure that you understand the billing methods and [pricing](https://www.alibabacloud.com/en/product/ecs?_p_lc=1&spm=openapi-amp.newDocPublishment.0.0.47c9281fkIZGiB#pricing) of EMR Serverless StarRocks instances.
 * Before you call this operation, take note of the following items:
 * *   You can modify the disk performance level only for StarRocks instances of Standard Edition.
 * *   You can modify the disk performance level only for warehouses of the standard specifications.
 * *   The instance must be in the Running state.
 * *   You cannot downgrade the performance level to PL0.
 * *   The performance level of an Enterprise SSD (ESSD) is limited by the ESSD disk size. If you cannot upgrade the performance level of an ESSD, expand the ESSD and try again. For more information, see [Enterprise SSDs](https://help.aliyun.com/document_detail/122389.html).
 * After the disk performance level is changed, the billing of the disk has the following changes:
 * *   Pay-as-you-go StarRocks instances: You are charged for the disk based on the new disk type.
 * *   Subscription StarRocks instances: You are charged additionally based on the price difference between the disk performance level before and after the change and the remaining days of the billing cycle. The billing cycle starts from 00:00 the next day until the end of the subscription period.
 *
 * @param request ModifyDiskPerformanceLevelRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDiskPerformanceLevelResponse
 */
ModifyDiskPerformanceLevelResponse Client::modifyDiskPerformanceLevelWithOptions(const ModifyDiskPerformanceLevelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNodeGroupId()) {
    query["NodeGroupId"] = request.getNodeGroupId();
  }

  if (!!request.hasPromotionOptionNo()) {
    query["PromotionOptionNo"] = request.getPromotionOptionNo();
  }

  if (!!request.hasTarget()) {
    query["Target"] = request.getTarget();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDiskPerformanceLevel"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/resourceChange/modifyDiskPerformanceLevel")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDiskPerformanceLevelResponse>();
}

/**
 * @summary Modifies the disk performance level for a warehouse of an E-MapReduce (EMR) Serverless StarRocks instance.
 *
 * @description Before you call this operation, make sure that you understand the billing methods and [pricing](https://www.alibabacloud.com/en/product/ecs?_p_lc=1&spm=openapi-amp.newDocPublishment.0.0.47c9281fkIZGiB#pricing) of EMR Serverless StarRocks instances.
 * Before you call this operation, take note of the following items:
 * *   You can modify the disk performance level only for StarRocks instances of Standard Edition.
 * *   You can modify the disk performance level only for warehouses of the standard specifications.
 * *   The instance must be in the Running state.
 * *   You cannot downgrade the performance level to PL0.
 * *   The performance level of an Enterprise SSD (ESSD) is limited by the ESSD disk size. If you cannot upgrade the performance level of an ESSD, expand the ESSD and try again. For more information, see [Enterprise SSDs](https://help.aliyun.com/document_detail/122389.html).
 * After the disk performance level is changed, the billing of the disk has the following changes:
 * *   Pay-as-you-go StarRocks instances: You are charged for the disk based on the new disk type.
 * *   Subscription StarRocks instances: You are charged additionally based on the price difference between the disk performance level before and after the change and the remaining days of the billing cycle. The billing cycle starts from 00:00 the next day until the end of the subscription period.
 *
 * @param request ModifyDiskPerformanceLevelRequest
 * @return ModifyDiskPerformanceLevelResponse
 */
ModifyDiskPerformanceLevelResponse Client::modifyDiskPerformanceLevel(const ModifyDiskPerformanceLevelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modifyDiskPerformanceLevelWithOptions(request, headers, runtime);
}

/**
 * @summary Expands the disk size for a warehouse of an E-MapReduce (EMR) Serverless StarRocks instance.
 *
 * @description Before you call this operation, make sure that you understand the billing methods and [billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of EMR Serverless StarRocks instances. Before you call this operation, take note of the following items:
 * *   You can expand the disk size only for StarRocks instances of Standard Edition.
 * *   You can expand the disk size only for warehouses of the standard specifications.
 * *   The instance must be in the Running state.
 * After you expand the disk size, the billing of disks has the following changes:
 * *   Pay-as-you-go StarRocks instances: You are charged for the disk based on the new disk size.
 * *   Subscription StarRocks instances: You are charged additionally based on the price difference between the disk size before and after the change and the remaining days of the billing cycle. The billing cycle starts from 00:00 the next day until the end of the subscription period.
 *
 * @param request ModifyDiskSizeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDiskSizeResponse
 */
ModifyDiskSizeResponse Client::modifyDiskSizeWithOptions(const ModifyDiskSizeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFastMode()) {
    query["FastMode"] = request.getFastMode();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNodeGroupId()) {
    query["NodeGroupId"] = request.getNodeGroupId();
  }

  if (!!request.hasPromotionOptionNo()) {
    query["PromotionOptionNo"] = request.getPromotionOptionNo();
  }

  if (!!request.hasTarget()) {
    query["Target"] = request.getTarget();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDiskSize"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/resourceChange/modifyDiskSize")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDiskSizeResponse>();
}

/**
 * @summary Expands the disk size for a warehouse of an E-MapReduce (EMR) Serverless StarRocks instance.
 *
 * @description Before you call this operation, make sure that you understand the billing methods and [billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of EMR Serverless StarRocks instances. Before you call this operation, take note of the following items:
 * *   You can expand the disk size only for StarRocks instances of Standard Edition.
 * *   You can expand the disk size only for warehouses of the standard specifications.
 * *   The instance must be in the Running state.
 * After you expand the disk size, the billing of disks has the following changes:
 * *   Pay-as-you-go StarRocks instances: You are charged for the disk based on the new disk size.
 * *   Subscription StarRocks instances: You are charged additionally based on the price difference between the disk size before and after the change and the remaining days of the billing cycle. The billing cycle starts from 00:00 the next day until the end of the subscription period.
 *
 * @param request ModifyDiskSizeRequest
 * @return ModifyDiskSizeResponse
 */
ModifyDiskSizeResponse Client::modifyDiskSize(const ModifyDiskSizeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modifyDiskSizeWithOptions(request, headers, runtime);
}

/**
 * @summary 修改计算组的节点磁盘类型
 *
 * @param request ModifyDiskTypeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDiskTypeResponse
 */
ModifyDiskTypeResponse Client::modifyDiskTypeWithOptions(const ModifyDiskTypeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNodeGroupId()) {
    query["NodeGroupId"] = request.getNodeGroupId();
  }

  if (!!request.hasPromotionOptionNo()) {
    query["PromotionOptionNo"] = request.getPromotionOptionNo();
  }

  if (!!request.hasTargetDiskType()) {
    query["TargetDiskType"] = request.getTargetDiskType();
  }

  if (!!request.hasTargetPerformanceLevel()) {
    query["TargetPerformanceLevel"] = request.getTargetPerformanceLevel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDiskType"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/resourceChange/modifyDiskType")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDiskTypeResponse>();
}

/**
 * @summary 修改计算组的节点磁盘类型
 *
 * @param request ModifyDiskTypeRequest
 * @return ModifyDiskTypeResponse
 */
ModifyDiskTypeResponse Client::modifyDiskType(const ModifyDiskTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modifyDiskTypeWithOptions(request, headers, runtime);
}

/**
 * @summary Modifies the number of nodes in a warehouse of an E-MapReduce (EMR) Serverless StarRocks instance.
 *
 * @description Before you call this operation, make sure that you understand the billing methods and [billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of EMR Serverless StarRocks instances. Before you call this operation, take note of the following items:
 * *   You can modify the number of nodes in a warehouse of only StarRocks instances of Standard Edition.
 * *   The instance must be in the Running state.
 * *   The number of frontend nodes (FEs) cannot be an even number, and you cannot reduce the number of FE nodes.
 * After you modify the number of nodes in a warehouse, the billing of nodes has the following changes:
 * *   Pay-as-you-go StarRocks instances: You are charged based on the number of nodes.
 * *   Subscription StarRocks instances: You are charged additionally based on the price difference between the number of nodes before and after the change and the remaining days of the billing cycle. The billing cycle starts from 00:00 the next day until the end of the subscription period.
 *
 * @param request ModifyNodeNumberRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyNodeNumberResponse
 */
ModifyNodeNumberResponse Client::modifyNodeNumberWithOptions(const ModifyNodeNumberRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNodeGroupId()) {
    query["NodeGroupId"] = request.getNodeGroupId();
  }

  if (!!request.hasParallelism()) {
    query["Parallelism"] = request.getParallelism();
  }

  if (!!request.hasPromotionOptionNo()) {
    query["PromotionOptionNo"] = request.getPromotionOptionNo();
  }

  if (!!request.hasTarget()) {
    query["Target"] = request.getTarget();
  }

  if (!!request.hasTerminationGracePeriodSeconds()) {
    query["TerminationGracePeriodSeconds"] = request.getTerminationGracePeriodSeconds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyNodeNumber"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/resourceChange/modifyNodeNumber")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyNodeNumberResponse>();
}

/**
 * @summary Modifies the number of nodes in a warehouse of an E-MapReduce (EMR) Serverless StarRocks instance.
 *
 * @description Before you call this operation, make sure that you understand the billing methods and [billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of EMR Serverless StarRocks instances. Before you call this operation, take note of the following items:
 * *   You can modify the number of nodes in a warehouse of only StarRocks instances of Standard Edition.
 * *   The instance must be in the Running state.
 * *   The number of frontend nodes (FEs) cannot be an even number, and you cannot reduce the number of FE nodes.
 * After you modify the number of nodes in a warehouse, the billing of nodes has the following changes:
 * *   Pay-as-you-go StarRocks instances: You are charged based on the number of nodes.
 * *   Subscription StarRocks instances: You are charged additionally based on the price difference between the number of nodes before and after the change and the remaining days of the billing cycle. The billing cycle starts from 00:00 the next day until the end of the subscription period.
 *
 * @param request ModifyNodeNumberRequest
 * @return ModifyNodeNumberResponse
 */
ModifyNodeNumberResponse Client::modifyNodeNumber(const ModifyNodeNumberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modifyNodeNumberWithOptions(request, headers, runtime);
}

/**
 * @summary Performs a precheck before you modify the number of nodes in a warehouse of an E-MapReduce (EMR) Serverless StarRocks instance.
 *
 * @param request ModifyNodeNumberPreCheckRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyNodeNumberPreCheckResponse
 */
ModifyNodeNumberPreCheckResponse Client::modifyNodeNumberPreCheckWithOptions(const ModifyNodeNumberPreCheckRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNodeGroupId()) {
    query["NodeGroupId"] = request.getNodeGroupId();
  }

  if (!!request.hasTarget()) {
    query["Target"] = request.getTarget();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyNodeNumberPreCheck"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/resourceChange/modifyNodeNumberPreCheck")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyNodeNumberPreCheckResponse>();
}

/**
 * @summary Performs a precheck before you modify the number of nodes in a warehouse of an E-MapReduce (EMR) Serverless StarRocks instance.
 *
 * @param request ModifyNodeNumberPreCheckRequest
 * @return ModifyNodeNumberPreCheckResponse
 */
ModifyNodeNumberPreCheckResponse Client::modifyNodeNumberPreCheck(const ModifyNodeNumberPreCheckRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modifyNodeNumberPreCheckWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the versions of an E-MapReduce (EMR) Serverless StarRocks instance that the versions that you can upgrade to. The versions of a StarRocks instance include the major version and minor version. You can view the major version and minor version of a StarRocks instance in the Version Information section of the Instance Details tab in the EMR console. You can call this operation to query the minor versions or major versions that the versions that you can upgrade to.
 *
 * @param request QueryUpgradableVersionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryUpgradableVersionsResponse
 */
QueryUpgradableVersionsResponse Client::queryUpgradableVersionsWithOptions(const QueryUpgradableVersionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMinor()) {
    query["Minor"] = request.getMinor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryUpgradableVersions"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/starrocks/queryUpgradableVersions")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryUpgradableVersionsResponse>();
}

/**
 * @summary Queries the versions of an E-MapReduce (EMR) Serverless StarRocks instance that the versions that you can upgrade to. The versions of a StarRocks instance include the major version and minor version. You can view the major version and minor version of a StarRocks instance in the Version Information section of the Instance Details tab in the EMR console. You can call this operation to query the minor versions or major versions that the versions that you can upgrade to.
 *
 * @param request QueryUpgradableVersionsRequest
 * @return QueryUpgradableVersionsResponse
 */
QueryUpgradableVersionsResponse Client::queryUpgradableVersions(const QueryUpgradableVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return queryUpgradableVersionsWithOptions(request, headers, runtime);
}

/**
 * @summary Releases a pay-as-you-go E-MapReduce (EMR) Serverless StarRocks instance. To unsubscribe from a subscription instance, go to the Unsubscribe page of the Expenses and Costs console.
 *
 * @description **
 * **Warning:** After an instance is released, all physical resources used by the instance are recycled. Relevant data is erased and cannot be restored.
 *
 * @param request ReleaseInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleaseInstanceResponse
 */
ReleaseInstanceResponse Client::releaseInstanceWithOptions(const ReleaseInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReleaseInstance"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/cluster/release")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReleaseInstanceResponse>();
}

/**
 * @summary Releases a pay-as-you-go E-MapReduce (EMR) Serverless StarRocks instance. To unsubscribe from a subscription instance, go to the Unsubscribe page of the Expenses and Costs console.
 *
 * @description **
 * **Warning:** After an instance is released, all physical resources used by the instance are recycled. Relevant data is erased and cannot be restored.
 *
 * @param request ReleaseInstanceRequest
 * @return ReleaseInstanceResponse
 */
ReleaseInstanceResponse Client::releaseInstance(const ReleaseInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return releaseInstanceWithOptions(request, headers, runtime);
}

/**
 * @summary Restarts an E-MapReduce (EMR) Serverless StarRocks instance.
 *
 * @description This operation is an asynchronous operation. After you call this operation to restart a StarRocks instance, the operation sets the status of the instance to Restarting and begins the restart process. When the status of the instance changes to Running, the instance is restarted.
 *
 * @param request RestartInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestartInstanceResponse
 */
RestartInstanceResponse Client::restartInstanceWithOptions(const RestartInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFastMode()) {
    query["FastMode"] = request.getFastMode();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RestartInstance"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/starrocks/restartCluster")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RestartInstanceResponse>();
}

/**
 * @summary Restarts an E-MapReduce (EMR) Serverless StarRocks instance.
 *
 * @description This operation is an asynchronous operation. After you call this operation to restart a StarRocks instance, the operation sets the status of the instance to Restarting and begins the restart process. When the status of the instance changes to Running, the instance is restarted.
 *
 * @param request RestartInstanceRequest
 * @return RestartInstanceResponse
 */
RestartInstanceResponse Client::restartInstance(const RestartInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return restartInstanceWithOptions(request, headers, runtime);
}

/**
 * @summary 重启指定的node group
 *
 * @param request RestartNodeGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestartNodeGroupResponse
 */
RestartNodeGroupResponse Client::restartNodeGroupWithOptions(const RestartNodeGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFastMode()) {
    query["FastMode"] = request.getFastMode();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNodeGroupId()) {
    query["NodeGroupId"] = request.getNodeGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RestartNodeGroup"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/nodegroup/restart")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RestartNodeGroupResponse>();
}

/**
 * @summary 重启指定的node group
 *
 * @param request RestartNodeGroupRequest
 * @return RestartNodeGroupResponse
 */
RestartNodeGroupResponse Client::restartNodeGroup(const RestartNodeGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return restartNodeGroupWithOptions(request, headers, runtime);
}

/**
 * @summary 重启集群中的节点
 *
 * @param request RestartNodesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestartNodesResponse
 */
RestartNodesResponse Client::restartNodesWithOptions(const RestartNodesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  json body = {};
  if (!!request.hasRestartNodeGroups()) {
    body["RestartNodeGroups"] = request.getRestartNodeGroups();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RestartNodes"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/restart/restart")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RestartNodesResponse>();
}

/**
 * @summary 重启集群中的节点
 *
 * @param request RestartNodesRequest
 * @return RestartNodesResponse
 */
RestartNodesResponse Client::restartNodes(const RestartNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return restartNodesWithOptions(request, headers, runtime);
}

/**
 * @summary 从备份中恢复实例
 *
 * @param request RestoreInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestoreInstanceResponse
 */
RestoreInstanceResponse Client::restoreInstanceWithOptions(const RestoreInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAdminPassword()) {
    body["AdminPassword"] = request.getAdminPassword();
  }

  if (!!request.hasAutoRenew()) {
    body["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasBackupTaskId()) {
    body["BackupTaskId"] = request.getBackupTaskId();
  }

  if (!!request.hasDuration()) {
    body["Duration"] = request.getDuration();
  }

  if (!!request.hasInstanceName()) {
    body["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasPayType()) {
    body["PayType"] = request.getPayType();
  }

  if (!!request.hasPricingCycle()) {
    body["PricingCycle"] = request.getPricingCycle();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasTags()) {
    body["Tags"] = request.getTags();
  }

  if (!!request.hasVSwitches()) {
    body["VSwitches"] = request.getVSwitches();
  }

  if (!!request.hasVpcId()) {
    body["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RestoreInstance"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/restore/restoreInstance")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RestoreInstanceResponse>();
}

/**
 * @summary 从备份中恢复实例
 *
 * @param request RestoreInstanceRequest
 * @return RestoreInstanceResponse
 */
RestoreInstanceResponse Client::restoreInstance(const RestoreInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return restoreInstanceWithOptions(request, headers, runtime);
}

/**
 * @summary 该接口用于恢复来自openlake自动停机的实例。
 *
 * @param request ResumeInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResumeInstanceResponse
 */
ResumeInstanceResponse Client::resumeInstanceWithOptions(const ResumeInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResumeInstance"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/lifecycle/resumeInstance")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResumeInstanceResponse>();
}

/**
 * @summary 该接口用于恢复来自openlake自动停机的实例。
 *
 * @param request ResumeInstanceRequest
 * @return ResumeInstanceResponse
 */
ResumeInstanceResponse Client::resumeInstance(const ResumeInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return resumeInstanceWithOptions(request, headers, runtime);
}

/**
 * @summary Adds a tag to a resource.
 *
 * @param request TagResourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    body["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTag()) {
    body["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "TagResources"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/tags")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TagResourcesResponse>();
}

/**
 * @summary Adds a tag to a resource.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return tagResourcesWithOptions(request, headers, runtime);
}

/**
 * @summary 公网SLB开关
 *
 * @param request TogglePublicSlbRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return TogglePublicSlbResponse
 */
TogglePublicSlbResponse Client::togglePublicSlbWithOptions(const TogglePublicSlbRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnablePublicSlb()) {
    query["EnablePublicSlb"] = request.getEnablePublicSlb();
  }

  if (!!request.hasGatewayId()) {
    query["GatewayId"] = request.getGatewayId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TogglePublicSlb"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/gateway/togglePublicSlb")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TogglePublicSlbResponse>();
}

/**
 * @summary 公网SLB开关
 *
 * @param request TogglePublicSlbRequest
 * @return TogglePublicSlbResponse
 */
TogglePublicSlbResponse Client::togglePublicSlb(const TogglePublicSlbRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return togglePublicSlbWithOptions(request, headers, runtime);
}

/**
 * @summary Removes tags from specified resources.
 *
 * @param tmpReq UnTagResourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnTagResourcesResponse
 */
UnTagResourcesResponse Client::unTagResourcesWithOptions(const UnTagResourcesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UnTagResourcesShrinkRequest request = UnTagResourcesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasResourceId()) {
    request.setResourceIdShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResourceId(), "ResourceId", "json"));
  }

  if (!!tmpReq.hasTagKey()) {
    request.setTagKeyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTagKey(), "TagKey", "json"));
  }

  json query = {};
  if (!!request.hasAll()) {
    query["All"] = request.getAll();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceIdShrink()) {
    query["ResourceId"] = request.getResourceIdShrink();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTagKeyShrink()) {
    query["TagKey"] = request.getTagKeyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnTagResources"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/tags")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnTagResourcesResponse>();
}

/**
 * @summary Removes tags from specified resources.
 *
 * @param request UnTagResourcesRequest
 * @return UnTagResourcesResponse
 */
UnTagResourcesResponse Client::unTagResources(const UnTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return unTagResourcesWithOptions(request, headers, runtime);
}

/**
 * @summary 更新网关
 *
 * @param request UpdateGatewayRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateGatewayResponse
 */
UpdateGatewayResponse Client::updateGatewayWithOptions(const UpdateGatewayRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFeNodeNumber()) {
    query["FeNodeNumber"] = request.getFeNodeNumber();
  }

  if (!!request.hasGatewayId()) {
    query["GatewayId"] = request.getGatewayId();
  }

  if (!!request.hasGatewayName()) {
    query["GatewayName"] = request.getGatewayName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateGateway"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/gateway/update")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateGatewayResponse>();
}

/**
 * @summary 更新网关
 *
 * @param request UpdateGatewayRequest
 * @return UpdateGatewayResponse
 */
UpdateGatewayResponse Client::updateGateway(const UpdateGatewayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateGatewayWithOptions(request, headers, runtime);
}

/**
 * @summary Modifies the name of an E-MapReduce (EMR) Serverless StarRocks instance.
 *
 * @param request UpdateInstanceNameRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateInstanceNameResponse
 */
UpdateInstanceNameResponse Client::updateInstanceNameWithOptions(const UpdateInstanceNameRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterName()) {
    query["ClusterName"] = request.getClusterName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateInstanceName"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/cluster/update_name")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateInstanceNameResponse>();
}

/**
 * @summary Modifies the name of an E-MapReduce (EMR) Serverless StarRocks instance.
 *
 * @param request UpdateInstanceNameRequest
 * @return UpdateInstanceNameResponse
 */
UpdateInstanceNameResponse Client::updateInstanceName(const UpdateInstanceNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateInstanceNameWithOptions(request, headers, runtime);
}

/**
 * @summary Upgrades the version of an E-MapReduce (EMR) Serverless StarRocks instance. The versions of a StarRocks instance include the major version and minor version. You can view the major version and minor version of a StarRocks instance in the Version Information section of the Instance Details tab in the EMR console. This operation can be used to upgrade the minor version or major version of a StarRocks instance. You can call the QueryUpgradableVersions operation to query the versions that you can upgrade to.
 *
 * @description The instance must be in the Running state when you call this operation.
 *
 * @param request UpgradeVersionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeVersionResponse
 */
UpgradeVersionResponse Client::upgradeVersionWithOptions(const UpgradeVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFastMode()) {
    query["FastMode"] = request.getFastMode();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMinor()) {
    query["Minor"] = request.getMinor();
  }

  if (!!request.hasTargetVersion()) {
    query["TargetVersion"] = request.getTargetVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradeVersion"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/starrocks/upgradeVersion")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradeVersionResponse>();
}

/**
 * @summary Upgrades the version of an E-MapReduce (EMR) Serverless StarRocks instance. The versions of a StarRocks instance include the major version and minor version. You can view the major version and minor version of a StarRocks instance in the Version Information section of the Instance Details tab in the EMR console. This operation can be used to upgrade the minor version or major version of a StarRocks instance. You can call the QueryUpgradableVersions operation to query the versions that you can upgrade to.
 *
 * @description The instance must be in the Running state when you call this operation.
 *
 * @param request UpgradeVersionRequest
 * @return UpgradeVersionResponse
 */
UpgradeVersionResponse Client::upgradeVersion(const UpgradeVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return upgradeVersionWithOptions(request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace Starrocks20221019