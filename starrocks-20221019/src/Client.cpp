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
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"ap-southeast-1" , "starrocks.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-5" , "starrocks.ap-southeast-5.aliyuncs.com"},
    {"cn-beijing" , "starrocks.cn-beijing.aliyuncs.com"},
    {"cn-hangzhou" , "starrocks.cn-hangzhou.aliyuncs.com"},
    {"cn-hongkong" , "starrocks.cn-hongkong.aliyuncs.com"},
    {"cn-qingdao" , "starrocks.cn-qingdao.aliyuncs.com"},
    {"cn-shanghai" , "starrocks.cn-shanghai.aliyuncs.com"},
    {"cn-shenzhen" , "starrocks.cn-shenzhen.aliyuncs.com"},
    {"cn-wulanchabu" , "starrocks.cn-wulanchabu.aliyuncs.com"},
    {"cn-zhangjiakou" , "starrocks.cn-zhangjiakou.aliyuncs.com"},
    {"us-west-1" , "starrocks.us-west-1.aliyuncs.com"},
    {"us-east-1" , "starrocks.us-east-1.aliyuncs.com"},
    {"eu-central-1" , "starrocks.eu-central-1.aliyuncs.com"}
  }).get<map<string, string>>();
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
 * @summary Adds a backup policy.
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
 * @summary Adds a backup policy.
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
 * @summary Creates a gateway.
 *
 * @description The AddGateway operation requires software stack version 1.7.6 or later and at least three front-end (FE) nodes.
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
 * @summary Creates a gateway.
 *
 * @description The AddGateway operation requires software stack version 1.7.6 or later and at least three front-end (FE) nodes.
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
 * @summary This operation changes the resource group of a Serverless StarRocks instance.
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
 * @summary This operation changes the resource group of a Serverless StarRocks instance.
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
 * @summary Check the inventory of resources.
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
 * @summary Check the inventory of resources.
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
 * @summary Creates an Agent compute group.
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
 * @summary Creates an Agent compute group.
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
 * @summary Creates a Serverless StarRocks instance.
 *
 * @description Before you call this operation, make sure that you fully understand the billing method and <props="china">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items)<props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of Serverless StarRocks.
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

  if (!!request.hasEnableAiFunction()) {
    body["EnableAiFunction"] = request.getEnableAiFunction();
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
 * @summary Creates a Serverless StarRocks instance.
 *
 * @description Before you call this operation, make sure that you fully understand the billing method and <props="china">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items)<props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of Serverless StarRocks.
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
 * @summary Create a scaling rule.
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
 * @summary Create a scaling rule.
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
 * @summary This operation creates the AliyunServiceRoleForEMRStarRocks role.
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
 * @summary This operation creates the AliyunServiceRoleForEMRStarRocks role.
 *
 * @return CreateServiceLinkedRoleResponse
 */
CreateServiceLinkedRoleResponse Client::createServiceLinkedRole() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createServiceLinkedRoleWithOptions(headers, runtime);
}

/**
 * @summary Deletes a data backup.
 *
 * @description Deletes a data backup.
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
 * @summary Deletes a data backup.
 *
 * @description Deletes a data backup.
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
 * @summary Deletes a backup policy.
 *
 * @description Deletes a backup policy.
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
 * @summary Deletes a backup policy.
 *
 * @description Deletes a backup policy.
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
 * @summary Deleting a gateway
 *
 * @description Deletes a gateway group. After the gateway group is deleted, its FE nodes are automatically assigned to the default gateway group.
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
 * @summary Deleting a gateway
 *
 * @description Deletes a gateway group. After the gateway group is deleted, its FE nodes are automatically assigned to the default gateway group.
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
 * @summary Deletes an internal network whitelist group.
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
 * @summary Deletes an internal network whitelist group.
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
 * @summary Deletes a scaling rule.
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
 * @summary Deletes a scaling rule.
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
 * @summary Queries the available zones in a region.
 *
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
 * @summary Queries the available zones in a region.
 *
 * @param request DescribeAvailableZonesRequest
 * @return DescribeAvailableZonesResponse
 */
DescribeAvailableZonesResponse Client::describeAvailableZones(const DescribeAvailableZonesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeAvailableZonesWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieve details of backup policies.
 *
 * @description Retrieve details of backup policies.
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
 * @summary Retrieve details of backup policies.
 *
 * @description Retrieve details of backup policies.
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
 * @summary Obtain backup details
 *
 * @description This is an asynchronous interface. Instance restarts are not immediate. After a successful call, the instance first enters the restarting state. The instance is successfully restarted when its status returns to running.
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
 * @summary Obtain backup details
 *
 * @description This is an asynchronous interface. Instance restarts are not immediate. After a successful call, the instance first enters the restarting state. The instance is successfully restarted when its status returns to running.
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
 * @summary Querying instance configuration history
 *
 * @description This is an asynchronous API, meaning the instance restart is not immediate. After a successful call, the instance enters the `restarting` state, and the process completes when its state changes to `running`.
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
 * @summary Querying instance configuration history
 *
 * @description This is an asynchronous API, meaning the instance restart is not immediate. After a successful call, the instance enters the `restarting` state, and the process completes when its state changes to `running`.
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
 * @summary Retrieve the cluster event name.
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
 * @summary Retrieve the cluster event name.
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
 * @summary Describes the whitelist groups for a private network.
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
 * @summary Describes the whitelist groups for a private network.
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
 * @summary Queries instance configurations.
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
 * @summary Queries instance configurations.
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
 * @summary Retrieve instance health diagnosis results.
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
 * @summary Retrieve instance health diagnosis results.
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
 * @summary Obtains the meta token for a StarRocks instance.
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
 * @summary Obtains the meta token for a StarRocks instance.
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
 * @summary This operation queries Serverless StarRocks instances. You can filter the instances by criteria such as instance name and tags.
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
 * @summary This operation queries Serverless StarRocks instances. You can filter the instances by criteria such as instance name and tags.
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
 * @summary Retrieves node group information.
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
 * @summary Retrieves node group information.
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
 * @summary You can view the list of available regions.
 *
 * @description This operation is asynchronous. After you call this operation, the instance enters a restarting state but does not restart immediately. The restart is complete when the instance status changes to running.
 *
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
 * @summary You can view the list of available regions.
 *
 * @description This operation is asynchronous. After you call this operation, the instance enters a restarting state but does not restart immediately. The restart is complete when the instance status changes to running.
 *
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeRegionsWithOptions(headers, runtime);
}

/**
 * @summary Get resource constraint configurations.
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
 * @summary Get resource constraint configurations.
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
 * @summary Obtain the system time zone of a StarRocks instance
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
 * @summary Obtain the system time zone of a StarRocks instance
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
 * @summary Retrieves the details of time-triggered scaling rules.
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
 * @summary Retrieves the details of time-triggered scaling rules.
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
 * @summary Disables SSL for a StarRocks connection.
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
 * @summary Disables SSL for a StarRocks connection.
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
 * @summary Enables the internal Server Load Balancer (SLB) for the default gateway of an EMR Serverless StarRocks instance.
 *
 * @description The instance must be in the Running state when you call this operation.
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
 * @summary Enables the internal Server Load Balancer (SLB) for the default gateway of an EMR Serverless StarRocks instance.
 *
 * @description The instance must be in the Running state when you call this operation.
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
 * @summary Enables Multi-AZ deployment.
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
 * @summary Enables Multi-AZ deployment.
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
 * @summary Enables SSL for a StarRocks connection.
 *
 * @description You can call this operation only when the instance is in the Running state.
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
 * @summary Enables SSL for a StarRocks connection.
 *
 * @description You can call this operation only when the instance is in the Running state.
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
 * @summary Retrieves the feature gates for a StarRocks cluster instance.
 *
 * @description Before you call this operation, make sure that you understand the billing methods and <props="china">[billable items](https://help.aliyun.com/zh/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c4g.11186623.help-menu-28066.d_0_1_1.4db82b05p3Gg0G)<props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of Serverless StarRocks.
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
 * @summary Retrieves the feature gates for a StarRocks cluster instance.
 *
 * @description Before you call this operation, make sure that you understand the billing methods and <props="china">[billable items](https://help.aliyun.com/zh/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c4g.11186623.help-menu-28066.d_0_1_1.4db82b05p3Gg0G)<props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of Serverless StarRocks.
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
 * @summary Retrieve the feature gate for a StarRocks compute group instance.
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
 * @summary Retrieve the feature gate for a StarRocks compute group instance.
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
 * @summary Enable read/write splitting. The Leader FE node handles write requests, and other nodes handle read requests.
 *
 * @description The instance must be in the running state when you call this operation.
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
 * @summary Enable read/write splitting. The Leader FE node handles write requests, and other nodes handle read requests.
 *
 * @description The instance must be in the running state when you call this operation.
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
 * @summary Lists gateways.
 *
 * @description Lists the gateways of a cluster.
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
 * @summary Lists gateways.
 *
 * @description Lists the gateways of a cluster.
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
 * @summary Retrieves the details of an operation.
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
 * @summary Retrieves the details of an operation.
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
 * @summary Retrieves the operation history of a cluster.
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
 * @summary Retrieves the operation history of a cluster.
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
 * @summary Retrieves the ssl certificate details for a cluster.
 *
 * @description Retrieves the ssl certificate details for a cluster.
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
 * @summary Retrieves the ssl certificate details for a cluster.
 *
 * @description Retrieves the ssl certificate details for a cluster.
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
 * @summary Change the billing method for an instance
 *
 * @description Before you call this operation, review the billing methods for Serverless StarRocks and the <props="china">[billable items](https://help.aliyun.com/zh/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c4g.11186623.help-menu-28066.d_0_1_1.4db82b05p3Gg0G)<props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P).
 * When you call this operation, note the following:
 * - Only standard instances support changing the number of compute group Compute Units (CUs). Entry-level instances do not support this change.
 * - Only instances of the standard compute group specification type support increasing the number of disks.
 * - The instance must be in the Running state.
 * After you change the CU count, billing changes as follows:
 * - Pay-as-you-go: You are billed based on the new CU count.
 * - Subscription: During the current billing cycle, you pay the difference between the old and new configurations. This amount is calculated based on the number of days remaining in the subscription period, starting from 00:00 of the following day.
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
 * @summary Change the billing method for an instance
 *
 * @description Before you call this operation, review the billing methods for Serverless StarRocks and the <props="china">[billable items](https://help.aliyun.com/zh/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c4g.11186623.help-menu-28066.d_0_1_1.4db82b05p3Gg0G)<props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P).
 * When you call this operation, note the following:
 * - Only standard instances support changing the number of compute group Compute Units (CUs). Entry-level instances do not support this change.
 * - Only instances of the standard compute group specification type support increasing the number of disks.
 * - The instance must be in the Running state.
 * After you change the CU count, billing changes as follows:
 * - Pay-as-you-go: You are billed based on the new CU count.
 * - Subscription: During the current billing cycle, you pay the difference between the old and new configurations. This amount is calculated based on the number of days remaining in the subscription period, starting from 00:00 of the following day.
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
 * @summary You can use this API to change the number of Compute Units (CUs) in a compute group of a Serverless StarRocks instance.
 *
 * @description Before you call this API, make sure that you understand the billing methods and <props="china">[billable items](https://help.aliyun.com/zh/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c4g.11186623.help-menu-28066.d_0_1_1.4db82b05p3Gg0G)<props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of Serverless StarRocks.
 * When you call this API, note the following:
 * - This operation is supported only for Standard Edition instances. It is not supported for Starter Edition instances.
 * - You can increase the number of disks only for instances with a standard compute group specification.
 * - The instance must be in the Running state.
 * After you change the number of CUs, the billing for the instance is updated as follows:
 * - Pay-as-you-go: You are billed based on the new number of CUs.
 * - Subscription: A supplementary fee is charged. This fee is calculated based on the price difference between the old and new configurations and the remaining subscription period. The remaining period starts at 00:00 on the following day and ends when the subscription expires.
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
 * @summary You can use this API to change the number of Compute Units (CUs) in a compute group of a Serverless StarRocks instance.
 *
 * @description Before you call this API, make sure that you understand the billing methods and <props="china">[billable items](https://help.aliyun.com/zh/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c4g.11186623.help-menu-28066.d_0_1_1.4db82b05p3Gg0G)<props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of Serverless StarRocks.
 * When you call this API, note the following:
 * - This operation is supported only for Standard Edition instances. It is not supported for Starter Edition instances.
 * - You can increase the number of disks only for instances with a standard compute group specification.
 * - The instance must be in the Running state.
 * After you change the number of CUs, the billing for the instance is updated as follows:
 * - Pay-as-you-go: You are billed based on the new number of CUs.
 * - Subscription: A supplementary fee is charged. This fee is calculated based on the price difference between the old and new configurations and the remaining subscription period. The remaining period starts at 00:00 on the following day and ends when the subscription expires.
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
 * @summary Increases the number of disks for the nodes in a compute group of a Serverless StarRocks instance.
 *
 * @description Before you call this operation, make sure you fully understand the billing methods and <props="china">[billable items](https://help.aliyun.com/zh/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c4g.11186623.help-menu-28066.d_0_1_1.4db82b05p3Gg0G)<props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of Serverless StarRocks.
 * Note the following:
 * - The number of disks can be increased only for standard instances. This operation is not supported for entry-level instances.
 * - The number of disks can be increased only for instances whose compute group is the Standard Edition (standard).
 * - The instance must be in the Running state.
 * After you increase the number of disks, billing changes as follows:
 * - Pay-as-you-go: You are billed based on the new disk type.
 * - Subscription: A supplemental fee is calculated. This fee is based on the price difference between the old and new configurations and the remaining days in the billing cycle. The remaining period starts from 00:00 on the following day and ends when the subscription expires.
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
 * @summary Increases the number of disks for the nodes in a compute group of a Serverless StarRocks instance.
 *
 * @description Before you call this operation, make sure you fully understand the billing methods and <props="china">[billable items](https://help.aliyun.com/zh/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c4g.11186623.help-menu-28066.d_0_1_1.4db82b05p3Gg0G)<props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of Serverless StarRocks.
 * Note the following:
 * - The number of disks can be increased only for standard instances. This operation is not supported for entry-level instances.
 * - The number of disks can be increased only for instances whose compute group is the Standard Edition (standard).
 * - The instance must be in the Running state.
 * After you increase the number of disks, billing changes as follows:
 * - Pay-as-you-go: You are billed based on the new disk type.
 * - Subscription: A supplemental fee is calculated. This fee is based on the price difference between the old and new configurations and the remaining days in the billing cycle. The remaining period starts from 00:00 on the following day and ends when the subscription expires.
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
 * @summary This operation modifies the disk performance level of the nodes in a compute group of a Serverless StarRocks instance.
 *
 * @description Before you call this operation, understand the billing methods and <props="china">[pricing](https://www.aliyun.com/price/product?spm=openapi-amp.newDocPublishment.0.0.1837281f3hbi2d#/ecs/detail/vm)<props="intl">[pricing](https://www.alibabacloud.com/zh/product/ecs?_p_lc=1#pricing) of Serverless StarRocks.
 * Note the following when you call this operation:
 * - You can upgrade or downgrade disks only for standard instances. This operation is not supported for Starter Edition instances.
 * - Disk upgrades and downgrades are supported only for instances that have a Standard Edition (standard) compute group.
 * - The instance must be in the Running state.
 * - You cannot downgrade the disk performance level (PL) to PL0.
 * - The performance level of an Enhanced SSD (ESSD) is limited by its capacity. If you cannot upgrade the performance level, increase the disk capacity and try again. For more information, see <props="china">[ESSDs](https://help.aliyun.com/zh/ecs/user-guide/essds)<props="intl">[ESSDs](https://www.alibabacloud.com/help/en/ecs/user-guide/essds).
 * After you change the disk configuration, the billing is adjusted as follows:
 * - Pay-as-you-go: You are charged based on the new disk type.
 * - Subscription: A supplemental fee is calculated based on the price difference between the new and old configurations for the remainder of the billing cycle. The remaining period starts at 00:00 on the next day and ends when the subscription expires.
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
 * @summary This operation modifies the disk performance level of the nodes in a compute group of a Serverless StarRocks instance.
 *
 * @description Before you call this operation, understand the billing methods and <props="china">[pricing](https://www.aliyun.com/price/product?spm=openapi-amp.newDocPublishment.0.0.1837281f3hbi2d#/ecs/detail/vm)<props="intl">[pricing](https://www.alibabacloud.com/zh/product/ecs?_p_lc=1#pricing) of Serverless StarRocks.
 * Note the following when you call this operation:
 * - You can upgrade or downgrade disks only for standard instances. This operation is not supported for Starter Edition instances.
 * - Disk upgrades and downgrades are supported only for instances that have a Standard Edition (standard) compute group.
 * - The instance must be in the Running state.
 * - You cannot downgrade the disk performance level (PL) to PL0.
 * - The performance level of an Enhanced SSD (ESSD) is limited by its capacity. If you cannot upgrade the performance level, increase the disk capacity and try again. For more information, see <props="china">[ESSDs](https://help.aliyun.com/zh/ecs/user-guide/essds)<props="intl">[ESSDs](https://www.alibabacloud.com/help/en/ecs/user-guide/essds).
 * After you change the disk configuration, the billing is adjusted as follows:
 * - Pay-as-you-go: You are charged based on the new disk type.
 * - Subscription: A supplemental fee is calculated based on the price difference between the new and old configurations for the remainder of the billing cycle. The remaining period starts at 00:00 on the next day and ends when the subscription expires.
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
 * @summary Scales out the disk of a compute group node for a Serverless StarRocks instance.
 *
 * @description Before you call this operation, ensure that you understand the billing methods and <props="china">[billable items](https://help.aliyun.com/zh/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c4g.11186623.help-menu-28066.d_0_1_1.4db82b05p3Gg0G)<props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of Serverless StarRocks.
 * Note the following:
 * - Only standard instances support disk scale-out. Entry-level instances do not.
 * - Only instances that have a compute group of the standard specification type support disk scale-out.
 * - The instance must be in the Running state.
 * After you scale out the disk, your billing changes as follows:
 * - Pay-as-you-go: You are charged based on the new disk size.
 * - Subscription: You must pay an upgrade fee. The fee is calculated based on the price difference between the old and new configurations and the remaining subscription period. The remaining subscription period is calculated starting from 00:00 on the next day.
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
 * @summary Scales out the disk of a compute group node for a Serverless StarRocks instance.
 *
 * @description Before you call this operation, ensure that you understand the billing methods and <props="china">[billable items](https://help.aliyun.com/zh/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c4g.11186623.help-menu-28066.d_0_1_1.4db82b05p3Gg0G)<props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of Serverless StarRocks.
 * Note the following:
 * - Only standard instances support disk scale-out. Entry-level instances do not.
 * - Only instances that have a compute group of the standard specification type support disk scale-out.
 * - The instance must be in the Running state.
 * After you scale out the disk, your billing changes as follows:
 * - Pay-as-you-go: You are charged based on the new disk size.
 * - Subscription: You must pay an upgrade fee. The fee is calculated based on the price difference between the old and new configurations and the remaining subscription period. The remaining subscription period is calculated starting from 00:00 on the next day.
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
 * @summary Change the disk type for nodes in a compute group
 *
 * @description Before you call this operation, review the Serverless StarRocks billing model and <props="china">[billable items](https://help.aliyun.com/zh/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c4g.11186623.help-menu-28066.d_0_1_1.4db82b05p3Gg0G)<props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P).
 * - Only standard instances support disk scaling. Starter instances do not support disk scaling.
 * - Only instances with a compute group specification type of Standard Edition support disk scaling.
 * - The instance must be in the Running state.
 * After disk scaling, billing changes as follows:
 * - Pay-as-you-go: You are billed based on the new disk size.
 * - Subscription: During the billing cycle, the additional fee is calculated based on the price difference between the old and new configurations and the remaining days, from 00:00 the next day to the end of the validity period.
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
 * @summary Change the disk type for nodes in a compute group
 *
 * @description Before you call this operation, review the Serverless StarRocks billing model and <props="china">[billable items](https://help.aliyun.com/zh/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c4g.11186623.help-menu-28066.d_0_1_1.4db82b05p3Gg0G)<props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P).
 * - Only standard instances support disk scaling. Starter instances do not support disk scaling.
 * - Only instances with a compute group specification type of Standard Edition support disk scaling.
 * - The instance must be in the Running state.
 * After disk scaling, billing changes as follows:
 * - Pay-as-you-go: You are billed based on the new disk size.
 * - Subscription: During the billing cycle, the additional fee is calculated based on the price difference between the old and new configurations and the remaining days, from 00:00 the next day to the end of the validity period.
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
 * @summary Modifies the /etc/hosts file.
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
 * @summary Modifies the /etc/hosts file.
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
 * @summary This API modifies the configuration of a Serverless StarRocks instance.
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
 * @summary This API modifies the configuration of a Serverless StarRocks instance.
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
 * @summary This operation pre-checks modifications to the instance configuration of a Serverless StarRocks instance.
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
 * @summary This operation pre-checks modifications to the instance configuration of a Serverless StarRocks instance.
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
 * @summary Modifies the maintenance window for a StarRocks instance.
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
 * @summary Modifies the maintenance window for a StarRocks instance.
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
 * @summary Modifies the number of nodes in a compute group of a Serverless StarRocks instance.
 *
 * @description Before using this operation, make sure that you fully understand the billing method and <props="china">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items)<props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of Serverless StarRocks.
 * When calling this operation, note the following:
 * - Only Standard Standard instances support modifying the number of compute group nodes. Basic Standard instances do not support this operation.
 * - The instance must be in the Running state.
 * - The number of FE nodes cannot be an even number, and FE nodes do not support scale-in.
 * After modifying the node count, billing changes are as follows:
 * - Pay-as-you-go: Billed based on the new node count.
 * - Subscription: Within the billing cycle, the additional fee is calculated based on the price difference between the old and new configurations and the remaining days (from 00:00 of the next day to the end of the validity period).
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
 * @summary Modifies the number of nodes in a compute group of a Serverless StarRocks instance.
 *
 * @description Before using this operation, make sure that you fully understand the billing method and <props="china">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items)<props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of Serverless StarRocks.
 * When calling this operation, note the following:
 * - Only Standard Standard instances support modifying the number of compute group nodes. Basic Standard instances do not support this operation.
 * - The instance must be in the Running state.
 * - The number of FE nodes cannot be an even number, and FE nodes do not support scale-in.
 * After modifying the node count, billing changes are as follows:
 * - Pay-as-you-go: Billed based on the new node count.
 * - Subscription: Within the billing cycle, the additional fee is calculated based on the price difference between the old and new configurations and the remaining days (from 00:00 of the next day to the end of the validity period).
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
 * @summary Modifies an Auto Scaling rule.
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
 * @summary Modifies an Auto Scaling rule.
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
 * @summary Modify the node specifications type of the compute group.
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
 * @summary Modify the node specifications type of the compute group.
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
 * @summary Runs a precheck to modify the node specification type for a compute group.
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
 * @summary Runs a precheck to modify the node specification type for a compute group.
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
 * @summary Modifies the password for a StarRocks user.
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
 * @summary Modifies the password for a StarRocks user.
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
 * @summary Queries the price for enabling multi-zone deployment.
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
 * @summary Queries the price for enabling multi-zone deployment.
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
 * @summary Queries the latest minor version for the current major version.
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
 * @summary Queries the latest minor version for the current major version.
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
 * @summary Queries the price for changing the billing method of a StarRocks instance.
 *
 * @description Before you call this operation, make sure that you fully understand the billing methods and <props="china">[billable items](https://help.aliyun.com/zh/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c4g.11186623.help-menu-28066.d_0_1_1.4db82b05p3Gg0G)<props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of Serverless StarRocks.
 * Note the following when you call this operation:
 * - You can change the number of compute units (CUs) in a compute group only for Standard Edition instances. This feature is not supported for Starter Edition instances.
 * - You can increase the disk size only for instances that have a standard compute group specification.
 * - The instance must be in the Running state.
 * After you change the number of CUs, the billing changes as follows:
 * - Pay-as-you-go: You are billed based on the new number of CUs.
 * - Subscription: The system calculates the supplementary fee based on the price difference between the old and new configurations and the remaining days in the billing cycle. The calculation starts from 00:00 on the following day.
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
 * @summary Queries the price for changing the billing method of a StarRocks instance.
 *
 * @description Before you call this operation, make sure that you fully understand the billing methods and <props="china">[billable items](https://help.aliyun.com/zh/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c4g.11186623.help-menu-28066.d_0_1_1.4db82b05p3Gg0G)<props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of Serverless StarRocks.
 * Note the following when you call this operation:
 * - You can change the number of compute units (CUs) in a compute group only for Standard Edition instances. This feature is not supported for Starter Edition instances.
 * - You can increase the disk size only for instances that have a standard compute group specification.
 * - The instance must be in the Running state.
 * After you change the number of CUs, the billing changes as follows:
 * - Pay-as-you-go: You are billed based on the new number of CUs.
 * - Subscription: The system calculates the supplementary fee based on the price difference between the old and new configurations and the remaining days in the billing cycle. The calculation starts from 00:00 on the following day.
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
 * @summary Queries the price for modifying the CU of compute group nodes.
 *
 * @description Before you use this API, understand the billing methods and <props="china">[billable items](https://help.aliyun.com/zh/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c4g.11186623.help-menu-28066.d_0_1_1.4db82b05p3Gg0G) <props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) for Serverless StarRocks.
 * When you call this API, note the following:
 * - Only standard instances allow you to modify the number of CUs for compute groups. Entry-level instances do not.
 * - You can increase the disk size only for instances with a Standard Edition (standard) compute group.
 * - The instance must be in the Running state.
 * After you modify the number of CUs, billing changes as follows:
 * - Pay-as-you-go: Billing is based on the new number of CUs.
 * - Subscription: The amount to pay is calculated based on the price difference between the old and new configurations for the remainder of the subscription period. This period starts at 00:00 on the following day.
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
 * @summary Queries the price for modifying the CU of compute group nodes.
 *
 * @description Before you use this API, understand the billing methods and <props="china">[billable items](https://help.aliyun.com/zh/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c4g.11186623.help-menu-28066.d_0_1_1.4db82b05p3Gg0G) <props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) for Serverless StarRocks.
 * When you call this API, note the following:
 * - Only standard instances allow you to modify the number of CUs for compute groups. Entry-level instances do not.
 * - You can increase the disk size only for instances with a Standard Edition (standard) compute group.
 * - The instance must be in the Running state.
 * After you modify the number of CUs, billing changes as follows:
 * - Pay-as-you-go: Billing is based on the new number of CUs.
 * - Subscription: The amount to pay is calculated based on the price difference between the old and new configurations for the remainder of the subscription period. This period starts at 00:00 on the following day.
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
 * @summary Retrieve the price for changing the number of disks in a compute group node
 *
 * @description Before you call this operation, review the billing methods and <props="china">[billable items](https://help.aliyun.com/zh/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c4g.11186623.help-menu-28066.d_0_1_1.4db82b05p3Gg0G)<props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) for Serverless StarRocks.
 * - You can increase the disk count only for Standard Edition instances. You cannot increase the disk count for Starter Edition instances.
 * - You can increase the disk count only for instances with a compute group specification type of Standard Edition (standard).
 * - The instance must be in the Running state.
 * After you increase the disk count, billing changes as follows:
 * - Pay-as-you-go: Billing is based on the new disk type.
 * - Subscription: During the billing cycle, the additional fee is calculated based on the price difference between the new and original configurations and the remaining days—from 00:00 the next day to the end of the validity period.
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
 * @summary Retrieve the price for changing the number of disks in a compute group node
 *
 * @description Before you call this operation, review the billing methods and <props="china">[billable items](https://help.aliyun.com/zh/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c4g.11186623.help-menu-28066.d_0_1_1.4db82b05p3Gg0G)<props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) for Serverless StarRocks.
 * - You can increase the disk count only for Standard Edition instances. You cannot increase the disk count for Starter Edition instances.
 * - You can increase the disk count only for instances with a compute group specification type of Standard Edition (standard).
 * - The instance must be in the Running state.
 * After you increase the disk count, billing changes as follows:
 * - Pay-as-you-go: Billing is based on the new disk type.
 * - Subscription: During the billing cycle, the additional fee is calculated based on the price difference between the new and original configurations and the remaining days—from 00:00 the next day to the end of the validity period.
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
 * @summary Queries the price of changing the disk performance level for a compute group node.
 *
 * @description Before you call this operation, make sure that you understand the billing methods and <props="intl">[pricing](https://www.alibabacloud.com/product/ecs?_p_lc=1#pricing) of Serverless StarRocks.
 * Note the following when you call this operation:
 * - Only standard instances support disk upgrade or downgrade. Entry-level instances do not.
 * - Only instances with a standard compute group specification support disk upgrade or downgrade.
 * - The instance must be in the running state.
 * - You cannot downgrade the disk to performance level (PL) 0.
 * - The performance level of an Enhanced SSD (ESSD) is limited by its capacity. If you cannot upgrade the performance level, scale out the disk and try again. For more information, see <props="intl">[ESSDs](https://www.alibabacloud.com/help/en/ecs/user-guide/essds).
 * After you upgrade or downgrade a disk, the billing changes as follows:
 * - Pay-as-you-go: You are charged based on the new disk type.
 * - Subscription: A supplementary fee is calculated based on the price difference between the new and old configurations and the remaining days in the subscription period, starting from 00:00 on the following day.
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
 * @summary Queries the price of changing the disk performance level for a compute group node.
 *
 * @description Before you call this operation, make sure that you understand the billing methods and <props="intl">[pricing](https://www.alibabacloud.com/product/ecs?_p_lc=1#pricing) of Serverless StarRocks.
 * Note the following when you call this operation:
 * - Only standard instances support disk upgrade or downgrade. Entry-level instances do not.
 * - Only instances with a standard compute group specification support disk upgrade or downgrade.
 * - The instance must be in the running state.
 * - You cannot downgrade the disk to performance level (PL) 0.
 * - The performance level of an Enhanced SSD (ESSD) is limited by its capacity. If you cannot upgrade the performance level, scale out the disk and try again. For more information, see <props="intl">[ESSDs](https://www.alibabacloud.com/help/en/ecs/user-guide/essds).
 * After you upgrade or downgrade a disk, the billing changes as follows:
 * - Pay-as-you-go: You are charged based on the new disk type.
 * - Subscription: A supplementary fee is calculated based on the price difference between the new and old configurations and the remaining days in the subscription period, starting from 00:00 on the following day.
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
 * @summary Queries the price for modifying the disk size of a single node in a compute group.
 *
 * @description Before you call this operation, make sure you understand the billing methods and <props="china">[billable items](https://help.aliyun.com/zh/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c4g.11186623.help-menu-28066.d_0_1_1.4db82b05p3Gg0G) <props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of Serverless StarRocks. When you call this operation, note the following:
 * - Disk scale-out is supported only for standard instances. It is not supported for entry-level instances.
 * - Disk scale-out is supported only for instances that use the standard compute group specification.
 * - The instance must be in the Running state.
 * After you scale out the disk, the billing changes are as follows:
 * - Pay-as-you-go: You are billed for the new disk size.
 * - Subscription: A supplementary fee is calculated based on the price difference between the old and new configurations and the remaining days in your subscription. The remaining days are calculated from 00:00 on the next day until the subscription expires.
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
 * @summary Queries the price for modifying the disk size of a single node in a compute group.
 *
 * @description Before you call this operation, make sure you understand the billing methods and <props="china">[billable items](https://help.aliyun.com/zh/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c4g.11186623.help-menu-28066.d_0_1_1.4db82b05p3Gg0G) <props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of Serverless StarRocks. When you call this operation, note the following:
 * - Disk scale-out is supported only for standard instances. It is not supported for entry-level instances.
 * - Disk scale-out is supported only for instances that use the standard compute group specification.
 * - The instance must be in the Running state.
 * After you scale out the disk, the billing changes are as follows:
 * - Pay-as-you-go: You are billed for the new disk size.
 * - Subscription: A supplementary fee is calculated based on the price difference between the old and new configurations and the remaining days in your subscription. The remaining days are calculated from 00:00 on the next day until the subscription expires.
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
 * @summary Queries the price for modifying the disk type of nodes in a compute group.
 *
 * @description Before you call this API, make sure that you understand the billing methods and <props="china">[billable items](https://help.aliyun.com/zh/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c4g.11186623.help-menu-28066.d_0_1_1.4db82b05p3Gg0G) <props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of the Serverless StarRocks product. Take note of the following:
 * - Only standard instances support disk scale-out. Entry-level instances do not.
 * - Only instances that have a compute group of the Standard Edition (standard) specification type support disk scale-out.
 * - Instances must be in the running (Running) state.
 * After a disk scale-out, the billing changes as follows:
 * - Pay-as-you-go: You are billed based on the new disk size.
 * - Subscription: A supplemental fee is calculated based on the price difference between the new and old configurations for the remaining duration of the subscription. The remaining duration is calculated from 00:00 on the next day until the subscription expires.
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
 * @summary Queries the price for modifying the disk type of nodes in a compute group.
 *
 * @description Before you call this API, make sure that you understand the billing methods and <props="china">[billable items](https://help.aliyun.com/zh/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c4g.11186623.help-menu-28066.d_0_1_1.4db82b05p3Gg0G) <props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of the Serverless StarRocks product. Take note of the following:
 * - Only standard instances support disk scale-out. Entry-level instances do not.
 * - Only instances that have a compute group of the Standard Edition (standard) specification type support disk scale-out.
 * - Instances must be in the running (Running) state.
 * After a disk scale-out, the billing changes as follows:
 * - Pay-as-you-go: You are billed based on the new disk size.
 * - Subscription: A supplemental fee is calculated based on the price difference between the new and old configurations for the remaining duration of the subscription. The remaining duration is calculated from 00:00 on the next day until the subscription expires.
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
 * @summary Queries the price for changing the number of nodes in a compute group.
 *
 * @description Before you call this API, make sure you understand the billing methods and <props="china">[billable items](https://help.aliyun.com/zh/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c4g.11186623.help-menu-28066.d_0_1_1.4db82b05p3Gg0G) <props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of Serverless StarRocks.
 * When you call this API, note the following:
 * - You can change the number of nodes in a compute group only for standard instances. This operation is not supported for entry-level instances.
 * - The instance must be in the Running state.
 * - The number of frontend (FE) nodes cannot be an even number. You cannot scale in FE nodes.
 * After you change the number of nodes, billing is affected as follows:
 * - Pay-as-you-go: You are charged based on the new number of nodes.
 * - Subscription: A supplemental fee is calculated based on the price difference between the old and new configurations and the number of remaining days in the subscription period. The remaining period is calculated from 00:00 of the next day until the subscription expires.
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
 * @summary Queries the price for changing the number of nodes in a compute group.
 *
 * @description Before you call this API, make sure you understand the billing methods and <props="china">[billable items](https://help.aliyun.com/zh/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c4g.11186623.help-menu-28066.d_0_1_1.4db82b05p3Gg0G) <props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of Serverless StarRocks.
 * When you call this API, note the following:
 * - You can change the number of nodes in a compute group only for standard instances. This operation is not supported for entry-level instances.
 * - The instance must be in the Running state.
 * - The number of frontend (FE) nodes cannot be an even number. You cannot scale in FE nodes.
 * After you change the number of nodes, billing is affected as follows:
 * - Pay-as-you-go: You are charged based on the new number of nodes.
 * - Subscription: A supplemental fee is calculated based on the price difference between the old and new configurations and the number of remaining days in the subscription period. The remaining period is calculated from 00:00 of the next day until the subscription expires.
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
 * @summary Queries the price to change the specification type of a compute group.
 *
 * @description Before you call this operation, ensure that you understand the billing methods and <props="china">[billable items](https://help.aliyun.com/zh/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c4g.11186623.help-menu-28066.d_0_1_1.4db82b05p3Gg0G)<props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of Serverless StarRocks. Note the following:
 * - Only standard instances support disk scale-out. Basic instances do not.
 * - Only instances with the Standard (standard) compute group specification type support disk scale-out.
 * - The instance must be in the Running state.
 * After a disk scale-out, the billing changes are as follows:
 * - Pay-as-you-go: You are billed based on the new disk size.
 * - Subscription: A supplementary fee is calculated based on the price difference between the old and new configurations and the number of remaining days in the subscription period (from 00:00 on the next day to the end of the validity period).
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
 * @summary Queries the price to change the specification type of a compute group.
 *
 * @description Before you call this operation, ensure that you understand the billing methods and <props="china">[billable items](https://help.aliyun.com/zh/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c4g.11186623.help-menu-28066.d_0_1_1.4db82b05p3Gg0G)<props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of Serverless StarRocks. Note the following:
 * - Only standard instances support disk scale-out. Basic instances do not.
 * - Only instances with the Standard (standard) compute group specification type support disk scale-out.
 * - The instance must be in the Running state.
 * After a disk scale-out, the billing changes are as follows:
 * - Pay-as-you-go: You are billed based on the new disk size.
 * - Subscription: A supplementary fee is calculated based on the price difference between the old and new configurations and the number of remaining days in the subscription period (from 00:00 on the next day to the end of the validity period).
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
 * @summary An API for querying the price of new StarRocks purchases.
 *
 * @description Before you use this API, review the billing model and <props="china">[billable items](https://help.aliyun.com/zh/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c4g.11186623.help-menu-28066.d_0_1_1.4db82b05p3Gg0G)<props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) for Serverless StarRocks.
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
 * @summary An API for querying the price of new StarRocks purchases.
 *
 * @description Before you use this API, review the billing model and <props="china">[billable items](https://help.aliyun.com/zh/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c4g.11186623.help-menu-28066.d_0_1_1.4db82b05p3Gg0G)<props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) for Serverless StarRocks.
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
 * @summary Pricing information for unsubscribing from StarRocks subscription instances
 *
 * @description >Danger: 
 * After you release an instance, Alibaba Cloud reclaims all physical resources used by the instance. All associated data is permanently lost and cannot be recovered.
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
 * @summary Pricing information for unsubscribing from StarRocks subscription instances
 *
 * @description >Danger: 
 * After you release an instance, Alibaba Cloud reclaims all physical resources used by the instance. All associated data is permanently lost and cannot be recovered.
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
 * @summary Query the renewal price for a StarRocks billing instance.
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
 * @summary Query the renewal price for a StarRocks billing instance.
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
 * @summary Queries the unpaid orders of a compute group or cluster.
 *
 * @description Queries the unpaid orders of a compute group or cluster.
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
 * @summary Queries the unpaid orders of a compute group or cluster.
 *
 * @description Queries the unpaid orders of a compute group or cluster.
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
 * @summary Queries the available upgrade versions for an EMR Serverless StarRocks instance. StarRocks instances have two version layers: a major version and a minor version. You can view both versions in the Version Information section on the Instance Details page in the EMR console. Use the Minor parameter to specify whether to query upgradable minor versions or major versions.
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
 * @summary Queries the available upgrade versions for an EMR Serverless StarRocks instance. StarRocks instances have two version layers: a major version and a minor version. You can view both versions in the Version Information section on the Instance Details page in the EMR console. Use the Minor parameter to specify whether to query upgradable minor versions or major versions.
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
 * @summary Reboot ECS instances in a cluster.
 *
 * @description This operation is asynchronous. The instance does not reboot immediately. After a successful call, the instance enters the Rebooting state. The reboot is complete when the instance status changes to Running.
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
 * @summary Reboot ECS instances in a cluster.
 *
 * @description This operation is asynchronous. The instance does not reboot immediately. After a successful call, the instance enters the Rebooting state. The reboot is complete when the instance status changes to Running.
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
 * @summary Renews an instance.
 *
 * @description Before you call this API, make sure that you fully understand the billing model and <props="china">[billable items](https://help.aliyun.com/zh/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c4g.11186623.help-menu-28066.d_0_1_1.4db82b05p3Gg0G) <props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of Serverless StarRocks.
 * When you call this API, note that only subscription instances can be renewed.
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
 * @summary Renews an instance.
 *
 * @description Before you call this API, make sure that you fully understand the billing model and <props="china">[billable items](https://help.aliyun.com/zh/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c4g.11186623.help-menu-28066.d_0_1_1.4db82b05p3Gg0G) <props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of Serverless StarRocks.
 * When you call this API, note that only subscription instances can be renewed.
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
 * @summary Restarts a specified node group.
 *
 * @description This operation is asynchronous. The instance does not restart immediately. After you call the operation successfully, the instance enters the restarting state. When the instance status changes to running, the restart is complete.
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
 * @summary Restarts a specified node group.
 *
 * @description This operation is asynchronous. The instance does not restart immediately. After you call the operation successfully, the instance enters the restarting state. When the instance status changes to running, the restart is complete.
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
 * @summary Restart nodes in a cluster.
 *
 * @description This API is asynchronous. The instance restart is not immediate. After a successful call, the instance enters the restarting state. The restart is complete when the returned status is running.
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
 * @summary Restart nodes in a cluster.
 *
 * @description This API is asynchronous. The instance restart is not immediate. After a successful call, the instance enters the restarting state. The restart is complete when the returned status is running.
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
 * @summary Restore an instance from a backup
 *
 * @description This is an asynchronous API. The instance does not restart immediately. After you call this API successfully, the instance enters the restarting state. When the instance status changes to running, the restore is complete.
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
 * @summary Restore an instance from a backup
 *
 * @description This is an asynchronous API. The instance does not restart immediately. After you call this API successfully, the instance enters the restarting state. When the instance status changes to running, the restore is complete.
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
 * @summary Resumes an instance automatically stopped by openlake.
 *
 * @description >Danger: 
 * When you release an instance, its physical resources are reclaimed. All data on the instance is lost and cannot be recovered.
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
 * @summary Resumes an instance automatically stopped by openlake.
 *
 * @description >Danger: 
 * When you release an instance, its physical resources are reclaimed. All data on the instance is lost and cannot be recovered.
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
 * @summary Rolls back a configuration modification that is currently in progress.
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
 * @summary Rolls back a configuration modification that is currently in progress.
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
 * @summary Switches the active and standby zones.
 *
 * @description Switches the active and standby zones.
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
 * @summary Switches the active and standby zones.
 *
 * @description Switches the active and standby zones.
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
 * @summary Attaches tags to specified resources.
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
 * @summary Attaches tags to specified resources.
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
 * @summary Enables or disables automatic minor version upgrades for a StarRocks instance.
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
 * @summary Enables or disables automatic minor version upgrades for a StarRocks instance.
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
 * @summary Switches an Internet-facing SLB instance on or off.
 *
 * @description >Danger: 
 * After you release an instance, Alibaba Cloud reclaims all physical resources used by the instance. All associated data is permanently lost and cannot be recovered.
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
 * @summary Switches an Internet-facing SLB instance on or off.
 *
 * @description >Danger: 
 * After you release an instance, Alibaba Cloud reclaims all physical resources used by the instance. All associated data is permanently lost and cannot be recovered.
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
 * @summary Detaches tags from multiple resources.
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
 * @summary Detaches tags from multiple resources.
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
 * @summary Updates the description of a backup job.
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
 * @summary Updates the description of a backup job.
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
 * @summary Updates a backup policy.
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
 * @summary Updates a backup policy.
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
 * @summary Updates the number of gateway nodes.
 *
 * @description Updates the number of gateway nodes.
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
 * @summary Updates the number of gateway nodes.
 *
 * @description Updates the number of gateway nodes.
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
 * @summary Updates the CIDR blocks in a whitelist group.
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
 * @summary Updates the CIDR blocks in a whitelist group.
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
 * @summary Updates the description of a compute group.
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
 * @summary Updates the description of a compute group.
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
 * @summary Enable or disable the Internet-facing SLB for the FE or BE component.
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
 * @summary Enable or disable the Internet-facing SLB for the FE or BE component.
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
 * @summary Upgrades the version of a Serverless StarRocks instance. Serverless StarRocks has two levels of version definition: the major version displayed in the "Version" field on the cluster details page, and the minor version displayed in the "Minor Version" field on the cluster details page. This operation can be used to upgrade either the minor version or the major version. You can call the QueryUpgradableVersions operation to query the versions to which a cluster can be upgraded.
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
 * @summary Upgrades the version of a Serverless StarRocks instance. Serverless StarRocks has two levels of version definition: the major version displayed in the "Version" field on the cluster details page, and the minor version displayed in the "Minor Version" field on the cluster details page. This operation can be used to upgrade either the minor version or the major version. You can call the QueryUpgradableVersions operation to query the versions to which a cluster can be upgraded.
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