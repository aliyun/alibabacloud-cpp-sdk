#include <darabonba/Core.hpp>
#include <alibabacloud/Hitsdb20200615.hpp>
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
using namespace AlibabaCloud::Hitsdb20200615::Models;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{

AlibabaCloud::Hitsdb20200615::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("hitsdb", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Changes a resource group to another.
 *
 * @param request ChangeResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroupWithOptions(const ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceRegionId()) {
    query["ResourceRegionId"] = request.getResourceRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChangeResourceGroup"},
    {"version" , "2020-06-15"},
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
 * @summary Changes a resource group to another.
 *
 * @param request ChangeResourceGroupRequest
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroup(const ChangeResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeResourceGroupWithOptions(request, runtime);
}

/**
 * @param request CheckLdpsColumnarIndexStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckLdpsColumnarIndexStatusResponse
 */
CheckLdpsColumnarIndexStatusResponse Client::checkLdpsColumnarIndexStatusWithOptions(const CheckLdpsColumnarIndexStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckLdpsColumnarIndexStatus"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckLdpsColumnarIndexStatusResponse>();
}

/**
 * @param request CheckLdpsColumnarIndexStatusRequest
 * @return CheckLdpsColumnarIndexStatusResponse
 */
CheckLdpsColumnarIndexStatusResponse Client::checkLdpsColumnarIndexStatus(const CheckLdpsColumnarIndexStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkLdpsColumnarIndexStatusWithOptions(request, runtime);
}

/**
 * @summary 创建弹性伸缩配置
 *
 * @param tmpReq CreateAutoScalingConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAutoScalingConfigResponse
 */
CreateAutoScalingConfigResponse Client::createAutoScalingConfigWithOptions(const CreateAutoScalingConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateAutoScalingConfigShrinkRequest request = CreateAutoScalingConfigShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasScaleRuleList()) {
    request.setScaleRuleListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getScaleRuleList(), "ScaleRuleList", "json"));
  }

  json query = {};
  if (!!request.hasConfigName()) {
    query["ConfigName"] = request.getConfigName();
  }

  if (!!request.hasEffectiveTimeEnd()) {
    query["EffectiveTimeEnd"] = request.getEffectiveTimeEnd();
  }

  if (!!request.hasEffectiveTimeStart()) {
    query["EffectiveTimeStart"] = request.getEffectiveTimeStart();
  }

  if (!!request.hasEnabled()) {
    query["Enabled"] = request.getEnabled();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.getEngine();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNodesMax()) {
    query["NodesMax"] = request.getNodesMax();
  }

  if (!!request.hasNodesMin()) {
    query["NodesMin"] = request.getNodesMin();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasScaleRuleListShrink()) {
    query["ScaleRuleList"] = request.getScaleRuleListShrink();
  }

  if (!!request.hasScaleType()) {
    query["ScaleType"] = request.getScaleType();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasSpecId()) {
    query["SpecId"] = request.getSpecId();
  }

  if (!!request.hasStorageCapacityMax()) {
    query["StorageCapacityMax"] = request.getStorageCapacityMax();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAutoScalingConfig"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAutoScalingConfigResponse>();
}

/**
 * @summary 创建弹性伸缩配置
 *
 * @param request CreateAutoScalingConfigRequest
 * @return CreateAutoScalingConfigResponse
 */
CreateAutoScalingConfigResponse Client::createAutoScalingConfig(const CreateAutoScalingConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAutoScalingConfigWithOptions(request, runtime);
}

/**
 * @summary 创建弹性伸缩规则
 *
 * @param request CreateAutoScalingRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAutoScalingRuleResponse
 */
CreateAutoScalingRuleResponse Client::createAutoScalingRuleWithOptions(const CreateAutoScalingRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasEnabled()) {
    query["Enabled"] = request.getEnabled();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasObservationWindow()) {
    query["ObservationWindow"] = request.getObservationWindow();
  }

  if (!!request.hasOperationType()) {
    query["OperationType"] = request.getOperationType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasRuleType()) {
    query["RuleType"] = request.getRuleType();
  }

  if (!!request.hasScaleInStep()) {
    query["ScaleInStep"] = request.getScaleInStep();
  }

  if (!!request.hasScaleOutStep()) {
    query["ScaleOutStep"] = request.getScaleOutStep();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasSilenceTime()) {
    query["SilenceTime"] = request.getSilenceTime();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTargetMetric()) {
    query["TargetMetric"] = request.getTargetMetric();
  }

  if (!!request.hasTargetNodes()) {
    query["TargetNodes"] = request.getTargetNodes();
  }

  if (!!request.hasThresholdLower()) {
    query["ThresholdLower"] = request.getThresholdLower();
  }

  if (!!request.hasThresholdUpper()) {
    query["ThresholdUpper"] = request.getThresholdUpper();
  }

  if (!!request.hasTriggerCronExpr()) {
    query["TriggerCronExpr"] = request.getTriggerCronExpr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAutoScalingRule"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAutoScalingRuleResponse>();
}

/**
 * @summary 创建弹性伸缩规则
 *
 * @param request CreateAutoScalingRuleRequest
 * @return CreateAutoScalingRuleResponse
 */
CreateAutoScalingRuleResponse Client::createAutoScalingRule(const CreateAutoScalingRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAutoScalingRuleWithOptions(request, runtime);
}

/**
 * @param request CreateLdpsComputeGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLdpsComputeGroupResponse
 */
CreateLdpsComputeGroupResponse Client::createLdpsComputeGroupWithOptions(const CreateLdpsComputeGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProperties()) {
    query["Properties"] = request.getProperties();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateLdpsComputeGroup"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLdpsComputeGroupResponse>();
}

/**
 * @param request CreateLdpsComputeGroupRequest
 * @return CreateLdpsComputeGroupResponse
 */
CreateLdpsComputeGroupResponse Client::createLdpsComputeGroup(const CreateLdpsComputeGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLdpsComputeGroupWithOptions(request, runtime);
}

/**
 * @summary Creates a Lindorm instance.
 *
 * @description You must select at least one engine when you create a Lindorm instance. For more information about how to select the storage type and engine type when you create a Lindorm instance, see [Select engine types](https://help.aliyun.com/document_detail/181971.html) and [Select storage types](https://help.aliyun.com/document_detail/174643.html).
 *
 * @param request CreateLindormInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLindormInstanceResponse
 */
CreateLindormInstanceResponse Client::createLindormInstanceWithOptions(const CreateLindormInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasArbiterVSwitchId()) {
    query["ArbiterVSwitchId"] = request.getArbiterVSwitchId();
  }

  if (!!request.hasArbiterZoneId()) {
    query["ArbiterZoneId"] = request.getArbiterZoneId();
  }

  if (!!request.hasArchVersion()) {
    query["ArchVersion"] = request.getArchVersion();
  }

  if (!!request.hasAutoRenewDuration()) {
    query["AutoRenewDuration"] = request.getAutoRenewDuration();
  }

  if (!!request.hasAutoRenewal()) {
    query["AutoRenewal"] = request.getAutoRenewal();
  }

  if (!!request.hasColdStorage()) {
    query["ColdStorage"] = request.getColdStorage();
  }

  if (!!request.hasCoreSingleStorage()) {
    query["CoreSingleStorage"] = request.getCoreSingleStorage();
  }

  if (!!request.hasCoreSpec()) {
    query["CoreSpec"] = request.getCoreSpec();
  }

  if (!!request.hasDiskCategory()) {
    query["DiskCategory"] = request.getDiskCategory();
  }

  if (!!request.hasDuration()) {
    query["Duration"] = request.getDuration();
  }

  if (!!request.hasFilestoreNum()) {
    query["FilestoreNum"] = request.getFilestoreNum();
  }

  if (!!request.hasFilestoreSpec()) {
    query["FilestoreSpec"] = request.getFilestoreSpec();
  }

  if (!!request.hasInstanceAlias()) {
    query["InstanceAlias"] = request.getInstanceAlias();
  }

  if (!!request.hasInstanceStorage()) {
    query["InstanceStorage"] = request.getInstanceStorage();
  }

  if (!!request.hasLindormNum()) {
    query["LindormNum"] = request.getLindormNum();
  }

  if (!!request.hasLindormSpec()) {
    query["LindormSpec"] = request.getLindormSpec();
  }

  if (!!request.hasLogDiskCategory()) {
    query["LogDiskCategory"] = request.getLogDiskCategory();
  }

  if (!!request.hasLogNum()) {
    query["LogNum"] = request.getLogNum();
  }

  if (!!request.hasLogSingleStorage()) {
    query["LogSingleStorage"] = request.getLogSingleStorage();
  }

  if (!!request.hasLogSpec()) {
    query["LogSpec"] = request.getLogSpec();
  }

  if (!!request.hasLtsNum()) {
    query["LtsNum"] = request.getLtsNum();
  }

  if (!!request.hasLtsSpec()) {
    query["LtsSpec"] = request.getLtsSpec();
  }

  if (!!request.hasMultiZoneCombination()) {
    query["MultiZoneCombination"] = request.getMultiZoneCombination();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPayType()) {
    query["PayType"] = request.getPayType();
  }

  if (!!request.hasPricingCycle()) {
    query["PricingCycle"] = request.getPricingCycle();
  }

  if (!!request.hasPrimaryVSwitchId()) {
    query["PrimaryVSwitchId"] = request.getPrimaryVSwitchId();
  }

  if (!!request.hasPrimaryZoneId()) {
    query["PrimaryZoneId"] = request.getPrimaryZoneId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasSolrNum()) {
    query["SolrNum"] = request.getSolrNum();
  }

  if (!!request.hasSolrSpec()) {
    query["SolrSpec"] = request.getSolrSpec();
  }

  if (!!request.hasStandbyVSwitchId()) {
    query["StandbyVSwitchId"] = request.getStandbyVSwitchId();
  }

  if (!!request.hasStandbyZoneId()) {
    query["StandbyZoneId"] = request.getStandbyZoneId();
  }

  if (!!request.hasStreamNum()) {
    query["StreamNum"] = request.getStreamNum();
  }

  if (!!request.hasStreamSpec()) {
    query["StreamSpec"] = request.getStreamSpec();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasTsdbNum()) {
    query["TsdbNum"] = request.getTsdbNum();
  }

  if (!!request.hasTsdbSpec()) {
    query["TsdbSpec"] = request.getTsdbSpec();
  }

  if (!!request.hasVPCId()) {
    query["VPCId"] = request.getVPCId();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateLindormInstance"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLindormInstanceResponse>();
}

/**
 * @summary Creates a Lindorm instance.
 *
 * @description You must select at least one engine when you create a Lindorm instance. For more information about how to select the storage type and engine type when you create a Lindorm instance, see [Select engine types](https://help.aliyun.com/document_detail/181971.html) and [Select storage types](https://help.aliyun.com/document_detail/174643.html).
 *
 * @param request CreateLindormInstanceRequest
 * @return CreateLindormInstanceResponse
 */
CreateLindormInstanceResponse Client::createLindormInstance(const CreateLindormInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLindormInstanceWithOptions(request, runtime);
}

/**
 * @summary 创建Lindorm实例
 *
 * @param request CreateLindormV2InstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLindormV2InstanceResponse
 */
CreateLindormV2InstanceResponse Client::createLindormV2InstanceWithOptions(const CreateLindormV2InstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasArbiterVSwitchId()) {
    query["ArbiterVSwitchId"] = request.getArbiterVSwitchId();
  }

  if (!!request.hasArbiterZoneId()) {
    query["ArbiterZoneId"] = request.getArbiterZoneId();
  }

  if (!!request.hasArchVersion()) {
    query["ArchVersion"] = request.getArchVersion();
  }

  if (!!request.hasAutoRenewDuration()) {
    query["AutoRenewDuration"] = request.getAutoRenewDuration();
  }

  if (!!request.hasAutoRenewal()) {
    query["AutoRenewal"] = request.getAutoRenewal();
  }

  if (!!request.hasCapacityStorageSize()) {
    query["CapacityStorageSize"] = request.getCapacityStorageSize();
  }

  if (!!request.hasCloudStorageSize()) {
    query["CloudStorageSize"] = request.getCloudStorageSize();
  }

  if (!!request.hasCloudStorageType()) {
    query["CloudStorageType"] = request.getCloudStorageType();
  }

  if (!!request.hasClusterMode()) {
    query["ClusterMode"] = request.getClusterMode();
  }

  if (!!request.hasClusterPattern()) {
    query["ClusterPattern"] = request.getClusterPattern();
  }

  if (!!request.hasDuration()) {
    query["Duration"] = request.getDuration();
  }

  if (!!request.hasEnableCapacityStorage()) {
    query["EnableCapacityStorage"] = request.getEnableCapacityStorage();
  }

  if (!!request.hasEngineList()) {
    query["EngineList"] = request.getEngineList();
  }

  if (!!request.hasInstanceAlias()) {
    query["InstanceAlias"] = request.getInstanceAlias();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPayType()) {
    query["PayType"] = request.getPayType();
  }

  if (!!request.hasPricingCycle()) {
    query["PricingCycle"] = request.getPricingCycle();
  }

  if (!!request.hasPrimaryVSwitchId()) {
    query["PrimaryVSwitchId"] = request.getPrimaryVSwitchId();
  }

  if (!!request.hasPrimaryZoneId()) {
    query["PrimaryZoneId"] = request.getPrimaryZoneId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStandbyVSwitchId()) {
    query["StandbyVSwitchId"] = request.getStandbyVSwitchId();
  }

  if (!!request.hasStandbyZoneId()) {
    query["StandbyZoneId"] = request.getStandbyZoneId();
  }

  if (!!request.hasVPCId()) {
    query["VPCId"] = request.getVPCId();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateLindormV2Instance"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLindormV2InstanceResponse>();
}

/**
 * @summary 创建Lindorm实例
 *
 * @param request CreateLindormV2InstanceRequest
 * @return CreateLindormV2InstanceResponse
 */
CreateLindormV2InstanceResponse Client::createLindormV2Instance(const CreateLindormV2InstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLindormV2InstanceWithOptions(request, runtime);
}

/**
 * @param request DeleteAutoScalingConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAutoScalingConfigResponse
 */
DeleteAutoScalingConfigResponse Client::deleteAutoScalingConfigWithOptions(const DeleteAutoScalingConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAutoScalingConfig"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAutoScalingConfigResponse>();
}

/**
 * @param request DeleteAutoScalingConfigRequest
 * @return DeleteAutoScalingConfigResponse
 */
DeleteAutoScalingConfigResponse Client::deleteAutoScalingConfig(const DeleteAutoScalingConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAutoScalingConfigWithOptions(request, runtime);
}

/**
 * @param request DeleteAutoScalingRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAutoScalingRuleResponse
 */
DeleteAutoScalingRuleResponse Client::deleteAutoScalingRuleWithOptions(const DeleteAutoScalingRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAutoScalingRule"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAutoScalingRuleResponse>();
}

/**
 * @param request DeleteAutoScalingRuleRequest
 * @return DeleteAutoScalingRuleResponse
 */
DeleteAutoScalingRuleResponse Client::deleteAutoScalingRule(const DeleteAutoScalingRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAutoScalingRuleWithOptions(request, runtime);
}

/**
 * @param request DeleteCustomResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCustomResourceResponse
 */
DeleteCustomResourceResponse Client::deleteCustomResourceWithOptions(const DeleteCustomResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCustomResource"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCustomResourceResponse>();
}

/**
 * @param request DeleteCustomResourceRequest
 * @return DeleteCustomResourceResponse
 */
DeleteCustomResourceResponse Client::deleteCustomResource(const DeleteCustomResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCustomResourceWithOptions(request, runtime);
}

/**
 * @param request DeleteLdpsComputeGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLdpsComputeGroupResponse
 */
DeleteLdpsComputeGroupResponse Client::deleteLdpsComputeGroupWithOptions(const DeleteLdpsComputeGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteLdpsComputeGroup"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLdpsComputeGroupResponse>();
}

/**
 * @param request DeleteLdpsComputeGroupRequest
 * @return DeleteLdpsComputeGroupResponse
 */
DeleteLdpsComputeGroupResponse Client::deleteLdpsComputeGroup(const DeleteLdpsComputeGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteLdpsComputeGroupWithOptions(request, runtime);
}

/**
 * @param request DeployLdpsSemiManagedComponentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeployLdpsSemiManagedComponentResponse
 */
DeployLdpsSemiManagedComponentResponse Client::deployLdpsSemiManagedComponentWithOptions(const DeployLdpsSemiManagedComponentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComponentName()) {
    query["ComponentName"] = request.getComponentName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeployLdpsSemiManagedComponent"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeployLdpsSemiManagedComponentResponse>();
}

/**
 * @param request DeployLdpsSemiManagedComponentRequest
 * @return DeployLdpsSemiManagedComponentResponse
 */
DeployLdpsSemiManagedComponentResponse Client::deployLdpsSemiManagedComponent(const DeployLdpsSemiManagedComponentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deployLdpsSemiManagedComponentWithOptions(request, runtime);
}

/**
 * @summary Obtains the regions supported by Lindorm.
 *
 * @param request DescribeRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegionsWithOptions(const DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRegions"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRegionsResponse>();
}

/**
 * @summary Obtains the regions supported by Lindorm.
 *
 * @param request DescribeRegionsRequest
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions(const DescribeRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRegionsWithOptions(request, runtime);
}

/**
 * @param request GetAutoScalingConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAutoScalingConfigResponse
 */
GetAutoScalingConfigResponse Client::getAutoScalingConfigWithOptions(const GetAutoScalingConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAutoScalingConfig"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAutoScalingConfigResponse>();
}

/**
 * @param request GetAutoScalingConfigRequest
 * @return GetAutoScalingConfigResponse
 */
GetAutoScalingConfigResponse Client::getAutoScalingConfig(const GetAutoScalingConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAutoScalingConfigWithOptions(request, runtime);
}

/**
 * @param request GetAutoScalingRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAutoScalingRuleResponse
 */
GetAutoScalingRuleResponse Client::getAutoScalingRuleWithOptions(const GetAutoScalingRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAutoScalingRule"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAutoScalingRuleResponse>();
}

/**
 * @param request GetAutoScalingRuleRequest
 * @return GetAutoScalingRuleResponse
 */
GetAutoScalingRuleResponse Client::getAutoScalingRule(const GetAutoScalingRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAutoScalingRuleWithOptions(request, runtime);
}

/**
 * @param request GetClientSourceIpRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetClientSourceIpResponse
 */
GetClientSourceIpResponse Client::getClientSourceIpWithOptions(const GetClientSourceIpRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetClientSourceIp"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetClientSourceIpResponse>();
}

/**
 * @param request GetClientSourceIpRequest
 * @return GetClientSourceIpResponse
 */
GetClientSourceIpResponse Client::getClientSourceIp(const GetClientSourceIpRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getClientSourceIpWithOptions(request, runtime);
}

/**
 * @param request GetEngineDefaultAuthRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEngineDefaultAuthResponse
 */
GetEngineDefaultAuthResponse Client::getEngineDefaultAuthWithOptions(const GetEngineDefaultAuthRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetEngineDefaultAuth"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetEngineDefaultAuthResponse>();
}

/**
 * @param request GetEngineDefaultAuthRequest
 * @return GetEngineDefaultAuthResponse
 */
GetEngineDefaultAuthResponse Client::getEngineDefaultAuth(const GetEngineDefaultAuthRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getEngineDefaultAuthWithOptions(request, runtime);
}

/**
 * @summary Queries the whitelists configured for a Lindorm instance.
 *
 * @param request GetInstanceIpWhiteListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceIpWhiteListResponse
 */
GetInstanceIpWhiteListResponse Client::getInstanceIpWhiteListWithOptions(const GetInstanceIpWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstanceIpWhiteList"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceIpWhiteListResponse>();
}

/**
 * @summary Queries the whitelists configured for a Lindorm instance.
 *
 * @param request GetInstanceIpWhiteListRequest
 * @return GetInstanceIpWhiteListResponse
 */
GetInstanceIpWhiteListResponse Client::getInstanceIpWhiteList(const GetInstanceIpWhiteListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceIpWhiteListWithOptions(request, runtime);
}

/**
 * @param request GetInstanceSecurityGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceSecurityGroupsResponse
 */
GetInstanceSecurityGroupsResponse Client::getInstanceSecurityGroupsWithOptions(const GetInstanceSecurityGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstanceSecurityGroups"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceSecurityGroupsResponse>();
}

/**
 * @param request GetInstanceSecurityGroupsRequest
 * @return GetInstanceSecurityGroupsResponse
 */
GetInstanceSecurityGroupsResponse Client::getInstanceSecurityGroups(const GetInstanceSecurityGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceSecurityGroupsWithOptions(request, runtime);
}

/**
 * @param request GetInstanceSummaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceSummaryResponse
 */
GetInstanceSummaryResponse Client::getInstanceSummaryWithOptions(const GetInstanceSummaryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstanceSummary"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceSummaryResponse>();
}

/**
 * @param request GetInstanceSummaryRequest
 * @return GetInstanceSummaryResponse
 */
GetInstanceSummaryResponse Client::getInstanceSummary(const GetInstanceSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceSummaryWithOptions(request, runtime);
}

/**
 * @param request GetLdpsComputeGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLdpsComputeGroupResponse
 */
GetLdpsComputeGroupResponse Client::getLdpsComputeGroupWithOptions(const GetLdpsComputeGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLdpsComputeGroup"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLdpsComputeGroupResponse>();
}

/**
 * @param request GetLdpsComputeGroupRequest
 * @return GetLdpsComputeGroupResponse
 */
GetLdpsComputeGroupResponse Client::getLdpsComputeGroup(const GetLdpsComputeGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLdpsComputeGroupWithOptions(request, runtime);
}

/**
 * @param request GetLdpsNamespacedQuotaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLdpsNamespacedQuotaResponse
 */
GetLdpsNamespacedQuotaResponse Client::getLdpsNamespacedQuotaWithOptions(const GetLdpsNamespacedQuotaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLdpsNamespacedQuota"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLdpsNamespacedQuotaResponse>();
}

/**
 * @param request GetLdpsNamespacedQuotaRequest
 * @return GetLdpsNamespacedQuotaResponse
 */
GetLdpsNamespacedQuotaResponse Client::getLdpsNamespacedQuota(const GetLdpsNamespacedQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLdpsNamespacedQuotaWithOptions(request, runtime);
}

/**
 * @param request GetLdpsResourceCostRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLdpsResourceCostResponse
 */
GetLdpsResourceCostResponse Client::getLdpsResourceCostWithOptions(const GetLdpsResourceCostRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLdpsResourceCost"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLdpsResourceCostResponse>();
}

/**
 * @param request GetLdpsResourceCostRequest
 * @return GetLdpsResourceCostResponse
 */
GetLdpsResourceCostResponse Client::getLdpsResourceCost(const GetLdpsResourceCostRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLdpsResourceCostWithOptions(request, runtime);
}

/**
 * @summary 获取Lindorm引擎配置
 *
 * @param request GetLindormEngineConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLindormEngineConfigResponse
 */
GetLindormEngineConfigResponse Client::getLindormEngineConfigWithOptions(const GetLindormEngineConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEngineType()) {
    query["EngineType"] = request.getEngineType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLindormEngineConfig"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLindormEngineConfigResponse>();
}

/**
 * @summary 获取Lindorm引擎配置
 *
 * @param request GetLindormEngineConfigRequest
 * @return GetLindormEngineConfigResponse
 */
GetLindormEngineConfigResponse Client::getLindormEngineConfig(const GetLindormEngineConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLindormEngineConfigWithOptions(request, runtime);
}

/**
 * @summary Queries the details of each storage type in a Lindorm instance.
 *
 * @description If the version of the underlying storage engine in a Lindorm cluster is 4.1.9 or later, the storage usage values returned for the LStorageUsageList parameter prevail.
 *
 * @param request GetLindormFsUsedDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLindormFsUsedDetailResponse
 */
GetLindormFsUsedDetailResponse Client::getLindormFsUsedDetailWithOptions(const GetLindormFsUsedDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLindormFsUsedDetail"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLindormFsUsedDetailResponse>();
}

/**
 * @summary Queries the details of each storage type in a Lindorm instance.
 *
 * @description If the version of the underlying storage engine in a Lindorm cluster is 4.1.9 or later, the storage usage values returned for the LStorageUsageList parameter prevail.
 *
 * @param request GetLindormFsUsedDetailRequest
 * @return GetLindormFsUsedDetailResponse
 */
GetLindormFsUsedDetailResponse Client::getLindormFsUsedDetail(const GetLindormFsUsedDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLindormFsUsedDetailWithOptions(request, runtime);
}

/**
 * @summary Obtains the detailed information about a Lindorm instance, including the instance type, billing method, and VPC.
 *
 * @param request GetLindormInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLindormInstanceResponse
 */
GetLindormInstanceResponse Client::getLindormInstanceWithOptions(const GetLindormInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLindormInstance"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLindormInstanceResponse>();
}

/**
 * @summary Obtains the detailed information about a Lindorm instance, including the instance type, billing method, and VPC.
 *
 * @param request GetLindormInstanceRequest
 * @return GetLindormInstanceResponse
 */
GetLindormInstanceResponse Client::getLindormInstance(const GetLindormInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLindormInstanceWithOptions(request, runtime);
}

/**
 * @summary Obtains the engine types supported by the specified Lindorm instance.
 *
 * @param request GetLindormInstanceEngineListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLindormInstanceEngineListResponse
 */
GetLindormInstanceEngineListResponse Client::getLindormInstanceEngineListWithOptions(const GetLindormInstanceEngineListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLindormInstanceEngineList"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLindormInstanceEngineListResponse>();
}

/**
 * @summary Obtains the engine types supported by the specified Lindorm instance.
 *
 * @param request GetLindormInstanceEngineListRequest
 * @return GetLindormInstanceEngineListResponse
 */
GetLindormInstanceEngineListResponse Client::getLindormInstanceEngineList(const GetLindormInstanceEngineListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLindormInstanceEngineListWithOptions(request, runtime);
}

/**
 * @summary Queries the instances that meet the specified conditions.
 *
 * @param request GetLindormInstanceListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLindormInstanceListResponse
 */
GetLindormInstanceListResponse Client::getLindormInstanceListWithOptions(const GetLindormInstanceListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasQueryStr()) {
    query["QueryStr"] = request.getQueryStr();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasServiceType()) {
    query["ServiceType"] = request.getServiceType();
  }

  if (!!request.hasSupportEngine()) {
    query["SupportEngine"] = request.getSupportEngine();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLindormInstanceList"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLindormInstanceListResponse>();
}

/**
 * @summary Queries the instances that meet the specified conditions.
 *
 * @param request GetLindormInstanceListRequest
 * @return GetLindormInstanceListResponse
 */
GetLindormInstanceListResponse Client::getLindormInstanceList(const GetLindormInstanceListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLindormInstanceListWithOptions(request, runtime);
}

/**
 * @summary 查询实例详情
 *
 * @param request GetLindormV2InstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLindormV2InstanceResponse
 */
GetLindormV2InstanceResponse Client::getLindormV2InstanceWithOptions(const GetLindormV2InstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLindormV2Instance"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLindormV2InstanceResponse>();
}

/**
 * @summary 查询实例详情
 *
 * @param request GetLindormV2InstanceRequest
 * @return GetLindormV2InstanceResponse
 */
GetLindormV2InstanceResponse Client::getLindormV2Instance(const GetLindormV2InstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLindormV2InstanceWithOptions(request, runtime);
}

/**
 * @summary 查询新架构实例详情
 *
 * @param request GetLindormV2InstanceDetailsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLindormV2InstanceDetailsResponse
 */
GetLindormV2InstanceDetailsResponse Client::getLindormV2InstanceDetailsWithOptions(const GetLindormV2InstanceDetailsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLindormV2InstanceDetails"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLindormV2InstanceDetailsResponse>();
}

/**
 * @summary 查询新架构实例详情
 *
 * @param request GetLindormV2InstanceDetailsRequest
 * @return GetLindormV2InstanceDetailsResponse
 */
GetLindormV2InstanceDetailsResponse Client::getLindormV2InstanceDetails(const GetLindormV2InstanceDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLindormV2InstanceDetailsWithOptions(request, runtime);
}

/**
 * @param request GetLindormV2InstanceEngineListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLindormV2InstanceEngineListResponse
 */
GetLindormV2InstanceEngineListResponse Client::getLindormV2InstanceEngineListWithOptions(const GetLindormV2InstanceEngineListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLindormV2InstanceEngineList"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLindormV2InstanceEngineListResponse>();
}

/**
 * @param request GetLindormV2InstanceEngineListRequest
 * @return GetLindormV2InstanceEngineListResponse
 */
GetLindormV2InstanceEngineListResponse Client::getLindormV2InstanceEngineList(const GetLindormV2InstanceEngineListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLindormV2InstanceEngineListWithOptions(request, runtime);
}

/**
 * @summary 查询新架构实例详情
 *
 * @param request GetLindormV2InstanceForTerraformRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLindormV2InstanceForTerraformResponse
 */
GetLindormV2InstanceForTerraformResponse Client::getLindormV2InstanceForTerraformWithOptions(const GetLindormV2InstanceForTerraformRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLindormV2InstanceForTerraform"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLindormV2InstanceForTerraformResponse>();
}

/**
 * @summary 查询新架构实例详情
 *
 * @param request GetLindormV2InstanceForTerraformRequest
 * @return GetLindormV2InstanceForTerraformResponse
 */
GetLindormV2InstanceForTerraformResponse Client::getLindormV2InstanceForTerraform(const GetLindormV2InstanceForTerraformRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLindormV2InstanceForTerraformWithOptions(request, runtime);
}

/**
 * @summary 查询新架构实例安全组信息
 *
 * @param request GetLindormV2InstanceSecurityGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLindormV2InstanceSecurityGroupsResponse
 */
GetLindormV2InstanceSecurityGroupsResponse Client::getLindormV2InstanceSecurityGroupsWithOptions(const GetLindormV2InstanceSecurityGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLindormV2InstanceSecurityGroups"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLindormV2InstanceSecurityGroupsResponse>();
}

/**
 * @summary 查询新架构实例安全组信息
 *
 * @param request GetLindormV2InstanceSecurityGroupsRequest
 * @return GetLindormV2InstanceSecurityGroupsResponse
 */
GetLindormV2InstanceSecurityGroupsResponse Client::getLindormV2InstanceSecurityGroups(const GetLindormV2InstanceSecurityGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLindormV2InstanceSecurityGroupsWithOptions(request, runtime);
}

/**
 * @param request GetLindormV2StorageUsageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLindormV2StorageUsageResponse
 */
GetLindormV2StorageUsageResponse Client::getLindormV2StorageUsageWithOptions(const GetLindormV2StorageUsageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLindormV2StorageUsage"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLindormV2StorageUsageResponse>();
}

/**
 * @param request GetLindormV2StorageUsageRequest
 * @return GetLindormV2StorageUsageResponse
 */
GetLindormV2StorageUsageResponse Client::getLindormV2StorageUsage(const GetLindormV2StorageUsageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLindormV2StorageUsageWithOptions(request, runtime);
}

/**
 * @summary 获取流引擎信息
 *
 * @param request GetLindormV2StreamEngineInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLindormV2StreamEngineInfoResponse
 */
GetLindormV2StreamEngineInfoResponse Client::getLindormV2StreamEngineInfoWithOptions(const GetLindormV2StreamEngineInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLindormV2StreamEngineInfo"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLindormV2StreamEngineInfoResponse>();
}

/**
 * @summary 获取流引擎信息
 *
 * @param request GetLindormV2StreamEngineInfoRequest
 * @return GetLindormV2StreamEngineInfoResponse
 */
GetLindormV2StreamEngineInfoResponse Client::getLindormV2StreamEngineInfo(const GetLindormV2StreamEngineInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLindormV2StreamEngineInfoWithOptions(request, runtime);
}

/**
 * @summary 查询弹性伸缩配置
 *
 * @param tmpReq ListAutoScalingConfigsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAutoScalingConfigsResponse
 */
ListAutoScalingConfigsResponse Client::listAutoScalingConfigsWithOptions(const ListAutoScalingConfigsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListAutoScalingConfigsShrinkRequest request = ListAutoScalingConfigsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasScaleTypes()) {
    request.setScaleTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getScaleTypes(), "ScaleTypes", "json"));
  }

  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasScaleTypesShrink()) {
    query["ScaleTypes"] = request.getScaleTypesShrink();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAutoScalingConfigs"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAutoScalingConfigsResponse>();
}

/**
 * @summary 查询弹性伸缩配置
 *
 * @param request ListAutoScalingConfigsRequest
 * @return ListAutoScalingConfigsResponse
 */
ListAutoScalingConfigsResponse Client::listAutoScalingConfigs(const ListAutoScalingConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAutoScalingConfigsWithOptions(request, runtime);
}

/**
 * @summary 查询伸缩记录
 *
 * @param tmpReq ListAutoScalingRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAutoScalingRecordsResponse
 */
ListAutoScalingRecordsResponse Client::listAutoScalingRecordsWithOptions(const ListAutoScalingRecordsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListAutoScalingRecordsShrinkRequest request = ListAutoScalingRecordsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasScaleTypes()) {
    request.setScaleTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getScaleTypes(), "ScaleTypes", "json"));
  }

  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasScaleTypesShrink()) {
    query["ScaleTypes"] = request.getScaleTypesShrink();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAutoScalingRecords"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAutoScalingRecordsResponse>();
}

/**
 * @summary 查询伸缩记录
 *
 * @param request ListAutoScalingRecordsRequest
 * @return ListAutoScalingRecordsResponse
 */
ListAutoScalingRecordsResponse Client::listAutoScalingRecords(const ListAutoScalingRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAutoScalingRecordsWithOptions(request, runtime);
}

/**
 * @param request ListAutoScalingRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAutoScalingRulesResponse
 */
ListAutoScalingRulesResponse Client::listAutoScalingRulesWithOptions(const ListAutoScalingRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAutoScalingRules"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAutoScalingRulesResponse>();
}

/**
 * @param request ListAutoScalingRulesRequest
 * @return ListAutoScalingRulesResponse
 */
ListAutoScalingRulesResponse Client::listAutoScalingRules(const ListAutoScalingRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAutoScalingRulesWithOptions(request, runtime);
}

/**
 * @summary 获取计算引擎资源组列表
 *
 * @param request ListLdpsComputeGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLdpsComputeGroupsResponse
 */
ListLdpsComputeGroupsResponse Client::listLdpsComputeGroupsWithOptions(const ListLdpsComputeGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListLdpsComputeGroups"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLdpsComputeGroupsResponse>();
}

/**
 * @summary 获取计算引擎资源组列表
 *
 * @param request ListLdpsComputeGroupsRequest
 * @return ListLdpsComputeGroupsResponse
 */
ListLdpsComputeGroupsResponse Client::listLdpsComputeGroups(const ListLdpsComputeGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listLdpsComputeGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries the tags associated with the specified Lindorm instance.
 *
 * @param request ListTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagResources"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagResourcesResponse>();
}

/**
 * @summary Queries the tags associated with the specified Lindorm instance.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary 单可用区迁移多可用区基础版
 *
 * @param request MigrateSingleZoneToMultiZoneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MigrateSingleZoneToMultiZoneResponse
 */
MigrateSingleZoneToMultiZoneResponse Client::migrateSingleZoneToMultiZoneWithOptions(const MigrateSingleZoneToMultiZoneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasArbitraryVSwitchId()) {
    query["ArbitraryVSwitchId"] = request.getArbitraryVSwitchId();
  }

  if (!!request.hasArbitraryZoneId()) {
    query["ArbitraryZoneId"] = request.getArbitraryZoneId();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStandbyVSwitchId()) {
    query["StandbyVSwitchId"] = request.getStandbyVSwitchId();
  }

  if (!!request.hasStandbyZoneId()) {
    query["StandbyZoneId"] = request.getStandbyZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MigrateSingleZoneToMultiZone"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MigrateSingleZoneToMultiZoneResponse>();
}

/**
 * @summary 单可用区迁移多可用区基础版
 *
 * @param request MigrateSingleZoneToMultiZoneRequest
 * @return MigrateSingleZoneToMultiZoneResponse
 */
MigrateSingleZoneToMultiZoneResponse Client::migrateSingleZoneToMultiZone(const MigrateSingleZoneToMultiZoneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return migrateSingleZoneToMultiZoneWithOptions(request, runtime);
}

/**
 * @summary 修改弹性伸缩配置
 *
 * @param tmpReq ModifyAutoScalingConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAutoScalingConfigResponse
 */
ModifyAutoScalingConfigResponse Client::modifyAutoScalingConfigWithOptions(const ModifyAutoScalingConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyAutoScalingConfigShrinkRequest request = ModifyAutoScalingConfigShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasScaleRuleList()) {
    request.setScaleRuleListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getScaleRuleList(), "ScaleRuleList", "json"));
  }

  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasConfigName()) {
    query["ConfigName"] = request.getConfigName();
  }

  if (!!request.hasEffectiveTimeEnd()) {
    query["EffectiveTimeEnd"] = request.getEffectiveTimeEnd();
  }

  if (!!request.hasEffectiveTimeStart()) {
    query["EffectiveTimeStart"] = request.getEffectiveTimeStart();
  }

  if (!!request.hasEnabled()) {
    query["Enabled"] = request.getEnabled();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.getEngine();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNodesMax()) {
    query["NodesMax"] = request.getNodesMax();
  }

  if (!!request.hasNodesMin()) {
    query["NodesMin"] = request.getNodesMin();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasScaleRuleListShrink()) {
    query["ScaleRuleList"] = request.getScaleRuleListShrink();
  }

  if (!!request.hasScaleType()) {
    query["ScaleType"] = request.getScaleType();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasSpecId()) {
    query["SpecId"] = request.getSpecId();
  }

  if (!!request.hasStorageCapacityMax()) {
    query["StorageCapacityMax"] = request.getStorageCapacityMax();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAutoScalingConfig"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAutoScalingConfigResponse>();
}

/**
 * @summary 修改弹性伸缩配置
 *
 * @param request ModifyAutoScalingConfigRequest
 * @return ModifyAutoScalingConfigResponse
 */
ModifyAutoScalingConfigResponse Client::modifyAutoScalingConfig(const ModifyAutoScalingConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAutoScalingConfigWithOptions(request, runtime);
}

/**
 * @summary 修改弹性伸缩规则
 *
 * @param request ModifyAutoScalingRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAutoScalingRuleResponse
 */
ModifyAutoScalingRuleResponse Client::modifyAutoScalingRuleWithOptions(const ModifyAutoScalingRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasEnabled()) {
    query["Enabled"] = request.getEnabled();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasObservationWindow()) {
    query["ObservationWindow"] = request.getObservationWindow();
  }

  if (!!request.hasOperationType()) {
    query["OperationType"] = request.getOperationType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasRuleType()) {
    query["RuleType"] = request.getRuleType();
  }

  if (!!request.hasScaleInStep()) {
    query["ScaleInStep"] = request.getScaleInStep();
  }

  if (!!request.hasScaleOutStep()) {
    query["ScaleOutStep"] = request.getScaleOutStep();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasSilenceTime()) {
    query["SilenceTime"] = request.getSilenceTime();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTargetMetric()) {
    query["TargetMetric"] = request.getTargetMetric();
  }

  if (!!request.hasTargetNodes()) {
    query["TargetNodes"] = request.getTargetNodes();
  }

  if (!!request.hasThresholdLower()) {
    query["ThresholdLower"] = request.getThresholdLower();
  }

  if (!!request.hasThresholdUpper()) {
    query["ThresholdUpper"] = request.getThresholdUpper();
  }

  if (!!request.hasTriggerCronExpr()) {
    query["TriggerCronExpr"] = request.getTriggerCronExpr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAutoScalingRule"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAutoScalingRuleResponse>();
}

/**
 * @summary 修改弹性伸缩规则
 *
 * @param request ModifyAutoScalingRuleRequest
 * @return ModifyAutoScalingRuleResponse
 */
ModifyAutoScalingRuleResponse Client::modifyAutoScalingRule(const ModifyAutoScalingRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAutoScalingRuleWithOptions(request, runtime);
}

/**
 * @summary Changes the billing method of the specified Lindorm instance.
 *
 * @description You can call this operation to change the billing method of an instance to subscription or pay-as-you-go.
 * Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://www.alibabacloud.com/en/pricing-calculator?spm=a2c63.p38356.0.0.2b024c2adcHeXL&_p_lc=1#/commodity/hitsdb_lindormpre_public_intl) of Lindorm. Published on only international site (alibabacloud.com).
 *
 * @param request ModifyInstancePayTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstancePayTypeResponse
 */
ModifyInstancePayTypeResponse Client::modifyInstancePayTypeWithOptions(const ModifyInstancePayTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDuration()) {
    query["Duration"] = request.getDuration();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPayType()) {
    query["PayType"] = request.getPayType();
  }

  if (!!request.hasPricingCycle()) {
    query["PricingCycle"] = request.getPricingCycle();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyInstancePayType"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstancePayTypeResponse>();
}

/**
 * @summary Changes the billing method of the specified Lindorm instance.
 *
 * @description You can call this operation to change the billing method of an instance to subscription or pay-as-you-go.
 * Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://www.alibabacloud.com/en/pricing-calculator?spm=a2c63.p38356.0.0.2b024c2adcHeXL&_p_lc=1#/commodity/hitsdb_lindormpre_public_intl) of Lindorm. Published on only international site (alibabacloud.com).
 *
 * @param request ModifyInstancePayTypeRequest
 * @return ModifyInstancePayTypeResponse
 */
ModifyInstancePayTypeResponse Client::modifyInstancePayType(const ModifyInstancePayTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstancePayTypeWithOptions(request, runtime);
}

/**
 * @summary 变配实例
 *
 * @param request ModifyLindormV2InstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyLindormV2InstanceResponse
 */
ModifyLindormV2InstanceResponse Client::modifyLindormV2InstanceWithOptions(const ModifyLindormV2InstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCloudStorageSize()) {
    query["CloudStorageSize"] = request.getCloudStorageSize();
  }

  if (!!request.hasCloudStorageType()) {
    query["CloudStorageType"] = request.getCloudStorageType();
  }

  if (!!request.hasEngineType()) {
    query["EngineType"] = request.getEngineType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNodeGroupList()) {
    query["NodeGroupList"] = request.getNodeGroupList();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasUpgradeType()) {
    query["UpgradeType"] = request.getUpgradeType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyLindormV2Instance"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyLindormV2InstanceResponse>();
}

/**
 * @summary 变配实例
 *
 * @param request ModifyLindormV2InstanceRequest
 * @return ModifyLindormV2InstanceResponse
 */
ModifyLindormV2InstanceResponse Client::modifyLindormV2Instance(const ModifyLindormV2InstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyLindormV2InstanceWithOptions(request, runtime);
}

/**
 * @summary 新架构修改安全组接口
 *
 * @param request ModifyLindormV2InstanceSecurityGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyLindormV2InstanceSecurityGroupsResponse
 */
ModifyLindormV2InstanceSecurityGroupsResponse Client::modifyLindormV2InstanceSecurityGroupsWithOptions(const ModifyLindormV2InstanceSecurityGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityGroups()) {
    query["SecurityGroups"] = request.getSecurityGroups();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyLindormV2InstanceSecurityGroups"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyLindormV2InstanceSecurityGroupsResponse>();
}

/**
 * @summary 新架构修改安全组接口
 *
 * @param request ModifyLindormV2InstanceSecurityGroupsRequest
 * @return ModifyLindormV2InstanceSecurityGroupsResponse
 */
ModifyLindormV2InstanceSecurityGroupsResponse Client::modifyLindormV2InstanceSecurityGroups(const ModifyLindormV2InstanceSecurityGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyLindormV2InstanceSecurityGroupsWithOptions(request, runtime);
}

/**
 * @summary 修改Lindorm新版实例白名单
 *
 * @param request ModifyLindormV2WhiteIpListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyLindormV2WhiteIpListResponse
 */
ModifyLindormV2WhiteIpListResponse Client::modifyLindormV2WhiteIpListWithOptions(const ModifyLindormV2WhiteIpListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeleteGroup()) {
    query["DeleteGroup"] = request.getDeleteGroup();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasWhiteIpList()) {
    query["WhiteIpList"] = request.getWhiteIpList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyLindormV2WhiteIpList"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyLindormV2WhiteIpListResponse>();
}

/**
 * @summary 修改Lindorm新版实例白名单
 *
 * @param request ModifyLindormV2WhiteIpListRequest
 * @return ModifyLindormV2WhiteIpListResponse
 */
ModifyLindormV2WhiteIpListResponse Client::modifyLindormV2WhiteIpList(const ModifyLindormV2WhiteIpListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyLindormV2WhiteIpListWithOptions(request, runtime);
}

/**
 * @summary 开通计算引擎
 *
 * @param request OpenComputeEngineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OpenComputeEngineResponse
 */
OpenComputeEngineResponse Client::openComputeEngineWithOptions(const OpenComputeEngineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCpuLimit()) {
    query["CpuLimit"] = request.getCpuLimit();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMemoryLimit()) {
    query["MemoryLimit"] = request.getMemoryLimit();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OpenComputeEngine"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OpenComputeEngineResponse>();
}

/**
 * @summary 开通计算引擎
 *
 * @param request OpenComputeEngineRequest
 * @return OpenComputeEngineResponse
 */
OpenComputeEngineResponse Client::openComputeEngine(const OpenComputeEngineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return openComputeEngineWithOptions(request, runtime);
}

/**
 * @summary 开通计算引擎前置校验
 *
 * @param request OpenComputePreCheckRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OpenComputePreCheckResponse
 */
OpenComputePreCheckResponse Client::openComputePreCheckWithOptions(const OpenComputePreCheckRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCpuLimit()) {
    query["CpuLimit"] = request.getCpuLimit();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMemoryLimit()) {
    query["MemoryLimit"] = request.getMemoryLimit();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OpenComputePreCheck"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OpenComputePreCheckResponse>();
}

/**
 * @summary 开通计算引擎前置校验
 *
 * @param request OpenComputePreCheckRequest
 * @return OpenComputePreCheckResponse
 */
OpenComputePreCheckResponse Client::openComputePreCheck(const OpenComputePreCheckRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return openComputePreCheckWithOptions(request, runtime);
}

/**
 * @summary 开通列存索引
 *
 * @param request OpenLdpsColumnarIndexRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OpenLdpsColumnarIndexResponse
 */
OpenLdpsColumnarIndexResponse Client::openLdpsColumnarIndexWithOptions(const OpenLdpsColumnarIndexRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OpenLdpsColumnarIndex"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OpenLdpsColumnarIndexResponse>();
}

/**
 * @summary 开通列存索引
 *
 * @param request OpenLdpsColumnarIndexRequest
 * @return OpenLdpsColumnarIndexResponse
 */
OpenLdpsColumnarIndexResponse Client::openLdpsColumnarIndex(const OpenLdpsColumnarIndexRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return openLdpsColumnarIndexWithOptions(request, runtime);
}

/**
 * @summary Releases a Lindorm instance.
 *
 * @param request ReleaseLindormInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleaseLindormInstanceResponse
 */
ReleaseLindormInstanceResponse Client::releaseLindormInstanceWithOptions(const ReleaseLindormInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasImmediately()) {
    query["Immediately"] = request.getImmediately();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReleaseLindormInstance"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReleaseLindormInstanceResponse>();
}

/**
 * @summary Releases a Lindorm instance.
 *
 * @param request ReleaseLindormInstanceRequest
 * @return ReleaseLindormInstanceResponse
 */
ReleaseLindormInstanceResponse Client::releaseLindormInstance(const ReleaseLindormInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return releaseLindormInstanceWithOptions(request, runtime);
}

/**
 * @summary 释放实例
 *
 * @param request ReleaseLindormV2InstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleaseLindormV2InstanceResponse
 */
ReleaseLindormV2InstanceResponse Client::releaseLindormV2InstanceWithOptions(const ReleaseLindormV2InstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasImmediately()) {
    query["Immediately"] = request.getImmediately();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReleaseLindormV2Instance"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReleaseLindormV2InstanceResponse>();
}

/**
 * @summary 释放实例
 *
 * @param request ReleaseLindormV2InstanceRequest
 * @return ReleaseLindormV2InstanceResponse
 */
ReleaseLindormV2InstanceResponse Client::releaseLindormV2Instance(const ReleaseLindormV2InstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return releaseLindormV2InstanceWithOptions(request, runtime);
}

/**
 * @summary Renews a subscription Lindorm instance.
 *
 * @description You can call this operation to renew a subscription Lindorm instance for 1 to 9 months or 1 to 3 years.
 * Before you call this operation, make sure that you fully understand the billing methods and pricing of Lindorm.
 *
 * @param request RenewLindormInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RenewLindormInstanceResponse
 */
RenewLindormInstanceResponse Client::renewLindormInstanceWithOptions(const RenewLindormInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDuration()) {
    query["Duration"] = request.getDuration();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPricingCycle()) {
    query["PricingCycle"] = request.getPricingCycle();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RenewLindormInstance"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RenewLindormInstanceResponse>();
}

/**
 * @summary Renews a subscription Lindorm instance.
 *
 * @description You can call this operation to renew a subscription Lindorm instance for 1 to 9 months or 1 to 3 years.
 * Before you call this operation, make sure that you fully understand the billing methods and pricing of Lindorm.
 *
 * @param request RenewLindormInstanceRequest
 * @return RenewLindormInstanceResponse
 */
RenewLindormInstanceResponse Client::renewLindormInstance(const RenewLindormInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return renewLindormInstanceWithOptions(request, runtime);
}

/**
 * @param request RestartLdpsComputeGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestartLdpsComputeGroupResponse
 */
RestartLdpsComputeGroupResponse Client::restartLdpsComputeGroupWithOptions(const RestartLdpsComputeGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RestartLdpsComputeGroup"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RestartLdpsComputeGroupResponse>();
}

/**
 * @param request RestartLdpsComputeGroupRequest
 * @return RestartLdpsComputeGroupResponse
 */
RestartLdpsComputeGroupResponse Client::restartLdpsComputeGroup(const RestartLdpsComputeGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return restartLdpsComputeGroupWithOptions(request, runtime);
}

/**
 * @param request SetDefaultOlapComputeGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetDefaultOlapComputeGroupResponse
 */
SetDefaultOlapComputeGroupResponse Client::setDefaultOlapComputeGroupWithOptions(const SetDefaultOlapComputeGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIsDefault()) {
    query["IsDefault"] = request.getIsDefault();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetDefaultOlapComputeGroup"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetDefaultOlapComputeGroupResponse>();
}

/**
 * @param request SetDefaultOlapComputeGroupRequest
 * @return SetDefaultOlapComputeGroupResponse
 */
SetDefaultOlapComputeGroupResponse Client::setDefaultOlapComputeGroup(const SetDefaultOlapComputeGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setDefaultOlapComputeGroupWithOptions(request, runtime);
}

/**
 * @summary Enables or disables the MySQL compatibility feature for a Lindorm instance.
 *
 * @description Prerequisites
 * *   The LindormTable version of your instance is 2.6.0 or later.
 * *   The LindormTable of your instance supports LindormSQL V3. The value of the EnableLsqlVersionV3 parameter in the response of the GetLindormInstance operation is true for Lindorm instances purchased after Oct 24, 2023, which indicates that LindormSQL is supported by these instances by default. If you want to enable LindormSQL for instances purchased before Oct 24, 2023, contact the on-duty technical support.
 * You can enable the MySQL compatibility feature for a Lindorm instance only when the instance meets the preceding requirements.
 *
 * @param request SwitchLSQLV3MySQLServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SwitchLSQLV3MySQLServiceResponse
 */
SwitchLSQLV3MySQLServiceResponse Client::switchLSQLV3MySQLServiceWithOptions(const SwitchLSQLV3MySQLServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActionType()) {
    query["ActionType"] = request.getActionType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SwitchLSQLV3MySQLService"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SwitchLSQLV3MySQLServiceResponse>();
}

/**
 * @summary Enables or disables the MySQL compatibility feature for a Lindorm instance.
 *
 * @description Prerequisites
 * *   The LindormTable version of your instance is 2.6.0 or later.
 * *   The LindormTable of your instance supports LindormSQL V3. The value of the EnableLsqlVersionV3 parameter in the response of the GetLindormInstance operation is true for Lindorm instances purchased after Oct 24, 2023, which indicates that LindormSQL is supported by these instances by default. If you want to enable LindormSQL for instances purchased before Oct 24, 2023, contact the on-duty technical support.
 * You can enable the MySQL compatibility feature for a Lindorm instance only when the instance meets the preceding requirements.
 *
 * @param request SwitchLSQLV3MySQLServiceRequest
 * @return SwitchLSQLV3MySQLServiceResponse
 */
SwitchLSQLV3MySQLServiceResponse Client::switchLSQLV3MySQLService(const SwitchLSQLV3MySQLServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return switchLSQLV3MySQLServiceWithOptions(request, runtime);
}

/**
 * @summary Associates tags with a single or multiple Lindorm instances.
 *
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TagResources"},
    {"version" , "2020-06-15"},
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
 * @summary Associates tags with a single or multiple Lindorm instances.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Removes tags from a Lindorm instance.
 *
 * @description If a tag is not added to any Lindorm instance, it is deleted.
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

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasTagKey()) {
    query["TagKey"] = request.getTagKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UntagResources"},
    {"version" , "2020-06-15"},
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
 * @summary Removes tags from a Lindorm instance.
 *
 * @description If a tag is not added to any Lindorm instance, it is deleted.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @summary Configures an IP address whitelist for a Lindorm instance.
 *
 * @param request UpdateInstanceIpWhiteListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateInstanceIpWhiteListResponse
 */
UpdateInstanceIpWhiteListResponse Client::updateInstanceIpWhiteListWithOptions(const UpdateInstanceIpWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDelete()) {
    query["Delete"] = request.getDelete();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityIpList()) {
    query["SecurityIpList"] = request.getSecurityIpList();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateInstanceIpWhiteList"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateInstanceIpWhiteListResponse>();
}

/**
 * @summary Configures an IP address whitelist for a Lindorm instance.
 *
 * @param request UpdateInstanceIpWhiteListRequest
 * @return UpdateInstanceIpWhiteListResponse
 */
UpdateInstanceIpWhiteListResponse Client::updateInstanceIpWhiteList(const UpdateInstanceIpWhiteListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateInstanceIpWhiteListWithOptions(request, runtime);
}

/**
 * @param request UpdateInstanceSecurityGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateInstanceSecurityGroupsResponse
 */
UpdateInstanceSecurityGroupsResponse Client::updateInstanceSecurityGroupsWithOptions(const UpdateInstanceSecurityGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityGroups()) {
    query["SecurityGroups"] = request.getSecurityGroups();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateInstanceSecurityGroups"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateInstanceSecurityGroupsResponse>();
}

/**
 * @param request UpdateInstanceSecurityGroupsRequest
 * @return UpdateInstanceSecurityGroupsResponse
 */
UpdateInstanceSecurityGroupsResponse Client::updateInstanceSecurityGroups(const UpdateInstanceSecurityGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateInstanceSecurityGroupsWithOptions(request, runtime);
}

/**
 * @param request UpdateLdpsComputeGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateLdpsComputeGroupResponse
 */
UpdateLdpsComputeGroupResponse Client::updateLdpsComputeGroupWithOptions(const UpdateLdpsComputeGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProperties()) {
    query["Properties"] = request.getProperties();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateLdpsComputeGroup"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateLdpsComputeGroupResponse>();
}

/**
 * @param request UpdateLdpsComputeGroupRequest
 * @return UpdateLdpsComputeGroupResponse
 */
UpdateLdpsComputeGroupResponse Client::updateLdpsComputeGroup(const UpdateLdpsComputeGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateLdpsComputeGroupWithOptions(request, runtime);
}

/**
 * @summary 更新实例名称或删除保护
 *
 * @param request UpdateLindormInstanceAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateLindormInstanceAttributeResponse
 */
UpdateLindormInstanceAttributeResponse Client::updateLindormInstanceAttributeWithOptions(const UpdateLindormInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeletionProtection()) {
    query["DeletionProtection"] = request.getDeletionProtection();
  }

  if (!!request.hasInstanceAlias()) {
    query["InstanceAlias"] = request.getInstanceAlias();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateLindormInstanceAttribute"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateLindormInstanceAttributeResponse>();
}

/**
 * @summary 更新实例名称或删除保护
 *
 * @param request UpdateLindormInstanceAttributeRequest
 * @return UpdateLindormInstanceAttributeResponse
 */
UpdateLindormInstanceAttributeResponse Client::updateLindormInstanceAttribute(const UpdateLindormInstanceAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateLindormInstanceAttributeWithOptions(request, runtime);
}

/**
 * @summary 更新LindormV2Instance
 *
 * @param request UpdateLindormV2InstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateLindormV2InstanceResponse
 */
UpdateLindormV2InstanceResponse Client::updateLindormV2InstanceWithOptions(const UpdateLindormV2InstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCapacityStorageSize()) {
    query["CapacityStorageSize"] = request.getCapacityStorageSize();
  }

  if (!!request.hasCloudStorageSize()) {
    query["CloudStorageSize"] = request.getCloudStorageSize();
  }

  if (!!request.hasCloudStorageType()) {
    query["CloudStorageType"] = request.getCloudStorageType();
  }

  if (!!request.hasEnableCapacityStorage()) {
    query["EnableCapacityStorage"] = request.getEnableCapacityStorage();
  }

  if (!!request.hasEngineList()) {
    query["EngineList"] = request.getEngineList();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateLindormV2Instance"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateLindormV2InstanceResponse>();
}

/**
 * @summary 更新LindormV2Instance
 *
 * @param request UpdateLindormV2InstanceRequest
 * @return UpdateLindormV2InstanceResponse
 */
UpdateLindormV2InstanceResponse Client::updateLindormV2Instance(const UpdateLindormV2InstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateLindormV2InstanceWithOptions(request, runtime);
}

/**
 * @param request UpdateLindormV2InstanceParameterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateLindormV2InstanceParameterResponse
 */
UpdateLindormV2InstanceParameterResponse Client::updateLindormV2InstanceParameterWithOptions(const UpdateLindormV2InstanceParameterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasParameterKey()) {
    query["ParameterKey"] = request.getParameterKey();
  }

  if (!!request.hasParameterValue()) {
    query["ParameterValue"] = request.getParameterValue();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasUpdateType()) {
    query["UpdateType"] = request.getUpdateType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateLindormV2InstanceParameter"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateLindormV2InstanceParameterResponse>();
}

/**
 * @param request UpdateLindormV2InstanceParameterRequest
 * @return UpdateLindormV2InstanceParameterResponse
 */
UpdateLindormV2InstanceParameterResponse Client::updateLindormV2InstanceParameter(const UpdateLindormV2InstanceParameterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateLindormV2InstanceParameterWithOptions(request, runtime);
}

/**
 * @summary 修改Lindorm新版实例白名单分组列表
 *
 * @param request UpdateLindormV2WhiteIpListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateLindormV2WhiteIpListResponse
 */
UpdateLindormV2WhiteIpListResponse Client::updateLindormV2WhiteIpListWithOptions(const UpdateLindormV2WhiteIpListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasWhiteIpGroupList()) {
    query["WhiteIpGroupList"] = request.getWhiteIpGroupList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateLindormV2WhiteIpList"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateLindormV2WhiteIpListResponse>();
}

/**
 * @summary 修改Lindorm新版实例白名单分组列表
 *
 * @param request UpdateLindormV2WhiteIpListRequest
 * @return UpdateLindormV2WhiteIpListResponse
 */
UpdateLindormV2WhiteIpListResponse Client::updateLindormV2WhiteIpList(const UpdateLindormV2WhiteIpListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateLindormV2WhiteIpListWithOptions(request, runtime);
}

/**
 * @summary Upgrades, scales up, or enable cold storage for a Lindorm instance.
 *
 * @description For more information about how to select the storage type and engine type when you create a Lindorm instance, see [Select engine typpes](https://help.aliyun.com/document_detail/181971.html) and [Select storage types](https://help.aliyun.com/document_detail/174643.html).
 *
 * @param request UpgradeLindormInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeLindormInstanceResponse
 */
UpgradeLindormInstanceResponse Client::upgradeLindormInstanceWithOptions(const UpgradeLindormInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterStorage()) {
    query["ClusterStorage"] = request.getClusterStorage();
  }

  if (!!request.hasColdStorage()) {
    query["ColdStorage"] = request.getColdStorage();
  }

  if (!!request.hasCoreSingleStorage()) {
    query["CoreSingleStorage"] = request.getCoreSingleStorage();
  }

  if (!!request.hasFilestoreNum()) {
    query["FilestoreNum"] = request.getFilestoreNum();
  }

  if (!!request.hasFilestoreSpec()) {
    query["FilestoreSpec"] = request.getFilestoreSpec();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLindormNum()) {
    query["LindormNum"] = request.getLindormNum();
  }

  if (!!request.hasLindormSpec()) {
    query["LindormSpec"] = request.getLindormSpec();
  }

  if (!!request.hasLogNum()) {
    query["LogNum"] = request.getLogNum();
  }

  if (!!request.hasLogSingleStorage()) {
    query["LogSingleStorage"] = request.getLogSingleStorage();
  }

  if (!!request.hasLogSpec()) {
    query["LogSpec"] = request.getLogSpec();
  }

  if (!!request.hasLtsCoreNum()) {
    query["LtsCoreNum"] = request.getLtsCoreNum();
  }

  if (!!request.hasLtsCoreSpec()) {
    query["LtsCoreSpec"] = request.getLtsCoreSpec();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasSolrNum()) {
    query["SolrNum"] = request.getSolrNum();
  }

  if (!!request.hasSolrSpec()) {
    query["SolrSpec"] = request.getSolrSpec();
  }

  if (!!request.hasStreamNum()) {
    query["StreamNum"] = request.getStreamNum();
  }

  if (!!request.hasStreamSpec()) {
    query["StreamSpec"] = request.getStreamSpec();
  }

  if (!!request.hasTsdbNum()) {
    query["TsdbNum"] = request.getTsdbNum();
  }

  if (!!request.hasTsdbSpec()) {
    query["TsdbSpec"] = request.getTsdbSpec();
  }

  if (!!request.hasUpgradeType()) {
    query["UpgradeType"] = request.getUpgradeType();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradeLindormInstance"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradeLindormInstanceResponse>();
}

/**
 * @summary Upgrades, scales up, or enable cold storage for a Lindorm instance.
 *
 * @description For more information about how to select the storage type and engine type when you create a Lindorm instance, see [Select engine typpes](https://help.aliyun.com/document_detail/181971.html) and [Select storage types](https://help.aliyun.com/document_detail/174643.html).
 *
 * @param request UpgradeLindormInstanceRequest
 * @return UpgradeLindormInstanceResponse
 */
UpgradeLindormInstanceResponse Client::upgradeLindormInstance(const UpgradeLindormInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradeLindormInstanceWithOptions(request, runtime);
}

/**
 * @param request UpgradeLindormV2StreamEngineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeLindormV2StreamEngineResponse
 */
UpgradeLindormV2StreamEngineResponse Client::upgradeLindormV2StreamEngineWithOptions(const UpgradeLindormV2StreamEngineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomConfig()) {
    query["CustomConfig"] = request.getCustomConfig();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasQuantity()) {
    query["Quantity"] = request.getQuantity();
  }

  if (!!request.hasResourceGroupName()) {
    query["ResourceGroupName"] = request.getResourceGroupName();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasSpec()) {
    query["Spec"] = request.getSpec();
  }

  if (!!request.hasSpecId()) {
    query["SpecId"] = request.getSpecId();
  }

  if (!!request.hasUpgradeType()) {
    query["UpgradeType"] = request.getUpgradeType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradeLindormV2StreamEngine"},
    {"version" , "2020-06-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradeLindormV2StreamEngineResponse>();
}

/**
 * @param request UpgradeLindormV2StreamEngineRequest
 * @return UpgradeLindormV2StreamEngineResponse
 */
UpgradeLindormV2StreamEngineResponse Client::upgradeLindormV2StreamEngine(const UpgradeLindormV2StreamEngineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradeLindormV2StreamEngineWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Hitsdb20200615