#include <darabonba/Core.hpp>
#include <alibabacloud/HBase20170115.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::HBase20170115::Models;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace HBase20170115
{

AlibabaCloud::HBase20170115::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"ap-northeast-2-pop" , "hbase.aliyuncs.com"},
    {"ap-south-1" , "hbase.aliyuncs.com"},
    {"ap-southeast-2" , "hbase.aliyuncs.com"},
    {"cn-beijing-finance-1" , "hbase.aliyuncs.com"},
    {"cn-beijing-finance-pop" , "hbase.aliyuncs.com"},
    {"cn-beijing-gov-1" , "hbase.aliyuncs.com"},
    {"cn-beijing-nu16-b01" , "hbase.aliyuncs.com"},
    {"cn-edge-1" , "hbase.aliyuncs.com"},
    {"cn-fujian" , "hbase.aliyuncs.com"},
    {"cn-haidian-cm12-c01" , "hbase.aliyuncs.com"},
    {"cn-hangzhou-bj-b01" , "hbase.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1" , "hbase.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1" , "hbase.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2" , "hbase.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3" , "hbase.aliyuncs.com"},
    {"cn-hangzhou-test-306" , "hbase.aliyuncs.com"},
    {"cn-hongkong-finance-pop" , "hbase.aliyuncs.com"},
    {"cn-qingdao-nebula" , "hbase.aliyuncs.com"},
    {"cn-shanghai-et15-b01" , "hbase.aliyuncs.com"},
    {"cn-shanghai-et2-b01" , "hbase.aliyuncs.com"},
    {"cn-shanghai-inner" , "hbase.aliyuncs.com"},
    {"cn-shanghai-internal-test-1" , "hbase.aliyuncs.com"},
    {"cn-shenzhen-inner" , "hbase.aliyuncs.com"},
    {"cn-shenzhen-st4-d01" , "hbase.aliyuncs.com"},
    {"cn-shenzhen-su18-b01" , "hbase.aliyuncs.com"},
    {"cn-wuhan" , "hbase.aliyuncs.com"},
    {"cn-wulanchabu" , "hbase.aliyuncs.com"},
    {"cn-yushanfang" , "hbase.aliyuncs.com"},
    {"cn-zhangbei" , "hbase.aliyuncs.com"},
    {"cn-zhangbei-na61-b01" , "hbase.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01" , "hbase.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1" , "hbase.aliyuncs.com"},
    {"eu-west-1-oxs" , "hbase.aliyuncs.com"},
    {"rus-west-1-pop" , "hbase.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("hbase", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @param request AddUserHdfsInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddUserHdfsInfoResponse
 */
AddUserHdfsInfoResponse Client::addUserHdfsInfoWithOptions(const AddUserHdfsInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasExtInfo()) {
    query["ExtInfo"] = request.extInfo();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddUserHdfsInfo"},
    {"version" , "2017-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddUserHdfsInfoResponse>();
}

/**
 * @param request AddUserHdfsInfoRequest
 * @return AddUserHdfsInfoResponse
 */
AddUserHdfsInfoResponse Client::addUserHdfsInfo(const AddUserHdfsInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addUserHdfsInfoWithOptions(request, runtime);
}

/**
 * @param request AllocatePublicNetworkAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AllocatePublicNetworkAddressResponse
 */
AllocatePublicNetworkAddressResponse Client::allocatePublicNetworkAddressWithOptions(const AllocatePublicNetworkAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AllocatePublicNetworkAddress"},
    {"version" , "2017-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AllocatePublicNetworkAddressResponse>();
}

/**
 * @param request AllocatePublicNetworkAddressRequest
 * @return AllocatePublicNetworkAddressResponse
 */
AllocatePublicNetworkAddressResponse Client::allocatePublicNetworkAddress(const AllocatePublicNetworkAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return allocatePublicNetworkAddressWithOptions(request, runtime);
}

/**
 * @param request CheckVersionsOfComponentsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckVersionsOfComponentsResponse
 */
CheckVersionsOfComponentsResponse Client::checkVersionsOfComponentsWithOptions(const CheckVersionsOfComponentsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasComponents()) {
    query["Components"] = request.components();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckVersionsOfComponents"},
    {"version" , "2017-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckVersionsOfComponentsResponse>();
}

/**
 * @param request CheckVersionsOfComponentsRequest
 * @return CheckVersionsOfComponentsResponse
 */
CheckVersionsOfComponentsResponse Client::checkVersionsOfComponents(const CheckVersionsOfComponentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkVersionsOfComponentsWithOptions(request, runtime);
}

/**
 * @param request CloseBackupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloseBackupResponse
 */
CloseBackupResponse Client::closeBackupWithOptions(const CloseBackupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloseBackup"},
    {"version" , "2017-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloseBackupResponse>();
}

/**
 * @param request CloseBackupRequest
 * @return CloseBackupResponse
 */
CloseBackupResponse Client::closeBackup(const CloseBackupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return closeBackupWithOptions(request, runtime);
}

/**
 * @param request ConvertClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConvertClusterResponse
 */
ConvertClusterResponse Client::convertClusterWithOptions(const ConvertClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasDuration()) {
    query["Duration"] = request.duration();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPricingCycle()) {
    query["PricingCycle"] = request.pricingCycle();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ConvertCluster"},
    {"version" , "2017-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConvertClusterResponse>();
}

/**
 * @param request ConvertClusterRequest
 * @return ConvertClusterResponse
 */
ConvertClusterResponse Client::convertCluster(const ConvertClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return convertClusterWithOptions(request, runtime);
}

/**
 * @summary 创建实例
 *
 * @param request CreateClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateClusterResponse
 */
CreateClusterResponse Client::createClusterWithOptions(const CreateClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.autoRenew();
  }

  if (!!request.hasBackupId()) {
    query["BackupId"] = request.backupId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasCloudType()) {
    query["CloudType"] = request.cloudType();
  }

  if (!!request.hasClusterName()) {
    query["ClusterName"] = request.clusterName();
  }

  if (!!request.hasColdStorageSize()) {
    query["ColdStorageSize"] = request.coldStorageSize();
  }

  if (!!request.hasCoreDiskQuantity()) {
    query["CoreDiskQuantity"] = request.coreDiskQuantity();
  }

  if (!!request.hasCoreDiskSize()) {
    query["CoreDiskSize"] = request.coreDiskSize();
  }

  if (!!request.hasCoreDiskType()) {
    query["CoreDiskType"] = request.coreDiskType();
  }

  if (!!request.hasCoreInstanceQuantity()) {
    query["CoreInstanceQuantity"] = request.coreInstanceQuantity();
  }

  if (!!request.hasCoreInstanceType()) {
    query["CoreInstanceType"] = request.coreInstanceType();
  }

  if (!!request.hasDbInstanceConnType()) {
    query["DbInstanceConnType"] = request.dbInstanceConnType();
  }

  if (!!request.hasDbInstanceType()) {
    query["DbInstanceType"] = request.dbInstanceType();
  }

  if (!!request.hasDbType()) {
    query["DbType"] = request.dbType();
  }

  if (!!request.hasDepMode()) {
    query["DepMode"] = request.depMode();
  }

  if (!!request.hasDuration()) {
    query["Duration"] = request.duration();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.engine();
  }

  if (!!request.hasEngineVersion()) {
    query["EngineVersion"] = request.engineVersion();
  }

  if (!!request.hasIsColdStorage()) {
    query["IsColdStorage"] = request.isColdStorage();
  }

  if (!!request.hasMasterInstanceType()) {
    query["MasterInstanceType"] = request.masterInstanceType();
  }

  if (!!request.hasNetType()) {
    query["NetType"] = request.netType();
  }

  if (!!request.hasPayType()) {
    query["PayType"] = request.payType();
  }

  if (!!request.hasPricingCycle()) {
    query["PricingCycle"] = request.pricingCycle();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRestoreTime()) {
    query["RestoreTime"] = request.restoreTime();
  }

  if (!!request.hasSecurityIPList()) {
    query["SecurityIPList"] = request.securityIPList();
  }

  if (!!request.hasSrcDBInstanceId()) {
    query["SrcDBInstanceId"] = request.srcDBInstanceId();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.vSwitchId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCluster"},
    {"version" , "2017-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateClusterResponse>();
}

/**
 * @summary 创建实例
 *
 * @param request CreateClusterRequest
 * @return CreateClusterResponse
 */
CreateClusterResponse Client::createCluster(const CreateClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createClusterWithOptions(request, runtime);
}

/**
 * @param request CreateGlobalResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateGlobalResourceResponse
 */
CreateGlobalResourceResponse Client::createGlobalResourceWithOptions(const CreateGlobalResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceName()) {
    query["ResourceName"] = request.resourceName();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateGlobalResource"},
    {"version" , "2017-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateGlobalResourceResponse>();
}

/**
 * @param request CreateGlobalResourceRequest
 * @return CreateGlobalResourceResponse
 */
CreateGlobalResourceResponse Client::createGlobalResource(const CreateGlobalResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createGlobalResourceWithOptions(request, runtime);
}

/**
 * @param request CreateHbaseSlbServerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateHbaseSlbServerResponse
 */
CreateHbaseSlbServerResponse Client::createHbaseSlbServerWithOptions(const CreateHbaseSlbServerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSlbServer()) {
    query["SlbServer"] = request.slbServer();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateHbaseSlbServer"},
    {"version" , "2017-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateHbaseSlbServerResponse>();
}

/**
 * @param request CreateHbaseSlbServerRequest
 * @return CreateHbaseSlbServerResponse
 */
CreateHbaseSlbServerResponse Client::createHbaseSlbServer(const CreateHbaseSlbServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createHbaseSlbServerWithOptions(request, runtime);
}

/**
 * @summary 创建订阅
 *
 * @param request CreateSubscriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSubscriptionResponse
 */
CreateSubscriptionResponse Client::createSubscriptionWithOptions(const CreateSubscriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDestinationInstanceId()) {
    query["DestinationInstanceId"] = request.destinationInstanceId();
  }

  if (!!request.hasDestinationInstanceRegionId()) {
    query["DestinationInstanceRegionId"] = request.destinationInstanceRegionId();
  }

  if (!!request.hasExtraContext()) {
    query["ExtraContext"] = request.extraContext();
  }

  if (!!request.hasMapping()) {
    query["Mapping"] = request.mapping();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSlbServer()) {
    query["SlbServer"] = request.slbServer();
  }

  if (!!request.hasSourceInstanceId()) {
    query["SourceInstanceId"] = request.sourceInstanceId();
  }

  if (!!request.hasSourceInstanceRegionId()) {
    query["SourceInstanceRegionId"] = request.sourceInstanceRegionId();
  }

  if (!!request.hasSubscriptionDescription()) {
    query["SubscriptionDescription"] = request.subscriptionDescription();
  }

  if (!!request.hasSubscriptionType()) {
    query["SubscriptionType"] = request.subscriptionType();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSubscription"},
    {"version" , "2017-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSubscriptionResponse>();
}

/**
 * @summary 创建订阅
 *
 * @param request CreateSubscriptionRequest
 * @return CreateSubscriptionResponse
 */
CreateSubscriptionResponse Client::createSubscription(const CreateSubscriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSubscriptionWithOptions(request, runtime);
}

/**
 * @param request DeleteClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteClusterResponse
 */
DeleteClusterResponse Client::deleteClusterWithOptions(const DeleteClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCluster"},
    {"version" , "2017-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteClusterResponse>();
}

/**
 * @param request DeleteClusterRequest
 * @return DeleteClusterResponse
 */
DeleteClusterResponse Client::deleteCluster(const DeleteClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteClusterWithOptions(request, runtime);
}

/**
 * @param request DeleteGlobalResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteGlobalResourceResponse
 */
DeleteGlobalResourceResponse Client::deleteGlobalResourceWithOptions(const DeleteGlobalResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceName()) {
    query["ResourceName"] = request.resourceName();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteGlobalResource"},
    {"version" , "2017-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteGlobalResourceResponse>();
}

/**
 * @param request DeleteGlobalResourceRequest
 * @return DeleteGlobalResourceResponse
 */
DeleteGlobalResourceResponse Client::deleteGlobalResource(const DeleteGlobalResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteGlobalResourceWithOptions(request, runtime);
}

/**
 * @param request DeleteHbaseSlbServerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteHbaseSlbServerResponse
 */
DeleteHbaseSlbServerResponse Client::deleteHbaseSlbServerWithOptions(const DeleteHbaseSlbServerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSlbServer()) {
    query["SlbServer"] = request.slbServer();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteHbaseSlbServer"},
    {"version" , "2017-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteHbaseSlbServerResponse>();
}

/**
 * @param request DeleteHbaseSlbServerRequest
 * @return DeleteHbaseSlbServerResponse
 */
DeleteHbaseSlbServerResponse Client::deleteHbaseSlbServer(const DeleteHbaseSlbServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteHbaseSlbServerWithOptions(request, runtime);
}

/**
 * @param request DeleteServerlessInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteServerlessInstanceResponse
 */
DeleteServerlessInstanceResponse Client::deleteServerlessInstanceWithOptions(const DeleteServerlessInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteServerlessInstance"},
    {"version" , "2017-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteServerlessInstanceResponse>();
}

/**
 * @param request DeleteServerlessInstanceRequest
 * @return DeleteServerlessInstanceResponse
 */
DeleteServerlessInstanceResponse Client::deleteServerlessInstance(const DeleteServerlessInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteServerlessInstanceWithOptions(request, runtime);
}

/**
 * @param request DeleteUserHdfsInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUserHdfsInfoResponse
 */
DeleteUserHdfsInfoResponse Client::deleteUserHdfsInfoWithOptions(const DeleteUserHdfsInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasNameService()) {
    query["NameService"] = request.nameService();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteUserHdfsInfo"},
    {"version" , "2017-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteUserHdfsInfoResponse>();
}

/**
 * @param request DeleteUserHdfsInfoRequest
 * @return DeleteUserHdfsInfoResponse
 */
DeleteUserHdfsInfoResponse Client::deleteUserHdfsInfo(const DeleteUserHdfsInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteUserHdfsInfoWithOptions(request, runtime);
}

/**
 * @param request DescribeBackupPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBackupPolicyResponse
 */
DescribeBackupPolicyResponse Client::describeBackupPolicyWithOptions(const DescribeBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBackupPolicy"},
    {"version" , "2017-01-15"},
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
 * @param request DescribeBackupPolicyRequest
 * @return DescribeBackupPolicyResponse
 */
DescribeBackupPolicyResponse Client::describeBackupPolicy(const DescribeBackupPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupPolicyWithOptions(request, runtime);
}

/**
 * @param request DescribeBackupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBackupsResponse
 */
DescribeBackupsResponse Client::describeBackupsWithOptions(const DescribeBackupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupId()) {
    query["BackupId"] = request.backupId();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasEndTimeUTC()) {
    query["EndTimeUTC"] = request.endTimeUTC();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
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

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasStartTimeUTC()) {
    query["StartTimeUTC"] = request.startTimeUTC();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBackups"},
    {"version" , "2017-01-15"},
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
 * @param request DescribeBackupsRequest
 * @return DescribeBackupsResponse
 */
DescribeBackupsResponse Client::describeBackups(const DescribeBackupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupsWithOptions(request, runtime);
}

/**
 * @param request DescribeClusterAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeClusterAttributeResponse
 */
DescribeClusterAttributeResponse Client::describeClusterAttributeWithOptions(const DescribeClusterAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeClusterAttribute"},
    {"version" , "2017-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeClusterAttributeResponse>();
}

/**
 * @param request DescribeClusterAttributeRequest
 * @return DescribeClusterAttributeResponse
 */
DescribeClusterAttributeResponse Client::describeClusterAttribute(const DescribeClusterAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeClusterAttributeWithOptions(request, runtime);
}

/**
 * @param request DescribeClusterConnectAddrsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeClusterConnectAddrsResponse
 */
DescribeClusterConnectAddrsResponse Client::describeClusterConnectAddrsWithOptions(const DescribeClusterConnectAddrsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeClusterConnectAddrs"},
    {"version" , "2017-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeClusterConnectAddrsResponse>();
}

/**
 * @param request DescribeClusterConnectAddrsRequest
 * @return DescribeClusterConnectAddrsResponse
 */
DescribeClusterConnectAddrsResponse Client::describeClusterConnectAddrs(const DescribeClusterConnectAddrsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeClusterConnectAddrsWithOptions(request, runtime);
}

/**
 * @param request DescribeClusterListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeClusterListResponse
 */
DescribeClusterListResponse Client::describeClusterListWithOptions(const DescribeClusterListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasClusterName()) {
    query["ClusterName"] = request.clusterName();
  }

  if (!!request.hasDbType()) {
    query["DbType"] = request.dbType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
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

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasStatusList()) {
    query["StatusList"] = request.statusList();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeClusterList"},
    {"version" , "2017-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeClusterListResponse>();
}

/**
 * @param request DescribeClusterListRequest
 * @return DescribeClusterListResponse
 */
DescribeClusterListResponse Client::describeClusterList(const DescribeClusterListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeClusterListWithOptions(request, runtime);
}

/**
 * @param request DescribeClusterModelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeClusterModelResponse
 */
DescribeClusterModelResponse Client::describeClusterModelWithOptions(const DescribeClusterModelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeClusterModel"},
    {"version" , "2017-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeClusterModelResponse>();
}

/**
 * @param request DescribeClusterModelRequest
 * @return DescribeClusterModelResponse
 */
DescribeClusterModelResponse Client::describeClusterModel(const DescribeClusterModelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeClusterModelWithOptions(request, runtime);
}

/**
 * @param request DescribeClusterWhiteListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeClusterWhiteListResponse
 */
DescribeClusterWhiteListResponse Client::describeClusterWhiteListWithOptions(const DescribeClusterWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeClusterWhiteList"},
    {"version" , "2017-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeClusterWhiteListResponse>();
}

/**
 * @param request DescribeClusterWhiteListRequest
 * @return DescribeClusterWhiteListResponse
 */
DescribeClusterWhiteListResponse Client::describeClusterWhiteList(const DescribeClusterWhiteListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeClusterWhiteListWithOptions(request, runtime);
}

/**
 * @param request DescribeColdStorageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeColdStorageResponse
 */
DescribeColdStorageResponse Client::describeColdStorageWithOptions(const DescribeColdStorageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeColdStorage"},
    {"version" , "2017-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeColdStorageResponse>();
}

/**
 * @param request DescribeColdStorageRequest
 * @return DescribeColdStorageResponse
 */
DescribeColdStorageResponse Client::describeColdStorage(const DescribeColdStorageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeColdStorageWithOptions(request, runtime);
}

/**
 * @param request DescribeMultiModDbAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMultiModDbAttributeResponse
 */
DescribeMultiModDbAttributeResponse Client::describeMultiModDbAttributeWithOptions(const DescribeMultiModDbAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMultiModDbAttribute"},
    {"version" , "2017-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMultiModDbAttributeResponse>();
}

/**
 * @param request DescribeMultiModDbAttributeRequest
 * @return DescribeMultiModDbAttributeResponse
 */
DescribeMultiModDbAttributeResponse Client::describeMultiModDbAttribute(const DescribeMultiModDbAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMultiModDbAttributeWithOptions(request, runtime);
}

/**
 * @param request DescribeRdsVSwitchsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRdsVSwitchsResponse
 */
DescribeRdsVSwitchsResponse Client::describeRdsVSwitchsWithOptions(const DescribeRdsVSwitchsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRdsVSwitchs"},
    {"version" , "2017-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRdsVSwitchsResponse>();
}

/**
 * @param request DescribeRdsVSwitchsRequest
 * @return DescribeRdsVSwitchsResponse
 */
DescribeRdsVSwitchsResponse Client::describeRdsVSwitchs(const DescribeRdsVSwitchsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRdsVSwitchsWithOptions(request, runtime);
}

/**
 * @param request DescribeRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegionsWithOptions(const DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRegions"},
    {"version" , "2017-01-15"},
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
 * @param request DescribeRegionsRequest
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions(const DescribeRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRegionsWithOptions(request, runtime);
}

/**
 * @param request DescribeServerlessInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeServerlessInstanceResponse
 */
DescribeServerlessInstanceResponse Client::describeServerlessInstanceWithOptions(const DescribeServerlessInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeServerlessInstance"},
    {"version" , "2017-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeServerlessInstanceResponse>();
}

/**
 * @param request DescribeServerlessInstanceRequest
 * @return DescribeServerlessInstanceResponse
 */
DescribeServerlessInstanceResponse Client::describeServerlessInstance(const DescribeServerlessInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeServerlessInstanceWithOptions(request, runtime);
}

/**
 * @summary 查询订阅进度
 *
 * @param request DescribeSubscriptionInitializeProgressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSubscriptionInitializeProgressResponse
 */
DescribeSubscriptionInitializeProgressResponse Client::describeSubscriptionInitializeProgressWithOptions(const DescribeSubscriptionInitializeProgressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
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

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSubscriptionId()) {
    query["SubscriptionId"] = request.subscriptionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSubscriptionInitializeProgress"},
    {"version" , "2017-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSubscriptionInitializeProgressResponse>();
}

/**
 * @summary 查询订阅进度
 *
 * @param request DescribeSubscriptionInitializeProgressRequest
 * @return DescribeSubscriptionInitializeProgressResponse
 */
DescribeSubscriptionInitializeProgressResponse Client::describeSubscriptionInitializeProgress(const DescribeSubscriptionInitializeProgressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSubscriptionInitializeProgressWithOptions(request, runtime);
}

/**
 * @summary 查询订阅
 *
 * @param request DescribeSubscriptionPerformanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSubscriptionPerformanceResponse
 */
DescribeSubscriptionPerformanceResponse Client::describeSubscriptionPerformanceWithOptions(const DescribeSubscriptionPerformanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasKey()) {
    query["Key"] = request.key();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSourceInstanceId()) {
    query["SourceInstanceId"] = request.sourceInstanceId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasSubscriptionId()) {
    query["SubscriptionId"] = request.subscriptionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSubscriptionPerformance"},
    {"version" , "2017-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSubscriptionPerformanceResponse>();
}

/**
 * @summary 查询订阅
 *
 * @param request DescribeSubscriptionPerformanceRequest
 * @return DescribeSubscriptionPerformanceResponse
 */
DescribeSubscriptionPerformanceResponse Client::describeSubscriptionPerformance(const DescribeSubscriptionPerformanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSubscriptionPerformanceWithOptions(request, runtime);
}

/**
 * @summary 查询订阅权限
 *
 * @param request DescribeSubscriptionPermissionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSubscriptionPermissionResponse
 */
DescribeSubscriptionPermissionResponse Client::describeSubscriptionPermissionWithOptions(const DescribeSubscriptionPermissionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSubscriptionPermission"},
    {"version" , "2017-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSubscriptionPermissionResponse>();
}

/**
 * @summary 查询订阅权限
 *
 * @param request DescribeSubscriptionPermissionRequest
 * @return DescribeSubscriptionPermissionResponse
 */
DescribeSubscriptionPermissionResponse Client::describeSubscriptionPermission(const DescribeSubscriptionPermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSubscriptionPermissionWithOptions(request, runtime);
}

/**
 * @summary 查询订阅列表
 *
 * @param request DescribeSubscriptionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSubscriptionsResponse
 */
DescribeSubscriptionsResponse Client::describeSubscriptionsWithOptions(const DescribeSubscriptionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
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

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSubscriptionId()) {
    query["SubscriptionId"] = request.subscriptionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSubscriptions"},
    {"version" , "2017-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSubscriptionsResponse>();
}

/**
 * @summary 查询订阅列表
 *
 * @param request DescribeSubscriptionsRequest
 * @return DescribeSubscriptionsResponse
 */
DescribeSubscriptionsResponse Client::describeSubscriptions(const DescribeSubscriptionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSubscriptionsWithOptions(request, runtime);
}

/**
 * @param request EnableServerlessPublicConnectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableServerlessPublicConnectionResponse
 */
EnableServerlessPublicConnectionResponse Client::enableServerlessPublicConnectionWithOptions(const EnableServerlessPublicConnectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableServerlessPublicConnection"},
    {"version" , "2017-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableServerlessPublicConnectionResponse>();
}

/**
 * @param request EnableServerlessPublicConnectionRequest
 * @return EnableServerlessPublicConnectionResponse
 */
EnableServerlessPublicConnectionResponse Client::enableServerlessPublicConnection(const EnableServerlessPublicConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableServerlessPublicConnectionWithOptions(request, runtime);
}

/**
 * @param request GetMultimodeCmsUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMultimodeCmsUrlResponse
 */
GetMultimodeCmsUrlResponse Client::getMultimodeCmsUrlWithOptions(const GetMultimodeCmsUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMultimodeCmsUrl"},
    {"version" , "2017-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMultimodeCmsUrlResponse>();
}

/**
 * @param request GetMultimodeCmsUrlRequest
 * @return GetMultimodeCmsUrlResponse
 */
GetMultimodeCmsUrlResponse Client::getMultimodeCmsUrl(const GetMultimodeCmsUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMultimodeCmsUrlWithOptions(request, runtime);
}

/**
 * @param request ListClusterServiceConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListClusterServiceConfigResponse
 */
ListClusterServiceConfigResponse Client::listClusterServiceConfigWithOptions(const ListClusterServiceConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListClusterServiceConfig"},
    {"version" , "2017-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListClusterServiceConfigResponse>();
}

/**
 * @param request ListClusterServiceConfigRequest
 * @return ListClusterServiceConfigResponse
 */
ListClusterServiceConfigResponse Client::listClusterServiceConfig(const ListClusterServiceConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listClusterServiceConfigWithOptions(request, runtime);
}

/**
 * @param request ListClusterServiceConfigHistoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListClusterServiceConfigHistoryResponse
 */
ListClusterServiceConfigHistoryResponse Client::listClusterServiceConfigHistoryWithOptions(const ListClusterServiceConfigHistoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
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

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListClusterServiceConfigHistory"},
    {"version" , "2017-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListClusterServiceConfigHistoryResponse>();
}

/**
 * @param request ListClusterServiceConfigHistoryRequest
 * @return ListClusterServiceConfigHistoryResponse
 */
ListClusterServiceConfigHistoryResponse Client::listClusterServiceConfigHistory(const ListClusterServiceConfigHistoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listClusterServiceConfigHistoryWithOptions(request, runtime);
}

/**
 * @summary 查询hbase实例列表
 *
 * @param request ListHbaseInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHbaseInstancesResponse
 */
ListHbaseInstancesResponse Client::listHbaseInstancesWithOptions(const ListHbaseInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListHbaseInstances"},
    {"version" , "2017-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHbaseInstancesResponse>();
}

/**
 * @summary 查询hbase实例列表
 *
 * @param request ListHbaseInstancesRequest
 * @return ListHbaseInstancesResponse
 */
ListHbaseInstancesResponse Client::listHbaseInstances(const ListHbaseInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHbaseInstancesWithOptions(request, runtime);
}

/**
 * @param request ListTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagResources"},
    {"version" , "2017-01-15"},
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
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @param request ModifyBackupPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyBackupPolicyResponse
 */
ModifyBackupPolicyResponse Client::modifyBackupPolicyWithOptions(const ModifyBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPreferredBackupEndTimeUTC()) {
    query["PreferredBackupEndTimeUTC"] = request.preferredBackupEndTimeUTC();
  }

  if (!!request.hasPreferredBackupPeriod()) {
    query["PreferredBackupPeriod"] = request.preferredBackupPeriod();
  }

  if (!!request.hasPreferredBackupStartTimeUTC()) {
    query["PreferredBackupStartTimeUTC"] = request.preferredBackupStartTimeUTC();
  }

  if (!!request.hasPreferredBackupTime()) {
    query["PreferredBackupTime"] = request.preferredBackupTime();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyBackupPolicy"},
    {"version" , "2017-01-15"},
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
 * @param request ModifyBackupPolicyRequest
 * @return ModifyBackupPolicyResponse
 */
ModifyBackupPolicyResponse Client::modifyBackupPolicy(const ModifyBackupPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyBackupPolicyWithOptions(request, runtime);
}

/**
 * @param request ModifyClusterNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyClusterNameResponse
 */
ModifyClusterNameResponse Client::modifyClusterNameWithOptions(const ModifyClusterNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasClusterName()) {
    query["ClusterName"] = request.clusterName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyClusterName"},
    {"version" , "2017-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyClusterNameResponse>();
}

/**
 * @param request ModifyClusterNameRequest
 * @return ModifyClusterNameResponse
 */
ModifyClusterNameResponse Client::modifyClusterName(const ModifyClusterNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyClusterNameWithOptions(request, runtime);
}

/**
 * @param request ModifyClusterNetTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyClusterNetTypeResponse
 */
ModifyClusterNetTypeResponse Client::modifyClusterNetTypeWithOptions(const ModifyClusterNetTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasNetType()) {
    query["NetType"] = request.netType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.vSwitchId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyClusterNetType"},
    {"version" , "2017-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyClusterNetTypeResponse>();
}

/**
 * @param request ModifyClusterNetTypeRequest
 * @return ModifyClusterNetTypeResponse
 */
ModifyClusterNetTypeResponse Client::modifyClusterNetType(const ModifyClusterNetTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyClusterNetTypeWithOptions(request, runtime);
}

/**
 * @param request ModifyClusterSecurityIpListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyClusterSecurityIpListResponse
 */
ModifyClusterSecurityIpListResponse Client::modifyClusterSecurityIpListWithOptions(const ModifyClusterSecurityIpListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSecurityIpList()) {
    query["SecurityIpList"] = request.securityIpList();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyClusterSecurityIpList"},
    {"version" , "2017-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyClusterSecurityIpListResponse>();
}

/**
 * @param request ModifyClusterSecurityIpListRequest
 * @return ModifyClusterSecurityIpListResponse
 */
ModifyClusterSecurityIpListResponse Client::modifyClusterSecurityIpList(const ModifyClusterSecurityIpListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyClusterSecurityIpListWithOptions(request, runtime);
}

/**
 * @param request ModifyClusterServiceConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyClusterServiceConfigResponse
 */
ModifyClusterServiceConfigResponse Client::modifyClusterServiceConfigWithOptions(const ModifyClusterServiceConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasParameters()) {
    query["Parameters"] = request.parameters();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasRestart()) {
    query["Restart"] = request.restart();
  }

  if (!!request.hasValue()) {
    query["Value"] = request.value();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyClusterServiceConfig"},
    {"version" , "2017-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyClusterServiceConfigResponse>();
}

/**
 * @param request ModifyClusterServiceConfigRequest
 * @return ModifyClusterServiceConfigResponse
 */
ModifyClusterServiceConfigResponse Client::modifyClusterServiceConfig(const ModifyClusterServiceConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyClusterServiceConfigWithOptions(request, runtime);
}

/**
 * @param request ModifyHasRootPasswordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyHasRootPasswordResponse
 */
ModifyHasRootPasswordResponse Client::modifyHasRootPasswordWithOptions(const ModifyHasRootPasswordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasHasPassword()) {
    query["HasPassword"] = request.hasPassword();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyHasRootPassword"},
    {"version" , "2017-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyHasRootPasswordResponse>();
}

/**
 * @param request ModifyHasRootPasswordRequest
 * @return ModifyHasRootPasswordResponse
 */
ModifyHasRootPasswordResponse Client::modifyHasRootPassword(const ModifyHasRootPasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyHasRootPasswordWithOptions(request, runtime);
}

/**
 * @param request ModifyRestartClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyRestartClusterResponse
 */
ModifyRestartClusterResponse Client::modifyRestartClusterWithOptions(const ModifyRestartClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasComponents()) {
    query["Components"] = request.components();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyRestartCluster"},
    {"version" , "2017-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyRestartClusterResponse>();
}

/**
 * @param request ModifyRestartClusterRequest
 * @return ModifyRestartClusterResponse
 */
ModifyRestartClusterResponse Client::modifyRestartCluster(const ModifyRestartClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyRestartClusterWithOptions(request, runtime);
}

/**
 * @param request ModifyRollbackHasForHbaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyRollbackHasForHbaseResponse
 */
ModifyRollbackHasForHbaseResponse Client::modifyRollbackHasForHbaseWithOptions(const ModifyRollbackHasForHbaseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyRollbackHasForHbase"},
    {"version" , "2017-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyRollbackHasForHbaseResponse>();
}

/**
 * @param request ModifyRollbackHasForHbaseRequest
 * @return ModifyRollbackHasForHbaseResponse
 */
ModifyRollbackHasForHbaseResponse Client::modifyRollbackHasForHbase(const ModifyRollbackHasForHbaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyRollbackHasForHbaseWithOptions(request, runtime);
}

/**
 * @summary 更新订阅描述
 *
 * @param request ModifySubscriptionDescriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySubscriptionDescriptionResponse
 */
ModifySubscriptionDescriptionResponse Client::modifySubscriptionDescriptionWithOptions(const ModifySubscriptionDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSubscriptionDescription()) {
    query["SubscriptionDescription"] = request.subscriptionDescription();
  }

  if (!!request.hasSubscriptionId()) {
    query["SubscriptionId"] = request.subscriptionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySubscriptionDescription"},
    {"version" , "2017-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySubscriptionDescriptionResponse>();
}

/**
 * @summary 更新订阅描述
 *
 * @param request ModifySubscriptionDescriptionRequest
 * @return ModifySubscriptionDescriptionResponse
 */
ModifySubscriptionDescriptionResponse Client::modifySubscriptionDescription(const ModifySubscriptionDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySubscriptionDescriptionWithOptions(request, runtime);
}

/**
 * @summary 更新订阅
 *
 * @param request ModifySubscriptionMappingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySubscriptionMappingResponse
 */
ModifySubscriptionMappingResponse Client::modifySubscriptionMappingWithOptions(const ModifySubscriptionMappingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMapping()) {
    query["Mapping"] = request.mapping();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSubscriptionId()) {
    query["SubscriptionId"] = request.subscriptionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySubscriptionMapping"},
    {"version" , "2017-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySubscriptionMappingResponse>();
}

/**
 * @summary 更新订阅
 *
 * @param request ModifySubscriptionMappingRequest
 * @return ModifySubscriptionMappingResponse
 */
ModifySubscriptionMappingResponse Client::modifySubscriptionMapping(const ModifySubscriptionMappingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySubscriptionMappingWithOptions(request, runtime);
}

/**
 * @summary 更新订阅权限
 *
 * @param request ModifySubscriptionPermissionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySubscriptionPermissionResponse
 */
ModifySubscriptionPermissionResponse Client::modifySubscriptionPermissionWithOptions(const ModifySubscriptionPermissionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySubscriptionPermission"},
    {"version" , "2017-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySubscriptionPermissionResponse>();
}

/**
 * @summary 更新订阅权限
 *
 * @param request ModifySubscriptionPermissionRequest
 * @return ModifySubscriptionPermissionResponse
 */
ModifySubscriptionPermissionResponse Client::modifySubscriptionPermission(const ModifySubscriptionPermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySubscriptionPermissionWithOptions(request, runtime);
}

/**
 * @param request ModifyUIProxyAccountPasswordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyUIProxyAccountPasswordResponse
 */
ModifyUIProxyAccountPasswordResponse Client::modifyUIProxyAccountPasswordWithOptions(const ModifyUIProxyAccountPasswordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.accountName();
  }

  if (!!request.hasAccountPassword()) {
    query["AccountPassword"] = request.accountPassword();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyUIProxyAccountPassword"},
    {"version" , "2017-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyUIProxyAccountPasswordResponse>();
}

/**
 * @param request ModifyUIProxyAccountPasswordRequest
 * @return ModifyUIProxyAccountPasswordResponse
 */
ModifyUIProxyAccountPasswordResponse Client::modifyUIProxyAccountPassword(const ModifyUIProxyAccountPasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyUIProxyAccountPasswordWithOptions(request, runtime);
}

/**
 * @param request ModifyUpgradeToHasForHbaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyUpgradeToHasForHbaseResponse
 */
ModifyUpgradeToHasForHbaseResponse Client::modifyUpgradeToHasForHbaseWithOptions(const ModifyUpgradeToHasForHbaseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasHasPassword()) {
    query["HasPassword"] = request.hasPassword();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyUpgradeToHasForHbase"},
    {"version" , "2017-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyUpgradeToHasForHbaseResponse>();
}

/**
 * @param request ModifyUpgradeToHasForHbaseRequest
 * @return ModifyUpgradeToHasForHbaseResponse
 */
ModifyUpgradeToHasForHbaseResponse Client::modifyUpgradeToHasForHbase(const ModifyUpgradeToHasForHbaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyUpgradeToHasForHbaseWithOptions(request, runtime);
}

/**
 * @param request MultimodAddComponentsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MultimodAddComponentsResponse
 */
MultimodAddComponentsResponse Client::multimodAddComponentsWithOptions(const MultimodAddComponentsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasComponents()) {
    query["Components"] = request.components();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MultimodAddComponents"},
    {"version" , "2017-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MultimodAddComponentsResponse>();
}

/**
 * @param request MultimodAddComponentsRequest
 * @return MultimodAddComponentsResponse
 */
MultimodAddComponentsResponse Client::multimodAddComponents(const MultimodAddComponentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return multimodAddComponentsWithOptions(request, runtime);
}

/**
 * @param request OpenBackupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OpenBackupResponse
 */
OpenBackupResponse Client::openBackupWithOptions(const OpenBackupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OpenBackup"},
    {"version" , "2017-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OpenBackupResponse>();
}

/**
 * @param request OpenBackupRequest
 * @return OpenBackupResponse
 */
OpenBackupResponse Client::openBackup(const OpenBackupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return openBackupWithOptions(request, runtime);
}

/**
 * @param request QueryHBaseHaDBRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryHBaseHaDBResponse
 */
QueryHBaseHaDBResponse Client::queryHBaseHaDBWithOptions(const QueryHBaseHaDBRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryHBaseHaDB"},
    {"version" , "2017-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryHBaseHaDBResponse>();
}

/**
 * @param request QueryHBaseHaDBRequest
 * @return QueryHBaseHaDBResponse
 */
QueryHBaseHaDBResponse Client::queryHBaseHaDB(const QueryHBaseHaDBRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryHBaseHaDBWithOptions(request, runtime);
}

/**
 * @param request QuerySparkRelateHBaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySparkRelateHBaseResponse
 */
QuerySparkRelateHBaseResponse Client::querySparkRelateHBaseWithOptions(const QuerySparkRelateHBaseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QuerySparkRelateHBase"},
    {"version" , "2017-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySparkRelateHBaseResponse>();
}

/**
 * @param request QuerySparkRelateHBaseRequest
 * @return QuerySparkRelateHBaseResponse
 */
QuerySparkRelateHBaseResponse Client::querySparkRelateHBase(const QuerySparkRelateHBaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySparkRelateHBaseWithOptions(request, runtime);
}

/**
 * @param request QueryXpackRelatedDBRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryXpackRelatedDBResponse
 */
QueryXpackRelatedDBResponse Client::queryXpackRelatedDBWithOptions(const QueryXpackRelatedDBRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRelateDbType()) {
    query["RelateDbType"] = request.relateDbType();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryXpackRelatedDB"},
    {"version" , "2017-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryXpackRelatedDBResponse>();
}

/**
 * @param request QueryXpackRelatedDBRequest
 * @return QueryXpackRelatedDBResponse
 */
QueryXpackRelatedDBResponse Client::queryXpackRelatedDB(const QueryXpackRelatedDBRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryXpackRelatedDBWithOptions(request, runtime);
}

/**
 * @param request RelateDbForHBaseHaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RelateDbForHBaseHaResponse
 */
RelateDbForHBaseHaResponse Client::relateDbForHBaseHaWithOptions(const RelateDbForHBaseHaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasHaActive()) {
    query["HaActive"] = request.haActive();
  }

  if (!!request.hasHaActiveClusterKey()) {
    query["HaActiveClusterKey"] = request.haActiveClusterKey();
  }

  if (!!request.hasHaActiveDBType()) {
    query["HaActiveDBType"] = request.haActiveDBType();
  }

  if (!!request.hasHaActiveHbaseFsDir()) {
    query["HaActiveHbaseFsDir"] = request.haActiveHbaseFsDir();
  }

  if (!!request.hasHaActiveHdfsUri()) {
    query["HaActiveHdfsUri"] = request.haActiveHdfsUri();
  }

  if (!!request.hasHaActivePassword()) {
    query["HaActivePassword"] = request.haActivePassword();
  }

  if (!!request.hasHaActiveUser()) {
    query["HaActiveUser"] = request.haActiveUser();
  }

  if (!!request.hasHaActiveVersion()) {
    query["HaActiveVersion"] = request.haActiveVersion();
  }

  if (!!request.hasHaMigrateType()) {
    query["HaMigrateType"] = request.haMigrateType();
  }

  if (!!request.hasHaStandby()) {
    query["HaStandby"] = request.haStandby();
  }

  if (!!request.hasHaStandbyClusterKey()) {
    query["HaStandbyClusterKey"] = request.haStandbyClusterKey();
  }

  if (!!request.hasHaStandbyDBType()) {
    query["HaStandbyDBType"] = request.haStandbyDBType();
  }

  if (!!request.hasHaStandbyHbaseFsDir()) {
    query["HaStandbyHbaseFsDir"] = request.haStandbyHbaseFsDir();
  }

  if (!!request.hasHaStandbyHdfsUri()) {
    query["HaStandbyHdfsUri"] = request.haStandbyHdfsUri();
  }

  if (!!request.hasHaStandbyPassword()) {
    query["HaStandbyPassword"] = request.haStandbyPassword();
  }

  if (!!request.hasHaStandbyUser()) {
    query["HaStandbyUser"] = request.haStandbyUser();
  }

  if (!!request.hasHaStandbyVersion()) {
    query["HaStandbyVersion"] = request.haStandbyVersion();
  }

  if (!!request.hasHaTables()) {
    query["HaTables"] = request.haTables();
  }

  if (!!request.hasIsActiveStandard()) {
    query["IsActiveStandard"] = request.isActiveStandard();
  }

  if (!!request.hasIsStandbyStandard()) {
    query["IsStandbyStandard"] = request.isStandbyStandard();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RelateDbForHBaseHa"},
    {"version" , "2017-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RelateDbForHBaseHaResponse>();
}

/**
 * @param request RelateDbForHBaseHaRequest
 * @return RelateDbForHBaseHaResponse
 */
RelateDbForHBaseHaResponse Client::relateDbForHBaseHa(const RelateDbForHBaseHaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return relateDbForHBaseHaWithOptions(request, runtime);
}

/**
 * @param request ReleasePublicNetworkAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleasePublicNetworkAddressResponse
 */
ReleasePublicNetworkAddressResponse Client::releasePublicNetworkAddressWithOptions(const ReleasePublicNetworkAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReleasePublicNetworkAddress"},
    {"version" , "2017-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReleasePublicNetworkAddressResponse>();
}

/**
 * @param request ReleasePublicNetworkAddressRequest
 * @return ReleasePublicNetworkAddressResponse
 */
ReleasePublicNetworkAddressResponse Client::releasePublicNetworkAddress(const ReleasePublicNetworkAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return releasePublicNetworkAddressWithOptions(request, runtime);
}

/**
 * @summary 是否订阅
 *
 * @param request ReleaseSubscriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleaseSubscriptionResponse
 */
ReleaseSubscriptionResponse Client::releaseSubscriptionWithOptions(const ReleaseSubscriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSubscriptionId()) {
    query["SubscriptionId"] = request.subscriptionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReleaseSubscription"},
    {"version" , "2017-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReleaseSubscriptionResponse>();
}

/**
 * @summary 是否订阅
 *
 * @param request ReleaseSubscriptionRequest
 * @return ReleaseSubscriptionResponse
 */
ReleaseSubscriptionResponse Client::releaseSubscription(const ReleaseSubscriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return releaseSubscriptionWithOptions(request, runtime);
}

/**
 * @param request RenewClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RenewClusterResponse
 */
RenewClusterResponse Client::renewClusterWithOptions(const RenewClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasDuration()) {
    query["Duration"] = request.duration();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPricingCycle()) {
    query["PricingCycle"] = request.pricingCycle();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RenewCluster"},
    {"version" , "2017-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RenewClusterResponse>();
}

/**
 * @param request RenewClusterRequest
 * @return RenewClusterResponse
 */
RenewClusterResponse Client::renewCluster(const RenewClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return renewClusterWithOptions(request, runtime);
}

/**
 * @param request ResizeClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResizeClusterResponse
 */
ResizeClusterResponse Client::resizeClusterWithOptions(const ResizeClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasCloudType()) {
    query["CloudType"] = request.cloudType();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasColdStorageSize()) {
    query["ColdStorageSize"] = request.coldStorageSize();
  }

  if (!!request.hasCoreDiskQuantity()) {
    query["CoreDiskQuantity"] = request.coreDiskQuantity();
  }

  if (!!request.hasCoreDiskSize()) {
    query["CoreDiskSize"] = request.coreDiskSize();
  }

  if (!!request.hasCoreDiskType()) {
    query["CoreDiskType"] = request.coreDiskType();
  }

  if (!!request.hasCoreInstanceQuantity()) {
    query["CoreInstanceQuantity"] = request.coreInstanceQuantity();
  }

  if (!!request.hasCoreInstanceType()) {
    query["CoreInstanceType"] = request.coreInstanceType();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.engine();
  }

  if (!!request.hasIsColdStorage()) {
    query["IsColdStorage"] = request.isColdStorage();
  }

  if (!!request.hasPayType()) {
    query["PayType"] = request.payType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasUpgradeType()) {
    query["UpgradeType"] = request.upgradeType();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResizeCluster"},
    {"version" , "2017-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResizeClusterResponse>();
}

/**
 * @param request ResizeClusterRequest
 * @return ResizeClusterResponse
 */
ResizeClusterResponse Client::resizeCluster(const ResizeClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resizeClusterWithOptions(request, runtime);
}

/**
 * @param request SparkRelateHBaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SparkRelateHBaseResponse
 */
SparkRelateHBaseResponse Client::sparkRelateHBaseWithOptions(const SparkRelateHBaseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasHBaseClusterIds()) {
    query["HBaseClusterIds"] = request.HBaseClusterIds();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SparkRelateHBase"},
    {"version" , "2017-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SparkRelateHBaseResponse>();
}

/**
 * @param request SparkRelateHBaseRequest
 * @return SparkRelateHBaseResponse
 */
SparkRelateHBaseResponse Client::sparkRelateHBase(const SparkRelateHBaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sparkRelateHBaseWithOptions(request, runtime);
}

/**
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TagResources"},
    {"version" , "2017-01-15"},
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
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @param request UntagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResourcesWithOptions(const UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAll()) {
    query["All"] = request.all();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTagKey()) {
    query["TagKey"] = request.tagKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UntagResources"},
    {"version" , "2017-01-15"},
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
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @param request UpgradeMinorVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeMinorVersionResponse
 */
UpgradeMinorVersionResponse Client::upgradeMinorVersionWithOptions(const UpgradeMinorVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasComponents()) {
    query["Components"] = request.components();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasUpgradeVersion()) {
    query["UpgradeVersion"] = request.upgradeVersion();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradeMinorVersion"},
    {"version" , "2017-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradeMinorVersionResponse>();
}

/**
 * @param request UpgradeMinorVersionRequest
 * @return UpgradeMinorVersionResponse
 */
UpgradeMinorVersionResponse Client::upgradeMinorVersion(const UpgradeMinorVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradeMinorVersionWithOptions(request, runtime);
}

/**
 * @param request XpackRelateDBRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return XpackRelateDBResponse
 */
XpackRelateDBResponse Client::xpackRelateDBWithOptions(const XpackRelateDBRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasDbClusterIds()) {
    query["DbClusterIds"] = request.dbClusterIds();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRelateDbType()) {
    query["RelateDbType"] = request.relateDbType();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "XpackRelateDB"},
    {"version" , "2017-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<XpackRelateDBResponse>();
}

/**
 * @param request XpackRelateDBRequest
 * @return XpackRelateDBResponse
 */
XpackRelateDBResponse Client::xpackRelateDB(const XpackRelateDBRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return xpackRelateDBWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace HBase20170115