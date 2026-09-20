#include <darabonba/Core.hpp>
#include <alibabacloud/HBase20190101.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::HBase20190101::Models;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace HBase20190101
{

AlibabaCloud::HBase20190101::Client::Client(Config &config): OpenApiClient(config){
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
 * @summary Adds a self-managed HDFS address to Xpack.
 *
 * @param request AddUserHdfsInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddUserHdfsInfoResponse
 */
AddUserHdfsInfoResponse Client::addUserHdfsInfoWithOptions(const AddUserHdfsInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasExtInfo()) {
    query["ExtInfo"] = request.getExtInfo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddUserHdfsInfo"},
    {"version" , "2019-01-01"},
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
 * @summary Adds a self-managed HDFS address to Xpack.
 *
 * @param request AddUserHdfsInfoRequest
 * @return AddUserHdfsInfoResponse
 */
AddUserHdfsInfoResponse Client::addUserHdfsInfo(const AddUserHdfsInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addUserHdfsInfoWithOptions(request, runtime);
}

/**
 * @summary Applies for a public endpoint.
 *
 * @param request AllocatePublicNetworkAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AllocatePublicNetworkAddressResponse
 */
AllocatePublicNetworkAddressResponse Client::allocatePublicNetworkAddressWithOptions(const AllocatePublicNetworkAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AllocatePublicNetworkAddress"},
    {"version" , "2019-01-01"},
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
 * @summary Applies for a public endpoint.
 *
 * @param request AllocatePublicNetworkAddressRequest
 * @return AllocatePublicNetworkAddressResponse
 */
AllocatePublicNetworkAddressResponse Client::allocatePublicNetworkAddress(const AllocatePublicNetworkAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return allocatePublicNetworkAddressWithOptions(request, runtime);
}

/**
 * @summary Cancels O&M event tasks by calling the CancelActiveOperationTasks operation.
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
    {"version" , "2019-01-01"},
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
 * @summary Cancels O&M event tasks by calling the CancelActiveOperationTasks operation.
 *
 * @param request CancelActiveOperationTasksRequest
 * @return CancelActiveOperationTasksResponse
 */
CancelActiveOperationTasksResponse Client::cancelActiveOperationTasks(const CancelActiveOperationTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelActiveOperationTasksWithOptions(request, runtime);
}

/**
 * @summary Checks whether the versions of components are the latest versions by calling CheckComponentsVersion.
 *
 * @param request CheckComponentsVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckComponentsVersionResponse
 */
CheckComponentsVersionResponse Client::checkComponentsVersionWithOptions(const CheckComponentsVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasComponents()) {
    query["Components"] = request.getComponents();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckComponentsVersion"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckComponentsVersionResponse>();
}

/**
 * @summary Checks whether the versions of components are the latest versions by calling CheckComponentsVersion.
 *
 * @param request CheckComponentsVersionRequest
 * @return CheckComponentsVersionResponse
 */
CheckComponentsVersionResponse Client::checkComponentsVersion(const CheckComponentsVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkComponentsVersionWithOptions(request, runtime);
}

/**
 * @summary Disables the backup and recovery feature for an HBase cluster by calling CloseBackup.
 *
 * @param request CloseBackupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloseBackupResponse
 */
CloseBackupResponse Client::closeBackupWithOptions(const CloseBackupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloseBackup"},
    {"version" , "2019-01-01"},
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
 * @summary Disables the backup and recovery feature for an HBase cluster by calling CloseBackup.
 *
 * @param request CloseBackupRequest
 * @return CloseBackupResponse
 */
CloseBackupResponse Client::closeBackup(const CloseBackupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return closeBackupWithOptions(request, runtime);
}

/**
 * @summary Converts an instance from pay-as-you-go to subscription billing.
 *
 * @description Note: This operation can be called only when payType is set to Postpaid.
 *
 * @param request ConvertInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConvertInstanceResponse
 */
ConvertInstanceResponse Client::convertInstanceWithOptions(const ConvertInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasDuration()) {
    query["Duration"] = request.getDuration();
  }

  if (!!request.hasPayType()) {
    query["PayType"] = request.getPayType();
  }

  if (!!request.hasPricingCycle()) {
    query["PricingCycle"] = request.getPricingCycle();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ConvertInstance"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConvertInstanceResponse>();
}

/**
 * @summary Converts an instance from pay-as-you-go to subscription billing.
 *
 * @description Note: This operation can be called only when payType is set to Postpaid.
 *
 * @param request ConvertInstanceRequest
 * @return ConvertInstanceResponse
 */
ConvertInstanceResponse Client::convertInstance(const ConvertInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return convertInstanceWithOptions(request, runtime);
}

/**
 * @summary Creates a wide table account.
 *
 * @description Only ApsaraDB for HBase Performance-enhanced Edition is supported.
 *
 * @param request CreateAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAccountResponse
 */
CreateAccountResponse Client::createAccountWithOptions(const CreateAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.getAccountName();
  }

  if (!!request.hasAccountPassword()) {
    query["AccountPassword"] = request.getAccountPassword();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAccount"},
    {"version" , "2019-01-01"},
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
 * @summary Creates a wide table account.
 *
 * @description Only ApsaraDB for HBase Performance-enhanced Edition is supported.
 *
 * @param request CreateAccountRequest
 * @return CreateAccountResponse
 */
CreateAccountResponse Client::createAccount(const CreateAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAccountWithOptions(request, runtime);
}

/**
 * @summary Creates a backup plan. Currently, only HBaseue is supported.
 *
 * @description Currently, this operation supports only HBaseue clusters. The EnableHBaseueBackup operation is compatible with this operation and performs automatic creation of a backup plan after a BDS cluster is created.
 *
 * @param request CreateBackupPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateBackupPlanResponse
 */
CreateBackupPlanResponse Client::createBackupPlanWithOptions(const CreateBackupPlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateBackupPlan"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateBackupPlanResponse>();
}

/**
 * @summary Creates a backup plan. Currently, only HBaseue is supported.
 *
 * @description Currently, this operation supports only HBaseue clusters. The EnableHBaseueBackup operation is compatible with this operation and performs automatic creation of a backup plan after a BDS cluster is created.
 *
 * @param request CreateBackupPlanRequest
 * @return CreateBackupPlanResponse
 */
CreateBackupPlanResponse Client::createBackupPlan(const CreateBackupPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBackupPlanWithOptions(request, runtime);
}

/**
 * @summary Creates an ApsaraDB for HBase cluster by calling CreateCluster.
 *
 * @param request CreateClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateClusterResponse
 */
CreateClusterResponse Client::createClusterWithOptions(const CreateClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoRenewPeriod()) {
    query["AutoRenewPeriod"] = request.getAutoRenewPeriod();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasClusterName()) {
    query["ClusterName"] = request.getClusterName();
  }

  if (!!request.hasColdStorageSize()) {
    query["ColdStorageSize"] = request.getColdStorageSize();
  }

  if (!!request.hasCoreInstanceType()) {
    query["CoreInstanceType"] = request.getCoreInstanceType();
  }

  if (!!request.hasDiskSize()) {
    query["DiskSize"] = request.getDiskSize();
  }

  if (!!request.hasDiskType()) {
    query["DiskType"] = request.getDiskType();
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

  if (!!request.hasMasterInstanceType()) {
    query["MasterInstanceType"] = request.getMasterInstanceType();
  }

  if (!!request.hasNodeCount()) {
    query["NodeCount"] = request.getNodeCount();
  }

  if (!!request.hasPayType()) {
    query["PayType"] = request.getPayType();
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

  if (!!request.hasSecurityIPList()) {
    query["SecurityIPList"] = request.getSecurityIPList();
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
    {"action" , "CreateCluster"},
    {"version" , "2019-01-01"},
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
 * @summary Creates an ApsaraDB for HBase cluster by calling CreateCluster.
 *
 * @param request CreateClusterRequest
 * @return CreateClusterResponse
 */
CreateClusterResponse Client::createCluster(const CreateClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createClusterWithOptions(request, runtime);
}

/**
 * @summary Creates a global resource in a cluster by calling CreateGlobalResource.
 *
 * @param request CreateGlobalResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateGlobalResourceResponse
 */
CreateGlobalResourceResponse Client::createGlobalResourceWithOptions(const CreateGlobalResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceName()) {
    query["ResourceName"] = request.getResourceName();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateGlobalResource"},
    {"version" , "2019-01-01"},
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
 * @summary Creates a global resource in a cluster by calling CreateGlobalResource.
 *
 * @param request CreateGlobalResourceRequest
 * @return CreateGlobalResourceResponse
 */
CreateGlobalResourceResponse Client::createGlobalResource(const CreateGlobalResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createGlobalResourceWithOptions(request, runtime);
}

/**
 * @summary Creates a load balancing service by calling CreateHBaseSlbServer.
 *
 * @param request CreateHBaseSlbServerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateHBaseSlbServerResponse
 */
CreateHBaseSlbServerResponse Client::createHBaseSlbServerWithOptions(const CreateHBaseSlbServerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasSlbServer()) {
    query["SlbServer"] = request.getSlbServer();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateHBaseSlbServer"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateHBaseSlbServerResponse>();
}

/**
 * @summary Creates a load balancing service by calling CreateHBaseSlbServer.
 *
 * @param request CreateHBaseSlbServerRequest
 * @return CreateHBaseSlbServerResponse
 */
CreateHBaseSlbServerResponse Client::createHBaseSlbServer(const CreateHBaseSlbServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createHBaseSlbServerWithOptions(request, runtime);
}

/**
 * @summary Creates a high-availability Thrift or Phoenix service for a BDS cluster that already has a high-availability HBase setup.
 *
 * @param request CreateHbaseHaSlbRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateHbaseHaSlbResponse
 */
CreateHbaseHaSlbResponse Client::createHbaseHaSlbWithOptions(const CreateHbaseHaSlbRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBdsId()) {
    query["BdsId"] = request.getBdsId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasHaId()) {
    query["HaId"] = request.getHaId();
  }

  if (!!request.hasHaTypes()) {
    query["HaTypes"] = request.getHaTypes();
  }

  if (!!request.hasHbaseType()) {
    query["HbaseType"] = request.getHbaseType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateHbaseHaSlb"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateHbaseHaSlbResponse>();
}

/**
 * @summary Creates a high-availability Thrift or Phoenix service for a BDS cluster that already has a high-availability HBase setup.
 *
 * @param request CreateHbaseHaSlbRequest
 * @return CreateHbaseHaSlbResponse
 */
CreateHbaseHaSlbResponse Client::createHbaseHaSlb(const CreateHbaseHaSlbRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createHbaseHaSlbWithOptions(request, runtime);
}

/**
 * @summary Creates a multi-zone cluster by calling CreateMultiZoneCluster.
 *
 * @description Currently, only version 2.0 of the HBaseue engine is supported.
 *
 * @param request CreateMultiZoneClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMultiZoneClusterResponse
 */
CreateMultiZoneClusterResponse Client::createMultiZoneClusterWithOptions(const CreateMultiZoneClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasAutoRenewPeriod()) {
    query["AutoRenewPeriod"] = request.getAutoRenewPeriod();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasClusterName()) {
    query["ClusterName"] = request.getClusterName();
  }

  if (!!request.hasCoreDiskSize()) {
    query["CoreDiskSize"] = request.getCoreDiskSize();
  }

  if (!!request.hasCoreDiskType()) {
    query["CoreDiskType"] = request.getCoreDiskType();
  }

  if (!!request.hasCoreInstanceType()) {
    query["CoreInstanceType"] = request.getCoreInstanceType();
  }

  if (!!request.hasCoreNodeCount()) {
    query["CoreNodeCount"] = request.getCoreNodeCount();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.getEngine();
  }

  if (!!request.hasEngineVersion()) {
    query["EngineVersion"] = request.getEngineVersion();
  }

  if (!!request.hasLogDiskSize()) {
    query["LogDiskSize"] = request.getLogDiskSize();
  }

  if (!!request.hasLogDiskType()) {
    query["LogDiskType"] = request.getLogDiskType();
  }

  if (!!request.hasLogInstanceType()) {
    query["LogInstanceType"] = request.getLogInstanceType();
  }

  if (!!request.hasLogNodeCount()) {
    query["LogNodeCount"] = request.getLogNodeCount();
  }

  if (!!request.hasMasterInstanceType()) {
    query["MasterInstanceType"] = request.getMasterInstanceType();
  }

  if (!!request.hasMultiZoneCombination()) {
    query["MultiZoneCombination"] = request.getMultiZoneCombination();
  }

  if (!!request.hasPayType()) {
    query["PayType"] = request.getPayType();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasPeriodUnit()) {
    query["PeriodUnit"] = request.getPeriodUnit();
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

  if (!!request.hasSecurityIPList()) {
    query["SecurityIPList"] = request.getSecurityIPList();
  }

  if (!!request.hasStandbyVSwitchId()) {
    query["StandbyVSwitchId"] = request.getStandbyVSwitchId();
  }

  if (!!request.hasStandbyZoneId()) {
    query["StandbyZoneId"] = request.getStandbyZoneId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateMultiZoneCluster"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMultiZoneClusterResponse>();
}

/**
 * @summary Creates a multi-zone cluster by calling CreateMultiZoneCluster.
 *
 * @description Currently, only version 2.0 of the HBaseue engine is supported.
 *
 * @param request CreateMultiZoneClusterRequest
 * @return CreateMultiZoneClusterResponse
 */
CreateMultiZoneClusterResponse Client::createMultiZoneCluster(const CreateMultiZoneClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMultiZoneClusterWithOptions(request, runtime);
}

/**
 * @summary Restores backed-up data from a cluster with the backup and restore feature enabled to another ApsaraDB for HBase Performance-enhanced Edition cluster in the same region.
 *
 * @description Before calling this operation, make sure that the backup and restore feature is enabled for the ApsaraDB for HBase Performance-enhanced Edition cluster and that the target ApsaraDB for HBase Performance-enhanced Edition cluster is associated with the corresponding BDS.
 *
 * @param request CreateRestorePlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRestorePlanResponse
 */
CreateRestorePlanResponse Client::createRestorePlanWithOptions(const CreateRestorePlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasRestoreAllTable()) {
    query["RestoreAllTable"] = request.getRestoreAllTable();
  }

  if (!!request.hasRestoreByCopy()) {
    query["RestoreByCopy"] = request.getRestoreByCopy();
  }

  if (!!request.hasRestoreToDate()) {
    query["RestoreToDate"] = request.getRestoreToDate();
  }

  if (!!request.hasTables()) {
    query["Tables"] = request.getTables();
  }

  if (!!request.hasTargetClusterId()) {
    query["TargetClusterId"] = request.getTargetClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateRestorePlan"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRestorePlanResponse>();
}

/**
 * @summary Restores backed-up data from a cluster with the backup and restore feature enabled to another ApsaraDB for HBase Performance-enhanced Edition cluster in the same region.
 *
 * @description Before calling this operation, make sure that the backup and restore feature is enabled for the ApsaraDB for HBase Performance-enhanced Edition cluster and that the target ApsaraDB for HBase Performance-enhanced Edition cluster is associated with the corresponding BDS.
 *
 * @param request CreateRestorePlanRequest
 * @return CreateRestorePlanResponse
 */
CreateRestorePlanResponse Client::createRestorePlan(const CreateRestorePlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRestorePlanWithOptions(request, runtime);
}

/**
 * @summary Creates an HBase Serverless cluster.
 *
 * @param request CreateServerlessClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateServerlessClusterResponse
 */
CreateServerlessClusterResponse Client::createServerlessClusterWithOptions(const CreateServerlessClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoRenewPeriod()) {
    query["AutoRenewPeriod"] = request.getAutoRenewPeriod();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasClientType()) {
    query["ClientType"] = request.getClientType();
  }

  if (!!request.hasClusterName()) {
    query["ClusterName"] = request.getClusterName();
  }

  if (!!request.hasDiskType()) {
    query["DiskType"] = request.getDiskType();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.getEngine();
  }

  if (!!request.hasEngineVersion()) {
    query["EngineVersion"] = request.getEngineVersion();
  }

  if (!!request.hasPayType()) {
    query["PayType"] = request.getPayType();
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

  if (!!request.hasServerlessCapability()) {
    query["ServerlessCapability"] = request.getServerlessCapability();
  }

  if (!!request.hasServerlessSpec()) {
    query["ServerlessSpec"] = request.getServerlessSpec();
  }

  if (!!request.hasServerlessStorage()) {
    query["ServerlessStorage"] = request.getServerlessStorage();
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
    {"action" , "CreateServerlessCluster"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateServerlessClusterResponse>();
}

/**
 * @summary Creates an HBase Serverless cluster.
 *
 * @param request CreateServerlessClusterRequest
 * @return CreateServerlessClusterResponse
 */
CreateServerlessClusterResponse Client::createServerlessCluster(const CreateServerlessClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createServerlessClusterWithOptions(request, runtime);
}

/**
 * @summary Delete Wide Table Database Account
 *
 * @description Only supported for HBase Enhanced Edition (HBaseue).
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

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAccount"},
    {"version" , "2019-01-01"},
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
 * @summary Delete Wide Table Database Account
 *
 * @description Only supported for HBase Enhanced Edition (HBaseue).
 *
 * @param request DeleteAccountRequest
 * @return DeleteAccountResponse
 */
DeleteAccountResponse Client::deleteAccount(const DeleteAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAccountWithOptions(request, runtime);
}

/**
 * @summary Deletes a global resource from a cluster by calling DeleteGlobalResource.
 *
 * @param request DeleteGlobalResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteGlobalResourceResponse
 */
DeleteGlobalResourceResponse Client::deleteGlobalResourceWithOptions(const DeleteGlobalResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceName()) {
    query["ResourceName"] = request.getResourceName();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteGlobalResource"},
    {"version" , "2019-01-01"},
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
 * @summary Deletes a global resource from a cluster by calling DeleteGlobalResource.
 *
 * @param request DeleteGlobalResourceRequest
 * @return DeleteGlobalResourceResponse
 */
DeleteGlobalResourceResponse Client::deleteGlobalResource(const DeleteGlobalResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteGlobalResourceWithOptions(request, runtime);
}

/**
 * @summary Deletes a created HA instance.
 *
 * @param request DeleteHBaseHaDBRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteHBaseHaDBResponse
 */
DeleteHBaseHaDBResponse Client::deleteHBaseHaDBWithOptions(const DeleteHBaseHaDBRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBdsId()) {
    query["BdsId"] = request.getBdsId();
  }

  if (!!request.hasHaId()) {
    query["HaId"] = request.getHaId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteHBaseHaDB"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteHBaseHaDBResponse>();
}

/**
 * @summary Deletes a created HA instance.
 *
 * @param request DeleteHBaseHaDBRequest
 * @return DeleteHBaseHaDBResponse
 */
DeleteHBaseHaDBResponse Client::deleteHBaseHaDB(const DeleteHBaseHaDBRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteHBaseHaDBWithOptions(request, runtime);
}

/**
 * @summary Calls DeleteHBaseSlbServer to delete an activated load balancing service.
 *
 * @param request DeleteHBaseSlbServerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteHBaseSlbServerResponse
 */
DeleteHBaseSlbServerResponse Client::deleteHBaseSlbServerWithOptions(const DeleteHBaseSlbServerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasSlbServer()) {
    query["SlbServer"] = request.getSlbServer();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteHBaseSlbServer"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteHBaseSlbServerResponse>();
}

/**
 * @summary Calls DeleteHBaseSlbServer to delete an activated load balancing service.
 *
 * @param request DeleteHBaseSlbServerRequest
 * @return DeleteHBaseSlbServerResponse
 */
DeleteHBaseSlbServerResponse Client::deleteHBaseSlbServer(const DeleteHBaseSlbServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteHBaseSlbServerWithOptions(request, runtime);
}

/**
 * @summary Deletes the corresponding high-availability Thrift or high-availability Phoenix configuration. This operation is the counterpart of the CreateHbaseHaSlb operation.
 *
 * @param request DeleteHbaseHaSlbRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteHbaseHaSlbResponse
 */
DeleteHbaseHaSlbResponse Client::deleteHbaseHaSlbWithOptions(const DeleteHbaseHaSlbRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBdsId()) {
    query["BdsId"] = request.getBdsId();
  }

  if (!!request.hasHaId()) {
    query["HaId"] = request.getHaId();
  }

  if (!!request.hasHaTypes()) {
    query["HaTypes"] = request.getHaTypes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteHbaseHaSlb"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteHbaseHaSlbResponse>();
}

/**
 * @summary Deletes the corresponding high-availability Thrift or high-availability Phoenix configuration. This operation is the counterpart of the CreateHbaseHaSlb operation.
 *
 * @param request DeleteHbaseHaSlbRequest
 * @return DeleteHbaseHaSlbResponse
 */
DeleteHbaseHaSlbResponse Client::deleteHbaseHaSlb(const DeleteHbaseHaSlbRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteHbaseHaSlbWithOptions(request, runtime);
}

/**
 * @summary Calls DeleteInstance to release an HBase instance.
 *
 * @description When you call this operation, the instance must meet the following conditions:
 * - The instance status is **Running**.
 * - The billing method of the instance is **pay-as-you-go**.
 * > Subscription instances cannot be deleted by calling this operation. They are automatically released upon expiration. To release a subscription instance in advance, submit a ticket.
 *
 * @param request DeleteInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteInstanceResponse
 */
DeleteInstanceResponse Client::deleteInstanceWithOptions(const DeleteInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasImmediateDeleteFlag()) {
    query["ImmediateDeleteFlag"] = request.getImmediateDeleteFlag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteInstance"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteInstanceResponse>();
}

/**
 * @summary Calls DeleteInstance to release an HBase instance.
 *
 * @description When you call this operation, the instance must meet the following conditions:
 * - The instance status is **Running**.
 * - The billing method of the instance is **pay-as-you-go**.
 * > Subscription instances cannot be deleted by calling this operation. They are automatically released upon expiration. To release a subscription instance in advance, submit a ticket.
 *
 * @param request DeleteInstanceRequest
 * @return DeleteInstanceResponse
 */
DeleteInstanceResponse Client::deleteInstance(const DeleteInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteInstanceWithOptions(request, runtime);
}

/**
 * @summary Deletes a multi-zone instance by calling the DeleteMultiZoneCluster operation.
 *
 * @param request DeleteMultiZoneClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMultiZoneClusterResponse
 */
DeleteMultiZoneClusterResponse Client::deleteMultiZoneClusterWithOptions(const DeleteMultiZoneClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasImmediateDeleteFlag()) {
    query["ImmediateDeleteFlag"] = request.getImmediateDeleteFlag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMultiZoneCluster"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMultiZoneClusterResponse>();
}

/**
 * @summary Deletes a multi-zone instance by calling the DeleteMultiZoneCluster operation.
 *
 * @param request DeleteMultiZoneClusterRequest
 * @return DeleteMultiZoneClusterResponse
 */
DeleteMultiZoneClusterResponse Client::deleteMultiZoneCluster(const DeleteMultiZoneClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMultiZoneClusterWithOptions(request, runtime);
}

/**
 * @summary Deletes an HBase Serverless cluster.
 *
 * @param request DeleteServerlessClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteServerlessClusterResponse
 */
DeleteServerlessClusterResponse Client::deleteServerlessClusterWithOptions(const DeleteServerlessClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
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
    {"action" , "DeleteServerlessCluster"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteServerlessClusterResponse>();
}

/**
 * @summary Deletes an HBase Serverless cluster.
 *
 * @param request DeleteServerlessClusterRequest
 * @return DeleteServerlessClusterResponse
 */
DeleteServerlessClusterResponse Client::deleteServerlessCluster(const DeleteServerlessClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteServerlessClusterWithOptions(request, runtime);
}

/**
 * @summary Calls DeleteUserHdfsInfo to delete user-created HDFS information in Xpack.
 *
 * @param request DeleteUserHdfsInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUserHdfsInfoResponse
 */
DeleteUserHdfsInfoResponse Client::deleteUserHdfsInfoWithOptions(const DeleteUserHdfsInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasNameService()) {
    query["NameService"] = request.getNameService();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteUserHdfsInfo"},
    {"version" , "2019-01-01"},
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
 * @summary Calls DeleteUserHdfsInfo to delete user-created HDFS information in Xpack.
 *
 * @param request DeleteUserHdfsInfoRequest
 * @return DeleteUserHdfsInfoResponse
 */
DeleteUserHdfsInfoResponse Client::deleteUserHdfsInfo(const DeleteUserHdfsInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteUserHdfsInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the list of database accounts.
 *
 * @param request DescribeAccountsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAccountsResponse
 */
DescribeAccountsResponse Client::describeAccountsWithOptions(const DescribeAccountsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAccounts"},
    {"version" , "2019-01-01"},
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
 * @summary Queries the list of database accounts.
 *
 * @param request DescribeAccountsRequest
 * @return DescribeAccountsResponse
 */
DescribeAccountsResponse Client::describeAccounts(const DescribeAccountsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAccountsWithOptions(request, runtime);
}

/**
 * @summary Calls the DescribeActiveOperationTaskType operation to query the O&M task types, the number of tasks of each type, and the details of an HBase instance.
 *
 * @param request DescribeActiveOperationTaskTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeActiveOperationTaskTypeResponse
 */
DescribeActiveOperationTaskTypeResponse Client::describeActiveOperationTaskTypeWithOptions(const DescribeActiveOperationTaskTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIsHistory()) {
    query["IsHistory"] = request.getIsHistory();
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
    {"action" , "DescribeActiveOperationTaskType"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeActiveOperationTaskTypeResponse>();
}

/**
 * @summary Calls the DescribeActiveOperationTaskType operation to query the O&M task types, the number of tasks of each type, and the details of an HBase instance.
 *
 * @param request DescribeActiveOperationTaskTypeRequest
 * @return DescribeActiveOperationTaskTypeResponse
 */
DescribeActiveOperationTaskTypeResponse Client::describeActiveOperationTaskType(const DescribeActiveOperationTaskTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeActiveOperationTaskTypeWithOptions(request, runtime);
}

/**
 * @summary Calls the DescribeActiveOperationTasks operation to query details of O&M tasks for HBase instances.
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
    {"version" , "2019-01-01"},
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
 * @summary Calls the DescribeActiveOperationTasks operation to query details of O&M tasks for HBase instances.
 *
 * @param request DescribeActiveOperationTasksRequest
 * @return DescribeActiveOperationTasksResponse
 */
DescribeActiveOperationTasksResponse Client::describeActiveOperationTasks(const DescribeActiveOperationTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeActiveOperationTasksWithOptions(request, runtime);
}

/**
 * @summary Queries available resources by calling DescribeAvailableResource.
 *
 * @param request DescribeAvailableResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAvailableResourceResponse
 */
DescribeAvailableResourceResponse Client::describeAvailableResourceWithOptions(const DescribeAvailableResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.getChargeType();
  }

  if (!!request.hasCoreInstanceType()) {
    query["CoreInstanceType"] = request.getCoreInstanceType();
  }

  if (!!request.hasDiskType()) {
    query["DiskType"] = request.getDiskType();
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

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAvailableResource"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAvailableResourceResponse>();
}

/**
 * @summary Queries available resources by calling DescribeAvailableResource.
 *
 * @param request DescribeAvailableResourceRequest
 * @return DescribeAvailableResourceResponse
 */
DescribeAvailableResourceResponse Client::describeAvailableResource(const DescribeAvailableResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAvailableResourceWithOptions(request, runtime);
}

/**
 * @summary Queries the configuration of a backup plan by calling the DescribeBackupPlanConfig operation.
 *
 * @description This operation currently supports only HBaseue. Before calling this operation, make sure that the backup and recovery feature is enabled for the HBaseue instance.
 *
 * @param request DescribeBackupPlanConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBackupPlanConfigResponse
 */
DescribeBackupPlanConfigResponse Client::describeBackupPlanConfigWithOptions(const DescribeBackupPlanConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBackupPlanConfig"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBackupPlanConfigResponse>();
}

/**
 * @summary Queries the configuration of a backup plan by calling the DescribeBackupPlanConfig operation.
 *
 * @description This operation currently supports only HBaseue. Before calling this operation, make sure that the backup and recovery feature is enabled for the HBaseue instance.
 *
 * @param request DescribeBackupPlanConfigRequest
 * @return DescribeBackupPlanConfigResponse
 */
DescribeBackupPlanConfigResponse Client::describeBackupPlanConfig(const DescribeBackupPlanConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupPlanConfigWithOptions(request, runtime);
}

/**
 * @summary Queries the backup policy of an HBase cluster by calling DescribeBackupPolicy.
 *
 * @param request DescribeBackupPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBackupPolicyResponse
 */
DescribeBackupPolicyResponse Client::describeBackupPolicyWithOptions(const DescribeBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBackupPolicy"},
    {"version" , "2019-01-01"},
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
 * @summary Queries the backup policy of an HBase cluster by calling DescribeBackupPolicy.
 *
 * @param request DescribeBackupPolicyRequest
 * @return DescribeBackupPolicyResponse
 */
DescribeBackupPolicyResponse Client::describeBackupPolicy(const DescribeBackupPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupPolicyWithOptions(request, runtime);
}

/**
 * @summary Describes the status of a backup task by calling the DescribeBackupStatus operation.
 *
 * @param request DescribeBackupStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBackupStatusResponse
 */
DescribeBackupStatusResponse Client::describeBackupStatusWithOptions(const DescribeBackupStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBackupStatus"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBackupStatusResponse>();
}

/**
 * @summary Describes the status of a backup task by calling the DescribeBackupStatus operation.
 *
 * @param request DescribeBackupStatusRequest
 * @return DescribeBackupStatusResponse
 */
DescribeBackupStatusResponse Client::describeBackupStatus(const DescribeBackupStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupStatusWithOptions(request, runtime);
}

/**
 * @summary After HBase Enhanced Edition backup is enabled, you can call the DescribeBackupSummary operation to query backup details.
 *
 * @description The backup and restore feature of the HBase Enhanced Edition instance is enabled. For more information, see [Enable backup and restore](https://help.aliyun.com/document_detail/145767.html).
 *
 * @param request DescribeBackupSummaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBackupSummaryResponse
 */
DescribeBackupSummaryResponse Client::describeBackupSummaryWithOptions(const DescribeBackupSummaryRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBackupSummary"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBackupSummaryResponse>();
}

/**
 * @summary After HBase Enhanced Edition backup is enabled, you can call the DescribeBackupSummary operation to query backup details.
 *
 * @description The backup and restore feature of the HBase Enhanced Edition instance is enabled. For more information, see [Enable backup and restore](https://help.aliyun.com/document_detail/145767.html).
 *
 * @param request DescribeBackupSummaryRequest
 * @return DescribeBackupSummaryResponse
 */
DescribeBackupSummaryResponse Client::describeBackupSummary(const DescribeBackupSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupSummaryWithOptions(request, runtime);
}

/**
 * @summary Queries the backup table information of a specific backup record by calling the DescribeBackupTables operation.
 *
 * @description Before calling this operation, make sure that the backup and recovery feature is enabled for the HBaseue cluster and that backup records exist. You can call the DescribeBackupSummary operation to obtain backup records.
 *
 * @param request DescribeBackupTablesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBackupTablesResponse
 */
DescribeBackupTablesResponse Client::describeBackupTablesWithOptions(const DescribeBackupTablesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupRecordId()) {
    query["BackupRecordId"] = request.getBackupRecordId();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBackupTables"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBackupTablesResponse>();
}

/**
 * @summary Queries the backup table information of a specific backup record by calling the DescribeBackupTables operation.
 *
 * @description Before calling this operation, make sure that the backup and recovery feature is enabled for the HBaseue cluster and that backup records exist. You can call the DescribeBackupSummary operation to obtain backup records.
 *
 * @param request DescribeBackupTablesRequest
 * @return DescribeBackupTablesResponse
 */
DescribeBackupTablesResponse Client::describeBackupTables(const DescribeBackupTablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupTablesWithOptions(request, runtime);
}

/**
 * @summary Retrieves backup records of an ApsaraDB for HBase cluster by calling DescribeBackups.
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

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasEndTimeUTC()) {
    query["EndTimeUTC"] = request.getEndTimeUTC();
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

  if (!!request.hasStartTimeUTC()) {
    query["StartTimeUTC"] = request.getStartTimeUTC();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBackups"},
    {"version" , "2019-01-01"},
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
 * @summary Retrieves backup records of an ApsaraDB for HBase cluster by calling DescribeBackups.
 *
 * @param request DescribeBackupsRequest
 * @return DescribeBackupsResponse
 */
DescribeBackupsResponse Client::describeBackups(const DescribeBackupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupsWithOptions(request, runtime);
}

/**
 * @summary Queries the connection list of a cluster by calling DescribeClusterConnection.
 *
 * @param request DescribeClusterConnectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeClusterConnectionResponse
 */
DescribeClusterConnectionResponse Client::describeClusterConnectionWithOptions(const DescribeClusterConnectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "DescribeClusterConnection"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeClusterConnectionResponse>();
}

/**
 * @summary Queries the connection list of a cluster by calling DescribeClusterConnection.
 *
 * @param request DescribeClusterConnectionRequest
 * @return DescribeClusterConnectionResponse
 */
DescribeClusterConnectionResponse Client::describeClusterConnection(const DescribeClusterConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeClusterConnectionWithOptions(request, runtime);
}

/**
 * @summary Calls DescribeColdStorage to retrieve the cold storage information of an instance.
 *
 * @param request DescribeColdStorageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeColdStorageResponse
 */
DescribeColdStorageResponse Client::describeColdStorageWithOptions(const DescribeColdStorageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeColdStorage"},
    {"version" , "2019-01-01"},
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
 * @summary Calls DescribeColdStorage to retrieve the cold storage information of an instance.
 *
 * @param request DescribeColdStorageRequest
 * @return DescribeColdStorageResponse
 */
DescribeColdStorageResponse Client::describeColdStorage(const DescribeColdStorageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeColdStorageWithOptions(request, runtime);
}

/**
 * @summary Calls DescribeDBInstanceUsage to retrieve the running watermark status of an HBase cluster by cluster ID.
 *
 * @param request DescribeDBInstanceUsageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstanceUsageResponse
 */
DescribeDBInstanceUsageResponse Client::describeDBInstanceUsageWithOptions(const DescribeDBInstanceUsageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstanceUsage"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstanceUsageResponse>();
}

/**
 * @summary Calls DescribeDBInstanceUsage to retrieve the running watermark status of an HBase cluster by cluster ID.
 *
 * @param request DescribeDBInstanceUsageRequest
 * @return DescribeDBInstanceUsageResponse
 */
DescribeDBInstanceUsageResponse Client::describeDBInstanceUsage(const DescribeDBInstanceUsageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceUsageWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of clusters that have been deleted but not fully released.
 *
 * @description By default, cluster resources are fully cleaned up 7 days after deletion. If you have called the PurgeInstance operation or set ImmediateDeleteFlag to true when calling the delete operation, the resources have already been fully cleaned up.
 *
 * @param request DescribeDeletedInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDeletedInstancesResponse
 */
DescribeDeletedInstancesResponse Client::describeDeletedInstancesWithOptions(const DescribeDeletedInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDeletedInstances"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDeletedInstancesResponse>();
}

/**
 * @summary Retrieves a list of clusters that have been deleted but not fully released.
 *
 * @description By default, cluster resources are fully cleaned up 7 days after deletion. If you have called the PurgeInstance operation or set ImmediateDeleteFlag to true when calling the delete operation, the resources have already been fully cleaned up.
 *
 * @param request DescribeDeletedInstancesRequest
 * @return DescribeDeletedInstancesResponse
 */
DescribeDeletedInstancesResponse Client::describeDeletedInstances(const DescribeDeletedInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDeletedInstancesWithOptions(request, runtime);
}

/**
 * @summary Currently, only HBase and HBaseue are supported.
 *
 * @param request DescribeDiskWarningLineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDiskWarningLineResponse
 */
DescribeDiskWarningLineResponse Client::describeDiskWarningLineWithOptions(const DescribeDiskWarningLineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDiskWarningLine"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDiskWarningLineResponse>();
}

/**
 * @summary Currently, only HBase and HBaseue are supported.
 *
 * @param request DescribeDiskWarningLineRequest
 * @return DescribeDiskWarningLineResponse
 */
DescribeDiskWarningLineResponse Client::describeDiskWarningLine(const DescribeDiskWarningLineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDiskWarningLineWithOptions(request, runtime);
}

/**
 * @summary Queries the database connection information of an ApsaraDB for HBase instance by calling DescribeEndpoints.
 *
 * @param request DescribeEndpointsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEndpointsResponse
 */
DescribeEndpointsResponse Client::describeEndpointsWithOptions(const DescribeEndpointsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEndpoints"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEndpointsResponse>();
}

/**
 * @summary Queries the database connection information of an ApsaraDB for HBase instance by calling DescribeEndpoints.
 *
 * @param request DescribeEndpointsRequest
 * @return DescribeEndpointsResponse
 */
DescribeEndpointsResponse Client::describeEndpoints(const DescribeEndpointsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEndpointsWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an ApsaraDB for HBase instance.
 *
 * @param request DescribeInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceResponse
 */
DescribeInstanceResponse Client::describeInstanceWithOptions(const DescribeInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstance"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceResponse>();
}

/**
 * @summary Queries the details of an ApsaraDB for HBase instance.
 *
 * @param request DescribeInstanceRequest
 * @return DescribeInstanceResponse
 */
DescribeInstanceResponse Client::describeInstance(const DescribeInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceWithOptions(request, runtime);
}

/**
 * @summary Queries instance specifications (CPU and memory) by calling DescribeInstanceType.
 *
 * @description The complete specification mapping table is based on the list returned by this operation.
 * If the response returns an "instanceType is not found" error, the specification has been deprecated. If you have a strong dependency on this specification, contact the Alibaba Cloud HBase management team.
 *
 * @param request DescribeInstanceTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceTypeResponse
 */
DescribeInstanceTypeResponse Client::describeInstanceTypeWithOptions(const DescribeInstanceTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.getInstanceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceType"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceTypeResponse>();
}

/**
 * @summary Queries instance specifications (CPU and memory) by calling DescribeInstanceType.
 *
 * @description The complete specification mapping table is based on the list returned by this operation.
 * If the response returns an "instanceType is not found" error, the specification has been deprecated. If you have a strong dependency on this specification, contact the Alibaba Cloud HBase management team.
 *
 * @param request DescribeInstanceTypeRequest
 * @return DescribeInstanceTypeResponse
 */
DescribeInstanceTypeResponse Client::describeInstanceType(const DescribeInstanceTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceTypeWithOptions(request, runtime);
}

/**
 * @summary Queries the list of ApsaraDB for HBase instances in a specified region by calling DescribeInstances.
 *
 * @param request DescribeInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstancesResponse
 */
DescribeInstancesResponse Client::describeInstancesWithOptions(const DescribeInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasClusterName()) {
    query["ClusterName"] = request.getClusterName();
  }

  if (!!request.hasDbType()) {
    query["DbType"] = request.getDbType();
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

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstances"},
    {"version" , "2019-01-01"},
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
 * @summary Queries the list of ApsaraDB for HBase instances in a specified region by calling DescribeInstances.
 *
 * @param request DescribeInstancesRequest
 * @return DescribeInstancesResponse
 */
DescribeInstancesResponse Client::describeInstances(const DescribeInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstancesWithOptions(request, runtime);
}

/**
 * @summary Retrieves the IP whitelist information of a cluster by cluster ID.
 *
 * @param request DescribeIpWhitelistRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeIpWhitelistResponse
 */
DescribeIpWhitelistResponse Client::describeIpWhitelistWithOptions(const DescribeIpWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeIpWhitelist"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeIpWhitelistResponse>();
}

/**
 * @summary Retrieves the IP whitelist information of a cluster by cluster ID.
 *
 * @param request DescribeIpWhitelistRequest
 * @return DescribeIpWhitelistResponse
 */
DescribeIpWhitelistResponse Client::describeIpWhitelist(const DescribeIpWhitelistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeIpWhitelistWithOptions(request, runtime);
}

/**
 * @summary Queries the available region and zone combinations for multi-zone deployment by calling DescribeMultiZoneAvailableRegions.
 *
 * @param request DescribeMultiZoneAvailableRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMultiZoneAvailableRegionsResponse
 */
DescribeMultiZoneAvailableRegionsResponse Client::describeMultiZoneAvailableRegionsWithOptions(const DescribeMultiZoneAvailableRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMultiZoneAvailableRegions"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMultiZoneAvailableRegionsResponse>();
}

/**
 * @summary Queries the available region and zone combinations for multi-zone deployment by calling DescribeMultiZoneAvailableRegions.
 *
 * @param request DescribeMultiZoneAvailableRegionsRequest
 * @return DescribeMultiZoneAvailableRegionsResponse
 */
DescribeMultiZoneAvailableRegionsResponse Client::describeMultiZoneAvailableRegions(const DescribeMultiZoneAvailableRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMultiZoneAvailableRegionsWithOptions(request, runtime);
}

/**
 * @summary Queries purchasable resources in multiple zones by calling DescribeMultiZoneAvailableResource.
 *
 * @param request DescribeMultiZoneAvailableResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMultiZoneAvailableResourceResponse
 */
DescribeMultiZoneAvailableResourceResponse Client::describeMultiZoneAvailableResourceWithOptions(const DescribeMultiZoneAvailableResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.getChargeType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasZoneCombination()) {
    query["ZoneCombination"] = request.getZoneCombination();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMultiZoneAvailableResource"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMultiZoneAvailableResourceResponse>();
}

/**
 * @summary Queries purchasable resources in multiple zones by calling DescribeMultiZoneAvailableResource.
 *
 * @param request DescribeMultiZoneAvailableResourceRequest
 * @return DescribeMultiZoneAvailableResourceResponse
 */
DescribeMultiZoneAvailableResourceResponse Client::describeMultiZoneAvailableResource(const DescribeMultiZoneAvailableResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMultiZoneAvailableResourceWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a multi-zone instance.
 *
 * @param request DescribeMultiZoneClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMultiZoneClusterResponse
 */
DescribeMultiZoneClusterResponse Client::describeMultiZoneClusterWithOptions(const DescribeMultiZoneClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMultiZoneCluster"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMultiZoneClusterResponse>();
}

/**
 * @summary Retrieves the details of a multi-zone instance.
 *
 * @param request DescribeMultiZoneClusterRequest
 * @return DescribeMultiZoneClusterResponse
 */
DescribeMultiZoneClusterResponse Client::describeMultiZoneCluster(const DescribeMultiZoneClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMultiZoneClusterWithOptions(request, runtime);
}

/**
 * @summary Retrieves the recoverable time range after backup is enabled for an HBaseue cluster.
 *
 * @description Before calling this operation, make sure that the backup and recovery feature is enabled for the HBaseue cluster.
 *
 * @param request DescribeRecoverableTimeRangeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRecoverableTimeRangeResponse
 */
DescribeRecoverableTimeRangeResponse Client::describeRecoverableTimeRangeWithOptions(const DescribeRecoverableTimeRangeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRecoverableTimeRange"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRecoverableTimeRangeResponse>();
}

/**
 * @summary Retrieves the recoverable time range after backup is enabled for an HBaseue cluster.
 *
 * @description Before calling this operation, make sure that the backup and recovery feature is enabled for the HBaseue cluster.
 *
 * @param request DescribeRecoverableTimeRangeRequest
 * @return DescribeRecoverableTimeRangeResponse
 */
DescribeRecoverableTimeRangeResponse Client::describeRecoverableTimeRange(const DescribeRecoverableTimeRangeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRecoverableTimeRangeWithOptions(request, runtime);
}

/**
 * @summary Queries available regions by calling DescribeRegions.
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

  if (!!request.hasEngine()) {
    query["Engine"] = request.getEngine();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRegions"},
    {"version" , "2019-01-01"},
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
 * @summary Queries available regions by calling DescribeRegions.
 *
 * @param request DescribeRegionsRequest
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions(const DescribeRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRegionsWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a specific full restoration for an HBaseue cluster that has backup and recovery enabled.
 *
 * @description Before calling this operation, make sure that the backup and recovery feature is enabled for the HBaseue cluster and that restoration records exist. You can call DescribeRestoreSummary to obtain restoration records.
 *
 * @param request DescribeRestoreFullDetailsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRestoreFullDetailsResponse
 */
DescribeRestoreFullDetailsResponse Client::describeRestoreFullDetailsWithOptions(const DescribeRestoreFullDetailsRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasRestoreRecordId()) {
    query["RestoreRecordId"] = request.getRestoreRecordId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRestoreFullDetails"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRestoreFullDetailsResponse>();
}

/**
 * @summary Queries the details of a specific full restoration for an HBaseue cluster that has backup and recovery enabled.
 *
 * @description Before calling this operation, make sure that the backup and recovery feature is enabled for the HBaseue cluster and that restoration records exist. You can call DescribeRestoreSummary to obtain restoration records.
 *
 * @param request DescribeRestoreFullDetailsRequest
 * @return DescribeRestoreFullDetailsResponse
 */
DescribeRestoreFullDetailsResponse Client::describeRestoreFullDetails(const DescribeRestoreFullDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRestoreFullDetailsWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of an incremental restoration by calling the DescribeRestoreIncrDetail operation.
 *
 * @description Before you call this operation, make sure that the backup and recovery feature is enabled for the HBaseue cluster and that restoration records exist. You can call the DescribeRestoreSummary operation to obtain restoration records.
 *
 * @param request DescribeRestoreIncrDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRestoreIncrDetailResponse
 */
DescribeRestoreIncrDetailResponse Client::describeRestoreIncrDetailWithOptions(const DescribeRestoreIncrDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasRestoreRecordId()) {
    query["RestoreRecordId"] = request.getRestoreRecordId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRestoreIncrDetail"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRestoreIncrDetailResponse>();
}

/**
 * @summary Retrieves the details of an incremental restoration by calling the DescribeRestoreIncrDetail operation.
 *
 * @description Before you call this operation, make sure that the backup and recovery feature is enabled for the HBaseue cluster and that restoration records exist. You can call the DescribeRestoreSummary operation to obtain restoration records.
 *
 * @param request DescribeRestoreIncrDetailRequest
 * @return DescribeRestoreIncrDetailResponse
 */
DescribeRestoreIncrDetailResponse Client::describeRestoreIncrDetail(const DescribeRestoreIncrDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRestoreIncrDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the details of schema restoration for an HBaseue cluster that has backup and recovery enabled.
 *
 * @description Before calling this operation, make sure that the backup and recovery feature is enabled for the HBaseue cluster and that restoration records exist.
 *
 * @param request DescribeRestoreSchemaDetailsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRestoreSchemaDetailsResponse
 */
DescribeRestoreSchemaDetailsResponse Client::describeRestoreSchemaDetailsWithOptions(const DescribeRestoreSchemaDetailsRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasRestoreRecordId()) {
    query["RestoreRecordId"] = request.getRestoreRecordId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRestoreSchemaDetails"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRestoreSchemaDetailsResponse>();
}

/**
 * @summary Queries the details of schema restoration for an HBaseue cluster that has backup and recovery enabled.
 *
 * @description Before calling this operation, make sure that the backup and recovery feature is enabled for the HBaseue cluster and that restoration records exist.
 *
 * @param request DescribeRestoreSchemaDetailsRequest
 * @return DescribeRestoreSchemaDetailsResponse
 */
DescribeRestoreSchemaDetailsResponse Client::describeRestoreSchemaDetails(const DescribeRestoreSchemaDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRestoreSchemaDetailsWithOptions(request, runtime);
}

/**
 * @summary Retrieves the data recovery summary for an HBaseue cluster that has backup and recovery enabled by calling the DescribeRestoreSummary operation.
 *
 * @description Before calling this operation, make sure that backup and recovery is enabled for the HBaseue cluster.
 *
 * @param request DescribeRestoreSummaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRestoreSummaryResponse
 */
DescribeRestoreSummaryResponse Client::describeRestoreSummaryWithOptions(const DescribeRestoreSummaryRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRestoreSummary"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRestoreSummaryResponse>();
}

/**
 * @summary Retrieves the data recovery summary for an HBaseue cluster that has backup and recovery enabled by calling the DescribeRestoreSummary operation.
 *
 * @description Before calling this operation, make sure that backup and recovery is enabled for the HBaseue cluster.
 *
 * @param request DescribeRestoreSummaryRequest
 * @return DescribeRestoreSummaryResponse
 */
DescribeRestoreSummaryResponse Client::describeRestoreSummary(const DescribeRestoreSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRestoreSummaryWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a restore record for a cluster that has been restored from a backup.
 *
 * @description Before calling this operation, make sure that the backup and recovery feature is enabled for the HBaseue cluster and that restore records exist. You can call DescribeRestoreSummary to obtain restore records.
 *
 * @param request DescribeRestoreTablesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRestoreTablesResponse
 */
DescribeRestoreTablesResponse Client::describeRestoreTablesWithOptions(const DescribeRestoreTablesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasRestoreRecordId()) {
    query["RestoreRecordId"] = request.getRestoreRecordId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRestoreTables"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRestoreTablesResponse>();
}

/**
 * @summary Retrieves the details of a restore record for a cluster that has been restored from a backup.
 *
 * @description Before calling this operation, make sure that the backup and recovery feature is enabled for the HBaseue cluster and that restore records exist. You can call DescribeRestoreSummary to obtain restore records.
 *
 * @param request DescribeRestoreTablesRequest
 * @return DescribeRestoreTablesResponse
 */
DescribeRestoreTablesResponse Client::describeRestoreTables(const DescribeRestoreTablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRestoreTablesWithOptions(request, runtime);
}

/**
 * @summary Calls DescribeSecurityGroups to retrieve the security group information of a cluster by cluster ID.
 *
 * @param request DescribeSecurityGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSecurityGroupsResponse
 */
DescribeSecurityGroupsResponse Client::describeSecurityGroupsWithOptions(const DescribeSecurityGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSecurityGroups"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSecurityGroupsResponse>();
}

/**
 * @summary Calls DescribeSecurityGroups to retrieve the security group information of a cluster by cluster ID.
 *
 * @param request DescribeSecurityGroupsRequest
 * @return DescribeSecurityGroupsResponse
 */
DescribeSecurityGroupsResponse Client::describeSecurityGroups(const DescribeSecurityGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSecurityGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a serverless cluster by calling DescribeServerlessCluster.
 *
 * @param request DescribeServerlessClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeServerlessClusterResponse
 */
DescribeServerlessClusterResponse Client::describeServerlessClusterWithOptions(const DescribeServerlessClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeServerlessCluster"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeServerlessClusterResponse>();
}

/**
 * @summary Queries the details of a serverless cluster by calling DescribeServerlessCluster.
 *
 * @param request DescribeServerlessClusterRequest
 * @return DescribeServerlessClusterResponse
 */
DescribeServerlessClusterResponse Client::describeServerlessCluster(const DescribeServerlessClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeServerlessClusterWithOptions(request, runtime);
}

/**
 * @summary Calls DescribeSubDomain to retrieve an available subdomain.
 *
 * @param request DescribeSubDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSubDomainResponse
 */
DescribeSubDomainResponse Client::describeSubDomainWithOptions(const DescribeSubDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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
    {"action" , "DescribeSubDomain"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSubDomainResponse>();
}

/**
 * @summary Calls DescribeSubDomain to retrieve an available subdomain.
 *
 * @param request DescribeSubDomainRequest
 * @return DescribeSubDomainResponse
 */
DescribeSubDomainResponse Client::describeSubDomain(const DescribeSubDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSubDomainWithOptions(request, runtime);
}

/**
 * @summary Enables backup and recovery for an HBaseue cluster.
 *
 * @param request EnableHBaseueBackupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableHBaseueBackupResponse
 */
EnableHBaseueBackupResponse Client::enableHBaseueBackupWithOptions(const EnableHBaseueBackupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasColdStorageSize()) {
    query["ColdStorageSize"] = request.getColdStorageSize();
  }

  if (!!request.hasHbaseueClusterId()) {
    query["HbaseueClusterId"] = request.getHbaseueClusterId();
  }

  if (!!request.hasNodeCount()) {
    query["NodeCount"] = request.getNodeCount();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableHBaseueBackup"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableHBaseueBackupResponse>();
}

/**
 * @summary Enables backup and recovery for an HBaseue cluster.
 *
 * @param request EnableHBaseueBackupRequest
 * @return EnableHBaseueBackupResponse
 */
EnableHBaseueBackupResponse Client::enableHBaseueBackup(const EnableHBaseueBackupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableHBaseueBackupWithOptions(request, runtime);
}

/**
 * @summary Calls the EnableHBaseueModule operation to enable an extension service.
 *
 * @param request EnableHBaseueModuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableHBaseueModuleResponse
 */
EnableHBaseueModuleResponse Client::enableHBaseueModuleWithOptions(const EnableHBaseueModuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoRenewPeriod()) {
    query["AutoRenewPeriod"] = request.getAutoRenewPeriod();
  }

  if (!!request.hasBdsId()) {
    query["BdsId"] = request.getBdsId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCoreInstanceType()) {
    query["CoreInstanceType"] = request.getCoreInstanceType();
  }

  if (!!request.hasDiskSize()) {
    query["DiskSize"] = request.getDiskSize();
  }

  if (!!request.hasDiskType()) {
    query["DiskType"] = request.getDiskType();
  }

  if (!!request.hasHbaseueClusterId()) {
    query["HbaseueClusterId"] = request.getHbaseueClusterId();
  }

  if (!!request.hasMasterInstanceType()) {
    query["MasterInstanceType"] = request.getMasterInstanceType();
  }

  if (!!request.hasModuleClusterName()) {
    query["ModuleClusterName"] = request.getModuleClusterName();
  }

  if (!!request.hasModuleTypeName()) {
    query["ModuleTypeName"] = request.getModuleTypeName();
  }

  if (!!request.hasNodeCount()) {
    query["NodeCount"] = request.getNodeCount();
  }

  if (!!request.hasPayType()) {
    query["PayType"] = request.getPayType();
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

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  if (!!request.hasVswitchId()) {
    query["VswitchId"] = request.getVswitchId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableHBaseueModule"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableHBaseueModuleResponse>();
}

/**
 * @summary Calls the EnableHBaseueModule operation to enable an extension service.
 *
 * @param request EnableHBaseueModuleRequest
 * @return EnableHBaseueModuleResponse
 */
EnableHBaseueModuleResponse Client::enableHBaseueModule(const EnableHBaseueModuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableHBaseueModuleWithOptions(request, runtime);
}

/**
 * @summary Calls the EvaluateMultiZoneResource operation to evaluate whether available resources exist.
 *
 * @param request EvaluateMultiZoneResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EvaluateMultiZoneResourceResponse
 */
EvaluateMultiZoneResourceResponse Client::evaluateMultiZoneResourceWithOptions(const EvaluateMultiZoneResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasAutoRenewPeriod()) {
    query["AutoRenewPeriod"] = request.getAutoRenewPeriod();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasClusterName()) {
    query["ClusterName"] = request.getClusterName();
  }

  if (!!request.hasCoreDiskSize()) {
    query["CoreDiskSize"] = request.getCoreDiskSize();
  }

  if (!!request.hasCoreDiskType()) {
    query["CoreDiskType"] = request.getCoreDiskType();
  }

  if (!!request.hasCoreInstanceType()) {
    query["CoreInstanceType"] = request.getCoreInstanceType();
  }

  if (!!request.hasCoreNodeCount()) {
    query["CoreNodeCount"] = request.getCoreNodeCount();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.getEngine();
  }

  if (!!request.hasEngineVersion()) {
    query["EngineVersion"] = request.getEngineVersion();
  }

  if (!!request.hasLogDiskSize()) {
    query["LogDiskSize"] = request.getLogDiskSize();
  }

  if (!!request.hasLogDiskType()) {
    query["LogDiskType"] = request.getLogDiskType();
  }

  if (!!request.hasLogInstanceType()) {
    query["LogInstanceType"] = request.getLogInstanceType();
  }

  if (!!request.hasLogNodeCount()) {
    query["LogNodeCount"] = request.getLogNodeCount();
  }

  if (!!request.hasMasterInstanceType()) {
    query["MasterInstanceType"] = request.getMasterInstanceType();
  }

  if (!!request.hasMultiZoneCombination()) {
    query["MultiZoneCombination"] = request.getMultiZoneCombination();
  }

  if (!!request.hasPayType()) {
    query["PayType"] = request.getPayType();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasPeriodUnit()) {
    query["PeriodUnit"] = request.getPeriodUnit();
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

  if (!!request.hasSecurityIPList()) {
    query["SecurityIPList"] = request.getSecurityIPList();
  }

  if (!!request.hasStandbyVSwitchId()) {
    query["StandbyVSwitchId"] = request.getStandbyVSwitchId();
  }

  if (!!request.hasStandbyZoneId()) {
    query["StandbyZoneId"] = request.getStandbyZoneId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EvaluateMultiZoneResource"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EvaluateMultiZoneResourceResponse>();
}

/**
 * @summary Calls the EvaluateMultiZoneResource operation to evaluate whether available resources exist.
 *
 * @param request EvaluateMultiZoneResourceRequest
 * @return EvaluateMultiZoneResourceResponse
 */
EvaluateMultiZoneResourceResponse Client::evaluateMultiZoneResource(const EvaluateMultiZoneResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return evaluateMultiZoneResourceWithOptions(request, runtime);
}

/**
 * @summary Retrieves the monitoring URL based on the cluster ID.
 *
 * @description CloudMonitor has been migrated. This operation is no longer in use. Access monitoring from the Monitoring and Alerts page in cluster management.
 *
 * @param request GetMultimodeCmsUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMultimodeCmsUrlResponse
 */
GetMultimodeCmsUrlResponse Client::getMultimodeCmsUrlWithOptions(const GetMultimodeCmsUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "GetMultimodeCmsUrl"},
    {"version" , "2019-01-01"},
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
 * @summary Retrieves the monitoring URL based on the cluster ID.
 *
 * @description CloudMonitor has been migrated. This operation is no longer in use. Access monitoring from the Monitoring and Alerts page in cluster management.
 *
 * @param request GetMultimodeCmsUrlRequest
 * @return GetMultimodeCmsUrlResponse
 */
GetMultimodeCmsUrlResponse Client::getMultimodeCmsUrl(const GetMultimodeCmsUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMultimodeCmsUrlWithOptions(request, runtime);
}

/**
 * @summary Grants permissions to an account.
 *
 * @param request GrantRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GrantResponse
 */
GrantResponse Client::grantWithOptions(const GrantRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.getAccountName();
  }

  if (!!request.hasAclActions()) {
    query["AclActions"] = request.getAclActions();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "Grant"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GrantResponse>();
}

/**
 * @summary Grants permissions to an account.
 *
 * @param request GrantRequest
 * @return GrantResponse
 */
GrantResponse Client::grant(const GrantRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return grantWithOptions(request, runtime);
}

/**
 * @summary Calls ListHBaseInstances to retrieve ApsaraDB for HBase instances within the same VPC.
 *
 * @param request ListHBaseInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHBaseInstancesResponse
 */
ListHBaseInstancesResponse Client::listHBaseInstancesWithOptions(const ListHBaseInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListHBaseInstances"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHBaseInstancesResponse>();
}

/**
 * @summary Calls ListHBaseInstances to retrieve ApsaraDB for HBase instances within the same VPC.
 *
 * @param request ListHBaseInstancesRequest
 * @return ListHBaseInstancesResponse
 */
ListHBaseInstancesResponse Client::listHBaseInstances(const ListHBaseInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHBaseInstancesWithOptions(request, runtime);
}

/**
 * @summary Retrieves the modification history of cluster parameters by calling ListInstanceServiceConfigHistories.
 *
 * @param request ListInstanceServiceConfigHistoriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstanceServiceConfigHistoriesResponse
 */
ListInstanceServiceConfigHistoriesResponse Client::listInstanceServiceConfigHistoriesWithOptions(const ListInstanceServiceConfigHistoriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstanceServiceConfigHistories"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstanceServiceConfigHistoriesResponse>();
}

/**
 * @summary Retrieves the modification history of cluster parameters by calling ListInstanceServiceConfigHistories.
 *
 * @param request ListInstanceServiceConfigHistoriesRequest
 * @return ListInstanceServiceConfigHistoriesResponse
 */
ListInstanceServiceConfigHistoriesResponse Client::listInstanceServiceConfigHistories(const ListInstanceServiceConfigHistoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInstanceServiceConfigHistoriesWithOptions(request, runtime);
}

/**
 * @summary Retrieves the configuration items of a cluster by calling ListInstanceServiceConfigurations.
 *
 * @param request ListInstanceServiceConfigurationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstanceServiceConfigurationsResponse
 */
ListInstanceServiceConfigurationsResponse Client::listInstanceServiceConfigurationsWithOptions(const ListInstanceServiceConfigurationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstanceServiceConfigurations"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstanceServiceConfigurationsResponse>();
}

/**
 * @summary Retrieves the configuration items of a cluster by calling ListInstanceServiceConfigurations.
 *
 * @param request ListInstanceServiceConfigurationsRequest
 * @return ListInstanceServiceConfigurationsResponse
 */
ListInstanceServiceConfigurationsResponse Client::listInstanceServiceConfigurations(const ListInstanceServiceConfigurationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInstanceServiceConfigurationsWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of tags by ResourceId or Tag (query by Key only, or by both Key and Value).
 *
 * @description You must specify at least one of the ResourceId and Tag parameters. Otherwise, an error is returned.
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagResources"},
    {"version" , "2019-01-01"},
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
 * @summary Retrieves a list of tags by ResourceId or Tag (query by Key only, or by both Key and Value).
 *
 * @description You must specify at least one of the ResourceId and Tag parameters. Otherwise, an error is returned.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Retrieves all labels in a specified region.
 *
 * @param request ListTagsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagsResponse
 */
ListTagsResponse Client::listTagsWithOptions(const ListTagsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTags"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagsResponse>();
}

/**
 * @summary Retrieves all labels in a specified region.
 *
 * @param request ListTagsRequest
 * @return ListTagsResponse
 */
ListTagsResponse Client::listTags(const ListTagsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagsWithOptions(request, runtime);
}

/**
 * @summary Changes the password of a database access account.
 *
 * @param request ModifyAccountPasswordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAccountPasswordResponse
 */
ModifyAccountPasswordResponse Client::modifyAccountPasswordWithOptions(const ModifyAccountPasswordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.getAccountName();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasNewAccountPassword()) {
    query["NewAccountPassword"] = request.getNewAccountPassword();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAccountPassword"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAccountPasswordResponse>();
}

/**
 * @summary Changes the password of a database access account.
 *
 * @param request ModifyAccountPasswordRequest
 * @return ModifyAccountPasswordResponse
 */
ModifyAccountPasswordResponse Client::modifyAccountPassword(const ModifyAccountPasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAccountPasswordWithOptions(request, runtime);
}

/**
 * @summary Calls the ModifyActiveOperationTasks operation to modify the scheduled switchover time of O&M tasks.
 *
 * @description In addition to notifications sent by text message, phone call, email, or internal message, O&M events of ApsaraDB for HBase (such as minor engine version updates) are also displayed in the console. In addition to calling this operation to modify the scheduled switchover time, you can also modify it in the console. For more information, see [Query or manage pending events](https://help.aliyun.com/document_detail/405057.html).
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
    {"version" , "2019-01-01"},
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
 * @summary Calls the ModifyActiveOperationTasks operation to modify the scheduled switchover time of O&M tasks.
 *
 * @description In addition to notifications sent by text message, phone call, email, or internal message, O&M events of ApsaraDB for HBase (such as minor engine version updates) are also displayed in the console. In addition to calling this operation to modify the scheduled switchover time, you can also modify it in the console. For more information, see [Query or manage pending events](https://help.aliyun.com/document_detail/405057.html).
 *
 * @param request ModifyActiveOperationTasksRequest
 * @return ModifyActiveOperationTasksResponse
 */
ModifyActiveOperationTasksResponse Client::modifyActiveOperationTasks(const ModifyActiveOperationTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyActiveOperationTasksWithOptions(request, runtime);
}

/**
 * @summary Modifies the backup configuration for an HBaseue cluster that has backup and recovery enabled.
 *
 * @description Before calling this operation, make sure that the backup and recovery feature is enabled for the HBaseue cluster.
 *
 * @param request ModifyBackupPlanConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyBackupPlanConfigResponse
 */
ModifyBackupPlanConfigResponse Client::modifyBackupPlanConfigWithOptions(const ModifyBackupPlanConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasFullBackupCycle()) {
    query["FullBackupCycle"] = request.getFullBackupCycle();
  }

  if (!!request.hasMinHFileBackupCount()) {
    query["MinHFileBackupCount"] = request.getMinHFileBackupCount();
  }

  if (!!request.hasNextFullBackupDate()) {
    query["NextFullBackupDate"] = request.getNextFullBackupDate();
  }

  if (!!request.hasTables()) {
    query["Tables"] = request.getTables();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyBackupPlanConfig"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyBackupPlanConfigResponse>();
}

/**
 * @summary Modifies the backup configuration for an HBaseue cluster that has backup and recovery enabled.
 *
 * @description Before calling this operation, make sure that the backup and recovery feature is enabled for the HBaseue cluster.
 *
 * @param request ModifyBackupPlanConfigRequest
 * @return ModifyBackupPlanConfigResponse
 */
ModifyBackupPlanConfigResponse Client::modifyBackupPlanConfig(const ModifyBackupPlanConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyBackupPlanConfigWithOptions(request, runtime);
}

/**
 * @summary Calls ModifyBackupPolicy to modify the backup plan of an HBase cluster.
 *
 * @param request ModifyBackupPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyBackupPolicyResponse
 */
ModifyBackupPolicyResponse Client::modifyBackupPolicyWithOptions(const ModifyBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasPreferredBackupEndTimeUTC()) {
    query["PreferredBackupEndTimeUTC"] = request.getPreferredBackupEndTimeUTC();
  }

  if (!!request.hasPreferredBackupPeriod()) {
    query["PreferredBackupPeriod"] = request.getPreferredBackupPeriod();
  }

  if (!!request.hasPreferredBackupStartTimeUTC()) {
    query["PreferredBackupStartTimeUTC"] = request.getPreferredBackupStartTimeUTC();
  }

  if (!!request.hasPreferredBackupTime()) {
    query["PreferredBackupTime"] = request.getPreferredBackupTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyBackupPolicy"},
    {"version" , "2019-01-01"},
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
 * @summary Calls ModifyBackupPolicy to modify the backup plan of an HBase cluster.
 *
 * @param request ModifyBackupPolicyRequest
 * @return ModifyBackupPolicyResponse
 */
ModifyBackupPolicyResponse Client::modifyBackupPolicy(const ModifyBackupPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyBackupPolicyWithOptions(request, runtime);
}

/**
 * @summary Sets the deletion protection attribute of an instance by calling ModifyClusterDeletionProtection.
 *
 * @param request ModifyClusterDeletionProtectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyClusterDeletionProtectionResponse
 */
ModifyClusterDeletionProtectionResponse Client::modifyClusterDeletionProtectionWithOptions(const ModifyClusterDeletionProtectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasProtection()) {
    query["Protection"] = request.getProtection();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyClusterDeletionProtection"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyClusterDeletionProtectionResponse>();
}

/**
 * @summary Sets the deletion protection attribute of an instance by calling ModifyClusterDeletionProtection.
 *
 * @param request ModifyClusterDeletionProtectionRequest
 * @return ModifyClusterDeletionProtectionResponse
 */
ModifyClusterDeletionProtectionResponse Client::modifyClusterDeletionProtection(const ModifyClusterDeletionProtectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyClusterDeletionProtectionWithOptions(request, runtime);
}

/**
 * @summary Modifies the disk capacity alert threshold for HBase Cluster Edition and HBaseue clusters. The default alert threshold is 80%.
 *
 * @param request ModifyDiskWarningLineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDiskWarningLineResponse
 */
ModifyDiskWarningLineResponse Client::modifyDiskWarningLineWithOptions(const ModifyDiskWarningLineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasWarningLine()) {
    query["WarningLine"] = request.getWarningLine();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDiskWarningLine"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDiskWarningLineResponse>();
}

/**
 * @summary Modifies the disk capacity alert threshold for HBase Cluster Edition and HBaseue clusters. The default alert threshold is 80%.
 *
 * @param request ModifyDiskWarningLineRequest
 * @return ModifyDiskWarningLineResponse
 */
ModifyDiskWarningLineResponse Client::modifyDiskWarningLine(const ModifyDiskWarningLineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDiskWarningLineWithOptions(request, runtime);
}

/**
 * @summary Calls the ModifyInstanceMaintainTime operation to modify the O&M window start time of an instance.
 *
 * @param request ModifyInstanceMaintainTimeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceMaintainTimeResponse
 */
ModifyInstanceMaintainTimeResponse Client::modifyInstanceMaintainTimeWithOptions(const ModifyInstanceMaintainTimeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasMaintainEndTime()) {
    query["MaintainEndTime"] = request.getMaintainEndTime();
  }

  if (!!request.hasMaintainStartTime()) {
    query["MaintainStartTime"] = request.getMaintainStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyInstanceMaintainTime"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceMaintainTimeResponse>();
}

/**
 * @summary Calls the ModifyInstanceMaintainTime operation to modify the O&M window start time of an instance.
 *
 * @param request ModifyInstanceMaintainTimeRequest
 * @return ModifyInstanceMaintainTimeResponse
 */
ModifyInstanceMaintainTimeResponse Client::modifyInstanceMaintainTime(const ModifyInstanceMaintainTimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceMaintainTimeWithOptions(request, runtime);
}

/**
 * @summary Modifies the name of an instance by calling ModifyInstanceName.
 *
 * @param request ModifyInstanceNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceNameResponse
 */
ModifyInstanceNameResponse Client::modifyInstanceNameWithOptions(const ModifyInstanceNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasClusterName()) {
    query["ClusterName"] = request.getClusterName();
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
    {"action" , "ModifyInstanceName"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceNameResponse>();
}

/**
 * @summary Modifies the name of an instance by calling ModifyInstanceName.
 *
 * @param request ModifyInstanceNameRequest
 * @return ModifyInstanceNameResponse
 */
ModifyInstanceNameResponse Client::modifyInstanceName(const ModifyInstanceNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceNameWithOptions(request, runtime);
}

/**
 * @summary Calls ModifyInstanceServiceConfig to modify cluster configurations. You can call the ListInstanceServiceConfigurations operation to query the configuration items that can be modified.
 *
 * @param request ModifyInstanceServiceConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceServiceConfigResponse
 */
ModifyInstanceServiceConfigResponse Client::modifyInstanceServiceConfigWithOptions(const ModifyInstanceServiceConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasConfigureName()) {
    query["ConfigureName"] = request.getConfigureName();
  }

  if (!!request.hasConfigureValue()) {
    query["ConfigureValue"] = request.getConfigureValue();
  }

  if (!!request.hasParameters()) {
    query["Parameters"] = request.getParameters();
  }

  if (!!request.hasRestart()) {
    query["Restart"] = request.getRestart();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyInstanceServiceConfig"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceServiceConfigResponse>();
}

/**
 * @summary Calls ModifyInstanceServiceConfig to modify cluster configurations. You can call the ListInstanceServiceConfigurations operation to query the configuration items that can be modified.
 *
 * @param request ModifyInstanceServiceConfigRequest
 * @return ModifyInstanceServiceConfigResponse
 */
ModifyInstanceServiceConfigResponse Client::modifyInstanceServiceConfig(const ModifyInstanceServiceConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceServiceConfigWithOptions(request, runtime);
}

/**
 * @summary Calls ModifyInstanceType to change the specifications of an instance.
 *
 * @param request ModifyInstanceTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceTypeResponse
 */
ModifyInstanceTypeResponse Client::modifyInstanceTypeWithOptions(const ModifyInstanceTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasCoreInstanceType()) {
    query["CoreInstanceType"] = request.getCoreInstanceType();
  }

  if (!!request.hasMasterInstanceType()) {
    query["MasterInstanceType"] = request.getMasterInstanceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyInstanceType"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceTypeResponse>();
}

/**
 * @summary Calls ModifyInstanceType to change the specifications of an instance.
 *
 * @param request ModifyInstanceTypeRequest
 * @return ModifyInstanceTypeResponse
 */
ModifyInstanceTypeResponse Client::modifyInstanceType(const ModifyInstanceTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceTypeWithOptions(request, runtime);
}

/**
 * @summary Modifies the IP whitelist group of an instance by calling ModifyIpWhitelist.
 *
 * @param request ModifyIpWhitelistRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyIpWhitelistResponse
 */
ModifyIpWhitelistResponse Client::modifyIpWhitelistWithOptions(const ModifyIpWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasIpList()) {
    query["IpList"] = request.getIpList();
  }

  if (!!request.hasIpVersion()) {
    query["IpVersion"] = request.getIpVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyIpWhitelist"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyIpWhitelistResponse>();
}

/**
 * @summary Modifies the IP whitelist group of an instance by calling ModifyIpWhitelist.
 *
 * @param request ModifyIpWhitelistRequest
 * @return ModifyIpWhitelistResponse
 */
ModifyIpWhitelistResponse Client::modifyIpWhitelist(const ModifyIpWhitelistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyIpWhitelistWithOptions(request, runtime);
}

/**
 * @summary Modifies the node specifications of a multi-zone instance by calling ModifyMultiZoneClusterNodeType.
 *
 * @param request ModifyMultiZoneClusterNodeTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyMultiZoneClusterNodeTypeResponse
 */
ModifyMultiZoneClusterNodeTypeResponse Client::modifyMultiZoneClusterNodeTypeWithOptions(const ModifyMultiZoneClusterNodeTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasCoreInstanceType()) {
    query["CoreInstanceType"] = request.getCoreInstanceType();
  }

  if (!!request.hasLogInstanceType()) {
    query["LogInstanceType"] = request.getLogInstanceType();
  }

  if (!!request.hasMasterInstanceType()) {
    query["MasterInstanceType"] = request.getMasterInstanceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyMultiZoneClusterNodeType"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyMultiZoneClusterNodeTypeResponse>();
}

/**
 * @summary Modifies the node specifications of a multi-zone instance by calling ModifyMultiZoneClusterNodeType.
 *
 * @param request ModifyMultiZoneClusterNodeTypeRequest
 * @return ModifyMultiZoneClusterNodeTypeResponse
 */
ModifyMultiZoneClusterNodeTypeResponse Client::modifyMultiZoneClusterNodeType(const ModifyMultiZoneClusterNodeTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyMultiZoneClusterNodeTypeWithOptions(request, runtime);
}

/**
 * @summary Calls ModifySecurityGroups to modify the security groups associated with a cluster.
 *
 * @param request ModifySecurityGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySecurityGroupsResponse
 */
ModifySecurityGroupsResponse Client::modifySecurityGroupsWithOptions(const ModifySecurityGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasSecurityGroupIds()) {
    query["SecurityGroupIds"] = request.getSecurityGroupIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySecurityGroups"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySecurityGroupsResponse>();
}

/**
 * @summary Calls ModifySecurityGroups to modify the security groups associated with a cluster.
 *
 * @param request ModifySecurityGroupsRequest
 * @return ModifySecurityGroupsResponse
 */
ModifySecurityGroupsResponse Client::modifySecurityGroups(const ModifySecurityGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySecurityGroupsWithOptions(request, runtime);
}

/**
 * @summary Resets the password for accessing the cluster management UI by calling ModifyUIProxyAccountPassword.
 *
 * @param request ModifyUIAccountPasswordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyUIAccountPasswordResponse
 */
ModifyUIAccountPasswordResponse Client::modifyUIAccountPasswordWithOptions(const ModifyUIAccountPasswordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.getAccountName();
  }

  if (!!request.hasAccountPassword()) {
    query["AccountPassword"] = request.getAccountPassword();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyUIAccountPassword"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyUIAccountPasswordResponse>();
}

/**
 * @summary Resets the password for accessing the cluster management UI by calling ModifyUIProxyAccountPassword.
 *
 * @param request ModifyUIAccountPasswordRequest
 * @return ModifyUIAccountPasswordResponse
 */
ModifyUIAccountPasswordResponse Client::modifyUIAccountPassword(const ModifyUIAccountPasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyUIAccountPasswordWithOptions(request, runtime);
}

/**
 * @summary Moves a target instance to a target resource group.
 *
 * @param request MoveResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MoveResourceGroupResponse
 */
MoveResourceGroupResponse Client::moveResourceGroupWithOptions(const MoveResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasNewResourceGroupId()) {
    query["NewResourceGroupId"] = request.getNewResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MoveResourceGroup"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MoveResourceGroupResponse>();
}

/**
 * @summary Moves a target instance to a target resource group.
 *
 * @param request MoveResourceGroupRequest
 * @return MoveResourceGroupResponse
 */
MoveResourceGroupResponse Client::moveResourceGroup(const MoveResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return moveResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Enables the backup and recovery feature for an ApsaraDB for HBase cluster by calling OpenBackup.
 *
 * @param request OpenBackupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OpenBackupResponse
 */
OpenBackupResponse Client::openBackupWithOptions(const OpenBackupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OpenBackup"},
    {"version" , "2019-01-01"},
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
 * @summary Enables the backup and recovery feature for an ApsaraDB for HBase cluster by calling OpenBackup.
 *
 * @param request OpenBackupRequest
 * @return OpenBackupResponse
 */
OpenBackupResponse Client::openBackup(const OpenBackupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return openBackupWithOptions(request, runtime);
}

/**
 * @summary Completely cleans up an instance that has been deleted (within the last 7 days) but not fully cleaned up.
 *
 * @param request PurgeInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PurgeInstanceResponse
 */
PurgeInstanceResponse Client::purgeInstanceWithOptions(const PurgeInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PurgeInstance"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PurgeInstanceResponse>();
}

/**
 * @summary Completely cleans up an instance that has been deleted (within the last 7 days) but not fully cleaned up.
 *
 * @param request PurgeInstanceRequest
 * @return PurgeInstanceResponse
 */
PurgeInstanceResponse Client::purgeInstance(const PurgeInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return purgeInstanceWithOptions(request, runtime);
}

/**
 * @summary Queries the high-availability HBase list for a BDS cluster. This operation corresponds to CreateHaCluster and CreateHbaseHaSlb. It returns the corresponding high-availability list.
 *
 * @param request QueryHBaseHaDBRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryHBaseHaDBResponse
 */
QueryHBaseHaDBResponse Client::queryHBaseHaDBWithOptions(const QueryHBaseHaDBRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBdsId()) {
    query["BdsId"] = request.getBdsId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryHBaseHaDB"},
    {"version" , "2019-01-01"},
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
 * @summary Queries the high-availability HBase list for a BDS cluster. This operation corresponds to CreateHaCluster and CreateHbaseHaSlb. It returns the corresponding high-availability list.
 *
 * @param request QueryHBaseHaDBRequest
 * @return QueryHBaseHaDBResponse
 */
QueryHBaseHaDBResponse Client::queryHBaseHaDB(const QueryHBaseHaDBRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryHBaseHaDBWithOptions(request, runtime);
}

/**
 * @summary Queries the list of databases that can be associated with the current instance by calling QueryXpackRelateDB.
 *
 * @param request QueryXpackRelateDBRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryXpackRelateDBResponse
 */
QueryXpackRelateDBResponse Client::queryXpackRelateDBWithOptions(const QueryXpackRelateDBRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasHasSingleNode()) {
    query["HasSingleNode"] = request.getHasSingleNode();
  }

  if (!!request.hasRelateDbType()) {
    query["RelateDbType"] = request.getRelateDbType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryXpackRelateDB"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryXpackRelateDBResponse>();
}

/**
 * @summary Queries the list of databases that can be associated with the current instance by calling QueryXpackRelateDB.
 *
 * @param request QueryXpackRelateDBRequest
 * @return QueryXpackRelateDBResponse
 */
QueryXpackRelateDBResponse Client::queryXpackRelateDB(const QueryXpackRelateDBRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryXpackRelateDBWithOptions(request, runtime);
}

/**
 * @summary Adds an active-active instance pair to a BDS cluster.
 *
 * @param request RelateDbForHBaseHaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RelateDbForHBaseHaResponse
 */
RelateDbForHBaseHaResponse Client::relateDbForHBaseHaWithOptions(const RelateDbForHBaseHaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasHaActive()) {
    query["HaActive"] = request.getHaActive();
  }

  if (!!request.hasHaActiveClusterKey()) {
    query["HaActiveClusterKey"] = request.getHaActiveClusterKey();
  }

  if (!!request.hasHaActiveDBType()) {
    query["HaActiveDBType"] = request.getHaActiveDBType();
  }

  if (!!request.hasHaActiveHbaseFsDir()) {
    query["HaActiveHbaseFsDir"] = request.getHaActiveHbaseFsDir();
  }

  if (!!request.hasHaActiveHdfsUri()) {
    query["HaActiveHdfsUri"] = request.getHaActiveHdfsUri();
  }

  if (!!request.hasHaActivePassword()) {
    query["HaActivePassword"] = request.getHaActivePassword();
  }

  if (!!request.hasHaActiveUser()) {
    query["HaActiveUser"] = request.getHaActiveUser();
  }

  if (!!request.hasHaActiveVersion()) {
    query["HaActiveVersion"] = request.getHaActiveVersion();
  }

  if (!!request.hasHaMigrateType()) {
    query["HaMigrateType"] = request.getHaMigrateType();
  }

  if (!!request.hasHaStandby()) {
    query["HaStandby"] = request.getHaStandby();
  }

  if (!!request.hasHaStandbyClusterKey()) {
    query["HaStandbyClusterKey"] = request.getHaStandbyClusterKey();
  }

  if (!!request.hasHaStandbyDBType()) {
    query["HaStandbyDBType"] = request.getHaStandbyDBType();
  }

  if (!!request.hasHaStandbyHbaseFsDir()) {
    query["HaStandbyHbaseFsDir"] = request.getHaStandbyHbaseFsDir();
  }

  if (!!request.hasHaStandbyHdfsUri()) {
    query["HaStandbyHdfsUri"] = request.getHaStandbyHdfsUri();
  }

  if (!!request.hasHaStandbyPassword()) {
    query["HaStandbyPassword"] = request.getHaStandbyPassword();
  }

  if (!!request.hasHaStandbyUser()) {
    query["HaStandbyUser"] = request.getHaStandbyUser();
  }

  if (!!request.hasHaStandbyVersion()) {
    query["HaStandbyVersion"] = request.getHaStandbyVersion();
  }

  if (!!request.hasHaTables()) {
    query["HaTables"] = request.getHaTables();
  }

  if (!!request.hasIsActiveStandard()) {
    query["IsActiveStandard"] = request.getIsActiveStandard();
  }

  if (!!request.hasIsStandbyStandard()) {
    query["IsStandbyStandard"] = request.getIsStandbyStandard();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RelateDbForHBaseHa"},
    {"version" , "2019-01-01"},
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
 * @summary Adds an active-active instance pair to a BDS cluster.
 *
 * @param request RelateDbForHBaseHaRequest
 * @return RelateDbForHBaseHaResponse
 */
RelateDbForHBaseHaResponse Client::relateDbForHBaseHa(const RelateDbForHBaseHaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return relateDbForHBaseHaWithOptions(request, runtime);
}

/**
 * @summary Releases the public endpoint of an instance.
 *
 * @param request ReleasePublicNetworkAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleasePublicNetworkAddressResponse
 */
ReleasePublicNetworkAddressResponse Client::releasePublicNetworkAddressWithOptions(const ReleasePublicNetworkAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReleasePublicNetworkAddress"},
    {"version" , "2019-01-01"},
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
 * @summary Releases the public endpoint of an instance.
 *
 * @param request ReleasePublicNetworkAddressRequest
 * @return ReleasePublicNetworkAddressResponse
 */
ReleasePublicNetworkAddressResponse Client::releasePublicNetworkAddress(const ReleasePublicNetworkAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return releasePublicNetworkAddressWithOptions(request, runtime);
}

/**
 * @summary Renews a subscription for an HBase instance.
 *
 * @description This operation applies only to subscription HBase instances.
 *
 * @param request RenewInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RenewInstanceResponse
 */
RenewInstanceResponse Client::renewInstanceWithOptions(const RenewInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasDuration()) {
    query["Duration"] = request.getDuration();
  }

  if (!!request.hasPricingCycle()) {
    query["PricingCycle"] = request.getPricingCycle();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RenewInstance"},
    {"version" , "2019-01-01"},
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
 * @summary Renews a subscription for an HBase instance.
 *
 * @description This operation applies only to subscription HBase instances.
 *
 * @param request RenewInstanceRequest
 * @return RenewInstanceResponse
 */
RenewInstanceResponse Client::renewInstance(const RenewInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return renewInstanceWithOptions(request, runtime);
}

/**
 * @summary Changes the cold storage size.
 *
 * @param request ResizeColdStorageSizeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResizeColdStorageSizeResponse
 */
ResizeColdStorageSizeResponse Client::resizeColdStorageSizeWithOptions(const ResizeColdStorageSizeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasColdStorageSize()) {
    query["ColdStorageSize"] = request.getColdStorageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResizeColdStorageSize"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResizeColdStorageSizeResponse>();
}

/**
 * @summary Changes the cold storage size.
 *
 * @param request ResizeColdStorageSizeRequest
 * @return ResizeColdStorageSizeResponse
 */
ResizeColdStorageSizeResponse Client::resizeColdStorageSize(const ResizeColdStorageSizeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resizeColdStorageSizeWithOptions(request, runtime);
}

/**
 * @summary Calls ResizeDiskSize to resize a disk.
 *
 * @param request ResizeDiskSizeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResizeDiskSizeResponse
 */
ResizeDiskSizeResponse Client::resizeDiskSizeWithOptions(const ResizeDiskSizeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasNodeDiskSize()) {
    query["NodeDiskSize"] = request.getNodeDiskSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResizeDiskSize"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResizeDiskSizeResponse>();
}

/**
 * @summary Calls ResizeDiskSize to resize a disk.
 *
 * @param request ResizeDiskSizeRequest
 * @return ResizeDiskSizeResponse
 */
ResizeDiskSizeResponse Client::resizeDiskSize(const ResizeDiskSizeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resizeDiskSizeWithOptions(request, runtime);
}

/**
 * @summary Calls the ResizeMultiZoneClusterDiskSize operation to modify the disk size of a multi-zone instance.
 *
 * @param request ResizeMultiZoneClusterDiskSizeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResizeMultiZoneClusterDiskSizeResponse
 */
ResizeMultiZoneClusterDiskSizeResponse Client::resizeMultiZoneClusterDiskSizeWithOptions(const ResizeMultiZoneClusterDiskSizeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasCoreDiskSize()) {
    query["CoreDiskSize"] = request.getCoreDiskSize();
  }

  if (!!request.hasLogDiskSize()) {
    query["LogDiskSize"] = request.getLogDiskSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResizeMultiZoneClusterDiskSize"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResizeMultiZoneClusterDiskSizeResponse>();
}

/**
 * @summary Calls the ResizeMultiZoneClusterDiskSize operation to modify the disk size of a multi-zone instance.
 *
 * @param request ResizeMultiZoneClusterDiskSizeRequest
 * @return ResizeMultiZoneClusterDiskSizeResponse
 */
ResizeMultiZoneClusterDiskSizeResponse Client::resizeMultiZoneClusterDiskSize(const ResizeMultiZoneClusterDiskSizeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resizeMultiZoneClusterDiskSizeWithOptions(request, runtime);
}

/**
 * @summary Scales out nodes for a multi-zone instance by calling the ResizeMultiZoneClusterNodeCount operation.
 *
 * @param request ResizeMultiZoneClusterNodeCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResizeMultiZoneClusterNodeCountResponse
 */
ResizeMultiZoneClusterNodeCountResponse Client::resizeMultiZoneClusterNodeCountWithOptions(const ResizeMultiZoneClusterNodeCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasArbiterVSwitchId()) {
    query["ArbiterVSwitchId"] = request.getArbiterVSwitchId();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasCoreNodeCount()) {
    query["CoreNodeCount"] = request.getCoreNodeCount();
  }

  if (!!request.hasLogNodeCount()) {
    query["LogNodeCount"] = request.getLogNodeCount();
  }

  if (!!request.hasPrimaryCoreNodeCount()) {
    query["PrimaryCoreNodeCount"] = request.getPrimaryCoreNodeCount();
  }

  if (!!request.hasPrimaryVSwitchId()) {
    query["PrimaryVSwitchId"] = request.getPrimaryVSwitchId();
  }

  if (!!request.hasStandbyCoreNodeCount()) {
    query["StandbyCoreNodeCount"] = request.getStandbyCoreNodeCount();
  }

  if (!!request.hasStandbyVSwitchId()) {
    query["StandbyVSwitchId"] = request.getStandbyVSwitchId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResizeMultiZoneClusterNodeCount"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResizeMultiZoneClusterNodeCountResponse>();
}

/**
 * @summary Scales out nodes for a multi-zone instance by calling the ResizeMultiZoneClusterNodeCount operation.
 *
 * @param request ResizeMultiZoneClusterNodeCountRequest
 * @return ResizeMultiZoneClusterNodeCountResponse
 */
ResizeMultiZoneClusterNodeCountResponse Client::resizeMultiZoneClusterNodeCount(const ResizeMultiZoneClusterNodeCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resizeMultiZoneClusterNodeCountWithOptions(request, runtime);
}

/**
 * @summary Calls ResizeNodeCount to adjust the number of nodes for an instance.
 *
 * @description Scales up the number of core nodes in a cluster. You can add up to 50 nodes at a time, and the total number of nodes can be scaled up to 250. If you have additional requirements, submit a ticket.
 *
 * @param request ResizeNodeCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResizeNodeCountResponse
 */
ResizeNodeCountResponse Client::resizeNodeCountWithOptions(const ResizeNodeCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasNodeCount()) {
    query["NodeCount"] = request.getNodeCount();
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
    {"action" , "ResizeNodeCount"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResizeNodeCountResponse>();
}

/**
 * @summary Calls ResizeNodeCount to adjust the number of nodes for an instance.
 *
 * @description Scales up the number of core nodes in a cluster. You can add up to 50 nodes at a time, and the total number of nodes can be scaled up to 250. If you have additional requirements, submit a ticket.
 *
 * @param request ResizeNodeCountRequest
 * @return ResizeNodeCountResponse
 */
ResizeNodeCountResponse Client::resizeNodeCount(const ResizeNodeCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resizeNodeCountWithOptions(request, runtime);
}

/**
 * @summary Restarts an HBase cluster by calling RestartInstance.
 *
 * @param request RestartInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestartInstanceResponse
 */
RestartInstanceResponse Client::restartInstanceWithOptions(const RestartInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasComponents()) {
    query["Components"] = request.getComponents();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RestartInstance"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RestartInstanceResponse>();
}

/**
 * @summary Restarts an HBase cluster by calling RestartInstance.
 *
 * @param request RestartInstanceRequest
 * @return RestartInstanceResponse
 */
RestartInstanceResponse Client::restartInstance(const RestartInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return restartInstanceWithOptions(request, runtime);
}

/**
 * @summary Revokes permissions from a wide table account.
 *
 * @param request RevokeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevokeResponse
 */
RevokeResponse Client::revokeWithOptions(const RevokeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.getAccountName();
  }

  if (!!request.hasAclActions()) {
    query["AclActions"] = request.getAclActions();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "Revoke"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RevokeResponse>();
}

/**
 * @summary Revokes permissions from a wide table account.
 *
 * @param request RevokeRequest
 * @return RevokeResponse
 */
RevokeResponse Client::revoke(const RevokeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return revokeWithOptions(request, runtime);
}

/**
 * @summary Performs a primary/secondary switchover for high-availability Thrift or high-availability Phoenix. This operation corresponds to the CreateHbaseHaSlb operation.
 *
 * @param request SwitchHbaseHaSlbRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SwitchHbaseHaSlbResponse
 */
SwitchHbaseHaSlbResponse Client::switchHbaseHaSlbWithOptions(const SwitchHbaseHaSlbRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBdsId()) {
    query["BdsId"] = request.getBdsId();
  }

  if (!!request.hasHaId()) {
    query["HaId"] = request.getHaId();
  }

  if (!!request.hasHaTypes()) {
    query["HaTypes"] = request.getHaTypes();
  }

  if (!!request.hasHbaseType()) {
    query["HbaseType"] = request.getHbaseType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SwitchHbaseHaSlb"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SwitchHbaseHaSlbResponse>();
}

/**
 * @summary Performs a primary/secondary switchover for high-availability Thrift or high-availability Phoenix. This operation corresponds to the CreateHbaseHaSlb operation.
 *
 * @param request SwitchHbaseHaSlbRequest
 * @return SwitchHbaseHaSlbResponse
 */
SwitchHbaseHaSlbResponse Client::switchHbaseHaSlb(const SwitchHbaseHaSlbRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return switchHbaseHaSlbWithOptions(request, runtime);
}

/**
 * @summary Enable or disable an extension service
 *
 * @description Extension service  
 * For example: the Lindorm service compatible with the HBaseProxy protocol.
 *
 * @param request SwitchServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SwitchServiceResponse
 */
SwitchServiceResponse Client::switchServiceWithOptions(const SwitchServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasOperate()) {
    query["Operate"] = request.getOperate();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.getServiceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SwitchService"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SwitchServiceResponse>();
}

/**
 * @summary Enable or disable an extension service
 *
 * @description Extension service  
 * For example: the Lindorm service compatible with the HBaseProxy protocol.
 *
 * @param request SwitchServiceRequest
 * @return SwitchServiceResponse
 */
SwitchServiceResponse Client::switchService(const SwitchServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return switchServiceWithOptions(request, runtime);
}

/**
 * @summary Adds tags to instances.
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

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TagResources"},
    {"version" , "2019-01-01"},
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
 * @summary Adds tags to instances.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Untags resources. This operation is the counterpart of TagResources.
 *
 * @param request UnTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnTagResourcesResponse
 */
UnTagResourcesResponse Client::unTagResourcesWithOptions(const UnTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasTagKey()) {
    query["TagKey"] = request.getTagKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnTagResources"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnTagResourcesResponse>();
}

/**
 * @summary Untags resources. This operation is the counterpart of TagResources.
 *
 * @param request UnTagResourcesRequest
 * @return UnTagResourcesResponse
 */
UnTagResourcesResponse Client::unTagResources(const UnTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Upgrades the minor version of a cluster by calling UpgradeMinorVersion.
 *
 * @param request UpgradeMinorVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeMinorVersionResponse
 */
UpgradeMinorVersionResponse Client::upgradeMinorVersionWithOptions(const UpgradeMinorVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasComponents()) {
    query["Components"] = request.getComponents();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradeMinorVersion"},
    {"version" , "2019-01-01"},
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
 * @summary Upgrades the minor version of a cluster by calling UpgradeMinorVersion.
 *
 * @param request UpgradeMinorVersionRequest
 * @return UpgradeMinorVersionResponse
 */
UpgradeMinorVersionResponse Client::upgradeMinorVersion(const UpgradeMinorVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradeMinorVersionWithOptions(request, runtime);
}

/**
 * @summary Upgrades the minor version of components for a multi-zone instance by calling the UpgradeMultiZoneCluster operation.
 *
 * @param request UpgradeMultiZoneClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeMultiZoneClusterResponse
 */
UpgradeMultiZoneClusterResponse Client::upgradeMultiZoneClusterWithOptions(const UpgradeMultiZoneClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasComponents()) {
    query["Components"] = request.getComponents();
  }

  if (!!request.hasRestartComponents()) {
    query["RestartComponents"] = request.getRestartComponents();
  }

  if (!!request.hasRunMode()) {
    query["RunMode"] = request.getRunMode();
  }

  if (!!request.hasUpgradeInsName()) {
    query["UpgradeInsName"] = request.getUpgradeInsName();
  }

  if (!!request.hasVersions()) {
    query["Versions"] = request.getVersions();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradeMultiZoneCluster"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradeMultiZoneClusterResponse>();
}

/**
 * @summary Upgrades the minor version of components for a multi-zone instance by calling the UpgradeMultiZoneCluster operation.
 *
 * @param request UpgradeMultiZoneClusterRequest
 * @return UpgradeMultiZoneClusterResponse
 */
UpgradeMultiZoneClusterResponse Client::upgradeMultiZoneCluster(const UpgradeMultiZoneClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradeMultiZoneClusterWithOptions(request, runtime);
}

/**
 * @summary Associates a database by calling XpackRelateDB.
 *
 * @param request XpackRelateDBRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return XpackRelateDBResponse
 */
XpackRelateDBResponse Client::xpackRelateDBWithOptions(const XpackRelateDBRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasDbClusterIds()) {
    query["DbClusterIds"] = request.getDbClusterIds();
  }

  if (!!request.hasRelateDbType()) {
    query["RelateDbType"] = request.getRelateDbType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "XpackRelateDB"},
    {"version" , "2019-01-01"},
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
 * @summary Associates a database by calling XpackRelateDB.
 *
 * @param request XpackRelateDBRequest
 * @return XpackRelateDBResponse
 */
XpackRelateDBResponse Client::xpackRelateDB(const XpackRelateDBRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return xpackRelateDBWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace HBase20190101