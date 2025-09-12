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
 * @summary 资源转组
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
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNewResourceGroupId()) {
    query["NewResourceGroupId"] = request.newResourceGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
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
 * @summary 资源转组
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
    body["AdminPassword"] = request.adminPassword();
  }

  if (!!request.hasAgentNodeGroup()) {
    body["AgentNodeGroup"] = request.agentNodeGroup();
  }

  if (!!request.hasAutoPay()) {
    body["AutoPay"] = request.autoPay();
  }

  if (!!request.hasAutoRenew()) {
    body["AutoRenew"] = request.autoRenew();
  }

  if (!!request.hasBackendNodeGroups()) {
    body["BackendNodeGroups"] = request.backendNodeGroups();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDuration()) {
    body["Duration"] = request.duration();
  }

  if (!!request.hasEncrypted()) {
    body["Encrypted"] = request.encrypted();
  }

  if (!!request.hasFrontendNodeGroups()) {
    body["FrontendNodeGroups"] = request.frontendNodeGroups();
  }

  if (!!request.hasGatewayType()) {
    body["GatewayType"] = request.gatewayType();
  }

  if (!!request.hasInstanceName()) {
    body["InstanceName"] = request.instanceName();
  }

  if (!!request.hasKmsKeyId()) {
    body["KmsKeyId"] = request.kmsKeyId();
  }

  if (!!request.hasObserverNodeGroups()) {
    body["ObserverNodeGroups"] = request.observerNodeGroups();
  }

  if (!!request.hasOssAccessingRoleName()) {
    body["OssAccessingRoleName"] = request.ossAccessingRoleName();
  }

  if (!!request.hasPackageType()) {
    body["PackageType"] = request.packageType();
  }

  if (!!request.hasPayType()) {
    body["PayType"] = request.payType();
  }

  if (!!request.hasPricingCycle()) {
    body["PricingCycle"] = request.pricingCycle();
  }

  if (!!request.hasPromotionOptionNo()) {
    body["PromotionOptionNo"] = request.promotionOptionNo();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasRunMode()) {
    body["RunMode"] = request.runMode();
  }

  if (!!request.hasTags()) {
    body["Tags"] = request.tags();
  }

  if (!!request.hasVSwitches()) {
    body["VSwitches"] = request.vSwitches();
  }

  if (!!request.hasVersion()) {
    body["Version"] = request.version();
  }

  if (!!request.hasVpcId()) {
    body["VpcId"] = request.vpcId();
  }

  if (!!request.hasZoneId()) {
    body["ZoneId"] = request.zoneId();
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
 * @summary 为用户创建AliyunServiceRoleForEMRStarRocks
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
 * @summary 为用户创建AliyunServiceRoleForEMRStarRocks
 *
 * @return CreateServiceLinkedRoleResponse
 */
CreateServiceLinkedRoleResponse Client::createServiceLinkedRole() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createServiceLinkedRoleWithOptions(headers, runtime);
}

/**
 * @summary 根据集群ID或者名称等信息过滤集群
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
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tag(), "Tag", "json"));
  }

  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.instanceName();
  }

  if (!!request.hasInstanceStatus()) {
    query["InstanceStatus"] = request.instanceStatus();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTagShrink()) {
    query["Tag"] = request.tagShrink();
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
 * @summary 根据集群ID或者名称等信息过滤集群
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
    query["FastMode"] = request.fastMode();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNodeGroupId()) {
    query["NodeGroupId"] = request.nodeGroupId();
  }

  if (!!request.hasPromotionOptionNo()) {
    query["PromotionOptionNo"] = request.promotionOptionNo();
  }

  if (!!request.hasTarget()) {
    query["Target"] = request.target();
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
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNodeGroupId()) {
    query["NodeGroupId"] = request.nodeGroupId();
  }

  if (!!request.hasTarget()) {
    query["Target"] = request.target();
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
    query["FastMode"] = request.fastMode();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNodeGroupId()) {
    query["NodeGroupId"] = request.nodeGroupId();
  }

  if (!!request.hasPromotionOptionNo()) {
    query["PromotionOptionNo"] = request.promotionOptionNo();
  }

  if (!!request.hasTarget()) {
    query["Target"] = request.target();
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
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNodeGroupId()) {
    query["NodeGroupId"] = request.nodeGroupId();
  }

  if (!!request.hasPromotionOptionNo()) {
    query["PromotionOptionNo"] = request.promotionOptionNo();
  }

  if (!!request.hasTarget()) {
    query["Target"] = request.target();
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
    query["FastMode"] = request.fastMode();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNodeGroupId()) {
    query["NodeGroupId"] = request.nodeGroupId();
  }

  if (!!request.hasPromotionOptionNo()) {
    query["PromotionOptionNo"] = request.promotionOptionNo();
  }

  if (!!request.hasTarget()) {
    query["Target"] = request.target();
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
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNodeGroupId()) {
    query["NodeGroupId"] = request.nodeGroupId();
  }

  if (!!request.hasPromotionOptionNo()) {
    query["PromotionOptionNo"] = request.promotionOptionNo();
  }

  if (!!request.hasTarget()) {
    query["Target"] = request.target();
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
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNodeGroupId()) {
    query["NodeGroupId"] = request.nodeGroupId();
  }

  if (!!request.hasTarget()) {
    query["Target"] = request.target();
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
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMinor()) {
    query["Minor"] = request.minor();
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
    query["InstanceId"] = request.instanceId();
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
    query["FastMode"] = request.fastMode();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary 打标
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
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    body["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTag()) {
    body["Tag"] = request.tag();
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
 * @summary 打标
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
 * @summary 删除标签
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
    request.setResourceIdShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.resourceId(), "ResourceId", "json"));
  }

  if (!!tmpReq.hasTagKey()) {
    request.setTagKeyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tagKey(), "TagKey", "json"));
  }

  json query = {};
  if (!!request.hasAll()) {
    query["All"] = request.all();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceIdShrink()) {
    query["ResourceId"] = request.resourceIdShrink();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTagKeyShrink()) {
    query["TagKey"] = request.tagKeyShrink();
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
 * @summary 删除标签
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
    query["ClusterName"] = request.clusterName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
    query["FastMode"] = request.fastMode();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMinor()) {
    query["Minor"] = request.minor();
  }

  if (!!request.hasTargetVersion()) {
    query["TargetVersion"] = request.targetVersion();
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