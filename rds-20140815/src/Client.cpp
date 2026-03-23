#include <darabonba/Core.hpp>
#include <alibabacloud/Rds20140815.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Rds20140815::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Rds20140815
{

AlibabaCloud::Rds20140815::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-qingdao" , "rds.aliyuncs.com"},
    {"cn-beijing" , "rds.aliyuncs.com"},
    {"cn-hangzhou" , "rds.aliyuncs.com"},
    {"cn-shanghai" , "rds.aliyuncs.com"},
    {"cn-shenzhen" , "rds.aliyuncs.com"},
    {"cn-heyuan" , "rds.aliyuncs.com"},
    {"cn-hongkong" , "rds.aliyuncs.com"},
    {"ap-southeast-1" , "rds.aliyuncs.com"},
    {"us-west-1" , "rds.aliyuncs.com"},
    {"us-east-1" , "rds.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "rds.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "rds.aliyuncs.com"},
    {"cn-north-2-gov-1" , "rds.aliyuncs.com"},
    {"ap-northeast-2-pop" , "rds.aliyuncs.com"},
    {"cn-beijing-finance-1" , "rds.aliyuncs.com"},
    {"cn-beijing-finance-pop" , "rds.aliyuncs.com"},
    {"cn-beijing-gov-1" , "rds.aliyuncs.com"},
    {"cn-beijing-nu16-b01" , "rds.aliyuncs.com"},
    {"cn-edge-1" , "rds.aliyuncs.com"},
    {"cn-fujian" , "rds.aliyuncs.com"},
    {"cn-haidian-cm12-c01" , "rds.aliyuncs.com"},
    {"cn-hangzhou-bj-b01" , "rds.aliyuncs.com"},
    {"cn-hangzhou-finance" , "rds-vpc.cn-hangzhou-finance.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1" , "rds.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1" , "rds.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2" , "rds.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3" , "rds.aliyuncs.com"},
    {"cn-hangzhou-test-306" , "rds.aliyuncs.com"},
    {"cn-hongkong-finance-pop" , "rds.aliyuncs.com"},
    {"cn-qingdao-nebula" , "rds.aliyuncs.com"},
    {"cn-shanghai-et15-b01" , "rds.aliyuncs.com"},
    {"cn-shanghai-et2-b01" , "rds.aliyuncs.com"},
    {"cn-shanghai-inner" , "rds.aliyuncs.com"},
    {"cn-shanghai-internal-test-1" , "rds.aliyuncs.com"},
    {"cn-shenzhen-inner" , "rds.aliyuncs.com"},
    {"cn-shenzhen-st4-d01" , "rds.aliyuncs.com"},
    {"cn-shenzhen-su18-b01" , "rds.aliyuncs.com"},
    {"cn-wuhan" , "rds.aliyuncs.com"},
    {"cn-yushanfang" , "rds.aliyuncs.com"},
    {"cn-zhangbei" , "rds.aliyuncs.com"},
    {"cn-zhangbei-na61-b01" , "rds.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01" , "rds.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1" , "rds.aliyuncs.com"},
    {"eu-west-1-oxs" , "rds.aliyuncs.com"},
    {"rus-west-1-pop" , "rds.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("rds", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 接受并授权执行系统事件操作
 *
 * @param request AcceptRCInquiredSystemEventRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AcceptRCInquiredSystemEventResponse
 */
AcceptRCInquiredSystemEventResponse Client::acceptRCInquiredSystemEventWithOptions(const AcceptRCInquiredSystemEventRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEventId()) {
    query["EventId"] = request.getEventId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AcceptRCInquiredSystemEvent"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AcceptRCInquiredSystemEventResponse>();
}

/**
 * @summary 接受并授权执行系统事件操作
 *
 * @param request AcceptRCInquiredSystemEventRequest
 * @return AcceptRCInquiredSystemEventResponse
 */
AcceptRCInquiredSystemEventResponse Client::acceptRCInquiredSystemEvent(const AcceptRCInquiredSystemEventRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return acceptRCInquiredSystemEventWithOptions(request, runtime);
}

/**
 * @summary 激活迁移上云目标端实例
 *
 * @param request ActivateMigrationTargetInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ActivateMigrationTargetInstanceResponse
 */
ActivateMigrationTargetInstanceResponse Client::activateMigrationTargetInstanceWithOptions(const ActivateMigrationTargetInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasForceSwitch()) {
    query["ForceSwitch"] = request.getForceSwitch();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSwitchTime()) {
    query["SwitchTime"] = request.getSwitchTime();
  }

  if (!!request.hasSwitchTimeMode()) {
    query["SwitchTimeMode"] = request.getSwitchTimeMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ActivateMigrationTargetInstance"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ActivateMigrationTargetInstanceResponse>();
}

/**
 * @summary 激活迁移上云目标端实例
 *
 * @param request ActivateMigrationTargetInstanceRequest
 * @return ActivateMigrationTargetInstanceResponse
 */
ActivateMigrationTargetInstanceResponse Client::activateMigrationTargetInstance(const ActivateMigrationTargetInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return activateMigrationTargetInstanceWithOptions(request, runtime);
}

/**
 * @summary 在RDS资源上添加标签信息
 *
 * @param request AddTagsToResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddTagsToResourceResponse
 */
AddTagsToResourceResponse Client::addTagsToResourceWithOptions(const AddTagsToResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  if (!!request.hasProxyId()) {
    query["proxyId"] = request.getProxyId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddTagsToResource"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddTagsToResourceResponse>();
}

/**
 * @summary 在RDS资源上添加标签信息
 *
 * @param request AddTagsToResourceRequest
 * @return AddTagsToResourceResponse
 */
AddTagsToResourceResponse Client::addTagsToResource(const AddTagsToResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addTagsToResourceWithOptions(request, runtime);
}

/**
 * @summary 为RDS实例分配公网链接地址
 *
 * @param request AllocateInstancePublicConnectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AllocateInstancePublicConnectionResponse
 */
AllocateInstancePublicConnectionResponse Client::allocateInstancePublicConnectionWithOptions(const AllocateInstancePublicConnectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBabelfishPort()) {
    query["BabelfishPort"] = request.getBabelfishPort();
  }

  if (!!request.hasConnectionStringPrefix()) {
    query["ConnectionStringPrefix"] = request.getConnectionStringPrefix();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasGeneralGroupName()) {
    query["GeneralGroupName"] = request.getGeneralGroupName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPGBouncerPort()) {
    query["PGBouncerPort"] = request.getPGBouncerPort();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AllocateInstancePublicConnection"},
    {"version" , "2014-08-15"},
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
 * @summary 为RDS实例分配公网链接地址
 *
 * @param request AllocateInstancePublicConnectionRequest
 * @return AllocateInstancePublicConnectionResponse
 */
AllocateInstancePublicConnectionResponse Client::allocateInstancePublicConnection(const AllocateInstancePublicConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return allocateInstancePublicConnectionWithOptions(request, runtime);
}

/**
 * @summary 申请读写分离链接地址
 *
 * @param request AllocateReadWriteSplittingConnectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AllocateReadWriteSplittingConnectionResponse
 */
AllocateReadWriteSplittingConnectionResponse Client::allocateReadWriteSplittingConnectionWithOptions(const AllocateReadWriteSplittingConnectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectionStringPrefix()) {
    query["ConnectionStringPrefix"] = request.getConnectionStringPrefix();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDistributionType()) {
    query["DistributionType"] = request.getDistributionType();
  }

  if (!!request.hasMaxDelayTime()) {
    query["MaxDelayTime"] = request.getMaxDelayTime();
  }

  if (!!request.hasNetType()) {
    query["NetType"] = request.getNetType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasWeight()) {
    query["Weight"] = request.getWeight();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AllocateReadWriteSplittingConnection"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AllocateReadWriteSplittingConnectionResponse>();
}

/**
 * @summary 申请读写分离链接地址
 *
 * @param request AllocateReadWriteSplittingConnectionRequest
 * @return AllocateReadWriteSplittingConnectionResponse
 */
AllocateReadWriteSplittingConnectionResponse Client::allocateReadWriteSplittingConnection(const AllocateReadWriteSplittingConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return allocateReadWriteSplittingConnectionWithOptions(request, runtime);
}

/**
 * @summary 绑定弹性网卡到RDS Custom实例
 *
 * @param request AssociateEipAddressWithRCInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AssociateEipAddressWithRCInstanceResponse
 */
AssociateEipAddressWithRCInstanceResponse Client::associateEipAddressWithRCInstanceWithOptions(const AssociateEipAddressWithRCInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAllocationId()) {
    query["AllocationId"] = request.getAllocationId();
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
    {"action" , "AssociateEipAddressWithRCInstance"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AssociateEipAddressWithRCInstanceResponse>();
}

/**
 * @summary 绑定弹性网卡到RDS Custom实例
 *
 * @param request AssociateEipAddressWithRCInstanceRequest
 * @return AssociateEipAddressWithRCInstanceResponse
 */
AssociateEipAddressWithRCInstanceResponse Client::associateEipAddressWithRCInstance(const AssociateEipAddressWithRCInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return associateEipAddressWithRCInstanceWithOptions(request, runtime);
}

/**
 * @summary Invoke the AttachRCDisk API to mount a pay-as-you-go data disk or a system disk to an RDS Custom instance. The instance and the disk must be in the same zone.
 *
 * @description When invoking this API, note the following:
 * - The disk status must be Available (ready to mount).
 * - When mounting a data disk:
 *   - The target RDS Custom instance must be in the running or stopped state.
 *   - If the disk was purchased separately, its metering method must be pay-as-you-go.
 *   - When a system disk previously detached from an RDS Custom instance is mounted as a data disk, there is no restriction on its metering method.
 *   - An elastic ephemeral disk, once unmounted, can only be remounted to its original instance.
 * - When mounting a system disk:
 *   - The target RDS Custom instance must be the source instance from which the system disk was originally unmounted.
 *   - The target RDS Custom instance must be in the stopped state.
 *   - You must configure logon credentials for the instance.
 *   - Elastic ephemeral disks cannot be mounted as system disks.
 *
 * @param request AttachRCDiskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachRCDiskResponse
 */
AttachRCDiskResponse Client::attachRCDiskWithOptions(const AttachRCDiskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeleteWithInstance()) {
    query["DeleteWithInstance"] = request.getDeleteWithInstance();
  }

  if (!!request.hasDiskId()) {
    query["DiskId"] = request.getDiskId();
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
    {"action" , "AttachRCDisk"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachRCDiskResponse>();
}

/**
 * @summary Invoke the AttachRCDisk API to mount a pay-as-you-go data disk or a system disk to an RDS Custom instance. The instance and the disk must be in the same zone.
 *
 * @description When invoking this API, note the following:
 * - The disk status must be Available (ready to mount).
 * - When mounting a data disk:
 *   - The target RDS Custom instance must be in the running or stopped state.
 *   - If the disk was purchased separately, its metering method must be pay-as-you-go.
 *   - When a system disk previously detached from an RDS Custom instance is mounted as a data disk, there is no restriction on its metering method.
 *   - An elastic ephemeral disk, once unmounted, can only be remounted to its original instance.
 * - When mounting a system disk:
 *   - The target RDS Custom instance must be the source instance from which the system disk was originally unmounted.
 *   - The target RDS Custom instance must be in the stopped state.
 *   - You must configure logon credentials for the instance.
 *   - Elastic ephemeral disks cannot be mounted as system disks.
 *
 * @param request AttachRCDiskRequest
 * @return AttachRCDiskResponse
 */
AttachRCDiskResponse Client::attachRCDisk(const AttachRCDiskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachRCDiskWithOptions(request, runtime);
}

/**
 * @summary 添加实例到集群
 *
 * @param tmpReq AttachRCInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachRCInstancesResponse
 */
AttachRCInstancesResponse Client::attachRCInstancesWithOptions(const AttachRCInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AttachRCInstancesShrinkRequest request = AttachRCInstancesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInstanceIds()) {
    request.setInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInstanceIds(), "InstanceIds", "simple"));
  }

  json query = {};
  if (!!request.hasInstanceIdsShrink()) {
    query["InstanceIds"] = request.getInstanceIdsShrink();
  }

  if (!!request.hasKeyPair()) {
    query["KeyPair"] = request.getKeyPair();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachRCInstances"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachRCInstancesResponse>();
}

/**
 * @summary 添加实例到集群
 *
 * @param request AttachRCInstancesRequest
 * @return AttachRCInstancesResponse
 */
AttachRCInstancesResponse Client::attachRCInstances(const AttachRCInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachRCInstancesWithOptions(request, runtime);
}

/**
 * @summary 白名单模板关联实例
 *
 * @param request AttachWhitelistTemplateToInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachWhitelistTemplateToInstanceResponse
 */
AttachWhitelistTemplateToInstanceResponse Client::attachWhitelistTemplateToInstanceWithOptions(const AttachWhitelistTemplateToInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInsName()) {
    query["InsName"] = request.getInsName();
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

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachWhitelistTemplateToInstance"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachWhitelistTemplateToInstanceResponse>();
}

/**
 * @summary 白名单模板关联实例
 *
 * @param request AttachWhitelistTemplateToInstanceRequest
 * @return AttachWhitelistTemplateToInstanceResponse
 */
AttachWhitelistTemplateToInstanceResponse Client::attachWhitelistTemplateToInstance(const AttachWhitelistTemplateToInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachWhitelistTemplateToInstanceWithOptions(request, runtime);
}

/**
 * @summary 检查备份加密信息
 *
 * @param request AuthorizeBackupEncryptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AuthorizeBackupEncryptionResponse
 */
AuthorizeBackupEncryptionResponse Client::authorizeBackupEncryptionWithOptions(const AuthorizeBackupEncryptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "AuthorizeBackupEncryption"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AuthorizeBackupEncryptionResponse>();
}

/**
 * @summary 检查备份加密信息
 *
 * @param request AuthorizeBackupEncryptionRequest
 * @return AuthorizeBackupEncryptionResponse
 */
AuthorizeBackupEncryptionResponse Client::authorizeBackupEncryption(const AuthorizeBackupEncryptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return authorizeBackupEncryptionWithOptions(request, runtime);
}

/**
 * @summary Adds rules to the specified security group.
 *
 * @param tmpReq AuthorizeRCSecurityGroupPermissionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AuthorizeRCSecurityGroupPermissionResponse
 */
AuthorizeRCSecurityGroupPermissionResponse Client::authorizeRCSecurityGroupPermissionWithOptions(const AuthorizeRCSecurityGroupPermissionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AuthorizeRCSecurityGroupPermissionShrinkRequest request = AuthorizeRCSecurityGroupPermissionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSecurityGroupPermissions()) {
    request.setSecurityGroupPermissionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSecurityGroupPermissions(), "SecurityGroupPermissions", "json"));
  }

  json query = {};
  if (!!request.hasDirection()) {
    query["Direction"] = request.getDirection();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSecurityGroupId()) {
    query["SecurityGroupId"] = request.getSecurityGroupId();
  }

  if (!!request.hasSecurityGroupPermissionsShrink()) {
    query["SecurityGroupPermissions"] = request.getSecurityGroupPermissionsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AuthorizeRCSecurityGroupPermission"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AuthorizeRCSecurityGroupPermissionResponse>();
}

/**
 * @summary Adds rules to the specified security group.
 *
 * @param request AuthorizeRCSecurityGroupPermissionRequest
 * @return AuthorizeRCSecurityGroupPermissionResponse
 */
AuthorizeRCSecurityGroupPermissionResponse Client::authorizeRCSecurityGroupPermission(const AuthorizeRCSecurityGroupPermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return authorizeRCSecurityGroupPermissionWithOptions(request, runtime);
}

/**
 * @summary 查询共享代理实例下各节点的读写权重值
 *
 * @param request CalculateDBInstanceWeightRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CalculateDBInstanceWeightResponse
 */
CalculateDBInstanceWeightResponse Client::calculateDBInstanceWeightWithOptions(const CalculateDBInstanceWeightRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CalculateDBInstanceWeight"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CalculateDBInstanceWeightResponse>();
}

/**
 * @summary 查询共享代理实例下各节点的读写权重值
 *
 * @param request CalculateDBInstanceWeightRequest
 * @return CalculateDBInstanceWeightResponse
 */
CalculateDBInstanceWeightResponse Client::calculateDBInstanceWeight(const CalculateDBInstanceWeightRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return calculateDBInstanceWeightWithOptions(request, runtime);
}

/**
 * @summary 取消主动运维任务
 *
 * @param request CancelActiveOperationTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelActiveOperationTasksResponse
 */
CancelActiveOperationTasksResponse Client::cancelActiveOperationTasksWithOptions(const CancelActiveOperationTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIds()) {
    query["Ids"] = request.getIds();
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
    {"action" , "CancelActiveOperationTasks"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelActiveOperationTasksResponse>();
}

/**
 * @summary 取消主动运维任务
 *
 * @param request CancelActiveOperationTasksRequest
 * @return CancelActiveOperationTasksResponse
 */
CancelActiveOperationTasksResponse Client::cancelActiveOperationTasks(const CancelActiveOperationTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelActiveOperationTasksWithOptions(request, runtime);
}

/**
 * @summary 检查可用的账号名称
 *
 * @param request CheckAccountNameAvailableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckAccountNameAvailableResponse
 */
CheckAccountNameAvailableResponse Client::checkAccountNameAvailableWithOptions(const CheckAccountNameAvailableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.getAccountName();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckAccountNameAvailable"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckAccountNameAvailableResponse>();
}

/**
 * @summary 检查可用的账号名称
 *
 * @param request CheckAccountNameAvailableRequest
 * @return CheckAccountNameAvailableResponse
 */
CheckAccountNameAvailableResponse Client::checkAccountNameAvailable(const CheckAccountNameAvailableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkAccountNameAvailableWithOptions(request, runtime);
}

/**
 * @summary 检查备份加密授权
 *
 * @param request CheckBackupEncryptionAuthorizedRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckBackupEncryptionAuthorizedResponse
 */
CheckBackupEncryptionAuthorizedResponse Client::checkBackupEncryptionAuthorizedWithOptions(const CheckBackupEncryptionAuthorizedRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "CheckBackupEncryptionAuthorized"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckBackupEncryptionAuthorizedResponse>();
}

/**
 * @summary 检查备份加密授权
 *
 * @param request CheckBackupEncryptionAuthorizedRequest
 * @return CheckBackupEncryptionAuthorizedResponse
 */
CheckBackupEncryptionAuthorizedResponse Client::checkBackupEncryptionAuthorized(const CheckBackupEncryptionAuthorizedRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkBackupEncryptionAuthorizedWithOptions(request, runtime);
}

/**
 * @summary 检查云资源授权
 *
 * @param request CheckCloudResourceAuthorizedRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckCloudResourceAuthorizedResponse
 */
CheckCloudResourceAuthorizedResponse Client::checkCloudResourceAuthorizedWithOptions(const CheckCloudResourceAuthorizedRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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

  if (!!request.hasTargetRegionId()) {
    query["TargetRegionId"] = request.getTargetRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckCloudResourceAuthorized"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckCloudResourceAuthorizedResponse>();
}

/**
 * @summary 检查云资源授权
 *
 * @param request CheckCloudResourceAuthorizedRequest
 * @return CheckCloudResourceAuthorizedResponse
 */
CheckCloudResourceAuthorizedResponse Client::checkCloudResourceAuthorized(const CheckCloudResourceAuthorizedRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkCloudResourceAuthorizedWithOptions(request, runtime);
}

/**
 * @summary 预检查某RDS实例是否可以用跨地域备份集进行跨地域恢复
 *
 * @param request CheckCreateDdrDBInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckCreateDdrDBInstanceResponse
 */
CheckCreateDdrDBInstanceResponse Client::checkCreateDdrDBInstanceWithOptions(const CheckCreateDdrDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupSetId()) {
    query["BackupSetId"] = request.getBackupSetId();
  }

  if (!!request.hasDBInstanceClass()) {
    query["DBInstanceClass"] = request.getDBInstanceClass();
  }

  if (!!request.hasDBInstanceStorage()) {
    query["DBInstanceStorage"] = request.getDBInstanceStorage();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.getEngine();
  }

  if (!!request.hasEngineVersion()) {
    query["EngineVersion"] = request.getEngineVersion();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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

  if (!!request.hasRestoreTime()) {
    query["RestoreTime"] = request.getRestoreTime();
  }

  if (!!request.hasRestoreType()) {
    query["RestoreType"] = request.getRestoreType();
  }

  if (!!request.hasSourceDBInstanceName()) {
    query["SourceDBInstanceName"] = request.getSourceDBInstanceName();
  }

  if (!!request.hasSourceRegion()) {
    query["SourceRegion"] = request.getSourceRegion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckCreateDdrDBInstance"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckCreateDdrDBInstanceResponse>();
}

/**
 * @summary 预检查某RDS实例是否可以用跨地域备份集进行跨地域恢复
 *
 * @param request CheckCreateDdrDBInstanceRequest
 * @return CheckCreateDdrDBInstanceResponse
 */
CheckCreateDdrDBInstanceResponse Client::checkCreateDdrDBInstance(const CheckCreateDdrDBInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkCreateDdrDBInstanceWithOptions(request, runtime);
}

/**
 * @summary 检查数据库名是否可用
 *
 * @param request CheckDBNameAvailableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckDBNameAvailableResponse
 */
CheckDBNameAvailableResponse Client::checkDBNameAvailableWithOptions(const CheckDBNameAvailableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.getDBName();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckDBNameAvailable"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckDBNameAvailableResponse>();
}

/**
 * @summary 检查数据库名是否可用
 *
 * @param request CheckDBNameAvailableRequest
 * @return CheckDBNameAvailableResponse
 */
CheckDBNameAvailableResponse Client::checkDBNameAvailable(const CheckDBNameAvailableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkDBNameAvailableWithOptions(request, runtime);
}

/**
 * @summary 检查实例是否存在
 *
 * @param request CheckInstanceExistRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckInstanceExistResponse
 */
CheckInstanceExistResponse Client::checkInstanceExistWithOptions(const CheckInstanceExistRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckInstanceExist"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckInstanceExistResponse>();
}

/**
 * @summary 检查实例是否存在
 *
 * @param request CheckInstanceExistRequest
 * @return CheckInstanceExistResponse
 */
CheckInstanceExistResponse Client::checkInstanceExist(const CheckInstanceExistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkInstanceExistWithOptions(request, runtime);
}

/**
 * @summary 查看是否已创建服务关联角色（SLR）和是否开租
 *
 * @param request CheckRdsCustomInitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckRdsCustomInitResponse
 */
CheckRdsCustomInitResponse Client::checkRdsCustomInitWithOptions(const CheckRdsCustomInitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasServiceLinkedRole()) {
    query["ServiceLinkedRole"] = request.getServiceLinkedRole();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckRdsCustomInit"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckRdsCustomInitResponse>();
}

/**
 * @summary 查看是否已创建服务关联角色（SLR）和是否开租
 *
 * @param request CheckRdsCustomInitRequest
 * @return CheckRdsCustomInitResponse
 */
CheckRdsCustomInitResponse Client::checkRdsCustomInit(const CheckRdsCustomInitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkRdsCustomInitWithOptions(request, runtime);
}

/**
 * @summary 检查地域是否支持备份加密
 *
 * @param request CheckRegionSupportBackupEncryptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckRegionSupportBackupEncryptionResponse
 */
CheckRegionSupportBackupEncryptionResponse Client::checkRegionSupportBackupEncryptionWithOptions(const CheckRegionSupportBackupEncryptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceID()) {
    query["DBInstanceID"] = request.getDBInstanceID();
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
    {"action" , "CheckRegionSupportBackupEncryption"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckRegionSupportBackupEncryptionResponse>();
}

/**
 * @summary 检查地域是否支持备份加密
 *
 * @param request CheckRegionSupportBackupEncryptionRequest
 * @return CheckRegionSupportBackupEncryptionResponse
 */
CheckRegionSupportBackupEncryptionResponse Client::checkRegionSupportBackupEncryption(const CheckRegionSupportBackupEncryptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkRegionSupportBackupEncryptionWithOptions(request, runtime);
}

/**
 * @summary 查看是否已创建服务关联角色（SLR）
 *
 * @param request CheckServiceLinkedRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckServiceLinkedRoleResponse
 */
CheckServiceLinkedRoleResponse Client::checkServiceLinkedRoleWithOptions(const CheckServiceLinkedRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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

  if (!!request.hasServiceLinkedRole()) {
    query["ServiceLinkedRole"] = request.getServiceLinkedRole();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckServiceLinkedRole"},
    {"version" , "2014-08-15"},
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
 * @summary 查看是否已创建服务关联角色（SLR）
 *
 * @param request CheckServiceLinkedRoleRequest
 * @return CheckServiceLinkedRoleResponse
 */
CheckServiceLinkedRoleResponse Client::checkServiceLinkedRole(const CheckServiceLinkedRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkServiceLinkedRoleWithOptions(request, runtime);
}

/**
 * @summary This API is used to restore historical data to a new instance (referred to as a clone instance).
 *
 * @description ### Supported Engines
 * - RDS MySQL
 * - RDS PostgreSQL
 * - RDS SQL Server
 * - RDS MariaDB
 * ### Related Function Documentation
 * >Notice: Before using this API, carefully read the function documentation to fully understand the prerequisites for using the API and the impact of its usage before performing any operation.
 * - [RDS MySQL Data Restoration](https://help.aliyun.com/document_detail/96147.html)
 * - [RDS PostgreSQL Data Restoration](https://help.aliyun.com/document_detail/96776.html)
 * - [RDS SQL Server Data Restoration](https://help.aliyun.com/document_detail/95722.html)
 * - [RDS MariaDB Data Restoration](https://help.aliyun.com/document_detail/97151.html)
 *
 * @param tmpReq CloneDBInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloneDBInstanceResponse
 */
CloneDBInstanceResponse Client::cloneDBInstanceWithOptions(const CloneDBInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CloneDBInstanceShrinkRequest request = CloneDBInstanceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasServerlessConfig()) {
    request.setServerlessConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getServerlessConfig(), "ServerlessConfig", "json"));
  }

  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasBackupId()) {
    query["BackupId"] = request.getBackupId();
  }

  if (!!request.hasBackupType()) {
    query["BackupType"] = request.getBackupType();
  }

  if (!!request.hasBpeEnabled()) {
    query["BpeEnabled"] = request.getBpeEnabled();
  }

  if (!!request.hasBurstingEnabled()) {
    query["BurstingEnabled"] = request.getBurstingEnabled();
  }

  if (!!request.hasCategory()) {
    query["Category"] = request.getCategory();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCustomExtraInfo()) {
    query["CustomExtraInfo"] = request.getCustomExtraInfo();
  }

  if (!!request.hasDBInstanceClass()) {
    query["DBInstanceClass"] = request.getDBInstanceClass();
  }

  if (!!request.hasDBInstanceDescription()) {
    query["DBInstanceDescription"] = request.getDBInstanceDescription();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBInstanceStorage()) {
    query["DBInstanceStorage"] = request.getDBInstanceStorage();
  }

  if (!!request.hasDBInstanceStorageType()) {
    query["DBInstanceStorageType"] = request.getDBInstanceStorageType();
  }

  if (!!request.hasDbNames()) {
    query["DbNames"] = request.getDbNames();
  }

  if (!!request.hasDedicatedHostGroupId()) {
    query["DedicatedHostGroupId"] = request.getDedicatedHostGroupId();
  }

  if (!!request.hasDeletionProtection()) {
    query["DeletionProtection"] = request.getDeletionProtection();
  }

  if (!!request.hasInstanceNetworkType()) {
    query["InstanceNetworkType"] = request.getInstanceNetworkType();
  }

  if (!!request.hasIoAccelerationEnabled()) {
    query["IoAccelerationEnabled"] = request.getIoAccelerationEnabled();
  }

  if (!!request.hasPayType()) {
    query["PayType"] = request.getPayType();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasPrivateIpAddress()) {
    query["PrivateIpAddress"] = request.getPrivateIpAddress();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRestoreTable()) {
    query["RestoreTable"] = request.getRestoreTable();
  }

  if (!!request.hasRestoreTime()) {
    query["RestoreTime"] = request.getRestoreTime();
  }

  if (!!request.hasServerlessConfigShrink()) {
    query["ServerlessConfig"] = request.getServerlessConfigShrink();
  }

  if (!!request.hasTableMeta()) {
    query["TableMeta"] = request.getTableMeta();
  }

  if (!!request.hasUsedTime()) {
    query["UsedTime"] = request.getUsedTime();
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

  if (!!request.hasZoneIdSlave1()) {
    query["ZoneIdSlave1"] = request.getZoneIdSlave1();
  }

  if (!!request.hasZoneIdSlave2()) {
    query["ZoneIdSlave2"] = request.getZoneIdSlave2();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloneDBInstance"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloneDBInstanceResponse>();
}

/**
 * @summary This API is used to restore historical data to a new instance (referred to as a clone instance).
 *
 * @description ### Supported Engines
 * - RDS MySQL
 * - RDS PostgreSQL
 * - RDS SQL Server
 * - RDS MariaDB
 * ### Related Function Documentation
 * >Notice: Before using this API, carefully read the function documentation to fully understand the prerequisites for using the API and the impact of its usage before performing any operation.
 * - [RDS MySQL Data Restoration](https://help.aliyun.com/document_detail/96147.html)
 * - [RDS PostgreSQL Data Restoration](https://help.aliyun.com/document_detail/96776.html)
 * - [RDS SQL Server Data Restoration](https://help.aliyun.com/document_detail/95722.html)
 * - [RDS MariaDB Data Restoration](https://help.aliyun.com/document_detail/97151.html)
 *
 * @param request CloneDBInstanceRequest
 * @return CloneDBInstanceResponse
 */
CloneDBInstanceResponse Client::cloneDBInstance(const CloneDBInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloneDBInstanceWithOptions(request, runtime);
}

/**
 * @summary 克隆参数组
 *
 * @param request CloneParameterGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloneParameterGroupResponse
 */
CloneParameterGroupResponse Client::cloneParameterGroupWithOptions(const CloneParameterGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasParameterGroupDesc()) {
    query["ParameterGroupDesc"] = request.getParameterGroupDesc();
  }

  if (!!request.hasParameterGroupId()) {
    query["ParameterGroupId"] = request.getParameterGroupId();
  }

  if (!!request.hasParameterGroupName()) {
    query["ParameterGroupName"] = request.getParameterGroupName();
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

  if (!!request.hasTargetRegionId()) {
    query["TargetRegionId"] = request.getTargetRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloneParameterGroup"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloneParameterGroupResponse>();
}

/**
 * @summary 克隆参数组
 *
 * @param request CloneParameterGroupRequest
 * @return CloneParameterGroupResponse
 */
CloneParameterGroupResponse Client::cloneParameterGroup(const CloneParameterGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloneParameterGroupWithOptions(request, runtime);
}

/**
 * @summary 通知消息确认
 *
 * @param tmpReq ConfirmNotifyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfirmNotifyResponse
 */
ConfirmNotifyResponse Client::confirmNotifyWithOptions(const ConfirmNotifyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ConfirmNotifyShrinkRequest request = ConfirmNotifyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNotifyIdList()) {
    request.setNotifyIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNotifyIdList(), "NotifyIdList", "json"));
  }

  json body = {};
  if (!!request.hasConfirmor()) {
    body["Confirmor"] = request.getConfirmor();
  }

  if (!!request.hasNotifyIdListShrink()) {
    body["NotifyIdList"] = request.getNotifyIdListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ConfirmNotify"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfirmNotifyResponse>();
}

/**
 * @summary 通知消息确认
 *
 * @param request ConfirmNotifyRequest
 * @return ConfirmNotifyResponse
 */
ConfirmNotifyResponse Client::confirmNotify(const ConfirmNotifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return confirmNotifyWithOptions(request, runtime);
}

/**
 * @summary 在实例间拷贝数据库
 *
 * @param request CopyDatabaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CopyDatabaseResponse
 */
CopyDatabaseResponse Client::copyDatabaseWithOptions(const CopyDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasDstDBName()) {
    query["DstDBName"] = request.getDstDBName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasReserveAccount()) {
    query["ReserveAccount"] = request.getReserveAccount();
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

  if (!!request.hasSrcDBName()) {
    query["SrcDBName"] = request.getSrcDBName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CopyDatabase"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CopyDatabaseResponse>();
}

/**
 * @summary 在实例间拷贝数据库
 *
 * @param request CopyDatabaseRequest
 * @return CopyDatabaseResponse
 */
CopyDatabaseResponse Client::copyDatabase(const CopyDatabaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return copyDatabaseWithOptions(request, runtime);
}

/**
 * @summary 在同一账号下不同实例间复制数据库
 *
 * @param request CopyDatabaseBetweenInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CopyDatabaseBetweenInstancesResponse
 */
CopyDatabaseBetweenInstancesResponse Client::copyDatabaseBetweenInstancesWithOptions(const CopyDatabaseBetweenInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupId()) {
    query["BackupId"] = request.getBackupId();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDbNames()) {
    query["DbNames"] = request.getDbNames();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRestoreTime()) {
    query["RestoreTime"] = request.getRestoreTime();
  }

  if (!!request.hasSyncUserPrivilege()) {
    query["SyncUserPrivilege"] = request.getSyncUserPrivilege();
  }

  if (!!request.hasTargetDBInstanceId()) {
    query["TargetDBInstanceId"] = request.getTargetDBInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CopyDatabaseBetweenInstances"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CopyDatabaseBetweenInstancesResponse>();
}

/**
 * @summary 在同一账号下不同实例间复制数据库
 *
 * @param request CopyDatabaseBetweenInstancesRequest
 * @return CopyDatabaseBetweenInstancesResponse
 */
CopyDatabaseBetweenInstancesResponse Client::copyDatabaseBetweenInstances(const CopyDatabaseBetweenInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return copyDatabaseBetweenInstancesWithOptions(request, runtime);
}

/**
 * @summary 在RDS实例中创建账号
 *
 * @param request CreateAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAccountResponse
 */
CreateAccountResponse Client::createAccountWithOptions(const CreateAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountDescription()) {
    query["AccountDescription"] = request.getAccountDescription();
  }

  if (!!request.hasAccountName()) {
    query["AccountName"] = request.getAccountName();
  }

  if (!!request.hasAccountPassword()) {
    query["AccountPassword"] = request.getAccountPassword();
  }

  if (!!request.hasAccountType()) {
    query["AccountType"] = request.getAccountType();
  }

  if (!!request.hasCheckPolicy()) {
    query["CheckPolicy"] = request.getCheckPolicy();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAccount"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAccountResponse>();
}

/**
 * @summary 在RDS实例中创建账号
 *
 * @param request CreateAccountRequest
 * @return CreateAccountResponse
 */
CreateAccountResponse Client::createAccount(const CreateAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAccountWithOptions(request, runtime);
}

/**
 * @summary This API is used to create a backup set for an RDS instance.
 *
 * @description ### Supported Engines  
 * - RDS MySQL  
 * - RDS PostgreSQL  
 * - RDS SQL Server  
 * - RDS MariaDB  
 * ### Feature Description  
 * This API invokes the built-in backup feature of RDS. You can also use DBS. For more information, <props="china">see [DBS API Overview](https://help.aliyun.com/document_detail/2841997.html)<props="intl">see [DBS API Overview](https://help.aliyun.com/document_detail/2402073.html).  
 * ### Notes  
 * When invoking this API, the instance must meet the following conditions; otherwise, the operation will fail:  
 * - The instance status is **running**.  
 * - No backup job is currently running.  
 * - The number of backup sets that can be created for a single instance per day does not exceed 20.  
 * ### Related Function Documentation  
 * - [Back Up Data for RDS MySQL](https://help.aliyun.com/document_detail/378074.html)  
 * - [Back Up Data for RDS PostgreSQL](https://help.aliyun.com/document_detail/96772.html)  
 * - [Back Up Data for RDS SQL Server](https://help.aliyun.com/document_detail/95717.html)  
 * - [Back Up Data for RDS MariaDB](https://help.aliyun.com/document_detail/97147.html)
 *
 * @param request CreateBackupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateBackupResponse
 */
CreateBackupResponse Client::createBackupWithOptions(const CreateBackupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupMethod()) {
    query["BackupMethod"] = request.getBackupMethod();
  }

  if (!!request.hasBackupRetentionPeriod()) {
    query["BackupRetentionPeriod"] = request.getBackupRetentionPeriod();
  }

  if (!!request.hasBackupStrategy()) {
    query["BackupStrategy"] = request.getBackupStrategy();
  }

  if (!!request.hasBackupType()) {
    query["BackupType"] = request.getBackupType();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.getDBName();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateBackup"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateBackupResponse>();
}

/**
 * @summary This API is used to create a backup set for an RDS instance.
 *
 * @description ### Supported Engines  
 * - RDS MySQL  
 * - RDS PostgreSQL  
 * - RDS SQL Server  
 * - RDS MariaDB  
 * ### Feature Description  
 * This API invokes the built-in backup feature of RDS. You can also use DBS. For more information, <props="china">see [DBS API Overview](https://help.aliyun.com/document_detail/2841997.html)<props="intl">see [DBS API Overview](https://help.aliyun.com/document_detail/2402073.html).  
 * ### Notes  
 * When invoking this API, the instance must meet the following conditions; otherwise, the operation will fail:  
 * - The instance status is **running**.  
 * - No backup job is currently running.  
 * - The number of backup sets that can be created for a single instance per day does not exceed 20.  
 * ### Related Function Documentation  
 * - [Back Up Data for RDS MySQL](https://help.aliyun.com/document_detail/378074.html)  
 * - [Back Up Data for RDS PostgreSQL](https://help.aliyun.com/document_detail/96772.html)  
 * - [Back Up Data for RDS SQL Server](https://help.aliyun.com/document_detail/95717.html)  
 * - [Back Up Data for RDS MariaDB](https://help.aliyun.com/document_detail/97147.html)
 *
 * @param request CreateBackupRequest
 * @return CreateBackupResponse
 */
CreateBackupResponse Client::createBackup(const CreateBackupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBackupWithOptions(request, runtime);
}

/**
 * @summary 创建迁移检查任务
 *
 * @param request CreateCloudMigrationPrecheckTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCloudMigrationPrecheckTaskResponse
 */
CreateCloudMigrationPrecheckTaskResponse Client::createCloudMigrationPrecheckTaskWithOptions(const CreateCloudMigrationPrecheckTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSourceAccount()) {
    query["SourceAccount"] = request.getSourceAccount();
  }

  if (!!request.hasSourceCategory()) {
    query["SourceCategory"] = request.getSourceCategory();
  }

  if (!!request.hasSourceIpAddress()) {
    query["SourceIpAddress"] = request.getSourceIpAddress();
  }

  if (!!request.hasSourcePassword()) {
    query["SourcePassword"] = request.getSourcePassword();
  }

  if (!!request.hasSourcePort()) {
    query["SourcePort"] = request.getSourcePort();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.getTaskName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCloudMigrationPrecheckTask"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCloudMigrationPrecheckTaskResponse>();
}

/**
 * @summary 创建迁移检查任务
 *
 * @param request CreateCloudMigrationPrecheckTaskRequest
 * @return CreateCloudMigrationPrecheckTaskResponse
 */
CreateCloudMigrationPrecheckTaskResponse Client::createCloudMigrationPrecheckTask(const CreateCloudMigrationPrecheckTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCloudMigrationPrecheckTaskWithOptions(request, runtime);
}

/**
 * @summary 创建迁移上云任务
 *
 * @param request CreateCloudMigrationTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCloudMigrationTaskResponse
 */
CreateCloudMigrationTaskResponse Client::createCloudMigrationTaskWithOptions(const CreateCloudMigrationTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSourceAccount()) {
    query["SourceAccount"] = request.getSourceAccount();
  }

  if (!!request.hasSourceCategory()) {
    query["SourceCategory"] = request.getSourceCategory();
  }

  if (!!request.hasSourceIpAddress()) {
    query["SourceIpAddress"] = request.getSourceIpAddress();
  }

  if (!!request.hasSourcePassword()) {
    query["SourcePassword"] = request.getSourcePassword();
  }

  if (!!request.hasSourcePort()) {
    query["SourcePort"] = request.getSourcePort();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.getTaskName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCloudMigrationTask"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCloudMigrationTaskResponse>();
}

/**
 * @summary 创建迁移上云任务
 *
 * @param request CreateCloudMigrationTaskRequest
 * @return CreateCloudMigrationTaskResponse
 */
CreateCloudMigrationTaskResponse Client::createCloudMigrationTask(const CreateCloudMigrationTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCloudMigrationTaskWithOptions(request, runtime);
}

/**
 * @summary This API is used to create an RDS instance.
 *
 * @description ### Supported Engines
 * - RDS MySQL
 * - RDS PostgreSQL
 * - RDS SQL Server
 * - RDS MariaDB
 * ### Related Function Documentation
 * >Warning: This API operation incurs a Fee. Carefully read the related Function Documentation before performing this operation.
 * If an error occurs when you invoke the API, you can search for the error message to View the cause of the fault.
 * - [Create an RDS MySQL instance](https://help.aliyun.com/document_detail/148036.html)
 * - [Create a Serverless ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/412231.html)
 * - [Create an RDS PostgreSQL instance](https://help.aliyun.com/document_detail/148038.html)
 * - [Create a Serverless ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/607753.html)
 * - [Create a Babelfish for RDS PostgreSQL instance](https://help.aliyun.com/document_detail/428615.html)
 * - [Create an RDS SQL Server instance](https://help.aliyun.com/document_detail/148037.html)
 * - [Create a Serverless ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/603465.html)
 * - [Create an RDS MariaDB instance](https://help.aliyun.com/document_detail/148040.html)
 *
 * @param tmpReq CreateDBInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDBInstanceResponse
 */
CreateDBInstanceResponse Client::createDBInstanceWithOptions(const CreateDBInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateDBInstanceShrinkRequest request = CreateDBInstanceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasServerlessConfig()) {
    request.setServerlessConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getServerlessConfig(), "ServerlessConfig", "json"));
  }

  json query = {};
  if (!!request.hasAmount()) {
    query["Amount"] = request.getAmount();
  }

  if (!!request.hasAutoCreateProxy()) {
    query["AutoCreateProxy"] = request.getAutoCreateProxy();
  }

  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasAutoUseCoupon()) {
    query["AutoUseCoupon"] = request.getAutoUseCoupon();
  }

  if (!!request.hasBabelfishConfig()) {
    query["BabelfishConfig"] = request.getBabelfishConfig();
  }

  if (!!request.hasBpeEnabled()) {
    query["BpeEnabled"] = request.getBpeEnabled();
  }

  if (!!request.hasBurstingEnabled()) {
    query["BurstingEnabled"] = request.getBurstingEnabled();
  }

  if (!!request.hasBusinessInfo()) {
    query["BusinessInfo"] = request.getBusinessInfo();
  }

  if (!!request.hasCategory()) {
    query["Category"] = request.getCategory();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasColdDataEnabled()) {
    query["ColdDataEnabled"] = request.getColdDataEnabled();
  }

  if (!!request.hasConnectionMode()) {
    query["ConnectionMode"] = request.getConnectionMode();
  }

  if (!!request.hasConnectionString()) {
    query["ConnectionString"] = request.getConnectionString();
  }

  if (!!request.hasCreateStrategy()) {
    query["CreateStrategy"] = request.getCreateStrategy();
  }

  if (!!request.hasCustomExtraInfo()) {
    query["CustomExtraInfo"] = request.getCustomExtraInfo();
  }

  if (!!request.hasDBInstanceClass()) {
    query["DBInstanceClass"] = request.getDBInstanceClass();
  }

  if (!!request.hasDBInstanceDescription()) {
    query["DBInstanceDescription"] = request.getDBInstanceDescription();
  }

  if (!!request.hasDBInstanceNetType()) {
    query["DBInstanceNetType"] = request.getDBInstanceNetType();
  }

  if (!!request.hasDBInstanceStorage()) {
    query["DBInstanceStorage"] = request.getDBInstanceStorage();
  }

  if (!!request.hasDBInstanceStorageType()) {
    query["DBInstanceStorageType"] = request.getDBInstanceStorageType();
  }

  if (!!request.hasDBIsIgnoreCase()) {
    query["DBIsIgnoreCase"] = request.getDBIsIgnoreCase();
  }

  if (!!request.hasDBParamGroupId()) {
    query["DBParamGroupId"] = request.getDBParamGroupId();
  }

  if (!!request.hasDBTimeZone()) {
    query["DBTimeZone"] = request.getDBTimeZone();
  }

  if (!!request.hasDedicatedHostGroupId()) {
    query["DedicatedHostGroupId"] = request.getDedicatedHostGroupId();
  }

  if (!!request.hasDeletionProtection()) {
    query["DeletionProtection"] = request.getDeletionProtection();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEncryptionKey()) {
    query["EncryptionKey"] = request.getEncryptionKey();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.getEngine();
  }

  if (!!request.hasEngineVersion()) {
    query["EngineVersion"] = request.getEngineVersion();
  }

  if (!!request.hasExternalReplication()) {
    query["ExternalReplication"] = request.getExternalReplication();
  }

  if (!!request.hasInstanceNetworkType()) {
    query["InstanceNetworkType"] = request.getInstanceNetworkType();
  }

  if (!!request.hasIoAccelerationEnabled()) {
    query["IoAccelerationEnabled"] = request.getIoAccelerationEnabled();
  }

  if (!!request.hasOptimizedWrites()) {
    query["OptimizedWrites"] = request.getOptimizedWrites();
  }

  if (!!request.hasPayType()) {
    query["PayType"] = request.getPayType();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasPrivateIpAddress()) {
    query["PrivateIpAddress"] = request.getPrivateIpAddress();
  }

  if (!!request.hasPromotionCode()) {
    query["PromotionCode"] = request.getPromotionCode();
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

  if (!!request.hasRoleARN()) {
    query["RoleARN"] = request.getRoleARN();
  }

  if (!!request.hasSecurityIPList()) {
    query["SecurityIPList"] = request.getSecurityIPList();
  }

  if (!!request.hasServerlessConfigShrink()) {
    query["ServerlessConfig"] = request.getServerlessConfigShrink();
  }

  if (!!request.hasStorageAutoScale()) {
    query["StorageAutoScale"] = request.getStorageAutoScale();
  }

  if (!!request.hasStorageThreshold()) {
    query["StorageThreshold"] = request.getStorageThreshold();
  }

  if (!!request.hasStorageUpperBound()) {
    query["StorageUpperBound"] = request.getStorageUpperBound();
  }

  if (!!request.hasSystemDBCharset()) {
    query["SystemDBCharset"] = request.getSystemDBCharset();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasTargetDedicatedHostIdForLog()) {
    query["TargetDedicatedHostIdForLog"] = request.getTargetDedicatedHostIdForLog();
  }

  if (!!request.hasTargetDedicatedHostIdForMaster()) {
    query["TargetDedicatedHostIdForMaster"] = request.getTargetDedicatedHostIdForMaster();
  }

  if (!!request.hasTargetDedicatedHostIdForSlave()) {
    query["TargetDedicatedHostIdForSlave"] = request.getTargetDedicatedHostIdForSlave();
  }

  if (!!request.hasTargetMinorVersion()) {
    query["TargetMinorVersion"] = request.getTargetMinorVersion();
  }

  if (!!request.hasUsedTime()) {
    query["UsedTime"] = request.getUsedTime();
  }

  if (!!request.hasUserBackupId()) {
    query["UserBackupId"] = request.getUserBackupId();
  }

  if (!!request.hasVPCId()) {
    query["VPCId"] = request.getVPCId();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  if (!!request.hasWhitelistTemplateList()) {
    query["WhitelistTemplateList"] = request.getWhitelistTemplateList();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  if (!!request.hasZoneIdSlave1()) {
    query["ZoneIdSlave1"] = request.getZoneIdSlave1();
  }

  if (!!request.hasZoneIdSlave2()) {
    query["ZoneIdSlave2"] = request.getZoneIdSlave2();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDBInstance"},
    {"version" , "2014-08-15"},
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
 * @summary This API is used to create an RDS instance.
 *
 * @description ### Supported Engines
 * - RDS MySQL
 * - RDS PostgreSQL
 * - RDS SQL Server
 * - RDS MariaDB
 * ### Related Function Documentation
 * >Warning: This API operation incurs a Fee. Carefully read the related Function Documentation before performing this operation.
 * If an error occurs when you invoke the API, you can search for the error message to View the cause of the fault.
 * - [Create an RDS MySQL instance](https://help.aliyun.com/document_detail/148036.html)
 * - [Create a Serverless ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/412231.html)
 * - [Create an RDS PostgreSQL instance](https://help.aliyun.com/document_detail/148038.html)
 * - [Create a Serverless ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/607753.html)
 * - [Create a Babelfish for RDS PostgreSQL instance](https://help.aliyun.com/document_detail/428615.html)
 * - [Create an RDS SQL Server instance](https://help.aliyun.com/document_detail/148037.html)
 * - [Create a Serverless ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/603465.html)
 * - [Create an RDS MariaDB instance](https://help.aliyun.com/document_detail/148040.html)
 *
 * @param request CreateDBInstanceRequest
 * @return CreateDBInstanceResponse
 */
CreateDBInstanceResponse Client::createDBInstance(const CreateDBInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDBInstanceWithOptions(request, runtime);
}

/**
 * @summary 创建实例的Endpoint
 *
 * @param tmpReq CreateDBInstanceEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDBInstanceEndpointResponse
 */
CreateDBInstanceEndpointResponse Client::createDBInstanceEndpointWithOptions(const CreateDBInstanceEndpointRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateDBInstanceEndpointShrinkRequest request = CreateDBInstanceEndpointShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNodeItems()) {
    request.setNodeItemsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNodeItems(), "NodeItems", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasConnectionStringPrefix()) {
    query["ConnectionStringPrefix"] = request.getConnectionStringPrefix();
  }

  if (!!request.hasDBInstanceEndpointDescription()) {
    query["DBInstanceEndpointDescription"] = request.getDBInstanceEndpointDescription();
  }

  if (!!request.hasDBInstanceEndpointType()) {
    query["DBInstanceEndpointType"] = request.getDBInstanceEndpointType();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasNodeItemsShrink()) {
    query["NodeItems"] = request.getNodeItemsShrink();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasPrivateIpAddress()) {
    query["PrivateIpAddress"] = request.getPrivateIpAddress();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDBInstanceEndpoint"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDBInstanceEndpointResponse>();
}

/**
 * @summary 创建实例的Endpoint
 *
 * @param request CreateDBInstanceEndpointRequest
 * @return CreateDBInstanceEndpointResponse
 */
CreateDBInstanceEndpointResponse Client::createDBInstanceEndpoint(const CreateDBInstanceEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDBInstanceEndpointWithOptions(request, runtime);
}

/**
 * @summary 创建实例的Endpoint连接地址
 *
 * @param request CreateDBInstanceEndpointAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDBInstanceEndpointAddressResponse
 */
CreateDBInstanceEndpointAddressResponse Client::createDBInstanceEndpointAddressWithOptions(const CreateDBInstanceEndpointAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasConnectionStringPrefix()) {
    query["ConnectionStringPrefix"] = request.getConnectionStringPrefix();
  }

  if (!!request.hasDBInstanceEndpointId()) {
    query["DBInstanceEndpointId"] = request.getDBInstanceEndpointId();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasIpType()) {
    query["IpType"] = request.getIpType();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDBInstanceEndpointAddress"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDBInstanceEndpointAddressResponse>();
}

/**
 * @summary 创建实例的Endpoint连接地址
 *
 * @param request CreateDBInstanceEndpointAddressRequest
 * @return CreateDBInstanceEndpointAddressResponse
 */
CreateDBInstanceEndpointAddressResponse Client::createDBInstanceEndpointAddress(const CreateDBInstanceEndpointAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDBInstanceEndpointAddressWithOptions(request, runtime);
}

/**
 * @summary rds重建实例openapi
 *
 * @param request CreateDBInstanceForRebuildRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDBInstanceForRebuildResponse
 */
CreateDBInstanceForRebuildResponse Client::createDBInstanceForRebuildWithOptions(const CreateDBInstanceForRebuildRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceDescription()) {
    query["DBInstanceDescription"] = request.getDBInstanceDescription();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBInstanceNetType()) {
    query["DBInstanceNetType"] = request.getDBInstanceNetType();
  }

  if (!!request.hasInstanceNetworkType()) {
    query["InstanceNetworkType"] = request.getInstanceNetworkType();
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

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
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

  if (!!request.hasSecurityIPList()) {
    query["SecurityIPList"] = request.getSecurityIPList();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasUsedTime()) {
    query["UsedTime"] = request.getUsedTime();
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

  if (!!request.hasZoneIdSlave1()) {
    query["ZoneIdSlave1"] = request.getZoneIdSlave1();
  }

  if (!!request.hasZoneIdSlave2()) {
    query["ZoneIdSlave2"] = request.getZoneIdSlave2();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDBInstanceForRebuild"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDBInstanceForRebuildResponse>();
}

/**
 * @summary rds重建实例openapi
 *
 * @param request CreateDBInstanceForRebuildRequest
 * @return CreateDBInstanceForRebuildResponse
 */
CreateDBInstanceForRebuildResponse Client::createDBInstanceForRebuild(const CreateDBInstanceForRebuildRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDBInstanceForRebuildWithOptions(request, runtime);
}

/**
 * @summary Create a replication channel for a native replication instance
 *
 * @param request CreateDBInstanceReplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDBInstanceReplicationResponse
 */
CreateDBInstanceReplicationResponse Client::createDBInstanceReplicationWithOptions(const CreateDBInstanceReplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChannelName()) {
    query["ChannelName"] = request.getChannelName();
  }

  if (!!request.hasDbInstanceId()) {
    query["DbInstanceId"] = request.getDbInstanceId();
  }

  if (!!request.hasMasterHost()) {
    query["MasterHost"] = request.getMasterHost();
  }

  if (!!request.hasMasterPassword()) {
    query["MasterPassword"] = request.getMasterPassword();
  }

  if (!!request.hasMasterPort()) {
    query["MasterPort"] = request.getMasterPort();
  }

  if (!!request.hasMasterUser()) {
    query["MasterUser"] = request.getMasterUser();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDBInstanceReplication"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDBInstanceReplicationResponse>();
}

/**
 * @summary Create a replication channel for a native replication instance
 *
 * @param request CreateDBInstanceReplicationRequest
 * @return CreateDBInstanceReplicationResponse
 */
CreateDBInstanceReplicationResponse Client::createDBInstanceReplication(const CreateDBInstanceReplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDBInstanceReplicationWithOptions(request, runtime);
}

/**
 * @summary 创建实例主机安全组规则
 *
 * @param request CreateDBInstanceSecurityGroupRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDBInstanceSecurityGroupRuleResponse
 */
CreateDBInstanceSecurityGroupRuleResponse Client::createDBInstanceSecurityGroupRuleWithOptions(const CreateDBInstanceSecurityGroupRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasIpProtocol()) {
    query["IpProtocol"] = request.getIpProtocol();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPortRange()) {
    query["PortRange"] = request.getPortRange();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSourceCidrIp()) {
    query["SourceCidrIp"] = request.getSourceCidrIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDBInstanceSecurityGroupRule"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDBInstanceSecurityGroupRuleResponse>();
}

/**
 * @summary 创建实例主机安全组规则
 *
 * @param request CreateDBInstanceSecurityGroupRuleRequest
 * @return CreateDBInstanceSecurityGroupRuleResponse
 */
CreateDBInstanceSecurityGroupRuleResponse Client::createDBInstanceSecurityGroupRule(const CreateDBInstanceSecurityGroupRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDBInstanceSecurityGroupRuleWithOptions(request, runtime);
}

/**
 * @summary category cluster add node
 *
 * @param tmpReq CreateDBNodesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDBNodesResponse
 */
CreateDBNodesResponse Client::createDBNodesWithOptions(const CreateDBNodesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateDBNodesShrinkRequest request = CreateDBNodesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDBNode()) {
    request.setDBNodeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDBNode(), "DBNode", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBNodeShrink()) {
    query["DBNode"] = request.getDBNodeShrink();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDBNodes"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDBNodesResponse>();
}

/**
 * @summary category cluster add node
 *
 * @param request CreateDBNodesRequest
 * @return CreateDBNodesResponse
 */
CreateDBNodesResponse Client::createDBNodes(const CreateDBNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDBNodesWithOptions(request, runtime);
}

/**
 * @summary 创建RDS实例数据库代理的连接地址
 *
 * @param request CreateDBProxyEndpointAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDBProxyEndpointAddressResponse
 */
CreateDBProxyEndpointAddressResponse Client::createDBProxyEndpointAddressWithOptions(const CreateDBProxyEndpointAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectionStringPrefix()) {
    query["ConnectionStringPrefix"] = request.getConnectionStringPrefix();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBProxyConnectStringNetType()) {
    query["DBProxyConnectStringNetType"] = request.getDBProxyConnectStringNetType();
  }

  if (!!request.hasDBProxyEndpointId()) {
    query["DBProxyEndpointId"] = request.getDBProxyEndpointId();
  }

  if (!!request.hasDBProxyEngineType()) {
    query["DBProxyEngineType"] = request.getDBProxyEngineType();
  }

  if (!!request.hasDBProxyNewConnectStringPort()) {
    query["DBProxyNewConnectStringPort"] = request.getDBProxyNewConnectStringPort();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasVPCId()) {
    query["VPCId"] = request.getVPCId();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDBProxyEndpointAddress"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDBProxyEndpointAddressResponse>();
}

/**
 * @summary 创建RDS实例数据库代理的连接地址
 *
 * @param request CreateDBProxyEndpointAddressRequest
 * @return CreateDBProxyEndpointAddressResponse
 */
CreateDBProxyEndpointAddressResponse Client::createDBProxyEndpointAddress(const CreateDBProxyEndpointAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDBProxyEndpointAddressWithOptions(request, runtime);
}

/**
 * @summary 为指定RDS示例创建DB
 *
 * @param request CreateDatabaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDatabaseResponse
 */
CreateDatabaseResponse Client::createDatabaseWithOptions(const CreateDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCharacterSetName()) {
    query["CharacterSetName"] = request.getCharacterSetName();
  }

  if (!!request.hasDBDescription()) {
    query["DBDescription"] = request.getDBDescription();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.getDBName();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDatabase"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDatabaseResponse>();
}

/**
 * @summary 为指定RDS示例创建DB
 *
 * @param request CreateDatabaseRequest
 * @return CreateDatabaseResponse
 */
CreateDatabaseResponse Client::createDatabase(const CreateDatabaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDatabaseWithOptions(request, runtime);
}

/**
 * @summary 创建Ddr实例
 *
 * @param request CreateDdrInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDdrInstanceResponse
 */
CreateDdrInstanceResponse Client::createDdrInstanceWithOptions(const CreateDdrInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupSetId()) {
    query["BackupSetId"] = request.getBackupSetId();
  }

  if (!!request.hasBackupSetRegion()) {
    query["BackupSetRegion"] = request.getBackupSetRegion();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasConnectionMode()) {
    query["ConnectionMode"] = request.getConnectionMode();
  }

  if (!!request.hasDBInstanceClass()) {
    query["DBInstanceClass"] = request.getDBInstanceClass();
  }

  if (!!request.hasDBInstanceDescription()) {
    query["DBInstanceDescription"] = request.getDBInstanceDescription();
  }

  if (!!request.hasDBInstanceNetType()) {
    query["DBInstanceNetType"] = request.getDBInstanceNetType();
  }

  if (!!request.hasDBInstanceStorage()) {
    query["DBInstanceStorage"] = request.getDBInstanceStorage();
  }

  if (!!request.hasDBInstanceStorageType()) {
    query["DBInstanceStorageType"] = request.getDBInstanceStorageType();
  }

  if (!!request.hasEncryptionKey()) {
    query["EncryptionKey"] = request.getEncryptionKey();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.getEngine();
  }

  if (!!request.hasEngineVersion()) {
    query["EngineVersion"] = request.getEngineVersion();
  }

  if (!!request.hasInstanceNetworkType()) {
    query["InstanceNetworkType"] = request.getInstanceNetworkType();
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

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasPrivateIpAddress()) {
    query["PrivateIpAddress"] = request.getPrivateIpAddress();
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

  if (!!request.hasRestoreTime()) {
    query["RestoreTime"] = request.getRestoreTime();
  }

  if (!!request.hasRestoreType()) {
    query["RestoreType"] = request.getRestoreType();
  }

  if (!!request.hasRoleARN()) {
    query["RoleARN"] = request.getRoleARN();
  }

  if (!!request.hasSecurityIPList()) {
    query["SecurityIPList"] = request.getSecurityIPList();
  }

  if (!!request.hasSourceDBInstanceName()) {
    query["SourceDBInstanceName"] = request.getSourceDBInstanceName();
  }

  if (!!request.hasSourceRegion()) {
    query["SourceRegion"] = request.getSourceRegion();
  }

  if (!!request.hasSystemDBCharset()) {
    query["SystemDBCharset"] = request.getSystemDBCharset();
  }

  if (!!request.hasUsedTime()) {
    query["UsedTime"] = request.getUsedTime();
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
    {"action" , "CreateDdrInstance"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDdrInstanceResponse>();
}

/**
 * @summary 创建Ddr实例
 *
 * @param request CreateDdrInstanceRequest
 * @return CreateDdrInstanceResponse
 */
CreateDdrInstanceResponse Client::createDdrInstance(const CreateDdrInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDdrInstanceWithOptions(request, runtime);
}

/**
 * @summary 创建全球多活数据库集群
 *
 * @param request CreateGADInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateGADInstanceResponse
 */
CreateGADInstanceResponse Client::createGADInstanceWithOptions(const CreateGADInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCentralDBInstanceId()) {
    query["CentralDBInstanceId"] = request.getCentralDBInstanceId();
  }

  if (!!request.hasCentralRdsDtsAdminAccount()) {
    query["CentralRdsDtsAdminAccount"] = request.getCentralRdsDtsAdminAccount();
  }

  if (!!request.hasCentralRdsDtsAdminPassword()) {
    query["CentralRdsDtsAdminPassword"] = request.getCentralRdsDtsAdminPassword();
  }

  if (!!request.hasCentralRegionId()) {
    query["CentralRegionId"] = request.getCentralRegionId();
  }

  if (!!request.hasDBList()) {
    query["DBList"] = request.getDBList();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasUnitNode()) {
    query["UnitNode"] = request.getUnitNode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateGADInstance"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateGADInstanceResponse>();
}

/**
 * @summary 创建全球多活数据库集群
 *
 * @param request CreateGADInstanceRequest
 * @return CreateGADInstanceResponse
 */
CreateGADInstanceResponse Client::createGADInstance(const CreateGADInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createGADInstanceWithOptions(request, runtime);
}

/**
 * @summary 增加Gad节点
 *
 * @param request CreateGadInstanceMemberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateGadInstanceMemberResponse
 */
CreateGadInstanceMemberResponse Client::createGadInstanceMemberWithOptions(const CreateGadInstanceMemberRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCentralDBInstanceId()) {
    query["CentralDBInstanceId"] = request.getCentralDBInstanceId();
  }

  if (!!request.hasCentralRdsDtsAdminAccount()) {
    query["CentralRdsDtsAdminAccount"] = request.getCentralRdsDtsAdminAccount();
  }

  if (!!request.hasCentralRdsDtsAdminPassword()) {
    query["CentralRdsDtsAdminPassword"] = request.getCentralRdsDtsAdminPassword();
  }

  if (!!request.hasCentralRegionId()) {
    query["CentralRegionId"] = request.getCentralRegionId();
  }

  if (!!request.hasDBList()) {
    query["DBList"] = request.getDBList();
  }

  if (!!request.hasGadInstanceId()) {
    query["GadInstanceId"] = request.getGadInstanceId();
  }

  if (!!request.hasUnitNode()) {
    query["UnitNode"] = request.getUnitNode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateGadInstanceMember"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateGadInstanceMemberResponse>();
}

/**
 * @summary 增加Gad节点
 *
 * @param request CreateGadInstanceMemberRequest
 * @return CreateGadInstanceMemberResponse
 */
CreateGadInstanceMemberResponse Client::createGadInstanceMember(const CreateGadInstanceMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createGadInstanceMemberWithOptions(request, runtime);
}

/**
 * @summary Create a Data Import Job
 *
 * @description Create a Data Import Job for importing data into an RDS MySQL instance with native replication
 *
 * @param request CreateImportTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateImportTaskResponse
 */
CreateImportTaskResponse Client::createImportTaskWithOptions(const CreateImportTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbInstanceId()) {
    query["DbInstanceId"] = request.getDbInstanceId();
  }

  if (!!request.hasEstimatedSize()) {
    query["EstimatedSize"] = request.getEstimatedSize();
  }

  if (!!request.hasHost()) {
    query["Host"] = request.getHost();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSourceInstanceId()) {
    query["SourceInstanceId"] = request.getSourceInstanceId();
  }

  if (!!request.hasSourcePlatform()) {
    query["SourcePlatform"] = request.getSourcePlatform();
  }

  if (!!request.hasStreamPort()) {
    query["StreamPort"] = request.getStreamPort();
  }

  if (!!request.hasUser()) {
    query["User"] = request.getUser();
  }

  if (!!request.hasXtrabackupPath()) {
    query["XtrabackupPath"] = request.getXtrabackupPath();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateImportTask"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateImportTaskResponse>();
}

/**
 * @summary Create a Data Import Job
 *
 * @description Create a Data Import Job for importing data into an RDS MySQL instance with native replication
 *
 * @param request CreateImportTaskRequest
 * @return CreateImportTaskResponse
 */
CreateImportTaskResponse Client::createImportTask(const CreateImportTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createImportTaskWithOptions(request, runtime);
}

/**
 * @summary 创建全密态规则
 *
 * @description ## Request Description
 * - Before using this API, ensure that you have enabled the column encryption service in DAS Security Center.
 * - If you receive the error message ColumnEncryptionErrorCode.NOT_PURCHASED when invoking the API, go to the DAS (Database Autonomy Service) Security Center to purchase and enable the column encryption service before using it again.
 *
 * @param tmpReq CreateMaskingRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMaskingRulesResponse
 */
CreateMaskingRulesResponse Client::createMaskingRulesWithOptions(const CreateMaskingRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateMaskingRulesShrinkRequest request = CreateMaskingRulesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRuleConfig()) {
    request.setRuleConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRuleConfig(), "RuleConfig", "json"));
  }

  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.getDBName();
  }

  if (!!request.hasDefaultAlgo()) {
    query["DefaultAlgo"] = request.getDefaultAlgo();
  }

  if (!!request.hasMaskingAlgo()) {
    query["MaskingAlgo"] = request.getMaskingAlgo();
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

  if (!!request.hasRuleConfigShrink()) {
    query["RuleConfig"] = request.getRuleConfigShrink();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateMaskingRules"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMaskingRulesResponse>();
}

/**
 * @summary 创建全密态规则
 *
 * @description ## Request Description
 * - Before using this API, ensure that you have enabled the column encryption service in DAS Security Center.
 * - If you receive the error message ColumnEncryptionErrorCode.NOT_PURCHASED when invoking the API, go to the DAS (Database Autonomy Service) Security Center to purchase and enable the column encryption service before using it again.
 *
 * @param request CreateMaskingRulesRequest
 * @return CreateMaskingRulesResponse
 */
CreateMaskingRulesResponse Client::createMaskingRules(const CreateMaskingRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMaskingRulesWithOptions(request, runtime);
}

/**
 * @summary 将OSS上的备份文件还原到RDS SQL Server实例，实现数据上云
 *
 * @param request CreateMigrateTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMigrateTaskResponse
 */
CreateMigrateTaskResponse Client::createMigrateTaskWithOptions(const CreateMigrateTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupMode()) {
    query["BackupMode"] = request.getBackupMode();
  }

  if (!!request.hasCheckDBMode()) {
    query["CheckDBMode"] = request.getCheckDBMode();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.getDBName();
  }

  if (!!request.hasIsOnlineDB()) {
    query["IsOnlineDB"] = request.getIsOnlineDB();
  }

  if (!!request.hasMigrateTaskId()) {
    query["MigrateTaskId"] = request.getMigrateTaskId();
  }

  if (!!request.hasOSSUrls()) {
    query["OSSUrls"] = request.getOSSUrls();
  }

  if (!!request.hasOssObjectPositions()) {
    query["OssObjectPositions"] = request.getOssObjectPositions();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateMigrateTask"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMigrateTaskResponse>();
}

/**
 * @summary 将OSS上的备份文件还原到RDS SQL Server实例，实现数据上云
 *
 * @param request CreateMigrateTaskRequest
 * @return CreateMigrateTaskResponse
 */
CreateMigrateTaskResponse Client::createMigrateTask(const CreateMigrateTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMigrateTaskWithOptions(request, runtime);
}

/**
 * @summary 打开RDS SQL Server备份数据上云任务的数据库
 *
 * @param request CreateOnlineDatabaseTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateOnlineDatabaseTaskResponse
 */
CreateOnlineDatabaseTaskResponse Client::createOnlineDatabaseTaskWithOptions(const CreateOnlineDatabaseTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCheckDBMode()) {
    query["CheckDBMode"] = request.getCheckDBMode();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.getDBName();
  }

  if (!!request.hasMigrateTaskId()) {
    query["MigrateTaskId"] = request.getMigrateTaskId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateOnlineDatabaseTask"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateOnlineDatabaseTaskResponse>();
}

/**
 * @summary 打开RDS SQL Server备份数据上云任务的数据库
 *
 * @param request CreateOnlineDatabaseTaskRequest
 * @return CreateOnlineDatabaseTaskResponse
 */
CreateOnlineDatabaseTaskResponse Client::createOnlineDatabaseTask(const CreateOnlineDatabaseTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createOnlineDatabaseTaskWithOptions(request, runtime);
}

/**
 * @summary 创建删除节点订单
 *
 * @param tmpReq CreateOrderForDeleteDBNodesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateOrderForDeleteDBNodesResponse
 */
CreateOrderForDeleteDBNodesResponse Client::createOrderForDeleteDBNodesWithOptions(const CreateOrderForDeleteDBNodesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateOrderForDeleteDBNodesShrinkRequest request = CreateOrderForDeleteDBNodesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDBNodeId()) {
    request.setDBNodeIdShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDBNodeId(), "DBNodeId", "json"));
  }

  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasBusinessInfo()) {
    query["BusinessInfo"] = request.getBusinessInfo();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCommodityCode()) {
    query["CommodityCode"] = request.getCommodityCode();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBNodeIdShrink()) {
    query["DBNodeId"] = request.getDBNodeIdShrink();
  }

  if (!!request.hasEngineVersion()) {
    query["EngineVersion"] = request.getEngineVersion();
  }

  if (!!request.hasNodeType()) {
    query["NodeType"] = request.getNodeType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPromotionCode()) {
    query["PromotionCode"] = request.getPromotionCode();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.getResource();
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

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateOrderForDeleteDBNodes"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateOrderForDeleteDBNodesResponse>();
}

/**
 * @summary 创建删除节点订单
 *
 * @param request CreateOrderForDeleteDBNodesRequest
 * @return CreateOrderForDeleteDBNodesResponse
 */
CreateOrderForDeleteDBNodesResponse Client::createOrderForDeleteDBNodes(const CreateOrderForDeleteDBNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createOrderForDeleteDBNodesWithOptions(request, runtime);
}

/**
 * @summary 创建参数模板
 *
 * @param request CreateParameterGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateParameterGroupResponse
 */
CreateParameterGroupResponse Client::createParameterGroupWithOptions(const CreateParameterGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEngine()) {
    query["Engine"] = request.getEngine();
  }

  if (!!request.hasEngineVersion()) {
    query["EngineVersion"] = request.getEngineVersion();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasParameterGroupDesc()) {
    query["ParameterGroupDesc"] = request.getParameterGroupDesc();
  }

  if (!!request.hasParameterGroupName()) {
    query["ParameterGroupName"] = request.getParameterGroupName();
  }

  if (!!request.hasParameters()) {
    query["Parameters"] = request.getParameters();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateParameterGroup"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateParameterGroupResponse>();
}

/**
 * @summary 创建参数模板
 *
 * @param request CreateParameterGroupRequest
 * @return CreateParameterGroupResponse
 */
CreateParameterGroupResponse Client::createParameterGroup(const CreateParameterGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createParameterGroupWithOptions(request, runtime);
}

/**
 * @summary 创建插件
 *
 * @param request CreatePostgresExtensionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePostgresExtensionsResponse
 */
CreatePostgresExtensionsResponse Client::createPostgresExtensionsWithOptions(const CreatePostgresExtensionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.getAccountName();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBNames()) {
    query["DBNames"] = request.getDBNames();
  }

  if (!!request.hasExtensions()) {
    query["Extensions"] = request.getExtensions();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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

  if (!!request.hasRiskConfirmed()) {
    query["RiskConfirmed"] = request.getRiskConfirmed();
  }

  if (!!request.hasSourceDatabase()) {
    query["SourceDatabase"] = request.getSourceDatabase();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreatePostgresExtensions"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePostgresExtensionsResponse>();
}

/**
 * @summary 创建插件
 *
 * @param request CreatePostgresExtensionsRequest
 * @return CreatePostgresExtensionsResponse
 */
CreatePostgresExtensionsResponse Client::createPostgresExtensions(const CreatePostgresExtensionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPostgresExtensionsWithOptions(request, runtime);
}

/**
 * @summary 创建RDS CUSTOM部署集
 *
 * @param request CreateRCDeploymentSetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRCDeploymentSetResponse
 */
CreateRCDeploymentSetResponse Client::createRCDeploymentSetWithOptions(const CreateRCDeploymentSetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDeploymentSetName()) {
    query["DeploymentSetName"] = request.getDeploymentSetName();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasGroupCount()) {
    query["GroupCount"] = request.getGroupCount();
  }

  if (!!request.hasOnUnableToRedeployFailedInstance()) {
    query["OnUnableToRedeployFailedInstance"] = request.getOnUnableToRedeployFailedInstance();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasStrategy()) {
    query["Strategy"] = request.getStrategy();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateRCDeploymentSet"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRCDeploymentSetResponse>();
}

/**
 * @summary 创建RDS CUSTOM部署集
 *
 * @param request CreateRCDeploymentSetRequest
 * @return CreateRCDeploymentSetResponse
 */
CreateRCDeploymentSetResponse Client::createRCDeploymentSet(const CreateRCDeploymentSetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRCDeploymentSetWithOptions(request, runtime);
}

/**
 * @summary 创建RC云盘
 *
 * @param request CreateRCDiskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRCDiskResponse
 */
CreateRCDiskResponse Client::createRCDiskWithOptions(const CreateRCDiskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDiskCategory()) {
    query["DiskCategory"] = request.getDiskCategory();
  }

  if (!!request.hasDiskName()) {
    query["DiskName"] = request.getDiskName();
  }

  if (!!request.hasInstanceChargeType()) {
    query["InstanceChargeType"] = request.getInstanceChargeType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPerformanceLevel()) {
    query["PerformanceLevel"] = request.getPerformanceLevel();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasPeriodUnit()) {
    query["PeriodUnit"] = request.getPeriodUnit();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSize()) {
    query["Size"] = request.getSize();
  }

  if (!!request.hasSnapshotId()) {
    query["SnapshotId"] = request.getSnapshotId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateRCDisk"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRCDiskResponse>();
}

/**
 * @summary 创建RC云盘
 *
 * @param request CreateRCDiskRequest
 * @return CreateRCDiskResponse
 */
CreateRCDiskResponse Client::createRCDisk(const CreateRCDiskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRCDiskWithOptions(request, runtime);
}

/**
 * @summary 创建RDS Custom实例的镜像
 *
 * @param request CreateRCImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRCImageResponse
 */
CreateRCImageResponse Client::createRCImageWithOptions(const CreateRCImageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasImageName()) {
    query["ImageName"] = request.getImageName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSnapshotId()) {
    query["SnapshotId"] = request.getSnapshotId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateRCImage"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRCImageResponse>();
}

/**
 * @summary 创建RDS Custom实例的镜像
 *
 * @param request CreateRCImageRequest
 * @return CreateRCImageResponse
 */
CreateRCImageResponse Client::createRCImage(const CreateRCImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRCImageWithOptions(request, runtime);
}

/**
 * @summary 创建RC节点池模版
 *
 * @param tmpReq CreateRCNodePoolRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRCNodePoolResponse
 */
CreateRCNodePoolResponse Client::createRCNodePoolWithOptions(const CreateRCNodePoolRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateRCNodePoolShrinkRequest request = CreateRCNodePoolShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDataDisk()) {
    request.setDataDiskShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDataDisk(), "DataDisk", "json"));
  }

  if (!!tmpReq.hasSystemDisk()) {
    request.setSystemDiskShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSystemDisk(), "SystemDisk", "json"));
  }

  json query = {};
  if (!!request.hasAmount()) {
    query["Amount"] = request.getAmount();
  }

  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasCreateMode()) {
    query["CreateMode"] = request.getCreateMode();
  }

  if (!!request.hasDataDiskShrink()) {
    query["DataDisk"] = request.getDataDiskShrink();
  }

  if (!!request.hasDeploymentSetId()) {
    query["DeploymentSetId"] = request.getDeploymentSetId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasHostName()) {
    query["HostName"] = request.getHostName();
  }

  if (!!request.hasImageId()) {
    query["ImageId"] = request.getImageId();
  }

  if (!!request.hasInstanceChargeType()) {
    query["InstanceChargeType"] = request.getInstanceChargeType();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.getInstanceType();
  }

  if (!!request.hasInternetChargeType()) {
    query["InternetChargeType"] = request.getInternetChargeType();
  }

  if (!!request.hasInternetMaxBandwidthOut()) {
    query["InternetMaxBandwidthOut"] = request.getInternetMaxBandwidthOut();
  }

  if (!!request.hasIoOptimized()) {
    query["IoOptimized"] = request.getIoOptimized();
  }

  if (!!request.hasKeyPairName()) {
    query["KeyPairName"] = request.getKeyPairName();
  }

  if (!!request.hasNodePoolName()) {
    query["NodePoolName"] = request.getNodePoolName();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasPeriodUnit()) {
    query["PeriodUnit"] = request.getPeriodUnit();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSecurityEnhancementStrategy()) {
    query["SecurityEnhancementStrategy"] = request.getSecurityEnhancementStrategy();
  }

  if (!!request.hasSecurityGroupId()) {
    query["SecurityGroupId"] = request.getSecurityGroupId();
  }

  if (!!request.hasSpotStrategy()) {
    query["SpotStrategy"] = request.getSpotStrategy();
  }

  if (!!request.hasSupportCase()) {
    query["SupportCase"] = request.getSupportCase();
  }

  if (!!request.hasSystemDiskShrink()) {
    query["SystemDisk"] = request.getSystemDiskShrink();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
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
    {"action" , "CreateRCNodePool"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRCNodePoolResponse>();
}

/**
 * @summary 创建RC节点池模版
 *
 * @param request CreateRCNodePoolRequest
 * @return CreateRCNodePoolResponse
 */
CreateRCNodePoolResponse Client::createRCNodePool(const CreateRCNodePoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRCNodePoolWithOptions(request, runtime);
}

/**
 * @summary Create a snapshot for a disk.
 *
 * @description You cannot create a snapshot for the specified disk in the following scenarios:
 * - The number of retained manual snapshots for the disk has reached 256.
 * - The previous snapshot creation has not completed.
 * - The instance to which the disk is mounted has never been started.
 * - The instance to which the disk is mounted is not in the **Stopped** or **running** state.
 * When creating a snapshot, note the following:
 * - If snapshot creation has not completed, the snapshot cannot be used to create a custom image (CreateImage).
 * - If the disk is attached to an RDS Custom instance, do not change the instance status during snapshot creation.
 * - You can create snapshots for disks in the **expired** state. If the disk reaches its expiration and release time while a snapshot is being created, the disk will be released and the snapshot in the **Creating** state will be deleted simultaneously.
 *
 * @param request CreateRCSnapshotRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRCSnapshotResponse
 */
CreateRCSnapshotResponse Client::createRCSnapshotWithOptions(const CreateRCSnapshotRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDiskId()) {
    query["DiskId"] = request.getDiskId();
  }

  if (!!request.hasInstantAccess()) {
    query["InstantAccess"] = request.getInstantAccess();
  }

  if (!!request.hasInstantAccessRetentionDays()) {
    query["InstantAccessRetentionDays"] = request.getInstantAccessRetentionDays();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasRetentionDays()) {
    query["RetentionDays"] = request.getRetentionDays();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateRCSnapshot"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRCSnapshotResponse>();
}

/**
 * @summary Create a snapshot for a disk.
 *
 * @description You cannot create a snapshot for the specified disk in the following scenarios:
 * - The number of retained manual snapshots for the disk has reached 256.
 * - The previous snapshot creation has not completed.
 * - The instance to which the disk is mounted has never been started.
 * - The instance to which the disk is mounted is not in the **Stopped** or **running** state.
 * When creating a snapshot, note the following:
 * - If snapshot creation has not completed, the snapshot cannot be used to create a custom image (CreateImage).
 * - If the disk is attached to an RDS Custom instance, do not change the instance status during snapshot creation.
 * - You can create snapshots for disks in the **expired** state. If the disk reaches its expiration and release time while a snapshot is being created, the disk will be released and the snapshot in the **Creating** state will be deleted simultaneously.
 *
 * @param request CreateRCSnapshotRequest
 * @return CreateRCSnapshotResponse
 */
CreateRCSnapshotResponse Client::createRCSnapshot(const CreateRCSnapshotRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRCSnapshotWithOptions(request, runtime);
}

/**
 * @summary This API is used to create a read-only instance for an RDS instance.
 *
 * @description ### Supported Engines
 * - RDS MySQL
 * - RDS PostgreSQL
 * - RDS SQL Server
 * ### Related Function Documentation
 * >Notice: Before using this API, carefully read the Function Documentation to fully understand the prerequisites and potential impacts of using this API before proceeding with any operation.
 * - [Create a Read-Only Instance for RDS MySQL](https://help.aliyun.com/document_detail/56991.html)
 * - [Create a DuckDB Analytic Instance for RDS MySQL](https://help.aliyun.com/document_detail/2950002.html)
 * - [Create a Read-Only Instance for RDS PostgreSQL](https://help.aliyun.com/document_detail/108959.html)
 * - [Create a DuckDB Analytic Instance for RDS PostgreSQL](https://help.aliyun.com/document_detail/2977241.html)
 * - [Create a Read-Only Instance for RDS SQL Server](https://help.aliyun.com/document_detail/99005.html)
 *
 * @param request CreateReadOnlyDBInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateReadOnlyDBInstanceResponse
 */
CreateReadOnlyDBInstanceResponse Client::createReadOnlyDBInstanceWithOptions(const CreateReadOnlyDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoCreateProxy()) {
    query["AutoCreateProxy"] = request.getAutoCreateProxy();
  }

  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasAutoUseCoupon()) {
    query["AutoUseCoupon"] = request.getAutoUseCoupon();
  }

  if (!!request.hasBpeEnabled()) {
    query["BpeEnabled"] = request.getBpeEnabled();
  }

  if (!!request.hasBurstingEnabled()) {
    query["BurstingEnabled"] = request.getBurstingEnabled();
  }

  if (!!request.hasCategory()) {
    query["Category"] = request.getCategory();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCustomExtraInfo()) {
    query["CustomExtraInfo"] = request.getCustomExtraInfo();
  }

  if (!!request.hasDBInstanceClass()) {
    query["DBInstanceClass"] = request.getDBInstanceClass();
  }

  if (!!request.hasDBInstanceDescription()) {
    query["DBInstanceDescription"] = request.getDBInstanceDescription();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBInstanceStorage()) {
    query["DBInstanceStorage"] = request.getDBInstanceStorage();
  }

  if (!!request.hasDBInstanceStorageType()) {
    query["DBInstanceStorageType"] = request.getDBInstanceStorageType();
  }

  if (!!request.hasDedicatedHostGroupId()) {
    query["DedicatedHostGroupId"] = request.getDedicatedHostGroupId();
  }

  if (!!request.hasDeletionProtection()) {
    query["DeletionProtection"] = request.getDeletionProtection();
  }

  if (!!request.hasEngineVersion()) {
    query["EngineVersion"] = request.getEngineVersion();
  }

  if (!!request.hasGdnInstanceName()) {
    query["GdnInstanceName"] = request.getGdnInstanceName();
  }

  if (!!request.hasInstanceNetworkType()) {
    query["InstanceNetworkType"] = request.getInstanceNetworkType();
  }

  if (!!request.hasInstructionSetArch()) {
    query["InstructionSetArch"] = request.getInstructionSetArch();
  }

  if (!!request.hasIoAccelerationEnabled()) {
    query["IoAccelerationEnabled"] = request.getIoAccelerationEnabled();
  }

  if (!!request.hasIsAnalyticReadOnlyIns()) {
    query["IsAnalyticReadOnlyIns"] = request.getIsAnalyticReadOnlyIns();
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

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasPrivateIpAddress()) {
    query["PrivateIpAddress"] = request.getPrivateIpAddress();
  }

  if (!!request.hasPromotionCode()) {
    query["PromotionCode"] = request.getPromotionCode();
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

  if (!!request.hasTargetDedicatedHostIdForMaster()) {
    query["TargetDedicatedHostIdForMaster"] = request.getTargetDedicatedHostIdForMaster();
  }

  if (!!request.hasTddlBizType()) {
    query["TddlBizType"] = request.getTddlBizType();
  }

  if (!!request.hasTddlRegionConfig()) {
    query["TddlRegionConfig"] = request.getTddlRegionConfig();
  }

  if (!!request.hasUsedTime()) {
    query["UsedTime"] = request.getUsedTime();
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
    {"action" , "CreateReadOnlyDBInstance"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateReadOnlyDBInstanceResponse>();
}

/**
 * @summary This API is used to create a read-only instance for an RDS instance.
 *
 * @description ### Supported Engines
 * - RDS MySQL
 * - RDS PostgreSQL
 * - RDS SQL Server
 * ### Related Function Documentation
 * >Notice: Before using this API, carefully read the Function Documentation to fully understand the prerequisites and potential impacts of using this API before proceeding with any operation.
 * - [Create a Read-Only Instance for RDS MySQL](https://help.aliyun.com/document_detail/56991.html)
 * - [Create a DuckDB Analytic Instance for RDS MySQL](https://help.aliyun.com/document_detail/2950002.html)
 * - [Create a Read-Only Instance for RDS PostgreSQL](https://help.aliyun.com/document_detail/108959.html)
 * - [Create a DuckDB Analytic Instance for RDS PostgreSQL](https://help.aliyun.com/document_detail/2977241.html)
 * - [Create a Read-Only Instance for RDS SQL Server](https://help.aliyun.com/document_detail/99005.html)
 *
 * @param request CreateReadOnlyDBInstanceRequest
 * @return CreateReadOnlyDBInstanceResponse
 */
CreateReadOnlyDBInstanceResponse Client::createReadOnlyDBInstance(const CreateReadOnlyDBInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createReadOnlyDBInstanceWithOptions(request, runtime);
}

/**
 * @summary 创建复制链路
 *
 * @param request CreateReplicationLinkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateReplicationLinkResponse
 */
CreateReplicationLinkResponse Client::createReplicationLinkWithOptions(const CreateReplicationLinkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasReplicatorAccount()) {
    query["ReplicatorAccount"] = request.getReplicatorAccount();
  }

  if (!!request.hasReplicatorPassword()) {
    query["ReplicatorPassword"] = request.getReplicatorPassword();
  }

  if (!!request.hasSourceAddress()) {
    query["SourceAddress"] = request.getSourceAddress();
  }

  if (!!request.hasSourceCategory()) {
    query["SourceCategory"] = request.getSourceCategory();
  }

  if (!!request.hasSourceInstanceName()) {
    query["SourceInstanceName"] = request.getSourceInstanceName();
  }

  if (!!request.hasSourceInstanceRegionId()) {
    query["SourceInstanceRegionId"] = request.getSourceInstanceRegionId();
  }

  if (!!request.hasSourcePort()) {
    query["SourcePort"] = request.getSourcePort();
  }

  if (!!request.hasTargetAddress()) {
    query["TargetAddress"] = request.getTargetAddress();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.getTaskName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateReplicationLink"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateReplicationLinkResponse>();
}

/**
 * @summary 创建复制链路
 *
 * @param request CreateReplicationLinkRequest
 * @return CreateReplicationLinkResponse
 */
CreateReplicationLinkResponse Client::createReplicationLink(const CreateReplicationLinkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createReplicationLinkWithOptions(request, runtime);
}

/**
 * @summary 创建DataAPI用户凭证
 *
 * @param request CreateSecretRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSecretResponse
 */
CreateSecretResponse Client::createSecretWithOptions(const CreateSecretRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDbInstanceId()) {
    query["DbInstanceId"] = request.getDbInstanceId();
  }

  if (!!request.hasDbNames()) {
    query["DbNames"] = request.getDbNames();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.getEngine();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
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

  if (!!request.hasSecretName()) {
    query["SecretName"] = request.getSecretName();
  }

  if (!!request.hasUsername()) {
    query["Username"] = request.getUsername();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSecret"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSecretResponse>();
}

/**
 * @summary 创建DataAPI用户凭证
 *
 * @param request CreateSecretRequest
 * @return CreateSecretResponse
 */
CreateSecretResponse Client::createSecret(const CreateSecretRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSecretWithOptions(request, runtime);
}

/**
 * @summary 创建服务关联角色
 *
 * @param request CreateServiceLinkedRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateServiceLinkedRoleResponse
 */
CreateServiceLinkedRoleResponse Client::createServiceLinkedRoleWithOptions(const CreateServiceLinkedRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasServiceLinkedRole()) {
    query["ServiceLinkedRole"] = request.getServiceLinkedRole();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateServiceLinkedRole"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateServiceLinkedRoleResponse>();
}

/**
 * @summary 创建服务关联角色
 *
 * @param request CreateServiceLinkedRoleRequest
 * @return CreateServiceLinkedRoleResponse
 */
CreateServiceLinkedRoleResponse Client::createServiceLinkedRole(const CreateServiceLinkedRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createServiceLinkedRoleWithOptions(request, runtime);
}

/**
 * @summary 创建临时实例
 *
 * @param request CreateTempDBInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTempDBInstanceResponse
 */
CreateTempDBInstanceResponse Client::createTempDBInstanceWithOptions(const CreateTempDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupId()) {
    query["BackupId"] = request.getBackupId();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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

  if (!!request.hasRestoreTime()) {
    query["RestoreTime"] = request.getRestoreTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateTempDBInstance"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTempDBInstanceResponse>();
}

/**
 * @summary 创建临时实例
 *
 * @param request CreateTempDBInstanceRequest
 * @return CreateTempDBInstanceResponse
 */
CreateTempDBInstanceResponse Client::createTempDBInstance(const CreateTempDBInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTempDBInstanceWithOptions(request, runtime);
}

/**
 * @summary This API is used to claim a coupon.
 *
 * @param request CreateYouhuiForOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateYouhuiForOrderResponse
 */
CreateYouhuiForOrderResponse Client::createYouhuiForOrderWithOptions(const CreateYouhuiForOrderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActivityId()) {
    query["ActivityId"] = request.getActivityId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPromotionId()) {
    query["PromotionId"] = request.getPromotionId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateYouhuiForOrder"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateYouhuiForOrderResponse>();
}

/**
 * @summary This API is used to claim a coupon.
 *
 * @param request CreateYouhuiForOrderRequest
 * @return CreateYouhuiForOrderResponse
 */
CreateYouhuiForOrderResponse Client::createYouhuiForOrder(const CreateYouhuiForOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createYouhuiForOrderWithOptions(request, runtime);
}

/**
 * @summary 将当前RDS SQL Server实例退出所在域
 *
 * @param request DeleteADSettingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteADSettingResponse
 */
DeleteADSettingResponse Client::deleteADSettingWithOptions(const DeleteADSettingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteADSetting"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteADSettingResponse>();
}

/**
 * @summary 将当前RDS SQL Server实例退出所在域
 *
 * @param request DeleteADSettingRequest
 * @return DeleteADSettingResponse
 */
DeleteADSettingResponse Client::deleteADSetting(const DeleteADSettingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteADSettingWithOptions(request, runtime);
}

/**
 * @summary 删除指定账号
 *
 * @param request DeleteAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAccountResponse
 */
DeleteAccountResponse Client::deleteAccountWithOptions(const DeleteAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.getAccountName();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAccount"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAccountResponse>();
}

/**
 * @summary 删除指定账号
 *
 * @param request DeleteAccountRequest
 * @return DeleteAccountResponse
 */
DeleteAccountResponse Client::deleteAccount(const DeleteAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAccountWithOptions(request, runtime);
}

/**
 * @summary 删除实例备份
 *
 * @param request DeleteBackupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteBackupResponse
 */
DeleteBackupResponse Client::deleteBackupWithOptions(const DeleteBackupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupId()) {
    query["BackupId"] = request.getBackupId();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteBackup"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteBackupResponse>();
}

/**
 * @summary 删除实例备份
 *
 * @param request DeleteBackupRequest
 * @return DeleteBackupResponse
 */
DeleteBackupResponse Client::deleteBackup(const DeleteBackupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteBackupWithOptions(request, runtime);
}

/**
 * @summary 删除备份文件
 *
 * @param request DeleteBackupFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteBackupFileResponse
 */
DeleteBackupFileResponse Client::deleteBackupFileWithOptions(const DeleteBackupFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupId()) {
    query["BackupId"] = request.getBackupId();
  }

  if (!!request.hasBackupTime()) {
    query["BackupTime"] = request.getBackupTime();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.getDBName();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteBackupFile"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteBackupFileResponse>();
}

/**
 * @summary 删除备份文件
 *
 * @param request DeleteBackupFileRequest
 * @return DeleteBackupFileResponse
 */
DeleteBackupFileResponse Client::deleteBackupFile(const DeleteBackupFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteBackupFileWithOptions(request, runtime);
}

/**
 * @summary 释放RDS实例
 *
 * @param request DeleteDBInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDBInstanceResponse
 */
DeleteDBInstanceResponse Client::deleteDBInstanceWithOptions(const DeleteDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasReleasedKeepPolicy()) {
    query["ReleasedKeepPolicy"] = request.getReleasedKeepPolicy();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDBInstance"},
    {"version" , "2014-08-15"},
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
 * @summary 释放RDS实例
 *
 * @param request DeleteDBInstanceRequest
 * @return DeleteDBInstanceResponse
 */
DeleteDBInstanceResponse Client::deleteDBInstance(const DeleteDBInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDBInstanceWithOptions(request, runtime);
}

/**
 * @summary 删除实例的Endpoint
 *
 * @param request DeleteDBInstanceEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDBInstanceEndpointResponse
 */
DeleteDBInstanceEndpointResponse Client::deleteDBInstanceEndpointWithOptions(const DeleteDBInstanceEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceEndpointId()) {
    query["DBInstanceEndpointId"] = request.getDBInstanceEndpointId();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDBInstanceEndpoint"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDBInstanceEndpointResponse>();
}

/**
 * @summary 删除实例的Endpoint
 *
 * @param request DeleteDBInstanceEndpointRequest
 * @return DeleteDBInstanceEndpointResponse
 */
DeleteDBInstanceEndpointResponse Client::deleteDBInstanceEndpoint(const DeleteDBInstanceEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDBInstanceEndpointWithOptions(request, runtime);
}

/**
 * @summary 删除实例的Endpoint连接地址
 *
 * @param request DeleteDBInstanceEndpointAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDBInstanceEndpointAddressResponse
 */
DeleteDBInstanceEndpointAddressResponse Client::deleteDBInstanceEndpointAddressWithOptions(const DeleteDBInstanceEndpointAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  json body = {};
  if (!!request.hasConnectionString()) {
    body["ConnectionString"] = request.getConnectionString();
  }

  if (!!request.hasDBInstanceEndpointId()) {
    body["DBInstanceEndpointId"] = request.getDBInstanceEndpointId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteDBInstanceEndpointAddress"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDBInstanceEndpointAddressResponse>();
}

/**
 * @summary 删除实例的Endpoint连接地址
 *
 * @param request DeleteDBInstanceEndpointAddressRequest
 * @return DeleteDBInstanceEndpointAddressResponse
 */
DeleteDBInstanceEndpointAddressResponse Client::deleteDBInstanceEndpointAddress(const DeleteDBInstanceEndpointAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDBInstanceEndpointAddressWithOptions(request, runtime);
}

/**
 * @summary Delete a replication link from a native replication instance
 *
 * @param request DeleteDBInstanceReplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDBInstanceReplicationResponse
 */
DeleteDBInstanceReplicationResponse Client::deleteDBInstanceReplicationWithOptions(const DeleteDBInstanceReplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChannelName()) {
    query["ChannelName"] = request.getChannelName();
  }

  if (!!request.hasDbInstanceId()) {
    query["DbInstanceId"] = request.getDbInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDBInstanceReplication"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDBInstanceReplicationResponse>();
}

/**
 * @summary Delete a replication link from a native replication instance
 *
 * @param request DeleteDBInstanceReplicationRequest
 * @return DeleteDBInstanceReplicationResponse
 */
DeleteDBInstanceReplicationResponse Client::deleteDBInstanceReplication(const DeleteDBInstanceReplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDBInstanceReplicationWithOptions(request, runtime);
}

/**
 * @summary 删除实例主机安全组规则
 *
 * @param request DeleteDBInstanceSecurityGroupRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDBInstanceSecurityGroupRuleResponse
 */
DeleteDBInstanceSecurityGroupRuleResponse Client::deleteDBInstanceSecurityGroupRuleWithOptions(const DeleteDBInstanceSecurityGroupRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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

  if (!!request.hasSecurityGroupRuleIds()) {
    query["SecurityGroupRuleIds"] = request.getSecurityGroupRuleIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDBInstanceSecurityGroupRule"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDBInstanceSecurityGroupRuleResponse>();
}

/**
 * @summary 删除实例主机安全组规则
 *
 * @param request DeleteDBInstanceSecurityGroupRuleRequest
 * @return DeleteDBInstanceSecurityGroupRuleResponse
 */
DeleteDBInstanceSecurityGroupRuleResponse Client::deleteDBInstanceSecurityGroupRule(const DeleteDBInstanceSecurityGroupRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDBInstanceSecurityGroupRuleWithOptions(request, runtime);
}

/**
 * @summary category cluster delete node
 *
 * @param tmpReq DeleteDBNodesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDBNodesResponse
 */
DeleteDBNodesResponse Client::deleteDBNodesWithOptions(const DeleteDBNodesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteDBNodesShrinkRequest request = DeleteDBNodesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDBNodeId()) {
    request.setDBNodeIdShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDBNodeId(), "DBNodeId", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBNodeIdShrink()) {
    query["DBNodeId"] = request.getDBNodeIdShrink();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDBNodes"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDBNodesResponse>();
}

/**
 * @summary category cluster delete node
 *
 * @param request DeleteDBNodesRequest
 * @return DeleteDBNodesResponse
 */
DeleteDBNodesResponse Client::deleteDBNodes(const DeleteDBNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDBNodesWithOptions(request, runtime);
}

/**
 * @summary 删除RDS实例数据库代理的连接地址
 *
 * @param request DeleteDBProxyEndpointAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDBProxyEndpointAddressResponse
 */
DeleteDBProxyEndpointAddressResponse Client::deleteDBProxyEndpointAddressWithOptions(const DeleteDBProxyEndpointAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBProxyConnectStringNetType()) {
    query["DBProxyConnectStringNetType"] = request.getDBProxyConnectStringNetType();
  }

  if (!!request.hasDBProxyEndpointId()) {
    query["DBProxyEndpointId"] = request.getDBProxyEndpointId();
  }

  if (!!request.hasDBProxyEngineType()) {
    query["DBProxyEngineType"] = request.getDBProxyEngineType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDBProxyEndpointAddress"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDBProxyEndpointAddressResponse>();
}

/**
 * @summary 删除RDS实例数据库代理的连接地址
 *
 * @param request DeleteDBProxyEndpointAddressRequest
 * @return DeleteDBProxyEndpointAddressResponse
 */
DeleteDBProxyEndpointAddressResponse Client::deleteDBProxyEndpointAddress(const DeleteDBProxyEndpointAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDBProxyEndpointAddressWithOptions(request, runtime);
}

/**
 * @summary 删除指定DB
 *
 * @param request DeleteDatabaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDatabaseResponse
 */
DeleteDatabaseResponse Client::deleteDatabaseWithOptions(const DeleteDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.getDBName();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDatabase"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDatabaseResponse>();
}

/**
 * @summary 删除指定DB
 *
 * @param request DeleteDatabaseRequest
 * @return DeleteDatabaseResponse
 */
DeleteDatabaseResponse Client::deleteDatabase(const DeleteDatabaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDatabaseWithOptions(request, runtime);
}

/**
 * @summary DeleteGadInstance
 *
 * @param request DeleteGadInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteGadInstanceResponse
 */
DeleteGadInstanceResponse Client::deleteGadInstanceWithOptions(const DeleteGadInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGadInstanceName()) {
    query["GadInstanceName"] = request.getGadInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteGadInstance"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteGadInstanceResponse>();
}

/**
 * @summary DeleteGadInstance
 *
 * @param request DeleteGadInstanceRequest
 * @return DeleteGadInstanceResponse
 */
DeleteGadInstanceResponse Client::deleteGadInstance(const DeleteGadInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteGadInstanceWithOptions(request, runtime);
}

/**
 * @summary Deletes the encryption or desensitization rule for a specified instance.
 *
 * @description ## Request Description
 * - Before using this API, ensure that you have activated the column encryption service in DAS Security Center.
 * - If you receive the error message ColumnEncryptionErrorCode.NOT_PURCHASED when invoking the API, go to the DAS (Database Autonomy Service) Security Center to purchase and activate the column encryption service before using this API again.
 *
 * @param request DeleteMaskingRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMaskingRulesResponse
 */
DeleteMaskingRulesResponse Client::deleteMaskingRulesWithOptions(const DeleteMaskingRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.getDBName();
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

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMaskingRules"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMaskingRulesResponse>();
}

/**
 * @summary Deletes the encryption or desensitization rule for a specified instance.
 *
 * @description ## Request Description
 * - Before using this API, ensure that you have activated the column encryption service in DAS Security Center.
 * - If you receive the error message ColumnEncryptionErrorCode.NOT_PURCHASED when invoking the API, go to the DAS (Database Autonomy Service) Security Center to purchase and activate the column encryption service before using this API again.
 *
 * @param request DeleteMaskingRulesRequest
 * @return DeleteMaskingRulesResponse
 */
DeleteMaskingRulesResponse Client::deleteMaskingRules(const DeleteMaskingRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMaskingRulesWithOptions(request, runtime);
}

/**
 * @summary 删除指定参数模板
 *
 * @param request DeleteParameterGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteParameterGroupResponse
 */
DeleteParameterGroupResponse Client::deleteParameterGroupWithOptions(const DeleteParameterGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasParameterGroupId()) {
    query["ParameterGroupId"] = request.getParameterGroupId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteParameterGroup"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteParameterGroupResponse>();
}

/**
 * @summary 删除指定参数模板
 *
 * @param request DeleteParameterGroupRequest
 * @return DeleteParameterGroupResponse
 */
DeleteParameterGroupResponse Client::deleteParameterGroup(const DeleteParameterGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteParameterGroupWithOptions(request, runtime);
}

/**
 * @summary Delete a scheduled task for modifying instance parameters.
 *
 * @description ### Applicable Engines
 * - RDS MySQL
 * - RDS PostgreSQL
 * ### Related Function Documentation
 * >Notice: Before using this API, carefully read the Function Documentation to fully understand the prerequisites for using the API and the Impact of its use before performing any operation.
 * - [Set Instance Parameters for RDS MySQL](https://help.aliyun.com/document_detail/96063.html)
 * - [Set Instance Parameters for RDS PostgreSQL](https://help.aliyun.com/document_detail/96751.html)
 *
 * @param request DeleteParameterTimedScheduleTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteParameterTimedScheduleTaskResponse
 */
DeleteParameterTimedScheduleTaskResponse Client::deleteParameterTimedScheduleTaskWithOptions(const DeleteParameterTimedScheduleTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteParameterTimedScheduleTask"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteParameterTimedScheduleTaskResponse>();
}

/**
 * @summary Delete a scheduled task for modifying instance parameters.
 *
 * @description ### Applicable Engines
 * - RDS MySQL
 * - RDS PostgreSQL
 * ### Related Function Documentation
 * >Notice: Before using this API, carefully read the Function Documentation to fully understand the prerequisites for using the API and the Impact of its use before performing any operation.
 * - [Set Instance Parameters for RDS MySQL](https://help.aliyun.com/document_detail/96063.html)
 * - [Set Instance Parameters for RDS PostgreSQL](https://help.aliyun.com/document_detail/96751.html)
 *
 * @param request DeleteParameterTimedScheduleTaskRequest
 * @return DeleteParameterTimedScheduleTaskResponse
 */
DeleteParameterTimedScheduleTaskResponse Client::deleteParameterTimedScheduleTask(const DeleteParameterTimedScheduleTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteParameterTimedScheduleTaskWithOptions(request, runtime);
}

/**
 * @summary 删除插件
 *
 * @param request DeletePostgresExtensionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePostgresExtensionsResponse
 */
DeletePostgresExtensionsResponse Client::deletePostgresExtensionsWithOptions(const DeletePostgresExtensionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBNames()) {
    query["DBNames"] = request.getDBNames();
  }

  if (!!request.hasExtensions()) {
    query["Extensions"] = request.getExtensions();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePostgresExtensions"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePostgresExtensionsResponse>();
}

/**
 * @summary 删除插件
 *
 * @param request DeletePostgresExtensionsRequest
 * @return DeletePostgresExtensionsResponse
 */
DeletePostgresExtensionsResponse Client::deletePostgresExtensions(const DeletePostgresExtensionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePostgresExtensionsWithOptions(request, runtime);
}

/**
 * @summary 移除集群中的节点
 *
 * @param tmpReq DeleteRCClusterNodesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRCClusterNodesResponse
 */
DeleteRCClusterNodesResponse Client::deleteRCClusterNodesWithOptions(const DeleteRCClusterNodesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteRCClusterNodesShrinkRequest request = DeleteRCClusterNodesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInstanceIds()) {
    request.setInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInstanceIds(), "InstanceIds", "simple"));
  }

  if (!!tmpReq.hasNodes()) {
    request.setNodesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNodes(), "Nodes", "simple"));
  }

  json query = {};
  if (!!request.hasInstanceIdsShrink()) {
    query["InstanceIds"] = request.getInstanceIdsShrink();
  }

  if (!!request.hasNodesShrink()) {
    query["Nodes"] = request.getNodesShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRCClusterNodes"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRCClusterNodesResponse>();
}

/**
 * @summary 移除集群中的节点
 *
 * @param request DeleteRCClusterNodesRequest
 * @return DeleteRCClusterNodesResponse
 */
DeleteRCClusterNodesResponse Client::deleteRCClusterNodes(const DeleteRCClusterNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRCClusterNodesWithOptions(request, runtime);
}

/**
 * @summary 删除RDS CUSTOM部署集
 *
 * @param request DeleteRCDeploymentSetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRCDeploymentSetResponse
 */
DeleteRCDeploymentSetResponse Client::deleteRCDeploymentSetWithOptions(const DeleteRCDeploymentSetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeploymentSetId()) {
    query["DeploymentSetId"] = request.getDeploymentSetId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRCDeploymentSet"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRCDeploymentSetResponse>();
}

/**
 * @summary 删除RDS CUSTOM部署集
 *
 * @param request DeleteRCDeploymentSetRequest
 * @return DeleteRCDeploymentSetResponse
 */
DeleteRCDeploymentSetResponse Client::deleteRCDeploymentSet(const DeleteRCDeploymentSetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRCDeploymentSetWithOptions(request, runtime);
}

/**
 * @summary 删除RC云盘
 *
 * @param request DeleteRCDiskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRCDiskResponse
 */
DeleteRCDiskResponse Client::deleteRCDiskWithOptions(const DeleteRCDiskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDiskId()) {
    query["DiskId"] = request.getDiskId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRCDisk"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRCDiskResponse>();
}

/**
 * @summary 删除RC云盘
 *
 * @param request DeleteRCDiskRequest
 * @return DeleteRCDiskResponse
 */
DeleteRCDiskResponse Client::deleteRCDisk(const DeleteRCDiskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRCDiskWithOptions(request, runtime);
}

/**
 * @summary 删除RDS用户专属主机实例
 *
 * @param request DeleteRCInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRCInstanceResponse
 */
DeleteRCInstanceResponse Client::deleteRCInstanceWithOptions(const DeleteRCInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasForce()) {
    query["Force"] = request.getForce();
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
    {"action" , "DeleteRCInstance"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRCInstanceResponse>();
}

/**
 * @summary 删除RDS用户专属主机实例
 *
 * @param request DeleteRCInstanceRequest
 * @return DeleteRCInstanceResponse
 */
DeleteRCInstanceResponse Client::deleteRCInstance(const DeleteRCInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRCInstanceWithOptions(request, runtime);
}

/**
 * @summary 批量删除RDS用户专属主机实例
 *
 * @param tmpReq DeleteRCInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRCInstancesResponse
 */
DeleteRCInstancesResponse Client::deleteRCInstancesWithOptions(const DeleteRCInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteRCInstancesShrinkRequest request = DeleteRCInstancesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInstanceId()) {
    request.setInstanceIdShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInstanceId(), "InstanceId", "json"));
  }

  json query = {};
  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasForce()) {
    query["Force"] = request.getForce();
  }

  if (!!request.hasInstanceIdShrink()) {
    query["InstanceId"] = request.getInstanceIdShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTerminateSubscription()) {
    query["TerminateSubscription"] = request.getTerminateSubscription();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRCInstances"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRCInstancesResponse>();
}

/**
 * @summary 批量删除RDS用户专属主机实例
 *
 * @param request DeleteRCInstancesRequest
 * @return DeleteRCInstancesResponse
 */
DeleteRCInstancesResponse Client::deleteRCInstances(const DeleteRCInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRCInstancesWithOptions(request, runtime);
}

/**
 * @summary 删除RC模版
 *
 * @param request DeleteRCNodePoolRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRCNodePoolResponse
 */
DeleteRCNodePoolResponse Client::deleteRCNodePoolWithOptions(const DeleteRCNodePoolRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasNodePoolId()) {
    query["NodePoolId"] = request.getNodePoolId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRCNodePool"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRCNodePoolResponse>();
}

/**
 * @summary 删除RC模版
 *
 * @param request DeleteRCNodePoolRequest
 * @return DeleteRCNodePoolResponse
 */
DeleteRCNodePoolResponse Client::deleteRCNodePool(const DeleteRCNodePoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRCNodePoolWithOptions(request, runtime);
}

/**
 * @summary Deletes a cloud disk snapshot.
 *
 * @param request DeleteRCSnapshotRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRCSnapshotResponse
 */
DeleteRCSnapshotResponse Client::deleteRCSnapshotWithOptions(const DeleteRCSnapshotRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasForce()) {
    query["Force"] = request.getForce();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSnapshotId()) {
    query["SnapshotId"] = request.getSnapshotId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRCSnapshot"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRCSnapshotResponse>();
}

/**
 * @summary Deletes a cloud disk snapshot.
 *
 * @param request DeleteRCSnapshotRequest
 * @return DeleteRCSnapshotResponse
 */
DeleteRCSnapshotResponse Client::deleteRCSnapshot(const DeleteRCSnapshotRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRCSnapshotWithOptions(request, runtime);
}

/**
 * @summary RCVCluster删除接口
 *
 * @param request DeleteRCVClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRCVClusterResponse
 */
DeleteRCVClusterResponse Client::deleteRCVClusterWithOptions(const DeleteRCVClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRCVCluster"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRCVClusterResponse>();
}

/**
 * @summary RCVCluster删除接口
 *
 * @param request DeleteRCVClusterRequest
 * @return DeleteRCVClusterResponse
 */
DeleteRCVClusterResponse Client::deleteRCVCluster(const DeleteRCVClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRCVClusterWithOptions(request, runtime);
}

/**
 * @summary 删除复制链路
 *
 * @param request DeleteReplicationLinkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteReplicationLinkResponse
 */
DeleteReplicationLinkResponse Client::deleteReplicationLinkWithOptions(const DeleteReplicationLinkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasPromoteToMaster()) {
    query["PromoteToMaster"] = request.getPromoteToMaster();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteReplicationLink"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteReplicationLinkResponse>();
}

/**
 * @summary 删除复制链路
 *
 * @param request DeleteReplicationLinkRequest
 * @return DeleteReplicationLinkResponse
 */
DeleteReplicationLinkResponse Client::deleteReplicationLink(const DeleteReplicationLinkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteReplicationLinkWithOptions(request, runtime);
}

/**
 * @summary 删除Data API的用户凭证
 *
 * @param request DeleteSecretRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSecretResponse
 */
DeleteSecretResponse Client::deleteSecretWithOptions(const DeleteSecretRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDbInstanceId()) {
    query["DbInstanceId"] = request.getDbInstanceId();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.getEngine();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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

  if (!!request.hasSecretArn()) {
    query["SecretArn"] = request.getSecretArn();
  }

  if (!!request.hasSecretName()) {
    query["SecretName"] = request.getSecretName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSecret"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSecretResponse>();
}

/**
 * @summary 删除Data API的用户凭证
 *
 * @param request DeleteSecretRequest
 * @return DeleteSecretResponse
 */
DeleteSecretResponse Client::deleteSecret(const DeleteSecretRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSecretWithOptions(request, runtime);
}

/**
 * @summary 删除实例复制槽
 *
 * @param request DeleteSlotRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSlotResponse
 */
DeleteSlotResponse Client::deleteSlotWithOptions(const DeleteSlotRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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

  if (!!request.hasSlotName()) {
    query["SlotName"] = request.getSlotName();
  }

  if (!!request.hasSlotStatus()) {
    query["SlotStatus"] = request.getSlotStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSlot"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSlotResponse>();
}

/**
 * @summary 删除实例复制槽
 *
 * @param request DeleteSlotRequest
 * @return DeleteSlotResponse
 */
DeleteSlotResponse Client::deleteSlot(const DeleteSlotRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSlotWithOptions(request, runtime);
}

/**
 * @summary 删除目标用户备份
 *
 * @param request DeleteUserBackupFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUserBackupFileResponse
 */
DeleteUserBackupFileResponse Client::deleteUserBackupFileWithOptions(const DeleteUserBackupFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupId()) {
    query["BackupId"] = request.getBackupId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteUserBackupFile"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteUserBackupFileResponse>();
}

/**
 * @summary 删除目标用户备份
 *
 * @param request DeleteUserBackupFileRequest
 * @return DeleteUserBackupFileResponse
 */
DeleteUserBackupFileResponse Client::deleteUserBackupFile(const DeleteUserBackupFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteUserBackupFileWithOptions(request, runtime);
}

/**
 * @summary 查询数据库迁移列表
 *
 * @param request DescibeImportsFromDatabaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescibeImportsFromDatabaseResponse
 */
DescibeImportsFromDatabaseResponse Client::descibeImportsFromDatabaseWithOptions(const DescibeImportsFromDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.getEngine();
  }

  if (!!request.hasImportId()) {
    query["ImportId"] = request.getImportId();
  }

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

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescibeImportsFromDatabase"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescibeImportsFromDatabaseResponse>();
}

/**
 * @summary 查询数据库迁移列表
 *
 * @param request DescibeImportsFromDatabaseRequest
 * @return DescibeImportsFromDatabaseResponse
 */
DescibeImportsFromDatabaseResponse Client::descibeImportsFromDatabase(const DescibeImportsFromDatabaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return descibeImportsFromDatabaseWithOptions(request, runtime);
}

/**
 * @summary 查询当前实例域相关信息, 包括是否已经加入域、域名称、所使用账号等
 *
 * @param request DescribeADInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeADInfoResponse
 */
DescribeADInfoResponse Client::describeADInfoWithOptions(const DescribeADInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeADInfo"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeADInfoResponse>();
}

/**
 * @summary 查询当前实例域相关信息, 包括是否已经加入域、域名称、所使用账号等
 *
 * @param request DescribeADInfoRequest
 * @return DescribeADInfoResponse
 */
DescribeADInfoResponse Client::describeADInfo(const DescribeADInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeADInfoWithOptions(request, runtime);
}

/**
 * @summary Query the encryption or data masking permission configuration of an account in a specified instance.
 *
 * @description ## Request Description
 * - Before invoking this API, ensure that you have activated the column encryption service in DAS Security Center.
 * - If you receive the error message ColumnEncryptionErrorCode.NOT_PURCHASED when invoking the API, go to the DAS (Database Autonomy Service) Security Center to purchase and activate the column encryption service before using it.
 *
 * @param request DescribeAccountMaskingPrivilegeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAccountMaskingPrivilegeResponse
 */
DescribeAccountMaskingPrivilegeResponse Client::describeAccountMaskingPrivilegeWithOptions(const DescribeAccountMaskingPrivilegeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.getDBName();
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

  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAccountMaskingPrivilege"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAccountMaskingPrivilegeResponse>();
}

/**
 * @summary Query the encryption or data masking permission configuration of an account in a specified instance.
 *
 * @description ## Request Description
 * - Before invoking this API, ensure that you have activated the column encryption service in DAS Security Center.
 * - If you receive the error message ColumnEncryptionErrorCode.NOT_PURCHASED when invoking the API, go to the DAS (Database Autonomy Service) Security Center to purchase and activate the column encryption service before using it.
 *
 * @param request DescribeAccountMaskingPrivilegeRequest
 * @return DescribeAccountMaskingPrivilegeResponse
 */
DescribeAccountMaskingPrivilegeResponse Client::describeAccountMaskingPrivilege(const DescribeAccountMaskingPrivilegeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAccountMaskingPrivilegeWithOptions(request, runtime);
}

/**
 * @summary 查询实例的账号列表
 *
 * @param request DescribeAccountsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAccountsResponse
 */
DescribeAccountsResponse Client::describeAccountsWithOptions(const DescribeAccountsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.getAccountName();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAccounts"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAccountsResponse>();
}

/**
 * @summary 查询实例的账号列表
 *
 * @param request DescribeAccountsRequest
 * @return DescribeAccountsResponse
 */
DescribeAccountsResponse Client::describeAccounts(const DescribeAccountsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAccountsWithOptions(request, runtime);
}

/**
 * @summary 查询RDS历史事件功能是否开启
 *
 * @param request DescribeActionEventPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeActionEventPolicyResponse
 */
DescribeActionEventPolicyResponse Client::describeActionEventPolicyWithOptions(const DescribeActionEventPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeActionEventPolicy"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeActionEventPolicyResponse>();
}

/**
 * @summary 查询RDS历史事件功能是否开启
 *
 * @param request DescribeActionEventPolicyRequest
 * @return DescribeActionEventPolicyResponse
 */
DescribeActionEventPolicyResponse Client::describeActionEventPolicy(const DescribeActionEventPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeActionEventPolicyWithOptions(request, runtime);
}

/**
 * @summary Obtain the user\\"s O\\&M configuration information, which currently includes scheduled management event time window information.
 *
 * @param request DescribeActiveOperationMaintainConfRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeActiveOperationMaintainConfResponse
 */
DescribeActiveOperationMaintainConfResponse Client::describeActiveOperationMaintainConfWithOptions(const DescribeActiveOperationMaintainConfRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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
    {"action" , "DescribeActiveOperationMaintainConf"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeActiveOperationMaintainConfResponse>();
}

/**
 * @summary Obtain the user\\"s O\\&M configuration information, which currently includes scheduled management event time window information.
 *
 * @param request DescribeActiveOperationMaintainConfRequest
 * @return DescribeActiveOperationMaintainConfResponse
 */
DescribeActiveOperationMaintainConfResponse Client::describeActiveOperationMaintainConf(const DescribeActiveOperationMaintainConfRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeActiveOperationMaintainConfWithOptions(request, runtime);
}

/**
 * @summary 查询主动运维任务列表
 *
 * @param request DescribeActiveOperationTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeActiveOperationTasksResponse
 */
DescribeActiveOperationTasksResponse Client::describeActiveOperationTasksWithOptions(const DescribeActiveOperationTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAllowCancel()) {
    query["AllowCancel"] = request.getAllowCancel();
  }

  if (!!request.hasAllowChange()) {
    query["AllowChange"] = request.getAllowChange();
  }

  if (!!request.hasChangeLevel()) {
    query["ChangeLevel"] = request.getChangeLevel();
  }

  if (!!request.hasDbType()) {
    query["DbType"] = request.getDbType();
  }

  if (!!request.hasInsName()) {
    query["InsName"] = request.getInsName();
  }

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

  if (!!request.hasProductId()) {
    query["ProductId"] = request.getProductId();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
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

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.getTaskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeActiveOperationTasks"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeActiveOperationTasksResponse>();
}

/**
 * @summary 查询主动运维任务列表
 *
 * @param request DescribeActiveOperationTasksRequest
 * @return DescribeActiveOperationTasksResponse
 */
DescribeActiveOperationTasksResponse Client::describeActiveOperationTasks(const DescribeActiveOperationTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeActiveOperationTasksWithOptions(request, runtime);
}

/**
 * @summary 批量获取白名单模板
 *
 * @param request DescribeAllWhitelistTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAllWhitelistTemplateResponse
 */
DescribeAllWhitelistTemplateResponse Client::describeAllWhitelistTemplateWithOptions(const DescribeAllWhitelistTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFuzzySearch()) {
    query["FuzzySearch"] = request.getFuzzySearch();
  }

  if (!!request.hasMaxRecordsPerPage()) {
    query["MaxRecordsPerPage"] = request.getMaxRecordsPerPage();
  }

  if (!!request.hasPageNumbers()) {
    query["PageNumbers"] = request.getPageNumbers();
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

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.getTemplateName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAllWhitelistTemplate"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAllWhitelistTemplateResponse>();
}

/**
 * @summary 批量获取白名单模板
 *
 * @param request DescribeAllWhitelistTemplateRequest
 * @return DescribeAllWhitelistTemplateResponse
 */
DescribeAllWhitelistTemplateResponse Client::describeAllWhitelistTemplate(const DescribeAllWhitelistTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAllWhitelistTemplateWithOptions(request, runtime);
}

/**
 * @summary Queries the number of analytic instances that are associated with an ApsaraDB RDS for MySQL instance.
 *
 * @description ### 适用引擎
 * RDS MySQL
 * ### 相关功能文档
 * <props="china">[创建和查看MySQL分析实例](https://help.aliyun.com/document_detail/155180.html)
 *
 * @param request DescribeAnalyticdbByPrimaryDBInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAnalyticdbByPrimaryDBInstanceResponse
 */
DescribeAnalyticdbByPrimaryDBInstanceResponse Client::describeAnalyticdbByPrimaryDBInstanceWithOptions(const DescribeAnalyticdbByPrimaryDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAnalyticdbByPrimaryDBInstance"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAnalyticdbByPrimaryDBInstanceResponse>();
}

/**
 * @summary Queries the number of analytic instances that are associated with an ApsaraDB RDS for MySQL instance.
 *
 * @description ### 适用引擎
 * RDS MySQL
 * ### 相关功能文档
 * <props="china">[创建和查看MySQL分析实例](https://help.aliyun.com/document_detail/155180.html)
 *
 * @param request DescribeAnalyticdbByPrimaryDBInstanceRequest
 * @return DescribeAnalyticdbByPrimaryDBInstanceResponse
 */
DescribeAnalyticdbByPrimaryDBInstanceResponse Client::describeAnalyticdbByPrimaryDBInstance(const DescribeAnalyticdbByPrimaryDBInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAnalyticdbByPrimaryDBInstanceWithOptions(request, runtime);
}

/**
 * @summary 查询实例可购买规格，包括规格代码和存储空间
 *
 * @param request DescribeAvailableClassesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAvailableClassesResponse
 */
DescribeAvailableClassesResponse Client::describeAvailableClassesWithOptions(const DescribeAvailableClassesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategory()) {
    query["Category"] = request.getCategory();
  }

  if (!!request.hasCommodityCode()) {
    query["CommodityCode"] = request.getCommodityCode();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBInstanceStorageType()) {
    query["DBInstanceStorageType"] = request.getDBInstanceStorageType();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.getEngine();
  }

  if (!!request.hasEngineVersion()) {
    query["EngineVersion"] = request.getEngineVersion();
  }

  if (!!request.hasInstanceChargeType()) {
    query["InstanceChargeType"] = request.getInstanceChargeType();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAvailableClasses"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAvailableClassesResponse>();
}

/**
 * @summary 查询实例可购买规格，包括规格代码和存储空间
 *
 * @param request DescribeAvailableClassesRequest
 * @return DescribeAvailableClassesResponse
 */
DescribeAvailableClassesResponse Client::describeAvailableClasses(const DescribeAvailableClassesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAvailableClassesWithOptions(request, runtime);
}

/**
 * @summary 查询可用的跨地域信息
 *
 * @param request DescribeAvailableCrossRegionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAvailableCrossRegionResponse
 */
DescribeAvailableCrossRegionResponse Client::describeAvailableCrossRegionWithOptions(const DescribeAvailableCrossRegionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAvailableCrossRegion"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAvailableCrossRegionResponse>();
}

/**
 * @summary 查询可用的跨地域信息
 *
 * @param request DescribeAvailableCrossRegionRequest
 * @return DescribeAvailableCrossRegionResponse
 */
DescribeAvailableCrossRegionResponse Client::describeAvailableCrossRegion(const DescribeAvailableCrossRegionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAvailableCrossRegionWithOptions(request, runtime);
}

/**
 * @summary 查询可用的指标
 *
 * @param request DescribeAvailableMetricsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAvailableMetricsResponse
 */
DescribeAvailableMetricsResponse Client::describeAvailableMetricsWithOptions(const DescribeAvailableMetricsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAvailableMetrics"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAvailableMetricsResponse>();
}

/**
 * @summary 查询可用的指标
 *
 * @param request DescribeAvailableMetricsRequest
 * @return DescribeAvailableMetricsResponse
 */
DescribeAvailableMetricsResponse Client::describeAvailableMetrics(const DescribeAvailableMetricsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAvailableMetricsWithOptions(request, runtime);
}

/**
 * @summary 查询某跨地域备份文件可恢复哪个时间段的数据
 *
 * @param request DescribeAvailableRecoveryTimeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAvailableRecoveryTimeResponse
 */
DescribeAvailableRecoveryTimeResponse Client::describeAvailableRecoveryTimeWithOptions(const DescribeAvailableRecoveryTimeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCrossBackupId()) {
    query["CrossBackupId"] = request.getCrossBackupId();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAvailableRecoveryTime"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAvailableRecoveryTimeResponse>();
}

/**
 * @summary 查询某跨地域备份文件可恢复哪个时间段的数据
 *
 * @param request DescribeAvailableRecoveryTimeRequest
 * @return DescribeAvailableRecoveryTimeResponse
 */
DescribeAvailableRecoveryTimeResponse Client::describeAvailableRecoveryTime(const DescribeAvailableRecoveryTimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAvailableRecoveryTimeWithOptions(request, runtime);
}

/**
 * @summary 查询可用区列表
 *
 * @param request DescribeAvailableZonesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAvailableZonesResponse
 */
DescribeAvailableZonesResponse Client::describeAvailableZonesWithOptions(const DescribeAvailableZonesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategory()) {
    query["Category"] = request.getCategory();
  }

  if (!!request.hasCommodityCode()) {
    query["CommodityCode"] = request.getCommodityCode();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasDispenseMode()) {
    query["DispenseMode"] = request.getDispenseMode();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.getEngine();
  }

  if (!!request.hasEngineVersion()) {
    query["EngineVersion"] = request.getEngineVersion();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAvailableZones"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAvailableZonesResponse>();
}

/**
 * @summary 查询可用区列表
 *
 * @param request DescribeAvailableZonesRequest
 * @return DescribeAvailableZonesResponse
 */
DescribeAvailableZonesResponse Client::describeAvailableZones(const DescribeAvailableZonesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAvailableZonesWithOptions(request, runtime);
}

/**
 * @summary 查询数据库备份
 *
 * @param request DescribeBackupDatabaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBackupDatabaseResponse
 */
DescribeBackupDatabaseResponse Client::describeBackupDatabaseWithOptions(const DescribeBackupDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupId()) {
    query["BackupId"] = request.getBackupId();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBackupDatabase"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBackupDatabaseResponse>();
}

/**
 * @summary 查询数据库备份
 *
 * @param request DescribeBackupDatabaseRequest
 * @return DescribeBackupDatabaseResponse
 */
DescribeBackupDatabaseResponse Client::describeBackupDatabase(const DescribeBackupDatabaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupDatabaseWithOptions(request, runtime);
}

/**
 * @summary 查询实例备份设置
 *
 * @param request DescribeBackupPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBackupPolicyResponse
 */
DescribeBackupPolicyResponse Client::describeBackupPolicyWithOptions(const DescribeBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupPolicyMode()) {
    query["BackupPolicyMode"] = request.getBackupPolicyMode();
  }

  if (!!request.hasCompressType()) {
    query["CompressType"] = request.getCompressType();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasReleasedKeepPolicy()) {
    query["ReleasedKeepPolicy"] = request.getReleasedKeepPolicy();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBackupPolicy"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBackupPolicyResponse>();
}

/**
 * @summary 查询实例备份设置
 *
 * @param request DescribeBackupPolicyRequest
 * @return DescribeBackupPolicyResponse
 */
DescribeBackupPolicyResponse Client::describeBackupPolicy(const DescribeBackupPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupPolicyWithOptions(request, runtime);
}

/**
 * @summary 查询备份任务列表
 *
 * @param request DescribeBackupTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBackupTasksResponse
 */
DescribeBackupTasksResponse Client::describeBackupTasksWithOptions(const DescribeBackupTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupJobId()) {
    query["BackupJobId"] = request.getBackupJobId();
  }

  if (!!request.hasBackupJobStatus()) {
    query["BackupJobStatus"] = request.getBackupJobStatus();
  }

  if (!!request.hasBackupMode()) {
    query["BackupMode"] = request.getBackupMode();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasFlag()) {
    query["Flag"] = request.getFlag();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBackupTasks"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBackupTasksResponse>();
}

/**
 * @summary 查询备份任务列表
 *
 * @param request DescribeBackupTasksRequest
 * @return DescribeBackupTasksResponse
 */
DescribeBackupTasksResponse Client::describeBackupTasks(const DescribeBackupTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupTasksWithOptions(request, runtime);
}

/**
 * @summary This API is used to view the backup set list of an RDS instance.
 *
 * @description ### Supported Engines
 * - RDS MySQL
 * - RDS PostgreSQL
 * - RDS SQL Server
 * - RDS MariaDB
 *
 * @param request DescribeBackupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBackupsResponse
 */
DescribeBackupsResponse Client::describeBackupsWithOptions(const DescribeBackupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupId()) {
    query["BackupId"] = request.getBackupId();
  }

  if (!!request.hasBackupMode()) {
    query["BackupMode"] = request.getBackupMode();
  }

  if (!!request.hasBackupStatus()) {
    query["BackupStatus"] = request.getBackupStatus();
  }

  if (!!request.hasBackupType()) {
    query["BackupType"] = request.getBackupType();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBackups"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBackupsResponse>();
}

/**
 * @summary This API is used to view the backup set list of an RDS instance.
 *
 * @description ### Supported Engines
 * - RDS MySQL
 * - RDS PostgreSQL
 * - RDS SQL Server
 * - RDS MariaDB
 *
 * @param request DescribeBackupsRequest
 * @return DescribeBackupsResponse
 */
DescribeBackupsResponse Client::describeBackups(const DescribeBackupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupsWithOptions(request, runtime);
}

/**
 * @summary 查询binlog文件
 *
 * @param request DescribeBinlogFilesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBinlogFilesResponse
 */
DescribeBinlogFilesResponse Client::describeBinlogFilesWithOptions(const DescribeBinlogFilesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

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

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBinlogFiles"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBinlogFilesResponse>();
}

/**
 * @summary 查询binlog文件
 *
 * @param request DescribeBinlogFilesRequest
 * @return DescribeBinlogFilesResponse
 */
DescribeBinlogFilesResponse Client::describeBinlogFiles(const DescribeBinlogFilesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBinlogFilesWithOptions(request, runtime);
}

/**
 * @summary 查询字符集名称
 *
 * @param request DescribeCharacterSetNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCharacterSetNameResponse
 */
DescribeCharacterSetNameResponse Client::describeCharacterSetNameWithOptions(const DescribeCharacterSetNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEngine()) {
    query["Engine"] = request.getEngine();
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

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCharacterSetName"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCharacterSetNameResponse>();
}

/**
 * @summary 查询字符集名称
 *
 * @param request DescribeCharacterSetNameRequest
 * @return DescribeCharacterSetNameResponse
 */
DescribeCharacterSetNameResponse Client::describeCharacterSetName(const DescribeCharacterSetNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCharacterSetNameWithOptions(request, runtime);
}

/**
 * @summary 查询规格详情
 *
 * @param request DescribeClassDetailsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeClassDetailsResponse
 */
DescribeClassDetailsResponse Client::describeClassDetailsWithOptions(const DescribeClassDetailsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClassCode()) {
    query["ClassCode"] = request.getClassCode();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCommodityCode()) {
    query["CommodityCode"] = request.getCommodityCode();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.getEngine();
  }

  if (!!request.hasEngineVersion()) {
    query["EngineVersion"] = request.getEngineVersion();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeClassDetails"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeClassDetailsResponse>();
}

/**
 * @summary 查询规格详情
 *
 * @param request DescribeClassDetailsRequest
 * @return DescribeClassDetailsResponse
 */
DescribeClassDetailsResponse Client::describeClassDetails(const DescribeClassDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeClassDetailsWithOptions(request, runtime);
}

/**
 * @summary 查询迁移上云检查任务
 *
 * @param request DescribeCloudMigrationPrecheckResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCloudMigrationPrecheckResultResponse
 */
DescribeCloudMigrationPrecheckResultResponse Client::describeCloudMigrationPrecheckResultWithOptions(const DescribeCloudMigrationPrecheckResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSourceIpAddress()) {
    query["SourceIpAddress"] = request.getSourceIpAddress();
  }

  if (!!request.hasSourcePort()) {
    query["SourcePort"] = request.getSourcePort();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.getTaskName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCloudMigrationPrecheckResult"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCloudMigrationPrecheckResultResponse>();
}

/**
 * @summary 查询迁移上云检查任务
 *
 * @param request DescribeCloudMigrationPrecheckResultRequest
 * @return DescribeCloudMigrationPrecheckResultResponse
 */
DescribeCloudMigrationPrecheckResultResponse Client::describeCloudMigrationPrecheckResult(const DescribeCloudMigrationPrecheckResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCloudMigrationPrecheckResultWithOptions(request, runtime);
}

/**
 * @summary 查询迁移上云任务
 *
 * @param request DescribeCloudMigrationResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCloudMigrationResultResponse
 */
DescribeCloudMigrationResultResponse Client::describeCloudMigrationResultWithOptions(const DescribeCloudMigrationResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSourceIpAddress()) {
    query["SourceIpAddress"] = request.getSourceIpAddress();
  }

  if (!!request.hasSourcePort()) {
    query["SourcePort"] = request.getSourcePort();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.getTaskName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCloudMigrationResult"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCloudMigrationResultResponse>();
}

/**
 * @summary 查询迁移上云任务
 *
 * @param request DescribeCloudMigrationResultRequest
 * @return DescribeCloudMigrationResultResponse
 */
DescribeCloudMigrationResultResponse Client::describeCloudMigrationResult(const DescribeCloudMigrationResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCloudMigrationResultWithOptions(request, runtime);
}

/**
 * @summary 查询排序条目时区
 *
 * @param request DescribeCollationTimeZonesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCollationTimeZonesResponse
 */
DescribeCollationTimeZonesResponse Client::describeCollationTimeZonesWithOptions(const DescribeCollationTimeZonesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCollationTimeZones"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCollationTimeZonesResponse>();
}

/**
 * @summary 查询排序条目时区
 *
 * @param request DescribeCollationTimeZonesRequest
 * @return DescribeCollationTimeZonesResponse
 */
DescribeCollationTimeZonesResponse Client::describeCollationTimeZones(const DescribeCollationTimeZonesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCollationTimeZonesWithOptions(request, runtime);
}

/**
 * @summary Queries the settings of assured serverless.
 *
 * @description ### 适用引擎
 * RDS PostgreSQL
 * ### 相关功能文档
 * [承诺型Serverless](https://help.aliyun.com/document_detail/2928780.html)
 *
 * @param request DescribeComputeBurstConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeComputeBurstConfigResponse
 */
DescribeComputeBurstConfigResponse Client::describeComputeBurstConfigWithOptions(const DescribeComputeBurstConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeComputeBurstConfig"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeComputeBurstConfigResponse>();
}

/**
 * @summary Queries the settings of assured serverless.
 *
 * @description ### 适用引擎
 * RDS PostgreSQL
 * ### 相关功能文档
 * [承诺型Serverless](https://help.aliyun.com/document_detail/2928780.html)
 *
 * @param request DescribeComputeBurstConfigRequest
 * @return DescribeComputeBurstConfigResponse
 */
DescribeComputeBurstConfigResponse Client::describeComputeBurstConfig(const DescribeComputeBurstConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeComputeBurstConfigWithOptions(request, runtime);
}

/**
 * @param request DescribeCrossBackupMetaListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCrossBackupMetaListResponse
 */
DescribeCrossBackupMetaListResponse Client::describeCrossBackupMetaListWithOptions(const DescribeCrossBackupMetaListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupSetId()) {
    query["BackupSetId"] = request.getBackupSetId();
  }

  if (!!request.hasGetDbName()) {
    query["GetDbName"] = request.getGetDbName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageIndex()) {
    query["PageIndex"] = request.getPageIndex();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPattern()) {
    query["Pattern"] = request.getPattern();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCrossBackupMetaList"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCrossBackupMetaListResponse>();
}

/**
 * @param request DescribeCrossBackupMetaListRequest
 * @return DescribeCrossBackupMetaListResponse
 */
DescribeCrossBackupMetaListResponse Client::describeCrossBackupMetaList(const DescribeCrossBackupMetaListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCrossBackupMetaListWithOptions(request, runtime);
}

/**
 * @summary 查询所选地域的哪些实例开启了跨地域备份，以及这些实例的跨地域备份设置
 *
 * @param request DescribeCrossRegionBackupDBInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCrossRegionBackupDBInstanceResponse
 */
DescribeCrossRegionBackupDBInstanceResponse Client::describeCrossRegionBackupDBInstanceWithOptions(const DescribeCrossRegionBackupDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCrossRegionBackupDBInstance"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCrossRegionBackupDBInstanceResponse>();
}

/**
 * @summary 查询所选地域的哪些实例开启了跨地域备份，以及这些实例的跨地域备份设置
 *
 * @param request DescribeCrossRegionBackupDBInstanceRequest
 * @return DescribeCrossRegionBackupDBInstanceResponse
 */
DescribeCrossRegionBackupDBInstanceResponse Client::describeCrossRegionBackupDBInstance(const DescribeCrossRegionBackupDBInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCrossRegionBackupDBInstanceWithOptions(request, runtime);
}

/**
 * @summary 查询某RDS实例跨地域数据备份文件列表
 *
 * @param request DescribeCrossRegionBackupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCrossRegionBackupsResponse
 */
DescribeCrossRegionBackupsResponse Client::describeCrossRegionBackupsWithOptions(const DescribeCrossRegionBackupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupId()) {
    query["BackupId"] = request.getBackupId();
  }

  if (!!request.hasCrossBackupId()) {
    query["CrossBackupId"] = request.getCrossBackupId();
  }

  if (!!request.hasCrossBackupRegion()) {
    query["CrossBackupRegion"] = request.getCrossBackupRegion();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
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

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCrossRegionBackups"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCrossRegionBackupsResponse>();
}

/**
 * @summary 查询某RDS实例跨地域数据备份文件列表
 *
 * @param request DescribeCrossRegionBackupsRequest
 * @return DescribeCrossRegionBackupsResponse
 */
DescribeCrossRegionBackupsResponse Client::describeCrossRegionBackups(const DescribeCrossRegionBackupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCrossRegionBackupsWithOptions(request, runtime);
}

/**
 * @summary 查询跨地域日志备份文件列表
 *
 * @param request DescribeCrossRegionLogBackupFilesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCrossRegionLogBackupFilesResponse
 */
DescribeCrossRegionLogBackupFilesResponse Client::describeCrossRegionLogBackupFilesWithOptions(const DescribeCrossRegionLogBackupFilesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCrossBackupRegion()) {
    query["CrossBackupRegion"] = request.getCrossBackupRegion();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCrossRegionLogBackupFiles"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCrossRegionLogBackupFilesResponse>();
}

/**
 * @summary 查询跨地域日志备份文件列表
 *
 * @param request DescribeCrossRegionLogBackupFilesRequest
 * @return DescribeCrossRegionLogBackupFilesResponse
 */
DescribeCrossRegionLogBackupFilesResponse Client::describeCrossRegionLogBackupFiles(const DescribeCrossRegionLogBackupFilesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCrossRegionLogBackupFilesWithOptions(request, runtime);
}

/**
 * @summary Query the latest upgrade/downgrade order of an instance
 *
 * @param request DescribeCurrentModifyOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCurrentModifyOrderResponse
 */
DescribeCurrentModifyOrderResponse Client::describeCurrentModifyOrderWithOptions(const DescribeCurrentModifyOrderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDbInstanceId()) {
    query["DbInstanceId"] = request.getDbInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCurrentModifyOrder"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCurrentModifyOrderResponse>();
}

/**
 * @summary Query the latest upgrade/downgrade order of an instance
 *
 * @param request DescribeCurrentModifyOrderRequest
 * @return DescribeCurrentModifyOrderResponse
 */
DescribeCurrentModifyOrderResponse Client::describeCurrentModifyOrder(const DescribeCurrentModifyOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCurrentModifyOrderWithOptions(request, runtime);
}

/**
 * @summary Query instance resource usage
 *
 * @param request DescribeCustinsResourceInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCustinsResourceInfoResponse
 */
DescribeCustinsResourceInfoResponse Client::describeCustinsResourceInfoWithOptions(const DescribeCustinsResourceInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceIds()) {
    query["DBInstanceIds"] = request.getDBInstanceIds();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCustinsResourceInfo"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCustinsResourceInfoResponse>();
}

/**
 * @summary Query instance resource usage
 *
 * @param request DescribeCustinsResourceInfoRequest
 * @return DescribeCustinsResourceInfoResponse
 */
DescribeCustinsResourceInfoResponse Client::describeCustinsResourceInfo(const DescribeCustinsResourceInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCustinsResourceInfoWithOptions(request, runtime);
}

/**
 * @summary This API is used to query the details of an RDS instance.
 *
 * @description ### Supported Engines
 * - RDS MySQL
 * - RDS PostgreSQL
 * - RDS SQL Server
 * - RDS MariaDB
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

  if (!!request.hasExpired()) {
    query["Expired"] = request.getExpired();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstanceAttribute"},
    {"version" , "2014-08-15"},
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
 * @summary This API is used to query the details of an RDS instance.
 *
 * @description ### Supported Engines
 * - RDS MySQL
 * - RDS PostgreSQL
 * - RDS SQL Server
 * - RDS MariaDB
 *
 * @param request DescribeDBInstanceAttributeRequest
 * @return DescribeDBInstanceAttributeResponse
 */
DescribeDBInstanceAttributeResponse Client::describeDBInstanceAttribute(const DescribeDBInstanceAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceAttributeWithOptions(request, runtime);
}

/**
 * @summary 获取实例绑定的标签信息
 *
 * @param request DescribeDBInstanceByTagsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstanceByTagsResponse
 */
DescribeDBInstanceByTagsResponse Client::describeDBInstanceByTagsWithOptions(const DescribeDBInstanceByTagsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasProxyId()) {
    query["proxyId"] = request.getProxyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstanceByTags"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstanceByTagsResponse>();
}

/**
 * @summary 获取实例绑定的标签信息
 *
 * @param request DescribeDBInstanceByTagsRequest
 * @return DescribeDBInstanceByTagsResponse
 */
DescribeDBInstanceByTagsResponse Client::describeDBInstanceByTags(const DescribeDBInstanceByTagsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceByTagsWithOptions(request, runtime);
}

/**
 * @summary Query the column encryption algorithm configuration information of a specified instance.
 *
 * @description ## Request Description
 * - Before using this API, ensure that you have activated the column encryption service in the DAS Security Center.
 * - If you receive the error message ColumnEncryptionErrorCode.NOT_PURCHASED when invoking the API, go to the DAS (Database Autonomy Service) Security Center to purchase and activate the column encryption service before using it again.
 *
 * @param request DescribeDBInstanceCLSRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstanceCLSResponse
 */
DescribeDBInstanceCLSResponse Client::describeDBInstanceCLSWithOptions(const DescribeDBInstanceCLSRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstanceCLS"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstanceCLSResponse>();
}

/**
 * @summary Query the column encryption algorithm configuration information of a specified instance.
 *
 * @description ## Request Description
 * - Before using this API, ensure that you have activated the column encryption service in the DAS Security Center.
 * - If you receive the error message ColumnEncryptionErrorCode.NOT_PURCHASED when invoking the API, go to the DAS (Database Autonomy Service) Security Center to purchase and activate the column encryption service before using it again.
 *
 * @param request DescribeDBInstanceCLSRequest
 * @return DescribeDBInstanceCLSResponse
 */
DescribeDBInstanceCLSResponse Client::describeDBInstanceCLS(const DescribeDBInstanceCLSRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceCLSWithOptions(request, runtime);
}

/**
 * @summary Obtain instance ingest endpoint diagnosis information
 *
 * @param request DescribeDBInstanceConnectivityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstanceConnectivityResponse
 */
DescribeDBInstanceConnectivityResponse Client::describeDBInstanceConnectivityWithOptions(const DescribeDBInstanceConnectivityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstanceConnectivity"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstanceConnectivityResponse>();
}

/**
 * @summary Obtain instance ingest endpoint diagnosis information
 *
 * @param request DescribeDBInstanceConnectivityRequest
 * @return DescribeDBInstanceConnectivityResponse
 */
DescribeDBInstanceConnectivityResponse Client::describeDBInstanceConnectivity(const DescribeDBInstanceConnectivityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceConnectivityWithOptions(request, runtime);
}

/**
 * @param request DescribeDBInstanceDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstanceDetailResponse
 */
DescribeDBInstanceDetailResponse Client::describeDBInstanceDetailWithOptions(const DescribeDBInstanceDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstanceDetail"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstanceDetailResponse>();
}

/**
 * @param request DescribeDBInstanceDetailRequest
 * @return DescribeDBInstanceDetailResponse
 */
DescribeDBInstanceDetailResponse Client::describeDBInstanceDetail(const DescribeDBInstanceDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceDetailWithOptions(request, runtime);
}

/**
 * @summary 查询RDS实例是否开启了云盘加密，以及密钥详情
 *
 * @param request DescribeDBInstanceEncryptionKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstanceEncryptionKeyResponse
 */
DescribeDBInstanceEncryptionKeyResponse Client::describeDBInstanceEncryptionKeyWithOptions(const DescribeDBInstanceEncryptionKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasEncryptionKey()) {
    query["EncryptionKey"] = request.getEncryptionKey();
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

  if (!!request.hasTargetRegionId()) {
    query["TargetRegionId"] = request.getTargetRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstanceEncryptionKey"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstanceEncryptionKeyResponse>();
}

/**
 * @summary 查询RDS实例是否开启了云盘加密，以及密钥详情
 *
 * @param request DescribeDBInstanceEncryptionKeyRequest
 * @return DescribeDBInstanceEncryptionKeyResponse
 */
DescribeDBInstanceEncryptionKeyResponse Client::describeDBInstanceEncryptionKey(const DescribeDBInstanceEncryptionKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceEncryptionKeyWithOptions(request, runtime);
}

/**
 * @summary 查询实例的Endpoint
 *
 * @param request DescribeDBInstanceEndpointsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstanceEndpointsResponse
 */
DescribeDBInstanceEndpointsResponse Client::describeDBInstanceEndpointsWithOptions(const DescribeDBInstanceEndpointsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceEndpointId()) {
    query["DBInstanceEndpointId"] = request.getDBInstanceEndpointId();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstanceEndpoints"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstanceEndpointsResponse>();
}

/**
 * @summary 查询实例的Endpoint
 *
 * @param request DescribeDBInstanceEndpointsRequest
 * @return DescribeDBInstanceEndpointsResponse
 */
DescribeDBInstanceEndpointsResponse Client::describeDBInstanceEndpoints(const DescribeDBInstanceEndpointsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceEndpointsWithOptions(request, runtime);
}

/**
 * @summary 查询RDS实例高可用模式和数据复制方式
 *
 * @param request DescribeDBInstanceHAConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstanceHAConfigResponse
 */
DescribeDBInstanceHAConfigResponse Client::describeDBInstanceHAConfigWithOptions(const DescribeDBInstanceHAConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstanceHAConfig"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstanceHAConfigResponse>();
}

/**
 * @summary 查询RDS实例高可用模式和数据复制方式
 *
 * @param request DescribeDBInstanceHAConfigRequest
 * @return DescribeDBInstanceHAConfigResponse
 */
DescribeDBInstanceHAConfigResponse Client::describeDBInstanceHAConfig(const DescribeDBInstanceHAConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceHAConfigWithOptions(request, runtime);
}

/**
 * @summary 查询RDS实例IP白名单
 *
 * @param request DescribeDBInstanceIPArrayListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstanceIPArrayListResponse
 */
DescribeDBInstanceIPArrayListResponse Client::describeDBInstanceIPArrayListWithOptions(const DescribeDBInstanceIPArrayListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasWhitelistNetworkType()) {
    query["WhitelistNetworkType"] = request.getWhitelistNetworkType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstanceIPArrayList"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstanceIPArrayListResponse>();
}

/**
 * @summary 查询RDS实例IP白名单
 *
 * @param request DescribeDBInstanceIPArrayListRequest
 * @return DescribeDBInstanceIPArrayListResponse
 */
DescribeDBInstanceIPArrayListResponse Client::describeDBInstanceIPArrayList(const DescribeDBInstanceIPArrayListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceIPArrayListWithOptions(request, runtime);
}

/**
 * @summary 查询RDS实例的底层ECS实例的hostname
 *
 * @param request DescribeDBInstanceIpHostnameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstanceIpHostnameResponse
 */
DescribeDBInstanceIpHostnameResponse Client::describeDBInstanceIpHostnameWithOptions(const DescribeDBInstanceIpHostnameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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
    {"action" , "DescribeDBInstanceIpHostname"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstanceIpHostnameResponse>();
}

/**
 * @summary 查询RDS实例的底层ECS实例的hostname
 *
 * @param request DescribeDBInstanceIpHostnameRequest
 * @return DescribeDBInstanceIpHostnameResponse
 */
DescribeDBInstanceIpHostnameResponse Client::describeDBInstanceIpHostname(const DescribeDBInstanceIpHostnameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceIpHostnameWithOptions(request, runtime);
}

/**
 * @summary 查询RDS PostgreSQL实例已开启展示的增强指标
 *
 * @param request DescribeDBInstanceMetricsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstanceMetricsResponse
 */
DescribeDBInstanceMetricsResponse Client::describeDBInstanceMetricsWithOptions(const DescribeDBInstanceMetricsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstanceMetrics"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstanceMetricsResponse>();
}

/**
 * @summary 查询RDS PostgreSQL实例已开启展示的增强指标
 *
 * @param request DescribeDBInstanceMetricsRequest
 * @return DescribeDBInstanceMetricsResponse
 */
DescribeDBInstanceMetricsResponse Client::describeDBInstanceMetrics(const DescribeDBInstanceMetricsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceMetricsWithOptions(request, runtime);
}

/**
 * @summary 查询监控频率
 *
 * @param request DescribeDBInstanceMonitorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstanceMonitorResponse
 */
DescribeDBInstanceMonitorResponse Client::describeDBInstanceMonitorWithOptions(const DescribeDBInstanceMonitorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstanceMonitor"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstanceMonitorResponse>();
}

/**
 * @summary 查询监控频率
 *
 * @param request DescribeDBInstanceMonitorRequest
 * @return DescribeDBInstanceMonitorResponse
 */
DescribeDBInstanceMonitorResponse Client::describeDBInstanceMonitor(const DescribeDBInstanceMonitorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceMonitorWithOptions(request, runtime);
}

/**
 * @summary 查询实例的所有连接地址信息
 *
 * @param request DescribeDBInstanceNetInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstanceNetInfoResponse
 */
DescribeDBInstanceNetInfoResponse Client::describeDBInstanceNetInfoWithOptions(const DescribeDBInstanceNetInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBInstanceNetRWSplitType()) {
    query["DBInstanceNetRWSplitType"] = request.getDBInstanceNetRWSplitType();
  }

  if (!!request.hasFlag()) {
    query["Flag"] = request.getFlag();
  }

  if (!!request.hasGeneralGroupName()) {
    query["GeneralGroupName"] = request.getGeneralGroupName();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstanceNetInfo"},
    {"version" , "2014-08-15"},
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
 * @summary 查询实例的所有连接地址信息
 *
 * @param request DescribeDBInstanceNetInfoRequest
 * @return DescribeDBInstanceNetInfoResponse
 */
DescribeDBInstanceNetInfoResponse Client::describeDBInstanceNetInfo(const DescribeDBInstanceNetInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceNetInfoWithOptions(request, runtime);
}

/**
 * @summary 查询内部实例网络信息
 *
 * @param request DescribeDBInstanceNetInfoForChannelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstanceNetInfoForChannelResponse
 */
DescribeDBInstanceNetInfoForChannelResponse Client::describeDBInstanceNetInfoForChannelWithOptions(const DescribeDBInstanceNetInfoForChannelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBInstanceNetRWSplitType()) {
    query["DBInstanceNetRWSplitType"] = request.getDBInstanceNetRWSplitType();
  }

  if (!!request.hasFlag()) {
    query["Flag"] = request.getFlag();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstanceNetInfoForChannel"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstanceNetInfoForChannelResponse>();
}

/**
 * @summary 查询内部实例网络信息
 *
 * @param request DescribeDBInstanceNetInfoForChannelRequest
 * @return DescribeDBInstanceNetInfoForChannelResponse
 */
DescribeDBInstanceNetInfoForChannelResponse Client::describeDBInstanceNetInfoForChannel(const DescribeDBInstanceNetInfoForChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceNetInfoForChannelWithOptions(request, runtime);
}

/**
 * @summary 查询实例性能数据
 *
 * @param request DescribeDBInstancePerformanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstancePerformanceResponse
 */
DescribeDBInstancePerformanceResponse Client::describeDBInstancePerformanceWithOptions(const DescribeDBInstancePerformanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasKey()) {
    query["Key"] = request.getKey();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.getNodeId();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstancePerformance"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstancePerformanceResponse>();
}

/**
 * @summary 查询实例性能数据
 *
 * @param request DescribeDBInstancePerformanceRequest
 * @return DescribeDBInstancePerformanceResponse
 */
DescribeDBInstancePerformanceResponse Client::describeDBInstancePerformance(const DescribeDBInstancePerformanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstancePerformanceWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI DescribeDBInstancePromoteActivity is deprecated
 *
 * @summary 查询数据库实例提升状态操作
 *
 * @param request DescribeDBInstancePromoteActivityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstancePromoteActivityResponse
 */
DescribeDBInstancePromoteActivityResponse Client::describeDBInstancePromoteActivityWithOptions(const DescribeDBInstancePromoteActivityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliUid()) {
    query["AliUid"] = request.getAliUid();
  }

  if (!!request.hasDbInstanceName()) {
    query["DbInstanceName"] = request.getDbInstanceName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstancePromoteActivity"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstancePromoteActivityResponse>();
}

/**
 * @deprecated OpenAPI DescribeDBInstancePromoteActivity is deprecated
 *
 * @summary 查询数据库实例提升状态操作
 *
 * @param request DescribeDBInstancePromoteActivityRequest
 * @return DescribeDBInstancePromoteActivityResponse
 */
DescribeDBInstancePromoteActivityResponse Client::describeDBInstancePromoteActivity(const DescribeDBInstancePromoteActivityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstancePromoteActivityWithOptions(request, runtime);
}

/**
 * @summary 查询数据库实例代理配置
 *
 * @param request DescribeDBInstanceProxyConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstanceProxyConfigurationResponse
 */
DescribeDBInstanceProxyConfigurationResponse Client::describeDBInstanceProxyConfigurationWithOptions(const DescribeDBInstanceProxyConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstanceProxyConfiguration"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstanceProxyConfigurationResponse>();
}

/**
 * @summary 查询数据库实例代理配置
 *
 * @param request DescribeDBInstanceProxyConfigurationRequest
 * @return DescribeDBInstanceProxyConfigurationResponse
 */
DescribeDBInstanceProxyConfigurationResponse Client::describeDBInstanceProxyConfiguration(const DescribeDBInstanceProxyConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceProxyConfigurationWithOptions(request, runtime);
}

/**
 * @summary This API is used to query the status and configuration of a native replication instance.
 *
 * @description ### Applicable Engine
 * RDS MySQL
 * ### Related Function Documentation
 * >Notice: Before using this API, carefully read the Function Documentation to ensure you fully understand the prerequisites for using the API and the Impact of its use before performing any operation.
 *
 * @param request DescribeDBInstanceReplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstanceReplicationResponse
 */
DescribeDBInstanceReplicationResponse Client::describeDBInstanceReplicationWithOptions(const DescribeDBInstanceReplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstanceReplication"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstanceReplicationResponse>();
}

/**
 * @summary This API is used to query the status and configuration of a native replication instance.
 *
 * @description ### Applicable Engine
 * RDS MySQL
 * ### Related Function Documentation
 * >Notice: Before using this API, carefully read the Function Documentation to ensure you fully understand the prerequisites for using the API and the Impact of its use before performing any operation.
 *
 * @param request DescribeDBInstanceReplicationRequest
 * @return DescribeDBInstanceReplicationResponse
 */
DescribeDBInstanceReplicationResponse Client::describeDBInstanceReplication(const DescribeDBInstanceReplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceReplicationWithOptions(request, runtime);
}

/**
 * @summary 查询RDS实例的SSL配置
 *
 * @param request DescribeDBInstanceSSLRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstanceSSLResponse
 */
DescribeDBInstanceSSLResponse Client::describeDBInstanceSSLWithOptions(const DescribeDBInstanceSSLRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstanceSSL"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstanceSSLResponse>();
}

/**
 * @summary 查询RDS实例的SSL配置
 *
 * @param request DescribeDBInstanceSSLRequest
 * @return DescribeDBInstanceSSLResponse
 */
DescribeDBInstanceSSLResponse Client::describeDBInstanceSSL(const DescribeDBInstanceSSLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceSSLWithOptions(request, runtime);
}

/**
 * @summary 描述实例主机安全组规则
 *
 * @param request DescribeDBInstanceSecurityGroupRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstanceSecurityGroupRuleResponse
 */
DescribeDBInstanceSecurityGroupRuleResponse Client::describeDBInstanceSecurityGroupRuleWithOptions(const DescribeDBInstanceSecurityGroupRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstanceSecurityGroupRule"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstanceSecurityGroupRuleResponse>();
}

/**
 * @summary 描述实例主机安全组规则
 *
 * @param request DescribeDBInstanceSecurityGroupRuleRequest
 * @return DescribeDBInstanceSecurityGroupRuleResponse
 */
DescribeDBInstanceSecurityGroupRuleResponse Client::describeDBInstanceSecurityGroupRule(const DescribeDBInstanceSecurityGroupRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceSecurityGroupRuleWithOptions(request, runtime);
}

/**
 * @summary 查询RDS实例的TDE配置信息
 *
 * @param request DescribeDBInstanceTDERequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstanceTDEResponse
 */
DescribeDBInstanceTDEResponse Client::describeDBInstanceTDEWithOptions(const DescribeDBInstanceTDERequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstanceTDE"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstanceTDEResponse>();
}

/**
 * @summary 查询RDS实例的TDE配置信息
 *
 * @param request DescribeDBInstanceTDERequest
 * @return DescribeDBInstanceTDEResponse
 */
DescribeDBInstanceTDEResponse Client::describeDBInstanceTDE(const DescribeDBInstanceTDERequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceTDEWithOptions(request, runtime);
}

/**
 * @summary This API is used to query the list of RDS instances.
 *
 * @description ### Supported Engines  
 * - RDS MySQL  
 * - RDS PostgreSQL  
 * - RDS SQL Server  
 * - RDS MariaDB
 *
 * @param request DescribeDBInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstancesResponse
 */
DescribeDBInstancesResponse Client::describeDBInstancesWithOptions(const DescribeDBInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategory()) {
    query["Category"] = request.getCategory();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasConnectionMode()) {
    query["ConnectionMode"] = request.getConnectionMode();
  }

  if (!!request.hasConnectionString()) {
    query["ConnectionString"] = request.getConnectionString();
  }

  if (!!request.hasDBInstanceClass()) {
    query["DBInstanceClass"] = request.getDBInstanceClass();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBInstanceStatus()) {
    query["DBInstanceStatus"] = request.getDBInstanceStatus();
  }

  if (!!request.hasDBInstanceType()) {
    query["DBInstanceType"] = request.getDBInstanceType();
  }

  if (!!request.hasDedicatedHostGroupId()) {
    query["DedicatedHostGroupId"] = request.getDedicatedHostGroupId();
  }

  if (!!request.hasDedicatedHostId()) {
    query["DedicatedHostId"] = request.getDedicatedHostId();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.getEngine();
  }

  if (!!request.hasEngineVersion()) {
    query["EngineVersion"] = request.getEngineVersion();
  }

  if (!!request.hasExpired()) {
    query["Expired"] = request.getExpired();
  }

  if (!!request.hasFilter()) {
    query["Filter"] = request.getFilter();
  }

  if (!!request.hasInstanceLevel()) {
    query["InstanceLevel"] = request.getInstanceLevel();
  }

  if (!!request.hasInstanceNetworkType()) {
    query["InstanceNetworkType"] = request.getInstanceNetworkType();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

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

  if (!!request.hasPayType()) {
    query["PayType"] = request.getPayType();
  }

  if (!!request.hasQueryAutoRenewal()) {
    query["QueryAutoRenewal"] = request.getQueryAutoRenewal();
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

  if (!!request.hasSearchKey()) {
    query["SearchKey"] = request.getSearchKey();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
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

  if (!!request.hasProxyId()) {
    query["proxyId"] = request.getProxyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstances"},
    {"version" , "2014-08-15"},
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
 * @summary This API is used to query the list of RDS instances.
 *
 * @description ### Supported Engines  
 * - RDS MySQL  
 * - RDS PostgreSQL  
 * - RDS SQL Server  
 * - RDS MariaDB
 *
 * @param request DescribeDBInstancesRequest
 * @return DescribeDBInstancesResponse
 */
DescribeDBInstancesResponse Client::describeDBInstances(const DescribeDBInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstancesWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI DescribeDBInstancesAsCsv is deprecated, please use Rds::2014-08-15::DescribeDBInstances instead.
 *
 * @summary 以CSV的方式查询实例列表
 *
 * @param request DescribeDBInstancesAsCsvRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstancesAsCsvResponse
 */
DescribeDBInstancesAsCsvResponse Client::describeDBInstancesAsCsvWithOptions(const DescribeDBInstancesAsCsvRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCachedAsync()) {
    query["CachedAsync"] = request.getCachedAsync();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasExportKey()) {
    query["ExportKey"] = request.getExportKey();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstancesAsCsv"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstancesAsCsvResponse>();
}

/**
 * @deprecated OpenAPI DescribeDBInstancesAsCsv is deprecated, please use Rds::2014-08-15::DescribeDBInstances instead.
 *
 * @summary 以CSV的方式查询实例列表
 *
 * @param request DescribeDBInstancesAsCsvRequest
 * @return DescribeDBInstancesAsCsvResponse
 */
DescribeDBInstancesAsCsvResponse Client::describeDBInstancesAsCsv(const DescribeDBInstancesAsCsvRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstancesAsCsvWithOptions(request, runtime);
}

/**
 * @summary 查询到期数据库实例
 *
 * @param request DescribeDBInstancesByExpireTimeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstancesByExpireTimeResponse
 */
DescribeDBInstancesByExpireTimeResponse Client::describeDBInstancesByExpireTimeWithOptions(const DescribeDBInstancesByExpireTimeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExpirePeriod()) {
    query["ExpirePeriod"] = request.getExpirePeriod();
  }

  if (!!request.hasExpired()) {
    query["Expired"] = request.getExpired();
  }

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

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  if (!!request.hasProxyId()) {
    query["proxyId"] = request.getProxyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstancesByExpireTime"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstancesByExpireTimeResponse>();
}

/**
 * @summary 查询到期数据库实例
 *
 * @param request DescribeDBInstancesByExpireTimeRequest
 * @return DescribeDBInstancesByExpireTimeResponse
 */
DescribeDBInstancesByExpireTimeResponse Client::describeDBInstancesByExpireTime(const DescribeDBInstancesByExpireTimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstancesByExpireTimeWithOptions(request, runtime);
}

/**
 * @summary 查询数据库实例性能
 *
 * @param request DescribeDBInstancesByPerformanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstancesByPerformanceResponse
 */
DescribeDBInstancesByPerformanceResponse Client::describeDBInstancesByPerformanceWithOptions(const DescribeDBInstancesByPerformanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

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

  if (!!request.hasSortKey()) {
    query["SortKey"] = request.getSortKey();
  }

  if (!!request.hasSortMethod()) {
    query["SortMethod"] = request.getSortMethod();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  if (!!request.hasProxyId()) {
    query["proxyId"] = request.getProxyId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstancesByPerformance"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstancesByPerformanceResponse>();
}

/**
 * @summary 查询数据库实例性能
 *
 * @param request DescribeDBInstancesByPerformanceRequest
 * @return DescribeDBInstancesByPerformanceResponse
 */
DescribeDBInstancesByPerformanceResponse Client::describeDBInstancesByPerformance(const DescribeDBInstancesByPerformanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstancesByPerformanceWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI DescribeDBInstancesForClone is deprecated, please use Rds::2014-08-15::DescribeDBInstances instead.
 *
 * @summary 查询克隆的数据库实例
 *
 * @param request DescribeDBInstancesForCloneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstancesForCloneResponse
 */
DescribeDBInstancesForCloneResponse Client::describeDBInstancesForCloneWithOptions(const DescribeDBInstancesForCloneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasConnectionMode()) {
    query["ConnectionMode"] = request.getConnectionMode();
  }

  if (!!request.hasCurrentInstanceId()) {
    query["CurrentInstanceId"] = request.getCurrentInstanceId();
  }

  if (!!request.hasDBInstanceClass()) {
    query["DBInstanceClass"] = request.getDBInstanceClass();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBInstanceStatus()) {
    query["DBInstanceStatus"] = request.getDBInstanceStatus();
  }

  if (!!request.hasDBInstanceType()) {
    query["DBInstanceType"] = request.getDBInstanceType();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.getEngine();
  }

  if (!!request.hasEngineVersion()) {
    query["EngineVersion"] = request.getEngineVersion();
  }

  if (!!request.hasExpired()) {
    query["Expired"] = request.getExpired();
  }

  if (!!request.hasInstanceNetworkType()) {
    query["InstanceNetworkType"] = request.getInstanceNetworkType();
  }

  if (!!request.hasNodeType()) {
    query["NodeType"] = request.getNodeType();
  }

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

  if (!!request.hasPayType()) {
    query["PayType"] = request.getPayType();
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

  if (!!request.hasSearchKey()) {
    query["SearchKey"] = request.getSearchKey();
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

  if (!!request.hasProxyId()) {
    query["proxyId"] = request.getProxyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstancesForClone"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstancesForCloneResponse>();
}

/**
 * @deprecated OpenAPI DescribeDBInstancesForClone is deprecated, please use Rds::2014-08-15::DescribeDBInstances instead.
 *
 * @summary 查询克隆的数据库实例
 *
 * @param request DescribeDBInstancesForCloneRequest
 * @return DescribeDBInstancesForCloneResponse
 */
DescribeDBInstancesForCloneResponse Client::describeDBInstancesForClone(const DescribeDBInstancesForCloneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstancesForCloneWithOptions(request, runtime);
}

/**
 * @summary 查询数据库实例小版本信息
 *
 * @param request DescribeDBMiniEngineVersionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBMiniEngineVersionsResponse
 */
DescribeDBMiniEngineVersionsResponse Client::describeDBMiniEngineVersionsWithOptions(const DescribeDBMiniEngineVersionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDedicatedHostGroupId()) {
    query["DedicatedHostGroupId"] = request.getDedicatedHostGroupId();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.getEngine();
  }

  if (!!request.hasEngineVersion()) {
    query["EngineVersion"] = request.getEngineVersion();
  }

  if (!!request.hasMinorVersionTag()) {
    query["MinorVersionTag"] = request.getMinorVersionTag();
  }

  if (!!request.hasNodeType()) {
    query["NodeType"] = request.getNodeType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStorageType()) {
    query["StorageType"] = request.getStorageType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBMiniEngineVersions"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBMiniEngineVersionsResponse>();
}

/**
 * @summary 查询数据库实例小版本信息
 *
 * @param request DescribeDBMiniEngineVersionsRequest
 * @return DescribeDBMiniEngineVersionsResponse
 */
DescribeDBMiniEngineVersionsResponse Client::describeDBMiniEngineVersions(const DescribeDBMiniEngineVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBMiniEngineVersionsWithOptions(request, runtime);
}

/**
 * @summary This API is used to query the PolarProxy settings of an RDS instance.
 *
 * @description ### Supported Engines
 * - RDS MySQL
 * - RDS PostgreSQL
 *
 * @param request DescribeDBProxyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBProxyResponse
 */
DescribeDBProxyResponse Client::describeDBProxyWithOptions(const DescribeDBProxyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBProxyEngineType()) {
    query["DBProxyEngineType"] = request.getDBProxyEngineType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBProxy"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBProxyResponse>();
}

/**
 * @summary This API is used to query the PolarProxy settings of an RDS instance.
 *
 * @description ### Supported Engines
 * - RDS MySQL
 * - RDS PostgreSQL
 *
 * @param request DescribeDBProxyRequest
 * @return DescribeDBProxyResponse
 */
DescribeDBProxyResponse Client::describeDBProxy(const DescribeDBProxyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBProxyWithOptions(request, runtime);
}

/**
 * @summary 查询RDS实例数据库代理的连接地址信息
 *
 * @param request DescribeDBProxyEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBProxyEndpointResponse
 */
DescribeDBProxyEndpointResponse Client::describeDBProxyEndpointWithOptions(const DescribeDBProxyEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBProxyConnectString()) {
    query["DBProxyConnectString"] = request.getDBProxyConnectString();
  }

  if (!!request.hasDBProxyEndpointId()) {
    query["DBProxyEndpointId"] = request.getDBProxyEndpointId();
  }

  if (!!request.hasDBProxyEngineType()) {
    query["DBProxyEngineType"] = request.getDBProxyEngineType();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBProxyEndpoint"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBProxyEndpointResponse>();
}

/**
 * @summary 查询RDS实例数据库代理的连接地址信息
 *
 * @param request DescribeDBProxyEndpointRequest
 * @return DescribeDBProxyEndpointResponse
 */
DescribeDBProxyEndpointResponse Client::describeDBProxyEndpoint(const DescribeDBProxyEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBProxyEndpointWithOptions(request, runtime);
}

/**
 * @summary This API is used to query the performance data of the database proxy for an ApsaraDB RDS instance.
 *
 * @description ### Supported Engines
 * - RDS MySQL
 * - RDS PostgreSQL
 * > Starting from October 17, 2023, ApsaraDB RDS MySQL Cluster Edition gradually provides one free dedicated database proxy per instance in each edge zone. For more information, see [Offer: One Free Dedicated Database Proxy for RDS MySQL Cluster Edition](https://help.aliyun.com/document_detail/2555466.html).  
 * ### Related Function Documentation  
 * >Notice: Before using this API, carefully read the function documentation to fully understand the prerequisites and potential impacts of using this API before performing any operation.
 * - [View Monitoring Data for RDS MySQL](https://help.aliyun.com/document_detail/194241.html)
 * - [View Monitoring Data for RDS PostgreSQL](https://help.aliyun.com/document_detail/418275.html)
 *
 * @param request DescribeDBProxyPerformanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBProxyPerformanceResponse
 */
DescribeDBProxyPerformanceResponse Client::describeDBProxyPerformanceWithOptions(const DescribeDBProxyPerformanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBProxyEngineType()) {
    query["DBProxyEngineType"] = request.getDBProxyEngineType();
  }

  if (!!request.hasDBProxyInstanceType()) {
    query["DBProxyInstanceType"] = request.getDBProxyInstanceType();
  }

  if (!!request.hasDimension()) {
    query["Dimension"] = request.getDimension();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasMetricsName()) {
    query["MetricsName"] = request.getMetricsName();
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

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBProxyPerformance"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBProxyPerformanceResponse>();
}

/**
 * @summary This API is used to query the performance data of the database proxy for an ApsaraDB RDS instance.
 *
 * @description ### Supported Engines
 * - RDS MySQL
 * - RDS PostgreSQL
 * > Starting from October 17, 2023, ApsaraDB RDS MySQL Cluster Edition gradually provides one free dedicated database proxy per instance in each edge zone. For more information, see [Offer: One Free Dedicated Database Proxy for RDS MySQL Cluster Edition](https://help.aliyun.com/document_detail/2555466.html).  
 * ### Related Function Documentation  
 * >Notice: Before using this API, carefully read the function documentation to fully understand the prerequisites and potential impacts of using this API before performing any operation.
 * - [View Monitoring Data for RDS MySQL](https://help.aliyun.com/document_detail/194241.html)
 * - [View Monitoring Data for RDS PostgreSQL](https://help.aliyun.com/document_detail/418275.html)
 *
 * @param request DescribeDBProxyPerformanceRequest
 * @return DescribeDBProxyPerformanceResponse
 */
DescribeDBProxyPerformanceResponse Client::describeDBProxyPerformance(const DescribeDBProxyPerformanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBProxyPerformanceWithOptions(request, runtime);
}

/**
 * @summary 查询SQLServer的DTC安全主机IP
 *
 * @param request DescribeDTCSecurityIpHostsForSQLServerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDTCSecurityIpHostsForSQLServerResponse
 */
DescribeDTCSecurityIpHostsForSQLServerResponse Client::describeDTCSecurityIpHostsForSQLServerWithOptions(const DescribeDTCSecurityIpHostsForSQLServerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDTCSecurityIpHostsForSQLServer"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDTCSecurityIpHostsForSQLServerResponse>();
}

/**
 * @summary 查询SQLServer的DTC安全主机IP
 *
 * @param request DescribeDTCSecurityIpHostsForSQLServerRequest
 * @return DescribeDTCSecurityIpHostsForSQLServerResponse
 */
DescribeDTCSecurityIpHostsForSQLServerResponse Client::describeDTCSecurityIpHostsForSQLServer(const DescribeDTCSecurityIpHostsForSQLServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDTCSecurityIpHostsForSQLServerWithOptions(request, runtime);
}

/**
 * @summary 查询实例中数据库列表
 *
 * @param request DescribeDatabasesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDatabasesResponse
 */
DescribeDatabasesResponse Client::describeDatabasesWithOptions(const DescribeDatabasesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.getDBName();
  }

  if (!!request.hasDBStatus()) {
    query["DBStatus"] = request.getDBStatus();
  }

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

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDatabases"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDatabasesResponse>();
}

/**
 * @summary 查询实例中数据库列表
 *
 * @param request DescribeDatabasesRequest
 * @return DescribeDatabasesResponse
 */
DescribeDatabasesResponse Client::describeDatabases(const DescribeDatabasesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDatabasesWithOptions(request, runtime);
}

/**
 * @summary 查询专用主机组
 *
 * @param request DescribeDedicatedHostGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDedicatedHostGroupsResponse
 */
DescribeDedicatedHostGroupsResponse Client::describeDedicatedHostGroupsWithOptions(const DescribeDedicatedHostGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDedicatedHostGroupId()) {
    query["DedicatedHostGroupId"] = request.getDedicatedHostGroupId();
  }

  if (!!request.hasImageCategory()) {
    query["ImageCategory"] = request.getImageCategory();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDedicatedHostGroups"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDedicatedHostGroupsResponse>();
}

/**
 * @summary 查询专用主机组
 *
 * @param request DescribeDedicatedHostGroupsRequest
 * @return DescribeDedicatedHostGroupsResponse
 */
DescribeDedicatedHostGroupsResponse Client::describeDedicatedHostGroups(const DescribeDedicatedHostGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDedicatedHostGroupsWithOptions(request, runtime);
}

/**
 * @summary 查询专属集群内的主机信息
 *
 * @param request DescribeDedicatedHostsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDedicatedHostsResponse
 */
DescribeDedicatedHostsResponse Client::describeDedicatedHostsWithOptions(const DescribeDedicatedHostsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAllocationStatus()) {
    query["AllocationStatus"] = request.getAllocationStatus();
  }

  if (!!request.hasDedicatedHostGroupId()) {
    query["DedicatedHostGroupId"] = request.getDedicatedHostGroupId();
  }

  if (!!request.hasDedicatedHostId()) {
    query["DedicatedHostId"] = request.getDedicatedHostId();
  }

  if (!!request.hasHostStatus()) {
    query["HostStatus"] = request.getHostStatus();
  }

  if (!!request.hasHostType()) {
    query["HostType"] = request.getHostType();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
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

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDedicatedHosts"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDedicatedHostsResponse>();
}

/**
 * @summary 查询专属集群内的主机信息
 *
 * @param request DescribeDedicatedHostsRequest
 * @return DescribeDedicatedHostsResponse
 */
DescribeDedicatedHostsResponse Client::describeDedicatedHosts(const DescribeDedicatedHostsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDedicatedHostsWithOptions(request, runtime);
}

/**
 * @summary 查询已完成的备份
 *
 * @param request DescribeDetachedBackupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDetachedBackupsResponse
 */
DescribeDetachedBackupsResponse Client::describeDetachedBackupsWithOptions(const DescribeDetachedBackupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupId()) {
    query["BackupId"] = request.getBackupId();
  }

  if (!!request.hasBackupMode()) {
    query["BackupMode"] = request.getBackupMode();
  }

  if (!!request.hasBackupStatus()) {
    query["BackupStatus"] = request.getBackupStatus();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDetachedBackups"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDetachedBackupsResponse>();
}

/**
 * @summary 查询已完成的备份
 *
 * @param request DescribeDetachedBackupsRequest
 * @return DescribeDetachedBackupsResponse
 */
DescribeDetachedBackupsResponse Client::describeDetachedBackups(const DescribeDetachedBackupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDetachedBackupsWithOptions(request, runtime);
}

/**
 * @summary This API queries the error logs of an instance within a specified period.
 *
 * @description ### Supported Engines
 * - RDS MySQL
 * - RDS PostgreSQL
 * - RDS SQL Server
 * - RDS MariaDB
 *
 * @param request DescribeErrorLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeErrorLogsResponse
 */
DescribeErrorLogsResponse Client::describeErrorLogsWithOptions(const DescribeErrorLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

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

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeErrorLogs"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeErrorLogsResponse>();
}

/**
 * @summary This API queries the error logs of an instance within a specified period.
 *
 * @description ### Supported Engines
 * - RDS MySQL
 * - RDS PostgreSQL
 * - RDS SQL Server
 * - RDS MariaDB
 *
 * @param request DescribeErrorLogsRequest
 * @return DescribeErrorLogsResponse
 */
DescribeErrorLogsResponse Client::describeErrorLogs(const DescribeErrorLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeErrorLogsWithOptions(request, runtime);
}

/**
 * @summary 查询实例事件
 *
 * @param request DescribeEventsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEventsResponse
 */
DescribeEventsResponse Client::describeEventsWithOptions(const DescribeEventsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEvents"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEventsResponse>();
}

/**
 * @summary 查询实例事件
 *
 * @param request DescribeEventsRequest
 * @return DescribeEventsResponse
 */
DescribeEventsResponse Client::describeEvents(const DescribeEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEventsWithOptions(request, runtime);
}

/**
 * @summary DescribeGadInstances
 *
 * @param request DescribeGadInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGadInstancesResponse
 */
DescribeGadInstancesResponse Client::describeGadInstancesWithOptions(const DescribeGadInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGadInstanceName()) {
    query["GadInstanceName"] = request.getGadInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeGadInstances"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGadInstancesResponse>();
}

/**
 * @summary DescribeGadInstances
 *
 * @param request DescribeGadInstancesRequest
 * @return DescribeGadInstancesResponse
 */
DescribeGadInstancesResponse Client::describeGadInstances(const DescribeGadInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGadInstancesWithOptions(request, runtime);
}

/**
 * @summary 查询RDS实例的可用性检测方式
 *
 * @param request DescribeHADiagnoseConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHADiagnoseConfigResponse
 */
DescribeHADiagnoseConfigResponse Client::describeHADiagnoseConfigWithOptions(const DescribeHADiagnoseConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHADiagnoseConfig"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHADiagnoseConfigResponse>();
}

/**
 * @summary 查询RDS实例的可用性检测方式
 *
 * @param request DescribeHADiagnoseConfigRequest
 * @return DescribeHADiagnoseConfigResponse
 */
DescribeHADiagnoseConfigResponse Client::describeHADiagnoseConfig(const DescribeHADiagnoseConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHADiagnoseConfigWithOptions(request, runtime);
}

/**
 * @summary 查询HA切换配置
 *
 * @param request DescribeHASwitchConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHASwitchConfigResponse
 */
DescribeHASwitchConfigResponse Client::describeHASwitchConfigWithOptions(const DescribeHASwitchConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHASwitchConfig"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHASwitchConfigResponse>();
}

/**
 * @summary 查询HA切换配置
 *
 * @param request DescribeHASwitchConfigRequest
 * @return DescribeHASwitchConfigResponse
 */
DescribeHASwitchConfigResponse Client::describeHASwitchConfig(const DescribeHASwitchConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHASwitchConfigWithOptions(request, runtime);
}

/**
 * @summary 事件中心事件列表
 *
 * @param request DescribeHistoryEventsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHistoryEventsResponse
 */
DescribeHistoryEventsResponse Client::describeHistoryEventsWithOptions(const DescribeHistoryEventsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasArchiveStatus()) {
    query["ArchiveStatus"] = request.getArchiveStatus();
  }

  if (!!request.hasEventCategory()) {
    query["EventCategory"] = request.getEventCategory();
  }

  if (!!request.hasEventId()) {
    query["EventId"] = request.getEventId();
  }

  if (!!request.hasEventLevel()) {
    query["EventLevel"] = request.getEventLevel();
  }

  if (!!request.hasEventStatus()) {
    query["EventStatus"] = request.getEventStatus();
  }

  if (!!request.hasEventType()) {
    query["EventType"] = request.getEventType();
  }

  if (!!request.hasFromStartTime()) {
    query["FromStartTime"] = request.getFromStartTime();
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

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasToStartTime()) {
    query["ToStartTime"] = request.getToStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHistoryEvents"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHistoryEventsResponse>();
}

/**
 * @summary 事件中心事件列表
 *
 * @param request DescribeHistoryEventsRequest
 * @return DescribeHistoryEventsResponse
 */
DescribeHistoryEventsResponse Client::describeHistoryEvents(const DescribeHistoryEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHistoryEventsWithOptions(request, runtime);
}

/**
 * @summary 事件中心事件统计
 *
 * @param request DescribeHistoryEventsStatRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHistoryEventsStatResponse
 */
DescribeHistoryEventsStatResponse Client::describeHistoryEventsStatWithOptions(const DescribeHistoryEventsStatRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasArchiveStatus()) {
    query["ArchiveStatus"] = request.getArchiveStatus();
  }

  if (!!request.hasFromStartTime()) {
    query["FromStartTime"] = request.getFromStartTime();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasToStartTime()) {
    query["ToStartTime"] = request.getToStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHistoryEventsStat"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHistoryEventsStatResponse>();
}

/**
 * @summary 事件中心事件统计
 *
 * @param request DescribeHistoryEventsStatRequest
 * @return DescribeHistoryEventsStatResponse
 */
DescribeHistoryEventsStatResponse Client::describeHistoryEventsStat(const DescribeHistoryEventsStatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHistoryEventsStatWithOptions(request, runtime);
}

/**
 * @summary 任务中心任务列表
 *
 * @param request DescribeHistoryTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHistoryTasksResponse
 */
DescribeHistoryTasksResponse Client::describeHistoryTasksWithOptions(const DescribeHistoryTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFromExecTime()) {
    query["FromExecTime"] = request.getFromExecTime();
  }

  if (!!request.hasFromStartTime()) {
    query["FromStartTime"] = request.getFromStartTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.getInstanceType();
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

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.getTaskType();
  }

  if (!!request.hasToExecTime()) {
    query["ToExecTime"] = request.getToExecTime();
  }

  if (!!request.hasToStartTime()) {
    query["ToStartTime"] = request.getToStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHistoryTasks"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHistoryTasksResponse>();
}

/**
 * @summary 任务中心任务列表
 *
 * @param request DescribeHistoryTasksRequest
 * @return DescribeHistoryTasksResponse
 */
DescribeHistoryTasksResponse Client::describeHistoryTasks(const DescribeHistoryTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHistoryTasksWithOptions(request, runtime);
}

/**
 * @summary 任务中心任务统计
 *
 * @param request DescribeHistoryTasksStatRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHistoryTasksStatResponse
 */
DescribeHistoryTasksStatResponse Client::describeHistoryTasksStatWithOptions(const DescribeHistoryTasksStatRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFromExecTime()) {
    query["FromExecTime"] = request.getFromExecTime();
  }

  if (!!request.hasFromStartTime()) {
    query["FromStartTime"] = request.getFromStartTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.getTaskType();
  }

  if (!!request.hasToExecTime()) {
    query["ToExecTime"] = request.getToExecTime();
  }

  if (!!request.hasToStartTime()) {
    query["ToStartTime"] = request.getToStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHistoryTasksStat"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHistoryTasksStatResponse>();
}

/**
 * @summary 任务中心任务统计
 *
 * @param request DescribeHistoryTasksStatRequest
 * @return DescribeHistoryTasksStatResponse
 */
DescribeHistoryTasksStatResponse Client::describeHistoryTasksStat(const DescribeHistoryTasksStatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHistoryTasksStatWithOptions(request, runtime);
}

/**
 * @summary Query the elasticity policy parameters of a host group
 *
 * @param request DescribeHostGroupElasticStrategyParametersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHostGroupElasticStrategyParametersResponse
 */
DescribeHostGroupElasticStrategyParametersResponse Client::describeHostGroupElasticStrategyParametersWithOptions(const DescribeHostGroupElasticStrategyParametersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDedicatedHostGroupName()) {
    query["DedicatedHostGroupName"] = request.getDedicatedHostGroupName();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHostGroupElasticStrategyParameters"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHostGroupElasticStrategyParametersResponse>();
}

/**
 * @summary Query the elasticity policy parameters of a host group
 *
 * @param request DescribeHostGroupElasticStrategyParametersRequest
 * @return DescribeHostGroupElasticStrategyParametersResponse
 */
DescribeHostGroupElasticStrategyParametersResponse Client::describeHostGroupElasticStrategyParameters(const DescribeHostGroupElasticStrategyParametersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHostGroupElasticStrategyParametersWithOptions(request, runtime);
}

/**
 * @summary 查询实例的WebShell信息
 *
 * @param request DescribeHostWebShellRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHostWebShellResponse
 */
DescribeHostWebShellResponse Client::describeHostWebShellWithOptions(const DescribeHostWebShellRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.getAccountName();
  }

  if (!!request.hasAccountPassword()) {
    query["AccountPassword"] = request.getAccountPassword();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasHostName()) {
    query["HostName"] = request.getHostName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionID()) {
    query["RegionID"] = request.getRegionID();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHostWebShell"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHostWebShellResponse>();
}

/**
 * @summary 查询实例的WebShell信息
 *
 * @param request DescribeHostWebShellRequest
 * @return DescribeHostWebShellResponse
 */
DescribeHostWebShellResponse Client::describeHostWebShell(const DescribeHostWebShellRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHostWebShellWithOptions(request, runtime);
}

/**
 * @summary RDS native replication instance, query data import job details
 *
 * @description Query the details of an import job
 *
 * @param request DescribeImportTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeImportTaskResponse
 */
DescribeImportTaskResponse Client::describeImportTaskWithOptions(const DescribeImportTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeImportTask"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeImportTaskResponse>();
}

/**
 * @summary RDS native replication instance, query data import job details
 *
 * @description Query the details of an import job
 *
 * @param request DescribeImportTaskRequest
 * @return DescribeImportTaskResponse
 */
DescribeImportTaskResponse Client::describeImportTask(const DescribeImportTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeImportTaskWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a precheck for an import job and returns specific precheck items and their results.
 *
 * @description Queries the details of a precheck for an import job.
 *
 * @param request DescribeImportTaskValidationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeImportTaskValidationResponse
 */
DescribeImportTaskValidationResponse Client::describeImportTaskValidationWithOptions(const DescribeImportTaskValidationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbInstanceId()) {
    query["DbInstanceId"] = request.getDbInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeImportTaskValidation"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeImportTaskValidationResponse>();
}

/**
 * @summary Queries the details of a precheck for an import job and returns specific precheck items and their results.
 *
 * @description Queries the details of a precheck for an import job.
 *
 * @param request DescribeImportTaskValidationRequest
 * @return DescribeImportTaskValidationResponse
 */
DescribeImportTaskValidationResponse Client::describeImportTaskValidation(const DescribeImportTaskValidationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeImportTaskValidationWithOptions(request, runtime);
}

/**
 * @summary 查询实例自动续费属性
 *
 * @param request DescribeInstanceAutoRenewalAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceAutoRenewalAttributeResponse
 */
DescribeInstanceAutoRenewalAttributeResponse Client::describeInstanceAutoRenewalAttributeWithOptions(const DescribeInstanceAutoRenewalAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasProxyId()) {
    query["proxyId"] = request.getProxyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceAutoRenewalAttribute"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceAutoRenewalAttributeResponse>();
}

/**
 * @summary 查询实例自动续费属性
 *
 * @param request DescribeInstanceAutoRenewalAttributeRequest
 * @return DescribeInstanceAutoRenewalAttributeResponse
 */
DescribeInstanceAutoRenewalAttributeResponse Client::describeInstanceAutoRenewalAttribute(const DescribeInstanceAutoRenewalAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceAutoRenewalAttributeWithOptions(request, runtime);
}

/**
 * @summary 查询实例跨备份策略
 *
 * @param request DescribeInstanceCrossBackupPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceCrossBackupPolicyResponse
 */
DescribeInstanceCrossBackupPolicyResponse Client::describeInstanceCrossBackupPolicyWithOptions(const DescribeInstanceCrossBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceCrossBackupPolicy"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceCrossBackupPolicyResponse>();
}

/**
 * @summary 查询实例跨备份策略
 *
 * @param request DescribeInstanceCrossBackupPolicyRequest
 * @return DescribeInstanceCrossBackupPolicyResponse
 */
DescribeInstanceCrossBackupPolicyResponse Client::describeInstanceCrossBackupPolicy(const DescribeInstanceCrossBackupPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceCrossBackupPolicyWithOptions(request, runtime);
}

/**
 * @summary 查询RDS实例的保留关键字，即创建数据库或账号时禁用的关键字
 *
 * @param request DescribeInstanceKeywordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceKeywordsResponse
 */
DescribeInstanceKeywordsResponse Client::describeInstanceKeywordsWithOptions(const DescribeInstanceKeywordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKey()) {
    query["Key"] = request.getKey();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceKeywords"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceKeywordsResponse>();
}

/**
 * @summary 查询RDS实例的保留关键字，即创建数据库或账号时禁用的关键字
 *
 * @param request DescribeInstanceKeywordsRequest
 * @return DescribeInstanceKeywordsResponse
 */
DescribeInstanceKeywordsResponse Client::describeInstanceKeywords(const DescribeInstanceKeywordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceKeywordsWithOptions(request, runtime);
}

/**
 * @summary 查询实例关联白名单模板
 *
 * @param request DescribeInstanceLinkedWhitelistTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceLinkedWhitelistTemplateResponse
 */
DescribeInstanceLinkedWhitelistTemplateResponse Client::describeInstanceLinkedWhitelistTemplateWithOptions(const DescribeInstanceLinkedWhitelistTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInsName()) {
    query["InsName"] = request.getInsName();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceLinkedWhitelistTemplate"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceLinkedWhitelistTemplateResponse>();
}

/**
 * @summary 查询实例关联白名单模板
 *
 * @param request DescribeInstanceLinkedWhitelistTemplateRequest
 * @return DescribeInstanceLinkedWhitelistTemplateResponse
 */
DescribeInstanceLinkedWhitelistTemplateResponse Client::describeInstanceLinkedWhitelistTemplate(const DescribeInstanceLinkedWhitelistTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceLinkedWhitelistTemplateWithOptions(request, runtime);
}

/**
 * @summary 检测kms资源是否关联rds实例
 *
 * @param request DescribeKmsAssociateResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeKmsAssociateResourcesResponse
 */
DescribeKmsAssociateResourcesResponse Client::describeKmsAssociateResourcesWithOptions(const DescribeKmsAssociateResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasKmsResourceId()) {
    query["KmsResourceId"] = request.getKmsResourceId();
  }

  if (!!request.hasKmsResourceRegionId()) {
    query["KmsResourceRegionId"] = request.getKmsResourceRegionId();
  }

  if (!!request.hasKmsResourceType()) {
    query["KmsResourceType"] = request.getKmsResourceType();
  }

  if (!!request.hasKmsResourceUser()) {
    query["KmsResourceUser"] = request.getKmsResourceUser();
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

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeKmsAssociateResources"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeKmsAssociateResourcesResponse>();
}

/**
 * @summary 检测kms资源是否关联rds实例
 *
 * @param request DescribeKmsAssociateResourcesRequest
 * @return DescribeKmsAssociateResourcesResponse
 */
DescribeKmsAssociateResourcesResponse Client::describeKmsAssociateResources(const DescribeKmsAssociateResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeKmsAssociateResourcesWithOptions(request, runtime);
}

/**
 * @summary 查询本地可用恢复时间
 *
 * @param request DescribeLocalAvailableRecoveryTimeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLocalAvailableRecoveryTimeResponse
 */
DescribeLocalAvailableRecoveryTimeResponse Client::describeLocalAvailableRecoveryTimeWithOptions(const DescribeLocalAvailableRecoveryTimeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLocalAvailableRecoveryTime"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLocalAvailableRecoveryTimeResponse>();
}

/**
 * @summary 查询本地可用恢复时间
 *
 * @param request DescribeLocalAvailableRecoveryTimeRequest
 * @return DescribeLocalAvailableRecoveryTimeResponse
 */
DescribeLocalAvailableRecoveryTimeResponse Client::describeLocalAvailableRecoveryTime(const DescribeLocalAvailableRecoveryTimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLocalAvailableRecoveryTimeWithOptions(request, runtime);
}

/**
 * @summary 查询日志备份文件
 *
 * @param request DescribeLogBackupFilesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLogBackupFilesResponse
 */
DescribeLogBackupFilesResponse Client::describeLogBackupFilesWithOptions(const DescribeLogBackupFilesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

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

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLogBackupFiles"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLogBackupFilesResponse>();
}

/**
 * @summary 查询日志备份文件
 *
 * @param request DescribeLogBackupFilesRequest
 * @return DescribeLogBackupFilesResponse
 */
DescribeLogBackupFilesResponse Client::describeLogBackupFiles(const DescribeLogBackupFilesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLogBackupFilesWithOptions(request, runtime);
}

/**
 * @summary Obtain information about instances pending upgrade in the RDS Marketing project
 *
 * @param request DescribeMarketingActivityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMarketingActivityResponse
 */
DescribeMarketingActivityResponse Client::describeMarketingActivityWithOptions(const DescribeMarketingActivityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliUid()) {
    query["AliUid"] = request.getAliUid();
  }

  if (!!request.hasBid()) {
    query["Bid"] = request.getBid();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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

  if (!!request.hasUpgradeCode()) {
    query["UpgradeCode"] = request.getUpgradeCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMarketingActivity"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMarketingActivityResponse>();
}

/**
 * @summary Obtain information about instances pending upgrade in the RDS Marketing project
 *
 * @param request DescribeMarketingActivityRequest
 * @return DescribeMarketingActivityResponse
 */
DescribeMarketingActivityResponse Client::describeMarketingActivity(const DescribeMarketingActivityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMarketingActivityWithOptions(request, runtime);
}

/**
 * @summary Query the list of encryption or desensitization rules for a specified instance.
 *
 * @description ## Request Description  
 * - Before using this API, ensure that you have enabled the column encryption service in the DAS Security Center.  
 * - If you receive the error message ColumnEncryptionErrorCode.NOT_PURCHASED when invoking the API, go to the DAS (Database Autonomy Service) Security Center to purchase and enable the column encryption service before using it again.
 *
 * @param request DescribeMaskingRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMaskingRulesResponse
 */
DescribeMaskingRulesResponse Client::describeMaskingRulesWithOptions(const DescribeMaskingRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.getDBName();
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

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMaskingRules"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMaskingRulesResponse>();
}

/**
 * @summary Query the list of encryption or desensitization rules for a specified instance.
 *
 * @description ## Request Description  
 * - Before using this API, ensure that you have enabled the column encryption service in the DAS Security Center.  
 * - If you receive the error message ColumnEncryptionErrorCode.NOT_PURCHASED when invoking the API, go to the DAS (Database Autonomy Service) Security Center to purchase and enable the column encryption service before using it again.
 *
 * @param request DescribeMaskingRulesRequest
 * @return DescribeMaskingRulesResponse
 */
DescribeMaskingRulesResponse Client::describeMaskingRules(const DescribeMaskingRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMaskingRulesWithOptions(request, runtime);
}

/**
 * @summary 查询目标备份集中可恢复的库表信息
 *
 * @param request DescribeMetaListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMetaListResponse
 */
DescribeMetaListResponse Client::describeMetaListWithOptions(const DescribeMetaListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupSetID()) {
    query["BackupSetID"] = request.getBackupSetID();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasGetDbName()) {
    query["GetDbName"] = request.getGetDbName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageIndex()) {
    query["PageIndex"] = request.getPageIndex();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPattern()) {
    query["Pattern"] = request.getPattern();
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

  if (!!request.hasRestoreTime()) {
    query["RestoreTime"] = request.getRestoreTime();
  }

  if (!!request.hasRestoreType()) {
    query["RestoreType"] = request.getRestoreType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMetaList"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMetaListResponse>();
}

/**
 * @summary 查询目标备份集中可恢复的库表信息
 *
 * @param request DescribeMetaListRequest
 * @return DescribeMetaListResponse
 */
DescribeMetaListResponse Client::describeMetaList(const DescribeMetaListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMetaListWithOptions(request, runtime);
}

/**
 * @summary 通过迁移任务id查询迁移任务
 *
 * @param request DescribeMigrateTaskByIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMigrateTaskByIdResponse
 */
DescribeMigrateTaskByIdResponse Client::describeMigrateTaskByIdWithOptions(const DescribeMigrateTaskByIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasMigrateTaskId()) {
    query["MigrateTaskId"] = request.getMigrateTaskId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMigrateTaskById"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMigrateTaskByIdResponse>();
}

/**
 * @summary 通过迁移任务id查询迁移任务
 *
 * @param request DescribeMigrateTaskByIdRequest
 * @return DescribeMigrateTaskByIdResponse
 */
DescribeMigrateTaskByIdResponse Client::describeMigrateTaskById(const DescribeMigrateTaskByIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMigrateTaskByIdWithOptions(request, runtime);
}

/**
 * @summary 查询迁移任务
 *
 * @param request DescribeMigrateTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMigrateTasksResponse
 */
DescribeMigrateTasksResponse Client::describeMigrateTasksWithOptions(const DescribeMigrateTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
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

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMigrateTasks"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMigrateTasksResponse>();
}

/**
 * @summary 查询迁移任务
 *
 * @param request DescribeMigrateTasksRequest
 * @return DescribeMigrateTasksResponse
 */
DescribeMigrateTasksResponse Client::describeMigrateTasks(const DescribeMigrateTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMigrateTasksWithOptions(request, runtime);
}

/**
 * @summary 查询PostgreSQL实例Hba配置变更日志
 *
 * @param request DescribeModifyPGHbaConfigLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeModifyPGHbaConfigLogResponse
 */
DescribeModifyPGHbaConfigLogResponse Client::describeModifyPGHbaConfigLogWithOptions(const DescribeModifyPGHbaConfigLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeModifyPGHbaConfigLog"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeModifyPGHbaConfigLogResponse>();
}

/**
 * @summary 查询PostgreSQL实例Hba配置变更日志
 *
 * @param request DescribeModifyPGHbaConfigLogRequest
 * @return DescribeModifyPGHbaConfigLogResponse
 */
DescribeModifyPGHbaConfigLogResponse Client::describeModifyPGHbaConfigLog(const DescribeModifyPGHbaConfigLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeModifyPGHbaConfigLogWithOptions(request, runtime);
}

/**
 * @summary 查询变更参数模板日志
 *
 * @param request DescribeModifyParameterLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeModifyParameterLogResponse
 */
DescribeModifyParameterLogResponse Client::describeModifyParameterLogWithOptions(const DescribeModifyParameterLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

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

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeModifyParameterLog"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeModifyParameterLogResponse>();
}

/**
 * @summary 查询变更参数模板日志
 *
 * @param request DescribeModifyParameterLogRequest
 * @return DescribeModifyParameterLogResponse
 */
DescribeModifyParameterLogResponse Client::describeModifyParameterLog(const DescribeModifyParameterLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeModifyParameterLogWithOptions(request, runtime);
}

/**
 * @summary 查询OSS下载
 *
 * @param request DescribeOssDownloadsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOssDownloadsResponse
 */
DescribeOssDownloadsResponse Client::describeOssDownloadsWithOptions(const DescribeOssDownloadsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasMigrateTaskId()) {
    query["MigrateTaskId"] = request.getMigrateTaskId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeOssDownloads"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeOssDownloadsResponse>();
}

/**
 * @summary 查询OSS下载
 *
 * @param request DescribeOssDownloadsRequest
 * @return DescribeOssDownloadsResponse
 */
DescribeOssDownloadsResponse Client::describeOssDownloads(const DescribeOssDownloadsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOssDownloadsWithOptions(request, runtime);
}

/**
 * @summary 查询PostgreSQL实例HBA配置
 *
 * @param request DescribePGHbaConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePGHbaConfigResponse
 */
DescribePGHbaConfigResponse Client::describePGHbaConfigWithOptions(const DescribePGHbaConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePGHbaConfig"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePGHbaConfigResponse>();
}

/**
 * @summary 查询PostgreSQL实例HBA配置
 *
 * @param request DescribePGHbaConfigRequest
 * @return DescribePGHbaConfigResponse
 */
DescribePGHbaConfigResponse Client::describePGHbaConfig(const DescribePGHbaConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePGHbaConfigWithOptions(request, runtime);
}

/**
 * @summary 查询目标参数模板详情
 *
 * @param request DescribeParameterGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeParameterGroupResponse
 */
DescribeParameterGroupResponse Client::describeParameterGroupWithOptions(const DescribeParameterGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasParameterGroupId()) {
    query["ParameterGroupId"] = request.getParameterGroupId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeParameterGroup"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeParameterGroupResponse>();
}

/**
 * @summary 查询目标参数模板详情
 *
 * @param request DescribeParameterGroupRequest
 * @return DescribeParameterGroupResponse
 */
DescribeParameterGroupResponse Client::describeParameterGroup(const DescribeParameterGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeParameterGroupWithOptions(request, runtime);
}

/**
 * @summary 查看目标地域的参数模板列表
 *
 * @param request DescribeParameterGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeParameterGroupsResponse
 */
DescribeParameterGroupsResponse Client::describeParameterGroupsWithOptions(const DescribeParameterGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnableDetail()) {
    query["EnableDetail"] = request.getEnableDetail();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeParameterGroups"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeParameterGroupsResponse>();
}

/**
 * @summary 查看目标地域的参数模板列表
 *
 * @param request DescribeParameterGroupsRequest
 * @return DescribeParameterGroupsResponse
 */
DescribeParameterGroupsResponse Client::describeParameterGroups(const DescribeParameterGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeParameterGroupsWithOptions(request, runtime);
}

/**
 * @summary 查询参数模板列表
 *
 * @param request DescribeParameterTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeParameterTemplatesResponse
 */
DescribeParameterTemplatesResponse Client::describeParameterTemplatesWithOptions(const DescribeParameterTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategory()) {
    query["Category"] = request.getCategory();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.getEngine();
  }

  if (!!request.hasEngineVersion()) {
    query["EngineVersion"] = request.getEngineVersion();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeParameterTemplates"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeParameterTemplatesResponse>();
}

/**
 * @summary 查询参数模板列表
 *
 * @param request DescribeParameterTemplatesRequest
 * @return DescribeParameterTemplatesResponse
 */
DescribeParameterTemplatesResponse Client::describeParameterTemplates(const DescribeParameterTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeParameterTemplatesWithOptions(request, runtime);
}

/**
 * @summary Query the details of a scheduled task for modifying instance parameters.
 *
 * @description ### Applicable Engines
 * - RDS MySQL
 * - RDS PostgreSQL
 * ### Related Function Documentation
 * >Notice: Before using this API, carefully read the function documentation to ensure you fully understand the prerequisites for using the API and the impact it may cause after use, and then perform the operation.
 * - [Set Instance Parameters for RDS MySQL](https://help.aliyun.com/document_detail/96063.html)
 * - [Set Instance Parameters for RDS PostgreSQL](https://help.aliyun.com/document_detail/96751.html)
 *
 * @param request DescribeParameterTimedScheduleTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeParameterTimedScheduleTaskResponse
 */
DescribeParameterTimedScheduleTaskResponse Client::describeParameterTimedScheduleTaskWithOptions(const DescribeParameterTimedScheduleTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeParameterTimedScheduleTask"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeParameterTimedScheduleTaskResponse>();
}

/**
 * @summary Query the details of a scheduled task for modifying instance parameters.
 *
 * @description ### Applicable Engines
 * - RDS MySQL
 * - RDS PostgreSQL
 * ### Related Function Documentation
 * >Notice: Before using this API, carefully read the function documentation to ensure you fully understand the prerequisites for using the API and the impact it may cause after use, and then perform the operation.
 * - [Set Instance Parameters for RDS MySQL](https://help.aliyun.com/document_detail/96063.html)
 * - [Set Instance Parameters for RDS PostgreSQL](https://help.aliyun.com/document_detail/96751.html)
 *
 * @param request DescribeParameterTimedScheduleTaskRequest
 * @return DescribeParameterTimedScheduleTaskResponse
 */
DescribeParameterTimedScheduleTaskResponse Client::describeParameterTimedScheduleTask(const DescribeParameterTimedScheduleTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeParameterTimedScheduleTaskWithOptions(request, runtime);
}

/**
 * @summary 查询RDS实例参数
 *
 * @param request DescribeParametersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeParametersResponse
 */
DescribeParametersResponse Client::describeParametersWithOptions(const DescribeParametersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeParameters"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeParametersResponse>();
}

/**
 * @summary 查询RDS实例参数
 *
 * @param request DescribeParametersRequest
 * @return DescribeParametersResponse
 */
DescribeParametersResponse Client::describeParameters(const DescribeParametersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeParametersWithOptions(request, runtime);
}

/**
 * @summary 获取插件信息
 *
 * @param request DescribePostgresExtensionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePostgresExtensionsResponse
 */
DescribePostgresExtensionsResponse Client::describePostgresExtensionsWithOptions(const DescribePostgresExtensionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.getDBName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePostgresExtensions"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePostgresExtensionsResponse>();
}

/**
 * @summary 获取插件信息
 *
 * @param request DescribePostgresExtensionsRequest
 * @return DescribePostgresExtensionsResponse
 */
DescribePostgresExtensionsResponse Client::describePostgresExtensions(const DescribePostgresExtensionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePostgresExtensionsWithOptions(request, runtime);
}

/**
 * @summary 查询价格
 *
 * @param tmpReq DescribePriceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePriceResponse
 */
DescribePriceResponse Client::describePriceWithOptions(const DescribePriceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribePriceShrinkRequest request = DescribePriceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDBNode()) {
    request.setDBNodeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDBNode(), "DBNode", "json"));
  }

  if (!!tmpReq.hasServerlessConfig()) {
    request.setServerlessConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getServerlessConfig(), "ServerlessConfig", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCommodityCode()) {
    query["CommodityCode"] = request.getCommodityCode();
  }

  if (!!request.hasDBInstanceClass()) {
    query["DBInstanceClass"] = request.getDBInstanceClass();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBInstanceStorage()) {
    query["DBInstanceStorage"] = request.getDBInstanceStorage();
  }

  if (!!request.hasDBInstanceStorageType()) {
    query["DBInstanceStorageType"] = request.getDBInstanceStorageType();
  }

  if (!!request.hasDBNodeShrink()) {
    query["DBNode"] = request.getDBNodeShrink();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.getEngine();
  }

  if (!!request.hasEngineVersion()) {
    query["EngineVersion"] = request.getEngineVersion();
  }

  if (!!request.hasInstanceUsedType()) {
    query["InstanceUsedType"] = request.getInstanceUsedType();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
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

  if (!!request.hasQuantity()) {
    query["Quantity"] = request.getQuantity();
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

  if (!!request.hasServerlessConfigShrink()) {
    query["ServerlessConfig"] = request.getServerlessConfigShrink();
  }

  if (!!request.hasTimeType()) {
    query["TimeType"] = request.getTimeType();
  }

  if (!!request.hasUsedTime()) {
    query["UsedTime"] = request.getUsedTime();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePrice"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePriceResponse>();
}

/**
 * @summary 查询价格
 *
 * @param request DescribePriceRequest
 * @return DescribePriceResponse
 */
DescribePriceResponse Client::describePrice(const DescribePriceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePriceWithOptions(request, runtime);
}

/**
 * @summary Query RDS quick sale configuration
 *
 * @param request DescribeQuickSaleConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeQuickSaleConfigResponse
 */
DescribeQuickSaleConfigResponse Client::describeQuickSaleConfigWithOptions(const DescribeQuickSaleConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCommodity()) {
    query["Commodity"] = request.getCommodity();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.getEngine();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeQuickSaleConfig"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeQuickSaleConfigResponse>();
}

/**
 * @summary Query RDS quick sale configuration
 *
 * @param request DescribeQuickSaleConfigRequest
 * @return DescribeQuickSaleConfigResponse
 */
DescribeQuickSaleConfigResponse Client::describeQuickSaleConfig(const DescribeQuickSaleConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeQuickSaleConfigWithOptions(request, runtime);
}

/**
 * @summary 查询可用区的资源库存
 *
 * @param request DescribeRCAvailableResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRCAvailableResourceResponse
 */
DescribeRCAvailableResourceResponse Client::describeRCAvailableResourceWithOptions(const DescribeRCAvailableResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCores()) {
    query["Cores"] = request.getCores();
  }

  if (!!request.hasDataDiskCategory()) {
    query["DataDiskCategory"] = request.getDataDiskCategory();
  }

  if (!!request.hasDedicatedHostId()) {
    query["DedicatedHostId"] = request.getDedicatedHostId();
  }

  if (!!request.hasDestinationResource()) {
    query["DestinationResource"] = request.getDestinationResource();
  }

  if (!!request.hasInstanceChargeType()) {
    query["InstanceChargeType"] = request.getInstanceChargeType();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.getInstanceType();
  }

  if (!!request.hasIoOptimized()) {
    query["IoOptimized"] = request.getIoOptimized();
  }

  if (!!request.hasMemory()) {
    query["Memory"] = request.getMemory();
  }

  if (!!request.hasNetworkCategory()) {
    query["NetworkCategory"] = request.getNetworkCategory();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasScope()) {
    query["Scope"] = request.getScope();
  }

  if (!!request.hasSpotDuration()) {
    query["SpotDuration"] = request.getSpotDuration();
  }

  if (!!request.hasSpotStrategy()) {
    query["SpotStrategy"] = request.getSpotStrategy();
  }

  if (!!request.hasSystemDiskCategory()) {
    query["SystemDiskCategory"] = request.getSystemDiskCategory();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRCAvailableResource"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRCAvailableResourceResponse>();
}

/**
 * @summary 查询可用区的资源库存
 *
 * @param request DescribeRCAvailableResourceRequest
 * @return DescribeRCAvailableResourceResponse
 */
DescribeRCAvailableResourceResponse Client::describeRCAvailableResource(const DescribeRCAvailableResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRCAvailableResourceWithOptions(request, runtime);
}

/**
 * @summary 查询云助手安装状态
 *
 * @param tmpReq DescribeRCCloudAssistantStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRCCloudAssistantStatusResponse
 */
DescribeRCCloudAssistantStatusResponse Client::describeRCCloudAssistantStatusWithOptions(const DescribeRCCloudAssistantStatusRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeRCCloudAssistantStatusShrinkRequest request = DescribeRCCloudAssistantStatusShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInstanceIds()) {
    request.setInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInstanceIds(), "InstanceIds", "json"));
  }

  json query = {};
  if (!!request.hasInstanceIdsShrink()) {
    query["InstanceIds"] = request.getInstanceIdsShrink();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOSType()) {
    query["OSType"] = request.getOSType();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRCCloudAssistantStatus"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRCCloudAssistantStatusResponse>();
}

/**
 * @summary 查询云助手安装状态
 *
 * @param request DescribeRCCloudAssistantStatusRequest
 * @return DescribeRCCloudAssistantStatusResponse
 */
DescribeRCCloudAssistantStatusResponse Client::describeRCCloudAssistantStatus(const DescribeRCCloudAssistantStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRCCloudAssistantStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the kubeconfig file of a Container Service for Kubernetes (ACK) cluster in which an RDS Custom instance resides.
 *
 * @param request DescribeRCClusterConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRCClusterConfigResponse
 */
DescribeRCClusterConfigResponse Client::describeRCClusterConfigWithOptions(const DescribeRCClusterConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTemporaryDurationMinutes()) {
    query["TemporaryDurationMinutes"] = request.getTemporaryDurationMinutes();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRCClusterConfig"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRCClusterConfigResponse>();
}

/**
 * @summary Queries the kubeconfig file of a Container Service for Kubernetes (ACK) cluster in which an RDS Custom instance resides.
 *
 * @param request DescribeRCClusterConfigRequest
 * @return DescribeRCClusterConfigResponse
 */
DescribeRCClusterConfigResponse Client::describeRCClusterConfig(const DescribeRCClusterConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRCClusterConfigWithOptions(request, runtime);
}

/**
 * @summary Queries the RDS custom nodes in a Container Service for Kubernetes (ACK) cluster.
 *
 * @param request DescribeRCClusterNodesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRCClusterNodesResponse
 */
DescribeRCClusterNodesResponse Client::describeRCClusterNodesWithOptions(const DescribeRCClusterNodesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasNodePoolId()) {
    query["NodePoolId"] = request.getNodePoolId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRCClusterNodes"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRCClusterNodesResponse>();
}

/**
 * @summary Queries the RDS custom nodes in a Container Service for Kubernetes (ACK) cluster.
 *
 * @param request DescribeRCClusterNodesRequest
 * @return DescribeRCClusterNodesResponse
 */
DescribeRCClusterNodesResponse Client::describeRCClusterNodes(const DescribeRCClusterNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRCClusterNodesWithOptions(request, runtime);
}

/**
 * @summary 查询RDS Custom集群列表
 *
 * @param request DescribeRCClustersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRCClustersResponse
 */
DescribeRCClustersResponse Client::describeRCClustersWithOptions(const DescribeRCClustersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProfile()) {
    query["Profile"] = request.getProfile();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRCClusters"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRCClustersResponse>();
}

/**
 * @summary 查询RDS Custom集群列表
 *
 * @param request DescribeRCClustersRequest
 * @return DescribeRCClustersResponse
 */
DescribeRCClustersResponse Client::describeRCClusters(const DescribeRCClustersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRCClustersWithOptions(request, runtime);
}

/**
 * @summary 描述RDS CUSTOM部署集
 *
 * @param request DescribeRCDeploymentSetsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRCDeploymentSetsResponse
 */
DescribeRCDeploymentSetsResponse Client::describeRCDeploymentSetsWithOptions(const DescribeRCDeploymentSetsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRCDeploymentSets"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRCDeploymentSetsResponse>();
}

/**
 * @summary 描述RDS CUSTOM部署集
 *
 * @param request DescribeRCDeploymentSetsRequest
 * @return DescribeRCDeploymentSetsResponse
 */
DescribeRCDeploymentSetsResponse Client::describeRCDeploymentSets(const DescribeRCDeploymentSetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRCDeploymentSetsWithOptions(request, runtime);
}

/**
 * @summary Invoke the DescribeRCDisks API to view disk information of RDS Custom instances.
 *
 * @param request DescribeRCDisksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRCDisksResponse
 */
DescribeRCDisksResponse Client::describeRCDisksWithOptions(const DescribeRCDisksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRCDisks"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRCDisksResponse>();
}

/**
 * @summary Invoke the DescribeRCDisks API to view disk information of RDS Custom instances.
 *
 * @param request DescribeRCDisksRequest
 * @return DescribeRCDisksResponse
 */
DescribeRCDisksResponse Client::describeRCDisks(const DescribeRCDisksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRCDisksWithOptions(request, runtime);
}

/**
 * @summary 查询RDS用户专属主机实例
 *
 * @param request DescribeRCElasticScalingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRCElasticScalingResponse
 */
DescribeRCElasticScalingResponse Client::describeRCElasticScalingWithOptions(const DescribeRCElasticScalingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceChargeType()) {
    query["InstanceChargeType"] = request.getInstanceChargeType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.getInstanceType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSupportCase()) {
    query["SupportCase"] = request.getSupportCase();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRCElasticScaling"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRCElasticScalingResponse>();
}

/**
 * @summary 查询RDS用户专属主机实例
 *
 * @param request DescribeRCElasticScalingRequest
 * @return DescribeRCElasticScalingResponse
 */
DescribeRCElasticScalingResponse Client::describeRCElasticScaling(const DescribeRCElasticScalingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRCElasticScalingWithOptions(request, runtime);
}

/**
 * @summary Invoke the DescribeRCImageList API and specify parameters such as RegionId to query the list of custom images that can be used to create RDS Custom instances.
 *
 * @param request DescribeRCImageListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRCImageListResponse
 */
DescribeRCImageListResponse Client::describeRCImageListWithOptions(const DescribeRCImageListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRCImageList"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRCImageListResponse>();
}

/**
 * @summary Invoke the DescribeRCImageList API and specify parameters such as RegionId to query the list of custom images that can be used to create RDS Custom instances.
 *
 * @param request DescribeRCImageListRequest
 * @return DescribeRCImageListResponse
 */
DescribeRCImageListResponse Client::describeRCImageList(const DescribeRCImageListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRCImageListWithOptions(request, runtime);
}

/**
 * @summary Invoke the DescribeRCInstanceAttribute API to query the details of a single RDS Custom instance.
 *
 * @param request DescribeRCInstanceAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRCInstanceAttributeResponse
 */
DescribeRCInstanceAttributeResponse Client::describeRCInstanceAttributeWithOptions(const DescribeRCInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasMaxDisksResults()) {
    query["MaxDisksResults"] = request.getMaxDisksResults();
  }

  if (!!request.hasPrivateIpAddress()) {
    query["PrivateIpAddress"] = request.getPrivateIpAddress();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRCInstanceAttribute"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRCInstanceAttributeResponse>();
}

/**
 * @summary Invoke the DescribeRCInstanceAttribute API to query the details of a single RDS Custom instance.
 *
 * @param request DescribeRCInstanceAttributeRequest
 * @return DescribeRCInstanceAttributeResponse
 */
DescribeRCInstanceAttributeResponse Client::describeRCInstanceAttribute(const DescribeRCInstanceAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRCInstanceAttributeWithOptions(request, runtime);
}

/**
 * @summary 查询RDS Custom实例被DDos攻击的数量
 *
 * @param request DescribeRCInstanceDdosCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRCInstanceDdosCountResponse
 */
DescribeRCInstanceDdosCountResponse Client::describeRCInstanceDdosCountWithOptions(const DescribeRCInstanceDdosCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDdosRegionId()) {
    query["DdosRegionId"] = request.getDdosRegionId();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.getInstanceType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRCInstanceDdosCount"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRCInstanceDdosCountResponse>();
}

/**
 * @summary 查询RDS Custom实例被DDos攻击的数量
 *
 * @param request DescribeRCInstanceDdosCountRequest
 * @return DescribeRCInstanceDdosCountResponse
 */
DescribeRCInstanceDdosCountResponse Client::describeRCInstanceDdosCount(const DescribeRCInstanceDdosCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRCInstanceDdosCountWithOptions(request, runtime);
}

/**
 * @summary 查询指定实例系统事件信息
 *
 * @param request DescribeRCInstanceHistoryEventsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRCInstanceHistoryEventsResponse
 */
DescribeRCInstanceHistoryEventsResponse Client::describeRCInstanceHistoryEventsWithOptions(const DescribeRCInstanceHistoryEventsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEventCycleStatus()) {
    query["EventCycleStatus"] = request.getEventCycleStatus();
  }

  if (!!request.hasEventId()) {
    query["EventId"] = request.getEventId();
  }

  if (!!request.hasEventType()) {
    query["EventType"] = request.getEventType();
  }

  if (!!request.hasImpactLevel()) {
    query["ImpactLevel"] = request.getImpactLevel();
  }

  if (!!request.hasInstanceEventCycleStatus()) {
    query["InstanceEventCycleStatus"] = request.getInstanceEventCycleStatus();
  }

  if (!!request.hasInstanceEventType()) {
    query["InstanceEventType"] = request.getInstanceEventType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
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

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasEventPublishTime()) {
    query["EventPublishTime"] = request.getEventPublishTime();
  }

  if (!!request.hasNotBefore()) {
    query["NotBefore"] = request.getNotBefore();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRCInstanceHistoryEvents"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRCInstanceHistoryEventsResponse>();
}

/**
 * @summary 查询指定实例系统事件信息
 *
 * @param request DescribeRCInstanceHistoryEventsRequest
 * @return DescribeRCInstanceHistoryEventsResponse
 */
DescribeRCInstanceHistoryEventsResponse Client::describeRCInstanceHistoryEvents(const DescribeRCInstanceHistoryEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRCInstanceHistoryEventsWithOptions(request, runtime);
}

/**
 * @summary 查询RDS Custom实例的公网IP
 *
 * @param request DescribeRCInstanceIpAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRCInstanceIpAddressResponse
 */
DescribeRCInstanceIpAddressResponse Client::describeRCInstanceIpAddressWithOptions(const DescribeRCInstanceIpAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDdosRegionId()) {
    query["DdosRegionId"] = request.getDdosRegionId();
  }

  if (!!request.hasDdosStatus()) {
    query["DdosStatus"] = request.getDdosStatus();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceIp()) {
    query["InstanceIp"] = request.getInstanceIp();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.getInstanceType();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRCInstanceIpAddress"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRCInstanceIpAddressResponse>();
}

/**
 * @summary 查询RDS Custom实例的公网IP
 *
 * @param request DescribeRCInstanceIpAddressRequest
 * @return DescribeRCInstanceIpAddressResponse
 */
DescribeRCInstanceIpAddressResponse Client::describeRCInstanceIpAddress(const DescribeRCInstanceIpAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRCInstanceIpAddressWithOptions(request, runtime);
}

/**
 * @summary 查询rds_custom实例规格族列表
 *
 * @param request DescribeRCInstanceTypeFamiliesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRCInstanceTypeFamiliesResponse
 */
DescribeRCInstanceTypeFamiliesResponse Client::describeRCInstanceTypeFamiliesWithOptions(const DescribeRCInstanceTypeFamiliesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRCInstanceTypeFamilies"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRCInstanceTypeFamiliesResponse>();
}

/**
 * @summary 查询rds_custom实例规格族列表
 *
 * @param request DescribeRCInstanceTypeFamiliesRequest
 * @return DescribeRCInstanceTypeFamiliesResponse
 */
DescribeRCInstanceTypeFamiliesResponse Client::describeRCInstanceTypeFamilies(const DescribeRCInstanceTypeFamiliesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRCInstanceTypeFamiliesWithOptions(request, runtime);
}

/**
 * @summary 查询RDS Custom规格信息
 *
 * @param tmpReq DescribeRCInstanceTypesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRCInstanceTypesResponse
 */
DescribeRCInstanceTypesResponse Client::describeRCInstanceTypesWithOptions(const DescribeRCInstanceTypesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeRCInstanceTypesShrinkRequest request = DescribeRCInstanceTypesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInstanceType()) {
    request.setInstanceTypeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInstanceType(), "InstanceType", "simple"));
  }

  json query = {};
  if (!!request.hasCommodityCode()) {
    query["CommodityCode"] = request.getCommodityCode();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.getEngine();
  }

  if (!!request.hasInstanceTypeShrink()) {
    query["InstanceType"] = request.getInstanceTypeShrink();
  }

  if (!!request.hasInstanceTypeFamily()) {
    query["InstanceTypeFamily"] = request.getInstanceTypeFamily();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRCInstanceTypes"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRCInstanceTypesResponse>();
}

/**
 * @summary 查询RDS Custom规格信息
 *
 * @param request DescribeRCInstanceTypesRequest
 * @return DescribeRCInstanceTypesResponse
 */
DescribeRCInstanceTypesResponse Client::describeRCInstanceTypes(const DescribeRCInstanceTypesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRCInstanceTypesWithOptions(request, runtime);
}

/**
 * @summary 获取主机vnc地址
 *
 * @param request DescribeRCInstanceVncUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRCInstanceVncUrlResponse
 */
DescribeRCInstanceVncUrlResponse Client::describeRCInstanceVncUrlWithOptions(const DescribeRCInstanceVncUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbType()) {
    query["DbType"] = request.getDbType();
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
    {"action" , "DescribeRCInstanceVncUrl"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRCInstanceVncUrlResponse>();
}

/**
 * @summary 获取主机vnc地址
 *
 * @param request DescribeRCInstanceVncUrlRequest
 * @return DescribeRCInstanceVncUrlResponse
 */
DescribeRCInstanceVncUrlResponse Client::describeRCInstanceVncUrl(const DescribeRCInstanceVncUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRCInstanceVncUrlWithOptions(request, runtime);
}

/**
 * @summary You can invoke the DescribeRCInstances API to query the list of specified RDS Custom instances. If no instance ID (InstanceId) is specified, the API returns the list of all RDS Custom instances in the destination region.
 *
 * @param request DescribeRCInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRCInstancesResponse
 */
DescribeRCInstancesResponse Client::describeRCInstancesWithOptions(const DescribeRCInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasHostIp()) {
    query["HostIp"] = request.getHostIp();
  }

  if (!!request.hasImageId()) {
    query["ImageId"] = request.getImageId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPublicIp()) {
    query["PublicIp"] = request.getPublicIp();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRCInstances"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRCInstancesResponse>();
}

/**
 * @summary You can invoke the DescribeRCInstances API to query the list of specified RDS Custom instances. If no instance ID (InstanceId) is specified, the API returns the list of all RDS Custom instances in the destination region.
 *
 * @param request DescribeRCInstancesRequest
 * @return DescribeRCInstancesResponse
 */
DescribeRCInstancesResponse Client::describeRCInstances(const DescribeRCInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRCInstancesWithOptions(request, runtime);
}

/**
 * @summary 查询云助手命令执行结果
 *
 * @param tmpReq DescribeRCInvocationResultsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRCInvocationResultsResponse
 */
DescribeRCInvocationResultsResponse Client::describeRCInvocationResultsWithOptions(const DescribeRCInvocationResultsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeRCInvocationResultsShrinkRequest request = DescribeRCInvocationResultsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTag(), "Tag", "json"));
  }

  json query = {};
  if (!!request.hasCommandId()) {
    query["CommandId"] = request.getCommandId();
  }

  if (!!request.hasContentEncoding()) {
    query["ContentEncoding"] = request.getContentEncoding();
  }

  if (!!request.hasIncludeHistory()) {
    query["IncludeHistory"] = request.getIncludeHistory();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInvokeId()) {
    query["InvokeId"] = request.getInvokeId();
  }

  if (!!request.hasInvokeRecordStatus()) {
    query["InvokeRecordStatus"] = request.getInvokeRecordStatus();
  }

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

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasTagShrink()) {
    query["Tag"] = request.getTagShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRCInvocationResults"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRCInvocationResultsResponse>();
}

/**
 * @summary 查询云助手命令执行结果
 *
 * @param request DescribeRCInvocationResultsRequest
 * @return DescribeRCInvocationResultsResponse
 */
DescribeRCInvocationResultsResponse Client::describeRCInvocationResults(const DescribeRCInvocationResultsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRCInvocationResultsWithOptions(request, runtime);
}

/**
 * @summary This API is used to query the monitoring data of a specified metric for a target RDS Custom instance.
 *
 * @param request DescribeRCMetricListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRCMetricListResponse
 */
DescribeRCMetricListResponse Client::describeRCMetricListWithOptions(const DescribeRCMetricListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRCMetricList"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRCMetricListResponse>();
}

/**
 * @summary This API is used to query the monitoring data of a specified metric for a target RDS Custom instance.
 *
 * @param request DescribeRCMetricListRequest
 * @return DescribeRCMetricListResponse
 */
DescribeRCMetricListResponse Client::describeRCMetricList(const DescribeRCMetricListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRCMetricListWithOptions(request, runtime);
}

/**
 * @summary DescribeRCNetworkInterfaces
 *
 * @param request DescribeRCNetworkInterfacesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRCNetworkInterfacesResponse
 */
DescribeRCNetworkInterfacesResponse Client::describeRCNetworkInterfacesWithOptions(const DescribeRCNetworkInterfacesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRCNetworkInterfaces"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRCNetworkInterfacesResponse>();
}

/**
 * @summary DescribeRCNetworkInterfaces
 *
 * @param request DescribeRCNetworkInterfacesRequest
 * @return DescribeRCNetworkInterfacesResponse
 */
DescribeRCNetworkInterfacesResponse Client::describeRCNetworkInterfaces(const DescribeRCNetworkInterfacesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRCNetworkInterfacesWithOptions(request, runtime);
}

/**
 * @summary 描述RC模版
 *
 * @param request DescribeRCNodePoolRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRCNodePoolResponse
 */
DescribeRCNodePoolResponse Client::describeRCNodePoolWithOptions(const DescribeRCNodePoolRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRCNodePool"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRCNodePoolResponse>();
}

/**
 * @summary 描述RC模版
 *
 * @param request DescribeRCNodePoolRequest
 * @return DescribeRCNodePoolResponse
 */
DescribeRCNodePoolResponse Client::describeRCNodePool(const DescribeRCNodePoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRCNodePoolWithOptions(request, runtime);
}

/**
 * @summary 变更实例规格或系统盘类型之前，查询某一可用区下实例规格或系统盘的库存情况
 *
 * @param tmpReq DescribeRCResourcesModificationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRCResourcesModificationResponse
 */
DescribeRCResourcesModificationResponse Client::describeRCResourcesModificationWithOptions(const DescribeRCResourcesModificationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeRCResourcesModificationShrinkRequest request = DescribeRCResourcesModificationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasConditionss()) {
    request.setConditionssShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getConditionss(), "Conditionss", "json"));
  }

  json query = {};
  if (!!request.hasConditionssShrink()) {
    query["Conditionss"] = request.getConditionssShrink();
  }

  if (!!request.hasCores()) {
    query["Cores"] = request.getCores();
  }

  if (!!request.hasDestinationResource()) {
    query["DestinationResource"] = request.getDestinationResource();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.getInstanceType();
  }

  if (!!request.hasMemory()) {
    query["Memory"] = request.getMemory();
  }

  if (!!request.hasOperationType()) {
    query["OperationType"] = request.getOperationType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRCResourcesModification"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRCResourcesModificationResponse>();
}

/**
 * @summary 变更实例规格或系统盘类型之前，查询某一可用区下实例规格或系统盘的库存情况
 *
 * @param request DescribeRCResourcesModificationRequest
 * @return DescribeRCResourcesModificationResponse
 */
DescribeRCResourcesModificationResponse Client::describeRCResourcesModification(const DescribeRCResourcesModificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRCResourcesModificationWithOptions(request, runtime);
}

/**
 * @summary Queries the security groups of RDS Custom instances.
 *
 * @param request DescribeRCSecurityGroupListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRCSecurityGroupListResponse
 */
DescribeRCSecurityGroupListResponse Client::describeRCSecurityGroupListWithOptions(const DescribeRCSecurityGroupListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSecurityGroupId()) {
    query["SecurityGroupId"] = request.getSecurityGroupId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRCSecurityGroupList"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRCSecurityGroupListResponse>();
}

/**
 * @summary Queries the security groups of RDS Custom instances.
 *
 * @param request DescribeRCSecurityGroupListRequest
 * @return DescribeRCSecurityGroupListResponse
 */
DescribeRCSecurityGroupListResponse Client::describeRCSecurityGroupList(const DescribeRCSecurityGroupListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRCSecurityGroupListWithOptions(request, runtime);
}

/**
 * @summary 描述RC安全组规则
 *
 * @param request DescribeRCSecurityGroupPermissionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRCSecurityGroupPermissionResponse
 */
DescribeRCSecurityGroupPermissionResponse Client::describeRCSecurityGroupPermissionWithOptions(const DescribeRCSecurityGroupPermissionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSecurityGroupId()) {
    query["SecurityGroupId"] = request.getSecurityGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRCSecurityGroupPermission"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRCSecurityGroupPermissionResponse>();
}

/**
 * @summary 描述RC安全组规则
 *
 * @param request DescribeRCSecurityGroupPermissionRequest
 * @return DescribeRCSecurityGroupPermissionResponse
 */
DescribeRCSecurityGroupPermissionResponse Client::describeRCSecurityGroupPermission(const DescribeRCSecurityGroupPermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRCSecurityGroupPermissionWithOptions(request, runtime);
}

/**
 * @summary This API is used to query snapshot list information, such as snapshot status, the remaining time for a snapshot being created to complete, and the number of days automatic snapshots are retained.
 *
 * @param request DescribeRCSnapshotsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRCSnapshotsResponse
 */
DescribeRCSnapshotsResponse Client::describeRCSnapshotsWithOptions(const DescribeRCSnapshotsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDiskId()) {
    query["DiskId"] = request.getDiskId();
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

  if (!!request.hasSnapshotIds()) {
    query["SnapshotIds"] = request.getSnapshotIds();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRCSnapshots"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRCSnapshotsResponse>();
}

/**
 * @summary This API is used to query snapshot list information, such as snapshot status, the remaining time for a snapshot being created to complete, and the number of days automatic snapshots are retained.
 *
 * @param request DescribeRCSnapshotsRequest
 * @return DescribeRCSnapshotsResponse
 */
DescribeRCSnapshotsResponse Client::describeRCSnapshots(const DescribeRCSnapshotsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRCSnapshotsWithOptions(request, runtime);
}

/**
 * @summary 描述vCluster
 *
 * @param request DescribeRCVClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRCVClusterResponse
 */
DescribeRCVClusterResponse Client::describeRCVClusterWithOptions(const DescribeRCVClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRCVCluster"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRCVClusterResponse>();
}

/**
 * @summary 描述vCluster
 *
 * @param request DescribeRCVClusterRequest
 * @return DescribeRCVClusterResponse
 */
DescribeRCVClusterResponse Client::describeRCVCluster(const DescribeRCVClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRCVClusterWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI DescribeRdsResourceSettings is deprecated
 *
 * @summary Obtains the notification settings for instance resources. This operation can still be called but is no longer maintained.
 *
 * @description 该接口已停止维护：接口仍可以正常调用，但阿里云不再维护该接口。
 *
 * @param request DescribeRdsResourceSettingsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRdsResourceSettingsResponse
 */
DescribeRdsResourceSettingsResponse Client::describeRdsResourceSettingsWithOptions(const DescribeRdsResourceSettingsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceNiche()) {
    query["ResourceNiche"] = request.getResourceNiche();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRdsResourceSettings"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRdsResourceSettingsResponse>();
}

/**
 * @deprecated OpenAPI DescribeRdsResourceSettings is deprecated
 *
 * @summary Obtains the notification settings for instance resources. This operation can still be called but is no longer maintained.
 *
 * @description 该接口已停止维护：接口仍可以正常调用，但阿里云不再维护该接口。
 *
 * @param request DescribeRdsResourceSettingsRequest
 * @return DescribeRdsResourceSettingsResponse
 */
DescribeRdsResourceSettingsResponse Client::describeRdsResourceSettings(const DescribeRdsResourceSettingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRdsResourceSettingsWithOptions(request, runtime);
}

/**
 * @summary 查询只读实例复制延迟
 *
 * @param request DescribeReadDBInstanceDelayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeReadDBInstanceDelayResponse
 */
DescribeReadDBInstanceDelayResponse Client::describeReadDBInstanceDelayWithOptions(const DescribeReadDBInstanceDelayRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasReadInstanceId()) {
    query["ReadInstanceId"] = request.getReadInstanceId();
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
    {"action" , "DescribeReadDBInstanceDelay"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeReadDBInstanceDelayResponse>();
}

/**
 * @summary 查询只读实例复制延迟
 *
 * @param request DescribeReadDBInstanceDelayRequest
 * @return DescribeReadDBInstanceDelayResponse
 */
DescribeReadDBInstanceDelayResponse Client::describeReadDBInstanceDelay(const DescribeReadDBInstanceDelayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeReadDBInstanceDelayWithOptions(request, runtime);
}

/**
 * @summary 查询日志信息
 *
 * @param request DescribeRegionInfosRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionInfosResponse
 */
DescribeRegionInfosResponse Client::describeRegionInfosWithOptions(const DescribeRegionInfosRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRegionInfos"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRegionInfosResponse>();
}

/**
 * @summary 查询日志信息
 *
 * @param request DescribeRegionInfosRequest
 * @return DescribeRegionInfosResponse
 */
DescribeRegionInfosResponse Client::describeRegionInfos(const DescribeRegionInfosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRegionInfosWithOptions(request, runtime);
}

/**
 * @summary 查询地域列表
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

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRegions"},
    {"version" , "2014-08-15"},
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
 * @summary 查询地域列表
 *
 * @param request DescribeRegionsRequest
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions(const DescribeRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRegionsWithOptions(request, runtime);
}

/**
 * @summary 查询重建实例价格
 *
 * @param request DescribeRenewalPriceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRenewalPriceResponse
 */
DescribeRenewalPriceResponse Client::describeRenewalPriceWithOptions(const DescribeRenewalPriceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusinessInfo()) {
    query["BusinessInfo"] = request.getBusinessInfo();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceClass()) {
    query["DBInstanceClass"] = request.getDBInstanceClass();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
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

  if (!!request.hasQuantity()) {
    query["Quantity"] = request.getQuantity();
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

  if (!!request.hasTimeType()) {
    query["TimeType"] = request.getTimeType();
  }

  if (!!request.hasUsedTime()) {
    query["UsedTime"] = request.getUsedTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRenewalPrice"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRenewalPriceResponse>();
}

/**
 * @summary 查询重建实例价格
 *
 * @param request DescribeRenewalPriceRequest
 * @return DescribeRenewalPriceResponse
 */
DescribeRenewalPriceResponse Client::describeRenewalPrice(const DescribeRenewalPriceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRenewalPriceWithOptions(request, runtime);
}

/**
 * @summary 查询复制链路操作日志
 *
 * @param request DescribeReplicationLinkLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeReplicationLinkLogsResponse
 */
DescribeReplicationLinkLogsResponse Client::describeReplicationLinkLogsWithOptions(const DescribeReplicationLinkLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.getTaskName();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.getTaskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeReplicationLinkLogs"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeReplicationLinkLogsResponse>();
}

/**
 * @summary 查询复制链路操作日志
 *
 * @param request DescribeReplicationLinkLogsRequest
 * @return DescribeReplicationLinkLogsResponse
 */
DescribeReplicationLinkLogsResponse Client::describeReplicationLinkLogs(const DescribeReplicationLinkLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeReplicationLinkLogsWithOptions(request, runtime);
}

/**
 * @summary Resource details on the overview page
 *
 * @param request DescribeResourceDetailsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeResourceDetailsResponse
 */
DescribeResourceDetailsResponse Client::describeResourceDetailsWithOptions(const DescribeResourceDetailsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeResourceDetails"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeResourceDetailsResponse>();
}

/**
 * @summary Resource details on the overview page
 *
 * @param request DescribeResourceDetailsRequest
 * @return DescribeResourceDetailsResponse
 */
DescribeResourceDetailsResponse Client::describeResourceDetails(const DescribeResourceDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeResourceDetailsWithOptions(request, runtime);
}

/**
 * @summary 查询资源使用情况
 *
 * @param request DescribeResourceUsageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeResourceUsageResponse
 */
DescribeResourceUsageResponse Client::describeResourceUsageWithOptions(const DescribeResourceUsageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeResourceUsage"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeResourceUsageResponse>();
}

/**
 * @summary 查询资源使用情况
 *
 * @param request DescribeResourceUsageRequest
 * @return DescribeResourceUsageResponse
 */
DescribeResourceUsageResponse Client::describeResourceUsage(const DescribeResourceUsageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeResourceUsageWithOptions(request, runtime);
}

/**
 * @summary 查询RDS实例的SQL洞察（SQL审计）功能是否开启
 *
 * @param request DescribeSQLCollectorPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSQLCollectorPolicyResponse
 */
DescribeSQLCollectorPolicyResponse Client::describeSQLCollectorPolicyWithOptions(const DescribeSQLCollectorPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSQLCollectorPolicy"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSQLCollectorPolicyResponse>();
}

/**
 * @summary 查询RDS实例的SQL洞察（SQL审计）功能是否开启
 *
 * @param request DescribeSQLCollectorPolicyRequest
 * @return DescribeSQLCollectorPolicyResponse
 */
DescribeSQLCollectorPolicyResponse Client::describeSQLCollectorPolicy(const DescribeSQLCollectorPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSQLCollectorPolicyWithOptions(request, runtime);
}

/**
 * @summary 查询RDS实例的SQL洞察日志保存时长
 *
 * @param request DescribeSQLCollectorRetentionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSQLCollectorRetentionResponse
 */
DescribeSQLCollectorRetentionResponse Client::describeSQLCollectorRetentionWithOptions(const DescribeSQLCollectorRetentionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSQLCollectorRetention"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSQLCollectorRetentionResponse>();
}

/**
 * @summary 查询RDS实例的SQL洞察日志保存时长
 *
 * @param request DescribeSQLCollectorRetentionRequest
 * @return DescribeSQLCollectorRetentionResponse
 */
DescribeSQLCollectorRetentionResponse Client::describeSQLCollectorRetention(const DescribeSQLCollectorRetentionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSQLCollectorRetentionWithOptions(request, runtime);
}

/**
 * @summary 查询SQL日志文件
 *
 * @param request DescribeSQLLogFilesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSQLLogFilesResponse
 */
DescribeSQLLogFilesResponse Client::describeSQLLogFilesWithOptions(const DescribeSQLLogFilesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasFileName()) {
    query["FileName"] = request.getFileName();
  }

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

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSQLLogFiles"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSQLLogFilesResponse>();
}

/**
 * @summary 查询SQL日志文件
 *
 * @param request DescribeSQLLogFilesRequest
 * @return DescribeSQLLogFilesResponse
 */
DescribeSQLLogFilesResponse Client::describeSQLLogFiles(const DescribeSQLLogFilesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSQLLogFilesWithOptions(request, runtime);
}

/**
 * @summary 查询SQL日志记录
 *
 * @param request DescribeSQLLogRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSQLLogRecordsResponse
 */
DescribeSQLLogRecordsResponse Client::describeSQLLogRecordsWithOptions(const DescribeSQLLogRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDatabase()) {
    query["Database"] = request.getDatabase();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasForm()) {
    query["Form"] = request.getForm();
  }

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

  if (!!request.hasQueryKeywords()) {
    query["QueryKeywords"] = request.getQueryKeywords();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSQLId()) {
    query["SQLId"] = request.getSQLId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasUser()) {
    query["User"] = request.getUser();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSQLLogRecords"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSQLLogRecordsResponse>();
}

/**
 * @summary 查询SQL日志记录
 *
 * @param request DescribeSQLLogRecordsRequest
 * @return DescribeSQLLogRecordsResponse
 */
DescribeSQLLogRecordsResponse Client::describeSQLLogRecords(const DescribeSQLLogRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSQLLogRecordsWithOptions(request, runtime);
}

/**
 * @summary 查询SQL日志列表
 *
 * @param request DescribeSQLLogReportListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSQLLogReportListResponse
 */
DescribeSQLLogReportListResponse Client::describeSQLLogReportListWithOptions(const DescribeSQLLogReportListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

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

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSQLLogReportList"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSQLLogReportListResponse>();
}

/**
 * @summary 查询SQL日志列表
 *
 * @param request DescribeSQLLogReportListRequest
 * @return DescribeSQLLogReportListResponse
 */
DescribeSQLLogReportListResponse Client::describeSQLLogReportList(const DescribeSQLLogReportListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSQLLogReportListWithOptions(request, runtime);
}

/**
 * @summary 查询SQLServer升级版本
 *
 * @description Supported engine:  
 * * SQL Server (supports only 2016 and earlier versions)
 *
 * @param request DescribeSQLServerUpgradeVersionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSQLServerUpgradeVersionsResponse
 */
DescribeSQLServerUpgradeVersionsResponse Client::describeSQLServerUpgradeVersionsWithOptions(const DescribeSQLServerUpgradeVersionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasEngineVersion()) {
    query["EngineVersion"] = request.getEngineVersion();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSQLServerUpgradeVersions"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSQLServerUpgradeVersionsResponse>();
}

/**
 * @summary 查询SQLServer升级版本
 *
 * @description Supported engine:  
 * * SQL Server (supports only 2016 and earlier versions)
 *
 * @param request DescribeSQLServerUpgradeVersionsRequest
 * @return DescribeSQLServerUpgradeVersionsResponse
 */
DescribeSQLServerUpgradeVersionsResponse Client::describeSQLServerUpgradeVersions(const DescribeSQLServerUpgradeVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSQLServerUpgradeVersionsWithOptions(request, runtime);
}

/**
 * @summary 列举描述Data Api 用户凭证
 *
 * @param request DescribeSecretsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSecretsResponse
 */
DescribeSecretsResponse Client::describeSecretsWithOptions(const DescribeSecretsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDbInstanceId()) {
    query["DbInstanceId"] = request.getDbInstanceId();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.getEngine();
  }

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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSecrets"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSecretsResponse>();
}

/**
 * @summary 列举描述Data Api 用户凭证
 *
 * @param request DescribeSecretsRequest
 * @return DescribeSecretsResponse
 */
DescribeSecretsResponse Client::describeSecrets(const DescribeSecretsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSecretsWithOptions(request, runtime);
}

/**
 * @summary Queries ECS security groups to which an instance is added.
 *
 * @description ### 适用引擎
 * - RDS MySQL
 * - RDS PostgreSQL
 * - RDS SQL Server
 * ### 相关功能文档
 * >Notice: 使用该接口前，请仔细阅读功能文档，确保完全了解使用接口的前提条件及使用后造成的影响后，再进行操作。
 * - [RDS MySQL设置安全组](https://help.aliyun.com/document_detail/201042.html)
 * - [RDS PostgreSQL设置安全组](https://help.aliyun.com/document_detail/206310.html)
 * - [RDS SQL Server设置安全组](https://help.aliyun.com/document_detail/2392322.html)
 *
 * @param request DescribeSecurityGroupConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSecurityGroupConfigurationResponse
 */
DescribeSecurityGroupConfigurationResponse Client::describeSecurityGroupConfigurationWithOptions(const DescribeSecurityGroupConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSecurityGroupConfiguration"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSecurityGroupConfigurationResponse>();
}

/**
 * @summary Queries ECS security groups to which an instance is added.
 *
 * @description ### 适用引擎
 * - RDS MySQL
 * - RDS PostgreSQL
 * - RDS SQL Server
 * ### 相关功能文档
 * >Notice: 使用该接口前，请仔细阅读功能文档，确保完全了解使用接口的前提条件及使用后造成的影响后，再进行操作。
 * - [RDS MySQL设置安全组](https://help.aliyun.com/document_detail/201042.html)
 * - [RDS PostgreSQL设置安全组](https://help.aliyun.com/document_detail/206310.html)
 * - [RDS SQL Server设置安全组](https://help.aliyun.com/document_detail/2392322.html)
 *
 * @param request DescribeSecurityGroupConfigurationRequest
 * @return DescribeSecurityGroupConfigurationResponse
 */
DescribeSecurityGroupConfigurationResponse Client::describeSecurityGroupConfiguration(const DescribeSecurityGroupConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSecurityGroupConfigurationWithOptions(request, runtime);
}

/**
 * @summary 获取实例所有复制槽相关信息
 *
 * @param request DescribeSlotsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSlotsResponse
 */
DescribeSlotsResponse Client::describeSlotsWithOptions(const DescribeSlotsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSlots"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSlotsResponse>();
}

/**
 * @summary 获取实例所有复制槽相关信息
 *
 * @param request DescribeSlotsRequest
 * @return DescribeSlotsResponse
 */
DescribeSlotsResponse Client::describeSlots(const DescribeSlotsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSlotsWithOptions(request, runtime);
}

/**
 * @summary This API is used to view the slow query log details of an instance.
 *
 * @description ### Supported Engines
 * - RDS MySQL
 * - RDS PostgreSQL
 * - RDS SQL Server
 * - RDS MariaDB
 * ### Notes
 * - The response parameters of this API are updated once per minute.
 * - When you invoke this API to pull data, a certain latency will occur. Please wait patiently for the response.
 * - Starting from September 1, 2024, due to optimization of the SQL templating algorithm, the value of the SQLHash field will change when you call this API. For more information, see [【Notifications】Optimization of the Templating Algorithm for Slow SQL Statements](https://help.aliyun.com/document_detail/2845725.html).
 *
 * @param request DescribeSlowLogRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSlowLogRecordsResponse
 */
DescribeSlowLogRecordsResponse Client::describeSlowLogRecordsWithOptions(const DescribeSlowLogRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.getDBName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.getNodeId();
  }

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

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSQLHASH()) {
    query["SQLHASH"] = request.getSQLHASH();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSlowLogRecords"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSlowLogRecordsResponse>();
}

/**
 * @summary This API is used to view the slow query log details of an instance.
 *
 * @description ### Supported Engines
 * - RDS MySQL
 * - RDS PostgreSQL
 * - RDS SQL Server
 * - RDS MariaDB
 * ### Notes
 * - The response parameters of this API are updated once per minute.
 * - When you invoke this API to pull data, a certain latency will occur. Please wait patiently for the response.
 * - Starting from September 1, 2024, due to optimization of the SQL templating algorithm, the value of the SQLHash field will change when you call this API. For more information, see [【Notifications】Optimization of the Templating Algorithm for Slow SQL Statements](https://help.aliyun.com/document_detail/2845725.html).
 *
 * @param request DescribeSlowLogRecordsRequest
 * @return DescribeSlowLogRecordsResponse
 */
DescribeSlowLogRecordsResponse Client::describeSlowLogRecords(const DescribeSlowLogRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSlowLogRecordsWithOptions(request, runtime);
}

/**
 * @summary 查询慢日志列表
 *
 * @param request DescribeSlowLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSlowLogsResponse
 */
DescribeSlowLogsResponse Client::describeSlowLogsWithOptions(const DescribeSlowLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.getDBName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

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

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSortKey()) {
    query["SortKey"] = request.getSortKey();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSlowLogs"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSlowLogsResponse>();
}

/**
 * @summary 查询慢日志列表
 *
 * @param request DescribeSlowLogsRequest
 * @return DescribeSlowLogsResponse
 */
DescribeSlowLogsResponse Client::describeSlowLogs(const DescribeSlowLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSlowLogsWithOptions(request, runtime);
}

/**
 * @summary 查询是否支持在线扩盘
 *
 * @param request DescribeSupportOnlineResizeDiskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSupportOnlineResizeDiskResponse
 */
DescribeSupportOnlineResizeDiskResponse Client::describeSupportOnlineResizeDiskWithOptions(const DescribeSupportOnlineResizeDiskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSupportOnlineResizeDisk"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSupportOnlineResizeDiskResponse>();
}

/**
 * @summary 查询是否支持在线扩盘
 *
 * @param request DescribeSupportOnlineResizeDiskRequest
 * @return DescribeSupportOnlineResizeDiskResponse
 */
DescribeSupportOnlineResizeDiskResponse Client::describeSupportOnlineResizeDisk(const DescribeSupportOnlineResizeDiskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSupportOnlineResizeDiskWithOptions(request, runtime);
}

/**
 * @param request DescribeTagsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTagsResponse
 */
DescribeTagsResponse Client::describeTagsWithOptions(const DescribeTagsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  if (!!request.hasProxyId()) {
    query["proxyId"] = request.getProxyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTags"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTagsResponse>();
}

/**
 * @param request DescribeTagsRequest
 * @return DescribeTagsResponse
 */
DescribeTagsResponse Client::describeTags(const DescribeTagsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTagsWithOptions(request, runtime);
}

/**
 * @summary 查询任务列表
 *
 * @param request DescribeTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTasksResponse
 */
DescribeTasksResponse Client::describeTasksWithOptions(const DescribeTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

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

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTaskAction()) {
    query["TaskAction"] = request.getTaskAction();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTasks"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTasksResponse>();
}

/**
 * @summary 查询任务列表
 *
 * @param request DescribeTasksRequest
 * @return DescribeTasksResponse
 */
DescribeTasksResponse Client::describeTasks(const DescribeTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTasksWithOptions(request, runtime);
}

/**
 * @summary Queries the check report for a major engine version upgrade of an ApsaraDB RDS for MySQL instance or ApsaraDB RDS for PostgreSQL instance.
 *
 * @description ### 适用引擎
 * RDS MySQL
 * RDS PostgreSQL
 * ### 相关功能文档
 * >Notice: 使用该接口前，请仔细阅读功能文档，确保完全了解使用接口的前提条件及使用后造成的影响后，再进行操作。
 * - [RDS MySQL大版本升级检查报告](https://help.aliyun.com/document_detail/2794383.html)
 * - [RDS PostgreSQL升级数据库大版本](https://help.aliyun.com/document_detail/203309.html)
 * - [解读RDS PostgreSQL大版本升级检查报告](https://help.aliyun.com/document_detail/218391.html)
 *
 * @param request DescribeUpgradeMajorVersionPrecheckTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUpgradeMajorVersionPrecheckTaskResponse
 */
DescribeUpgradeMajorVersionPrecheckTaskResponse Client::describeUpgradeMajorVersionPrecheckTaskWithOptions(const DescribeUpgradeMajorVersionPrecheckTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

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

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTargetMajorVersion()) {
    query["TargetMajorVersion"] = request.getTargetMajorVersion();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUpgradeMajorVersionPrecheckTask"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUpgradeMajorVersionPrecheckTaskResponse>();
}

/**
 * @summary Queries the check report for a major engine version upgrade of an ApsaraDB RDS for MySQL instance or ApsaraDB RDS for PostgreSQL instance.
 *
 * @description ### 适用引擎
 * RDS MySQL
 * RDS PostgreSQL
 * ### 相关功能文档
 * >Notice: 使用该接口前，请仔细阅读功能文档，确保完全了解使用接口的前提条件及使用后造成的影响后，再进行操作。
 * - [RDS MySQL大版本升级检查报告](https://help.aliyun.com/document_detail/2794383.html)
 * - [RDS PostgreSQL升级数据库大版本](https://help.aliyun.com/document_detail/203309.html)
 * - [解读RDS PostgreSQL大版本升级检查报告](https://help.aliyun.com/document_detail/218391.html)
 *
 * @param request DescribeUpgradeMajorVersionPrecheckTaskRequest
 * @return DescribeUpgradeMajorVersionPrecheckTaskResponse
 */
DescribeUpgradeMajorVersionPrecheckTaskResponse Client::describeUpgradeMajorVersionPrecheckTask(const DescribeUpgradeMajorVersionPrecheckTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUpgradeMajorVersionPrecheckTaskWithOptions(request, runtime);
}

/**
 * @summary This API is used to query the history of major version upgrade jobs for RDS PostgreSQL instances.
 *
 * @description ### Applicable Engine  
 * RDS PostgreSQL
 *
 * @param request DescribeUpgradeMajorVersionTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUpgradeMajorVersionTasksResponse
 */
DescribeUpgradeMajorVersionTasksResponse Client::describeUpgradeMajorVersionTasksWithOptions(const DescribeUpgradeMajorVersionTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

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

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTargetMajorVersion()) {
    query["TargetMajorVersion"] = request.getTargetMajorVersion();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUpgradeMajorVersionTasks"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUpgradeMajorVersionTasksResponse>();
}

/**
 * @summary This API is used to query the history of major version upgrade jobs for RDS PostgreSQL instances.
 *
 * @description ### Applicable Engine  
 * RDS PostgreSQL
 *
 * @param request DescribeUpgradeMajorVersionTasksRequest
 * @return DescribeUpgradeMajorVersionTasksResponse
 */
DescribeUpgradeMajorVersionTasksResponse Client::describeUpgradeMajorVersionTasks(const DescribeUpgradeMajorVersionTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUpgradeMajorVersionTasksWithOptions(request, runtime);
}

/**
 * @summary 查询交换机列表
 *
 * @param request DescribeVSwitchListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVSwitchListResponse
 */
DescribeVSwitchListResponse Client::describeVSwitchListWithOptions(const DescribeVSwitchListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasVSwitchIds()) {
    query["VSwitchIds"] = request.getVSwitchIds();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVSwitchList"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVSwitchListResponse>();
}

/**
 * @summary 查询交换机列表
 *
 * @param request DescribeVSwitchListRequest
 * @return DescribeVSwitchListResponse
 */
DescribeVSwitchListResponse Client::describeVSwitchList(const DescribeVSwitchListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVSwitchListWithOptions(request, runtime);
}

/**
 * @summary 查询交换机
 *
 * @param request DescribeVSwitchesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVSwitchesResponse
 */
DescribeVSwitchesResponse Client::describeVSwitchesWithOptions(const DescribeVSwitchesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDedicatedHostGroupId()) {
    query["DedicatedHostGroupId"] = request.getDedicatedHostGroupId();
  }

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
    {"version" , "2014-08-15"},
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
 * @summary 查询交换机
 *
 * @param request DescribeVSwitchesRequest
 * @return DescribeVSwitchesResponse
 */
DescribeVSwitchesResponse Client::describeVSwitches(const DescribeVSwitchesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVSwitchesWithOptions(request, runtime);
}

/**
 * @summary 查询VPC列表
 *
 * @param request DescribeVpcsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVpcsResponse
 */
DescribeVpcsResponse Client::describeVpcsWithOptions(const DescribeVpcsRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasProduct()) {
    query["Product"] = request.getProduct();
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
    {"action" , "DescribeVpcs"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVpcsResponse>();
}

/**
 * @summary 查询VPC列表
 *
 * @param request DescribeVpcsRequest
 * @return DescribeVpcsResponse
 */
DescribeVpcsResponse Client::describeVpcs(const DescribeVpcsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVpcsWithOptions(request, runtime);
}

/**
 * @summary 查询白名单模板列表
 *
 * @param request DescribeWhitelistTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeWhitelistTemplateResponse
 */
DescribeWhitelistTemplateResponse Client::describeWhitelistTemplateWithOptions(const DescribeWhitelistTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeWhitelistTemplate"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeWhitelistTemplateResponse>();
}

/**
 * @summary 查询白名单模板列表
 *
 * @param request DescribeWhitelistTemplateRequest
 * @return DescribeWhitelistTemplateResponse
 */
DescribeWhitelistTemplateResponse Client::describeWhitelistTemplate(const DescribeWhitelistTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeWhitelistTemplateWithOptions(request, runtime);
}

/**
 * @summary 查询白名单模板关联实例
 *
 * @param request DescribeWhitelistTemplateLinkedInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeWhitelistTemplateLinkedInstanceResponse
 */
DescribeWhitelistTemplateLinkedInstanceResponse Client::describeWhitelistTemplateLinkedInstanceWithOptions(const DescribeWhitelistTemplateLinkedInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  json body = {};
  if (!!request.hasTemplateId()) {
    body["TemplateId"] = request.getTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DescribeWhitelistTemplateLinkedInstance"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeWhitelistTemplateLinkedInstanceResponse>();
}

/**
 * @summary 查询白名单模板关联实例
 *
 * @param request DescribeWhitelistTemplateLinkedInstanceRequest
 * @return DescribeWhitelistTemplateLinkedInstanceResponse
 */
DescribeWhitelistTemplateLinkedInstanceResponse Client::describeWhitelistTemplateLinkedInstance(const DescribeWhitelistTemplateLinkedInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeWhitelistTemplateLinkedInstanceWithOptions(request, runtime);
}

/**
 * @summary 销毁实例
 *
 * @param request DestroyDBInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DestroyDBInstanceResponse
 */
DestroyDBInstanceResponse Client::destroyDBInstanceWithOptions(const DestroyDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DestroyDBInstance"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DestroyDBInstanceResponse>();
}

/**
 * @summary 销毁实例
 *
 * @param request DestroyDBInstanceRequest
 * @return DestroyDBInstanceResponse
 */
DestroyDBInstanceResponse Client::destroyDBInstance(const DestroyDBInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return destroyDBInstanceWithOptions(request, runtime);
}

/**
 * @summary DetachGadInstanceMember
 *
 * @param request DetachGadInstanceMemberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachGadInstanceMemberResponse
 */
DetachGadInstanceMemberResponse Client::detachGadInstanceMemberWithOptions(const DetachGadInstanceMemberRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGadInstanceName()) {
    query["GadInstanceName"] = request.getGadInstanceName();
  }

  if (!!request.hasMemberInstanceName()) {
    query["MemberInstanceName"] = request.getMemberInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachGadInstanceMember"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachGadInstanceMemberResponse>();
}

/**
 * @summary DetachGadInstanceMember
 *
 * @param request DetachGadInstanceMemberRequest
 * @return DetachGadInstanceMemberResponse
 */
DetachGadInstanceMemberResponse Client::detachGadInstanceMember(const DetachGadInstanceMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachGadInstanceMemberWithOptions(request, runtime);
}

/**
 * @summary 卸载RC云盘
 *
 * @param request DetachRCDiskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachRCDiskResponse
 */
DetachRCDiskResponse Client::detachRCDiskWithOptions(const DetachRCDiskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeleteWithInstance()) {
    query["DeleteWithInstance"] = request.getDeleteWithInstance();
  }

  if (!!request.hasDiskId()) {
    query["DiskId"] = request.getDiskId();
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
    {"action" , "DetachRCDisk"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachRCDiskResponse>();
}

/**
 * @summary 卸载RC云盘
 *
 * @param request DetachRCDiskRequest
 * @return DetachRCDiskResponse
 */
DetachRCDiskResponse Client::detachRCDisk(const DetachRCDiskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachRCDiskWithOptions(request, runtime);
}

/**
 * @summary 接触实例关联白名单模板
 *
 * @param request DetachWhitelistTemplateToInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachWhitelistTemplateToInstanceResponse
 */
DetachWhitelistTemplateToInstanceResponse Client::detachWhitelistTemplateToInstanceWithOptions(const DetachWhitelistTemplateToInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInsName()) {
    query["InsName"] = request.getInsName();
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

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachWhitelistTemplateToInstance"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachWhitelistTemplateToInstanceResponse>();
}

/**
 * @summary 接触实例关联白名单模板
 *
 * @param request DetachWhitelistTemplateToInstanceRequest
 * @return DetachWhitelistTemplateToInstanceResponse
 */
DetachWhitelistTemplateToInstanceResponse Client::detachWhitelistTemplateToInstance(const DetachWhitelistTemplateToInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachWhitelistTemplateToInstanceWithOptions(request, runtime);
}

/**
 * @summary 开启备份加密
 *
 * @param request EnableBackupEncryptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableBackupEncryptionResponse
 */
EnableBackupEncryptionResponse Client::enableBackupEncryptionWithOptions(const EnableBackupEncryptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasEncryptionKey()) {
    query["EncryptionKey"] = request.getEncryptionKey();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableBackupEncryption"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableBackupEncryptionResponse>();
}

/**
 * @summary 开启备份加密
 *
 * @param request EnableBackupEncryptionRequest
 * @return EnableBackupEncryptionResponse
 */
EnableBackupEncryptionResponse Client::enableBackupEncryption(const EnableBackupEncryptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableBackupEncryptionWithOptions(request, runtime);
}

/**
 * @summary Evaluate the available disk space for emergency local disk scale-out and unlock.
 *
 * @param request EvaluateLocalExtendDiskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EvaluateLocalExtendDiskResponse
 */
EvaluateLocalExtendDiskResponse Client::evaluateLocalExtendDiskWithOptions(const EvaluateLocalExtendDiskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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

  if (!!request.hasStorage()) {
    query["Storage"] = request.getStorage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EvaluateLocalExtendDisk"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EvaluateLocalExtendDiskResponse>();
}

/**
 * @summary Evaluate the available disk space for emergency local disk scale-out and unlock.
 *
 * @param request EvaluateLocalExtendDiskRequest
 * @return EvaluateLocalExtendDiskResponse
 */
EvaluateLocalExtendDiskResponse Client::evaluateLocalExtendDisk(const EvaluateLocalExtendDiskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return evaluateLocalExtendDiskWithOptions(request, runtime);
}

/**
 * @summary 获取实例拓扑
 *
 * @param request GetDBInstanceTopologyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDBInstanceTopologyResponse
 */
GetDBInstanceTopologyResponse Client::getDBInstanceTopologyWithOptions(const GetDBInstanceTopologyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDBInstanceTopology"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDBInstanceTopologyResponse>();
}

/**
 * @summary 获取实例拓扑
 *
 * @param request GetDBInstanceTopologyRequest
 * @return GetDBInstanceTopologyResponse
 */
GetDBInstanceTopologyResponse Client::getDBInstanceTopology(const GetDBInstanceTopologyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDBInstanceTopologyWithOptions(request, runtime);
}

/**
 * @summary 查询RDS实例数据库代理连接地址SSL加密信息
 *
 * @param request GetDbProxyInstanceSslRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDbProxyInstanceSslResponse
 */
GetDbProxyInstanceSslResponse Client::getDbProxyInstanceSslWithOptions(const GetDbProxyInstanceSslRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBProxyEngineType()) {
    query["DBProxyEngineType"] = request.getDBProxyEngineType();
  }

  if (!!request.hasDbInstanceId()) {
    query["DbInstanceId"] = request.getDbInstanceId();
  }

  if (!!request.hasDbInstanceId()) {
    query["DbInstanceId"] = request.getDbInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDbProxyInstanceSsl"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDbProxyInstanceSslResponse>();
}

/**
 * @summary 查询RDS实例数据库代理连接地址SSL加密信息
 *
 * @param request GetDbProxyInstanceSslRequest
 * @return GetDbProxyInstanceSslResponse
 */
GetDbProxyInstanceSslResponse Client::getDbProxyInstanceSsl(const GetDbProxyInstanceSslRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDbProxyInstanceSslWithOptions(request, runtime);
}

/**
 * @summary This API is used to grant a specified database account access permissions to one or more databases.
 *
 * @description ### Supported Engines
 * - RDS MySQL
 * - RDS PostgreSQL
 * - RDS SQL Server
 * - RDS MariaDB
 * ### Related Function Documentation
 * >Notice: Before using this API, carefully read the function documentation to fully understand the prerequisites and the impact of using this API before performing any operation.
 * - [Modify Account Permissions for RDS MySQL](https://help.aliyun.com/document_detail/96101.html)
 * - [Modify Account Permissions for RDS SQL Server](https://help.aliyun.com/document_detail/95692.html)
 * - [Modify Account Permissions for RDS MariaDB](https://help.aliyun.com/document_detail/97134.html)
 * - [Permission Details for RDS PostgreSQL](https://help.aliyun.com/document_detail/257684.html)
 *
 * @param request GrantAccountPrivilegeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GrantAccountPrivilegeResponse
 */
GrantAccountPrivilegeResponse Client::grantAccountPrivilegeWithOptions(const GrantAccountPrivilegeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.getAccountName();
  }

  if (!!request.hasAccountPrivilege()) {
    query["AccountPrivilege"] = request.getAccountPrivilege();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.getDBName();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GrantAccountPrivilege"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GrantAccountPrivilegeResponse>();
}

/**
 * @summary This API is used to grant a specified database account access permissions to one or more databases.
 *
 * @description ### Supported Engines
 * - RDS MySQL
 * - RDS PostgreSQL
 * - RDS SQL Server
 * - RDS MariaDB
 * ### Related Function Documentation
 * >Notice: Before using this API, carefully read the function documentation to fully understand the prerequisites and the impact of using this API before performing any operation.
 * - [Modify Account Permissions for RDS MySQL](https://help.aliyun.com/document_detail/96101.html)
 * - [Modify Account Permissions for RDS SQL Server](https://help.aliyun.com/document_detail/95692.html)
 * - [Modify Account Permissions for RDS MariaDB](https://help.aliyun.com/document_detail/97134.html)
 * - [Permission Details for RDS PostgreSQL](https://help.aliyun.com/document_detail/257684.html)
 *
 * @param request GrantAccountPrivilegeRequest
 * @return GrantAccountPrivilegeResponse
 */
GrantAccountPrivilegeResponse Client::grantAccountPrivilege(const GrantAccountPrivilegeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return grantAccountPrivilegeWithOptions(request, runtime);
}

/**
 * @summary 授权操作人权限
 *
 * @param request GrantOperatorPermissionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GrantOperatorPermissionResponse
 */
GrantOperatorPermissionResponse Client::grantOperatorPermissionWithOptions(const GrantOperatorPermissionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasExpiredTime()) {
    query["ExpiredTime"] = request.getExpiredTime();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPrivileges()) {
    query["Privileges"] = request.getPrivileges();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GrantOperatorPermission"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GrantOperatorPermissionResponse>();
}

/**
 * @summary 授权操作人权限
 *
 * @param request GrantOperatorPermissionRequest
 * @return GrantOperatorPermissionResponse
 */
GrantOperatorPermissionResponse Client::grantOperatorPermission(const GrantOperatorPermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return grantOperatorPermissionWithOptions(request, runtime);
}

/**
 * @summary This API is used to import backup data from a self-managed MySQL 5.7 database into RDS.
 *
 * @description ### Supported Engine
 * - RDS MySQL
 * ### Feature Description
 * User backups refer to full backup data from a self-managed MySQL database. You can recover user backups to the cloud.
 * ### Notes
 * **To invoke this API, you must meet the following conditions:**
 * * You have backed up your self-managed MySQL 5.7 or 8.0 database using XtraBackup, and the backup file name ends with `_qp.xb`. For more information, see [Migrate Full Backup Data from Self-Managed MySQL 5.7 or 8.0 Databases to the Cloud](https://help.aliyun.com/document_detail/251779.html).
 * * You have uploaded the backup files of your self-managed MySQL 5.7 or 8.0 database to an OSS bucket in the corresponding Region. For more information, see [Migrate Full Backup Data from Self-Managed MySQL 5.7 or 8.0 Databases to the Cloud](https://help.aliyun.com/document_detail/251779.html).
 *
 * @param request ImportUserBackupFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportUserBackupFileResponse
 */
ImportUserBackupFileResponse Client::importUserBackupFileWithOptions(const ImportUserBackupFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupFile()) {
    query["BackupFile"] = request.getBackupFile();
  }

  if (!!request.hasBucketRegion()) {
    query["BucketRegion"] = request.getBucketRegion();
  }

  if (!!request.hasBuildReplication()) {
    query["BuildReplication"] = request.getBuildReplication();
  }

  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasEngineVersion()) {
    query["EngineVersion"] = request.getEngineVersion();
  }

  if (!!request.hasMasterInfo()) {
    query["MasterInfo"] = request.getMasterInfo();
  }

  if (!!request.hasMode()) {
    query["Mode"] = request.getMode();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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

  if (!!request.hasRestoreSize()) {
    query["RestoreSize"] = request.getRestoreSize();
  }

  if (!!request.hasRetention()) {
    query["Retention"] = request.getRetention();
  }

  if (!!request.hasSourceInfo()) {
    query["SourceInfo"] = request.getSourceInfo();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ImportUserBackupFile"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImportUserBackupFileResponse>();
}

/**
 * @summary This API is used to import backup data from a self-managed MySQL 5.7 database into RDS.
 *
 * @description ### Supported Engine
 * - RDS MySQL
 * ### Feature Description
 * User backups refer to full backup data from a self-managed MySQL database. You can recover user backups to the cloud.
 * ### Notes
 * **To invoke this API, you must meet the following conditions:**
 * * You have backed up your self-managed MySQL 5.7 or 8.0 database using XtraBackup, and the backup file name ends with `_qp.xb`. For more information, see [Migrate Full Backup Data from Self-Managed MySQL 5.7 or 8.0 Databases to the Cloud](https://help.aliyun.com/document_detail/251779.html).
 * * You have uploaded the backup files of your self-managed MySQL 5.7 or 8.0 database to an OSS bucket in the corresponding Region. For more information, see [Migrate Full Backup Data from Self-Managed MySQL 5.7 or 8.0 Databases to the Cloud](https://help.aliyun.com/document_detail/251779.html).
 *
 * @param request ImportUserBackupFileRequest
 * @return ImportUserBackupFileResponse
 */
ImportUserBackupFileResponse Client::importUserBackupFile(const ImportUserBackupFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return importUserBackupFileWithOptions(request, runtime);
}

/**
 * @summary 为实例安装云助手Agent
 *
 * @param tmpReq InstallRCCloudAssistantRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InstallRCCloudAssistantResponse
 */
InstallRCCloudAssistantResponse Client::installRCCloudAssistantWithOptions(const InstallRCCloudAssistantRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  InstallRCCloudAssistantShrinkRequest request = InstallRCCloudAssistantShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInstanceIds()) {
    request.setInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInstanceIds(), "InstanceIds", "json"));
  }

  json query = {};
  if (!!request.hasInstanceIdsShrink()) {
    query["InstanceIds"] = request.getInstanceIdsShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InstallRCCloudAssistant"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InstallRCCloudAssistantResponse>();
}

/**
 * @summary 为实例安装云助手Agent
 *
 * @param request InstallRCCloudAssistantRequest
 * @return InstallRCCloudAssistantResponse
 */
InstallRCCloudAssistantResponse Client::installRCCloudAssistant(const InstallRCCloudAssistantRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return installRCCloudAssistantWithOptions(request, runtime);
}

/**
 * @summary 查询实例规格列表
 *
 * @param request ListClassesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListClassesResponse
 */
ListClassesResponse Client::listClassesWithOptions(const ListClassesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCommodityCode()) {
    query["CommodityCode"] = request.getCommodityCode();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.getEngine();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListClasses"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListClassesResponse>();
}

/**
 * @summary 查询实例规格列表
 *
 * @param request ListClassesRequest
 * @return ListClassesResponse
 */
ListClassesResponse Client::listClasses(const ListClassesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listClassesWithOptions(request, runtime);
}

/**
 * @summary List and query native replication data import jobs.
 *
 * @description List and query native replication instance data import jobs.
 *
 * @param request ListImportTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListImportTasksResponse
 */
ListImportTasksResponse Client::listImportTasksWithOptions(const ListImportTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListImportTasks"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListImportTasksResponse>();
}

/**
 * @summary List and query native replication data import jobs.
 *
 * @description List and query native replication instance data import jobs.
 *
 * @param request ListImportTasksRequest
 * @return ListImportTasksResponse
 */
ListImportTasksResponse Client::listImportTasks(const ListImportTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listImportTasksWithOptions(request, runtime);
}

/**
 * @summary RCVCluster列表接口
 *
 * @param request ListRCVClustersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRCVClustersResponse
 */
ListRCVClustersResponse Client::listRCVClustersWithOptions(const ListRCVClustersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRCVClusters"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRCVClustersResponse>();
}

/**
 * @summary RCVCluster列表接口
 *
 * @param request ListRCVClustersRequest
 * @return ListRCVClustersResponse
 */
ListRCVClustersResponse Client::listRCVClusters(const ListRCVClustersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRCVClustersWithOptions(request, runtime);
}

/**
 * @summary 查询RDS资源已绑定的标签列表
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

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagResources"},
    {"version" , "2014-08-15"},
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
 * @summary 查询RDS资源已绑定的标签列表
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary 查询所有已导入至RDS的用户备份的详情
 *
 * @param request ListUserBackupFilesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserBackupFilesResponse
 */
ListUserBackupFilesResponse Client::listUserBackupFilesWithOptions(const ListUserBackupFilesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupId()) {
    query["BackupId"] = request.getBackupId();
  }

  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasOssUrl()) {
    query["OssUrl"] = request.getOssUrl();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUserBackupFiles"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUserBackupFilesResponse>();
}

/**
 * @summary 查询所有已导入至RDS的用户备份的详情
 *
 * @param request ListUserBackupFilesRequest
 * @return ListUserBackupFilesResponse
 */
ListUserBackupFilesResponse Client::listUserBackupFiles(const ListUserBackupFilesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUserBackupFilesWithOptions(request, runtime);
}

/**
 * @summary 锁定账号
 *
 * @param request LockAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return LockAccountResponse
 */
LockAccountResponse Client::lockAccountWithOptions(const LockAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.getAccountName();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "LockAccount"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<LockAccountResponse>();
}

/**
 * @summary 锁定账号
 *
 * @param request LockAccountRequest
 * @return LockAccountResponse
 */
LockAccountResponse Client::lockAccount(const LockAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return lockAccountWithOptions(request, runtime);
}

/**
 * @summary 迁移实例链接到其他可用区
 *
 * @param request MigrateConnectionToOtherZoneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MigrateConnectionToOtherZoneResponse
 */
MigrateConnectionToOtherZoneResponse Client::migrateConnectionToOtherZoneWithOptions(const MigrateConnectionToOtherZoneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectionString()) {
    query["ConnectionString"] = request.getConnectionString();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MigrateConnectionToOtherZone"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MigrateConnectionToOtherZoneResponse>();
}

/**
 * @summary 迁移实例链接到其他可用区
 *
 * @param request MigrateConnectionToOtherZoneRequest
 * @return MigrateConnectionToOtherZoneResponse
 */
MigrateConnectionToOtherZoneResponse Client::migrateConnectionToOtherZone(const MigrateConnectionToOtherZoneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return migrateConnectionToOtherZoneWithOptions(request, runtime);
}

/**
 * @summary 迁移RDS实例
 *
 * @param request MigrateDBInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MigrateDBInstanceResponse
 */
MigrateDBInstanceResponse Client::migrateDBInstanceWithOptions(const MigrateDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDedicatedHostGroupId()) {
    query["DedicatedHostGroupId"] = request.getDedicatedHostGroupId();
  }

  if (!!request.hasEffectiveTime()) {
    query["EffectiveTime"] = request.getEffectiveTime();
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

  if (!!request.hasSpecifiedTime()) {
    query["SpecifiedTime"] = request.getSpecifiedTime();
  }

  if (!!request.hasTargetDedicatedHostIdForMaster()) {
    query["TargetDedicatedHostIdForMaster"] = request.getTargetDedicatedHostIdForMaster();
  }

  if (!!request.hasTargetDedicatedHostIdForSlave()) {
    query["TargetDedicatedHostIdForSlave"] = request.getTargetDedicatedHostIdForSlave();
  }

  if (!!request.hasZoneIdForFollower()) {
    query["ZoneIdForFollower"] = request.getZoneIdForFollower();
  }

  if (!!request.hasZoneIdForLog()) {
    query["ZoneIdForLog"] = request.getZoneIdForLog();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MigrateDBInstance"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MigrateDBInstanceResponse>();
}

/**
 * @summary 迁移RDS实例
 *
 * @param request MigrateDBInstanceRequest
 * @return MigrateDBInstanceResponse
 */
MigrateDBInstanceResponse Client::migrateDBInstance(const MigrateDBInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return migrateDBInstanceWithOptions(request, runtime);
}

/**
 * @summary category cluster migrate db nodes
 *
 * @param tmpReq MigrateDBNodesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MigrateDBNodesResponse
 */
MigrateDBNodesResponse Client::migrateDBNodesWithOptions(const MigrateDBNodesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  MigrateDBNodesShrinkRequest request = MigrateDBNodesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDBNode()) {
    request.setDBNodeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDBNode(), "DBNode", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBNodeShrink()) {
    query["DBNode"] = request.getDBNodeShrink();
  }

  if (!!request.hasEffectiveTime()) {
    query["EffectiveTime"] = request.getEffectiveTime();
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

  if (!!request.hasSwitchTime()) {
    query["SwitchTime"] = request.getSwitchTime();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MigrateDBNodes"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MigrateDBNodesResponse>();
}

/**
 * @summary category cluster migrate db nodes
 *
 * @param request MigrateDBNodesRequest
 * @return MigrateDBNodesResponse
 */
MigrateDBNodesResponse Client::migrateDBNodes(const MigrateDBNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return migrateDBNodesWithOptions(request, runtime);
}

/**
 * @summary 将RDS白名单从通用模式切换为高安全模式
 *
 * @param request MigrateSecurityIPModeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MigrateSecurityIPModeResponse
 */
MigrateSecurityIPModeResponse Client::migrateSecurityIPModeWithOptions(const MigrateSecurityIPModeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MigrateSecurityIPMode"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MigrateSecurityIPModeResponse>();
}

/**
 * @summary 将RDS白名单从通用模式切换为高安全模式
 *
 * @param request MigrateSecurityIPModeRequest
 * @return MigrateSecurityIPModeResponse
 */
MigrateSecurityIPModeResponse Client::migrateSecurityIPMode(const MigrateSecurityIPModeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return migrateSecurityIPModeWithOptions(request, runtime);
}

/**
 * @summary RDS实例迁移到其他可用区
 *
 * @param request MigrateToOtherZoneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MigrateToOtherZoneResponse
 */
MigrateToOtherZoneResponse Client::migrateToOtherZoneWithOptions(const MigrateToOtherZoneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategory()) {
    query["Category"] = request.getCategory();
  }

  if (!!request.hasCustomExtraInfo()) {
    query["CustomExtraInfo"] = request.getCustomExtraInfo();
  }

  if (!!request.hasDBInstanceClass()) {
    query["DBInstanceClass"] = request.getDBInstanceClass();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBInstanceStorage()) {
    query["DBInstanceStorage"] = request.getDBInstanceStorage();
  }

  if (!!request.hasDBInstanceStorageType()) {
    query["DBInstanceStorageType"] = request.getDBInstanceStorageType();
  }

  if (!!request.hasEffectiveTime()) {
    query["EffectiveTime"] = request.getEffectiveTime();
  }

  if (!!request.hasIoAccelerationEnabled()) {
    query["IoAccelerationEnabled"] = request.getIoAccelerationEnabled();
  }

  if (!!request.hasIsModifySpec()) {
    query["IsModifySpec"] = request.getIsModifySpec();
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

  if (!!request.hasSwitchTime()) {
    query["SwitchTime"] = request.getSwitchTime();
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

  if (!!request.hasZoneIdSlave1()) {
    query["ZoneIdSlave1"] = request.getZoneIdSlave1();
  }

  if (!!request.hasZoneIdSlave2()) {
    query["ZoneIdSlave2"] = request.getZoneIdSlave2();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MigrateToOtherZone"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MigrateToOtherZoneResponse>();
}

/**
 * @summary RDS实例迁移到其他可用区
 *
 * @param request MigrateToOtherZoneRequest
 * @return MigrateToOtherZoneResponse
 */
MigrateToOtherZoneResponse Client::migrateToOtherZone(const MigrateToOtherZoneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return migrateToOtherZoneWithOptions(request, runtime);
}

/**
 * @summary 修改AD信息
 *
 * @param request ModifyADInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyADInfoResponse
 */
ModifyADInfoResponse Client::modifyADInfoWithOptions(const ModifyADInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasADAccountName()) {
    query["ADAccountName"] = request.getADAccountName();
  }

  if (!!request.hasADDNS()) {
    query["ADDNS"] = request.getADDNS();
  }

  if (!!request.hasADPassword()) {
    query["ADPassword"] = request.getADPassword();
  }

  if (!!request.hasADServerIpAddress()) {
    query["ADServerIpAddress"] = request.getADServerIpAddress();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyADInfo"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyADInfoResponse>();
}

/**
 * @summary 修改AD信息
 *
 * @param request ModifyADInfoRequest
 * @return ModifyADInfoResponse
 */
ModifyADInfoResponse Client::modifyADInfo(const ModifyADInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyADInfoWithOptions(request, runtime);
}

/**
 * @summary 修改账号检查策略
 *
 * @param request ModifyAccountCheckPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAccountCheckPolicyResponse
 */
ModifyAccountCheckPolicyResponse Client::modifyAccountCheckPolicyWithOptions(const ModifyAccountCheckPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.getAccountName();
  }

  if (!!request.hasCheckPolicy()) {
    query["CheckPolicy"] = request.getCheckPolicy();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAccountCheckPolicy"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAccountCheckPolicyResponse>();
}

/**
 * @summary 修改账号检查策略
 *
 * @param request ModifyAccountCheckPolicyRequest
 * @return ModifyAccountCheckPolicyResponse
 */
ModifyAccountCheckPolicyResponse Client::modifyAccountCheckPolicy(const ModifyAccountCheckPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAccountCheckPolicyWithOptions(request, runtime);
}

/**
 * @summary 修改账号备注信息
 *
 * @param request ModifyAccountDescriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAccountDescriptionResponse
 */
ModifyAccountDescriptionResponse Client::modifyAccountDescriptionWithOptions(const ModifyAccountDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountDescription()) {
    query["AccountDescription"] = request.getAccountDescription();
  }

  if (!!request.hasAccountName()) {
    query["AccountName"] = request.getAccountName();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAccountDescription"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAccountDescriptionResponse>();
}

/**
 * @summary 修改账号备注信息
 *
 * @param request ModifyAccountDescriptionRequest
 * @return ModifyAccountDescriptionResponse
 */
ModifyAccountDescriptionResponse Client::modifyAccountDescription(const ModifyAccountDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAccountDescriptionWithOptions(request, runtime);
}

/**
 * @summary Modify the encryption or masking permissions of an account in a specified instance.
 *
 * @description ## Request Description
 * - Before using this API, ensure that you have enabled the column encryption service in DAS Security Center.
 * - If you receive the error message ColumnEncryptionErrorCode.NOT_PURCHASED when invoking the API, go to the DAS (Database Autonomy Service) Security Center to purchase and enable the column encryption service before using it again.
 *
 * @param request ModifyAccountMaskingPrivilegeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAccountMaskingPrivilegeResponse
 */
ModifyAccountMaskingPrivilegeResponse Client::modifyAccountMaskingPrivilegeWithOptions(const ModifyAccountMaskingPrivilegeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.getDBName();
  }

  if (!!request.hasExpireTime()) {
    query["ExpireTime"] = request.getExpireTime();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPrivilege()) {
    query["Privilege"] = request.getPrivilege();
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

  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAccountMaskingPrivilege"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAccountMaskingPrivilegeResponse>();
}

/**
 * @summary Modify the encryption or masking permissions of an account in a specified instance.
 *
 * @description ## Request Description
 * - Before using this API, ensure that you have enabled the column encryption service in DAS Security Center.
 * - If you receive the error message ColumnEncryptionErrorCode.NOT_PURCHASED when invoking the API, go to the DAS (Database Autonomy Service) Security Center to purchase and enable the column encryption service before using it again.
 *
 * @param request ModifyAccountMaskingPrivilegeRequest
 * @return ModifyAccountMaskingPrivilegeResponse
 */
ModifyAccountMaskingPrivilegeResponse Client::modifyAccountMaskingPrivilege(const ModifyAccountMaskingPrivilegeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAccountMaskingPrivilegeWithOptions(request, runtime);
}

/**
 * @summary 修改密码策略
 *
 * @param request ModifyAccountSecurityPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAccountSecurityPolicyResponse
 */
ModifyAccountSecurityPolicyResponse Client::modifyAccountSecurityPolicyWithOptions(const ModifyAccountSecurityPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasGroupPolicy()) {
    query["GroupPolicy"] = request.getGroupPolicy();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAccountSecurityPolicy"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAccountSecurityPolicyResponse>();
}

/**
 * @summary 修改密码策略
 *
 * @param request ModifyAccountSecurityPolicyRequest
 * @return ModifyAccountSecurityPolicyResponse
 */
ModifyAccountSecurityPolicyResponse Client::modifyAccountSecurityPolicy(const ModifyAccountSecurityPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAccountSecurityPolicyWithOptions(request, runtime);
}

/**
 * @summary 开启或关闭RDS历史事件功能
 *
 * @param request ModifyActionEventPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyActionEventPolicyResponse
 */
ModifyActionEventPolicyResponse Client::modifyActionEventPolicyWithOptions(const ModifyActionEventPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnableEventLog()) {
    query["EnableEventLog"] = request.getEnableEventLog();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyActionEventPolicy"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyActionEventPolicyResponse>();
}

/**
 * @summary 开启或关闭RDS历史事件功能
 *
 * @param request ModifyActionEventPolicyRequest
 * @return ModifyActionEventPolicyResponse
 */
ModifyActionEventPolicyResponse Client::modifyActionEventPolicy(const ModifyActionEventPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyActionEventPolicyWithOptions(request, runtime);
}

/**
 * @summary 批量修改主动运维任务
 *
 * @param request ModifyActiveOperationTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyActiveOperationTasksResponse
 */
ModifyActiveOperationTasksResponse Client::modifyActiveOperationTasksWithOptions(const ModifyActiveOperationTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIds()) {
    query["Ids"] = request.getIds();
  }

  if (!!request.hasImmediateStart()) {
    query["ImmediateStart"] = request.getImmediateStart();
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

  if (!!request.hasSwitchTime()) {
    query["SwitchTime"] = request.getSwitchTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyActiveOperationTasks"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyActiveOperationTasksResponse>();
}

/**
 * @summary 批量修改主动运维任务
 *
 * @param request ModifyActiveOperationTasksRequest
 * @return ModifyActiveOperationTasksResponse
 */
ModifyActiveOperationTasksResponse Client::modifyActiveOperationTasks(const ModifyActiveOperationTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyActiveOperationTasksWithOptions(request, runtime);
}

/**
 * @summary 修改RDS的备份策略
 *
 * @param request ModifyBackupPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyBackupPolicyResponse
 */
ModifyBackupPolicyResponse Client::modifyBackupPolicyWithOptions(const ModifyBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdvancedDataPolicies()) {
    query["AdvancedDataPolicies"] = request.getAdvancedDataPolicies();
  }

  if (!!request.hasAdvancedLogPolicies()) {
    query["AdvancedLogPolicies"] = request.getAdvancedLogPolicies();
  }

  if (!!request.hasArchiveBackupKeepCount()) {
    query["ArchiveBackupKeepCount"] = request.getArchiveBackupKeepCount();
  }

  if (!!request.hasArchiveBackupKeepPolicy()) {
    query["ArchiveBackupKeepPolicy"] = request.getArchiveBackupKeepPolicy();
  }

  if (!!request.hasArchiveBackupRetentionPeriod()) {
    query["ArchiveBackupRetentionPeriod"] = request.getArchiveBackupRetentionPeriod();
  }

  if (!!request.hasBackupInterval()) {
    query["BackupInterval"] = request.getBackupInterval();
  }

  if (!!request.hasBackupLog()) {
    query["BackupLog"] = request.getBackupLog();
  }

  if (!!request.hasBackupMethod()) {
    query["BackupMethod"] = request.getBackupMethod();
  }

  if (!!request.hasBackupPolicyMode()) {
    query["BackupPolicyMode"] = request.getBackupPolicyMode();
  }

  if (!!request.hasBackupPriority()) {
    query["BackupPriority"] = request.getBackupPriority();
  }

  if (!!request.hasBackupRetentionPeriod()) {
    query["BackupRetentionPeriod"] = request.getBackupRetentionPeriod();
  }

  if (!!request.hasCategory()) {
    query["Category"] = request.getCategory();
  }

  if (!!request.hasCompressType()) {
    query["CompressType"] = request.getCompressType();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasEnableAdvancedBackupPolicy()) {
    query["EnableAdvancedBackupPolicy"] = request.getEnableAdvancedBackupPolicy();
  }

  if (!!request.hasEnableBackupLog()) {
    query["EnableBackupLog"] = request.getEnableBackupLog();
  }

  if (!!request.hasEnableIncrementDataBackup()) {
    query["EnableIncrementDataBackup"] = request.getEnableIncrementDataBackup();
  }

  if (!!request.hasHighSpaceUsageProtection()) {
    query["HighSpaceUsageProtection"] = request.getHighSpaceUsageProtection();
  }

  if (!!request.hasLocalLogRetentionHours()) {
    query["LocalLogRetentionHours"] = request.getLocalLogRetentionHours();
  }

  if (!!request.hasLocalLogRetentionSpace()) {
    query["LocalLogRetentionSpace"] = request.getLocalLogRetentionSpace();
  }

  if (!!request.hasLogBackupFrequency()) {
    query["LogBackupFrequency"] = request.getLogBackupFrequency();
  }

  if (!!request.hasLogBackupLocalRetentionNumber()) {
    query["LogBackupLocalRetentionNumber"] = request.getLogBackupLocalRetentionNumber();
  }

  if (!!request.hasLogBackupRetentionPeriod()) {
    query["LogBackupRetentionPeriod"] = request.getLogBackupRetentionPeriod();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPreferredBackupPeriod()) {
    query["PreferredBackupPeriod"] = request.getPreferredBackupPeriod();
  }

  if (!!request.hasPreferredBackupTime()) {
    query["PreferredBackupTime"] = request.getPreferredBackupTime();
  }

  if (!!request.hasReleasedKeepPolicy()) {
    query["ReleasedKeepPolicy"] = request.getReleasedKeepPolicy();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyBackupPolicy"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyBackupPolicyResponse>();
}

/**
 * @summary 修改RDS的备份策略
 *
 * @param request ModifyBackupPolicyRequest
 * @return ModifyBackupPolicyResponse
 */
ModifyBackupPolicyResponse Client::modifyBackupPolicy(const ModifyBackupPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyBackupPolicyWithOptions(request, runtime);
}

/**
 * @summary Extends the expiration time of backup sets generated by manual backup for a single database, including physical backup sets and full backup sets.
 *
 * @param request ModifyBackupSetExpireTimeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyBackupSetExpireTimeResponse
 */
ModifyBackupSetExpireTimeResponse Client::modifyBackupSetExpireTimeWithOptions(const ModifyBackupSetExpireTimeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupId()) {
    query["BackupId"] = request.getBackupId();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasExpectExpireTime()) {
    query["ExpectExpireTime"] = request.getExpectExpireTime();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyBackupSetExpireTime"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyBackupSetExpireTimeResponse>();
}

/**
 * @summary Extends the expiration time of backup sets generated by manual backup for a single database, including physical backup sets and full backup sets.
 *
 * @param request ModifyBackupSetExpireTimeRequest
 * @return ModifyBackupSetExpireTimeResponse
 */
ModifyBackupSetExpireTimeResponse Client::modifyBackupSetExpireTime(const ModifyBackupSetExpireTimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyBackupSetExpireTimeWithOptions(request, runtime);
}

/**
 * @summary 修改排序时区
 *
 * @param request ModifyCollationTimeZoneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyCollationTimeZoneResponse
 */
ModifyCollationTimeZoneResponse Client::modifyCollationTimeZoneWithOptions(const ModifyCollationTimeZoneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCollation()) {
    query["Collation"] = request.getCollation();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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

  if (!!request.hasTimezone()) {
    query["Timezone"] = request.getTimezone();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyCollationTimeZone"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyCollationTimeZoneResponse>();
}

/**
 * @summary 修改排序时区
 *
 * @param request ModifyCollationTimeZoneRequest
 * @return ModifyCollationTimeZoneResponse
 */
ModifyCollationTimeZoneResponse Client::modifyCollationTimeZone(const ModifyCollationTimeZoneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCollationTimeZoneWithOptions(request, runtime);
}

/**
 * @summary Modifies the settings of assured serverless or disables assured serverless.
 *
 * @description ### 适用引擎
 * RDS PostgreSQL
 * ### 相关功能文档
 * [承诺型Serverless](https://help.aliyun.com/document_detail/2928780.html)
 *
 * @param request ModifyComputeBurstConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyComputeBurstConfigResponse
 */
ModifyComputeBurstConfigResponse Client::modifyComputeBurstConfigWithOptions(const ModifyComputeBurstConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBurstStatus()) {
    query["BurstStatus"] = request.getBurstStatus();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCpuEnlargeThreshold()) {
    query["CpuEnlargeThreshold"] = request.getCpuEnlargeThreshold();
  }

  if (!!request.hasCpuShrinkThreshold()) {
    query["CpuShrinkThreshold"] = request.getCpuShrinkThreshold();
  }

  if (!!request.hasCrontabJobId()) {
    query["CrontabJobId"] = request.getCrontabJobId();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasMemoryEnlargeThreshold()) {
    query["MemoryEnlargeThreshold"] = request.getMemoryEnlargeThreshold();
  }

  if (!!request.hasMemoryShrinkThreshold()) {
    query["MemoryShrinkThreshold"] = request.getMemoryShrinkThreshold();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasScaleMaxCpus()) {
    query["ScaleMaxCpus"] = request.getScaleMaxCpus();
  }

  if (!!request.hasScaleMaxMemory()) {
    query["ScaleMaxMemory"] = request.getScaleMaxMemory();
  }

  if (!!request.hasSwitchTime()) {
    query["SwitchTime"] = request.getSwitchTime();
  }

  if (!!request.hasSwitchTimeMode()) {
    query["SwitchTimeMode"] = request.getSwitchTimeMode();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyComputeBurstConfig"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyComputeBurstConfigResponse>();
}

/**
 * @summary Modifies the settings of assured serverless or disables assured serverless.
 *
 * @description ### 适用引擎
 * RDS PostgreSQL
 * ### 相关功能文档
 * [承诺型Serverless](https://help.aliyun.com/document_detail/2928780.html)
 *
 * @param request ModifyComputeBurstConfigRequest
 * @return ModifyComputeBurstConfigResponse
 */
ModifyComputeBurstConfigResponse Client::modifyComputeBurstConfig(const ModifyComputeBurstConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyComputeBurstConfigWithOptions(request, runtime);
}

/**
 * @summary This API is used to modify RDS instance resources.
 *
 * @param request ModifyCustinsResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyCustinsResourceResponse
 */
ModifyCustinsResourceResponse Client::modifyCustinsResourceWithOptions(const ModifyCustinsResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdjustDeadline()) {
    query["AdjustDeadline"] = request.getAdjustDeadline();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasIncreaseRatio()) {
    query["IncreaseRatio"] = request.getIncreaseRatio();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasRestoreOriginalSpecification()) {
    query["RestoreOriginalSpecification"] = request.getRestoreOriginalSpecification();
  }

  if (!!request.hasTargetValue()) {
    query["TargetValue"] = request.getTargetValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyCustinsResource"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyCustinsResourceResponse>();
}

/**
 * @summary This API is used to modify RDS instance resources.
 *
 * @param request ModifyCustinsResourceRequest
 * @return ModifyCustinsResourceResponse
 */
ModifyCustinsResourceResponse Client::modifyCustinsResource(const ModifyCustinsResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCustinsResourceWithOptions(request, runtime);
}

/**
 * @summary 修改DB备注信息
 *
 * @param request ModifyDBDescriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBDescriptionResponse
 */
ModifyDBDescriptionResponse Client::modifyDBDescriptionWithOptions(const ModifyDBDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBDescription()) {
    query["DBDescription"] = request.getDBDescription();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.getDBName();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBDescription"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBDescriptionResponse>();
}

/**
 * @summary 修改DB备注信息
 *
 * @param request ModifyDBDescriptionRequest
 * @return ModifyDBDescriptionResponse
 */
ModifyDBDescriptionResponse Client::modifyDBDescription(const ModifyDBDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBDescriptionWithOptions(request, runtime);
}

/**
 * @summary 设置RDS实例是否自动升级内核小版本
 *
 * @param request ModifyDBInstanceAutoUpgradeMinorVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBInstanceAutoUpgradeMinorVersionResponse
 */
ModifyDBInstanceAutoUpgradeMinorVersionResponse Client::modifyDBInstanceAutoUpgradeMinorVersionWithOptions(const ModifyDBInstanceAutoUpgradeMinorVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoUpgradeMinorVersion()) {
    query["AutoUpgradeMinorVersion"] = request.getAutoUpgradeMinorVersion();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBInstanceAutoUpgradeMinorVersion"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBInstanceAutoUpgradeMinorVersionResponse>();
}

/**
 * @summary 设置RDS实例是否自动升级内核小版本
 *
 * @param request ModifyDBInstanceAutoUpgradeMinorVersionRequest
 * @return ModifyDBInstanceAutoUpgradeMinorVersionResponse
 */
ModifyDBInstanceAutoUpgradeMinorVersionResponse Client::modifyDBInstanceAutoUpgradeMinorVersion(const ModifyDBInstanceAutoUpgradeMinorVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceAutoUpgradeMinorVersionWithOptions(request, runtime);
}

/**
 * @summary Modify the column encryption algorithm configuration for a specified instance.
 *
 * @description ## Request Description
 * - Before using this API, ensure that you have activated the column encryption service in the DAS Security Center.
 * - If you receive an error message when invoking the API, go to the DAS (Database Autonomy Service) Security Center to purchase and activate the column encryption service before using it again.
 *
 * @param request ModifyDBInstanceCLSRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBInstanceCLSResponse
 */
ModifyDBInstanceCLSResponse Client::modifyDBInstanceCLSWithOptions(const ModifyDBInstanceCLSRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasEncryptionAlgorithm()) {
    query["EncryptionAlgorithm"] = request.getEncryptionAlgorithm();
  }

  if (!!request.hasEncryptionKey()) {
    query["EncryptionKey"] = request.getEncryptionKey();
  }

  if (!!request.hasEncryptionKeyMode()) {
    query["EncryptionKeyMode"] = request.getEncryptionKeyMode();
  }

  if (!!request.hasEncryptionStatus()) {
    query["EncryptionStatus"] = request.getEncryptionStatus();
  }

  if (!!request.hasIsRotate()) {
    query["IsRotate"] = request.getIsRotate();
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

  if (!!request.hasRoleArn()) {
    query["RoleArn"] = request.getRoleArn();
  }

  if (!!request.hasWhiteListMode()) {
    query["WhiteListMode"] = request.getWhiteListMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBInstanceCLS"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBInstanceCLSResponse>();
}

/**
 * @summary Modify the column encryption algorithm configuration for a specified instance.
 *
 * @description ## Request Description
 * - Before using this API, ensure that you have activated the column encryption service in the DAS Security Center.
 * - If you receive an error message when invoking the API, go to the DAS (Database Autonomy Service) Security Center to purchase and activate the column encryption service before using it again.
 *
 * @param request ModifyDBInstanceCLSRequest
 * @return ModifyDBInstanceCLSResponse
 */
ModifyDBInstanceCLSResponse Client::modifyDBInstanceCLS(const ModifyDBInstanceCLSRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceCLSWithOptions(request, runtime);
}

/**
 * @summary 修改实例配置
 *
 * @param request ModifyDBInstanceConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBInstanceConfigResponse
 */
ModifyDBInstanceConfigResponse Client::modifyDBInstanceConfigWithOptions(const ModifyDBInstanceConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasConfigName()) {
    query["ConfigName"] = request.getConfigName();
  }

  if (!!request.hasConfigValue()) {
    query["ConfigValue"] = request.getConfigValue();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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

  if (!!request.hasSwitchTime()) {
    query["SwitchTime"] = request.getSwitchTime();
  }

  if (!!request.hasSwitchTimeMode()) {
    query["SwitchTimeMode"] = request.getSwitchTimeMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBInstanceConfig"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBInstanceConfigResponse>();
}

/**
 * @summary 修改实例配置
 *
 * @param request ModifyDBInstanceConfigRequest
 * @return ModifyDBInstanceConfigResponse
 */
ModifyDBInstanceConfigResponse Client::modifyDBInstanceConfig(const ModifyDBInstanceConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceConfigWithOptions(request, runtime);
}

/**
 * @summary This API is used to manage the connection address and port of an instance.
 *
 * @description ### Supported Engines
 * - RDS MySQL
 * - RDS PostgreSQL
 * - RDS SQL Server
 * - RDS MariaDB
 * ### Related Function Documentation
 * >Notice: Before using this API, carefully read the Function Documentation to fully understand the prerequisites for using the API and the impact of its use before performing any operation.
 * - [Modify the connection address and port for RDS MySQL](https://help.aliyun.com/document_detail/96163.html)
 * - [Modify the connection address and port for RDS PostgreSQL](https://help.aliyun.com/document_detail/96788.html)
 * - [Modify the connection address and port for RDS SQL Server](https://help.aliyun.com/document_detail/95740.html)
 * - [Modify the connection address and port for RDS MariaDB](https://help.aliyun.com/document_detail/97157.html)
 *
 * @param request ModifyDBInstanceConnectionStringRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBInstanceConnectionStringResponse
 */
ModifyDBInstanceConnectionStringResponse Client::modifyDBInstanceConnectionStringWithOptions(const ModifyDBInstanceConnectionStringRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBabelfishPort()) {
    query["BabelfishPort"] = request.getBabelfishPort();
  }

  if (!!request.hasConnectionStringPrefix()) {
    query["ConnectionStringPrefix"] = request.getConnectionStringPrefix();
  }

  if (!!request.hasCurrentConnectionString()) {
    query["CurrentConnectionString"] = request.getCurrentConnectionString();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasGeneralGroupName()) {
    query["GeneralGroupName"] = request.getGeneralGroupName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPGBouncerPort()) {
    query["PGBouncerPort"] = request.getPGBouncerPort();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRetainVip()) {
    query["RetainVip"] = request.getRetainVip();
  }

  if (!!request.hasTargetDBInstanceId()) {
    query["TargetDBInstanceId"] = request.getTargetDBInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBInstanceConnectionString"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBInstanceConnectionStringResponse>();
}

/**
 * @summary This API is used to manage the connection address and port of an instance.
 *
 * @description ### Supported Engines
 * - RDS MySQL
 * - RDS PostgreSQL
 * - RDS SQL Server
 * - RDS MariaDB
 * ### Related Function Documentation
 * >Notice: Before using this API, carefully read the Function Documentation to fully understand the prerequisites for using the API and the impact of its use before performing any operation.
 * - [Modify the connection address and port for RDS MySQL](https://help.aliyun.com/document_detail/96163.html)
 * - [Modify the connection address and port for RDS PostgreSQL](https://help.aliyun.com/document_detail/96788.html)
 * - [Modify the connection address and port for RDS SQL Server](https://help.aliyun.com/document_detail/95740.html)
 * - [Modify the connection address and port for RDS MariaDB](https://help.aliyun.com/document_detail/97157.html)
 *
 * @param request ModifyDBInstanceConnectionStringRequest
 * @return ModifyDBInstanceConnectionStringResponse
 */
ModifyDBInstanceConnectionStringResponse Client::modifyDBInstanceConnectionString(const ModifyDBInstanceConnectionStringRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceConnectionStringWithOptions(request, runtime);
}

/**
 * @summary 修改只读实例延迟时间
 *
 * @param request ModifyDBInstanceDelayedReplicationTimeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBInstanceDelayedReplicationTimeResponse
 */
ModifyDBInstanceDelayedReplicationTimeResponse Client::modifyDBInstanceDelayedReplicationTimeWithOptions(const ModifyDBInstanceDelayedReplicationTimeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasReadSQLReplicationTime()) {
    query["ReadSQLReplicationTime"] = request.getReadSQLReplicationTime();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBInstanceDelayedReplicationTime"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBInstanceDelayedReplicationTimeResponse>();
}

/**
 * @summary 修改只读实例延迟时间
 *
 * @param request ModifyDBInstanceDelayedReplicationTimeRequest
 * @return ModifyDBInstanceDelayedReplicationTimeResponse
 */
ModifyDBInstanceDelayedReplicationTimeResponse Client::modifyDBInstanceDelayedReplicationTime(const ModifyDBInstanceDelayedReplicationTimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceDelayedReplicationTimeWithOptions(request, runtime);
}

/**
 * @summary 修改实例是否开启删除保护
 *
 * @param request ModifyDBInstanceDeletionProtectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBInstanceDeletionProtectionResponse
 */
ModifyDBInstanceDeletionProtectionResponse Client::modifyDBInstanceDeletionProtectionWithOptions(const ModifyDBInstanceDeletionProtectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDeletionProtection()) {
    query["DeletionProtection"] = request.getDeletionProtection();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBInstanceDeletionProtection"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBInstanceDeletionProtectionResponse>();
}

/**
 * @summary 修改实例是否开启删除保护
 *
 * @param request ModifyDBInstanceDeletionProtectionRequest
 * @return ModifyDBInstanceDeletionProtectionResponse
 */
ModifyDBInstanceDeletionProtectionResponse Client::modifyDBInstanceDeletionProtection(const ModifyDBInstanceDeletionProtectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceDeletionProtectionWithOptions(request, runtime);
}

/**
 * @summary 修改实例备注信息
 *
 * @param request ModifyDBInstanceDescriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBInstanceDescriptionResponse
 */
ModifyDBInstanceDescriptionResponse Client::modifyDBInstanceDescriptionWithOptions(const ModifyDBInstanceDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceDescription()) {
    query["DBInstanceDescription"] = request.getDBInstanceDescription();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBInstanceDescription"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBInstanceDescriptionResponse>();
}

/**
 * @summary 修改实例备注信息
 *
 * @param request ModifyDBInstanceDescriptionRequest
 * @return ModifyDBInstanceDescriptionResponse
 */
ModifyDBInstanceDescriptionResponse Client::modifyDBInstanceDescription(const ModifyDBInstanceDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceDescriptionWithOptions(request, runtime);
}

/**
 * @summary 修改实例的Endpoint信息
 *
 * @param tmpReq ModifyDBInstanceEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBInstanceEndpointResponse
 */
ModifyDBInstanceEndpointResponse Client::modifyDBInstanceEndpointWithOptions(const ModifyDBInstanceEndpointRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyDBInstanceEndpointShrinkRequest request = ModifyDBInstanceEndpointShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNodeItems()) {
    request.setNodeItemsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNodeItems(), "NodeItems", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceEndpointDescription()) {
    query["DBInstanceEndpointDescription"] = request.getDBInstanceEndpointDescription();
  }

  if (!!request.hasDBInstanceEndpointId()) {
    query["DBInstanceEndpointId"] = request.getDBInstanceEndpointId();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasNodeItemsShrink()) {
    query["NodeItems"] = request.getNodeItemsShrink();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBInstanceEndpoint"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBInstanceEndpointResponse>();
}

/**
 * @summary 修改实例的Endpoint信息
 *
 * @param request ModifyDBInstanceEndpointRequest
 * @return ModifyDBInstanceEndpointResponse
 */
ModifyDBInstanceEndpointResponse Client::modifyDBInstanceEndpoint(const ModifyDBInstanceEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceEndpointWithOptions(request, runtime);
}

/**
 * @summary 修改实例的Endpoint连接地址信息
 *
 * @param request ModifyDBInstanceEndpointAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBInstanceEndpointAddressResponse
 */
ModifyDBInstanceEndpointAddressResponse Client::modifyDBInstanceEndpointAddressWithOptions(const ModifyDBInstanceEndpointAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasConnectionString()) {
    query["ConnectionString"] = request.getConnectionString();
  }

  if (!!request.hasConnectionStringPrefix()) {
    query["ConnectionStringPrefix"] = request.getConnectionStringPrefix();
  }

  if (!!request.hasDBInstanceEndpointId()) {
    query["DBInstanceEndpointId"] = request.getDBInstanceEndpointId();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasPrivateIpAddress()) {
    query["PrivateIpAddress"] = request.getPrivateIpAddress();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBInstanceEndpointAddress"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBInstanceEndpointAddressResponse>();
}

/**
 * @summary 修改实例的Endpoint连接地址信息
 *
 * @param request ModifyDBInstanceEndpointAddressRequest
 * @return ModifyDBInstanceEndpointAddressResponse
 */
ModifyDBInstanceEndpointAddressResponse Client::modifyDBInstanceEndpointAddress(const ModifyDBInstanceEndpointAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceEndpointAddressWithOptions(request, runtime);
}

/**
 * @summary 修改实例的高可用模式和数据复制方式
 *
 * @param request ModifyDBInstanceHAConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBInstanceHAConfigResponse
 */
ModifyDBInstanceHAConfigResponse Client::modifyDBInstanceHAConfigWithOptions(const ModifyDBInstanceHAConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbInstanceId()) {
    query["DbInstanceId"] = request.getDbInstanceId();
  }

  if (!!request.hasHAMode()) {
    query["HAMode"] = request.getHAMode();
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

  if (!!request.hasSyncMode()) {
    query["SyncMode"] = request.getSyncMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBInstanceHAConfig"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBInstanceHAConfigResponse>();
}

/**
 * @summary 修改实例的高可用模式和数据复制方式
 *
 * @param request ModifyDBInstanceHAConfigRequest
 * @return ModifyDBInstanceHAConfigResponse
 */
ModifyDBInstanceHAConfigResponse Client::modifyDBInstanceHAConfig(const ModifyDBInstanceHAConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceHAConfigWithOptions(request, runtime);
}

/**
 * @summary 设置实例运维时间
 *
 * @param request ModifyDBInstanceMaintainTimeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBInstanceMaintainTimeResponse
 */
ModifyDBInstanceMaintainTimeResponse Client::modifyDBInstanceMaintainTimeWithOptions(const ModifyDBInstanceMaintainTimeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasMaintainTime()) {
    query["MaintainTime"] = request.getMaintainTime();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBInstanceMaintainTime"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBInstanceMaintainTimeResponse>();
}

/**
 * @summary 设置实例运维时间
 *
 * @param request ModifyDBInstanceMaintainTimeRequest
 * @return ModifyDBInstanceMaintainTimeResponse
 */
ModifyDBInstanceMaintainTimeResponse Client::modifyDBInstanceMaintainTime(const ModifyDBInstanceMaintainTimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceMaintainTimeWithOptions(request, runtime);
}

/**
 * @summary 变更RDS PostgreSQL实例需要展示的增强监控指标
 *
 * @param request ModifyDBInstanceMetricsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBInstanceMetricsResponse
 */
ModifyDBInstanceMetricsResponse Client::modifyDBInstanceMetricsWithOptions(const ModifyDBInstanceMetricsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasMetricsConfig()) {
    query["MetricsConfig"] = request.getMetricsConfig();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasScope()) {
    query["Scope"] = request.getScope();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBInstanceMetrics"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBInstanceMetricsResponse>();
}

/**
 * @summary 变更RDS PostgreSQL实例需要展示的增强监控指标
 *
 * @param request ModifyDBInstanceMetricsRequest
 * @return ModifyDBInstanceMetricsResponse
 */
ModifyDBInstanceMetricsResponse Client::modifyDBInstanceMetrics(const ModifyDBInstanceMetricsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceMetricsWithOptions(request, runtime);
}

/**
 * @summary Modifies a monitoring frequency.
 *
 * @description ### 适用引擎
 * - RDS MySQL
 * - RDS SQL Server
 * ### 注意事项
 * RDS MySQL的秒级监控需要收取额外费用，请确保在使用该接口前，已充分了解RDS产品的[收费方式和价格](https://help.aliyun.com/document_detail/45020.html)。
 * ### 相关功能文档
 * >Notice: 使用该接口前，请仔细阅读功能文档，确保完全了解使用接口的前提条件及使用后造成的影响后，再进行操作。
 * - [RDS MySQL设置监控频率](https://help.aliyun.com/document_detail/96112.html)
 * - [RDS SQL Server设置监控频率](https://help.aliyun.com/document_detail/95710.html)
 *
 * @param request ModifyDBInstanceMonitorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBInstanceMonitorResponse
 */
ModifyDBInstanceMonitorResponse Client::modifyDBInstanceMonitorWithOptions(const ModifyDBInstanceMonitorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBInstanceMonitor"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBInstanceMonitorResponse>();
}

/**
 * @summary Modifies a monitoring frequency.
 *
 * @description ### 适用引擎
 * - RDS MySQL
 * - RDS SQL Server
 * ### 注意事项
 * RDS MySQL的秒级监控需要收取额外费用，请确保在使用该接口前，已充分了解RDS产品的[收费方式和价格](https://help.aliyun.com/document_detail/45020.html)。
 * ### 相关功能文档
 * >Notice: 使用该接口前，请仔细阅读功能文档，确保完全了解使用接口的前提条件及使用后造成的影响后，再进行操作。
 * - [RDS MySQL设置监控频率](https://help.aliyun.com/document_detail/96112.html)
 * - [RDS SQL Server设置监控频率](https://help.aliyun.com/document_detail/95710.html)
 *
 * @param request ModifyDBInstanceMonitorRequest
 * @return ModifyDBInstanceMonitorResponse
 */
ModifyDBInstanceMonitorResponse Client::modifyDBInstanceMonitor(const ModifyDBInstanceMonitorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceMonitorWithOptions(request, runtime);
}

/**
 * @summary 设置实例网络链接过期时间
 *
 * @param request ModifyDBInstanceNetworkExpireTimeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBInstanceNetworkExpireTimeResponse
 */
ModifyDBInstanceNetworkExpireTimeResponse Client::modifyDBInstanceNetworkExpireTimeWithOptions(const ModifyDBInstanceNetworkExpireTimeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClassicExpiredDays()) {
    query["ClassicExpiredDays"] = request.getClassicExpiredDays();
  }

  if (!!request.hasConnectionString()) {
    query["ConnectionString"] = request.getConnectionString();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBInstanceNetworkExpireTime"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBInstanceNetworkExpireTimeResponse>();
}

/**
 * @summary 设置实例网络链接过期时间
 *
 * @param request ModifyDBInstanceNetworkExpireTimeRequest
 * @return ModifyDBInstanceNetworkExpireTimeResponse
 */
ModifyDBInstanceNetworkExpireTimeResponse Client::modifyDBInstanceNetworkExpireTime(const ModifyDBInstanceNetworkExpireTimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceNetworkExpireTimeWithOptions(request, runtime);
}

/**
 * @summary 将网络类型为经典网络的RDS实例转换为专有网络
 *
 * @param request ModifyDBInstanceNetworkTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBInstanceNetworkTypeResponse
 */
ModifyDBInstanceNetworkTypeResponse Client::modifyDBInstanceNetworkTypeWithOptions(const ModifyDBInstanceNetworkTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClassicExpiredDays()) {
    query["ClassicExpiredDays"] = request.getClassicExpiredDays();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasInstanceNetworkType()) {
    query["InstanceNetworkType"] = request.getInstanceNetworkType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPrivateIpAddress()) {
    query["PrivateIpAddress"] = request.getPrivateIpAddress();
  }

  if (!!request.hasReadWriteSplittingClassicExpiredDays()) {
    query["ReadWriteSplittingClassicExpiredDays"] = request.getReadWriteSplittingClassicExpiredDays();
  }

  if (!!request.hasReadWriteSplittingPrivateIpAddress()) {
    query["ReadWriteSplittingPrivateIpAddress"] = request.getReadWriteSplittingPrivateIpAddress();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRetainClassic()) {
    query["RetainClassic"] = request.getRetainClassic();
  }

  if (!!request.hasVPCId()) {
    query["VPCId"] = request.getVPCId();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBInstanceNetworkType"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBInstanceNetworkTypeResponse>();
}

/**
 * @summary 将网络类型为经典网络的RDS实例转换为专有网络
 *
 * @param request ModifyDBInstanceNetworkTypeRequest
 * @return ModifyDBInstanceNetworkTypeResponse
 */
ModifyDBInstanceNetworkTypeResponse Client::modifyDBInstanceNetworkType(const ModifyDBInstanceNetworkTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceNetworkTypeWithOptions(request, runtime);
}

/**
 * @summary 变更实例计费方式
 *
 * @param request ModifyDBInstancePayTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBInstancePayTypeResponse
 */
ModifyDBInstancePayTypeResponse Client::modifyDBInstancePayTypeWithOptions(const ModifyDBInstancePayTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasPayType()) {
    query["PayType"] = request.getPayType();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasUsedTime()) {
    query["UsedTime"] = request.getUsedTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBInstancePayType"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBInstancePayTypeResponse>();
}

/**
 * @summary 变更实例计费方式
 *
 * @param request ModifyDBInstancePayTypeRequest
 * @return ModifyDBInstancePayTypeResponse
 */
ModifyDBInstancePayTypeResponse Client::modifyDBInstancePayType(const ModifyDBInstancePayTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstancePayTypeWithOptions(request, runtime);
}

/**
 * @summary Enables or disables the native replication feature of ApsaraDB RDS for MySQL.
 *
 * @param request ModifyDBInstanceReplicationSwitchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBInstanceReplicationSwitchResponse
 */
ModifyDBInstanceReplicationSwitchResponse Client::modifyDBInstanceReplicationSwitchWithOptions(const ModifyDBInstanceReplicationSwitchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasExternalReplication()) {
    query["ExternalReplication"] = request.getExternalReplication();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBInstanceReplicationSwitch"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBInstanceReplicationSwitchResponse>();
}

/**
 * @summary Enables or disables the native replication feature of ApsaraDB RDS for MySQL.
 *
 * @param request ModifyDBInstanceReplicationSwitchRequest
 * @return ModifyDBInstanceReplicationSwitchResponse
 */
ModifyDBInstanceReplicationSwitchResponse Client::modifyDBInstanceReplicationSwitch(const ModifyDBInstanceReplicationSwitchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceReplicationSwitchWithOptions(request, runtime);
}

/**
 * @summary 设置实例访问链路支持SSL加密
 *
 * @param request ModifyDBInstanceSSLRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBInstanceSSLResponse
 */
ModifyDBInstanceSSLResponse Client::modifyDBInstanceSSLWithOptions(const ModifyDBInstanceSSLRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasACL()) {
    query["ACL"] = request.getACL();
  }

  if (!!request.hasCAType()) {
    query["CAType"] = request.getCAType();
  }

  if (!!request.hasCertificate()) {
    query["Certificate"] = request.getCertificate();
  }

  if (!!request.hasClientCACert()) {
    query["ClientCACert"] = request.getClientCACert();
  }

  if (!!request.hasClientCAEnabled()) {
    query["ClientCAEnabled"] = request.getClientCAEnabled();
  }

  if (!!request.hasClientCertRevocationList()) {
    query["ClientCertRevocationList"] = request.getClientCertRevocationList();
  }

  if (!!request.hasClientCrlEnabled()) {
    query["ClientCrlEnabled"] = request.getClientCrlEnabled();
  }

  if (!!request.hasConnectionString()) {
    query["ConnectionString"] = request.getConnectionString();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasForceEncryption()) {
    query["ForceEncryption"] = request.getForceEncryption();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPassWord()) {
    query["PassWord"] = request.getPassWord();
  }

  if (!!request.hasReplicationACL()) {
    query["ReplicationACL"] = request.getReplicationACL();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSSLEnabled()) {
    query["SSLEnabled"] = request.getSSLEnabled();
  }

  if (!!request.hasServerCert()) {
    query["ServerCert"] = request.getServerCert();
  }

  if (!!request.hasServerKey()) {
    query["ServerKey"] = request.getServerKey();
  }

  if (!!request.hasTlsVersion()) {
    query["TlsVersion"] = request.getTlsVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBInstanceSSL"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBInstanceSSLResponse>();
}

/**
 * @summary 设置实例访问链路支持SSL加密
 *
 * @param request ModifyDBInstanceSSLRequest
 * @return ModifyDBInstanceSSLResponse
 */
ModifyDBInstanceSSLResponse Client::modifyDBInstanceSSL(const ModifyDBInstanceSSLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceSSLWithOptions(request, runtime);
}

/**
 * @summary 修改实例主机安全组规则
 *
 * @param request ModifyDBInstanceSecurityGroupRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBInstanceSecurityGroupRuleResponse
 */
ModifyDBInstanceSecurityGroupRuleResponse Client::modifyDBInstanceSecurityGroupRuleWithOptions(const ModifyDBInstanceSecurityGroupRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasIpProtocol()) {
    query["IpProtocol"] = request.getIpProtocol();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPortRange()) {
    query["PortRange"] = request.getPortRange();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityGroupRuleId()) {
    query["SecurityGroupRuleId"] = request.getSecurityGroupRuleId();
  }

  if (!!request.hasSourceCidrIp()) {
    query["SourceCidrIp"] = request.getSourceCidrIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBInstanceSecurityGroupRule"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBInstanceSecurityGroupRuleResponse>();
}

/**
 * @summary 修改实例主机安全组规则
 *
 * @param request ModifyDBInstanceSecurityGroupRuleRequest
 * @return ModifyDBInstanceSecurityGroupRuleResponse
 */
ModifyDBInstanceSecurityGroupRuleResponse Client::modifyDBInstanceSecurityGroupRule(const ModifyDBInstanceSecurityGroupRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceSecurityGroupRuleWithOptions(request, runtime);
}

/**
 * @summary 数据库实例变更配置
 *
 * @param tmpReq ModifyDBInstanceSpecRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBInstanceSpecResponse
 */
ModifyDBInstanceSpecResponse Client::modifyDBInstanceSpecWithOptions(const ModifyDBInstanceSpecRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyDBInstanceSpecShrinkRequest request = ModifyDBInstanceSpecShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasServerlessConfiguration()) {
    request.setServerlessConfigurationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getServerlessConfiguration(), "ServerlessConfiguration", "json"));
  }

  json query = {};
  if (!!request.hasAllocateStrategy()) {
    query["AllocateStrategy"] = request.getAllocateStrategy();
  }

  if (!!request.hasAllowMajorVersionUpgrade()) {
    query["AllowMajorVersionUpgrade"] = request.getAllowMajorVersionUpgrade();
  }

  if (!!request.hasAutoUseCoupon()) {
    query["AutoUseCoupon"] = request.getAutoUseCoupon();
  }

  if (!!request.hasBurstingEnabled()) {
    query["BurstingEnabled"] = request.getBurstingEnabled();
  }

  if (!!request.hasCategory()) {
    query["Category"] = request.getCategory();
  }

  if (!!request.hasColdDataEnabled()) {
    query["ColdDataEnabled"] = request.getColdDataEnabled();
  }

  if (!!request.hasCompressionMode()) {
    query["CompressionMode"] = request.getCompressionMode();
  }

  if (!!request.hasDBInstanceClass()) {
    query["DBInstanceClass"] = request.getDBInstanceClass();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBInstanceStorage()) {
    query["DBInstanceStorage"] = request.getDBInstanceStorage();
  }

  if (!!request.hasDBInstanceStorageType()) {
    query["DBInstanceStorageType"] = request.getDBInstanceStorageType();
  }

  if (!!request.hasDedicatedHostGroupId()) {
    query["DedicatedHostGroupId"] = request.getDedicatedHostGroupId();
  }

  if (!!request.hasDirection()) {
    query["Direction"] = request.getDirection();
  }

  if (!!request.hasEffectiveTime()) {
    query["EffectiveTime"] = request.getEffectiveTime();
  }

  if (!!request.hasEngineVersion()) {
    query["EngineVersion"] = request.getEngineVersion();
  }

  if (!!request.hasIoAccelerationEnabled()) {
    query["IoAccelerationEnabled"] = request.getIoAccelerationEnabled();
  }

  if (!!request.hasOptimizedWrites()) {
    query["OptimizedWrites"] = request.getOptimizedWrites();
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

  if (!!request.hasPromotionCode()) {
    query["PromotionCode"] = request.getPromotionCode();
  }

  if (!!request.hasReadOnlyDBInstanceClass()) {
    query["ReadOnlyDBInstanceClass"] = request.getReadOnlyDBInstanceClass();
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

  if (!!request.hasServerlessConfigurationShrink()) {
    query["ServerlessConfiguration"] = request.getServerlessConfigurationShrink();
  }

  if (!!request.hasSourceBiz()) {
    query["SourceBiz"] = request.getSourceBiz();
  }

  if (!!request.hasSwitchTime()) {
    query["SwitchTime"] = request.getSwitchTime();
  }

  if (!!request.hasTargetMinorVersion()) {
    query["TargetMinorVersion"] = request.getTargetMinorVersion();
  }

  if (!!request.hasUsedTime()) {
    query["UsedTime"] = request.getUsedTime();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  if (!!request.hasZoneIdSlave1()) {
    query["ZoneIdSlave1"] = request.getZoneIdSlave1();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBInstanceSpec"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBInstanceSpecResponse>();
}

/**
 * @summary 数据库实例变更配置
 *
 * @param request ModifyDBInstanceSpecRequest
 * @return ModifyDBInstanceSpecResponse
 */
ModifyDBInstanceSpecResponse Client::modifyDBInstanceSpec(const ModifyDBInstanceSpecRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceSpecWithOptions(request, runtime);
}

/**
 * @summary 设置RDS实例开启透明传输加密
 *
 * @param request ModifyDBInstanceTDERequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBInstanceTDEResponse
 */
ModifyDBInstanceTDEResponse Client::modifyDBInstanceTDEWithOptions(const ModifyDBInstanceTDERequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertificate()) {
    query["Certificate"] = request.getCertificate();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.getDBName();
  }

  if (!!request.hasEncryptionKey()) {
    query["EncryptionKey"] = request.getEncryptionKey();
  }

  if (!!request.hasIsRotate()) {
    query["IsRotate"] = request.getIsRotate();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPassWord()) {
    query["PassWord"] = request.getPassWord();
  }

  if (!!request.hasPrivateKey()) {
    query["PrivateKey"] = request.getPrivateKey();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRoleArn()) {
    query["RoleArn"] = request.getRoleArn();
  }

  if (!!request.hasTDEStatus()) {
    query["TDEStatus"] = request.getTDEStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBInstanceTDE"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBInstanceTDEResponse>();
}

/**
 * @summary 设置RDS实例开启透明传输加密
 *
 * @param request ModifyDBInstanceTDERequest
 * @return ModifyDBInstanceTDEResponse
 */
ModifyDBInstanceTDEResponse Client::modifyDBInstanceTDE(const ModifyDBInstanceTDERequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceTDEWithOptions(request, runtime);
}

/**
 * @summary Enable or disable the vector storage toggle for a MySQL instance.
 *
 * @description ### Supported Engine
 * - RDS MySQL
 * ### Related Function Documentation
 * >Notice: Before invoking this API, carefully read the Function Documentation to fully understand the prerequisites and the Impact of using this API, and then perform the operation.
 * - [RDS MySQL Vector Storage](https://help.aliyun.com/document_detail/2998661.html)
 *
 * @param request ModifyDBInstanceVectorSupportStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBInstanceVectorSupportStatusResponse
 */
ModifyDBInstanceVectorSupportStatusResponse Client::modifyDBInstanceVectorSupportStatusWithOptions(const ModifyDBInstanceVectorSupportStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBInstanceVectorSupportStatus"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBInstanceVectorSupportStatusResponse>();
}

/**
 * @summary Enable or disable the vector storage toggle for a MySQL instance.
 *
 * @description ### Supported Engine
 * - RDS MySQL
 * ### Related Function Documentation
 * >Notice: Before invoking this API, carefully read the Function Documentation to fully understand the prerequisites and the Impact of using this API, and then perform the operation.
 * - [RDS MySQL Vector Storage](https://help.aliyun.com/document_detail/2998661.html)
 *
 * @param request ModifyDBInstanceVectorSupportStatusRequest
 * @return ModifyDBInstanceVectorSupportStatusResponse
 */
ModifyDBInstanceVectorSupportStatusResponse Client::modifyDBInstanceVectorSupportStatus(const ModifyDBInstanceVectorSupportStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceVectorSupportStatusWithOptions(request, runtime);
}

/**
 * @summary category cluster modify node class
 *
 * @param tmpReq ModifyDBNodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBNodeResponse
 */
ModifyDBNodeResponse Client::modifyDBNodeWithOptions(const ModifyDBNodeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyDBNodeShrinkRequest request = ModifyDBNodeShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDBNode()) {
    request.setDBNodeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDBNode(), "DBNode", "json"));
  }

  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBInstanceStorage()) {
    query["DBInstanceStorage"] = request.getDBInstanceStorage();
  }

  if (!!request.hasDBInstanceStorageType()) {
    query["DBInstanceStorageType"] = request.getDBInstanceStorageType();
  }

  if (!!request.hasDBNodeShrink()) {
    query["DBNode"] = request.getDBNodeShrink();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEffectiveTime()) {
    query["EffectiveTime"] = request.getEffectiveTime();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProduceAsync()) {
    query["ProduceAsync"] = request.getProduceAsync();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBNode"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBNodeResponse>();
}

/**
 * @summary category cluster modify node class
 *
 * @param request ModifyDBNodeRequest
 * @return ModifyDBNodeResponse
 */
ModifyDBNodeResponse Client::modifyDBNode(const ModifyDBNodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBNodeWithOptions(request, runtime);
}

/**
 * @summary 修改RDS实例的数据库代理功能
 *
 * @param tmpReq ModifyDBProxyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBProxyResponse
 */
ModifyDBProxyResponse Client::modifyDBProxyWithOptions(const ModifyDBProxyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyDBProxyShrinkRequest request = ModifyDBProxyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDBProxyNodes()) {
    request.setDBProxyNodesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDBProxyNodes(), "DBProxyNodes", "json"));
  }

  json query = {};
  if (!!request.hasConfigDBProxyService()) {
    query["ConfigDBProxyService"] = request.getConfigDBProxyService();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBProxyEngineType()) {
    query["DBProxyEngineType"] = request.getDBProxyEngineType();
  }

  if (!!request.hasDBProxyInstanceNum()) {
    query["DBProxyInstanceNum"] = request.getDBProxyInstanceNum();
  }

  if (!!request.hasDBProxyInstanceType()) {
    query["DBProxyInstanceType"] = request.getDBProxyInstanceType();
  }

  if (!!request.hasDBProxyNodesShrink()) {
    query["DBProxyNodes"] = request.getDBProxyNodesShrink();
  }

  if (!!request.hasInstanceNetworkType()) {
    query["InstanceNetworkType"] = request.getInstanceNetworkType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPersistentConnectionStatus()) {
    query["PersistentConnectionStatus"] = request.getPersistentConnectionStatus();
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

  if (!!request.hasVPCId()) {
    query["VPCId"] = request.getVPCId();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBProxy"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBProxyResponse>();
}

/**
 * @summary 修改RDS实例的数据库代理功能
 *
 * @param request ModifyDBProxyRequest
 * @return ModifyDBProxyResponse
 */
ModifyDBProxyResponse Client::modifyDBProxy(const ModifyDBProxyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBProxyWithOptions(request, runtime);
}

/**
 * @summary Modifies the connection settings for a database proxy endpoint.
 *
 * @param request ModifyDBProxyEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBProxyEndpointResponse
 */
ModifyDBProxyEndpointResponse Client::modifyDBProxyEndpointWithOptions(const ModifyDBProxyEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCausalConsistReadTimeout()) {
    query["CausalConsistReadTimeout"] = request.getCausalConsistReadTimeout();
  }

  if (!!request.hasConfigDBProxyFeatures()) {
    query["ConfigDBProxyFeatures"] = request.getConfigDBProxyFeatures();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBProxyEndpointId()) {
    query["DBProxyEndpointId"] = request.getDBProxyEndpointId();
  }

  if (!!request.hasDBProxyEngineType()) {
    query["DBProxyEngineType"] = request.getDBProxyEngineType();
  }

  if (!!request.hasDbEndpointAliases()) {
    query["DbEndpointAliases"] = request.getDbEndpointAliases();
  }

  if (!!request.hasDbEndpointMinSlaveCount()) {
    query["DbEndpointMinSlaveCount"] = request.getDbEndpointMinSlaveCount();
  }

  if (!!request.hasDbEndpointOperator()) {
    query["DbEndpointOperator"] = request.getDbEndpointOperator();
  }

  if (!!request.hasDbEndpointReadWriteMode()) {
    query["DbEndpointReadWriteMode"] = request.getDbEndpointReadWriteMode();
  }

  if (!!request.hasDbEndpointType()) {
    query["DbEndpointType"] = request.getDbEndpointType();
  }

  if (!!request.hasEffectiveSpecificTime()) {
    query["EffectiveSpecificTime"] = request.getEffectiveSpecificTime();
  }

  if (!!request.hasEffectiveTime()) {
    query["EffectiveTime"] = request.getEffectiveTime();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasReadOnlyInstanceDistributionType()) {
    query["ReadOnlyInstanceDistributionType"] = request.getReadOnlyInstanceDistributionType();
  }

  if (!!request.hasReadOnlyInstanceMaxDelayTime()) {
    query["ReadOnlyInstanceMaxDelayTime"] = request.getReadOnlyInstanceMaxDelayTime();
  }

  if (!!request.hasReadOnlyInstanceWeight()) {
    query["ReadOnlyInstanceWeight"] = request.getReadOnlyInstanceWeight();
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

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBProxyEndpoint"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBProxyEndpointResponse>();
}

/**
 * @summary Modifies the connection settings for a database proxy endpoint.
 *
 * @param request ModifyDBProxyEndpointRequest
 * @return ModifyDBProxyEndpointResponse
 */
ModifyDBProxyEndpointResponse Client::modifyDBProxyEndpoint(const ModifyDBProxyEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBProxyEndpointWithOptions(request, runtime);
}

/**
 * @summary 修改RDS实例数据库代理的连接地址
 *
 * @param request ModifyDBProxyEndpointAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBProxyEndpointAddressResponse
 */
ModifyDBProxyEndpointAddressResponse Client::modifyDBProxyEndpointAddressWithOptions(const ModifyDBProxyEndpointAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBProxyConnectStringNetType()) {
    query["DBProxyConnectStringNetType"] = request.getDBProxyConnectStringNetType();
  }

  if (!!request.hasDBProxyEndpointId()) {
    query["DBProxyEndpointId"] = request.getDBProxyEndpointId();
  }

  if (!!request.hasDBProxyEngineType()) {
    query["DBProxyEngineType"] = request.getDBProxyEngineType();
  }

  if (!!request.hasDBProxyNewConnectString()) {
    query["DBProxyNewConnectString"] = request.getDBProxyNewConnectString();
  }

  if (!!request.hasDBProxyNewConnectStringPort()) {
    query["DBProxyNewConnectStringPort"] = request.getDBProxyNewConnectStringPort();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBProxyEndpointAddress"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBProxyEndpointAddressResponse>();
}

/**
 * @summary 修改RDS实例数据库代理的连接地址
 *
 * @param request ModifyDBProxyEndpointAddressRequest
 * @return ModifyDBProxyEndpointAddressResponse
 */
ModifyDBProxyEndpointAddressResponse Client::modifyDBProxyEndpointAddress(const ModifyDBProxyEndpointAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBProxyEndpointAddressWithOptions(request, runtime);
}

/**
 * @summary 修改RDS实例数据库代理的代理数量
 *
 * @param tmpReq ModifyDBProxyInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBProxyInstanceResponse
 */
ModifyDBProxyInstanceResponse Client::modifyDBProxyInstanceWithOptions(const ModifyDBProxyInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyDBProxyInstanceShrinkRequest request = ModifyDBProxyInstanceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDBProxyNodes()) {
    request.setDBProxyNodesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDBProxyNodes(), "DBProxyNodes", "json"));
  }

  if (!!tmpReq.hasMigrateAZ()) {
    request.setMigrateAZShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMigrateAZ(), "MigrateAZ", "json"));
  }

  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBProxyEngineType()) {
    query["DBProxyEngineType"] = request.getDBProxyEngineType();
  }

  if (!!request.hasDBProxyInstanceNum()) {
    query["DBProxyInstanceNum"] = request.getDBProxyInstanceNum();
  }

  if (!!request.hasDBProxyInstanceType()) {
    query["DBProxyInstanceType"] = request.getDBProxyInstanceType();
  }

  if (!!request.hasDBProxyNodesShrink()) {
    query["DBProxyNodes"] = request.getDBProxyNodesShrink();
  }

  if (!!request.hasEffectiveSpecificTime()) {
    query["EffectiveSpecificTime"] = request.getEffectiveSpecificTime();
  }

  if (!!request.hasEffectiveTime()) {
    query["EffectiveTime"] = request.getEffectiveTime();
  }

  if (!!request.hasMigrateAZShrink()) {
    query["MigrateAZ"] = request.getMigrateAZShrink();
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

  if (!!request.hasVSwitchIds()) {
    query["VSwitchIds"] = request.getVSwitchIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBProxyInstance"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBProxyInstanceResponse>();
}

/**
 * @summary 修改RDS实例数据库代理的代理数量
 *
 * @param request ModifyDBProxyInstanceRequest
 * @return ModifyDBProxyInstanceResponse
 */
ModifyDBProxyInstanceResponse Client::modifyDBProxyInstance(const ModifyDBProxyInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBProxyInstanceWithOptions(request, runtime);
}

/**
 * @summary SQLServer实例修改DTC主机安全IP
 *
 * @param request ModifyDTCSecurityIpHostsForSQLServerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDTCSecurityIpHostsForSQLServerResponse
 */
ModifyDTCSecurityIpHostsForSQLServerResponse Client::modifyDTCSecurityIpHostsForSQLServerWithOptions(const ModifyDTCSecurityIpHostsForSQLServerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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

  if (!!request.hasSecurityIpHosts()) {
    query["SecurityIpHosts"] = request.getSecurityIpHosts();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasWhiteListGroupName()) {
    query["WhiteListGroupName"] = request.getWhiteListGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDTCSecurityIpHostsForSQLServer"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDTCSecurityIpHostsForSQLServerResponse>();
}

/**
 * @summary SQLServer实例修改DTC主机安全IP
 *
 * @param request ModifyDTCSecurityIpHostsForSQLServerRequest
 * @return ModifyDTCSecurityIpHostsForSQLServerResponse
 */
ModifyDTCSecurityIpHostsForSQLServerResponse Client::modifyDTCSecurityIpHostsForSQLServer(const ModifyDTCSecurityIpHostsForSQLServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDTCSecurityIpHostsForSQLServerWithOptions(request, runtime);
}

/**
 * @summary 设置实例存储空间自动扩容
 *
 * @param request ModifyDasInstanceConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDasInstanceConfigResponse
 */
ModifyDasInstanceConfigResponse Client::modifyDasInstanceConfigWithOptions(const ModifyDasInstanceConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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

  if (!!request.hasStorageAutoScale()) {
    query["StorageAutoScale"] = request.getStorageAutoScale();
  }

  if (!!request.hasStorageThreshold()) {
    query["StorageThreshold"] = request.getStorageThreshold();
  }

  if (!!request.hasStorageUpperBound()) {
    query["StorageUpperBound"] = request.getStorageUpperBound();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDasInstanceConfig"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDasInstanceConfigResponse>();
}

/**
 * @summary 设置实例存储空间自动扩容
 *
 * @param request ModifyDasInstanceConfigRequest
 * @return ModifyDasInstanceConfigResponse
 */
ModifyDasInstanceConfigResponse Client::modifyDasInstanceConfig(const ModifyDasInstanceConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDasInstanceConfigWithOptions(request, runtime);
}

/**
 * @summary 修改数据库属性
 *
 * @param request ModifyDatabaseConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDatabaseConfigResponse
 */
ModifyDatabaseConfigResponse Client::modifyDatabaseConfigWithOptions(const ModifyDatabaseConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.getDBName();
  }

  if (!!request.hasDatabasePropertyName()) {
    query["DatabasePropertyName"] = request.getDatabasePropertyName();
  }

  if (!!request.hasDatabasePropertyValue()) {
    query["DatabasePropertyValue"] = request.getDatabasePropertyValue();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDatabaseConfig"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDatabaseConfigResponse>();
}

/**
 * @summary 修改数据库属性
 *
 * @param request ModifyDatabaseConfigRequest
 * @return ModifyDatabaseConfigResponse
 */
ModifyDatabaseConfigResponse Client::modifyDatabaseConfig(const ModifyDatabaseConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDatabaseConfigWithOptions(request, runtime);
}

/**
 * @summary 设置RDS实例数据库代理连接地址SSL加密
 *
 * @param request ModifyDbProxyInstanceSslRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDbProxyInstanceSslResponse
 */
ModifyDbProxyInstanceSslResponse Client::modifyDbProxyInstanceSslWithOptions(const ModifyDbProxyInstanceSslRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBProxyEngineType()) {
    query["DBProxyEngineType"] = request.getDBProxyEngineType();
  }

  if (!!request.hasDbInstanceId()) {
    query["DbInstanceId"] = request.getDbInstanceId();
  }

  if (!!request.hasDbInstanceId()) {
    query["DbInstanceId"] = request.getDbInstanceId();
  }

  if (!!request.hasDbProxyConnectString()) {
    query["DbProxyConnectString"] = request.getDbProxyConnectString();
  }

  if (!!request.hasDbProxyEndpointId()) {
    query["DbProxyEndpointId"] = request.getDbProxyEndpointId();
  }

  if (!!request.hasDbProxySslEnabled()) {
    query["DbProxySslEnabled"] = request.getDbProxySslEnabled();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDbProxyInstanceSsl"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDbProxyInstanceSslResponse>();
}

/**
 * @summary 设置RDS实例数据库代理连接地址SSL加密
 *
 * @param request ModifyDbProxyInstanceSslRequest
 * @return ModifyDbProxyInstanceSslResponse
 */
ModifyDbProxyInstanceSslResponse Client::modifyDbProxyInstanceSsl(const ModifyDbProxyInstanceSslRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDbProxyInstanceSslWithOptions(request, runtime);
}

/**
 * @summary 事件中心修改事件信息
 *
 * @param request ModifyEventInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyEventInfoResponse
 */
ModifyEventInfoResponse Client::modifyEventInfoWithOptions(const ModifyEventInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActionParams()) {
    query["ActionParams"] = request.getActionParams();
  }

  if (!!request.hasEventAction()) {
    query["EventAction"] = request.getEventAction();
  }

  if (!!request.hasEventId()) {
    query["EventId"] = request.getEventId();
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
    {"action" , "ModifyEventInfo"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyEventInfoResponse>();
}

/**
 * @summary 事件中心修改事件信息
 *
 * @param request ModifyEventInfoRequest
 * @return ModifyEventInfoResponse
 */
ModifyEventInfoResponse Client::modifyEventInfo(const ModifyEventInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyEventInfoWithOptions(request, runtime);
}

/**
 * @summary 修改RDS实例的可用性检测方式
 *
 * @param request ModifyHADiagnoseConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyHADiagnoseConfigResponse
 */
ModifyHADiagnoseConfigResponse Client::modifyHADiagnoseConfigWithOptions(const ModifyHADiagnoseConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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

  if (!!request.hasTcpConnectionType()) {
    query["TcpConnectionType"] = request.getTcpConnectionType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyHADiagnoseConfig"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyHADiagnoseConfigResponse>();
}

/**
 * @summary 修改RDS实例的可用性检测方式
 *
 * @param request ModifyHADiagnoseConfigRequest
 * @return ModifyHADiagnoseConfigResponse
 */
ModifyHADiagnoseConfigResponse Client::modifyHADiagnoseConfig(const ModifyHADiagnoseConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyHADiagnoseConfigWithOptions(request, runtime);
}

/**
 * @summary 开启或关闭RDS实例的主备自动切换功能
 *
 * @param request ModifyHASwitchConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyHASwitchConfigResponse
 */
ModifyHASwitchConfigResponse Client::modifyHASwitchConfigWithOptions(const ModifyHASwitchConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasHAConfig()) {
    query["HAConfig"] = request.getHAConfig();
  }

  if (!!request.hasManualHATime()) {
    query["ManualHATime"] = request.getManualHATime();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyHASwitchConfig"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyHASwitchConfigResponse>();
}

/**
 * @summary 开启或关闭RDS实例的主备自动切换功能
 *
 * @param request ModifyHASwitchConfigRequest
 * @return ModifyHASwitchConfigResponse
 */
ModifyHASwitchConfigResponse Client::modifyHASwitchConfig(const ModifyHASwitchConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyHASwitchConfigWithOptions(request, runtime);
}

/**
 * @summary Modify a Data Import Job for an RDS MySQL Instance with Native Replication
 *
 * @description Modifies a data import job for an RDS MySQL instance with native replication.
 *
 * @param request ModifyImportTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyImportTaskResponse
 */
ModifyImportTaskResponse Client::modifyImportTaskWithOptions(const ModifyImportTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasOperation()) {
    query["Operation"] = request.getOperation();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyImportTask"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyImportTaskResponse>();
}

/**
 * @summary Modify a Data Import Job for an RDS MySQL Instance with Native Replication
 *
 * @description Modifies a data import job for an RDS MySQL instance with native replication.
 *
 * @param request ModifyImportTaskRequest
 * @return ModifyImportTaskResponse
 */
ModifyImportTaskResponse Client::modifyImportTask(const ModifyImportTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyImportTaskWithOptions(request, runtime);
}

/**
 * @summary 修改设置实例是否自动续费
 *
 * @param request ModifyInstanceAutoRenewalAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceAutoRenewalAttributeResponse
 */
ModifyInstanceAutoRenewalAttributeResponse Client::modifyInstanceAutoRenewalAttributeWithOptions(const ModifyInstanceAutoRenewalAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDuration()) {
    query["Duration"] = request.getDuration();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyInstanceAutoRenewalAttribute"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceAutoRenewalAttributeResponse>();
}

/**
 * @summary 修改设置实例是否自动续费
 *
 * @param request ModifyInstanceAutoRenewalAttributeRequest
 * @return ModifyInstanceAutoRenewalAttributeResponse
 */
ModifyInstanceAutoRenewalAttributeResponse Client::modifyInstanceAutoRenewalAttribute(const ModifyInstanceAutoRenewalAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceAutoRenewalAttributeWithOptions(request, runtime);
}

/**
 * @summary 修改RDS跨地域备份设置
 *
 * @param request ModifyInstanceCrossBackupPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceCrossBackupPolicyResponse
 */
ModifyInstanceCrossBackupPolicyResponse Client::modifyInstanceCrossBackupPolicyWithOptions(const ModifyInstanceCrossBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupEnabled()) {
    query["BackupEnabled"] = request.getBackupEnabled();
  }

  if (!!request.hasCrossBackupRegion()) {
    query["CrossBackupRegion"] = request.getCrossBackupRegion();
  }

  if (!!request.hasCrossBackupType()) {
    query["CrossBackupType"] = request.getCrossBackupType();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasLogBackupEnabled()) {
    query["LogBackupEnabled"] = request.getLogBackupEnabled();
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

  if (!!request.hasRetentType()) {
    query["RetentType"] = request.getRetentType();
  }

  if (!!request.hasRetention()) {
    query["Retention"] = request.getRetention();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyInstanceCrossBackupPolicy"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceCrossBackupPolicyResponse>();
}

/**
 * @summary 修改RDS跨地域备份设置
 *
 * @param request ModifyInstanceCrossBackupPolicyRequest
 * @return ModifyInstanceCrossBackupPolicyResponse
 */
ModifyInstanceCrossBackupPolicyResponse Client::modifyInstanceCrossBackupPolicy(const ModifyInstanceCrossBackupPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceCrossBackupPolicyWithOptions(request, runtime);
}

/**
 * @summary Modifies the encryption or desensitization rule for a specified instance.
 *
 * @description ## Request description
 * - Before using this API, ensure that you have enabled the column encryption service in DAS Security Center.
 * - If you receive the error message ColumnEncryptionErrorCode.NOT_PURCHASED when invoking the API, go to the DAS (Database Autonomy Service) Security Center to purchase and enable the column encryption service before using it again.
 *
 * @param tmpReq ModifyMaskingRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyMaskingRulesResponse
 */
ModifyMaskingRulesResponse Client::modifyMaskingRulesWithOptions(const ModifyMaskingRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyMaskingRulesShrinkRequest request = ModifyMaskingRulesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRuleConfig()) {
    request.setRuleConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRuleConfig(), "RuleConfig", "json"));
  }

  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.getDBName();
  }

  if (!!request.hasDefaultAlgo()) {
    query["DefaultAlgo"] = request.getDefaultAlgo();
  }

  if (!!request.hasEnabled()) {
    query["Enabled"] = request.getEnabled();
  }

  if (!!request.hasMaskingAlgo()) {
    query["MaskingAlgo"] = request.getMaskingAlgo();
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

  if (!!request.hasRuleConfigShrink()) {
    query["RuleConfig"] = request.getRuleConfigShrink();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyMaskingRules"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyMaskingRulesResponse>();
}

/**
 * @summary Modifies the encryption or desensitization rule for a specified instance.
 *
 * @description ## Request description
 * - Before using this API, ensure that you have enabled the column encryption service in DAS Security Center.
 * - If you receive the error message ColumnEncryptionErrorCode.NOT_PURCHASED when invoking the API, go to the DAS (Database Autonomy Service) Security Center to purchase and enable the column encryption service before using it again.
 *
 * @param request ModifyMaskingRulesRequest
 * @return ModifyMaskingRulesResponse
 */
ModifyMaskingRulesResponse Client::modifyMaskingRules(const ModifyMaskingRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyMaskingRulesWithOptions(request, runtime);
}

/**
 * @summary 修改PostgreSQL数据库的HBA配置文件
 *
 * @param request ModifyPGHbaConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyPGHbaConfigResponse
 */
ModifyPGHbaConfigResponse Client::modifyPGHbaConfigWithOptions(const ModifyPGHbaConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasHbaItem()) {
    query["HbaItem"] = request.getHbaItem();
  }

  if (!!request.hasOpsType()) {
    query["OpsType"] = request.getOpsType();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyPGHbaConfig"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyPGHbaConfigResponse>();
}

/**
 * @summary 修改PostgreSQL数据库的HBA配置文件
 *
 * @param request ModifyPGHbaConfigRequest
 * @return ModifyPGHbaConfigResponse
 */
ModifyPGHbaConfigResponse Client::modifyPGHbaConfig(const ModifyPGHbaConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyPGHbaConfigWithOptions(request, runtime);
}

/**
 * @summary 修改数据库参数
 *
 * @param request ModifyParameterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyParameterResponse
 */
ModifyParameterResponse Client::modifyParameterWithOptions(const ModifyParameterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasForcerestart()) {
    query["Forcerestart"] = request.getForcerestart();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasParameterGroupId()) {
    query["ParameterGroupId"] = request.getParameterGroupId();
  }

  if (!!request.hasParameters()) {
    query["Parameters"] = request.getParameters();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSwitchTime()) {
    query["SwitchTime"] = request.getSwitchTime();
  }

  if (!!request.hasSwitchTimeMode()) {
    query["SwitchTimeMode"] = request.getSwitchTimeMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyParameter"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyParameterResponse>();
}

/**
 * @summary 修改数据库参数
 *
 * @param request ModifyParameterRequest
 * @return ModifyParameterResponse
 */
ModifyParameterResponse Client::modifyParameter(const ModifyParameterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyParameterWithOptions(request, runtime);
}

/**
 * @summary 修改RDS参数模板
 *
 * @param request ModifyParameterGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyParameterGroupResponse
 */
ModifyParameterGroupResponse Client::modifyParameterGroupWithOptions(const ModifyParameterGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasModifyMode()) {
    query["ModifyMode"] = request.getModifyMode();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasParameterGroupDesc()) {
    query["ParameterGroupDesc"] = request.getParameterGroupDesc();
  }

  if (!!request.hasParameterGroupId()) {
    query["ParameterGroupId"] = request.getParameterGroupId();
  }

  if (!!request.hasParameterGroupName()) {
    query["ParameterGroupName"] = request.getParameterGroupName();
  }

  if (!!request.hasParameters()) {
    query["Parameters"] = request.getParameters();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyParameterGroup"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyParameterGroupResponse>();
}

/**
 * @summary 修改RDS参数模板
 *
 * @param request ModifyParameterGroupRequest
 * @return ModifyParameterGroupResponse
 */
ModifyParameterGroupResponse Client::modifyParameterGroup(const ModifyParameterGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyParameterGroupWithOptions(request, runtime);
}

/**
 * @summary Modify the effective period in a scheduled task for parameter modification
 *
 * @description ### Supported Engines
 * - RDS MySQL
 * - RDS PostgreSQL
 * ### Related Function Documentation
 * >Notice: Before using this API, carefully read the Function Documentation to fully understand the prerequisites and potential Impact of using this API before performing any operation.
 * - [Configure instance parameters for RDS MySQL](https://help.aliyun.com/document_detail/96063.html)
 * - [Configure instance parameters for RDS PostgreSQL](https://help.aliyun.com/document_detail/96751.html)
 *
 * @param request ModifyParameterTimedScheduleTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyParameterTimedScheduleTaskResponse
 */
ModifyParameterTimedScheduleTaskResponse Client::modifyParameterTimedScheduleTaskWithOptions(const ModifyParameterTimedScheduleTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasSwitchTime()) {
    query["SwitchTime"] = request.getSwitchTime();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyParameterTimedScheduleTask"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyParameterTimedScheduleTaskResponse>();
}

/**
 * @summary Modify the effective period in a scheduled task for parameter modification
 *
 * @description ### Supported Engines
 * - RDS MySQL
 * - RDS PostgreSQL
 * ### Related Function Documentation
 * >Notice: Before using this API, carefully read the Function Documentation to fully understand the prerequisites and potential Impact of using this API before performing any operation.
 * - [Configure instance parameters for RDS MySQL](https://help.aliyun.com/document_detail/96063.html)
 * - [Configure instance parameters for RDS PostgreSQL](https://help.aliyun.com/document_detail/96751.html)
 *
 * @param request ModifyParameterTimedScheduleTaskRequest
 * @return ModifyParameterTimedScheduleTaskResponse
 */
ModifyParameterTimedScheduleTaskResponse Client::modifyParameterTimedScheduleTask(const ModifyParameterTimedScheduleTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyParameterTimedScheduleTaskWithOptions(request, runtime);
}

/**
 * @summary 修改部署集的名称和描述信息
 *
 * @param request ModifyRCDeploymentSetAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyRCDeploymentSetAttributeResponse
 */
ModifyRCDeploymentSetAttributeResponse Client::modifyRCDeploymentSetAttributeWithOptions(const ModifyRCDeploymentSetAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeploymentSetId()) {
    query["DeploymentSetId"] = request.getDeploymentSetId();
  }

  if (!!request.hasDeploymentSetName()) {
    query["DeploymentSetName"] = request.getDeploymentSetName();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyRCDeploymentSetAttribute"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyRCDeploymentSetAttributeResponse>();
}

/**
 * @summary 修改部署集的名称和描述信息
 *
 * @param request ModifyRCDeploymentSetAttributeRequest
 * @return ModifyRCDeploymentSetAttributeResponse
 */
ModifyRCDeploymentSetAttributeResponse Client::modifyRCDeploymentSetAttribute(const ModifyRCDeploymentSetAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyRCDeploymentSetAttributeWithOptions(request, runtime);
}

/**
 * @summary Modify the name, description, whether to release with the instance, whether to delete automatic snapshots when the disk is deleted, whether to enable the automatic snapshot policy, and whether to enable the performance burst feature for an Elastic Block Storage device.
 *
 * @description You can invoke the DiskId parameter to modify properties of an Elastic Block Storage device, such as its name, description, and whether it is released with the instance.
 *
 * @param request ModifyRCDiskAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyRCDiskAttributeResponse
 */
ModifyRCDiskAttributeResponse Client::modifyRCDiskAttributeWithOptions(const ModifyRCDiskAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBurstingEnabled()) {
    query["BurstingEnabled"] = request.getBurstingEnabled();
  }

  if (!!request.hasDeleteWithInstance()) {
    query["DeleteWithInstance"] = request.getDeleteWithInstance();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDiskId()) {
    query["DiskId"] = request.getDiskId();
  }

  if (!!request.hasDiskName()) {
    query["DiskName"] = request.getDiskName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyRCDiskAttribute"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyRCDiskAttributeResponse>();
}

/**
 * @summary Modify the name, description, whether to release with the instance, whether to delete automatic snapshots when the disk is deleted, whether to enable the automatic snapshot policy, and whether to enable the performance burst feature for an Elastic Block Storage device.
 *
 * @description You can invoke the DiskId parameter to modify properties of an Elastic Block Storage device, such as its name, description, and whether it is released with the instance.
 *
 * @param request ModifyRCDiskAttributeRequest
 * @return ModifyRCDiskAttributeResponse
 */
ModifyRCDiskAttributeResponse Client::modifyRCDiskAttribute(const ModifyRCDiskAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyRCDiskAttributeWithOptions(request, runtime);
}

/**
 * @summary 修改RDS用户磁盘付费类型
 *
 * @param request ModifyRCDiskChargeTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyRCDiskChargeTypeResponse
 */
ModifyRCDiskChargeTypeResponse Client::modifyRCDiskChargeTypeWithOptions(const ModifyRCDiskChargeTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasAutoUseCoupon()) {
    query["AutoUseCoupon"] = request.getAutoUseCoupon();
  }

  if (!!request.hasBusinessInfo()) {
    query["BusinessInfo"] = request.getBusinessInfo();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPayType()) {
    query["PayType"] = request.getPayType();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasPromotionCode()) {
    query["PromotionCode"] = request.getPromotionCode();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUsedTime()) {
    query["UsedTime"] = request.getUsedTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyRCDiskChargeType"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyRCDiskChargeTypeResponse>();
}

/**
 * @summary 修改RDS用户磁盘付费类型
 *
 * @param request ModifyRCDiskChargeTypeRequest
 * @return ModifyRCDiskChargeTypeResponse
 */
ModifyRCDiskChargeTypeResponse Client::modifyRCDiskChargeType(const ModifyRCDiskChargeTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyRCDiskChargeTypeWithOptions(request, runtime);
}

/**
 * @summary 变更云盘类型或性能级别
 *
 * @param request ModifyRCDiskSpecRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyRCDiskSpecResponse
 */
ModifyRCDiskSpecResponse Client::modifyRCDiskSpecWithOptions(const ModifyRCDiskSpecRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasDiskCategory()) {
    query["DiskCategory"] = request.getDiskCategory();
  }

  if (!!request.hasDiskId()) {
    query["DiskId"] = request.getDiskId();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasPerformanceLevel()) {
    query["PerformanceLevel"] = request.getPerformanceLevel();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyRCDiskSpec"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyRCDiskSpecResponse>();
}

/**
 * @summary 变更云盘类型或性能级别
 *
 * @param request ModifyRCDiskSpecRequest
 * @return ModifyRCDiskSpecResponse
 */
ModifyRCDiskSpecResponse Client::modifyRCDiskSpec(const ModifyRCDiskSpecRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyRCDiskSpecWithOptions(request, runtime);
}

/**
 * @summary 查询RDS用户专属主机实例
 *
 * @param request ModifyRCElasticScalingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyRCElasticScalingResponse
 */
ModifyRCElasticScalingResponse Client::modifyRCElasticScalingWithOptions(const ModifyRCElasticScalingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.getInstanceType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasScalingEnabled()) {
    query["ScalingEnabled"] = request.getScalingEnabled();
  }

  if (!!request.hasScheduledRule()) {
    query["ScheduledRule"] = request.getScheduledRule();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyRCElasticScaling"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyRCElasticScalingResponse>();
}

/**
 * @summary 查询RDS用户专属主机实例
 *
 * @param request ModifyRCElasticScalingRequest
 * @return ModifyRCElasticScalingResponse
 */
ModifyRCElasticScalingResponse Client::modifyRCElasticScaling(const ModifyRCElasticScalingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyRCElasticScalingWithOptions(request, runtime);
}

/**
 * @summary ModifyRCInstance
 *
 * @description Before using this API, ensure that you fully understand the metering method, Pricing, and refund rules for decreasing the quota of RDS Custom instances.
 * When invoking this API, note the following:
 * - You cannot modify the instance type of an expired instance. You can renew the instance and try again.
 * - Only **Standard Edition disk instances** support changing the instance type.
 * - When upgrading or decreasing the quota of the instance type, note the following:
 *   - The instance must be in the **running** (Running) or **stopped** (Stopped) status.
 *   - The price difference between the original and new instance types will be refunded to your original payment method. Coupons already used will not be returned.
 *
 * @param request ModifyRCInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyRCInstanceResponse
 */
ModifyRCInstanceResponse Client::modifyRCInstanceWithOptions(const ModifyRCInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasAutoUseCoupon()) {
    query["AutoUseCoupon"] = request.getAutoUseCoupon();
  }

  if (!!request.hasDirection()) {
    query["Direction"] = request.getDirection();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.getInstanceType();
  }

  if (!!request.hasPromotionCode()) {
    query["PromotionCode"] = request.getPromotionCode();
  }

  if (!!request.hasRebootTime()) {
    query["RebootTime"] = request.getRebootTime();
  }

  if (!!request.hasRebootWhenFinished()) {
    query["RebootWhenFinished"] = request.getRebootWhenFinished();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyRCInstance"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyRCInstanceResponse>();
}

/**
 * @summary ModifyRCInstance
 *
 * @description Before using this API, ensure that you fully understand the metering method, Pricing, and refund rules for decreasing the quota of RDS Custom instances.
 * When invoking this API, note the following:
 * - You cannot modify the instance type of an expired instance. You can renew the instance and try again.
 * - Only **Standard Edition disk instances** support changing the instance type.
 * - When upgrading or decreasing the quota of the instance type, note the following:
 *   - The instance must be in the **running** (Running) or **stopped** (Stopped) status.
 *   - The price difference between the original and new instance types will be refunded to your original payment method. Coupons already used will not be returned.
 *
 * @param request ModifyRCInstanceRequest
 * @return ModifyRCInstanceResponse
 */
ModifyRCInstanceResponse Client::modifyRCInstance(const ModifyRCInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyRCInstanceWithOptions(request, runtime);
}

/**
 * @summary 修改rds custom实例的部分属性
 *
 * @param tmpReq ModifyRCInstanceAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyRCInstanceAttributeResponse
 */
ModifyRCInstanceAttributeResponse Client::modifyRCInstanceAttributeWithOptions(const ModifyRCInstanceAttributeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyRCInstanceAttributeShrinkRequest request = ModifyRCInstanceAttributeShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInstanceIds()) {
    request.setInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInstanceIds(), "InstanceIds", "json"));
  }

  if (!!tmpReq.hasSecurityGroupIds()) {
    request.setSecurityGroupIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSecurityGroupIds(), "SecurityGroupIds", "json"));
  }

  json query = {};
  if (!!request.hasDeletionProtection()) {
    query["DeletionProtection"] = request.getDeletionProtection();
  }

  if (!!request.hasEnableJumboFrame()) {
    query["EnableJumboFrame"] = request.getEnableJumboFrame();
  }

  if (!!request.hasHostName()) {
    query["HostName"] = request.getHostName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceIdsShrink()) {
    query["InstanceIds"] = request.getInstanceIdsShrink();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasReboot()) {
    query["Reboot"] = request.getReboot();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSecurityGroupId()) {
    query["SecurityGroupId"] = request.getSecurityGroupId();
  }

  if (!!request.hasSecurityGroupIdsShrink()) {
    query["SecurityGroupIds"] = request.getSecurityGroupIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyRCInstanceAttribute"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyRCInstanceAttributeResponse>();
}

/**
 * @summary 修改rds custom实例的部分属性
 *
 * @param request ModifyRCInstanceAttributeRequest
 * @return ModifyRCInstanceAttributeResponse
 */
ModifyRCInstanceAttributeResponse Client::modifyRCInstanceAttribute(const ModifyRCInstanceAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyRCInstanceAttributeWithOptions(request, runtime);
}

/**
 * @summary 修改RDS用户专属主机实例付费类型
 *
 * @param request ModifyRCInstanceChargeTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyRCInstanceChargeTypeResponse
 */
ModifyRCInstanceChargeTypeResponse Client::modifyRCInstanceChargeTypeWithOptions(const ModifyRCInstanceChargeTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasAutoUseCoupon()) {
    query["AutoUseCoupon"] = request.getAutoUseCoupon();
  }

  if (!!request.hasBusinessInfo()) {
    query["BusinessInfo"] = request.getBusinessInfo();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasIncludeDataDisks()) {
    query["IncludeDataDisks"] = request.getIncludeDataDisks();
  }

  if (!!request.hasInstanceChargeType()) {
    query["InstanceChargeType"] = request.getInstanceChargeType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasPayType()) {
    query["PayType"] = request.getPayType();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasPromotionCode()) {
    query["PromotionCode"] = request.getPromotionCode();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUsedTime()) {
    query["UsedTime"] = request.getUsedTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyRCInstanceChargeType"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyRCInstanceChargeTypeResponse>();
}

/**
 * @summary 修改RDS用户专属主机实例付费类型
 *
 * @param request ModifyRCInstanceChargeTypeRequest
 * @return ModifyRCInstanceChargeTypeResponse
 */
ModifyRCInstanceChargeTypeResponse Client::modifyRCInstanceChargeType(const ModifyRCInstanceChargeTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyRCInstanceChargeTypeWithOptions(request, runtime);
}

/**
 * @summary 修改RC实例描述
 *
 * @param request ModifyRCInstanceDescriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyRCInstanceDescriptionResponse
 */
ModifyRCInstanceDescriptionResponse Client::modifyRCInstanceDescriptionWithOptions(const ModifyRCInstanceDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceDescription()) {
    query["InstanceDescription"] = request.getInstanceDescription();
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
    {"action" , "ModifyRCInstanceDescription"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyRCInstanceDescriptionResponse>();
}

/**
 * @summary 修改RC实例描述
 *
 * @param request ModifyRCInstanceDescriptionRequest
 * @return ModifyRCInstanceDescriptionResponse
 */
ModifyRCInstanceDescriptionResponse Client::modifyRCInstanceDescription(const ModifyRCInstanceDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyRCInstanceDescriptionWithOptions(request, runtime);
}

/**
 * @summary 修改RDS Custom实例密钥对
 *
 * @param request ModifyRCInstanceKeyPairRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyRCInstanceKeyPairResponse
 */
ModifyRCInstanceKeyPairResponse Client::modifyRCInstanceKeyPairWithOptions(const ModifyRCInstanceKeyPairRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasKeyPairName()) {
    query["KeyPairName"] = request.getKeyPairName();
  }

  if (!!request.hasReboot()) {
    query["Reboot"] = request.getReboot();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyRCInstanceKeyPair"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyRCInstanceKeyPairResponse>();
}

/**
 * @summary 修改RDS Custom实例密钥对
 *
 * @param request ModifyRCInstanceKeyPairRequest
 * @return ModifyRCInstanceKeyPairResponse
 */
ModifyRCInstanceKeyPairResponse Client::modifyRCInstanceKeyPair(const ModifyRCInstanceKeyPairRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyRCInstanceKeyPairWithOptions(request, runtime);
}

/**
 * @summary 修改RDS Custom实例的公网配置
 *
 * @param request ModifyRCInstanceNetworkSpecRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyRCInstanceNetworkSpecResponse
 */
ModifyRCInstanceNetworkSpecResponse Client::modifyRCInstanceNetworkSpecWithOptions(const ModifyRCInstanceNetworkSpecRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInternetMaxBandwidthOut()) {
    query["InternetMaxBandwidthOut"] = request.getInternetMaxBandwidthOut();
  }

  if (!!request.hasNetworkChargeType()) {
    query["NetworkChargeType"] = request.getNetworkChargeType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyRCInstanceNetworkSpec"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyRCInstanceNetworkSpecResponse>();
}

/**
 * @summary 修改RDS Custom实例的公网配置
 *
 * @param request ModifyRCInstanceNetworkSpecRequest
 * @return ModifyRCInstanceNetworkSpecResponse
 */
ModifyRCInstanceNetworkSpecResponse Client::modifyRCInstanceNetworkSpec(const ModifyRCInstanceNetworkSpecRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyRCInstanceNetworkSpecWithOptions(request, runtime);
}

/**
 * @summary 修改RC实例安全组
 *
 * @param request ModifyRCInstanceVpcAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyRCInstanceVpcAttributeResponse
 */
ModifyRCInstanceVpcAttributeResponse Client::modifyRCInstanceVpcAttributeWithOptions(const ModifyRCInstanceVpcAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyRCInstanceVpcAttribute"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyRCInstanceVpcAttributeResponse>();
}

/**
 * @summary 修改RC实例安全组
 *
 * @param request ModifyRCInstanceVpcAttributeRequest
 * @return ModifyRCInstanceVpcAttributeResponse
 */
ModifyRCInstanceVpcAttributeResponse Client::modifyRCInstanceVpcAttribute(const ModifyRCInstanceVpcAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyRCInstanceVpcAttributeWithOptions(request, runtime);
}

/**
 * @summary 修改RC安全组规则
 *
 * @param request ModifyRCSecurityGroupPermissionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyRCSecurityGroupPermissionResponse
 */
ModifyRCSecurityGroupPermissionResponse Client::modifyRCSecurityGroupPermissionWithOptions(const ModifyRCSecurityGroupPermissionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDestCidrIp()) {
    query["DestCidrIp"] = request.getDestCidrIp();
  }

  if (!!request.hasDirection()) {
    query["Direction"] = request.getDirection();
  }

  if (!!request.hasIpProtocol()) {
    query["IpProtocol"] = request.getIpProtocol();
  }

  if (!!request.hasPolicy()) {
    query["Policy"] = request.getPolicy();
  }

  if (!!request.hasPortRange()) {
    query["PortRange"] = request.getPortRange();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.getPriority();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSecurityGroupId()) {
    query["SecurityGroupId"] = request.getSecurityGroupId();
  }

  if (!!request.hasSecurityGroupRuleId()) {
    query["SecurityGroupRuleId"] = request.getSecurityGroupRuleId();
  }

  if (!!request.hasSourceCidrIp()) {
    query["SourceCidrIp"] = request.getSourceCidrIp();
  }

  if (!!request.hasSourcePortRange()) {
    query["SourcePortRange"] = request.getSourcePortRange();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyRCSecurityGroupPermission"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyRCSecurityGroupPermissionResponse>();
}

/**
 * @summary 修改RC安全组规则
 *
 * @param request ModifyRCSecurityGroupPermissionRequest
 * @return ModifyRCSecurityGroupPermissionResponse
 */
ModifyRCSecurityGroupPermissionResponse Client::modifyRCSecurityGroupPermission(const ModifyRCSecurityGroupPermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyRCSecurityGroupPermissionWithOptions(request, runtime);
}

/**
 * @summary 修改RCVCluster
 *
 * @param tmpReq ModifyRCVClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyRCVClusterResponse
 */
ModifyRCVClusterResponse Client::modifyRCVClusterWithOptions(const ModifyRCVClusterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyRCVClusterShrinkRequest request = ModifyRCVClusterShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSupportDiskPerformanceLevel()) {
    request.setSupportDiskPerformanceLevelShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSupportDiskPerformanceLevel(), "SupportDiskPerformanceLevel", "json"));
  }

  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSupportDiskPerformanceLevelShrink()) {
    query["SupportDiskPerformanceLevel"] = request.getSupportDiskPerformanceLevelShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyRCVCluster"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyRCVClusterResponse>();
}

/**
 * @summary 修改RCVCluster
 *
 * @param request ModifyRCVClusterRequest
 * @return ModifyRCVClusterResponse
 */
ModifyRCVClusterResponse Client::modifyRCVCluster(const ModifyRCVClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyRCVClusterWithOptions(request, runtime);
}

/**
 * @summary 修改读写分离地址
 *
 * @param request ModifyReadWriteSplittingConnectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyReadWriteSplittingConnectionResponse
 */
ModifyReadWriteSplittingConnectionResponse Client::modifyReadWriteSplittingConnectionWithOptions(const ModifyReadWriteSplittingConnectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectionStringPrefix()) {
    query["ConnectionStringPrefix"] = request.getConnectionStringPrefix();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDistributionType()) {
    query["DistributionType"] = request.getDistributionType();
  }

  if (!!request.hasMaxDelayTime()) {
    query["MaxDelayTime"] = request.getMaxDelayTime();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasWeight()) {
    query["Weight"] = request.getWeight();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyReadWriteSplittingConnection"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyReadWriteSplittingConnectionResponse>();
}

/**
 * @summary 修改读写分离地址
 *
 * @param request ModifyReadWriteSplittingConnectionRequest
 * @return ModifyReadWriteSplittingConnectionResponse
 */
ModifyReadWriteSplittingConnectionResponse Client::modifyReadWriteSplittingConnection(const ModifyReadWriteSplittingConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyReadWriteSplittingConnectionWithOptions(request, runtime);
}

/**
 * @summary 设置只读实例延迟复制时间
 *
 * @param request ModifyReadonlyInstanceDelayReplicationTimeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyReadonlyInstanceDelayReplicationTimeResponse
 */
ModifyReadonlyInstanceDelayReplicationTimeResponse Client::modifyReadonlyInstanceDelayReplicationTimeWithOptions(const ModifyReadonlyInstanceDelayReplicationTimeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasReadSQLReplicationTime()) {
    query["ReadSQLReplicationTime"] = request.getReadSQLReplicationTime();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyReadonlyInstanceDelayReplicationTime"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyReadonlyInstanceDelayReplicationTimeResponse>();
}

/**
 * @summary 设置只读实例延迟复制时间
 *
 * @param request ModifyReadonlyInstanceDelayReplicationTimeRequest
 * @return ModifyReadonlyInstanceDelayReplicationTimeResponse
 */
ModifyReadonlyInstanceDelayReplicationTimeResponse Client::modifyReadonlyInstanceDelayReplicationTime(const ModifyReadonlyInstanceDelayReplicationTimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyReadonlyInstanceDelayReplicationTimeWithOptions(request, runtime);
}

/**
 * @summary 将RDS实例移动到指定资源组
 *
 * @param request ModifyResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyResourceGroupResponse
 */
ModifyResourceGroupResponse Client::modifyResourceGroupWithOptions(const ModifyResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyResourceGroup"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyResourceGroupResponse>();
}

/**
 * @summary 将RDS实例移动到指定资源组
 *
 * @param request ModifyResourceGroupRequest
 * @return ModifyResourceGroupResponse
 */
ModifyResourceGroupResponse Client::modifyResourceGroup(const ModifyResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyResourceGroupWithOptions(request, runtime);
}

/**
 * @summary 修改SQL收集策略
 *
 * @param request ModifySQLCollectorPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySQLCollectorPolicyResponse
 */
ModifySQLCollectorPolicyResponse Client::modifySQLCollectorPolicyWithOptions(const ModifySQLCollectorPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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

  if (!!request.hasSQLCollectorStatus()) {
    query["SQLCollectorStatus"] = request.getSQLCollectorStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySQLCollectorPolicy"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySQLCollectorPolicyResponse>();
}

/**
 * @summary 修改SQL收集策略
 *
 * @param request ModifySQLCollectorPolicyRequest
 * @return ModifySQLCollectorPolicyResponse
 */
ModifySQLCollectorPolicyResponse Client::modifySQLCollectorPolicy(const ModifySQLCollectorPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySQLCollectorPolicyWithOptions(request, runtime);
}

/**
 * @summary 修改RDS实例的SQL洞察日志保存时长
 *
 * @param request ModifySQLCollectorRetentionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySQLCollectorRetentionResponse
 */
ModifySQLCollectorRetentionResponse Client::modifySQLCollectorRetentionWithOptions(const ModifySQLCollectorRetentionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigValue()) {
    query["ConfigValue"] = request.getConfigValue();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySQLCollectorRetention"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySQLCollectorRetentionResponse>();
}

/**
 * @summary 修改RDS实例的SQL洞察日志保存时长
 *
 * @param request ModifySQLCollectorRetentionRequest
 * @return ModifySQLCollectorRetentionResponse
 */
ModifySQLCollectorRetentionResponse Client::modifySQLCollectorRetention(const ModifySQLCollectorRetentionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySQLCollectorRetentionWithOptions(request, runtime);
}

/**
 * @summary 修改RDS实例的安全组配置
 *
 * @param request ModifySecurityGroupConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySecurityGroupConfigurationResponse
 */
ModifySecurityGroupConfigurationResponse Client::modifySecurityGroupConfigurationWithOptions(const ModifySecurityGroupConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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

  if (!!request.hasSecurityGroupId()) {
    query["SecurityGroupId"] = request.getSecurityGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySecurityGroupConfiguration"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySecurityGroupConfigurationResponse>();
}

/**
 * @summary 修改RDS实例的安全组配置
 *
 * @param request ModifySecurityGroupConfigurationRequest
 * @return ModifySecurityGroupConfigurationResponse
 */
ModifySecurityGroupConfigurationResponse Client::modifySecurityGroupConfiguration(const ModifySecurityGroupConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySecurityGroupConfigurationWithOptions(request, runtime);
}

/**
 * @summary 修改RDS的白名单列表
 *
 * @param request ModifySecurityIpsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySecurityIpsResponse
 */
ModifySecurityIpsResponse Client::modifySecurityIpsWithOptions(const ModifySecurityIpsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceIPArrayAttribute()) {
    query["DBInstanceIPArrayAttribute"] = request.getDBInstanceIPArrayAttribute();
  }

  if (!!request.hasDBInstanceIPArrayName()) {
    query["DBInstanceIPArrayName"] = request.getDBInstanceIPArrayName();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasFreshWhiteListReadins()) {
    query["FreshWhiteListReadins"] = request.getFreshWhiteListReadins();
  }

  if (!!request.hasModifyMode()) {
    query["ModifyMode"] = request.getModifyMode();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecurityIPType()) {
    query["SecurityIPType"] = request.getSecurityIPType();
  }

  if (!!request.hasSecurityIps()) {
    query["SecurityIps"] = request.getSecurityIps();
  }

  if (!!request.hasWhitelistNetworkType()) {
    query["WhitelistNetworkType"] = request.getWhitelistNetworkType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySecurityIps"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySecurityIpsResponse>();
}

/**
 * @summary 修改RDS的白名单列表
 *
 * @param request ModifySecurityIpsRequest
 * @return ModifySecurityIpsResponse
 */
ModifySecurityIpsResponse Client::modifySecurityIps(const ModifySecurityIpsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySecurityIpsWithOptions(request, runtime);
}

/**
 * @summary 任务中心修改任务信息
 *
 * @param request ModifyTaskInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyTaskInfoResponse
 */
ModifyTaskInfoResponse Client::modifyTaskInfoWithOptions(const ModifyTaskInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActionParams()) {
    query["ActionParams"] = request.getActionParams();
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

  if (!!request.hasStepName()) {
    query["StepName"] = request.getStepName();
  }

  if (!!request.hasTaskAction()) {
    query["TaskAction"] = request.getTaskAction();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyTaskInfo"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyTaskInfoResponse>();
}

/**
 * @summary 任务中心修改任务信息
 *
 * @param request ModifyTaskInfoRequest
 * @return ModifyTaskInfoResponse
 */
ModifyTaskInfoResponse Client::modifyTaskInfo(const ModifyTaskInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyTaskInfoWithOptions(request, runtime);
}

/**
 * @summary 修改白名单模板
 *
 * @param request ModifyWhitelistTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyWhitelistTemplateResponse
 */
ModifyWhitelistTemplateResponse Client::modifyWhitelistTemplateWithOptions(const ModifyWhitelistTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIpWhitelist()) {
    query["IpWhitelist"] = request.getIpWhitelist();
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

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.getTemplateName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyWhitelistTemplate"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyWhitelistTemplateResponse>();
}

/**
 * @summary 修改白名单模板
 *
 * @param request ModifyWhitelistTemplateRequest
 * @return ModifyWhitelistTemplateResponse
 */
ModifyWhitelistTemplateResponse Client::modifyWhitelistTemplate(const ModifyWhitelistTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyWhitelistTemplateWithOptions(request, runtime);
}

/**
 * @summary Precheck for deleting a node and creating an order
 *
 * @param tmpReq PreCheckCreateOrderForDeleteDBNodesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PreCheckCreateOrderForDeleteDBNodesResponse
 */
PreCheckCreateOrderForDeleteDBNodesResponse Client::preCheckCreateOrderForDeleteDBNodesWithOptions(const PreCheckCreateOrderForDeleteDBNodesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  PreCheckCreateOrderForDeleteDBNodesShrinkRequest request = PreCheckCreateOrderForDeleteDBNodesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDBNodeId()) {
    request.setDBNodeIdShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDBNodeId(), "DBNodeId", "json"));
  }

  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasBusinessInfo()) {
    query["BusinessInfo"] = request.getBusinessInfo();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCommodityCode()) {
    query["CommodityCode"] = request.getCommodityCode();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBNodeIdShrink()) {
    query["DBNodeId"] = request.getDBNodeIdShrink();
  }

  if (!!request.hasEngineVersion()) {
    query["EngineVersion"] = request.getEngineVersion();
  }

  if (!!request.hasNodeType()) {
    query["NodeType"] = request.getNodeType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPromotionCode()) {
    query["PromotionCode"] = request.getPromotionCode();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.getResource();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PreCheckCreateOrderForDeleteDBNodes"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PreCheckCreateOrderForDeleteDBNodesResponse>();
}

/**
 * @summary Precheck for deleting a node and creating an order
 *
 * @param request PreCheckCreateOrderForDeleteDBNodesRequest
 * @return PreCheckCreateOrderForDeleteDBNodesResponse
 */
PreCheckCreateOrderForDeleteDBNodesResponse Client::preCheckCreateOrderForDeleteDBNodes(const PreCheckCreateOrderForDeleteDBNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return preCheckCreateOrderForDeleteDBNodesWithOptions(request, runtime);
}

/**
 * @summary Checks whether DuckDB-based analytical instances can be created for the specified RDS for PostgreSQL primary instance. If DuckDB-based analytical instances cannot be created, this operation returns the failure causes and provides solutions or recommended specification values.
 *
 * @description ### 适用引擎
 * RDS PostgreSQL
 * ### 相关功能文档
 * [DuckDB分析实例](https://help.aliyun.com/document_detail/2977241.html)
 *
 * @param request PrecheckDuckDBDependencyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PrecheckDuckDBDependencyResponse
 */
PrecheckDuckDBDependencyResponse Client::precheckDuckDBDependencyWithOptions(const PrecheckDuckDBDependencyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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

  if (!!request.hasTargetMode()) {
    query["TargetMode"] = request.getTargetMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PrecheckDuckDBDependency"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PrecheckDuckDBDependencyResponse>();
}

/**
 * @summary Checks whether DuckDB-based analytical instances can be created for the specified RDS for PostgreSQL primary instance. If DuckDB-based analytical instances cannot be created, this operation returns the failure causes and provides solutions or recommended specification values.
 *
 * @description ### 适用引擎
 * RDS PostgreSQL
 * ### 相关功能文档
 * [DuckDB分析实例](https://help.aliyun.com/document_detail/2977241.html)
 *
 * @param request PrecheckDuckDBDependencyRequest
 * @return PrecheckDuckDBDependencyResponse
 */
PrecheckDuckDBDependencyResponse Client::precheckDuckDBDependency(const PrecheckDuckDBDependencyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return precheckDuckDBDependencyWithOptions(request, runtime);
}

/**
 * @summary 清理RDS实例本地日志
 *
 * @param request PurgeDBInstanceLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PurgeDBInstanceLogResponse
 */
PurgeDBInstanceLogResponse Client::purgeDBInstanceLogWithOptions(const PurgeDBInstanceLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PurgeDBInstanceLog"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PurgeDBInstanceLogResponse>();
}

/**
 * @summary 清理RDS实例本地日志
 *
 * @param request PurgeDBInstanceLogRequest
 * @return PurgeDBInstanceLogResponse
 */
PurgeDBInstanceLogResponse Client::purgeDBInstanceLog(const PurgeDBInstanceLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return purgeDBInstanceLogWithOptions(request, runtime);
}

/**
 * @summary RDS通知消息查询
 *
 * @param request QueryNotifyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryNotifyResponse
 */
QueryNotifyResponse Client::queryNotifyWithOptions(const QueryNotifyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFrom()) {
    body["From"] = request.getFrom();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTo()) {
    body["To"] = request.getTo();
  }

  if (!!request.hasWithConfirmed()) {
    body["WithConfirmed"] = request.getWithConfirmed();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "QueryNotify"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryNotifyResponse>();
}

/**
 * @summary RDS通知消息查询
 *
 * @param request QueryNotifyRequest
 * @return QueryNotifyResponse
 */
QueryNotifyResponse Client::queryNotify(const QueryNotifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryNotifyWithOptions(request, runtime);
}

/**
 * @summary This API is used to query RDS bot hot spot questions.
 *
 * @param request QueryRecommendByCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryRecommendByCodeResponse
 */
QueryRecommendByCodeResponse Client::queryRecommendByCodeWithOptions(const QueryRecommendByCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCode()) {
    query["Code"] = request.getCode();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryRecommendByCode"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryRecommendByCodeResponse>();
}

/**
 * @summary This API is used to query RDS bot hot spot questions.
 *
 * @param request QueryRecommendByCodeRequest
 * @return QueryRecommendByCodeResponse
 */
QueryRecommendByCodeResponse Client::queryRecommendByCode(const QueryRecommendByCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryRecommendByCodeWithOptions(request, runtime);
}

/**
 * @summary 创建服务关联角色和开租
 *
 * @param request RdsCustomInitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RdsCustomInitResponse
 */
RdsCustomInitResponse Client::rdsCustomInitWithOptions(const RdsCustomInitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasServiceLinkedRole()) {
    query["ServiceLinkedRole"] = request.getServiceLinkedRole();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RdsCustomInit"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RdsCustomInitResponse>();
}

/**
 * @summary 创建服务关联角色和开租
 *
 * @param request RdsCustomInitRequest
 * @return RdsCustomInitResponse
 */
RdsCustomInitResponse Client::rdsCustomInit(const RdsCustomInitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rdsCustomInitWithOptions(request, runtime);
}

/**
 * @summary 重启RDS用户专属主机实例
 *
 * @param request RebootRCInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RebootRCInstanceResponse
 */
RebootRCInstanceResponse Client::rebootRCInstanceWithOptions(const RebootRCInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasForceStop()) {
    query["ForceStop"] = request.getForceStop();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRebootTime()) {
    query["RebootTime"] = request.getRebootTime();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RebootRCInstance"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RebootRCInstanceResponse>();
}

/**
 * @summary 重启RDS用户专属主机实例
 *
 * @param request RebootRCInstanceRequest
 * @return RebootRCInstanceResponse
 */
RebootRCInstanceResponse Client::rebootRCInstance(const RebootRCInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rebootRCInstanceWithOptions(request, runtime);
}

/**
 * @summary 批量重启RC实例
 *
 * @param tmpReq RebootRCInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RebootRCInstancesResponse
 */
RebootRCInstancesResponse Client::rebootRCInstancesWithOptions(const RebootRCInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RebootRCInstancesShrinkRequest request = RebootRCInstancesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInstanceIds()) {
    request.setInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInstanceIds(), "InstanceIds", "json"));
  }

  json query = {};
  if (!!request.hasBatchOptimization()) {
    query["BatchOptimization"] = request.getBatchOptimization();
  }

  if (!!request.hasForceReboot()) {
    query["ForceReboot"] = request.getForceReboot();
  }

  if (!!request.hasInstanceIdsShrink()) {
    query["InstanceIds"] = request.getInstanceIdsShrink();
  }

  if (!!request.hasRebootTime()) {
    query["RebootTime"] = request.getRebootTime();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RebootRCInstances"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RebootRCInstancesResponse>();
}

/**
 * @summary 批量重启RC实例
 *
 * @param request RebootRCInstancesRequest
 * @return RebootRCInstancesResponse
 */
RebootRCInstancesResponse Client::rebootRCInstances(const RebootRCInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rebootRCInstancesWithOptions(request, runtime);
}

/**
 * @summary 重搭备库实例
 *
 * @param request RebuildDBInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RebuildDBInstanceResponse
 */
RebuildDBInstanceResponse Client::rebuildDBInstanceWithOptions(const RebuildDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDedicatedHostGroupId()) {
    query["DedicatedHostGroupId"] = request.getDedicatedHostGroupId();
  }

  if (!!request.hasDedicatedHostId()) {
    query["DedicatedHostId"] = request.getDedicatedHostId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRebuildNodeType()) {
    query["RebuildNodeType"] = request.getRebuildNodeType();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RebuildDBInstance"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RebuildDBInstanceResponse>();
}

/**
 * @summary 重搭备库实例
 *
 * @param request RebuildDBInstanceRequest
 * @return RebuildDBInstanceResponse
 */
RebuildDBInstanceResponse Client::rebuildDBInstance(const RebuildDBInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rebuildDBInstanceWithOptions(request, runtime);
}

/**
 * @summary 重建复制链路
 *
 * @param request RebuildReplicationLinkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RebuildReplicationLinkResponse
 */
RebuildReplicationLinkResponse Client::rebuildReplicationLinkWithOptions(const RebuildReplicationLinkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RebuildReplicationLink"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RebuildReplicationLinkResponse>();
}

/**
 * @summary 重建复制链路
 *
 * @param request RebuildReplicationLinkRequest
 * @return RebuildReplicationLinkResponse
 */
RebuildReplicationLinkResponse Client::rebuildReplicationLink(const RebuildReplicationLinkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rebuildReplicationLinkWithOptions(request, runtime);
}

/**
 * @summary 接收实例
 *
 * @param request ReceiveDBInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReceiveDBInstanceResponse
 */
ReceiveDBInstanceResponse Client::receiveDBInstanceWithOptions(const ReceiveDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasGuardDBInstanceId()) {
    query["GuardDBInstanceId"] = request.getGuardDBInstanceId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReceiveDBInstance"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReceiveDBInstanceResponse>();
}

/**
 * @summary 接收实例
 *
 * @param request ReceiveDBInstanceRequest
 * @return ReceiveDBInstanceResponse
 */
ReceiveDBInstanceResponse Client::receiveDBInstance(const ReceiveDBInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return receiveDBInstanceWithOptions(request, runtime);
}

/**
 * @summary 恢复数据库实例
 *
 * @param request RecoveryDBInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RecoveryDBInstanceResponse
 */
RecoveryDBInstanceResponse Client::recoveryDBInstanceWithOptions(const RecoveryDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupId()) {
    query["BackupId"] = request.getBackupId();
  }

  if (!!request.hasDBInstanceClass()) {
    query["DBInstanceClass"] = request.getDBInstanceClass();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBInstanceStorage()) {
    query["DBInstanceStorage"] = request.getDBInstanceStorage();
  }

  if (!!request.hasDBInstanceStorageType()) {
    query["DBInstanceStorageType"] = request.getDBInstanceStorageType();
  }

  if (!!request.hasDbNames()) {
    query["DbNames"] = request.getDbNames();
  }

  if (!!request.hasInstanceNetworkType()) {
    query["InstanceNetworkType"] = request.getInstanceNetworkType();
  }

  if (!!request.hasPayType()) {
    query["PayType"] = request.getPayType();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasPrivateIpAddress()) {
    query["PrivateIpAddress"] = request.getPrivateIpAddress();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRestoreTime()) {
    query["RestoreTime"] = request.getRestoreTime();
  }

  if (!!request.hasTargetDBInstanceId()) {
    query["TargetDBInstanceId"] = request.getTargetDBInstanceId();
  }

  if (!!request.hasUsedTime()) {
    query["UsedTime"] = request.getUsedTime();
  }

  if (!!request.hasVPCId()) {
    query["VPCId"] = request.getVPCId();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RecoveryDBInstance"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RecoveryDBInstanceResponse>();
}

/**
 * @summary 恢复数据库实例
 *
 * @param request RecoveryDBInstanceRequest
 * @return RecoveryDBInstanceResponse
 */
RecoveryDBInstanceResponse Client::recoveryDBInstance(const RecoveryDBInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return recoveryDBInstanceWithOptions(request, runtime);
}

/**
 * @summary 重新部署实例
 *
 * @param request RedeployRCInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RedeployRCInstanceResponse
 */
RedeployRCInstanceResponse Client::redeployRCInstanceWithOptions(const RedeployRCInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasForceStop()) {
    query["ForceStop"] = request.getForceStop();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RedeployRCInstance"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RedeployRCInstanceResponse>();
}

/**
 * @summary 重新部署实例
 *
 * @param request RedeployRCInstanceRequest
 * @return RedeployRCInstanceResponse
 */
RedeployRCInstanceResponse Client::redeployRCInstance(const RedeployRCInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return redeployRCInstanceWithOptions(request, runtime);
}

/**
 * @summary 释放实例的链接地址
 *
 * @param request ReleaseInstanceConnectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleaseInstanceConnectionResponse
 */
ReleaseInstanceConnectionResponse Client::releaseInstanceConnectionWithOptions(const ReleaseInstanceConnectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentConnectionString()) {
    query["CurrentConnectionString"] = request.getCurrentConnectionString();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasInstanceNetworkType()) {
    query["InstanceNetworkType"] = request.getInstanceNetworkType();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReleaseInstanceConnection"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReleaseInstanceConnectionResponse>();
}

/**
 * @summary 释放实例的链接地址
 *
 * @param request ReleaseInstanceConnectionRequest
 * @return ReleaseInstanceConnectionResponse
 */
ReleaseInstanceConnectionResponse Client::releaseInstanceConnection(const ReleaseInstanceConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return releaseInstanceConnectionWithOptions(request, runtime);
}

/**
 * @summary 释放RDS实例的公网链接地址
 *
 * @param request ReleaseInstancePublicConnectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleaseInstancePublicConnectionResponse
 */
ReleaseInstancePublicConnectionResponse Client::releaseInstancePublicConnectionWithOptions(const ReleaseInstancePublicConnectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentConnectionString()) {
    query["CurrentConnectionString"] = request.getCurrentConnectionString();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReleaseInstancePublicConnection"},
    {"version" , "2014-08-15"},
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
 * @summary 释放RDS实例的公网链接地址
 *
 * @param request ReleaseInstancePublicConnectionRequest
 * @return ReleaseInstancePublicConnectionResponse
 */
ReleaseInstancePublicConnectionResponse Client::releaseInstancePublicConnection(const ReleaseInstancePublicConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return releaseInstancePublicConnectionWithOptions(request, runtime);
}

/**
 * @summary Releases the read/write splitting endpoint of an instance.
 *
 * @description ### 适用引擎
 * - RDS MySQL
 * - RDS SQL Server
 * ### 前体条件
 * 调用该接口时，实例必须满足以下条件，否则将操作失败：
 * * MySQL实例使用的是共享代理。
 * * 实例已开通读写分离。
 * * 实例为如下版本：
 *     * MySQL 5.7高可用版（本地SSD盘）
 *     * MySQL 5.6
 *     * SQL Server集群版
 *
 * @param request ReleaseReadWriteSplittingConnectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleaseReadWriteSplittingConnectionResponse
 */
ReleaseReadWriteSplittingConnectionResponse Client::releaseReadWriteSplittingConnectionWithOptions(const ReleaseReadWriteSplittingConnectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRWAddressType()) {
    query["RWAddressType"] = request.getRWAddressType();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReleaseReadWriteSplittingConnection"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReleaseReadWriteSplittingConnectionResponse>();
}

/**
 * @summary Releases the read/write splitting endpoint of an instance.
 *
 * @description ### 适用引擎
 * - RDS MySQL
 * - RDS SQL Server
 * ### 前体条件
 * 调用该接口时，实例必须满足以下条件，否则将操作失败：
 * * MySQL实例使用的是共享代理。
 * * 实例已开通读写分离。
 * * 实例为如下版本：
 *     * MySQL 5.7高可用版（本地SSD盘）
 *     * MySQL 5.6
 *     * SQL Server集群版
 *
 * @param request ReleaseReadWriteSplittingConnectionRequest
 * @return ReleaseReadWriteSplittingConnectionResponse
 */
ReleaseReadWriteSplittingConnectionResponse Client::releaseReadWriteSplittingConnection(const ReleaseReadWriteSplittingConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return releaseReadWriteSplittingConnectionWithOptions(request, runtime);
}

/**
 * @summary 移除标签
 *
 * @param request RemoveTagsFromResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveTagsFromResourceResponse
 */
RemoveTagsFromResourceResponse Client::removeTagsFromResourceWithOptions(const RemoveTagsFromResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  if (!!request.hasProxyId()) {
    query["proxyId"] = request.getProxyId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveTagsFromResource"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveTagsFromResourceResponse>();
}

/**
 * @summary 移除标签
 *
 * @param request RemoveTagsFromResourceRequest
 * @return RemoveTagsFromResourceResponse
 */
RemoveTagsFromResourceResponse Client::removeTagsFromResource(const RemoveTagsFromResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeTagsFromResourceWithOptions(request, runtime);
}

/**
 * @summary 为RDS实例续费
 *
 * @param request RenewInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RenewInstanceResponse
 */
RenewInstanceResponse Client::renewInstanceWithOptions(const RenewInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasAutoUseCoupon()) {
    query["AutoUseCoupon"] = request.getAutoUseCoupon();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasPromotionCode()) {
    query["PromotionCode"] = request.getPromotionCode();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RenewInstance"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RenewInstanceResponse>();
}

/**
 * @summary 为RDS实例续费
 *
 * @param request RenewInstanceRequest
 * @return RenewInstanceResponse
 */
RenewInstanceResponse Client::renewInstance(const RenewInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return renewInstanceWithOptions(request, runtime);
}

/**
 * @summary This API is used to renew a subscription-based RDS Custom instance.
 *
 * @param request RenewRCInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RenewRCInstanceResponse
 */
RenewRCInstanceResponse Client::renewRCInstanceWithOptions(const RenewRCInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasAutoUseCoupon()) {
    query["AutoUseCoupon"] = request.getAutoUseCoupon();
  }

  if (!!request.hasBusinessInfo()) {
    query["BusinessInfo"] = request.getBusinessInfo();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCommodityCode()) {
    query["CommodityCode"] = request.getCommodityCode();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPayType()) {
    query["PayType"] = request.getPayType();
  }

  if (!!request.hasPeriodAlign()) {
    query["PeriodAlign"] = request.getPeriodAlign();
  }

  if (!!request.hasPromotionCode()) {
    query["PromotionCode"] = request.getPromotionCode();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.getResource();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasTimeType()) {
    query["TimeType"] = request.getTimeType();
  }

  if (!!request.hasUsedTime()) {
    query["UsedTime"] = request.getUsedTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RenewRCInstance"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RenewRCInstanceResponse>();
}

/**
 * @summary This API is used to renew a subscription-based RDS Custom instance.
 *
 * @param request RenewRCInstanceRequest
 * @return RenewRCInstanceResponse
 */
RenewRCInstanceResponse Client::renewRCInstance(const RenewRCInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return renewRCInstanceWithOptions(request, runtime);
}

/**
 * @summary Reinstalls the operating system (OS) of an RDS Custom instance.
 *
 * @description - 实例的状态必须为已暂停（Stopped）状态。
 * - 重装系统将丢失原系统盘上的数据，请谨慎操作。
 *
 * @param request ReplaceRCInstanceSystemDiskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReplaceRCInstanceSystemDiskResponse
 */
ReplaceRCInstanceSystemDiskResponse Client::replaceRCInstanceSystemDiskWithOptions(const ReplaceRCInstanceSystemDiskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasImageId()) {
    query["ImageId"] = request.getImageId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIsLocalDisk()) {
    query["IsLocalDisk"] = request.getIsLocalDisk();
  }

  if (!!request.hasKeyPairName()) {
    query["KeyPairName"] = request.getKeyPairName();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReplaceRCInstanceSystemDisk"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReplaceRCInstanceSystemDiskResponse>();
}

/**
 * @summary Reinstalls the operating system (OS) of an RDS Custom instance.
 *
 * @description - 实例的状态必须为已暂停（Stopped）状态。
 * - 重装系统将丢失原系统盘上的数据，请谨慎操作。
 *
 * @param request ReplaceRCInstanceSystemDiskRequest
 * @return ReplaceRCInstanceSystemDiskResponse
 */
ReplaceRCInstanceSystemDiskResponse Client::replaceRCInstanceSystemDisk(const ReplaceRCInstanceSystemDiskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return replaceRCInstanceSystemDiskWithOptions(request, runtime);
}

/**
 * @summary 重置实例的账号密码
 *
 * @param request ResetAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetAccountResponse
 */
ResetAccountResponse Client::resetAccountWithOptions(const ResetAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.getAccountName();
  }

  if (!!request.hasAccountPassword()) {
    query["AccountPassword"] = request.getAccountPassword();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResetAccount"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetAccountResponse>();
}

/**
 * @summary 重置实例的账号密码
 *
 * @param request ResetAccountRequest
 * @return ResetAccountResponse
 */
ResetAccountResponse Client::resetAccount(const ResetAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetAccountWithOptions(request, runtime);
}

/**
 * @summary 重置指定账号的密码
 *
 * @param request ResetAccountPasswordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetAccountPasswordResponse
 */
ResetAccountPasswordResponse Client::resetAccountPasswordWithOptions(const ResetAccountPasswordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.getAccountName();
  }

  if (!!request.hasAccountPassword()) {
    query["AccountPassword"] = request.getAccountPassword();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResetAccountPassword"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetAccountPasswordResponse>();
}

/**
 * @summary 重置指定账号的密码
 *
 * @param request ResetAccountPasswordRequest
 * @return ResetAccountPasswordResponse
 */
ResetAccountPasswordResponse Client::resetAccountPassword(const ResetAccountPasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetAccountPasswordWithOptions(request, runtime);
}

/**
 * @summary ResizeRCInstanceDisk
 *
 * @description Local disk instances do not support changing storage space.
 *
 * @param request ResizeRCInstanceDiskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResizeRCInstanceDiskResponse
 */
ResizeRCInstanceDiskResponse Client::resizeRCInstanceDiskWithOptions(const ResizeRCInstanceDiskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasDiskId()) {
    query["DiskId"] = request.getDiskId();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNewSize()) {
    query["NewSize"] = request.getNewSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResizeRCInstanceDisk"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResizeRCInstanceDiskResponse>();
}

/**
 * @summary ResizeRCInstanceDisk
 *
 * @description Local disk instances do not support changing storage space.
 *
 * @param request ResizeRCInstanceDiskRequest
 * @return ResizeRCInstanceDiskResponse
 */
ResizeRCInstanceDiskResponse Client::resizeRCInstanceDisk(const ResizeRCInstanceDiskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resizeRCInstanceDiskWithOptions(request, runtime);
}

/**
 * @summary 重启实例
 *
 * @param request RestartDBInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestartDBInstanceResponse
 */
RestartDBInstanceResponse Client::restartDBInstanceWithOptions(const RestartDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.getNodeId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RestartDBInstance"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RestartDBInstanceResponse>();
}

/**
 * @summary 重启实例
 *
 * @param request RestartDBInstanceRequest
 * @return RestartDBInstanceResponse
 */
RestartDBInstanceResponse Client::restartDBInstance(const RestartDBInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return restartDBInstanceWithOptions(request, runtime);
}

/**
 * @summary 容灾实例库表灰度
 *
 * @param request RestoreDdrTableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestoreDdrTableResponse
 */
RestoreDdrTableResponse Client::restoreDdrTableWithOptions(const RestoreDdrTableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupId()) {
    query["BackupId"] = request.getBackupId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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

  if (!!request.hasRestoreTime()) {
    query["RestoreTime"] = request.getRestoreTime();
  }

  if (!!request.hasRestoreType()) {
    query["RestoreType"] = request.getRestoreType();
  }

  if (!!request.hasSourceDBInstanceName()) {
    query["SourceDBInstanceName"] = request.getSourceDBInstanceName();
  }

  if (!!request.hasSourceRegion()) {
    query["SourceRegion"] = request.getSourceRegion();
  }

  if (!!request.hasTableMeta()) {
    query["TableMeta"] = request.getTableMeta();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RestoreDdrTable"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RestoreDdrTableResponse>();
}

/**
 * @summary 容灾实例库表灰度
 *
 * @param request RestoreDdrTableRequest
 * @return RestoreDdrTableResponse
 */
RestoreDdrTableResponse Client::restoreDdrTable(const RestoreDdrTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return restoreDdrTableWithOptions(request, runtime);
}

/**
 * @summary 库表恢复
 *
 * @param request RestoreTableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestoreTableResponse
 */
RestoreTableResponse Client::restoreTableWithOptions(const RestoreTableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupId()) {
    query["BackupId"] = request.getBackupId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasInstantRecovery()) {
    query["InstantRecovery"] = request.getInstantRecovery();
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

  if (!!request.hasRestoreTime()) {
    query["RestoreTime"] = request.getRestoreTime();
  }

  if (!!request.hasTableMeta()) {
    query["TableMeta"] = request.getTableMeta();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RestoreTable"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RestoreTableResponse>();
}

/**
 * @summary 库表恢复
 *
 * @param request RestoreTableRequest
 * @return RestoreTableResponse
 */
RestoreTableResponse Client::restoreTable(const RestoreTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return restoreTableWithOptions(request, runtime);
}

/**
 * @summary 撤销账户权限
 *
 * @param request RevokeAccountPrivilegeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevokeAccountPrivilegeResponse
 */
RevokeAccountPrivilegeResponse Client::revokeAccountPrivilegeWithOptions(const RevokeAccountPrivilegeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.getAccountName();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.getDBName();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RevokeAccountPrivilege"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RevokeAccountPrivilegeResponse>();
}

/**
 * @summary 撤销账户权限
 *
 * @param request RevokeAccountPrivilegeRequest
 * @return RevokeAccountPrivilegeResponse
 */
RevokeAccountPrivilegeResponse Client::revokeAccountPrivilege(const RevokeAccountPrivilegeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return revokeAccountPrivilegeWithOptions(request, runtime);
}

/**
 * @summary 撤销操作权限
 *
 * @param request RevokeOperatorPermissionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevokeOperatorPermissionResponse
 */
RevokeOperatorPermissionResponse Client::revokeOperatorPermissionWithOptions(const RevokeOperatorPermissionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RevokeOperatorPermission"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RevokeOperatorPermissionResponse>();
}

/**
 * @summary 撤销操作权限
 *
 * @param request RevokeOperatorPermissionRequest
 * @return RevokeOperatorPermissionResponse
 */
RevokeOperatorPermissionResponse Client::revokeOperatorPermission(const RevokeOperatorPermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return revokeOperatorPermissionWithOptions(request, runtime);
}

/**
 * @summary Deletes security group rules with the specified IDs.
 *
 * @param tmpReq RevokeRCSecurityGroupPermissionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevokeRCSecurityGroupPermissionResponse
 */
RevokeRCSecurityGroupPermissionResponse Client::revokeRCSecurityGroupPermissionWithOptions(const RevokeRCSecurityGroupPermissionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RevokeRCSecurityGroupPermissionShrinkRequest request = RevokeRCSecurityGroupPermissionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSecurityGroupRuleIdList()) {
    request.setSecurityGroupRuleIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSecurityGroupRuleIdList(), "SecurityGroupRuleIdList", "json"));
  }

  json query = {};
  if (!!request.hasDirection()) {
    query["Direction"] = request.getDirection();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSecurityGroupId()) {
    query["SecurityGroupId"] = request.getSecurityGroupId();
  }

  if (!!request.hasSecurityGroupRuleIdListShrink()) {
    query["SecurityGroupRuleIdList"] = request.getSecurityGroupRuleIdListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RevokeRCSecurityGroupPermission"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RevokeRCSecurityGroupPermissionResponse>();
}

/**
 * @summary Deletes security group rules with the specified IDs.
 *
 * @param request RevokeRCSecurityGroupPermissionRequest
 * @return RevokeRCSecurityGroupPermissionResponse
 */
RevokeRCSecurityGroupPermissionResponse Client::revokeRCSecurityGroupPermission(const RevokeRCSecurityGroupPermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return revokeRCSecurityGroupPermissionWithOptions(request, runtime);
}

/**
 * @summary 创建并执行云助手命令
 *
 * @param tmpReq RunRCCommandRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunRCCommandResponse
 */
RunRCCommandResponse Client::runRCCommandWithOptions(const RunRCCommandRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunRCCommandShrinkRequest request = RunRCCommandShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInstanceIds()) {
    request.setInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInstanceIds(), "InstanceIds", "json"));
  }

  if (!!tmpReq.hasParameters()) {
    request.setParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParameters(), "Parameters", "json"));
  }

  if (!!tmpReq.hasResourceTags()) {
    request.setResourceTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResourceTags(), "ResourceTags", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCommandContent()) {
    query["CommandContent"] = request.getCommandContent();
  }

  if (!!request.hasContainerId()) {
    query["ContainerId"] = request.getContainerId();
  }

  if (!!request.hasContainerName()) {
    query["ContainerName"] = request.getContainerName();
  }

  if (!!request.hasContentEncoding()) {
    query["ContentEncoding"] = request.getContentEncoding();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasEnableParameter()) {
    query["EnableParameter"] = request.getEnableParameter();
  }

  if (!!request.hasFrequency()) {
    query["Frequency"] = request.getFrequency();
  }

  if (!!request.hasInstanceIdsShrink()) {
    query["InstanceIds"] = request.getInstanceIdsShrink();
  }

  if (!!request.hasKeepCommand()) {
    query["KeepCommand"] = request.getKeepCommand();
  }

  if (!!request.hasLauncher()) {
    query["Launcher"] = request.getLauncher();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasParametersShrink()) {
    query["Parameters"] = request.getParametersShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRepeatMode()) {
    query["RepeatMode"] = request.getRepeatMode();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceTagsShrink()) {
    query["ResourceTags"] = request.getResourceTagsShrink();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.getTagsShrink();
  }

  if (!!request.hasTerminationMode()) {
    query["TerminationMode"] = request.getTerminationMode();
  }

  if (!!request.hasTimeout()) {
    query["Timeout"] = request.getTimeout();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  if (!!request.hasUsername()) {
    query["Username"] = request.getUsername();
  }

  if (!!request.hasWindowsPasswordName()) {
    query["WindowsPasswordName"] = request.getWindowsPasswordName();
  }

  if (!!request.hasWorkingDir()) {
    query["WorkingDir"] = request.getWorkingDir();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RunRCCommand"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunRCCommandResponse>();
}

/**
 * @summary 创建并执行云助手命令
 *
 * @param request RunRCCommandRequest
 * @return RunRCCommandResponse
 */
RunRCCommandResponse Client::runRCCommand(const RunRCCommandRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runRCCommandWithOptions(request, runtime);
}

/**
 * @summary Invoke the RunRCInstances API and specify parameters such as ImageId, InstanceType, VSwitchId, and SecurityGroupId to create one or more RDS Custom instances.
 *
 * @description - Before creating an RDS Custom instance, submit a ticket to request that your Alibaba Cloud account be added to the whitelist.  
 * - Only subscription-type RDS Custom instances are supported.  
 * - Supported regions include Beijing, Shanghai, Shenzhen, and Hangzhou.
 *
 * @param tmpReq RunRCInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunRCInstancesResponse
 */
RunRCInstancesResponse Client::runRCInstancesWithOptions(const RunRCInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunRCInstancesShrinkRequest request = RunRCInstancesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCreateAckEdgeParam()) {
    request.setCreateAckEdgeParamShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCreateAckEdgeParam(), "CreateAckEdgeParam", "json"));
  }

  if (!!tmpReq.hasDataDisk()) {
    request.setDataDiskShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDataDisk(), "DataDisk", "json"));
  }

  if (!!tmpReq.hasNetworkOptions()) {
    request.setNetworkOptionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNetworkOptions(), "NetworkOptions", "json"));
  }

  if (!!tmpReq.hasSecurityGroupIds()) {
    request.setSecurityGroupIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSecurityGroupIds(), "SecurityGroupIds", "json"));
  }

  if (!!tmpReq.hasSystemDisk()) {
    request.setSystemDiskShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSystemDisk(), "SystemDisk", "json"));
  }

  json query = {};
  if (!!request.hasAcuType()) {
    query["AcuType"] = request.getAcuType();
  }

  if (!!request.hasAmount()) {
    query["Amount"] = request.getAmount();
  }

  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasAutoUseCoupon()) {
    query["AutoUseCoupon"] = request.getAutoUseCoupon();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCreateAckEdgeParamShrink()) {
    query["CreateAckEdgeParam"] = request.getCreateAckEdgeParamShrink();
  }

  if (!!request.hasCreateExtraParam()) {
    query["CreateExtraParam"] = request.getCreateExtraParam();
  }

  if (!!request.hasCreateMode()) {
    query["CreateMode"] = request.getCreateMode();
  }

  if (!!request.hasDataDiskShrink()) {
    query["DataDisk"] = request.getDataDiskShrink();
  }

  if (!!request.hasDeletionProtection()) {
    query["DeletionProtection"] = request.getDeletionProtection();
  }

  if (!!request.hasDeploymentSetId()) {
    query["DeploymentSetId"] = request.getDeploymentSetId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasHostName()) {
    query["HostName"] = request.getHostName();
  }

  if (!!request.hasImageId()) {
    query["ImageId"] = request.getImageId();
  }

  if (!!request.hasInstanceChargeType()) {
    query["InstanceChargeType"] = request.getInstanceChargeType();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.getInstanceType();
  }

  if (!!request.hasInternetChargeType()) {
    query["InternetChargeType"] = request.getInternetChargeType();
  }

  if (!!request.hasInternetMaxBandwidthOut()) {
    query["InternetMaxBandwidthOut"] = request.getInternetMaxBandwidthOut();
  }

  if (!!request.hasIoOptimized()) {
    query["IoOptimized"] = request.getIoOptimized();
  }

  if (!!request.hasKeyPairName()) {
    query["KeyPairName"] = request.getKeyPairName();
  }

  if (!!request.hasNetworkOptionsShrink()) {
    query["NetworkOptions"] = request.getNetworkOptionsShrink();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasPasswordInherit()) {
    query["PasswordInherit"] = request.getPasswordInherit();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasPeriodUnit()) {
    query["PeriodUnit"] = request.getPeriodUnit();
  }

  if (!!request.hasPrivateIpAddress()) {
    query["PrivateIpAddress"] = request.getPrivateIpAddress();
  }

  if (!!request.hasPromotionCode()) {
    query["PromotionCode"] = request.getPromotionCode();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasScheduledRule()) {
    query["ScheduledRule"] = request.getScheduledRule();
  }

  if (!!request.hasSecurityEnhancementStrategy()) {
    query["SecurityEnhancementStrategy"] = request.getSecurityEnhancementStrategy();
  }

  if (!!request.hasSecurityGroupId()) {
    query["SecurityGroupId"] = request.getSecurityGroupId();
  }

  if (!!request.hasSecurityGroupIdsShrink()) {
    query["SecurityGroupIds"] = request.getSecurityGroupIdsShrink();
  }

  if (!!request.hasSpotStrategy()) {
    query["SpotStrategy"] = request.getSpotStrategy();
  }

  if (!!request.hasSupportCase()) {
    query["SupportCase"] = request.getSupportCase();
  }

  if (!!request.hasSystemDiskShrink()) {
    query["SystemDisk"] = request.getSystemDiskShrink();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  if (!!request.hasUserDataInBase64()) {
    query["UserDataInBase64"] = request.getUserDataInBase64();
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
    {"action" , "RunRCInstances"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunRCInstancesResponse>();
}

/**
 * @summary Invoke the RunRCInstances API and specify parameters such as ImageId, InstanceType, VSwitchId, and SecurityGroupId to create one or more RDS Custom instances.
 *
 * @description - Before creating an RDS Custom instance, submit a ticket to request that your Alibaba Cloud account be added to the whitelist.  
 * - Only subscription-type RDS Custom instances are supported.  
 * - Supported regions include Beijing, Shanghai, Shenzhen, and Hangzhou.
 *
 * @param request RunRCInstancesRequest
 * @return RunRCInstancesResponse
 */
RunRCInstancesResponse Client::runRCInstances(const RunRCInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runRCInstancesWithOptions(request, runtime);
}

/**
 * @summary 启动已经停止的RDS实例
 *
 * @param request StartDBInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartDBInstanceResponse
 */
StartDBInstanceResponse Client::startDBInstanceWithOptions(const StartDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBInstanceTransType()) {
    query["DBInstanceTransType"] = request.getDBInstanceTransType();
  }

  if (!!request.hasDedicatedHostGroupId()) {
    query["DedicatedHostGroupId"] = request.getDedicatedHostGroupId();
  }

  if (!!request.hasEffectiveTime()) {
    query["EffectiveTime"] = request.getEffectiveTime();
  }

  if (!!request.hasEngineVersion()) {
    query["EngineVersion"] = request.getEngineVersion();
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

  if (!!request.hasSpecifiedTime()) {
    query["SpecifiedTime"] = request.getSpecifiedTime();
  }

  if (!!request.hasStorage()) {
    query["Storage"] = request.getStorage();
  }

  if (!!request.hasTargetDBInstanceClass()) {
    query["TargetDBInstanceClass"] = request.getTargetDBInstanceClass();
  }

  if (!!request.hasTargetDedicatedHostIdForLog()) {
    query["TargetDedicatedHostIdForLog"] = request.getTargetDedicatedHostIdForLog();
  }

  if (!!request.hasTargetDedicatedHostIdForMaster()) {
    query["TargetDedicatedHostIdForMaster"] = request.getTargetDedicatedHostIdForMaster();
  }

  if (!!request.hasTargetDedicatedHostIdForSlave()) {
    query["TargetDedicatedHostIdForSlave"] = request.getTargetDedicatedHostIdForSlave();
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
    {"action" , "StartDBInstance"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartDBInstanceResponse>();
}

/**
 * @summary 启动已经停止的RDS实例
 *
 * @param request StartDBInstanceRequest
 * @return StartDBInstanceResponse
 */
StartDBInstanceResponse Client::startDBInstance(const StartDBInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startDBInstanceWithOptions(request, runtime);
}

/**
 * @summary 启动RDS用户专属主机实例
 *
 * @param request StartRCInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartRCInstanceResponse
 */
StartRCInstanceResponse Client::startRCInstanceWithOptions(const StartRCInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "StartRCInstance"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartRCInstanceResponse>();
}

/**
 * @summary 启动RDS用户专属主机实例
 *
 * @param request StartRCInstanceRequest
 * @return StartRCInstanceResponse
 */
StartRCInstanceResponse Client::startRCInstance(const StartRCInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startRCInstanceWithOptions(request, runtime);
}

/**
 * @summary 批量启动RC实例
 *
 * @param tmpReq StartRCInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartRCInstancesResponse
 */
StartRCInstancesResponse Client::startRCInstancesWithOptions(const StartRCInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  StartRCInstancesShrinkRequest request = StartRCInstancesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInstanceIds()) {
    request.setInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInstanceIds(), "InstanceIds", "json"));
  }

  json query = {};
  if (!!request.hasBatchOptimization()) {
    query["BatchOptimization"] = request.getBatchOptimization();
  }

  if (!!request.hasInstanceIdsShrink()) {
    query["InstanceIds"] = request.getInstanceIdsShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartRCInstances"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartRCInstancesResponse>();
}

/**
 * @summary 批量启动RC实例
 *
 * @param request StartRCInstancesRequest
 * @return StartRCInstancesResponse
 */
StartRCInstancesResponse Client::startRCInstances(const StartRCInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startRCInstancesWithOptions(request, runtime);
}

/**
 * @summary 暂停RDS实例，实例处于停机状态
 *
 * @param request StopDBInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopDBInstanceResponse
 */
StopDBInstanceResponse Client::stopDBInstanceWithOptions(const StopDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopDBInstance"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopDBInstanceResponse>();
}

/**
 * @summary 暂停RDS实例，实例处于停机状态
 *
 * @param request StopDBInstanceRequest
 * @return StopDBInstanceResponse
 */
StopDBInstanceResponse Client::stopDBInstance(const StopDBInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopDBInstanceWithOptions(request, runtime);
}

/**
 * @summary Invoke StopRCInstance to stop a running RDS Custom instance. After the API is successfully invoked, the instance transitions from the Stopping state to the Stopped state.
 *
 * @param request StopRCInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopRCInstanceResponse
 */
StopRCInstanceResponse Client::stopRCInstanceWithOptions(const StopRCInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasForceStop()) {
    query["ForceStop"] = request.getForceStop();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasStoppedMode()) {
    query["StoppedMode"] = request.getStoppedMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopRCInstance"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopRCInstanceResponse>();
}

/**
 * @summary Invoke StopRCInstance to stop a running RDS Custom instance. After the API is successfully invoked, the instance transitions from the Stopping state to the Stopped state.
 *
 * @param request StopRCInstanceRequest
 * @return StopRCInstanceResponse
 */
StopRCInstanceResponse Client::stopRCInstance(const StopRCInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopRCInstanceWithOptions(request, runtime);
}

/**
 * @summary 批量停止RC实例
 *
 * @param tmpReq StopRCInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopRCInstancesResponse
 */
StopRCInstancesResponse Client::stopRCInstancesWithOptions(const StopRCInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  StopRCInstancesShrinkRequest request = StopRCInstancesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInstanceIds()) {
    request.setInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInstanceIds(), "InstanceIds", "json"));
  }

  json query = {};
  if (!!request.hasBatchOptimization()) {
    query["BatchOptimization"] = request.getBatchOptimization();
  }

  if (!!request.hasForceStop()) {
    query["ForceStop"] = request.getForceStop();
  }

  if (!!request.hasInstanceIdsShrink()) {
    query["InstanceIds"] = request.getInstanceIdsShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasStoppedMode()) {
    query["StoppedMode"] = request.getStoppedMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopRCInstances"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopRCInstancesResponse>();
}

/**
 * @summary 批量停止RC实例
 *
 * @param request StopRCInstancesRequest
 * @return StopRCInstancesResponse
 */
StopRCInstancesResponse Client::stopRCInstances(const StopRCInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopRCInstancesWithOptions(request, runtime);
}

/**
 * @summary 切换RDS实例的主备实例
 *
 * @param request SwitchDBInstanceHARequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SwitchDBInstanceHAResponse
 */
SwitchDBInstanceHAResponse Client::switchDBInstanceHAWithOptions(const SwitchDBInstanceHARequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasEffectiveTime()) {
    query["EffectiveTime"] = request.getEffectiveTime();
  }

  if (!!request.hasForce()) {
    query["Force"] = request.getForce();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.getNodeId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SwitchDBInstanceHA"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SwitchDBInstanceHAResponse>();
}

/**
 * @summary 切换RDS实例的主备实例
 *
 * @param request SwitchDBInstanceHARequest
 * @return SwitchDBInstanceHAResponse
 */
SwitchDBInstanceHAResponse Client::switchDBInstanceHA(const SwitchDBInstanceHARequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return switchDBInstanceHAWithOptions(request, runtime);
}

/**
 * @summary 切换内外网地址，内网地址变为外网地址，外网地址变为内网地址。
 *
 * @param request SwitchDBInstanceNetTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SwitchDBInstanceNetTypeResponse
 */
SwitchDBInstanceNetTypeResponse Client::switchDBInstanceNetTypeWithOptions(const SwitchDBInstanceNetTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasConnectionStringPrefix()) {
    query["ConnectionStringPrefix"] = request.getConnectionStringPrefix();
  }

  if (!!request.hasConnectionStringType()) {
    query["ConnectionStringType"] = request.getConnectionStringType();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SwitchDBInstanceNetType"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SwitchDBInstanceNetTypeResponse>();
}

/**
 * @summary 切换内外网地址，内网地址变为外网地址，外网地址变为内网地址。
 *
 * @param request SwitchDBInstanceNetTypeRequest
 * @return SwitchDBInstanceNetTypeResponse
 */
SwitchDBInstanceNetTypeResponse Client::switchDBInstanceNetType(const SwitchDBInstanceNetTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return switchDBInstanceNetTypeWithOptions(request, runtime);
}

/**
 * @summary 迁移RDS实例的VPC实例
 *
 * @param request SwitchDBInstanceVpcRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SwitchDBInstanceVpcResponse
 */
SwitchDBInstanceVpcResponse Client::switchDBInstanceVpcWithOptions(const SwitchDBInstanceVpcRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasPrivateIpAddress()) {
    query["PrivateIpAddress"] = request.getPrivateIpAddress();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasVPCId()) {
    query["VPCId"] = request.getVPCId();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SwitchDBInstanceVpc"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SwitchDBInstanceVpcResponse>();
}

/**
 * @summary 迁移RDS实例的VPC实例
 *
 * @param request SwitchDBInstanceVpcRequest
 * @return SwitchDBInstanceVpcResponse
 */
SwitchDBInstanceVpcResponse Client::switchDBInstanceVpc(const SwitchDBInstanceVpcRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return switchDBInstanceVpcWithOptions(request, runtime);
}

/**
 * @summary Zero-downtime major version upgrade traffic switchover for RDS PostgreSQL.
 *
 * @description Applicable engine:  
 * * RDS PostgreSQL
 *
 * @param request SwitchOverMajorVersionUpgradeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SwitchOverMajorVersionUpgradeResponse
 */
SwitchOverMajorVersionUpgradeResponse Client::switchOverMajorVersionUpgradeWithOptions(const SwitchOverMajorVersionUpgradeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
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

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSwitchoverTimeout()) {
    query["SwitchoverTimeout"] = request.getSwitchoverTimeout();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SwitchOverMajorVersionUpgrade"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SwitchOverMajorVersionUpgradeResponse>();
}

/**
 * @summary Zero-downtime major version upgrade traffic switchover for RDS PostgreSQL.
 *
 * @description Applicable engine:  
 * * RDS PostgreSQL
 *
 * @param request SwitchOverMajorVersionUpgradeRequest
 * @return SwitchOverMajorVersionUpgradeResponse
 */
SwitchOverMajorVersionUpgradeResponse Client::switchOverMajorVersionUpgrade(const SwitchOverMajorVersionUpgradeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return switchOverMajorVersionUpgradeWithOptions(request, runtime);
}

/**
 * @summary Switches the data synchronization link to synchronize data from a disaster recovery (DR) instance to the primary ApsaraDB RDS for SQL Server instance.
 *
 * @param request SwitchReplicationLinkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SwitchReplicationLinkResponse
 */
SwitchReplicationLinkResponse Client::switchReplicationLinkWithOptions(const SwitchReplicationLinkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasTargetInstanceName()) {
    query["TargetInstanceName"] = request.getTargetInstanceName();
  }

  if (!!request.hasTargetInstanceRegionId()) {
    query["TargetInstanceRegionId"] = request.getTargetInstanceRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SwitchReplicationLink"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SwitchReplicationLinkResponse>();
}

/**
 * @summary Switches the data synchronization link to synchronize data from a disaster recovery (DR) instance to the primary ApsaraDB RDS for SQL Server instance.
 *
 * @param request SwitchReplicationLinkRequest
 * @return SwitchReplicationLinkResponse
 */
SwitchReplicationLinkResponse Client::switchReplicationLink(const SwitchReplicationLinkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return switchReplicationLinkWithOptions(request, runtime);
}

/**
 * @summary 同步密钥对
 *
 * @param request SyncRCKeyPairRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SyncRCKeyPairResponse
 */
SyncRCKeyPairResponse Client::syncRCKeyPairWithOptions(const SyncRCKeyPairRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyPairName()) {
    query["KeyPairName"] = request.getKeyPairName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSyncMode()) {
    query["SyncMode"] = request.getSyncMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SyncRCKeyPair"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SyncRCKeyPairResponse>();
}

/**
 * @summary 同步密钥对
 *
 * @param request SyncRCKeyPairRequest
 * @return SyncRCKeyPairResponse
 */
SyncRCKeyPairResponse Client::syncRCKeyPair(const SyncRCKeyPairRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return syncRCKeyPairWithOptions(request, runtime);
}

/**
 * @summary 同步RDS Custom的安全组
 *
 * @param request SyncRCSecurityGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SyncRCSecurityGroupResponse
 */
SyncRCSecurityGroupResponse Client::syncRCSecurityGroupWithOptions(const SyncRCSecurityGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSecurityGroupId()) {
    query["SecurityGroupId"] = request.getSecurityGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SyncRCSecurityGroup"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SyncRCSecurityGroupResponse>();
}

/**
 * @summary 同步RDS Custom的安全组
 *
 * @param request SyncRCSecurityGroupRequest
 * @return SyncRCSecurityGroupResponse
 */
SyncRCSecurityGroupResponse Client::syncRCSecurityGroup(const SyncRCSecurityGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return syncRCSecurityGroupWithOptions(request, runtime);
}

/**
 * @summary 为RDS资源绑定标签
 *
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TagResources"},
    {"version" , "2014-08-15"},
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
 * @summary 为RDS资源绑定标签
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary 终止迁移任务
 *
 * @param request TerminateMigrateTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TerminateMigrateTaskResponse
 */
TerminateMigrateTaskResponse Client::terminateMigrateTaskWithOptions(const TerminateMigrateTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasMigrateTaskId()) {
    query["MigrateTaskId"] = request.getMigrateTaskId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TerminateMigrateTask"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TerminateMigrateTaskResponse>();
}

/**
 * @summary 终止迁移任务
 *
 * @param request TerminateMigrateTaskRequest
 * @return TerminateMigrateTaskResponse
 */
TerminateMigrateTaskResponse Client::terminateMigrateTask(const TerminateMigrateTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return terminateMigrateTaskWithOptions(request, runtime);
}

/**
 * @summary 变更RDS实例的计费方式
 *
 * @param request TransformDBInstancePayTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TransformDBInstancePayTypeResponse
 */
TransformDBInstancePayTypeResponse Client::transformDBInstancePayTypeWithOptions(const TransformDBInstancePayTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasAutoUseCoupon()) {
    query["AutoUseCoupon"] = request.getAutoUseCoupon();
  }

  if (!!request.hasBusinessInfo()) {
    query["BusinessInfo"] = request.getBusinessInfo();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasPromotionCode()) {
    query["PromotionCode"] = request.getPromotionCode();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasUsedTime()) {
    query["UsedTime"] = request.getUsedTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TransformDBInstancePayType"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TransformDBInstancePayTypeResponse>();
}

/**
 * @summary 变更RDS实例的计费方式
 *
 * @param request TransformDBInstancePayTypeRequest
 * @return TransformDBInstancePayTypeResponse
 */
TransformDBInstancePayTypeResponse Client::transformDBInstancePayType(const TransformDBInstancePayTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return transformDBInstancePayTypeWithOptions(request, runtime);
}

/**
 * @summary 解绑RDS Custom实例的弹性公网
 *
 * @param request UnassociateEipAddressWithRCInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnassociateEipAddressWithRCInstanceResponse
 */
UnassociateEipAddressWithRCInstanceResponse Client::unassociateEipAddressWithRCInstanceWithOptions(const UnassociateEipAddressWithRCInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAllocationId()) {
    query["AllocationId"] = request.getAllocationId();
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
    {"action" , "UnassociateEipAddressWithRCInstance"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnassociateEipAddressWithRCInstanceResponse>();
}

/**
 * @summary 解绑RDS Custom实例的弹性公网
 *
 * @param request UnassociateEipAddressWithRCInstanceRequest
 * @return UnassociateEipAddressWithRCInstanceResponse
 */
UnassociateEipAddressWithRCInstanceResponse Client::unassociateEipAddressWithRCInstance(const UnassociateEipAddressWithRCInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unassociateEipAddressWithRCInstanceWithOptions(request, runtime);
}

/**
 * @summary 解锁RDS实例的账号
 *
 * @param request UnlockAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnlockAccountResponse
 */
UnlockAccountResponse Client::unlockAccountWithOptions(const UnlockAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.getAccountName();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnlockAccount"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnlockAccountResponse>();
}

/**
 * @summary 解锁RDS实例的账号
 *
 * @param request UnlockAccountRequest
 * @return UnlockAccountResponse
 */
UnlockAccountResponse Client::unlockAccount(const UnlockAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unlockAccountWithOptions(request, runtime);
}

/**
 * @summary 解除指定资源的标签
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

  if (!!request.hasTagKey()) {
    query["TagKey"] = request.getTagKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UntagResources"},
    {"version" , "2014-08-15"},
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
 * @summary 解除指定资源的标签
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @summary Update replication channel for a native replication instance
 *
 * @description ### Supported Engine  
 * RDS MySQL  
 * ### Related Function Documentation  
 * >Notice: Before using this API, carefully read the Function Documentation to fully understand the prerequisites for using the API and the Impact of its use before performing any operation.
 *
 * @param request UpdateDBInstanceReplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDBInstanceReplicationResponse
 */
UpdateDBInstanceReplicationResponse Client::updateDBInstanceReplicationWithOptions(const UpdateDBInstanceReplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChannelName()) {
    query["ChannelName"] = request.getChannelName();
  }

  if (!!request.hasDbInstanceId()) {
    query["DbInstanceId"] = request.getDbInstanceId();
  }

  if (!!request.hasMasterHost()) {
    query["MasterHost"] = request.getMasterHost();
  }

  if (!!request.hasMasterPassword()) {
    query["MasterPassword"] = request.getMasterPassword();
  }

  if (!!request.hasMasterPort()) {
    query["MasterPort"] = request.getMasterPort();
  }

  if (!!request.hasMasterUser()) {
    query["MasterUser"] = request.getMasterUser();
  }

  if (!!request.hasOperation()) {
    query["Operation"] = request.getOperation();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateDBInstanceReplication"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDBInstanceReplicationResponse>();
}

/**
 * @summary Update replication channel for a native replication instance
 *
 * @description ### Supported Engine  
 * RDS MySQL  
 * ### Related Function Documentation  
 * >Notice: Before using this API, carefully read the Function Documentation to fully understand the prerequisites for using the API and the Impact of its use before performing any operation.
 *
 * @param request UpdateDBInstanceReplicationRequest
 * @return UpdateDBInstanceReplicationResponse
 */
UpdateDBInstanceReplicationResponse Client::updateDBInstanceReplication(const UpdateDBInstanceReplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDBInstanceReplicationWithOptions(request, runtime);
}

/**
 * @summary 更新插件版本
 *
 * @param request UpdatePostgresExtensionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePostgresExtensionsResponse
 */
UpdatePostgresExtensionsResponse Client::updatePostgresExtensionsWithOptions(const UpdatePostgresExtensionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBNames()) {
    query["DBNames"] = request.getDBNames();
  }

  if (!!request.hasExtensions()) {
    query["Extensions"] = request.getExtensions();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdatePostgresExtensions"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePostgresExtensionsResponse>();
}

/**
 * @summary 更新插件版本
 *
 * @param request UpdatePostgresExtensionsRequest
 * @return UpdatePostgresExtensionsResponse
 */
UpdatePostgresExtensionsResponse Client::updatePostgresExtensions(const UpdatePostgresExtensionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePostgresExtensionsWithOptions(request, runtime);
}

/**
 * @summary 变更用户备份的备注信息和保留时长
 *
 * @param request UpdateUserBackupFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateUserBackupFileResponse
 */
UpdateUserBackupFileResponse Client::updateUserBackupFileWithOptions(const UpdateUserBackupFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupId()) {
    query["BackupId"] = request.getBackupId();
  }

  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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

  if (!!request.hasRetention()) {
    query["Retention"] = request.getRetention();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateUserBackupFile"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateUserBackupFileResponse>();
}

/**
 * @summary 变更用户备份的备注信息和保留时长
 *
 * @param request UpdateUserBackupFileRequest
 * @return UpdateUserBackupFileResponse
 */
UpdateUserBackupFileResponse Client::updateUserBackupFile(const UpdateUserBackupFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateUserBackupFileWithOptions(request, runtime);
}

/**
 * @summary 升级RDS实例的大版本
 *
 * @param request UpgradeDBInstanceEngineVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeDBInstanceEngineVersionResponse
 */
UpgradeDBInstanceEngineVersionResponse Client::upgradeDBInstanceEngineVersionWithOptions(const UpgradeDBInstanceEngineVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasEffectiveTime()) {
    query["EffectiveTime"] = request.getEffectiveTime();
  }

  if (!!request.hasEngineVersion()) {
    query["EngineVersion"] = request.getEngineVersion();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradeDBInstanceEngineVersion"},
    {"version" , "2014-08-15"},
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
 * @summary 升级RDS实例的大版本
 *
 * @param request UpgradeDBInstanceEngineVersionRequest
 * @return UpgradeDBInstanceEngineVersionResponse
 */
UpgradeDBInstanceEngineVersionResponse Client::upgradeDBInstanceEngineVersion(const UpgradeDBInstanceEngineVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradeDBInstanceEngineVersionWithOptions(request, runtime);
}

/**
 * @summary 升级RDS实例的内核小版本
 *
 * @param request UpgradeDBInstanceKernelVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeDBInstanceKernelVersionResponse
 */
UpgradeDBInstanceKernelVersionResponse Client::upgradeDBInstanceKernelVersionWithOptions(const UpgradeDBInstanceKernelVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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

  if (!!request.hasSwitchTime()) {
    query["SwitchTime"] = request.getSwitchTime();
  }

  if (!!request.hasTargetMinorVersion()) {
    query["TargetMinorVersion"] = request.getTargetMinorVersion();
  }

  if (!!request.hasUpgradeTime()) {
    query["UpgradeTime"] = request.getUpgradeTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradeDBInstanceKernelVersion"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradeDBInstanceKernelVersionResponse>();
}

/**
 * @summary 升级RDS实例的内核小版本
 *
 * @param request UpgradeDBInstanceKernelVersionRequest
 * @return UpgradeDBInstanceKernelVersionResponse
 */
UpgradeDBInstanceKernelVersionResponse Client::upgradeDBInstanceKernelVersion(const UpgradeDBInstanceKernelVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradeDBInstanceKernelVersionWithOptions(request, runtime);
}

/**
 * @summary 升级数据库实例大版本
 *
 * @param request UpgradeDBInstanceMajorVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeDBInstanceMajorVersionResponse
 */
UpgradeDBInstanceMajorVersionResponse Client::upgradeDBInstanceMajorVersionWithOptions(const UpgradeDBInstanceMajorVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAllowDDL()) {
    query["AllowDDL"] = request.getAllowDDL();
  }

  if (!!request.hasCollectStatMode()) {
    query["CollectStatMode"] = request.getCollectStatMode();
  }

  if (!!request.hasCustomExtraInfo()) {
    query["CustomExtraInfo"] = request.getCustomExtraInfo();
  }

  if (!!request.hasDBInstanceClass()) {
    query["DBInstanceClass"] = request.getDBInstanceClass();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBInstanceStorage()) {
    query["DBInstanceStorage"] = request.getDBInstanceStorage();
  }

  if (!!request.hasDBInstanceStorageType()) {
    query["DBInstanceStorageType"] = request.getDBInstanceStorageType();
  }

  if (!!request.hasInstanceNetworkType()) {
    query["InstanceNetworkType"] = request.getInstanceNetworkType();
  }

  if (!!request.hasPayType()) {
    query["PayType"] = request.getPayType();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasPrivateIpAddress()) {
    query["PrivateIpAddress"] = request.getPrivateIpAddress();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSwitchOver()) {
    query["SwitchOver"] = request.getSwitchOver();
  }

  if (!!request.hasSwitchTime()) {
    query["SwitchTime"] = request.getSwitchTime();
  }

  if (!!request.hasSwitchTimeMode()) {
    query["SwitchTimeMode"] = request.getSwitchTimeMode();
  }

  if (!!request.hasTargetMajorVersion()) {
    query["TargetMajorVersion"] = request.getTargetMajorVersion();
  }

  if (!!request.hasUpgradeMode()) {
    query["UpgradeMode"] = request.getUpgradeMode();
  }

  if (!!request.hasUsedTime()) {
    query["UsedTime"] = request.getUsedTime();
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

  if (!!request.hasZoneIdSlave1()) {
    query["ZoneIdSlave1"] = request.getZoneIdSlave1();
  }

  if (!!request.hasZoneIdSlave2()) {
    query["ZoneIdSlave2"] = request.getZoneIdSlave2();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradeDBInstanceMajorVersion"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradeDBInstanceMajorVersionResponse>();
}

/**
 * @summary 升级数据库实例大版本
 *
 * @param request UpgradeDBInstanceMajorVersionRequest
 * @return UpgradeDBInstanceMajorVersionResponse
 */
UpgradeDBInstanceMajorVersionResponse Client::upgradeDBInstanceMajorVersion(const UpgradeDBInstanceMajorVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradeDBInstanceMajorVersionWithOptions(request, runtime);
}

/**
 * @summary This API is used to perform a pre-check before upgrading the major version of RDS MySQL or RDS PostgreSQL.
 *
 * @description ### Applicable Engines  
 * RDS MySQL  
 * RDS PostgreSQL  
 * ### Related Function Documentation  
 * >Notice: Before using this API, carefully read the Function Documentation to ensure you fully understand the prerequisites for using the API and the Impact of its use before performing any operation.  
 * - [RDS MySQL Major Version Upgrade Check Report](https://help.aliyun.com/document_detail/2794383.html)  
 * - [Upgrade the Major Version of an RDS PostgreSQL Database](https://help.aliyun.com/document_detail/2879540.html)
 *
 * @param request UpgradeDBInstanceMajorVersionPrecheckRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeDBInstanceMajorVersionPrecheckResponse
 */
UpgradeDBInstanceMajorVersionPrecheckResponse Client::upgradeDBInstanceMajorVersionPrecheckWithOptions(const UpgradeDBInstanceMajorVersionPrecheckRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTargetMajorVersion()) {
    query["TargetMajorVersion"] = request.getTargetMajorVersion();
  }

  if (!!request.hasUpgradeMode()) {
    query["UpgradeMode"] = request.getUpgradeMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradeDBInstanceMajorVersionPrecheck"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradeDBInstanceMajorVersionPrecheckResponse>();
}

/**
 * @summary This API is used to perform a pre-check before upgrading the major version of RDS MySQL or RDS PostgreSQL.
 *
 * @description ### Applicable Engines  
 * RDS MySQL  
 * RDS PostgreSQL  
 * ### Related Function Documentation  
 * >Notice: Before using this API, carefully read the Function Documentation to ensure you fully understand the prerequisites for using the API and the Impact of its use before performing any operation.  
 * - [RDS MySQL Major Version Upgrade Check Report](https://help.aliyun.com/document_detail/2794383.html)  
 * - [Upgrade the Major Version of an RDS PostgreSQL Database](https://help.aliyun.com/document_detail/2879540.html)
 *
 * @param request UpgradeDBInstanceMajorVersionPrecheckRequest
 * @return UpgradeDBInstanceMajorVersionPrecheckResponse
 */
UpgradeDBInstanceMajorVersionPrecheckResponse Client::upgradeDBInstanceMajorVersionPrecheck(const UpgradeDBInstanceMajorVersionPrecheckRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradeDBInstanceMajorVersionPrecheckWithOptions(request, runtime);
}

/**
 * @summary 升级RDS实例数据库代理节点的内核版本
 *
 * @param request UpgradeDBProxyInstanceKernelVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeDBProxyInstanceKernelVersionResponse
 */
UpgradeDBProxyInstanceKernelVersionResponse Client::upgradeDBProxyInstanceKernelVersionWithOptions(const UpgradeDBProxyInstanceKernelVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBProxyEngineType()) {
    query["DBProxyEngineType"] = request.getDBProxyEngineType();
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

  if (!!request.hasSwitchTime()) {
    query["SwitchTime"] = request.getSwitchTime();
  }

  if (!!request.hasTargetMinorVersion()) {
    query["TargetMinorVersion"] = request.getTargetMinorVersion();
  }

  if (!!request.hasUpgradeTime()) {
    query["UpgradeTime"] = request.getUpgradeTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradeDBProxyInstanceKernelVersion"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradeDBProxyInstanceKernelVersionResponse>();
}

/**
 * @summary 升级RDS实例数据库代理节点的内核版本
 *
 * @param request UpgradeDBProxyInstanceKernelVersionRequest
 * @return UpgradeDBProxyInstanceKernelVersionResponse
 */
UpgradeDBProxyInstanceKernelVersionResponse Client::upgradeDBProxyInstanceKernelVersion(const UpgradeDBProxyInstanceKernelVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradeDBProxyInstanceKernelVersionWithOptions(request, runtime);
}

/**
 * @summary Precheck for Data Import Job on RDS MySQL Instance with Native Replication
 *
 * @description Precheck for Data Import Job on RDS MySQL Instance with Native Replication
 *
 * @param request ValidateImportTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ValidateImportTaskResponse
 */
ValidateImportTaskResponse Client::validateImportTaskWithOptions(const ValidateImportTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbInstanceId()) {
    query["DbInstanceId"] = request.getDbInstanceId();
  }

  if (!!request.hasEstimatedSize()) {
    query["EstimatedSize"] = request.getEstimatedSize();
  }

  if (!!request.hasHost()) {
    query["Host"] = request.getHost();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSourceInstanceId()) {
    query["SourceInstanceId"] = request.getSourceInstanceId();
  }

  if (!!request.hasSourcePlatform()) {
    query["SourcePlatform"] = request.getSourcePlatform();
  }

  if (!!request.hasStreamPort()) {
    query["StreamPort"] = request.getStreamPort();
  }

  if (!!request.hasUser()) {
    query["User"] = request.getUser();
  }

  if (!!request.hasXtrabackupPath()) {
    query["XtrabackupPath"] = request.getXtrabackupPath();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ValidateImportTask"},
    {"version" , "2014-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ValidateImportTaskResponse>();
}

/**
 * @summary Precheck for Data Import Job on RDS MySQL Instance with Native Replication
 *
 * @description Precheck for Data Import Job on RDS MySQL Instance with Native Replication
 *
 * @param request ValidateImportTaskRequest
 * @return ValidateImportTaskResponse
 */
ValidateImportTaskResponse Client::validateImportTask(const ValidateImportTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return validateImportTaskWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Rds20140815