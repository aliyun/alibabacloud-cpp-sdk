#include <darabonba/Core.hpp>
#include <alibabacloud/Hbr20170908.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Hbr20170908::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Hbr20170908
{

AlibabaCloud::Hbr20170908::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"ap-northeast-2-pop" , "hbr.aliyuncs.com"},
    {"cn-beijing-finance-pop" , "hbr.aliyuncs.com"},
    {"cn-beijing-gov-1" , "hbr.aliyuncs.com"},
    {"cn-beijing-nu16-b01" , "hbr.aliyuncs.com"},
    {"cn-edge-1" , "hbr.aliyuncs.com"},
    {"cn-fujian" , "hbr.aliyuncs.com"},
    {"cn-haidian-cm12-c01" , "hbr.aliyuncs.com"},
    {"cn-hangzhou-bj-b01" , "hbr.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1" , "hbr.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1" , "hbr.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2" , "hbr.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3" , "hbr.aliyuncs.com"},
    {"cn-hangzhou-test-306" , "hbr.aliyuncs.com"},
    {"cn-hongkong-finance-pop" , "hbr.aliyuncs.com"},
    {"cn-huhehaote-nebula-1" , "hbr.aliyuncs.com"},
    {"cn-qingdao-nebula" , "hbr.aliyuncs.com"},
    {"cn-shanghai-et15-b01" , "hbr.aliyuncs.com"},
    {"cn-shanghai-et2-b01" , "hbr.aliyuncs.com"},
    {"cn-shanghai-inner" , "hbr.aliyuncs.com"},
    {"cn-shanghai-internal-test-1" , "hbr.aliyuncs.com"},
    {"cn-shenzhen-inner" , "hbr.aliyuncs.com"},
    {"cn-shenzhen-st4-d01" , "hbr.aliyuncs.com"},
    {"cn-shenzhen-su18-b01" , "hbr.aliyuncs.com"},
    {"cn-wuhan" , "hbr.aliyuncs.com"},
    {"cn-yushanfang" , "hbr.aliyuncs.com"},
    {"cn-zhangbei" , "hbr.aliyuncs.com"},
    {"cn-zhangbei-na61-b01" , "hbr.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01" , "hbr.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1" , "hbr.aliyuncs.com"},
    {"eu-west-1-oxs" , "hbr.aliyuncs.com"},
    {"rus-west-1-pop" , "hbr.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("hbr", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Registers a Container Service for Kubernetes (ACK) cluster.
 *
 * @param request AddContainerClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddContainerClusterResponse
 */
AddContainerClusterResponse Client::addContainerClusterWithOptions(const AddContainerClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterType()) {
    query["ClusterType"] = request.clusterType();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasIdentifier()) {
    query["Identifier"] = request.identifier();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasNetworkType()) {
    query["NetworkType"] = request.networkType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddContainerCluster"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddContainerClusterResponse>();
}

/**
 * @summary Registers a Container Service for Kubernetes (ACK) cluster.
 *
 * @param request AddContainerClusterRequest
 * @return AddContainerClusterResponse
 */
AddContainerClusterResponse Client::addContainerCluster(const AddContainerClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addContainerClusterWithOptions(request, runtime);
}

/**
 * @summary Cancels a backup job.
 *
 * @param request CancelBackupJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelBackupJobResponse
 */
CancelBackupJobResponse Client::cancelBackupJobWithOptions(const CancelBackupJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEdition()) {
    query["Edition"] = request.edition();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasVaultId()) {
    query["VaultId"] = request.vaultId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelBackupJob"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelBackupJobResponse>();
}

/**
 * @summary Cancels a backup job.
 *
 * @param request CancelBackupJobRequest
 * @return CancelBackupJobResponse
 */
CancelBackupJobResponse Client::cancelBackupJob(const CancelBackupJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelBackupJobWithOptions(request, runtime);
}

/**
 * @summary Cancels a restore job.
 *
 * @param request CancelRestoreJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelRestoreJobResponse
 */
CancelRestoreJobResponse Client::cancelRestoreJobWithOptions(const CancelRestoreJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEdition()) {
    query["Edition"] = request.edition();
  }

  if (!!request.hasRestoreId()) {
    query["RestoreId"] = request.restoreId();
  }

  if (!!request.hasVaultId()) {
    query["VaultId"] = request.vaultId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelRestoreJob"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelRestoreJobResponse>();
}

/**
 * @summary Cancels a restore job.
 *
 * @param request CancelRestoreJobRequest
 * @return CancelRestoreJobResponse
 */
CancelRestoreJobResponse Client::cancelRestoreJob(const CancelRestoreJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelRestoreJobWithOptions(request, runtime);
}

/**
 * @summary Changes the resource group to which an instance belongs.
 *
 * @description *   In the Cloud Backup console, you can use resource groups to manage resources such as backup vaults, Cloud Backup clients, and SAP HANA instances.
 * *   A resource is a cloud service entity that you create on Alibaba Cloud, such as an Elastic Compute Service (ECS) instance, a backup vault, or an SAP HANA instance.
 * *   You can sort resources owned by your Alibaba Cloud account into various resource groups. Resource groups facilitate resource management among multiple projects or applications within your Alibaba Cloud account and simplify permission management.
 *
 * @param request ChangeResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroupWithOptions(const ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasNewResourceGroupId()) {
    body["NewResourceGroupId"] = request.newResourceGroupId();
  }

  if (!!request.hasResourceId()) {
    body["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.resourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ChangeResourceGroup"},
    {"version" , "2017-09-08"},
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
 * @summary Changes the resource group to which an instance belongs.
 *
 * @description *   In the Cloud Backup console, you can use resource groups to manage resources such as backup vaults, Cloud Backup clients, and SAP HANA instances.
 * *   A resource is a cloud service entity that you create on Alibaba Cloud, such as an Elastic Compute Service (ECS) instance, a backup vault, or an SAP HANA instance.
 * *   You can sort resources owned by your Alibaba Cloud account into various resource groups. Resource groups facilitate resource management among multiple projects or applications within your Alibaba Cloud account and simplify permission management.
 *
 * @param request ChangeResourceGroupRequest
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroup(const ChangeResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Checks whether the user has permissions to access the current resource or page.
 *
 * @param request CheckRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckRoleResponse
 */
CheckRoleResponse Client::checkRoleWithOptions(const CheckRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCheckRoleType()) {
    query["CheckRoleType"] = request.checkRoleType();
  }

  if (!!request.hasCrossAccountRoleName()) {
    query["CrossAccountRoleName"] = request.crossAccountRoleName();
  }

  if (!!request.hasCrossAccountUserId()) {
    query["CrossAccountUserId"] = request.crossAccountUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckRole"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckRoleResponse>();
}

/**
 * @summary Checks whether the user has permissions to access the current resource or page.
 *
 * @param request CheckRoleRequest
 * @return CheckRoleResponse
 */
CheckRoleResponse Client::checkRole(const CheckRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkRoleWithOptions(request, runtime);
}

/**
 * @summary Creates a backup job.
 *
 * @param tmpReq CreateBackupJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateBackupJobResponse
 */
CreateBackupJobResponse Client::createBackupJobWithOptions(const CreateBackupJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateBackupJobShrinkRequest request = CreateBackupJobShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDetail()) {
    request.setDetailShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.detail(), "Detail", "json"));
  }

  json query = {};
  if (!!request.hasBackupType()) {
    query["BackupType"] = request.backupType();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasContainerClusterId()) {
    query["ContainerClusterId"] = request.containerClusterId();
  }

  if (!!request.hasContainerResources()) {
    query["ContainerResources"] = request.containerResources();
  }

  if (!!request.hasCrossAccountRoleName()) {
    query["CrossAccountRoleName"] = request.crossAccountRoleName();
  }

  if (!!request.hasCrossAccountType()) {
    query["CrossAccountType"] = request.crossAccountType();
  }

  if (!!request.hasCrossAccountUserId()) {
    query["CrossAccountUserId"] = request.crossAccountUserId();
  }

  if (!!request.hasDetailShrink()) {
    query["Detail"] = request.detailShrink();
  }

  if (!!request.hasExclude()) {
    query["Exclude"] = request.exclude();
  }

  if (!!request.hasInclude()) {
    query["Include"] = request.include();
  }

  if (!!request.hasInitiatedByAck()) {
    query["InitiatedByAck"] = request.initiatedByAck();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobName()) {
    query["JobName"] = request.jobName();
  }

  if (!!request.hasOptions()) {
    query["Options"] = request.options();
  }

  if (!!request.hasRetention()) {
    query["Retention"] = request.retention();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.sourceType();
  }

  if (!!request.hasSpeedLimit()) {
    query["SpeedLimit"] = request.speedLimit();
  }

  if (!!request.hasVaultId()) {
    query["VaultId"] = request.vaultId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateBackupJob"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateBackupJobResponse>();
}

/**
 * @summary Creates a backup job.
 *
 * @param request CreateBackupJobRequest
 * @return CreateBackupJobResponse
 */
CreateBackupJobResponse Client::createBackupJob(const CreateBackupJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBackupJobWithOptions(request, runtime);
}

/**
 * @summary Create a backup plan.
 *
 * @description - A backup plan associates data sources with backup policies and other necessary information for backups. After the execution of a backup plan, it generates a backup task that records the progress and results of the backup. If the backup task is successful, a backup snapshot is created. You can use the backup snapshot to create a recovery task.
 * - A backup plan supports only one type of data source.
 * - A backup plan supports only a single fixed interval backup cycle strategy.
 * - A backup plan can back up to only one backup vault.
 *
 * @param tmpReq CreateBackupPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateBackupPlanResponse
 */
CreateBackupPlanResponse Client::createBackupPlanWithOptions(const CreateBackupPlanRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateBackupPlanShrinkRequest request = CreateBackupPlanShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDestDataSourceDetail()) {
    request.setDestDataSourceDetailShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.destDataSourceDetail(), "DestDataSourceDetail", "json"));
  }

  if (!!tmpReq.hasDetail()) {
    request.setDetailShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.detail(), "Detail", "json"));
  }

  if (!!tmpReq.hasOtsDetail()) {
    request.setOtsDetailShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.otsDetail(), "OtsDetail", "json"));
  }

  json query = {};
  if (!!request.hasBackupType()) {
    query["BackupType"] = request.backupType();
  }

  if (!!request.hasBucket()) {
    query["Bucket"] = request.bucket();
  }

  if (!!request.hasChangeListPath()) {
    query["ChangeListPath"] = request.changeListPath();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasCreateTime()) {
    query["CreateTime"] = request.createTime();
  }

  if (!!request.hasCrossAccountRoleName()) {
    query["CrossAccountRoleName"] = request.crossAccountRoleName();
  }

  if (!!request.hasCrossAccountType()) {
    query["CrossAccountType"] = request.crossAccountType();
  }

  if (!!request.hasCrossAccountUserId()) {
    query["CrossAccountUserId"] = request.crossAccountUserId();
  }

  if (!!request.hasDestDataSourceDetailShrink()) {
    query["DestDataSourceDetail"] = request.destDataSourceDetailShrink();
  }

  if (!!request.hasDestDataSourceId()) {
    query["DestDataSourceId"] = request.destDataSourceId();
  }

  if (!!request.hasDestSourceType()) {
    query["DestSourceType"] = request.destSourceType();
  }

  if (!!request.hasDetailShrink()) {
    query["Detail"] = request.detailShrink();
  }

  if (!!request.hasDisabled()) {
    query["Disabled"] = request.disabled();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.fileSystemId();
  }

  if (!!request.hasKeepLatestSnapshots()) {
    query["KeepLatestSnapshots"] = request.keepLatestSnapshots();
  }

  if (!!request.hasPlanName()) {
    query["PlanName"] = request.planName();
  }

  if (!!request.hasPrefix()) {
    query["Prefix"] = request.prefix();
  }

  if (!!request.hasRetention()) {
    query["Retention"] = request.retention();
  }

  if (!!request.hasSchedule()) {
    query["Schedule"] = request.schedule();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.sourceType();
  }

  if (!!request.hasUdmRegionId()) {
    query["UdmRegionId"] = request.udmRegionId();
  }

  if (!!request.hasVaultId()) {
    query["VaultId"] = request.vaultId();
  }

  json body = {};
  if (!!request.hasDataSourceId()) {
    body["DataSourceId"] = request.dataSourceId();
  }

  if (!!request.hasExclude()) {
    body["Exclude"] = request.exclude();
  }

  if (!!request.hasInclude()) {
    body["Include"] = request.include();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInstanceName()) {
    body["InstanceName"] = request.instanceName();
  }

  if (!!request.hasOptions()) {
    body["Options"] = request.options();
  }

  if (!!request.hasOtsDetailShrink()) {
    body["OtsDetail"] = request.otsDetailShrink();
  }

  if (!!request.hasPath()) {
    body["Path"] = request.path();
  }

  if (!!request.hasRule()) {
    body["Rule"] = request.rule();
  }

  if (!!request.hasSpeedLimit()) {
    body["SpeedLimit"] = request.speedLimit();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateBackupPlan"},
    {"version" , "2017-09-08"},
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
 * @summary Create a backup plan.
 *
 * @description - A backup plan associates data sources with backup policies and other necessary information for backups. After the execution of a backup plan, it generates a backup task that records the progress and results of the backup. If the backup task is successful, a backup snapshot is created. You can use the backup snapshot to create a recovery task.
 * - A backup plan supports only one type of data source.
 * - A backup plan supports only a single fixed interval backup cycle strategy.
 * - A backup plan can back up to only one backup vault.
 *
 * @param request CreateBackupPlanRequest
 * @return CreateBackupPlanResponse
 */
CreateBackupPlanResponse Client::createBackupPlan(const CreateBackupPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBackupPlanWithOptions(request, runtime);
}

/**
 * @summary Installs one or more Cloud Backup clients on specified instances.
 *
 * @description Before you call this operation, make sure that you fully understand the billing methods and pricing of Cloud Backup. For more information, see [Billing methods and billable items](https://help.aliyun.com/document_detail/89062.html).
 *
 * @param request CreateClientsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateClientsResponse
 */
CreateClientsResponse Client::createClientsWithOptions(const CreateClientsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlertSetting()) {
    query["AlertSetting"] = request.alertSetting();
  }

  if (!!request.hasClientInfo()) {
    query["ClientInfo"] = request.clientInfo();
  }

  if (!!request.hasCrossAccountRoleName()) {
    query["CrossAccountRoleName"] = request.crossAccountRoleName();
  }

  if (!!request.hasCrossAccountType()) {
    query["CrossAccountType"] = request.crossAccountType();
  }

  if (!!request.hasCrossAccountUserId()) {
    query["CrossAccountUserId"] = request.crossAccountUserId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasUseHttps()) {
    query["UseHttps"] = request.useHttps();
  }

  if (!!request.hasVaultId()) {
    query["VaultId"] = request.vaultId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateClients"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateClientsResponse>();
}

/**
 * @summary Installs one or more Cloud Backup clients on specified instances.
 *
 * @description Before you call this operation, make sure that you fully understand the billing methods and pricing of Cloud Backup. For more information, see [Billing methods and billable items](https://help.aliyun.com/document_detail/89062.html).
 *
 * @param request CreateClientsRequest
 * @return CreateClientsResponse
 */
CreateClientsResponse Client::createClients(const CreateClientsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createClientsWithOptions(request, runtime);
}

/**
 * @summary Creates a backup plan for an SAP HANA instance.
 *
 * @description *   A backup plan defines the data source, backup policy, and other configurations. After you execute a backup plan, a backup job is generated to record the backup progress and the backup result. If a backup job is completed, a backup snapshot is generated. You can use a backup snapshot to create a restore job.
 * *   You can specify only one type of data source in a backup plan.
 * *   You can specify only one interval as a backup cycle in a backup plan.
 * *   Each backup plan allows you to back up data to only one backup vault.
 *
 * @param request CreateHanaBackupPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateHanaBackupPlanResponse
 */
CreateHanaBackupPlanResponse Client::createHanaBackupPlanWithOptions(const CreateHanaBackupPlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupPrefix()) {
    query["BackupPrefix"] = request.backupPrefix();
  }

  if (!!request.hasBackupType()) {
    query["BackupType"] = request.backupType();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasDatabaseName()) {
    query["DatabaseName"] = request.databaseName();
  }

  if (!!request.hasPlanName()) {
    query["PlanName"] = request.planName();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSchedule()) {
    query["Schedule"] = request.schedule();
  }

  if (!!request.hasVaultId()) {
    query["VaultId"] = request.vaultId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateHanaBackupPlan"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateHanaBackupPlanResponse>();
}

/**
 * @summary Creates a backup plan for an SAP HANA instance.
 *
 * @description *   A backup plan defines the data source, backup policy, and other configurations. After you execute a backup plan, a backup job is generated to record the backup progress and the backup result. If a backup job is completed, a backup snapshot is generated. You can use a backup snapshot to create a restore job.
 * *   You can specify only one type of data source in a backup plan.
 * *   You can specify only one interval as a backup cycle in a backup plan.
 * *   Each backup plan allows you to back up data to only one backup vault.
 *
 * @param request CreateHanaBackupPlanRequest
 * @return CreateHanaBackupPlanResponse
 */
CreateHanaBackupPlanResponse Client::createHanaBackupPlan(const CreateHanaBackupPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createHanaBackupPlanWithOptions(request, runtime);
}

/**
 * @summary Registers an SAP HANA instance.
 *
 * @description To register an SAP HANA instance, you must configure the SAP HANA connection information. After the SAP HANA instance is registered, Cloud Backup installs a backup client on the node of the SAP HANA instance.
 *
 * @param request CreateHanaInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateHanaInstanceResponse
 */
CreateHanaInstanceResponse Client::createHanaInstanceWithOptions(const CreateHanaInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlertSetting()) {
    query["AlertSetting"] = request.alertSetting();
  }

  if (!!request.hasCrossAccountRoleName()) {
    query["CrossAccountRoleName"] = request.crossAccountRoleName();
  }

  if (!!request.hasCrossAccountType()) {
    query["CrossAccountType"] = request.crossAccountType();
  }

  if (!!request.hasCrossAccountUserId()) {
    query["CrossAccountUserId"] = request.crossAccountUserId();
  }

  if (!!request.hasEcsInstanceId()) {
    query["EcsInstanceId"] = request.ecsInstanceId();
  }

  if (!!request.hasHanaName()) {
    query["HanaName"] = request.hanaName();
  }

  if (!!request.hasHost()) {
    query["Host"] = request.host();
  }

  if (!!request.hasInstanceNumber()) {
    query["InstanceNumber"] = request.instanceNumber();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.password();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSid()) {
    query["Sid"] = request.sid();
  }

  if (!!request.hasUseSsl()) {
    query["UseSsl"] = request.useSsl();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.userName();
  }

  if (!!request.hasValidateCertificate()) {
    query["ValidateCertificate"] = request.validateCertificate();
  }

  if (!!request.hasVaultId()) {
    query["VaultId"] = request.vaultId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateHanaInstance"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateHanaInstanceResponse>();
}

/**
 * @summary Registers an SAP HANA instance.
 *
 * @description To register an SAP HANA instance, you must configure the SAP HANA connection information. After the SAP HANA instance is registered, Cloud Backup installs a backup client on the node of the SAP HANA instance.
 *
 * @param request CreateHanaInstanceRequest
 * @return CreateHanaInstanceResponse
 */
CreateHanaInstanceResponse Client::createHanaInstance(const CreateHanaInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createHanaInstanceWithOptions(request, runtime);
}

/**
 * @summary Creates a restore job for an SAP HANA database.
 *
 * @description If you call this operation to restore a database, the database is restored to a specified state. Proceed with caution. For more information, see [Restore databases to an SAP HANA instance](https://help.aliyun.com/document_detail/101178.html).
 *
 * @param request CreateHanaRestoreRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateHanaRestoreResponse
 */
CreateHanaRestoreResponse Client::createHanaRestoreWithOptions(const CreateHanaRestoreRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupId()) {
    query["BackupId"] = request.backupId();
  }

  if (!!request.hasBackupPrefix()) {
    query["BackupPrefix"] = request.backupPrefix();
  }

  if (!!request.hasCheckAccess()) {
    query["CheckAccess"] = request.checkAccess();
  }

  if (!!request.hasClearLog()) {
    query["ClearLog"] = request.clearLog();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasDatabaseName()) {
    query["DatabaseName"] = request.databaseName();
  }

  if (!!request.hasLogPosition()) {
    query["LogPosition"] = request.logPosition();
  }

  if (!!request.hasMasterClientId()) {
    query["MasterClientId"] = request.masterClientId();
  }

  if (!!request.hasMode()) {
    query["Mode"] = request.mode();
  }

  if (!!request.hasRecoveryPointInTime()) {
    query["RecoveryPointInTime"] = request.recoveryPointInTime();
  }

  if (!!request.hasSidAdmin()) {
    query["SidAdmin"] = request.sidAdmin();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.source();
  }

  if (!!request.hasSourceClusterId()) {
    query["SourceClusterId"] = request.sourceClusterId();
  }

  if (!!request.hasSystemCopy()) {
    query["SystemCopy"] = request.systemCopy();
  }

  if (!!request.hasUseCatalog()) {
    query["UseCatalog"] = request.useCatalog();
  }

  if (!!request.hasUseDelta()) {
    query["UseDelta"] = request.useDelta();
  }

  if (!!request.hasVaultId()) {
    query["VaultId"] = request.vaultId();
  }

  if (!!request.hasVolumeId()) {
    query["VolumeId"] = request.volumeId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateHanaRestore"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateHanaRestoreResponse>();
}

/**
 * @summary Creates a restore job for an SAP HANA database.
 *
 * @description If you call this operation to restore a database, the database is restored to a specified state. Proceed with caution. For more information, see [Restore databases to an SAP HANA instance](https://help.aliyun.com/document_detail/101178.html).
 *
 * @param request CreateHanaRestoreRequest
 * @return CreateHanaRestoreResponse
 */
CreateHanaRestoreResponse Client::createHanaRestore(const CreateHanaRestoreRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createHanaRestoreWithOptions(request, runtime);
}

/**
 * @summary Binds one or more data sources to a backup policy.
 *
 * @description *   You can bind data sources to only one policy in each request.
 * *   Elastic Compute Service (ECS) instances can be bound to only one policy.
 *
 * @param tmpReq CreatePolicyBindingsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePolicyBindingsResponse
 */
CreatePolicyBindingsResponse Client::createPolicyBindingsWithOptions(const CreatePolicyBindingsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreatePolicyBindingsShrinkRequest request = CreatePolicyBindingsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPolicyBindingList()) {
    request.setPolicyBindingListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.policyBindingList(), "PolicyBindingList", "json"));
  }

  json query = {};
  if (!!request.hasPolicyBindingListShrink()) {
    query["PolicyBindingList"] = request.policyBindingListShrink();
  }

  json body = {};
  if (!!request.hasPolicyId()) {
    body["PolicyId"] = request.policyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreatePolicyBindings"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePolicyBindingsResponse>();
}

/**
 * @summary Binds one or more data sources to a backup policy.
 *
 * @description *   You can bind data sources to only one policy in each request.
 * *   Elastic Compute Service (ECS) instances can be bound to only one policy.
 *
 * @param request CreatePolicyBindingsRequest
 * @return CreatePolicyBindingsResponse
 */
CreatePolicyBindingsResponse Client::createPolicyBindings(const CreatePolicyBindingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPolicyBindingsWithOptions(request, runtime);
}

/**
 * @summary Creates a backup policy.
 *
 * @description A backup policy records the information required for backup. After you execute a backup policy, a backup job is generated to record the backup progress and the backup result. If a backup job is completed, a backup snapshot is generated. You can use a backup snapshot to create a restore job.
 * *   A backup policy supports multiple data sources. The data sources can be only Elastic Compute Service (ECS) instances.
 * *   You can specify only one interval as a backup cycle in a backup policy.
 * *   Each backup policy allows you to back up data to only one backup vault.
 *
 * @param tmpReq CreatePolicyV2Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePolicyV2Response
 */
CreatePolicyV2Response Client::createPolicyV2WithOptions(const CreatePolicyV2Request &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreatePolicyV2ShrinkRequest request = CreatePolicyV2ShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRules()) {
    request.setRulesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.rules(), "Rules", "json"));
  }

  json body = {};
  if (!!request.hasPolicyDescription()) {
    body["PolicyDescription"] = request.policyDescription();
  }

  if (!!request.hasPolicyName()) {
    body["PolicyName"] = request.policyName();
  }

  if (!!request.hasPolicyType()) {
    body["PolicyType"] = request.policyType();
  }

  if (!!request.hasRulesShrink()) {
    body["Rules"] = request.rulesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreatePolicyV2"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePolicyV2Response>();
}

/**
 * @summary Creates a backup policy.
 *
 * @description A backup policy records the information required for backup. After you execute a backup policy, a backup job is generated to record the backup progress and the backup result. If a backup job is completed, a backup snapshot is generated. You can use a backup snapshot to create a restore job.
 * *   A backup policy supports multiple data sources. The data sources can be only Elastic Compute Service (ECS) instances.
 * *   You can specify only one interval as a backup cycle in a backup policy.
 * *   Each backup policy allows you to back up data to only one backup vault.
 *
 * @param request CreatePolicyV2Request
 * @return CreatePolicyV2Response
 */
CreatePolicyV2Response Client::createPolicyV2(const CreatePolicyV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPolicyV2WithOptions(request, runtime);
}

/**
 * @summary Creates a mirror vault.
 *
 * @description After a backup vault is created, the backup vault is in the INITIALIZING state, and the system automatically runs an initialization task to initialize the backup vault. After the initialization task is completed, the backup vault is in the CREATED state.Call this operation in the region where the mirror vault resides, which is specified by the VaultRegionId parameter.
 *
 * @param request CreateReplicationVaultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateReplicationVaultResponse
 */
CreateReplicationVaultResponse Client::createReplicationVaultWithOptions(const CreateReplicationVaultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasEncryptType()) {
    query["EncryptType"] = request.encryptType();
  }

  if (!!request.hasKmsKeyId()) {
    query["KmsKeyId"] = request.kmsKeyId();
  }

  if (!!request.hasRedundancyType()) {
    query["RedundancyType"] = request.redundancyType();
  }

  if (!!request.hasReplicationSourceRegionId()) {
    query["ReplicationSourceRegionId"] = request.replicationSourceRegionId();
  }

  if (!!request.hasReplicationSourceVaultId()) {
    query["ReplicationSourceVaultId"] = request.replicationSourceVaultId();
  }

  if (!!request.hasVaultName()) {
    query["VaultName"] = request.vaultName();
  }

  if (!!request.hasVaultRegionId()) {
    query["VaultRegionId"] = request.vaultRegionId();
  }

  if (!!request.hasVaultStorageClass()) {
    query["VaultStorageClass"] = request.vaultStorageClass();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateReplicationVault"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateReplicationVaultResponse>();
}

/**
 * @summary Creates a mirror vault.
 *
 * @description After a backup vault is created, the backup vault is in the INITIALIZING state, and the system automatically runs an initialization task to initialize the backup vault. After the initialization task is completed, the backup vault is in the CREATED state.Call this operation in the region where the mirror vault resides, which is specified by the VaultRegionId parameter.
 *
 * @param request CreateReplicationVaultRequest
 * @return CreateReplicationVaultResponse
 */
CreateReplicationVaultResponse Client::createReplicationVault(const CreateReplicationVaultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createReplicationVaultWithOptions(request, runtime);
}

/**
 * @summary Create a restore job.
 *
 * @description - Create a restore job based on the selected snapshot and the restore destination.
 * - Currently, the data source type must match the restore destination data source type.
 *
 * @param tmpReq CreateRestoreJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRestoreJobResponse
 */
CreateRestoreJobResponse Client::createRestoreJobWithOptions(const CreateRestoreJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateRestoreJobShrinkRequest request = CreateRestoreJobShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFailbackDetail()) {
    request.setFailbackDetailShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.failbackDetail(), "FailbackDetail", "json"));
  }

  if (!!tmpReq.hasOtsDetail()) {
    request.setOtsDetailShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.otsDetail(), "OtsDetail", "json"));
  }

  if (!!tmpReq.hasUdmDetail()) {
    request.setUdmDetailShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.udmDetail(), "UdmDetail", "json"));
  }

  json query = {};
  if (!!request.hasCrossAccountRoleName()) {
    query["CrossAccountRoleName"] = request.crossAccountRoleName();
  }

  if (!!request.hasCrossAccountType()) {
    query["CrossAccountType"] = request.crossAccountType();
  }

  if (!!request.hasCrossAccountUserId()) {
    query["CrossAccountUserId"] = request.crossAccountUserId();
  }

  if (!!request.hasEdition()) {
    query["Edition"] = request.edition();
  }

  if (!!request.hasFailbackDetailShrink()) {
    query["FailbackDetail"] = request.failbackDetailShrink();
  }

  if (!!request.hasInitiatedByAck()) {
    query["InitiatedByAck"] = request.initiatedByAck();
  }

  if (!!request.hasOptions()) {
    query["Options"] = request.options();
  }

  if (!!request.hasRestoreType()) {
    query["RestoreType"] = request.restoreType();
  }

  if (!!request.hasSnapshotHash()) {
    query["SnapshotHash"] = request.snapshotHash();
  }

  if (!!request.hasSnapshotId()) {
    query["SnapshotId"] = request.snapshotId();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.sourceType();
  }

  if (!!request.hasTargetBucket()) {
    query["TargetBucket"] = request.targetBucket();
  }

  if (!!request.hasTargetContainer()) {
    query["TargetContainer"] = request.targetContainer();
  }

  if (!!request.hasTargetContainerClusterId()) {
    query["TargetContainerClusterId"] = request.targetContainerClusterId();
  }

  if (!!request.hasTargetCreateTime()) {
    query["TargetCreateTime"] = request.targetCreateTime();
  }

  if (!!request.hasTargetFileSystemId()) {
    query["TargetFileSystemId"] = request.targetFileSystemId();
  }

  if (!!request.hasTargetInstanceName()) {
    query["TargetInstanceName"] = request.targetInstanceName();
  }

  if (!!request.hasTargetPrefix()) {
    query["TargetPrefix"] = request.targetPrefix();
  }

  if (!!request.hasTargetTableName()) {
    query["TargetTableName"] = request.targetTableName();
  }

  if (!!request.hasTargetTime()) {
    query["TargetTime"] = request.targetTime();
  }

  if (!!request.hasUdmDetailShrink()) {
    query["UdmDetail"] = request.udmDetailShrink();
  }

  if (!!request.hasUdmRegionId()) {
    query["UdmRegionId"] = request.udmRegionId();
  }

  if (!!request.hasVaultId()) {
    query["VaultId"] = request.vaultId();
  }

  json body = {};
  if (!!request.hasExclude()) {
    body["Exclude"] = request.exclude();
  }

  if (!!request.hasInclude()) {
    body["Include"] = request.include();
  }

  if (!!request.hasOtsDetailShrink()) {
    body["OtsDetail"] = request.otsDetailShrink();
  }

  if (!!request.hasTargetInstanceId()) {
    body["TargetInstanceId"] = request.targetInstanceId();
  }

  if (!!request.hasTargetPath()) {
    body["TargetPath"] = request.targetPath();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateRestoreJob"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRestoreJobResponse>();
}

/**
 * @summary Create a restore job.
 *
 * @description - Create a restore job based on the selected snapshot and the restore destination.
 * - Currently, the data source type must match the restore destination data source type.
 *
 * @param request CreateRestoreJobRequest
 * @return CreateRestoreJobResponse
 */
CreateRestoreJobResponse Client::createRestoreJob(const CreateRestoreJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRestoreJobWithOptions(request, runtime);
}

/**
 * @summary Generates the parameters and signature required for a file upload URL.
 *
 * @description 1.  You can directly upload a file to Object Storage Service (OSS) by using a form based on the returned value of this operation.
 * 2.  For more information about how to upload a file to OSS by using a form, see OSS documentation.
 * 3.  The system periodically deletes files that are uploaded to OSS.
 *
 * @param request CreateTempFileUploadUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTempFileUploadUrlResponse
 */
CreateTempFileUploadUrlResponse Client::createTempFileUploadUrlWithOptions(const CreateTempFileUploadUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileName()) {
    query["FileName"] = request.fileName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateTempFileUploadUrl"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTempFileUploadUrlResponse>();
}

/**
 * @summary Generates the parameters and signature required for a file upload URL.
 *
 * @description 1.  You can directly upload a file to Object Storage Service (OSS) by using a form based on the returned value of this operation.
 * 2.  For more information about how to upload a file to OSS by using a form, see OSS documentation.
 * 3.  The system periodically deletes files that are uploaded to OSS.
 *
 * @param request CreateTempFileUploadUrlRequest
 * @return CreateTempFileUploadUrlResponse
 */
CreateTempFileUploadUrlResponse Client::createTempFileUploadUrl(const CreateTempFileUploadUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTempFileUploadUrlWithOptions(request, runtime);
}

/**
 * @summary Creates a backup vault.
 *
 * @description *   Each Alibaba Cloud account can create up to 100 backup vaults.
 * *   After a backup vault is created, the backup vault is in the INITIALIZING state, and the system automatically runs an initialization task to initialize the backup vault. After the initialization task is completed, the backup vault is in the CREATED state. A backup job can use a backup vault to store backup data only if the backup vault is in the CREATED state.
 *     **
 *     **Note** Before you call this operation, make sure that you fully understand the billing of Cloud Backup.
 *
 * @param request CreateVaultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVaultResponse
 */
CreateVaultResponse Client::createVaultWithOptions(const CreateVaultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasEncryptType()) {
    query["EncryptType"] = request.encryptType();
  }

  if (!!request.hasKmsKeyId()) {
    query["KmsKeyId"] = request.kmsKeyId();
  }

  if (!!request.hasVaultName()) {
    query["VaultName"] = request.vaultName();
  }

  if (!!request.hasVaultRegionId()) {
    query["VaultRegionId"] = request.vaultRegionId();
  }

  if (!!request.hasVaultStorageClass()) {
    query["VaultStorageClass"] = request.vaultStorageClass();
  }

  if (!!request.hasVaultType()) {
    query["VaultType"] = request.vaultType();
  }

  if (!!request.hasWormEnabled()) {
    query["WormEnabled"] = request.wormEnabled();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateVault"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateVaultResponse>();
}

/**
 * @summary Creates a backup vault.
 *
 * @description *   Each Alibaba Cloud account can create up to 100 backup vaults.
 * *   After a backup vault is created, the backup vault is in the INITIALIZING state, and the system automatically runs an initialization task to initialize the backup vault. After the initialization task is completed, the backup vault is in the CREATED state. A backup job can use a backup vault to store backup data only if the backup vault is in the CREATED state.
 *     **
 *     **Note** Before you call this operation, make sure that you fully understand the billing of Cloud Backup.
 *
 * @param request CreateVaultRequest
 * @return CreateVaultResponse
 */
CreateVaultResponse Client::createVault(const CreateVaultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createVaultWithOptions(request, runtime);
}

/**
 * @summary Removes the Elastic Compute Service (ECS) instance that is used for restoration only in ECS Backup Essential Edition.
 *
 * @param tmpReq DeleteAirEcsInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAirEcsInstanceResponse
 */
DeleteAirEcsInstanceResponse Client::deleteAirEcsInstanceWithOptions(const DeleteAirEcsInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteAirEcsInstanceShrinkRequest request = DeleteAirEcsInstanceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUninstallClientSourceTypes()) {
    request.setUninstallClientSourceTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.uninstallClientSourceTypes(), "UninstallClientSourceTypes", "json"));
  }

  json query = {};
  if (!!request.hasEcsInstanceId()) {
    query["EcsInstanceId"] = request.ecsInstanceId();
  }

  if (!!request.hasUninstallClientSourceTypesShrink()) {
    query["UninstallClientSourceTypes"] = request.uninstallClientSourceTypesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAirEcsInstance"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAirEcsInstanceResponse>();
}

/**
 * @summary Removes the Elastic Compute Service (ECS) instance that is used for restoration only in ECS Backup Essential Edition.
 *
 * @param request DeleteAirEcsInstanceRequest
 * @return DeleteAirEcsInstanceResponse
 */
DeleteAirEcsInstanceResponse Client::deleteAirEcsInstance(const DeleteAirEcsInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAirEcsInstanceWithOptions(request, runtime);
}

/**
 * @summary Deletes a Cloud Backup client.
 *
 * @description *   You cannot delete the active Cloud Backup clients that receive heartbeat packets within 1 hour. You can call the UninstallBackupClients operation to uninstall a Cloud Backup client. Then, the client becomes inactive.
 * *   When you perform this operation, resources that are associated with the client are also deleted, including:
 *     *   Backup plans
 *     *   Backup jobs
 *     *   Snapshots
 *
 * @param request DeleteBackupClientRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteBackupClientResponse
 */
DeleteBackupClientResponse Client::deleteBackupClientWithOptions(const DeleteBackupClientRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientId()) {
    query["ClientId"] = request.clientId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteBackupClient"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteBackupClientResponse>();
}

/**
 * @summary Deletes a Cloud Backup client.
 *
 * @description *   You cannot delete the active Cloud Backup clients that receive heartbeat packets within 1 hour. You can call the UninstallBackupClients operation to uninstall a Cloud Backup client. Then, the client becomes inactive.
 * *   When you perform this operation, resources that are associated with the client are also deleted, including:
 *     *   Backup plans
 *     *   Backup jobs
 *     *   Snapshots
 *
 * @param request DeleteBackupClientRequest
 * @return DeleteBackupClientResponse
 */
DeleteBackupClientResponse Client::deleteBackupClient(const DeleteBackupClientRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteBackupClientWithOptions(request, runtime);
}

/**
 * @summary Deletes the resources that are related to one or more HBR clients.
 *
 * @description This operation deletes only the resources that are related to HBR clients. The resources include backup plans, backup jobs, and backup snapshots. The operation does not delete HBR clients.
 *
 * @param tmpReq DeleteBackupClientResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteBackupClientResourceResponse
 */
DeleteBackupClientResourceResponse Client::deleteBackupClientResourceWithOptions(const DeleteBackupClientResourceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteBackupClientResourceShrinkRequest request = DeleteBackupClientResourceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasClientIds()) {
    request.setClientIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.clientIds(), "ClientIds", "json"));
  }

  json query = {};
  if (!!request.hasClientIdsShrink()) {
    query["ClientIds"] = request.clientIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteBackupClientResource"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteBackupClientResourceResponse>();
}

/**
 * @summary Deletes the resources that are related to one or more HBR clients.
 *
 * @description This operation deletes only the resources that are related to HBR clients. The resources include backup plans, backup jobs, and backup snapshots. The operation does not delete HBR clients.
 *
 * @param request DeleteBackupClientResourceRequest
 * @return DeleteBackupClientResourceResponse
 */
DeleteBackupClientResourceResponse Client::deleteBackupClientResource(const DeleteBackupClientResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteBackupClientResourceWithOptions(request, runtime);
}

/**
 * @summary Deletes a backup plan.
 *
 * @description *   If you delete a backup plan, the backup jobs are also deleted.
 * *   If you delete a backup plan, the created snapshot files are not deleted.
 *
 * @param request DeleteBackupPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteBackupPlanResponse
 */
DeleteBackupPlanResponse Client::deleteBackupPlanWithOptions(const DeleteBackupPlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEdition()) {
    query["Edition"] = request.edition();
  }

  if (!!request.hasPlanId()) {
    query["PlanId"] = request.planId();
  }

  if (!!request.hasRequireNoRunningJobs()) {
    query["RequireNoRunningJobs"] = request.requireNoRunningJobs();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.sourceType();
  }

  if (!!request.hasVaultId()) {
    query["VaultId"] = request.vaultId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteBackupPlan"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteBackupPlanResponse>();
}

/**
 * @summary Deletes a backup plan.
 *
 * @description *   If you delete a backup plan, the backup jobs are also deleted.
 * *   If you delete a backup plan, the created snapshot files are not deleted.
 *
 * @param request DeleteBackupPlanRequest
 * @return DeleteBackupPlanResponse
 */
DeleteBackupPlanResponse Client::deleteBackupPlan(const DeleteBackupPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteBackupPlanWithOptions(request, runtime);
}

/**
 * @param request DeleteClientRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteClientResponse
 */
DeleteClientResponse Client::deleteClientWithOptions(const DeleteClientRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientId()) {
    query["ClientId"] = request.clientId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasVaultId()) {
    query["VaultId"] = request.vaultId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteClient"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteClientResponse>();
}

/**
 * @param request DeleteClientRequest
 * @return DeleteClientResponse
 */
DeleteClientResponse Client::deleteClient(const DeleteClientRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteClientWithOptions(request, runtime);
}

/**
 * @summary Deletes an SAP HANA backup plan.
 *
 * @param request DeleteHanaBackupPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteHanaBackupPlanResponse
 */
DeleteHanaBackupPlanResponse Client::deleteHanaBackupPlanWithOptions(const DeleteHanaBackupPlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasPlanId()) {
    query["PlanId"] = request.planId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasVaultId()) {
    query["VaultId"] = request.vaultId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteHanaBackupPlan"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteHanaBackupPlanResponse>();
}

/**
 * @summary Deletes an SAP HANA backup plan.
 *
 * @param request DeleteHanaBackupPlanRequest
 * @return DeleteHanaBackupPlanResponse
 */
DeleteHanaBackupPlanResponse Client::deleteHanaBackupPlan(const DeleteHanaBackupPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteHanaBackupPlanWithOptions(request, runtime);
}

/**
 * @summary Deletes an SAP HANA instance.
 *
 * @description If you delete an SAP HANA instance, the existing backup data is also deleted and the running backup and restore jobs fail to be completed. Before you delete the SAP HANA instance, make sure that you no longer need the backup data of the instance and no backup or restore jobs are running for the instance. To delete an SAP HANA instance, you must specify the security identifier (SID) of the instance. The SID is three characters in length and starts with a letter. For more information, see [How to find sid user and instance number of HANA db?](https://answers.sap.com/questions/555192/how-to-find-sid-user-and-instance-number-of-hana-d.html?)
 *
 * @param request DeleteHanaInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteHanaInstanceResponse
 */
DeleteHanaInstanceResponse Client::deleteHanaInstanceWithOptions(const DeleteHanaInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSid()) {
    query["Sid"] = request.sid();
  }

  if (!!request.hasVaultId()) {
    query["VaultId"] = request.vaultId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteHanaInstance"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteHanaInstanceResponse>();
}

/**
 * @summary Deletes an SAP HANA instance.
 *
 * @description If you delete an SAP HANA instance, the existing backup data is also deleted and the running backup and restore jobs fail to be completed. Before you delete the SAP HANA instance, make sure that you no longer need the backup data of the instance and no backup or restore jobs are running for the instance. To delete an SAP HANA instance, you must specify the security identifier (SID) of the instance. The SID is three characters in length and starts with a letter. For more information, see [How to find sid user and instance number of HANA db?](https://answers.sap.com/questions/555192/how-to-find-sid-user-and-instance-number-of-hana-d.html?)
 *
 * @param request DeleteHanaInstanceRequest
 * @return DeleteHanaInstanceResponse
 */
DeleteHanaInstanceResponse Client::deleteHanaInstance(const DeleteHanaInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteHanaInstanceWithOptions(request, runtime);
}

/**
 * @summary Disassociates one or more data sources from a backup policy. After you disassociate the data sources from the backup policy, the backup policy no longer protects the data sources. Proceed with caution.
 *
 * @param tmpReq DeletePolicyBindingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePolicyBindingResponse
 */
DeletePolicyBindingResponse Client::deletePolicyBindingWithOptions(const DeletePolicyBindingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeletePolicyBindingShrinkRequest request = DeletePolicyBindingShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDataSourceIds()) {
    request.setDataSourceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.dataSourceIds(), "DataSourceIds", "json"));
  }

  json query = {};
  if (!!request.hasSourceType()) {
    query["SourceType"] = request.sourceType();
  }

  json body = {};
  if (!!request.hasDataSourceIdsShrink()) {
    body["DataSourceIds"] = request.dataSourceIdsShrink();
  }

  if (!!request.hasPolicyId()) {
    body["PolicyId"] = request.policyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeletePolicyBinding"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePolicyBindingResponse>();
}

/**
 * @summary Disassociates one or more data sources from a backup policy. After you disassociate the data sources from the backup policy, the backup policy no longer protects the data sources. Proceed with caution.
 *
 * @param request DeletePolicyBindingRequest
 * @return DeletePolicyBindingResponse
 */
DeletePolicyBindingResponse Client::deletePolicyBinding(const DeletePolicyBindingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePolicyBindingWithOptions(request, runtime);
}

/**
 * @summary Deletes a backup policy.
 *
 * @description If you delete a backup policy, the backup policy is disassociated with all data sources. Proceed with caution.
 *
 * @param request DeletePolicyV2Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePolicyV2Response
 */
DeletePolicyV2Response Client::deletePolicyV2WithOptions(const DeletePolicyV2Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPolicyId()) {
    body["PolicyId"] = request.policyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeletePolicyV2"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePolicyV2Response>();
}

/**
 * @summary Deletes a backup policy.
 *
 * @description If you delete a backup policy, the backup policy is disassociated with all data sources. Proceed with caution.
 *
 * @param request DeletePolicyV2Request
 * @return DeletePolicyV2Response
 */
DeletePolicyV2Response Client::deletePolicyV2(const DeletePolicyV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePolicyV2WithOptions(request, runtime);
}

/**
 * @summary Deletes a backup snapshot.
 *
 * @param request DeleteSnapshotRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSnapshotResponse
 */
DeleteSnapshotResponse Client::deleteSnapshotWithOptions(const DeleteSnapshotRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientId()) {
    query["ClientId"] = request.clientId();
  }

  if (!!request.hasForce()) {
    query["Force"] = request.force();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasSnapshotId()) {
    query["SnapshotId"] = request.snapshotId();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.sourceType();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.token();
  }

  if (!!request.hasVaultId()) {
    query["VaultId"] = request.vaultId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSnapshot"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSnapshotResponse>();
}

/**
 * @summary Deletes a backup snapshot.
 *
 * @param request DeleteSnapshotRequest
 * @return DeleteSnapshotResponse
 */
DeleteSnapshotResponse Client::deleteSnapshot(const DeleteSnapshotRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSnapshotWithOptions(request, runtime);
}

/**
 * @summary Cancels a protected disk.
 *
 * @param request DeleteUdmDiskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUdmDiskResponse
 */
DeleteUdmDiskResponse Client::deleteUdmDiskWithOptions(const DeleteUdmDiskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDiskId()) {
    query["DiskId"] = request.diskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteUdmDisk"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteUdmDiskResponse>();
}

/**
 * @summary Cancels a protected disk.
 *
 * @param request DeleteUdmDiskRequest
 * @return DeleteUdmDiskResponse
 */
DeleteUdmDiskResponse Client::deleteUdmDisk(const DeleteUdmDiskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteUdmDiskWithOptions(request, runtime);
}

/**
 * @summary Stops protection for Elastic Compute Service (ECS) instance backup.
 *
 * @param request DeleteUdmEcsInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUdmEcsInstanceResponse
 */
DeleteUdmEcsInstanceResponse Client::deleteUdmEcsInstanceWithOptions(const DeleteUdmEcsInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteUdmEcsInstance"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteUdmEcsInstanceResponse>();
}

/**
 * @summary Stops protection for Elastic Compute Service (ECS) instance backup.
 *
 * @param request DeleteUdmEcsInstanceRequest
 * @return DeleteUdmEcsInstanceResponse
 */
DeleteUdmEcsInstanceResponse Client::deleteUdmEcsInstance(const DeleteUdmEcsInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteUdmEcsInstanceWithOptions(request, runtime);
}

/**
 * @summary Deletes a backup vault.
 *
 * @description *   You cannot delete a backup vault within 2 hours after the backup vault is created or a backup vault that is in the INITIALIZING state.
 * *   After you delete a backup vault, all resources that are associated with the backup vault are deleted. The resources include the Cloud Backup client of the old version, backup plans, backup jobs, snapshots, and restore jobs.
 *
 * @param request DeleteVaultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteVaultResponse
 */
DeleteVaultResponse Client::deleteVaultWithOptions(const DeleteVaultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.token();
  }

  if (!!request.hasVaultId()) {
    query["VaultId"] = request.vaultId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteVault"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteVaultResponse>();
}

/**
 * @summary Deletes a backup vault.
 *
 * @description *   You cannot delete a backup vault within 2 hours after the backup vault is created or a backup vault that is in the INITIALIZING state.
 * *   After you delete a backup vault, all resources that are associated with the backup vault are deleted. The resources include the Cloud Backup client of the old version, backup plans, backup jobs, snapshots, and restore jobs.
 *
 * @param request DeleteVaultRequest
 * @return DeleteVaultResponse
 */
DeleteVaultResponse Client::deleteVault(const DeleteVaultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteVaultWithOptions(request, runtime);
}

/**
 * @summary Queries the information about one or more HBR clients that meet the specified conditions.
 *
 * @param tmpReq DescribeBackupClientsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBackupClientsResponse
 */
DescribeBackupClientsResponse Client::describeBackupClientsWithOptions(const DescribeBackupClientsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeBackupClientsShrinkRequest request = DescribeBackupClientsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasClientIds()) {
    request.setClientIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.clientIds(), "ClientIds", "json"));
  }

  if (!!tmpReq.hasInstanceIds()) {
    request.setInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.instanceIds(), "InstanceIds", "json"));
  }

  json query = {};
  if (!!request.hasClientType()) {
    query["ClientType"] = request.clientType();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasCrossAccountRoleName()) {
    query["CrossAccountRoleName"] = request.crossAccountRoleName();
  }

  if (!!request.hasCrossAccountType()) {
    query["CrossAccountType"] = request.crossAccountType();
  }

  if (!!request.hasCrossAccountUserId()) {
    query["CrossAccountUserId"] = request.crossAccountUserId();
  }

  if (!!request.hasFilters()) {
    query["Filters"] = request.filters();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  json body = {};
  if (!!request.hasClientIdsShrink()) {
    body["ClientIds"] = request.clientIdsShrink();
  }

  if (!!request.hasInstanceIdsShrink()) {
    body["InstanceIds"] = request.instanceIdsShrink();
  }

  if (!!request.hasTag()) {
    body["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DescribeBackupClients"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBackupClientsResponse>();
}

/**
 * @summary Queries the information about one or more HBR clients that meet the specified conditions.
 *
 * @param request DescribeBackupClientsRequest
 * @return DescribeBackupClientsResponse
 */
DescribeBackupClientsResponse Client::describeBackupClients(const DescribeBackupClientsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupClientsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about one or more backup jobs that meet the specified conditions.
 *
 * @param request DescribeBackupJobs2Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBackupJobs2Response
 */
DescribeBackupJobs2Response Client::describeBackupJobs2WithOptions(const DescribeBackupJobs2Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEdition()) {
    query["Edition"] = request.edition();
  }

  if (!!request.hasFilters()) {
    query["Filters"] = request.filters();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSortDirection()) {
    query["SortDirection"] = request.sortDirection();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.sourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBackupJobs2"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBackupJobs2Response>();
}

/**
 * @summary Queries the information about one or more backup jobs that meet the specified conditions.
 *
 * @param request DescribeBackupJobs2Request
 * @return DescribeBackupJobs2Response
 */
DescribeBackupJobs2Response Client::describeBackupJobs2(const DescribeBackupJobs2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupJobs2WithOptions(request, runtime);
}

/**
 * @summary Queries the information about one or more backup plans that meet the specified conditions.
 *
 * @param request DescribeBackupPlansRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBackupPlansResponse
 */
DescribeBackupPlansResponse Client::describeBackupPlansWithOptions(const DescribeBackupPlansRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEdition()) {
    query["Edition"] = request.edition();
  }

  if (!!request.hasFilters()) {
    query["Filters"] = request.filters();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.sourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBackupPlans"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBackupPlansResponse>();
}

/**
 * @summary Queries the information about one or more backup plans that meet the specified conditions.
 *
 * @param request DescribeBackupPlansRequest
 * @return DescribeBackupPlansResponse
 */
DescribeBackupPlansResponse Client::describeBackupPlans(const DescribeBackupPlansRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupPlansWithOptions(request, runtime);
}

/**
 * @summary Queries one or more Cloud Backup clients that meet the specified conditions.
 *
 * @description This operation is applicable only to SAP HANA backup. For Cloud Backup clients of other data sources, call the DescribeBackupClients operation.
 *
 * @param request DescribeClientsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeClientsResponse
 */
DescribeClientsResponse Client::describeClientsWithOptions(const DescribeClientsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientId()) {
    query["ClientId"] = request.clientId();
  }

  if (!!request.hasClientType()) {
    query["ClientType"] = request.clientType();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.sourceType();
  }

  if (!!request.hasVaultId()) {
    query["VaultId"] = request.vaultId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeClients"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeClientsResponse>();
}

/**
 * @summary Queries one or more Cloud Backup clients that meet the specified conditions.
 *
 * @description This operation is applicable only to SAP HANA backup. For Cloud Backup clients of other data sources, call the DescribeBackupClients operation.
 *
 * @param request DescribeClientsRequest
 * @return DescribeClientsResponse
 */
DescribeClientsResponse Client::describeClients(const DescribeClientsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeClientsWithOptions(request, runtime);
}

/**
 * @summary Queries one or more container clusters that meet the specified conditions.
 *
 * @description You can call this operation to query only Container Service for Kubernetes (ACK) clusters.
 *
 * @param request DescribeContainerClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeContainerClusterResponse
 */
DescribeContainerClusterResponse Client::describeContainerClusterWithOptions(const DescribeContainerClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasIdentifier()) {
    query["Identifier"] = request.identifier();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeContainerCluster"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeContainerClusterResponse>();
}

/**
 * @summary Queries one or more container clusters that meet the specified conditions.
 *
 * @description You can call this operation to query only Container Service for Kubernetes (ACK) clusters.
 *
 * @param request DescribeContainerClusterRequest
 * @return DescribeContainerClusterResponse
 */
DescribeContainerClusterResponse Client::describeContainerCluster(const DescribeContainerClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeContainerClusterWithOptions(request, runtime);
}

/**
 * @summary Queries the information about the accounts used in cross-account backup.
 *
 * @param request DescribeCrossAccountsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCrossAccountsResponse
 */
DescribeCrossAccountsResponse Client::describeCrossAccountsWithOptions(const DescribeCrossAccountsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCrossAccounts"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCrossAccountsResponse>();
}

/**
 * @summary Queries the information about the accounts used in cross-account backup.
 *
 * @param request DescribeCrossAccountsRequest
 * @return DescribeCrossAccountsResponse
 */
DescribeCrossAccountsResponse Client::describeCrossAccounts(const DescribeCrossAccountsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCrossAccountsWithOptions(request, runtime);
}

/**
 * @summary Queries one or more SAP HANA backup plans that meet the specified conditions.
 *
 * @param request DescribeHanaBackupPlansRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHanaBackupPlansResponse
 */
DescribeHanaBackupPlansResponse Client::describeHanaBackupPlansWithOptions(const DescribeHanaBackupPlansRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasDatabaseName()) {
    query["DatabaseName"] = request.databaseName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasVaultId()) {
    query["VaultId"] = request.vaultId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHanaBackupPlans"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHanaBackupPlansResponse>();
}

/**
 * @summary Queries one or more SAP HANA backup plans that meet the specified conditions.
 *
 * @param request DescribeHanaBackupPlansRequest
 * @return DescribeHanaBackupPlansResponse
 */
DescribeHanaBackupPlansResponse Client::describeHanaBackupPlans(const DescribeHanaBackupPlansRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHanaBackupPlansWithOptions(request, runtime);
}

/**
 * @summary Queries the backup parameters of an SAP HANA database.
 *
 * @description If you want to query the backup retention period of a database, you can call the DescribeHanaRetentionSetting operation.
 *
 * @param request DescribeHanaBackupSettingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHanaBackupSettingResponse
 */
DescribeHanaBackupSettingResponse Client::describeHanaBackupSettingWithOptions(const DescribeHanaBackupSettingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasDatabaseName()) {
    query["DatabaseName"] = request.databaseName();
  }

  if (!!request.hasVaultId()) {
    query["VaultId"] = request.vaultId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHanaBackupSetting"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHanaBackupSettingResponse>();
}

/**
 * @summary Queries the backup parameters of an SAP HANA database.
 *
 * @description If you want to query the backup retention period of a database, you can call the DescribeHanaRetentionSetting operation.
 *
 * @param request DescribeHanaBackupSettingRequest
 * @return DescribeHanaBackupSettingResponse
 */
DescribeHanaBackupSettingResponse Client::describeHanaBackupSetting(const DescribeHanaBackupSettingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHanaBackupSettingWithOptions(request, runtime);
}

/**
 * @summary Queries one or more SAP HANA backups that meet the specified conditions.
 *
 * @description After you call the DescribeHanaBackupsAsync operation to query the SAP HANA backups that meet the specified conditions, call the DescribeTask operation to query the final result.
 *
 * @param request DescribeHanaBackupsAsyncRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHanaBackupsAsyncResponse
 */
DescribeHanaBackupsAsyncResponse Client::describeHanaBackupsAsyncWithOptions(const DescribeHanaBackupsAsyncRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasDatabaseName()) {
    query["DatabaseName"] = request.databaseName();
  }

  if (!!request.hasIncludeDifferential()) {
    query["IncludeDifferential"] = request.includeDifferential();
  }

  if (!!request.hasIncludeIncremental()) {
    query["IncludeIncremental"] = request.includeIncremental();
  }

  if (!!request.hasIncludeLog()) {
    query["IncludeLog"] = request.includeLog();
  }

  if (!!request.hasLogPosition()) {
    query["LogPosition"] = request.logPosition();
  }

  if (!!request.hasMode()) {
    query["Mode"] = request.mode();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRecoveryPointInTime()) {
    query["RecoveryPointInTime"] = request.recoveryPointInTime();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.source();
  }

  if (!!request.hasSourceClusterId()) {
    query["SourceClusterId"] = request.sourceClusterId();
  }

  if (!!request.hasSystemCopy()) {
    query["SystemCopy"] = request.systemCopy();
  }

  if (!!request.hasUseBackint()) {
    query["UseBackint"] = request.useBackint();
  }

  if (!!request.hasVaultId()) {
    query["VaultId"] = request.vaultId();
  }

  if (!!request.hasVolumeId()) {
    query["VolumeId"] = request.volumeId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHanaBackupsAsync"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHanaBackupsAsyncResponse>();
}

/**
 * @summary Queries one or more SAP HANA backups that meet the specified conditions.
 *
 * @description After you call the DescribeHanaBackupsAsync operation to query the SAP HANA backups that meet the specified conditions, call the DescribeTask operation to query the final result.
 *
 * @param request DescribeHanaBackupsAsyncRequest
 * @return DescribeHanaBackupsAsyncResponse
 */
DescribeHanaBackupsAsyncResponse Client::describeHanaBackupsAsync(const DescribeHanaBackupsAsyncRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHanaBackupsAsyncWithOptions(request, runtime);
}

/**
 * @summary Queries the information about SAP HANA databases.
 *
 * @description After you register an SAP HANA instance and install a Cloud Backup client on the instance, you can call this operation to query the information about SAP HANA databases. You can call the StartHanaDatabaseAsync operation to start a database and call the StopHanaDatabaseAsync operation to stop a database.
 *
 * @param request DescribeHanaDatabasesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHanaDatabasesResponse
 */
DescribeHanaDatabasesResponse Client::describeHanaDatabasesWithOptions(const DescribeHanaDatabasesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasVaultId()) {
    query["VaultId"] = request.vaultId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHanaDatabases"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHanaDatabasesResponse>();
}

/**
 * @summary Queries the information about SAP HANA databases.
 *
 * @description After you register an SAP HANA instance and install a Cloud Backup client on the instance, you can call this operation to query the information about SAP HANA databases. You can call the StartHanaDatabaseAsync operation to start a database and call the StopHanaDatabaseAsync operation to stop a database.
 *
 * @param request DescribeHanaDatabasesRequest
 * @return DescribeHanaDatabasesResponse
 */
DescribeHanaDatabasesResponse Client::describeHanaDatabases(const DescribeHanaDatabasesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHanaDatabasesWithOptions(request, runtime);
}

/**
 * @summary Queries one or more SAP HANA instances that meet the specified conditions.
 *
 * @param request DescribeHanaInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHanaInstancesResponse
 */
DescribeHanaInstancesResponse Client::describeHanaInstancesWithOptions(const DescribeHanaInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasVaultId()) {
    query["VaultId"] = request.vaultId();
  }

  json body = {};
  if (!!request.hasTag()) {
    body["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DescribeHanaInstances"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHanaInstancesResponse>();
}

/**
 * @summary Queries one or more SAP HANA instances that meet the specified conditions.
 *
 * @param request DescribeHanaInstancesRequest
 * @return DescribeHanaInstancesResponse
 */
DescribeHanaInstancesResponse Client::describeHanaInstances(const DescribeHanaInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHanaInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries one or more SAP HANA restore jobs that meet the specified conditions.
 *
 * @param request DescribeHanaRestoresRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHanaRestoresResponse
 */
DescribeHanaRestoresResponse Client::describeHanaRestoresWithOptions(const DescribeHanaRestoresRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupId()) {
    query["BackupId"] = request.backupId();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasDatabaseName()) {
    query["DatabaseName"] = request.databaseName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasRestoreId()) {
    query["RestoreId"] = request.restoreId();
  }

  if (!!request.hasRestoreStatus()) {
    query["RestoreStatus"] = request.restoreStatus();
  }

  if (!!request.hasVaultId()) {
    query["VaultId"] = request.vaultId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHanaRestores"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHanaRestoresResponse>();
}

/**
 * @summary Queries one or more SAP HANA restore jobs that meet the specified conditions.
 *
 * @param request DescribeHanaRestoresRequest
 * @return DescribeHanaRestoresResponse
 */
DescribeHanaRestoresResponse Client::describeHanaRestores(const DescribeHanaRestoresRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHanaRestoresWithOptions(request, runtime);
}

/**
 * @summary Queries the backup retention period of an SAP HANA database.
 *
 * @description *   If you want to query the backup parameters of a database, you can call the DescribeHanaBackupSetting operation.
 * *   Cloud Backup deletes the expired catalogs and data that are related to Backint and file backup. The deleted catalogs and data cannot be restored. We recommend that you set the retention period based on your business requirements.
 *
 * @param request DescribeHanaRetentionSettingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHanaRetentionSettingResponse
 */
DescribeHanaRetentionSettingResponse Client::describeHanaRetentionSettingWithOptions(const DescribeHanaRetentionSettingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasDatabaseName()) {
    query["DatabaseName"] = request.databaseName();
  }

  if (!!request.hasVaultId()) {
    query["VaultId"] = request.vaultId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHanaRetentionSetting"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHanaRetentionSettingResponse>();
}

/**
 * @summary Queries the backup retention period of an SAP HANA database.
 *
 * @description *   If you want to query the backup parameters of a database, you can call the DescribeHanaBackupSetting operation.
 * *   Cloud Backup deletes the expired catalogs and data that are related to Backint and file backup. The deleted catalogs and data cannot be restored. We recommend that you set the retention period based on your business requirements.
 *
 * @param request DescribeHanaRetentionSettingRequest
 * @return DescribeHanaRetentionSettingResponse
 */
DescribeHanaRetentionSettingResponse Client::describeHanaRetentionSetting(const DescribeHanaRetentionSettingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHanaRetentionSettingWithOptions(request, runtime);
}

/**
 * @summary Queries the details about Tablestore instances that are backed up.
 *
 * @param request DescribeOtsTableSnapshotsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOtsTableSnapshotsResponse
 */
DescribeOtsTableSnapshotsResponse Client::describeOtsTableSnapshotsWithOptions(const DescribeOtsTableSnapshotsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCrossAccountRoleName()) {
    query["CrossAccountRoleName"] = request.crossAccountRoleName();
  }

  if (!!request.hasCrossAccountType()) {
    query["CrossAccountType"] = request.crossAccountType();
  }

  if (!!request.hasCrossAccountUserId()) {
    query["CrossAccountUserId"] = request.crossAccountUserId();
  }

  json body = {};
  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasLimit()) {
    body["Limit"] = request.limit();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  json bodyFlat = {};
  if (!!request.hasOtsInstances()) {
    bodyFlat["OtsInstances"] = request.otsInstances();
  }

  if (!!request.hasSnapshotIds()) {
    bodyFlat["SnapshotIds"] = request.snapshotIds();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DescribeOtsTableSnapshots"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeOtsTableSnapshotsResponse>();
}

/**
 * @summary Queries the details about Tablestore instances that are backed up.
 *
 * @param request DescribeOtsTableSnapshotsRequest
 * @return DescribeOtsTableSnapshotsResponse
 */
DescribeOtsTableSnapshotsResponse Client::describeOtsTableSnapshots(const DescribeOtsTableSnapshotsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOtsTableSnapshotsWithOptions(request, runtime);
}

/**
 * @summary Queries one or more backup policies.
 *
 * @param request DescribePoliciesV2Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePoliciesV2Response
 */
DescribePoliciesV2Response Client::describePoliciesV2WithOptions(const DescribePoliciesV2Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  if (!!request.hasPolicyId()) {
    body["PolicyId"] = request.policyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribePoliciesV2"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePoliciesV2Response>();
}

/**
 * @summary Queries one or more backup policies.
 *
 * @param request DescribePoliciesV2Request
 * @return DescribePoliciesV2Response
 */
DescribePoliciesV2Response Client::describePoliciesV2(const DescribePoliciesV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePoliciesV2WithOptions(request, runtime);
}

/**
 * @summary Query one or more data sources bound to a policy, or query one or more policies bound to a data source.
 *
 * @param tmpReq DescribePolicyBindingsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePolicyBindingsResponse
 */
DescribePolicyBindingsResponse Client::describePolicyBindingsWithOptions(const DescribePolicyBindingsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribePolicyBindingsShrinkRequest request = DescribePolicyBindingsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDataSourceIds()) {
    request.setDataSourceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.dataSourceIds(), "DataSourceIds", "json"));
  }

  json query = {};
  if (!!request.hasFilters()) {
    query["Filters"] = request.filters();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.sourceType();
  }

  json body = {};
  if (!!request.hasDataSourceIdsShrink()) {
    body["DataSourceIds"] = request.dataSourceIdsShrink();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  if (!!request.hasPolicyId()) {
    body["PolicyId"] = request.policyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DescribePolicyBindings"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePolicyBindingsResponse>();
}

/**
 * @summary Query one or more data sources bound to a policy, or query one or more policies bound to a data source.
 *
 * @param request DescribePolicyBindingsRequest
 * @return DescribePolicyBindingsResponse
 */
DescribePolicyBindingsResponse Client::describePolicyBindings(const DescribePolicyBindingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePolicyBindingsWithOptions(request, runtime);
}

/**
 * @summary Queries the tables of a restorable Tablestore instance.
 *
 * @param request DescribeRecoverableOtsInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRecoverableOtsInstancesResponse
 */
DescribeRecoverableOtsInstancesResponse Client::describeRecoverableOtsInstancesWithOptions(const DescribeRecoverableOtsInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCrossAccountRoleName()) {
    query["CrossAccountRoleName"] = request.crossAccountRoleName();
  }

  if (!!request.hasCrossAccountType()) {
    query["CrossAccountType"] = request.crossAccountType();
  }

  if (!!request.hasCrossAccountUserId()) {
    query["CrossAccountUserId"] = request.crossAccountUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRecoverableOtsInstances"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRecoverableOtsInstancesResponse>();
}

/**
 * @summary Queries the tables of a restorable Tablestore instance.
 *
 * @param request DescribeRecoverableOtsInstancesRequest
 * @return DescribeRecoverableOtsInstancesResponse
 */
DescribeRecoverableOtsInstancesResponse Client::describeRecoverableOtsInstances(const DescribeRecoverableOtsInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRecoverableOtsInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries available regions.
 *
 * @param request DescribeRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegionsWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeRegions"},
    {"version" , "2017-09-08"},
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
 * @summary Queries available regions.
 *
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRegionsWithOptions(runtime);
}

/**
 * @summary Queries one or more restore jobs that meet the specified conditions.
 *
 * @param request DescribeRestoreJobs2Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRestoreJobs2Response
 */
DescribeRestoreJobs2Response Client::describeRestoreJobs2WithOptions(const DescribeRestoreJobs2Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEdition()) {
    query["Edition"] = request.edition();
  }

  if (!!request.hasFilters()) {
    query["Filters"] = request.filters();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRestoreType()) {
    query["RestoreType"] = request.restoreType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRestoreJobs2"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRestoreJobs2Response>();
}

/**
 * @summary Queries one or more restore jobs that meet the specified conditions.
 *
 * @param request DescribeRestoreJobs2Request
 * @return DescribeRestoreJobs2Response
 */
DescribeRestoreJobs2Response Client::describeRestoreJobs2(const DescribeRestoreJobs2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRestoreJobs2WithOptions(request, runtime);
}

/**
 * @summary Queries an asynchronous job.
 *
 * @param request DescribeTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTaskResponse
 */
DescribeTaskResponse Client::describeTaskWithOptions(const DescribeTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.token();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTask"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTaskResponse>();
}

/**
 * @summary Queries an asynchronous job.
 *
 * @param request DescribeTaskRequest
 * @return DescribeTaskResponse
 */
DescribeTaskResponse Client::describeTask(const DescribeTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTaskWithOptions(request, runtime);
}

/**
 * @summary Queries the backup snapshots of an Elastic Compute Service (ECS) instance.
 *
 * @param tmpReq DescribeUdmSnapshotsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUdmSnapshotsResponse
 */
DescribeUdmSnapshotsResponse Client::describeUdmSnapshotsWithOptions(const DescribeUdmSnapshotsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeUdmSnapshotsShrinkRequest request = DescribeUdmSnapshotsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSnapshotIds()) {
    request.setSnapshotIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.snapshotIds(), "SnapshotIds", "json"));
  }

  json query = {};
  if (!!request.hasDiskId()) {
    query["DiskId"] = request.diskId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.sourceType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasUdmRegionId()) {
    query["UdmRegionId"] = request.udmRegionId();
  }

  json body = {};
  if (!!request.hasSnapshotIdsShrink()) {
    body["SnapshotIds"] = request.snapshotIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DescribeUdmSnapshots"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUdmSnapshotsResponse>();
}

/**
 * @summary Queries the backup snapshots of an Elastic Compute Service (ECS) instance.
 *
 * @param request DescribeUdmSnapshotsRequest
 * @return DescribeUdmSnapshotsResponse
 */
DescribeUdmSnapshotsResponse Client::describeUdmSnapshots(const DescribeUdmSnapshotsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUdmSnapshotsWithOptions(request, runtime);
}

/**
 * @summary Queries the regions that support cross-region replication.
 *
 * @param request DescribeVaultReplicationRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVaultReplicationRegionsResponse
 */
DescribeVaultReplicationRegionsResponse Client::describeVaultReplicationRegionsWithOptions(const DescribeVaultReplicationRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasToken()) {
    query["Token"] = request.token();
  }

  if (!!request.hasVaultId()) {
    query["VaultId"] = request.vaultId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVaultReplicationRegions"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVaultReplicationRegionsResponse>();
}

/**
 * @summary Queries the regions that support cross-region replication.
 *
 * @param request DescribeVaultReplicationRegionsRequest
 * @return DescribeVaultReplicationRegionsResponse
 */
DescribeVaultReplicationRegionsResponse Client::describeVaultReplicationRegions(const DescribeVaultReplicationRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVaultReplicationRegionsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about one or more backup vaults that meet the specified conditions.
 *
 * @param request DescribeVaultsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVaultsResponse
 */
DescribeVaultsResponse Client::describeVaultsWithOptions(const DescribeVaultsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasVaultId()) {
    query["VaultId"] = request.vaultId();
  }

  if (!!request.hasVaultName()) {
    query["VaultName"] = request.vaultName();
  }

  if (!!request.hasVaultRegionId()) {
    query["VaultRegionId"] = request.vaultRegionId();
  }

  if (!!request.hasVaultType()) {
    query["VaultType"] = request.vaultType();
  }

  json body = {};
  if (!!request.hasTag()) {
    body["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DescribeVaults"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVaultsResponse>();
}

/**
 * @summary Queries the information about one or more backup vaults that meet the specified conditions.
 *
 * @param request DescribeVaultsRequest
 * @return DescribeVaultsResponse
 */
DescribeVaultsResponse Client::describeVaults(const DescribeVaultsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVaultsWithOptions(request, runtime);
}

/**
 * @summary Deletes an internal mount target created by Cloud Backup.
 *
 * @description *   If the request is successful, the mount target is deleted.
 * *   After you create a backup plan for an Apsara File Storage NAS file system, HBR automatically creates a mount target for the file system. You can call this operation to delete the mount target. In the **Status** column of the mount target of the NAS file system, the following information is displayed: **This mount target is created by an Alibaba Cloud internal service and cannot be operated. Service name: HBR**.
 *
 * @param request DetachNasFileSystemRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachNasFileSystemResponse
 */
DetachNasFileSystemResponse Client::detachNasFileSystemWithOptions(const DetachNasFileSystemRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreateTime()) {
    query["CreateTime"] = request.createTime();
  }

  if (!!request.hasCrossAccountRoleName()) {
    query["CrossAccountRoleName"] = request.crossAccountRoleName();
  }

  if (!!request.hasCrossAccountType()) {
    query["CrossAccountType"] = request.crossAccountType();
  }

  if (!!request.hasCrossAccountUserId()) {
    query["CrossAccountUserId"] = request.crossAccountUserId();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.fileSystemId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachNasFileSystem"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachNasFileSystemResponse>();
}

/**
 * @summary Deletes an internal mount target created by Cloud Backup.
 *
 * @description *   If the request is successful, the mount target is deleted.
 * *   After you create a backup plan for an Apsara File Storage NAS file system, HBR automatically creates a mount target for the file system. You can call this operation to delete the mount target. In the **Status** column of the mount target of the NAS file system, the following information is displayed: **This mount target is created by an Alibaba Cloud internal service and cannot be operated. Service name: HBR**.
 *
 * @param request DetachNasFileSystemRequest
 * @return DetachNasFileSystemResponse
 */
DetachNasFileSystemResponse Client::detachNasFileSystem(const DetachNasFileSystemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachNasFileSystemWithOptions(request, runtime);
}

/**
 * @summary Disables a backup plan.
 *
 * @description After you call this operation, the backup plan is suspended. In the DescribeBackupPlans operation, the Disabled parameter is set to true.
 *
 * @param request DisableBackupPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableBackupPlanResponse
 */
DisableBackupPlanResponse Client::disableBackupPlanWithOptions(const DisableBackupPlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEdition()) {
    query["Edition"] = request.edition();
  }

  if (!!request.hasPlanId()) {
    query["PlanId"] = request.planId();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.sourceType();
  }

  if (!!request.hasVaultId()) {
    query["VaultId"] = request.vaultId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableBackupPlan"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableBackupPlanResponse>();
}

/**
 * @summary Disables a backup plan.
 *
 * @description After you call this operation, the backup plan is suspended. In the DescribeBackupPlans operation, the Disabled parameter is set to true.
 *
 * @param request DisableBackupPlanRequest
 * @return DisableBackupPlanResponse
 */
DisableBackupPlanResponse Client::disableBackupPlan(const DisableBackupPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableBackupPlanWithOptions(request, runtime);
}

/**
 * @summary Disables an SAP HANA backup plan.
 *
 * @description To enable the backup plan again, call the EnableHanaBackupPlan operation.
 *
 * @param request DisableHanaBackupPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableHanaBackupPlanResponse
 */
DisableHanaBackupPlanResponse Client::disableHanaBackupPlanWithOptions(const DisableHanaBackupPlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasPlanId()) {
    query["PlanId"] = request.planId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasVaultId()) {
    query["VaultId"] = request.vaultId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableHanaBackupPlan"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableHanaBackupPlanResponse>();
}

/**
 * @summary Disables an SAP HANA backup plan.
 *
 * @description To enable the backup plan again, call the EnableHanaBackupPlan operation.
 *
 * @param request DisableHanaBackupPlanRequest
 * @return DisableHanaBackupPlanResponse
 */
DisableHanaBackupPlanResponse Client::disableHanaBackupPlan(const DisableHanaBackupPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableHanaBackupPlanWithOptions(request, runtime);
}

/**
 * @summary Enables a backup plan.
 *
 * @description After you call this operation, the backup plan is restarted (Disabled is set to false in the DescribeBackupPlans operation). Cloud Backup continues to perform backups based on the policy specified in the backup plan.
 *
 * @param request EnableBackupPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableBackupPlanResponse
 */
EnableBackupPlanResponse Client::enableBackupPlanWithOptions(const EnableBackupPlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEdition()) {
    query["Edition"] = request.edition();
  }

  if (!!request.hasPlanId()) {
    query["PlanId"] = request.planId();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.sourceType();
  }

  if (!!request.hasVaultId()) {
    query["VaultId"] = request.vaultId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableBackupPlan"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableBackupPlanResponse>();
}

/**
 * @summary Enables a backup plan.
 *
 * @description After you call this operation, the backup plan is restarted (Disabled is set to false in the DescribeBackupPlans operation). Cloud Backup continues to perform backups based on the policy specified in the backup plan.
 *
 * @param request EnableBackupPlanRequest
 * @return EnableBackupPlanResponse
 */
EnableBackupPlanResponse Client::enableBackupPlan(const EnableBackupPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableBackupPlanWithOptions(request, runtime);
}

/**
 * @summary Enables an SAP HANA backup plan.
 *
 * @description To disable the backup plan again, call the DisableHanaBackupPlan operation.
 *
 * @param request EnableHanaBackupPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableHanaBackupPlanResponse
 */
EnableHanaBackupPlanResponse Client::enableHanaBackupPlanWithOptions(const EnableHanaBackupPlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasPlanId()) {
    query["PlanId"] = request.planId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasVaultId()) {
    query["VaultId"] = request.vaultId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableHanaBackupPlan"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableHanaBackupPlanResponse>();
}

/**
 * @summary Enables an SAP HANA backup plan.
 *
 * @description To disable the backup plan again, call the DisableHanaBackupPlan operation.
 *
 * @param request EnableHanaBackupPlanRequest
 * @return EnableHanaBackupPlanResponse
 */
EnableHanaBackupPlanResponse Client::enableHanaBackupPlan(const EnableHanaBackupPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableHanaBackupPlanWithOptions(request, runtime);
}

/**
 * @summary Executes a backup plan.
 *
 * @param request ExecuteBackupPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteBackupPlanResponse
 */
ExecuteBackupPlanResponse Client::executeBackupPlanWithOptions(const ExecuteBackupPlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEdition()) {
    query["Edition"] = request.edition();
  }

  if (!!request.hasPlanId()) {
    query["PlanId"] = request.planId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.ruleId();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.sourceType();
  }

  if (!!request.hasVaultId()) {
    query["VaultId"] = request.vaultId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ExecuteBackupPlan"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteBackupPlanResponse>();
}

/**
 * @summary Executes a backup plan.
 *
 * @param request ExecuteBackupPlanRequest
 * @return ExecuteBackupPlanResponse
 */
ExecuteBackupPlanResponse Client::executeBackupPlan(const ExecuteBackupPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return executeBackupPlanWithOptions(request, runtime);
}

/**
 * @summary Execute a policy for one or all bound data sources.
 *
 * @param request ExecutePolicyV2Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecutePolicyV2Response
 */
ExecutePolicyV2Response Client::executePolicyV2WithOptions(const ExecutePolicyV2Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRuleId()) {
    query["RuleId"] = request.ruleId();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.sourceType();
  }

  json body = {};
  if (!!request.hasDataSourceId()) {
    body["DataSourceId"] = request.dataSourceId();
  }

  if (!!request.hasPolicyId()) {
    body["PolicyId"] = request.policyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExecutePolicyV2"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecutePolicyV2Response>();
}

/**
 * @summary Execute a policy for one or all bound data sources.
 *
 * @param request ExecutePolicyV2Request
 * @return ExecutePolicyV2Response
 */
ExecutePolicyV2Response Client::executePolicyV2(const ExecutePolicyV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return executePolicyV2WithOptions(request, runtime);
}

/**
 * @summary Generates a Resource Access Management (RAM) policy.
 *
 * @param request GenerateRamPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateRamPolicyResponse
 */
GenerateRamPolicyResponse Client::generateRamPolicyWithOptions(const GenerateRamPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActionType()) {
    query["ActionType"] = request.actionType();
  }

  if (!!request.hasRequireBasePolicy()) {
    query["RequireBasePolicy"] = request.requireBasePolicy();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasVaultId()) {
    query["VaultId"] = request.vaultId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GenerateRamPolicy"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateRamPolicyResponse>();
}

/**
 * @summary Generates a Resource Access Management (RAM) policy.
 *
 * @param request GenerateRamPolicyRequest
 * @return GenerateRamPolicyResponse
 */
GenerateRamPolicyResponse Client::generateRamPolicy(const GenerateRamPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateRamPolicyWithOptions(request, runtime);
}

/**
 * @summary Obtains download links of files such as job reports.
 *
 * @param request GetTempFileDownloadLinkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTempFileDownloadLinkResponse
 */
GetTempFileDownloadLinkResponse Client::getTempFileDownloadLinkWithOptions(const GetTempFileDownloadLinkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTempFileKey()) {
    query["TempFileKey"] = request.tempFileKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTempFileDownloadLink"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTempFileDownloadLinkResponse>();
}

/**
 * @summary Obtains download links of files such as job reports.
 *
 * @param request GetTempFileDownloadLinkRequest
 * @return GetTempFileDownloadLinkResponse
 */
GetTempFileDownloadLinkResponse Client::getTempFileDownloadLink(const GetTempFileDownloadLinkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTempFileDownloadLinkWithOptions(request, runtime);
}

/**
 * @summary Installs an HBR client on one or more Elastic Compute Service (ECS) instances.
 *
 * @description *   This operation creates an asynchronous job at the backend and calls Cloud Assistant to install an HBR client on an ECS instance.
 * *   You can call the [DescribeTask](https://help.aliyun.com/document_detail/431265.html) operation to query the execution result of an asynchronous job.
 * *   The timeout period of an asynchronous job is 15 minutes. We recommend that you call the DescribeTask operation to run the first query 60 seconds after you call the InstallBackupClients operation to install HBR clients. Then, run the next queries at an interval of 30 seconds.
 *
 * @param tmpReq InstallBackupClientsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InstallBackupClientsResponse
 */
InstallBackupClientsResponse Client::installBackupClientsWithOptions(const InstallBackupClientsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  InstallBackupClientsShrinkRequest request = InstallBackupClientsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInstanceIds()) {
    request.setInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.instanceIds(), "InstanceIds", "json"));
  }

  json query = {};
  if (!!request.hasCrossAccountRoleName()) {
    query["CrossAccountRoleName"] = request.crossAccountRoleName();
  }

  if (!!request.hasCrossAccountType()) {
    query["CrossAccountType"] = request.crossAccountType();
  }

  if (!!request.hasCrossAccountUserId()) {
    query["CrossAccountUserId"] = request.crossAccountUserId();
  }

  if (!!request.hasInstanceIdsShrink()) {
    query["InstanceIds"] = request.instanceIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InstallBackupClients"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InstallBackupClientsResponse>();
}

/**
 * @summary Installs an HBR client on one or more Elastic Compute Service (ECS) instances.
 *
 * @description *   This operation creates an asynchronous job at the backend and calls Cloud Assistant to install an HBR client on an ECS instance.
 * *   You can call the [DescribeTask](https://help.aliyun.com/document_detail/431265.html) operation to query the execution result of an asynchronous job.
 * *   The timeout period of an asynchronous job is 15 minutes. We recommend that you call the DescribeTask operation to run the first query 60 seconds after you call the InstallBackupClients operation to install HBR clients. Then, run the next queries at an interval of 30 seconds.
 *
 * @param request InstallBackupClientsRequest
 * @return InstallBackupClientsResponse
 */
InstallBackupClientsResponse Client::installBackupClients(const InstallBackupClientsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return installBackupClientsWithOptions(request, runtime);
}

/**
 * @summary Activates Cloud Backup.
 *
 * @param request OpenHbrServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OpenHbrServiceResponse
 */
OpenHbrServiceResponse Client::openHbrServiceWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "OpenHbrService"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OpenHbrServiceResponse>();
}

/**
 * @summary Activates Cloud Backup.
 *
 * @return OpenHbrServiceResponse
 */
OpenHbrServiceResponse Client::openHbrService() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return openHbrServiceWithOptions(runtime);
}

/**
 * @summary Queries the information about one or more backup snapshots that meet the specified conditions.
 *
 * @param tmpReq SearchHistoricalSnapshotsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchHistoricalSnapshotsResponse
 */
SearchHistoricalSnapshotsResponse Client::searchHistoricalSnapshotsWithOptions(const SearchHistoricalSnapshotsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SearchHistoricalSnapshotsShrinkRequest request = SearchHistoricalSnapshotsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasQuery()) {
    request.setQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.query(), "Query", "json"));
  }

  json query = {};
  if (!!request.hasEdition()) {
    query["Edition"] = request.edition();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.limit();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
  }

  if (!!request.hasQueryShrink()) {
    query["Query"] = request.queryShrink();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.sortBy();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.sourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchHistoricalSnapshots"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchHistoricalSnapshotsResponse>();
}

/**
 * @summary Queries the information about one or more backup snapshots that meet the specified conditions.
 *
 * @param request SearchHistoricalSnapshotsRequest
 * @return SearchHistoricalSnapshotsResponse
 */
SearchHistoricalSnapshotsResponse Client::searchHistoricalSnapshots(const SearchHistoricalSnapshotsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchHistoricalSnapshotsWithOptions(request, runtime);
}

/**
 * @summary Starts an SAP HANA database.
 *
 * @description To stop the database again, call the StopHanaDatabaseAsync operation.
 *
 * @param request StartHanaDatabaseAsyncRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartHanaDatabaseAsyncResponse
 */
StartHanaDatabaseAsyncResponse Client::startHanaDatabaseAsyncWithOptions(const StartHanaDatabaseAsyncRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasDatabaseName()) {
    query["DatabaseName"] = request.databaseName();
  }

  if (!!request.hasVaultId()) {
    query["VaultId"] = request.vaultId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartHanaDatabaseAsync"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartHanaDatabaseAsyncResponse>();
}

/**
 * @summary Starts an SAP HANA database.
 *
 * @description To stop the database again, call the StopHanaDatabaseAsync operation.
 *
 * @param request StartHanaDatabaseAsyncRequest
 * @return StartHanaDatabaseAsyncResponse
 */
StartHanaDatabaseAsyncResponse Client::startHanaDatabaseAsync(const StartHanaDatabaseAsyncRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startHanaDatabaseAsyncWithOptions(request, runtime);
}

/**
 * @summary Stops an SAP HANA database.
 *
 * @description To start the database again, call the StartHanaDatabaseAsync operation.
 *
 * @param request StopHanaDatabaseAsyncRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopHanaDatabaseAsyncResponse
 */
StopHanaDatabaseAsyncResponse Client::stopHanaDatabaseAsyncWithOptions(const StopHanaDatabaseAsyncRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasDatabaseName()) {
    query["DatabaseName"] = request.databaseName();
  }

  if (!!request.hasVaultId()) {
    query["VaultId"] = request.vaultId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopHanaDatabaseAsync"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopHanaDatabaseAsyncResponse>();
}

/**
 * @summary Stops an SAP HANA database.
 *
 * @description To start the database again, call the StartHanaDatabaseAsync operation.
 *
 * @param request StopHanaDatabaseAsyncRequest
 * @return StopHanaDatabaseAsyncResponse
 */
StopHanaDatabaseAsyncResponse Client::stopHanaDatabaseAsync(const StopHanaDatabaseAsyncRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopHanaDatabaseAsyncWithOptions(request, runtime);
}

/**
 * @summary Uninstalls a Cloud Backup client from one or more Elastic Compute Service (ECS) instance.
 *
 * @description *   This operation creates an asynchronous job at the backend and calls Cloud Assistant to uninstall a backup client from an ECS instance.
 * *   You can call the DescribeTask operation to query the execution result of an asynchronous job.
 * *   The timeout period of an asynchronous job is 15 minutes. We recommend that you call the DescribeTask operation to run the first query 30 seconds after you call the UninstallBackupClients operation to uninstall backup clients. Then, run the next queries at an interval of 30 seconds.
 *
 * @param tmpReq UninstallBackupClientsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UninstallBackupClientsResponse
 */
UninstallBackupClientsResponse Client::uninstallBackupClientsWithOptions(const UninstallBackupClientsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UninstallBackupClientsShrinkRequest request = UninstallBackupClientsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasClientIds()) {
    request.setClientIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.clientIds(), "ClientIds", "json"));
  }

  if (!!tmpReq.hasInstanceIds()) {
    request.setInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.instanceIds(), "InstanceIds", "json"));
  }

  json query = {};
  if (!!request.hasClientIdsShrink()) {
    query["ClientIds"] = request.clientIdsShrink();
  }

  if (!!request.hasCrossAccountRoleName()) {
    query["CrossAccountRoleName"] = request.crossAccountRoleName();
  }

  if (!!request.hasCrossAccountType()) {
    query["CrossAccountType"] = request.crossAccountType();
  }

  if (!!request.hasCrossAccountUserId()) {
    query["CrossAccountUserId"] = request.crossAccountUserId();
  }

  if (!!request.hasInstanceIdsShrink()) {
    query["InstanceIds"] = request.instanceIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UninstallBackupClients"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UninstallBackupClientsResponse>();
}

/**
 * @summary Uninstalls a Cloud Backup client from one or more Elastic Compute Service (ECS) instance.
 *
 * @description *   This operation creates an asynchronous job at the backend and calls Cloud Assistant to uninstall a backup client from an ECS instance.
 * *   You can call the DescribeTask operation to query the execution result of an asynchronous job.
 * *   The timeout period of an asynchronous job is 15 minutes. We recommend that you call the DescribeTask operation to run the first query 30 seconds after you call the UninstallBackupClients operation to uninstall backup clients. Then, run the next queries at an interval of 30 seconds.
 *
 * @param request UninstallBackupClientsRequest
 * @return UninstallBackupClientsResponse
 */
UninstallBackupClientsResponse Client::uninstallBackupClients(const UninstallBackupClientsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uninstallBackupClientsWithOptions(request, runtime);
}

/**
 * @summary Uninstalls an HBR client.
 *
 * @description If you call this operation, the specified HBR client is uninstalled. To reinstall the HBR client, call the CreateClients operation.
 *
 * @param request UninstallClientRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UninstallClientResponse
 */
UninstallClientResponse Client::uninstallClientWithOptions(const UninstallClientRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientId()) {
    query["ClientId"] = request.clientId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasVaultId()) {
    query["VaultId"] = request.vaultId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UninstallClient"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UninstallClientResponse>();
}

/**
 * @summary Uninstalls an HBR client.
 *
 * @description If you call this operation, the specified HBR client is uninstalled. To reinstall the HBR client, call the CreateClients operation.
 *
 * @param request UninstallClientRequest
 * @return UninstallClientResponse
 */
UninstallClientResponse Client::uninstallClient(const UninstallClientRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uninstallClientWithOptions(request, runtime);
}

/**
 * @summary Updates a backup plan.
 *
 * @param tmpReq UpdateBackupPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateBackupPlanResponse
 */
UpdateBackupPlanResponse Client::updateBackupPlanWithOptions(const UpdateBackupPlanRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateBackupPlanShrinkRequest request = UpdateBackupPlanShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDetail()) {
    request.setDetailShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.detail(), "Detail", "json"));
  }

  if (!!tmpReq.hasOtsDetail()) {
    request.setOtsDetailShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.otsDetail(), "OtsDetail", "json"));
  }

  json query = {};
  if (!!request.hasChangeListPath()) {
    query["ChangeListPath"] = request.changeListPath();
  }

  if (!!request.hasDetailShrink()) {
    query["Detail"] = request.detailShrink();
  }

  if (!!request.hasEdition()) {
    query["Edition"] = request.edition();
  }

  if (!!request.hasKeepLatestSnapshots()) {
    query["KeepLatestSnapshots"] = request.keepLatestSnapshots();
  }

  if (!!request.hasPath()) {
    query["Path"] = request.path();
  }

  if (!!request.hasPlanId()) {
    query["PlanId"] = request.planId();
  }

  if (!!request.hasPlanName()) {
    query["PlanName"] = request.planName();
  }

  if (!!request.hasPrefix()) {
    query["Prefix"] = request.prefix();
  }

  if (!!request.hasRetention()) {
    query["Retention"] = request.retention();
  }

  if (!!request.hasSchedule()) {
    query["Schedule"] = request.schedule();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.sourceType();
  }

  if (!!request.hasSpeedLimit()) {
    query["SpeedLimit"] = request.speedLimit();
  }

  if (!!request.hasUpdatePaths()) {
    query["UpdatePaths"] = request.updatePaths();
  }

  if (!!request.hasVaultId()) {
    query["VaultId"] = request.vaultId();
  }

  json body = {};
  if (!!request.hasExclude()) {
    body["Exclude"] = request.exclude();
  }

  if (!!request.hasInclude()) {
    body["Include"] = request.include();
  }

  if (!!request.hasOptions()) {
    body["Options"] = request.options();
  }

  if (!!request.hasOtsDetailShrink()) {
    body["OtsDetail"] = request.otsDetailShrink();
  }

  if (!!request.hasRule()) {
    body["Rule"] = request.rule();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateBackupPlan"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateBackupPlanResponse>();
}

/**
 * @summary Updates a backup plan.
 *
 * @param request UpdateBackupPlanRequest
 * @return UpdateBackupPlanResponse
 */
UpdateBackupPlanResponse Client::updateBackupPlan(const UpdateBackupPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateBackupPlanWithOptions(request, runtime);
}

/**
 * @summary Updates the configurations of an HBR client.
 *
 * @description You can call this operation to update the configurations of both the old and new HBR clients.
 *
 * @param request UpdateClientSettingsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateClientSettingsResponse
 */
UpdateClientSettingsResponse Client::updateClientSettingsWithOptions(const UpdateClientSettingsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlertOnPartialComplete()) {
    query["AlertOnPartialComplete"] = request.alertOnPartialComplete();
  }

  if (!!request.hasClientId()) {
    query["ClientId"] = request.clientId();
  }

  if (!!request.hasDataNetworkType()) {
    query["DataNetworkType"] = request.dataNetworkType();
  }

  if (!!request.hasDataProxySetting()) {
    query["DataProxySetting"] = request.dataProxySetting();
  }

  if (!!request.hasMaxCpuCore()) {
    query["MaxCpuCore"] = request.maxCpuCore();
  }

  if (!!request.hasMaxMemory()) {
    query["MaxMemory"] = request.maxMemory();
  }

  if (!!request.hasMaxWorker()) {
    query["MaxWorker"] = request.maxWorker();
  }

  if (!!request.hasProxyHost()) {
    query["ProxyHost"] = request.proxyHost();
  }

  if (!!request.hasProxyPassword()) {
    query["ProxyPassword"] = request.proxyPassword();
  }

  if (!!request.hasProxyPort()) {
    query["ProxyPort"] = request.proxyPort();
  }

  if (!!request.hasProxyUser()) {
    query["ProxyUser"] = request.proxyUser();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasUseHttps()) {
    query["UseHttps"] = request.useHttps();
  }

  if (!!request.hasVaultId()) {
    query["VaultId"] = request.vaultId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateClientSettings"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateClientSettingsResponse>();
}

/**
 * @summary Updates the configurations of an HBR client.
 *
 * @description You can call this operation to update the configurations of both the old and new HBR clients.
 *
 * @param request UpdateClientSettingsRequest
 * @return UpdateClientSettingsResponse
 */
UpdateClientSettingsResponse Client::updateClientSettings(const UpdateClientSettingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateClientSettingsWithOptions(request, runtime);
}

/**
 * @summary Update container cluster information, including the container cluster name, network type, etc.
 *
 * @param request UpdateContainerClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateContainerClusterResponse
 */
UpdateContainerClusterResponse Client::updateContainerClusterWithOptions(const UpdateContainerClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasNetworkType()) {
    query["NetworkType"] = request.networkType();
  }

  if (!!request.hasRenewToken()) {
    query["RenewToken"] = request.renewToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateContainerCluster"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateContainerClusterResponse>();
}

/**
 * @summary Update container cluster information, including the container cluster name, network type, etc.
 *
 * @param request UpdateContainerClusterRequest
 * @return UpdateContainerClusterResponse
 */
UpdateContainerClusterResponse Client::updateContainerCluster(const UpdateContainerClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateContainerClusterWithOptions(request, runtime);
}

/**
 * @summary Updates an SAP HANA backup plan.
 *
 * @description *   A backup plan defines the data source, backup policy, and other configurations. After you execute a backup plan, a backup job is generated to record the backup progress and the backup result. If a backup job is completed, a backup snapshot is generated. You can use a backup snapshot to create a restore job.
 * *   You can specify only one type of data source in a backup plan.
 * *   You can specify only one interval as a backup cycle in a backup plan.
 * *   Each backup plan allows you to back up data to only one backup vault.
 *
 * @param request UpdateHanaBackupPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateHanaBackupPlanResponse
 */
UpdateHanaBackupPlanResponse Client::updateHanaBackupPlanWithOptions(const UpdateHanaBackupPlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupPrefix()) {
    query["BackupPrefix"] = request.backupPrefix();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasPlanId()) {
    query["PlanId"] = request.planId();
  }

  if (!!request.hasPlanName()) {
    query["PlanName"] = request.planName();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSchedule()) {
    query["Schedule"] = request.schedule();
  }

  if (!!request.hasVaultId()) {
    query["VaultId"] = request.vaultId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateHanaBackupPlan"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateHanaBackupPlanResponse>();
}

/**
 * @summary Updates an SAP HANA backup plan.
 *
 * @description *   A backup plan defines the data source, backup policy, and other configurations. After you execute a backup plan, a backup job is generated to record the backup progress and the backup result. If a backup job is completed, a backup snapshot is generated. You can use a backup snapshot to create a restore job.
 * *   You can specify only one type of data source in a backup plan.
 * *   You can specify only one interval as a backup cycle in a backup plan.
 * *   Each backup plan allows you to back up data to only one backup vault.
 *
 * @param request UpdateHanaBackupPlanRequest
 * @return UpdateHanaBackupPlanResponse
 */
UpdateHanaBackupPlanResponse Client::updateHanaBackupPlan(const UpdateHanaBackupPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateHanaBackupPlanWithOptions(request, runtime);
}

/**
 * @summary Updates the backup parameters of an SAP HANA database.
 *
 * @description You can call the UpdateHanaRetentionSetting operation to update the backup retention period of a database.
 *
 * @param request UpdateHanaBackupSettingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateHanaBackupSettingResponse
 */
UpdateHanaBackupSettingResponse Client::updateHanaBackupSettingWithOptions(const UpdateHanaBackupSettingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCatalogBackupParameterFile()) {
    query["CatalogBackupParameterFile"] = request.catalogBackupParameterFile();
  }

  if (!!request.hasCatalogBackupUsingBackint()) {
    query["CatalogBackupUsingBackint"] = request.catalogBackupUsingBackint();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasDataBackupParameterFile()) {
    query["DataBackupParameterFile"] = request.dataBackupParameterFile();
  }

  if (!!request.hasDatabaseName()) {
    query["DatabaseName"] = request.databaseName();
  }

  if (!!request.hasEnableAutoLogBackup()) {
    query["EnableAutoLogBackup"] = request.enableAutoLogBackup();
  }

  if (!!request.hasLogBackupParameterFile()) {
    query["LogBackupParameterFile"] = request.logBackupParameterFile();
  }

  if (!!request.hasLogBackupTimeout()) {
    query["LogBackupTimeout"] = request.logBackupTimeout();
  }

  if (!!request.hasLogBackupUsingBackint()) {
    query["LogBackupUsingBackint"] = request.logBackupUsingBackint();
  }

  if (!!request.hasVaultId()) {
    query["VaultId"] = request.vaultId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateHanaBackupSetting"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateHanaBackupSettingResponse>();
}

/**
 * @summary Updates the backup parameters of an SAP HANA database.
 *
 * @description You can call the UpdateHanaRetentionSetting operation to update the backup retention period of a database.
 *
 * @param request UpdateHanaBackupSettingRequest
 * @return UpdateHanaBackupSettingResponse
 */
UpdateHanaBackupSettingResponse Client::updateHanaBackupSetting(const UpdateHanaBackupSettingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateHanaBackupSettingWithOptions(request, runtime);
}

/**
 * @summary Updates an SAP HANA instance.
 *
 * @param request UpdateHanaInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateHanaInstanceResponse
 */
UpdateHanaInstanceResponse Client::updateHanaInstanceWithOptions(const UpdateHanaInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlertSetting()) {
    query["AlertSetting"] = request.alertSetting();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasHanaName()) {
    query["HanaName"] = request.hanaName();
  }

  if (!!request.hasHost()) {
    query["Host"] = request.host();
  }

  if (!!request.hasInstanceNumber()) {
    query["InstanceNumber"] = request.instanceNumber();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.password();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasUseSsl()) {
    query["UseSsl"] = request.useSsl();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.userName();
  }

  if (!!request.hasValidateCertificate()) {
    query["ValidateCertificate"] = request.validateCertificate();
  }

  if (!!request.hasVaultId()) {
    query["VaultId"] = request.vaultId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateHanaInstance"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateHanaInstanceResponse>();
}

/**
 * @summary Updates an SAP HANA instance.
 *
 * @param request UpdateHanaInstanceRequest
 * @return UpdateHanaInstanceResponse
 */
UpdateHanaInstanceResponse Client::updateHanaInstance(const UpdateHanaInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateHanaInstanceWithOptions(request, runtime);
}

/**
 * @summary Updates the backup retention period of an SAP HANA database.
 *
 * @description *   If you want to update the backup parameters of a database, you can call the UpdateHanaBackupSetting operation.
 * *   Cloud Backup deletes the expired catalogs and data that are related to Backint and file backup. The deleted catalogs and data cannot be restored. We recommend that you set the retention period based on your business requirements.
 *
 * @param request UpdateHanaRetentionSettingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateHanaRetentionSettingResponse
 */
UpdateHanaRetentionSettingResponse Client::updateHanaRetentionSettingWithOptions(const UpdateHanaRetentionSettingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasDatabaseName()) {
    query["DatabaseName"] = request.databaseName();
  }

  if (!!request.hasDisabled()) {
    query["Disabled"] = request.disabled();
  }

  if (!!request.hasRetentionDays()) {
    query["RetentionDays"] = request.retentionDays();
  }

  if (!!request.hasSchedule()) {
    query["Schedule"] = request.schedule();
  }

  if (!!request.hasVaultId()) {
    query["VaultId"] = request.vaultId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateHanaRetentionSetting"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateHanaRetentionSettingResponse>();
}

/**
 * @summary Updates the backup retention period of an SAP HANA database.
 *
 * @description *   If you want to update the backup parameters of a database, you can call the UpdateHanaBackupSetting operation.
 * *   Cloud Backup deletes the expired catalogs and data that are related to Backint and file backup. The deleted catalogs and data cannot be restored. We recommend that you set the retention period based on your business requirements.
 *
 * @param request UpdateHanaRetentionSettingRequest
 * @return UpdateHanaRetentionSettingResponse
 */
UpdateHanaRetentionSettingResponse Client::updateHanaRetentionSetting(const UpdateHanaRetentionSettingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateHanaRetentionSettingWithOptions(request, runtime);
}

/**
 * @summary Modifies the association between a backup policy and a data source.
 *
 * @param tmpReq UpdatePolicyBindingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePolicyBindingResponse
 */
UpdatePolicyBindingResponse Client::updatePolicyBindingWithOptions(const UpdatePolicyBindingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdatePolicyBindingShrinkRequest request = UpdatePolicyBindingShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAdvancedOptions()) {
    request.setAdvancedOptionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.advancedOptions(), "AdvancedOptions", "json"));
  }

  json query = {};
  if (!!request.hasAdvancedOptionsShrink()) {
    query["AdvancedOptions"] = request.advancedOptionsShrink();
  }

  if (!!request.hasDisabled()) {
    query["Disabled"] = request.disabled();
  }

  if (!!request.hasExclude()) {
    query["Exclude"] = request.exclude();
  }

  if (!!request.hasInclude()) {
    query["Include"] = request.include();
  }

  if (!!request.hasPolicyBindingDescription()) {
    query["PolicyBindingDescription"] = request.policyBindingDescription();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.source();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.sourceType();
  }

  if (!!request.hasSpeedLimit()) {
    query["SpeedLimit"] = request.speedLimit();
  }

  json body = {};
  if (!!request.hasDataSourceId()) {
    body["DataSourceId"] = request.dataSourceId();
  }

  if (!!request.hasPolicyId()) {
    body["PolicyId"] = request.policyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdatePolicyBinding"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePolicyBindingResponse>();
}

/**
 * @summary Modifies the association between a backup policy and a data source.
 *
 * @param request UpdatePolicyBindingRequest
 * @return UpdatePolicyBindingResponse
 */
UpdatePolicyBindingResponse Client::updatePolicyBinding(const UpdatePolicyBindingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePolicyBindingWithOptions(request, runtime);
}

/**
 * @summary Modifies a backup policy.
 *
 * @description If you modify a backup policy, the modification takes effect on all data sources that are bound to the backup policy. Proceed with caution.
 *
 * @param tmpReq UpdatePolicyV2Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePolicyV2Response
 */
UpdatePolicyV2Response Client::updatePolicyV2WithOptions(const UpdatePolicyV2Request &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdatePolicyV2ShrinkRequest request = UpdatePolicyV2ShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRules()) {
    request.setRulesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.rules(), "Rules", "json"));
  }

  json body = {};
  if (!!request.hasPolicyDescription()) {
    body["PolicyDescription"] = request.policyDescription();
  }

  if (!!request.hasPolicyId()) {
    body["PolicyId"] = request.policyId();
  }

  if (!!request.hasPolicyName()) {
    body["PolicyName"] = request.policyName();
  }

  if (!!request.hasRulesShrink()) {
    body["Rules"] = request.rulesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdatePolicyV2"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePolicyV2Response>();
}

/**
 * @summary Modifies a backup policy.
 *
 * @description If you modify a backup policy, the modification takes effect on all data sources that are bound to the backup policy. Proceed with caution.
 *
 * @param request UpdatePolicyV2Request
 * @return UpdatePolicyV2Response
 */
UpdatePolicyV2Response Client::updatePolicyV2(const UpdatePolicyV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePolicyV2WithOptions(request, runtime);
}

/**
 * @summary Updates the configuration information about the backup vault.
 *
 * @param request UpdateVaultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateVaultResponse
 */
UpdateVaultResponse Client::updateVaultWithOptions(const UpdateVaultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasVaultId()) {
    query["VaultId"] = request.vaultId();
  }

  if (!!request.hasVaultName()) {
    query["VaultName"] = request.vaultName();
  }

  if (!!request.hasWormEnabled()) {
    query["WormEnabled"] = request.wormEnabled();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateVault"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateVaultResponse>();
}

/**
 * @summary Updates the configuration information about the backup vault.
 *
 * @param request UpdateVaultRequest
 * @return UpdateVaultResponse
 */
UpdateVaultResponse Client::updateVault(const UpdateVaultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateVaultWithOptions(request, runtime);
}

/**
 * @summary Upgrades an HBR client on one or more Elastic Compute Service (ECS) instances.
 *
 * @description *   This operation creates an asynchronous job at the backend and calls Cloud Assistant to upgrade an HBR client that is installed on an ECS instance.
 * *   You can call the DescribeTask operation to query the execution result of an asynchronous job.
 * *   The timeout period of an asynchronous job is 15 minutes.
 *
 * @param tmpReq UpgradeBackupClientsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeBackupClientsResponse
 */
UpgradeBackupClientsResponse Client::upgradeBackupClientsWithOptions(const UpgradeBackupClientsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpgradeBackupClientsShrinkRequest request = UpgradeBackupClientsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasClientIds()) {
    request.setClientIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.clientIds(), "ClientIds", "json"));
  }

  if (!!tmpReq.hasInstanceIds()) {
    request.setInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.instanceIds(), "InstanceIds", "json"));
  }

  json query = {};
  if (!!request.hasClientIdsShrink()) {
    query["ClientIds"] = request.clientIdsShrink();
  }

  if (!!request.hasCrossAccountRoleName()) {
    query["CrossAccountRoleName"] = request.crossAccountRoleName();
  }

  if (!!request.hasCrossAccountType()) {
    query["CrossAccountType"] = request.crossAccountType();
  }

  if (!!request.hasCrossAccountUserId()) {
    query["CrossAccountUserId"] = request.crossAccountUserId();
  }

  if (!!request.hasInstanceIdsShrink()) {
    query["InstanceIds"] = request.instanceIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradeBackupClients"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradeBackupClientsResponse>();
}

/**
 * @summary Upgrades an HBR client on one or more Elastic Compute Service (ECS) instances.
 *
 * @description *   This operation creates an asynchronous job at the backend and calls Cloud Assistant to upgrade an HBR client that is installed on an ECS instance.
 * *   You can call the DescribeTask operation to query the execution result of an asynchronous job.
 * *   The timeout period of an asynchronous job is 15 minutes.
 *
 * @param request UpgradeBackupClientsRequest
 * @return UpgradeBackupClientsResponse
 */
UpgradeBackupClientsResponse Client::upgradeBackupClients(const UpgradeBackupClientsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradeBackupClientsWithOptions(request, runtime);
}

/**
 * @summary Upgrades the Cloud Backup client.
 *
 * @description You can call this operation to upgrade a Cloud Backup client to the latest version. After the Cloud Backup client is upgraded, the version of the client cannot be rolled back.
 *
 * @param request UpgradeClientRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeClientResponse
 */
UpgradeClientResponse Client::upgradeClientWithOptions(const UpgradeClientRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientId()) {
    query["ClientId"] = request.clientId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasVaultId()) {
    query["VaultId"] = request.vaultId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradeClient"},
    {"version" , "2017-09-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradeClientResponse>();
}

/**
 * @summary Upgrades the Cloud Backup client.
 *
 * @description You can call this operation to upgrade a Cloud Backup client to the latest version. After the Cloud Backup client is upgraded, the version of the client cannot be rolled back.
 *
 * @param request UpgradeClientRequest
 * @return UpgradeClientResponse
 */
UpgradeClientResponse Client::upgradeClient(const UpgradeClientRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradeClientWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Hbr20170908