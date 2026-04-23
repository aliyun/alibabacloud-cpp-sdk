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
 * @summary 新增备份策略
 *
 * @param request AddBackupPolicyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddBackupPolicyResponse
 */
AddBackupPolicyResponse Client::addBackupPolicyWithOptions(const AddBackupPolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasExpireDays()) {
    body["ExpireDays"] = request.getExpireDays();
  }

  if (!!request.hasHour()) {
    body["Hour"] = request.getHour();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMinute()) {
    body["Minute"] = request.getMinute();
  }

  if (!!request.hasRecurrenceType()) {
    body["RecurrenceType"] = request.getRecurrenceType();
  }

  if (!!request.hasRecurrenceValues()) {
    body["RecurrenceValues"] = request.getRecurrenceValues();
  }

  if (!!request.hasTimeoutSeconds()) {
    body["TimeoutSeconds"] = request.getTimeoutSeconds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddBackupPolicy"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/backupRestore/policy/add")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddBackupPolicyResponse>();
}

/**
 * @summary 新增备份策略
 *
 * @param request AddBackupPolicyRequest
 * @return AddBackupPolicyResponse
 */
AddBackupPolicyResponse Client::addBackupPolicy(const AddBackupPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return addBackupPolicyWithOptions(request, headers, runtime);
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
 * @summary 校验ABM的资源库存
 *
 * @param request CheckInventoryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckInventoryResponse
 */
CheckInventoryResponse Client::checkInventoryWithOptions(const CheckInventoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterInfo()) {
    query["ClusterInfo"] = request.getClusterInfo();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckInventory"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/check/inventory")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckInventoryResponse>();
}

/**
 * @summary 校验ABM的资源库存
 *
 * @param request CheckInventoryRequest
 * @return CheckInventoryResponse
 */
CheckInventoryResponse Client::checkInventory(const CheckInventoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return checkInventoryWithOptions(request, headers, runtime);
}

/**
 * @summary 创建Agent资源组
 *
 * @param request CreateAgentResourceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAgentResourceResponse
 */
CreateAgentResourceResponse Client::createAgentResourceWithOptions(const CreateAgentResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasCu()) {
    query["Cu"] = request.getCu();
  }

  if (!!request.hasDuration()) {
    query["Duration"] = request.getDuration();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPayType()) {
    query["PayType"] = request.getPayType();
  }

  if (!!request.hasPricingCycle()) {
    query["PricingCycle"] = request.getPricingCycle();
  }

  if (!!request.hasPromotionOptionNo()) {
    query["PromotionOptionNo"] = request.getPromotionOptionNo();
  }

  if (!!request.hasSpecType()) {
    query["SpecType"] = request.getSpecType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAgentResource"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/lifecycle/createAgentNodeGroup")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAgentResourceResponse>();
}

/**
 * @summary 创建Agent资源组
 *
 * @param request CreateAgentResourceRequest
 * @return CreateAgentResourceResponse
 */
CreateAgentResourceResponse Client::createAgentResource(const CreateAgentResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createAgentResourceWithOptions(request, headers, runtime);
}

/**
 * @summary Restarts an E-MapReduce (EMR) Serverless StarRocks instance.
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

  if (!!request.hasEnableMultiAz()) {
    body["EnableMultiAz"] = request.getEnableMultiAz();
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
 * @summary Restarts an E-MapReduce (EMR) Serverless StarRocks instance.
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
 * @summary 新建一条弹性规则
 *
 * @param request CreateScalingRuleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateScalingRuleResponse
 */
CreateScalingRuleResponse Client::createScalingRuleWithOptions(const CreateScalingRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNodeGroupId()) {
    query["NodeGroupId"] = request.getNodeGroupId();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.getRule();
  }

  if (!!request.hasTriggerType()) {
    query["TriggerType"] = request.getTriggerType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateScalingRule"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/scalingRule/createScalingRule")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateScalingRuleResponse>();
}

/**
 * @summary 新建一条弹性规则
 *
 * @param request CreateScalingRuleRequest
 * @return CreateScalingRuleResponse
 */
CreateScalingRuleResponse Client::createScalingRule(const CreateScalingRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createScalingRuleWithOptions(request, headers, runtime);
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
 * @summary 删除数据备份
 *
 * @param request DeleteBackupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteBackupResponse
 */
DeleteBackupResponse Client::deleteBackupWithOptions(const DeleteBackupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupTaskId()) {
    query["BackupTaskId"] = request.getBackupTaskId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteBackup"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/backup/manage/delete")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteBackupResponse>();
}

/**
 * @summary 删除数据备份
 *
 * @param request DeleteBackupRequest
 * @return DeleteBackupResponse
 */
DeleteBackupResponse Client::deleteBackup(const DeleteBackupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteBackupWithOptions(request, headers, runtime);
}

/**
 * @summary 删除备份策略
 *
 * @param request DeleteBackupPolicyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteBackupPolicyResponse
 */
DeleteBackupPolicyResponse Client::deleteBackupPolicyWithOptions(const DeleteBackupPolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPolicyId()) {
    body["PolicyId"] = request.getPolicyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteBackupPolicy"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/backupRestore/policy/delete")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteBackupPolicyResponse>();
}

/**
 * @summary 删除备份策略
 *
 * @param request DeleteBackupPolicyRequest
 * @return DeleteBackupPolicyResponse
 */
DeleteBackupPolicyResponse Client::deleteBackupPolicy(const DeleteBackupPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteBackupPolicyWithOptions(request, headers, runtime);
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
 * @summary 删除白名单分组
 *
 * @param request DeleteInnerIpWhitelistGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteInnerIpWhitelistGroupResponse
 */
DeleteInnerIpWhitelistGroupResponse Client::deleteInnerIpWhitelistGroupWithOptions(const DeleteInnerIpWhitelistGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInnerIpWhitelistGroupId()) {
    body["InnerIpWhitelistGroupId"] = request.getInnerIpWhitelistGroupId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteInnerIpWhitelistGroup"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/securityGroup/delete")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteInnerIpWhitelistGroupResponse>();
}

/**
 * @summary 删除白名单分组
 *
 * @param request DeleteInnerIpWhitelistGroupRequest
 * @return DeleteInnerIpWhitelistGroupResponse
 */
DeleteInnerIpWhitelistGroupResponse Client::deleteInnerIpWhitelistGroup(const DeleteInnerIpWhitelistGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteInnerIpWhitelistGroupWithOptions(request, headers, runtime);
}

/**
 * @summary 删除一条弹性规则
 *
 * @param request DeleteScalingRuleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteScalingRuleResponse
 */
DeleteScalingRuleResponse Client::deleteScalingRuleWithOptions(const DeleteScalingRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNodeGroupId()) {
    query["NodeGroupId"] = request.getNodeGroupId();
  }

  if (!!request.hasScalingRuleId()) {
    query["ScalingRuleId"] = request.getScalingRuleId();
  }

  if (!!request.hasTriggerType()) {
    query["TriggerType"] = request.getTriggerType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteScalingRule"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/scalingRule/deleteScalingRule")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteScalingRuleResponse>();
}

/**
 * @summary 删除一条弹性规则
 *
 * @param request DeleteScalingRuleRequest
 * @return DeleteScalingRuleResponse
 */
DeleteScalingRuleResponse Client::deleteScalingRule(const DeleteScalingRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteScalingRuleWithOptions(request, headers, runtime);
}

/**
 * @param request DescribeAvailableZonesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAvailableZonesResponse
 */
DescribeAvailableZonesResponse Client::describeAvailableZonesWithOptions(const DescribeAvailableZonesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAvailableZones"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/zone/describeZones")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAvailableZonesResponse>();
}

/**
 * @param request DescribeAvailableZonesRequest
 * @return DescribeAvailableZonesResponse
 */
DescribeAvailableZonesResponse Client::describeAvailableZones(const DescribeAvailableZonesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeAvailableZonesWithOptions(request, headers, runtime);
}

/**
 * @summary 获取备份策略详情
 *
 * @param request DescribeBackupPoliciesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBackupPoliciesResponse
 */
DescribeBackupPoliciesResponse Client::describeBackupPoliciesWithOptions(const DescribeBackupPoliciesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.getPolicyId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBackupPolicies"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/backupRestore/policy/describe")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBackupPoliciesResponse>();
}

/**
 * @summary 获取备份策略详情
 *
 * @param request DescribeBackupPoliciesRequest
 * @return DescribeBackupPoliciesResponse
 */
DescribeBackupPoliciesResponse Client::describeBackupPolicies(const DescribeBackupPoliciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeBackupPoliciesWithOptions(request, headers, runtime);
}

/**
 * @summary 获取备份详情
 *
 * @param request DescribeBackupsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBackupsResponse
 */
DescribeBackupsResponse Client::describeBackupsWithOptions(const DescribeBackupsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupTaskId()) {
    query["BackupTaskId"] = request.getBackupTaskId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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

  if (!!request.hasStatuses()) {
    query["Statuses"] = request.getStatuses();
  }

  if (!!request.hasTimePeriodEndTime()) {
    query["TimePeriodEndTime"] = request.getTimePeriodEndTime();
  }

  if (!!request.hasTimePeriodStartTime()) {
    query["TimePeriodStartTime"] = request.getTimePeriodStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBackups"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/backup/manage/describe")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBackupsResponse>();
}

/**
 * @summary 获取备份详情
 *
 * @param request DescribeBackupsRequest
 * @return DescribeBackupsResponse
 */
DescribeBackupsResponse Client::describeBackups(const DescribeBackupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeBackupsWithOptions(request, headers, runtime);
}

/**
 * @summary 查询实例配置历史
 *
 * @param request DescribeConfigHistoryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeConfigHistoryResponse
 */
DescribeConfigHistoryResponse Client::describeConfigHistoryWithOptions(const DescribeConfigHistoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEffectStatuses()) {
    query["EffectStatuses"] = request.getEffectStatuses();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNeedTotal()) {
    query["NeedTotal"] = request.getNeedTotal();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeConfigHistory"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/config/describeConfigHistory")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeConfigHistoryResponse>();
}

/**
 * @summary 查询实例配置历史
 *
 * @param request DescribeConfigHistoryRequest
 * @return DescribeConfigHistoryResponse
 */
DescribeConfigHistoryResponse Client::describeConfigHistory(const DescribeConfigHistoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeConfigHistoryWithOptions(request, headers, runtime);
}

/**
 * @summary 获取集群事件名称
 *
 * @param request DescribeEventNamesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEventNamesResponse
 */
DescribeEventNamesResponse Client::describeEventNamesWithOptions(const DescribeEventNamesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "DescribeEventNames"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/event/describeEventNames")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEventNamesResponse>();
}

/**
 * @summary 获取集群事件名称
 *
 * @param request DescribeEventNamesRequest
 * @return DescribeEventNamesResponse
 */
DescribeEventNamesResponse Client::describeEventNames(const DescribeEventNamesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeEventNamesWithOptions(request, headers, runtime);
}

/**
 * @summary 查询白名单分组
 *
 * @param request DescribeInnerIpWhitelistGroupsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInnerIpWhitelistGroupsResponse
 */
DescribeInnerIpWhitelistGroupsResponse Client::describeInnerIpWhitelistGroupsWithOptions(const DescribeInnerIpWhitelistGroupsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "DescribeInnerIpWhitelistGroups"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/securityGroup/list")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInnerIpWhitelistGroupsResponse>();
}

/**
 * @summary 查询白名单分组
 *
 * @param request DescribeInnerIpWhitelistGroupsRequest
 * @return DescribeInnerIpWhitelistGroupsResponse
 */
DescribeInnerIpWhitelistGroupsResponse Client::describeInnerIpWhitelistGroups(const DescribeInnerIpWhitelistGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeInnerIpWhitelistGroupsWithOptions(request, headers, runtime);
}

/**
 * @summary 查询实例配置
 *
 * @param request DescribeInstanceConfigsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceConfigsResponse
 */
DescribeInstanceConfigsResponse Client::describeInstanceConfigsWithOptions(const DescribeInstanceConfigsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAllowModify()) {
    query["AllowModify"] = request.getAllowModify();
  }

  if (!!request.hasConfigKey()) {
    query["ConfigKey"] = request.getConfigKey();
  }

  if (!!request.hasConfigType()) {
    query["ConfigType"] = request.getConfigType();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNeedTotal()) {
    query["NeedTotal"] = request.getNeedTotal();
  }

  if (!!request.hasNodeGroupId()) {
    query["NodeGroupId"] = request.getNodeGroupId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceConfigs"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/config/describeInstanceConfigs")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceConfigsResponse>();
}

/**
 * @summary 查询实例配置
 *
 * @param request DescribeInstanceConfigsRequest
 * @return DescribeInstanceConfigsResponse
 */
DescribeInstanceConfigsResponse Client::describeInstanceConfigs(const DescribeInstanceConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeInstanceConfigsWithOptions(request, headers, runtime);
}

/**
 * @summary 获取实例的健康诊断结果
 *
 * @param request DescribeInstanceDiagnosisResultRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceDiagnosisResultResponse
 */
DescribeInstanceDiagnosisResultResponse Client::describeInstanceDiagnosisResultWithOptions(const DescribeInstanceDiagnosisResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDimension()) {
    query["Dimension"] = request.getDimension();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasReportDate()) {
    query["ReportDate"] = request.getReportDate();
  }

  if (!!request.hasStatuses()) {
    query["Statuses"] = request.getStatuses();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceDiagnosisResult"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/diagnosis/describe")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceDiagnosisResultResponse>();
}

/**
 * @summary 获取实例的健康诊断结果
 *
 * @param request DescribeInstanceDiagnosisResultRequest
 * @return DescribeInstanceDiagnosisResultResponse
 */
DescribeInstanceDiagnosisResultResponse Client::describeInstanceDiagnosisResult(const DescribeInstanceDiagnosisResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeInstanceDiagnosisResultWithOptions(request, headers, runtime);
}

/**
 * @summary 获取 StarRocks 实例的 Meta Token。
 *
 * @param request DescribeInstanceMetaTokenRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceMetaTokenResponse
 */
DescribeInstanceMetaTokenResponse Client::describeInstanceMetaTokenWithOptions(const DescribeInstanceMetaTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "DescribeInstanceMetaToken"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/migration/getMetaToken")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceMetaTokenResponse>();
}

/**
 * @summary 获取 StarRocks 实例的 Meta Token。
 *
 * @param request DescribeInstanceMetaTokenRequest
 * @return DescribeInstanceMetaTokenResponse
 */
DescribeInstanceMetaTokenResponse Client::describeInstanceMetaToken(const DescribeInstanceMetaTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeInstanceMetaTokenWithOptions(request, headers, runtime);
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

  if (!!request.hasTags()) {
    body["tags"] = request.getTags();
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
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegionsWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRegions"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/region/list")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRegionsResponse>();
}

/**
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeRegionsWithOptions(headers, runtime);
}

/**
 * @summary 描述Starrocks的资源配置约束
 *
 * @param request DescribeResourceConstraintsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeResourceConstraintsResponse
 */
DescribeResourceConstraintsResponse Client::describeResourceConstraintsWithOptions(const DescribeResourceConstraintsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasArchitecture()) {
    query["Architecture"] = request.getArchitecture();
  }

  if (!!request.hasPackageType()) {
    query["PackageType"] = request.getPackageType();
  }

  if (!!request.hasRunMode()) {
    query["RunMode"] = request.getRunMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeResourceConstraints"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/starrocks/describeResourceConstraints")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeResourceConstraintsResponse>();
}

/**
 * @summary 描述Starrocks的资源配置约束
 *
 * @param request DescribeResourceConstraintsRequest
 * @return DescribeResourceConstraintsResponse
 */
DescribeResourceConstraintsResponse Client::describeResourceConstraints(const DescribeResourceConstraintsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeResourceConstraintsWithOptions(request, headers, runtime);
}

/**
 * @summary 获取 starrocks 实例的系统时区
 *
 * @param request DescribeSystemTimezoneRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSystemTimezoneResponse
 */
DescribeSystemTimezoneResponse Client::describeSystemTimezoneWithOptions(const DescribeSystemTimezoneRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "DescribeSystemTimezone"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/timezone/query")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSystemTimezoneResponse>();
}

/**
 * @summary 获取 starrocks 实例的系统时区
 *
 * @param request DescribeSystemTimezoneRequest
 * @return DescribeSystemTimezoneResponse
 */
DescribeSystemTimezoneResponse Client::describeSystemTimezone(const DescribeSystemTimezoneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeSystemTimezoneWithOptions(request, headers, runtime);
}

/**
 * @summary 获取时间触发规则信息
 *
 * @param request DescribeTimeTriggerScalingRulesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTimeTriggerScalingRulesResponse
 */
DescribeTimeTriggerScalingRulesResponse Client::describeTimeTriggerScalingRulesWithOptions(const DescribeTimeTriggerScalingRulesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNodeGroupId()) {
    query["NodeGroupId"] = request.getNodeGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTimeTriggerScalingRules"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/scalingRule/describeTimeTriggerScalingRules")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTimeTriggerScalingRulesResponse>();
}

/**
 * @summary 获取时间触发规则信息
 *
 * @param request DescribeTimeTriggerScalingRulesRequest
 * @return DescribeTimeTriggerScalingRulesResponse
 */
DescribeTimeTriggerScalingRulesResponse Client::describeTimeTriggerScalingRules(const DescribeTimeTriggerScalingRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeTimeTriggerScalingRulesWithOptions(request, headers, runtime);
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
 * @summary 默认网关开启内网SLB
 *
 * @param request EnableInternalSlbRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableInternalSlbResponse
 */
EnableInternalSlbResponse Client::enableInternalSlbWithOptions(const EnableInternalSlbRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "EnableInternalSlb"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/gateway/enableInternalSlb")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableInternalSlbResponse>();
}

/**
 * @summary 默认网关开启内网SLB
 *
 * @param request EnableInternalSlbRequest
 * @return EnableInternalSlbResponse
 */
EnableInternalSlbResponse Client::enableInternalSlb(const EnableInternalSlbRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return enableInternalSlbWithOptions(request, headers, runtime);
}

/**
 * @summary 开启Multi AZ
 *
 * @param request EnableMultiAzRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableMultiAzResponse
 */
EnableMultiAzResponse Client::enableMultiAzWithOptions(const EnableMultiAzRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["instanceId"] = request.getInstanceId();
  }

  if (!!request.hasObservers()) {
    body["observers"] = request.getObservers();
  }

  if (!!request.hasPromotionOptionNo()) {
    body["promotionOptionNo"] = request.getPromotionOptionNo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "EnableMultiAz"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/lifecycle/enableMultiAz")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableMultiAzResponse>();
}

/**
 * @summary 开启Multi AZ
 *
 * @param request EnableMultiAzRequest
 * @return EnableMultiAzResponse
 */
EnableMultiAzResponse Client::enableMultiAz(const EnableMultiAzRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return enableMultiAzWithOptions(request, headers, runtime);
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
 * @summary 获取StarRocks 计算组实例的特性开关
 *
 * @param request GetNodeGroupFeatureGateRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNodeGroupFeatureGateResponse
 */
GetNodeGroupFeatureGateResponse Client::getNodeGroupFeatureGateWithOptions(const GetNodeGroupFeatureGateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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
    {"action" , "GetNodeGroupFeatureGate"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/features/nodeGroupFeatureGate")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetNodeGroupFeatureGateResponse>();
}

/**
 * @summary 获取StarRocks 计算组实例的特性开关
 *
 * @param request GetNodeGroupFeatureGateRequest
 * @return GetNodeGroupFeatureGateResponse
 */
GetNodeGroupFeatureGateResponse Client::getNodeGroupFeatureGate(const GetNodeGroupFeatureGateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getNodeGroupFeatureGateWithOptions(request, headers, runtime);
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
 * @summary 获取操作的详细信息
 *
 * @param request ListOperationActivityRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOperationActivityResponse
 */
ListOperationActivityResponse Client::listOperationActivityWithOptions(const ListOperationActivityRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOperationId()) {
    query["OperationId"] = request.getOperationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListOperationActivity"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/operation/listOperationActivity")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListOperationActivityResponse>();
}

/**
 * @summary 获取操作的详细信息
 *
 * @param request ListOperationActivityRequest
 * @return ListOperationActivityResponse
 */
ListOperationActivityResponse Client::listOperationActivity(const ListOperationActivityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listOperationActivityWithOptions(request, headers, runtime);
}

/**
 * @summary 获取集群的操作历史
 *
 * @param request ListOperationHistoryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOperationHistoryResponse
 */
ListOperationHistoryResponse Client::listOperationHistoryWithOptions(const ListOperationHistoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOperationId()) {
    query["OperationId"] = request.getOperationId();
  }

  if (!!request.hasOperationStatus()) {
    query["OperationStatus"] = request.getOperationStatus();
  }

  if (!!request.hasOperationType()) {
    query["OperationType"] = request.getOperationType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListOperationHistory"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/operation/listOperationHistory")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListOperationHistoryResponse>();
}

/**
 * @summary 获取集群的操作历史
 *
 * @param request ListOperationHistoryRequest
 * @return ListOperationHistoryResponse
 */
ListOperationHistoryResponse Client::listOperationHistory(const ListOperationHistoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listOperationHistoryWithOptions(request, headers, runtime);
}

/**
 * @summary 获取集群SSL详情
 *
 * @param request ListSSLDetailsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSSLDetailsResponse
 */
ListSSLDetailsResponse Client::listSSLDetailsWithOptions(const ListSSLDetailsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "ListSSLDetails"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/starrocks/listSSLDetails")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSSLDetailsResponse>();
}

/**
 * @summary 获取集群SSL详情
 *
 * @param request ListSSLDetailsRequest
 * @return ListSSLDetailsResponse
 */
ListSSLDetailsResponse Client::listSSLDetails(const ListSSLDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listSSLDetailsWithOptions(request, headers, runtime);
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
 * @summary 修改/etc/hosts
 *
 * @param request ModifyHostAliasRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyHostAliasResponse
 */
ModifyHostAliasResponse Client::modifyHostAliasWithOptions(const ModifyHostAliasRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  json body = {};
  if (!!request.hasHostAliases()) {
    body["hostAliases"] = request.getHostAliases();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModifyHostAlias"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/network/modifyHostAlias")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyHostAliasResponse>();
}

/**
 * @summary 修改/etc/hosts
 *
 * @param request ModifyHostAliasRequest
 * @return ModifyHostAliasResponse
 */
ModifyHostAliasResponse Client::modifyHostAlias(const ModifyHostAliasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modifyHostAliasWithOptions(request, headers, runtime);
}

/**
 * @summary 修改实例配置
 *
 * @param request ModifyInstanceConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceConfigResponse
 */
ModifyInstanceConfigResponse Client::modifyInstanceConfigWithOptions(const ModifyInstanceConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddConfigList()) {
    query["AddConfigList"] = request.getAddConfigList();
  }

  if (!!request.hasConfigList()) {
    query["ConfigList"] = request.getConfigList();
  }

  if (!!request.hasDeleteConfigList()) {
    query["DeleteConfigList"] = request.getDeleteConfigList();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasReason()) {
    query["Reason"] = request.getReason();
  }

  json body = {};
  if (!!request.hasConfigsToAdd()) {
    body["configsToAdd"] = request.getConfigsToAdd();
  }

  if (!!request.hasConfigsToDelete()) {
    body["configsToDelete"] = request.getConfigsToDelete();
  }

  if (!!request.hasConfigsToUpdate()) {
    body["configsToUpdate"] = request.getConfigsToUpdate();
  }

  if (!!request.hasFastMode()) {
    body["fastMode"] = request.getFastMode();
  }

  if (!!request.hasRestart()) {
    body["restart"] = request.getRestart();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModifyInstanceConfig"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/config/modifyInstanceConfig")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceConfigResponse>();
}

/**
 * @summary 修改实例配置
 *
 * @param request ModifyInstanceConfigRequest
 * @return ModifyInstanceConfigResponse
 */
ModifyInstanceConfigResponse Client::modifyInstanceConfig(const ModifyInstanceConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modifyInstanceConfigWithOptions(request, headers, runtime);
}

/**
 * @summary 配置变更预检查，返回此次变更需要重启的计算组ID
 *
 * @param request ModifyInstanceConfigPreCheckRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceConfigPreCheckResponse
 */
ModifyInstanceConfigPreCheckResponse Client::modifyInstanceConfigPreCheckWithOptions(const ModifyInstanceConfigPreCheckRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  json body = {};
  if (!!request.hasConfigsToAdd()) {
    body["configsToAdd"] = request.getConfigsToAdd();
  }

  if (!!request.hasConfigsToDelete()) {
    body["configsToDelete"] = request.getConfigsToDelete();
  }

  if (!!request.hasConfigsToUpdate()) {
    body["configsToUpdate"] = request.getConfigsToUpdate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModifyInstanceConfigPreCheck"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/config/modifyInstanceConfigPreCheck")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceConfigPreCheckResponse>();
}

/**
 * @summary 配置变更预检查，返回此次变更需要重启的计算组ID
 *
 * @param request ModifyInstanceConfigPreCheckRequest
 * @return ModifyInstanceConfigPreCheckResponse
 */
ModifyInstanceConfigPreCheckResponse Client::modifyInstanceConfigPreCheck(const ModifyInstanceConfigPreCheckRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modifyInstanceConfigPreCheckWithOptions(request, headers, runtime);
}

/**
 * @summary 修改Starrocks实例的可维护时间
 *
 * @param request ModifyMaintainableTimeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyMaintainableTimeResponse
 */
ModifyMaintainableTimeResponse Client::modifyMaintainableTimeWithOptions(const ModifyMaintainableTimeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaintainableTimePeriod()) {
    query["MaintainableTimePeriod"] = request.getMaintainableTimePeriod();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyMaintainableTime"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/starrocks/modifyMaintainableTime")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyMaintainableTimeResponse>();
}

/**
 * @summary 修改Starrocks实例的可维护时间
 *
 * @param request ModifyMaintainableTimeRequest
 * @return ModifyMaintainableTimeResponse
 */
ModifyMaintainableTimeResponse Client::modifyMaintainableTime(const ModifyMaintainableTimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modifyMaintainableTimeWithOptions(request, headers, runtime);
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
 * @summary 修改弹性伸缩规则
 *
 * @param request ModifyScalingRuleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyScalingRuleResponse
 */
ModifyScalingRuleResponse Client::modifyScalingRuleWithOptions(const ModifyScalingRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNewTriggerType()) {
    query["NewTriggerType"] = request.getNewTriggerType();
  }

  if (!!request.hasNodeGroupId()) {
    query["NodeGroupId"] = request.getNodeGroupId();
  }

  if (!!request.hasOldTriggerType()) {
    query["OldTriggerType"] = request.getOldTriggerType();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.getRule();
  }

  if (!!request.hasScalingRuleId()) {
    query["ScalingRuleId"] = request.getScalingRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyScalingRule"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/scalingRule/modifyScalingRule")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyScalingRuleResponse>();
}

/**
 * @summary 修改弹性伸缩规则
 *
 * @param request ModifyScalingRuleRequest
 * @return ModifyScalingRuleResponse
 */
ModifyScalingRuleResponse Client::modifyScalingRule(const ModifyScalingRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modifyScalingRuleWithOptions(request, headers, runtime);
}

/**
 * @summary 修改计算组的节点规格类型
 *
 * @param request ModifySpecTypeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySpecTypeResponse
 */
ModifySpecTypeResponse Client::modifySpecTypeWithOptions(const ModifySpecTypeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasTargetSpecType()) {
    query["TargetSpecType"] = request.getTargetSpecType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySpecType"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/resourceChange/modifySpecType")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySpecTypeResponse>();
}

/**
 * @summary 修改计算组的节点规格类型
 *
 * @param request ModifySpecTypeRequest
 * @return ModifySpecTypeResponse
 */
ModifySpecTypeResponse Client::modifySpecType(const ModifySpecTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modifySpecTypeWithOptions(request, headers, runtime);
}

/**
 * @summary 修改计算组中节点规格类型预检查
 *
 * @param request ModifySpecTypePreCheckRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySpecTypePreCheckResponse
 */
ModifySpecTypePreCheckResponse Client::modifySpecTypePreCheckWithOptions(const ModifySpecTypePreCheckRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNodeGroupId()) {
    query["NodeGroupId"] = request.getNodeGroupId();
  }

  if (!!request.hasTargetSpecType()) {
    query["TargetSpecType"] = request.getTargetSpecType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySpecTypePreCheck"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/resourceChange/modifySpecTypePreCheck")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySpecTypePreCheckResponse>();
}

/**
 * @summary 修改计算组中节点规格类型预检查
 *
 * @param request ModifySpecTypePreCheckRequest
 * @return ModifySpecTypePreCheckResponse
 */
ModifySpecTypePreCheckResponse Client::modifySpecTypePreCheck(const ModifySpecTypePreCheckRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modifySpecTypePreCheckWithOptions(request, headers, runtime);
}

/**
 * @summary 修改 starrocks 用户的密码
 *
 * @param request ModifyUserPasswordRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyUserPasswordResponse
 */
ModifyUserPasswordResponse Client::modifyUserPasswordWithOptions(const ModifyUserPasswordRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyUserPassword"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/password/modify")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyUserPasswordResponse>();
}

/**
 * @summary 修改 starrocks 用户的密码
 *
 * @param request ModifyUserPasswordRequest
 * @return ModifyUserPasswordResponse
 */
ModifyUserPasswordResponse Client::modifyUserPassword(const ModifyUserPasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modifyUserPasswordWithOptions(request, headers, runtime);
}

/**
 * @summary 查询开启Multi AZ的价格
 *
 * @param request QueryEnableMultiAzPriceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryEnableMultiAzPriceResponse
 */
QueryEnableMultiAzPriceResponse Client::queryEnableMultiAzPriceWithOptions(const QueryEnableMultiAzPriceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["instanceId"] = request.getInstanceId();
  }

  if (!!request.hasObservers()) {
    body["observers"] = request.getObservers();
  }

  if (!!request.hasPromotionOptionNo()) {
    body["promotionOptionNo"] = request.getPromotionOptionNo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "QueryEnableMultiAzPrice"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/priceInquiry/enableMultiAz")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryEnableMultiAzPriceResponse>();
}

/**
 * @summary 查询开启Multi AZ的价格
 *
 * @param request QueryEnableMultiAzPriceRequest
 * @return QueryEnableMultiAzPriceResponse
 */
QueryEnableMultiAzPriceResponse Client::queryEnableMultiAzPrice(const QueryEnableMultiAzPriceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return queryEnableMultiAzPriceWithOptions(request, headers, runtime);
}

/**
 * @summary 查询小版本号
 *
 * @param request QueryMinorVersionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryMinorVersionResponse
 */
QueryMinorVersionResponse Client::queryMinorVersionWithOptions(const QueryMinorVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasVersion()) {
    query["Version"] = request.getVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryMinorVersion"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/starrocks/queryAppDefineVersion")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryMinorVersionResponse>();
}

/**
 * @summary 查询小版本号
 *
 * @param request QueryMinorVersionRequest
 * @return QueryMinorVersionResponse
 */
QueryMinorVersionResponse Client::queryMinorVersion(const QueryMinorVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return queryMinorVersionWithOptions(request, headers, runtime);
}

/**
 * @summary StarRocks新购询价接口
 *
 * @param request QueryModifyChargeTypePriceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryModifyChargeTypePriceResponse
 */
QueryModifyChargeTypePriceResponse Client::queryModifyChargeTypePriceWithOptions(const QueryModifyChargeTypePriceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "QueryModifyChargeTypePrice"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/buy/query_modify_charge_type_price")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryModifyChargeTypePriceResponse>();
}

/**
 * @summary StarRocks新购询价接口
 *
 * @param request QueryModifyChargeTypePriceRequest
 * @return QueryModifyChargeTypePriceResponse
 */
QueryModifyChargeTypePriceResponse Client::queryModifyChargeTypePrice(const QueryModifyChargeTypePriceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return queryModifyChargeTypePriceWithOptions(request, headers, runtime);
}

/**
 * @summary 修改节点组节点Cu询价
 *
 * @param request QueryModifyCuPriceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryModifyCuPriceResponse
 */
QueryModifyCuPriceResponse Client::queryModifyCuPriceWithOptions(const QueryModifyCuPriceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "QueryModifyCuPrice"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/priceInquiry/modifyCu")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryModifyCuPriceResponse>();
}

/**
 * @summary 修改节点组节点Cu询价
 *
 * @param request QueryModifyCuPriceRequest
 * @return QueryModifyCuPriceResponse
 */
QueryModifyCuPriceResponse Client::queryModifyCuPrice(const QueryModifyCuPriceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return queryModifyCuPriceWithOptions(request, headers, runtime);
}

/**
 * @summary 修改计算组节点磁盘数量询价
 *
 * @param request QueryModifyDiskNumberPriceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryModifyDiskNumberPriceResponse
 */
QueryModifyDiskNumberPriceResponse Client::queryModifyDiskNumberPriceWithOptions(const QueryModifyDiskNumberPriceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "QueryModifyDiskNumberPrice"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/priceInquiry/modifyDiskNumber")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryModifyDiskNumberPriceResponse>();
}

/**
 * @summary 修改计算组节点磁盘数量询价
 *
 * @param request QueryModifyDiskNumberPriceRequest
 * @return QueryModifyDiskNumberPriceResponse
 */
QueryModifyDiskNumberPriceResponse Client::queryModifyDiskNumberPrice(const QueryModifyDiskNumberPriceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return queryModifyDiskNumberPriceWithOptions(request, headers, runtime);
}

/**
 * @summary 修改计算组节点磁盘性能级别询价
 *
 * @param request QueryModifyDiskPerformanceLevelPriceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryModifyDiskPerformanceLevelPriceResponse
 */
QueryModifyDiskPerformanceLevelPriceResponse Client::queryModifyDiskPerformanceLevelPriceWithOptions(const QueryModifyDiskPerformanceLevelPriceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "QueryModifyDiskPerformanceLevelPrice"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/priceInquiry/modifyDiskPerformanceLevel")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryModifyDiskPerformanceLevelPriceResponse>();
}

/**
 * @summary 修改计算组节点磁盘性能级别询价
 *
 * @param request QueryModifyDiskPerformanceLevelPriceRequest
 * @return QueryModifyDiskPerformanceLevelPriceResponse
 */
QueryModifyDiskPerformanceLevelPriceResponse Client::queryModifyDiskPerformanceLevelPrice(const QueryModifyDiskPerformanceLevelPriceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return queryModifyDiskPerformanceLevelPriceWithOptions(request, headers, runtime);
}

/**
 * @summary 修改计算组节点单盘存储大小询价
 *
 * @param request QueryModifyDiskSizePriceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryModifyDiskSizePriceResponse
 */
QueryModifyDiskSizePriceResponse Client::queryModifyDiskSizePriceWithOptions(const QueryModifyDiskSizePriceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "QueryModifyDiskSizePrice"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/priceInquiry/modifyDiskSize")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryModifyDiskSizePriceResponse>();
}

/**
 * @summary 修改计算组节点单盘存储大小询价
 *
 * @param request QueryModifyDiskSizePriceRequest
 * @return QueryModifyDiskSizePriceResponse
 */
QueryModifyDiskSizePriceResponse Client::queryModifyDiskSizePrice(const QueryModifyDiskSizePriceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return queryModifyDiskSizePriceWithOptions(request, headers, runtime);
}

/**
 * @summary 修改计算组节点磁盘类型询价
 *
 * @param request QueryModifyDiskTypePriceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryModifyDiskTypePriceResponse
 */
QueryModifyDiskTypePriceResponse Client::queryModifyDiskTypePriceWithOptions(const QueryModifyDiskTypePriceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "QueryModifyDiskTypePrice"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/priceInquiry/modifyDiskType")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryModifyDiskTypePriceResponse>();
}

/**
 * @summary 修改计算组节点磁盘类型询价
 *
 * @param request QueryModifyDiskTypePriceRequest
 * @return QueryModifyDiskTypePriceResponse
 */
QueryModifyDiskTypePriceResponse Client::queryModifyDiskTypePrice(const QueryModifyDiskTypePriceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return queryModifyDiskTypePriceWithOptions(request, headers, runtime);
}

/**
 * @summary 修改节点组节点数量询价
 *
 * @param request QueryModifyNodeNumberPriceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryModifyNodeNumberPriceResponse
 */
QueryModifyNodeNumberPriceResponse Client::queryModifyNodeNumberPriceWithOptions(const QueryModifyNodeNumberPriceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "QueryModifyNodeNumberPrice"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/priceInquiry/modifyNodeNumber")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryModifyNodeNumberPriceResponse>();
}

/**
 * @summary 修改节点组节点数量询价
 *
 * @param request QueryModifyNodeNumberPriceRequest
 * @return QueryModifyNodeNumberPriceResponse
 */
QueryModifyNodeNumberPriceResponse Client::queryModifyNodeNumberPrice(const QueryModifyNodeNumberPriceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return queryModifyNodeNumberPriceWithOptions(request, headers, runtime);
}

/**
 * @summary 修改节点组规格类型询价
 *
 * @param request QueryModifySpecTypePriceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryModifySpecTypePriceResponse
 */
QueryModifySpecTypePriceResponse Client::queryModifySpecTypePriceWithOptions(const QueryModifySpecTypePriceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasTargetSpecType()) {
    query["TargetSpecType"] = request.getTargetSpecType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryModifySpecTypePrice"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/priceInquiry/modifySpecType")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryModifySpecTypePriceResponse>();
}

/**
 * @summary 修改节点组规格类型询价
 *
 * @param request QueryModifySpecTypePriceRequest
 * @return QueryModifySpecTypePriceResponse
 */
QueryModifySpecTypePriceResponse Client::queryModifySpecTypePrice(const QueryModifySpecTypePriceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return queryModifySpecTypePriceWithOptions(request, headers, runtime);
}

/**
 * @summary StarRocks新购询价接口
 *
 * @param request QueryPriceV1Request
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryPriceV1Response
 */
QueryPriceV1Response Client::queryPriceV1WithOptions(const QueryPriceV1Request &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAgentNodeGroup()) {
    body["AgentNodeGroup"] = request.getAgentNodeGroup();
  }

  if (!!request.hasBackendNodeGroups()) {
    body["BackendNodeGroups"] = request.getBackendNodeGroups();
  }

  if (!!request.hasDuration()) {
    body["Duration"] = request.getDuration();
  }

  if (!!request.hasFrontendNodeGroups()) {
    body["FrontendNodeGroups"] = request.getFrontendNodeGroups();
  }

  if (!!request.hasObserverNodeGroups()) {
    body["ObserverNodeGroups"] = request.getObserverNodeGroups();
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

  if (!!request.hasPromotionOptionNo()) {
    body["PromotionOptionNo"] = request.getPromotionOptionNo();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRunMode()) {
    body["RunMode"] = request.getRunMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "QueryPriceV1"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/price/create")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryPriceV1Response>();
}

/**
 * @summary StarRocks新购询价接口
 *
 * @param request QueryPriceV1Request
 * @return QueryPriceV1Response
 */
QueryPriceV1Response Client::queryPriceV1(const QueryPriceV1Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return queryPriceV1WithOptions(request, headers, runtime);
}

/**
 * @summary StarRocks退订包年包月计费实例询价
 *
 * @param request QueryRefundPriceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryRefundPriceResponse
 */
QueryRefundPriceResponse Client::queryRefundPriceWithOptions(const QueryRefundPriceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillingInstanceIds()) {
    query["billingInstanceIds"] = request.getBillingInstanceIds();
  }

  if (!!request.hasInstanceId()) {
    query["instanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryRefundPrice"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/buy/queryRefundPrice")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryRefundPriceResponse>();
}

/**
 * @summary StarRocks退订包年包月计费实例询价
 *
 * @param request QueryRefundPriceRequest
 * @return QueryRefundPriceResponse
 */
QueryRefundPriceResponse Client::queryRefundPrice(const QueryRefundPriceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return queryRefundPriceWithOptions(request, headers, runtime);
}

/**
 * @summary 查询 StarRocks 计费实例的续费价格
 *
 * @param request QueryRenewPriceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryRenewPriceResponse
 */
QueryRenewPriceResponse Client::queryRenewPriceWithOptions(const QueryRenewPriceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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
    {"action" , "QueryRenewPrice"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/price/renew")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryRenewPriceResponse>();
}

/**
 * @summary 查询 StarRocks 计费实例的续费价格
 *
 * @param request QueryRenewPriceRequest
 * @return QueryRenewPriceResponse
 */
QueryRenewPriceResponse Client::queryRenewPrice(const QueryRenewPriceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return queryRenewPriceWithOptions(request, headers, runtime);
}

/**
 * @summary 查询计算组/集群的未支付订单
 *
 * @param request QueryUnpaidOrderRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryUnpaidOrderResponse
 */
QueryUnpaidOrderResponse Client::queryUnpaidOrderWithOptions(const QueryUnpaidOrderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillingInstanceId()) {
    query["BillingInstanceId"] = request.getBillingInstanceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryUnpaidOrder"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/order/queryUnpaidOrder")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryUnpaidOrderResponse>();
}

/**
 * @summary 查询计算组/集群的未支付订单
 *
 * @param request QueryUnpaidOrderRequest
 * @return QueryUnpaidOrderResponse
 */
QueryUnpaidOrderResponse Client::queryUnpaidOrder(const QueryUnpaidOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return queryUnpaidOrderWithOptions(request, headers, runtime);
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
 * @summary 处理集群事件
 *
 * @param request RebootECSRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RebootECSResponse
 */
RebootECSResponse Client::rebootECSWithOptions(const RebootECSRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEventId()) {
    query["EventId"] = request.getEventId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRebootTime()) {
    query["RebootTime"] = request.getRebootTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RebootECS"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/event/rebootEcs")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RebootECSResponse>();
}

/**
 * @summary 处理集群事件
 *
 * @param request RebootECSRequest
 * @return RebootECSResponse
 */
RebootECSResponse Client::rebootECS(const RebootECSRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return rebootECSWithOptions(request, headers, runtime);
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
 * @summary 续费实例
 *
 * @param request RenewInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RenewInstanceResponse
 */
RenewInstanceResponse Client::renewInstanceWithOptions(const RenewInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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
    {"action" , "RenewInstance"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/order/renew_instance")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RenewInstanceResponse>();
}

/**
 * @summary 续费实例
 *
 * @param request RenewInstanceRequest
 * @return RenewInstanceResponse
 */
RenewInstanceResponse Client::renewInstance(const RenewInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return renewInstanceWithOptions(request, headers, runtime);
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
 * @summary 回滚正在进行中的配置修改
 *
 * @param request RollbackConfigModificationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RollbackConfigModificationResponse
 */
RollbackConfigModificationResponse Client::rollbackConfigModificationWithOptions(const RollbackConfigModificationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigHistoryId()) {
    query["ConfigHistoryId"] = request.getConfigHistoryId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRestart()) {
    query["Restart"] = request.getRestart();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RollbackConfigModification"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/config/rollbackConfigModification")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RollbackConfigModificationResponse>();
}

/**
 * @summary 回滚正在进行中的配置修改
 *
 * @param request RollbackConfigModificationRequest
 * @return RollbackConfigModificationResponse
 */
RollbackConfigModificationResponse Client::rollbackConfigModification(const RollbackConfigModificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return rollbackConfigModificationWithOptions(request, headers, runtime);
}

/**
 * @summary 切换主备可用区
 *
 * @param request SwitchActiveStandbyZonesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SwitchActiveStandbyZonesResponse
 */
SwitchActiveStandbyZonesResponse Client::switchActiveStandbyZonesWithOptions(const SwitchActiveStandbyZonesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasTargetZoneId()) {
    query["TargetZoneId"] = request.getTargetZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SwitchActiveStandbyZones"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/recovery/switchZones")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SwitchActiveStandbyZonesResponse>();
}

/**
 * @summary 切换主备可用区
 *
 * @param request SwitchActiveStandbyZonesRequest
 * @return SwitchActiveStandbyZonesResponse
 */
SwitchActiveStandbyZonesResponse Client::switchActiveStandbyZones(const SwitchActiveStandbyZonesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return switchActiveStandbyZonesWithOptions(request, headers, runtime);
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
 * @summary 开启/关闭StarRocks实例的小版本自动更新
 *
 * @param request ToggleAutoMinorVersionUpgradeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ToggleAutoMinorVersionUpgradeResponse
 */
ToggleAutoMinorVersionUpgradeResponse Client::toggleAutoMinorVersionUpgradeWithOptions(const ToggleAutoMinorVersionUpgradeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoUpgrade()) {
    query["AutoUpgrade"] = request.getAutoUpgrade();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ToggleAutoMinorVersionUpgrade"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/starrocks/toggleAutoMinorVersionUpgrade")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ToggleAutoMinorVersionUpgradeResponse>();
}

/**
 * @summary 开启/关闭StarRocks实例的小版本自动更新
 *
 * @param request ToggleAutoMinorVersionUpgradeRequest
 * @return ToggleAutoMinorVersionUpgradeResponse
 */
ToggleAutoMinorVersionUpgradeResponse Client::toggleAutoMinorVersionUpgrade(const ToggleAutoMinorVersionUpgradeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return toggleAutoMinorVersionUpgradeWithOptions(request, headers, runtime);
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
 * @summary 更新备份任务描述
 *
 * @param request UpdateBackupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateBackupResponse
 */
UpdateBackupResponse Client::updateBackupWithOptions(const UpdateBackupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasBackupTaskId()) {
    body["backupTaskId"] = request.getBackupTaskId();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateBackup"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/backup/manage/update")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateBackupResponse>();
}

/**
 * @summary 更新备份任务描述
 *
 * @param request UpdateBackupRequest
 * @return UpdateBackupResponse
 */
UpdateBackupResponse Client::updateBackup(const UpdateBackupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateBackupWithOptions(request, headers, runtime);
}

/**
 * @summary 更新备份策略
 *
 * @param request UpdateBackupPolicyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateBackupPolicyResponse
 */
UpdateBackupPolicyResponse Client::updateBackupPolicyWithOptions(const UpdateBackupPolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasExpireDays()) {
    body["ExpireDays"] = request.getExpireDays();
  }

  if (!!request.hasHour()) {
    body["Hour"] = request.getHour();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMinute()) {
    body["Minute"] = request.getMinute();
  }

  if (!!request.hasPolicyId()) {
    body["PolicyId"] = request.getPolicyId();
  }

  if (!!request.hasRecurrenceValues()) {
    body["RecurrenceValues"] = request.getRecurrenceValues();
  }

  if (!!request.hasTimeoutSeconds()) {
    body["TimeoutSeconds"] = request.getTimeoutSeconds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateBackupPolicy"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/backupRestore/policy/update")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateBackupPolicyResponse>();
}

/**
 * @summary 更新备份策略
 *
 * @param request UpdateBackupPolicyRequest
 * @return UpdateBackupPolicyResponse
 */
UpdateBackupPolicyResponse Client::updateBackupPolicy(const UpdateBackupPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateBackupPolicyWithOptions(request, headers, runtime);
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
 * @summary 更新白名单分组中的CIDR
 *
 * @param request UpdateInnerIpWhitelistGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateInnerIpWhitelistGroupResponse
 */
UpdateInnerIpWhitelistGroupResponse Client::updateInnerIpWhitelistGroupWithOptions(const UpdateInnerIpWhitelistGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCidrIpList()) {
    body["CidrIpList"] = request.getCidrIpList();
  }

  if (!!request.hasInnerIpWhitelistGroupId()) {
    body["InnerIpWhitelistGroupId"] = request.getInnerIpWhitelistGroupId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateInnerIpWhitelistGroup"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/securityGroup/update")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateInnerIpWhitelistGroupResponse>();
}

/**
 * @summary 更新白名单分组中的CIDR
 *
 * @param request UpdateInnerIpWhitelistGroupRequest
 * @return UpdateInnerIpWhitelistGroupResponse
 */
UpdateInnerIpWhitelistGroupResponse Client::updateInnerIpWhitelistGroup(const UpdateInnerIpWhitelistGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateInnerIpWhitelistGroupWithOptions(request, headers, runtime);
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
 * @summary 更新节点组描述信息
 *
 * @param request UpdateNodeGroupDescriptionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateNodeGroupDescriptionResponse
 */
UpdateNodeGroupDescriptionResponse Client::updateNodeGroupDescriptionWithOptions(const UpdateNodeGroupDescriptionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasNodeGroupId()) {
    query["NodeGroupId"] = request.getNodeGroupId();
  }

  if (!!request.hasXAcsRamAuthContext()) {
    query["X-Acs-Ram-Auth-Context"] = request.getXAcsRamAuthContext();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateNodeGroupDescription"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/nodegroup/updateDescription")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateNodeGroupDescriptionResponse>();
}

/**
 * @summary 更新节点组描述信息
 *
 * @param request UpdateNodeGroupDescriptionRequest
 * @return UpdateNodeGroupDescriptionResponse
 */
UpdateNodeGroupDescriptionResponse Client::updateNodeGroupDescription(const UpdateNodeGroupDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateNodeGroupDescriptionWithOptions(request, headers, runtime);
}

/**
 * @summary 该接口用于开通/关闭 FE/BE的公网SLB。
 *
 * @param request UpdatePublicNetworkStatusRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePublicNetworkStatusResponse
 */
UpdatePublicNetworkStatusResponse Client::updatePublicNetworkStatusWithOptions(const UpdatePublicNetworkStatusRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComponentType()) {
    query["ComponentType"] = request.getComponentType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNodeGroupId()) {
    query["NodeGroupId"] = request.getNodeGroupId();
  }

  if (!!request.hasPublicNetworkEnabled()) {
    query["PublicNetworkEnabled"] = request.getPublicNetworkEnabled();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdatePublicNetworkStatus"},
    {"version" , "2022-10-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webapi/network/updatePublicNetworkStatus")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePublicNetworkStatusResponse>();
}

/**
 * @summary 该接口用于开通/关闭 FE/BE的公网SLB。
 *
 * @param request UpdatePublicNetworkStatusRequest
 * @return UpdatePublicNetworkStatusResponse
 */
UpdatePublicNetworkStatusResponse Client::updatePublicNetworkStatus(const UpdatePublicNetworkStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updatePublicNetworkStatusWithOptions(request, headers, runtime);
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