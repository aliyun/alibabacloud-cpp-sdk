#include <darabonba/Core.hpp>
#include <alibabacloud/Dbs20210101.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Dbs20210101::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Dbs20210101
{

AlibabaCloud::Dbs20210101::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-qingdao" , "dbs-api.cn-hangzhou.aliyuncs.com"},
    {"cn-beijing" , "dbs-api.cn-hangzhou.aliyuncs.com"},
    {"cn-chengdu" , "dbs-api.cn-chengdu.aliyuncs.com"},
    {"cn-zhangjiakou" , "dbs-api.cn-hangzhou.aliyuncs.com"},
    {"cn-huhehaote" , "dbs-api.cn-huhehaote.aliyuncs.com"},
    {"cn-hangzhou" , "dbs-api.cn-hangzhou.aliyuncs.com"},
    {"cn-shanghai" , "dbs-api.cn-hangzhou.aliyuncs.com"},
    {"cn-shenzhen" , "dbs-api.cn-hangzhou.aliyuncs.com"},
    {"cn-hongkong" , "dbs-api.cn-hangzhou.aliyuncs.com"},
    {"ap-southeast-1" , "dbs-api.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-2" , "dbs-api.ap-southeast-2.aliyuncs.com"},
    {"ap-southeast-3" , "dbs-api.ap-southeast-3.aliyuncs.com"},
    {"ap-southeast-5" , "dbs-api.ap-southeast-5.aliyuncs.com"},
    {"ap-northeast-1" , "dbs-api.ap-northeast-1.aliyuncs.com"},
    {"us-west-1" , "dbs-api.cn-hangzhou.aliyuncs.com"},
    {"us-east-1" , "dbs-api.cn-hangzhou.aliyuncs.com"},
    {"eu-central-1" , "dbs-api.eu-central-1.aliyuncs.com"},
    {"cn-hangzhou-finance" , "dbs-api.cn-hangzhou.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "dbs-api.cn-hangzhou.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "dbs-api.cn-hangzhou.aliyuncs.com"},
    {"ap-south-1" , "dbs-api.ap-south-1.aliyuncs.com"},
    {"eu-west-1" , "dbs-api.eu-west-1.aliyuncs.com"},
    {"me-east-1" , "dbs-api.me-east-1.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("dbs", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Moves a resource from one resource group to another.
 *
 * @param request ChangeResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroupWithOptions(const ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasNewResourceGroupId()) {
    query["NewResourceGroupId"] = request.getNewResourceGroupId();
  }

  if (!!request.hasRegionCode()) {
    query["RegionCode"] = request.getRegionCode();
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
    {"version" , "2021-01-01"},
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
 * @summary Moves a resource from one resource group to another.
 *
 * @param request ChangeResourceGroupRequest
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroup(const ChangeResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeResourceGroupWithOptions(request, runtime);
}

/**
 * @summary 配置备份集信息
 *
 * @param request ConfigureBackupSetInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigureBackupSetInfoResponse
 */
ConfigureBackupSetInfoResponse Client::configureBackupSetInfoWithOptions(const ConfigureBackupSetInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupMethod()) {
    query["BackupMethod"] = request.getBackupMethod();
  }

  if (!!request.hasBackupMode()) {
    query["BackupMode"] = request.getBackupMode();
  }

  if (!!request.hasBackupSetId()) {
    query["BackupSetId"] = request.getBackupSetId();
  }

  if (!!request.hasBackupSetName()) {
    query["BackupSetName"] = request.getBackupSetName();
  }

  if (!!request.hasBackupType()) {
    query["BackupType"] = request.getBackupType();
  }

  if (!!request.hasCheckSum()) {
    query["CheckSum"] = request.getCheckSum();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDataSourceId()) {
    query["DataSourceId"] = request.getDataSourceId();
  }

  if (!!request.hasExtraMeta()) {
    query["ExtraMeta"] = request.getExtraMeta();
  }

  if (!!request.hasRegionCode()) {
    query["RegionCode"] = request.getRegionCode();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUploadStatus()) {
    query["UploadStatus"] = request.getUploadStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ConfigureBackupSetInfo"},
    {"version" , "2021-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfigureBackupSetInfoResponse>();
}

/**
 * @summary 配置备份集信息
 *
 * @param request ConfigureBackupSetInfoRequest
 * @return ConfigureBackupSetInfoResponse
 */
ConfigureBackupSetInfoResponse Client::configureBackupSetInfo(const ConfigureBackupSetInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configureBackupSetInfoWithOptions(request, runtime);
}

/**
 * @summary Enables an advanced backup policy for a PolarDB instance.
 *
 * @description ### [](#)Supported database engines
 * PolarDB for MySQL
 * >  This API operation is available only to specific customers. If you want to call this API operation, join the Database Backup (DBS) DingTalk group (ID 35585947) for customer consultation to request permissions.
 *
 * @param request CreateAdvancedPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAdvancedPolicyResponse
 */
CreateAdvancedPolicyResponse Client::createAdvancedPolicyWithOptions(const CreateAdvancedPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasRegionCode()) {
    query["RegionCode"] = request.getRegionCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAdvancedPolicy"},
    {"version" , "2021-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAdvancedPolicyResponse>();
}

/**
 * @summary Enables an advanced backup policy for a PolarDB instance.
 *
 * @description ### [](#)Supported database engines
 * PolarDB for MySQL
 * >  This API operation is available only to specific customers. If you want to call this API operation, join the Database Backup (DBS) DingTalk group (ID 35585947) for customer consultation to request permissions.
 *
 * @param request CreateAdvancedPolicyRequest
 * @return CreateAdvancedPolicyResponse
 */
CreateAdvancedPolicyResponse Client::createAdvancedPolicy(const CreateAdvancedPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAdvancedPolicyWithOptions(request, runtime);
}

/**
 * @summary Creates an advanced download task for an ApsaraDB RDS for MySQL instance, an ApsaraDB RDS for PostgreSQL instance, or a PolarDB for MySQL cluster.
 *
 * @description ### [](#)Supported database engines
 * *   ApsaraDB RDS for MySQL
 * *   ApsaraDB RDS for PostgreSQL
 * *   PolarDB for MySQL
 * ### [](#)References
 * For the instances that meet your business requirements, you can create an advanced download task by point in time or backup set. You can set the download destination to a URL or directly upload the downloaded backup set to your Object Storage Service (OSS) bucket to facilitate data analysis and offline archiving.
 * *   [Download the backup files of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/98819.html)
 * *   [Download the backup files of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96774.html)
 * *   [Download the backup files of a PolarDB for MySQL cluster](https://help.aliyun.com/document_detail/2627635.html)
 *
 * @param request CreateDownloadRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDownloadResponse
 */
CreateDownloadResponse Client::createDownloadWithOptions(const CreateDownloadRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdminDatabase()) {
    query["AdminDatabase"] = request.getAdminDatabase();
  }

  if (!!request.hasBakSetId()) {
    query["BakSetId"] = request.getBakSetId();
  }

  if (!!request.hasBakSetSize()) {
    query["BakSetSize"] = request.getBakSetSize();
  }

  if (!!request.hasBakSetType()) {
    query["BakSetType"] = request.getBakSetType();
  }

  if (!!request.hasClusterName()) {
    query["ClusterName"] = request.getClusterName();
  }

  if (!!request.hasDownloadPointInTime()) {
    query["DownloadPointInTime"] = request.getDownloadPointInTime();
  }

  if (!!request.hasFormatType()) {
    query["FormatType"] = request.getFormatType();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasIsCluster()) {
    query["IsCluster"] = request.getIsCluster();
  }

  if (!!request.hasIsPhysical()) {
    query["IsPhysical"] = request.getIsPhysical();
  }

  if (!!request.hasPrimaryKeyTypeOnly()) {
    query["PrimaryKeyTypeOnly"] = request.getPrimaryKeyTypeOnly();
  }

  if (!!request.hasRegionCode()) {
    query["RegionCode"] = request.getRegionCode();
  }

  if (!!request.hasTargetBucket()) {
    query["TargetBucket"] = request.getTargetBucket();
  }

  if (!!request.hasTargetOssRegion()) {
    query["TargetOssRegion"] = request.getTargetOssRegion();
  }

  if (!!request.hasTargetPath()) {
    query["TargetPath"] = request.getTargetPath();
  }

  if (!!request.hasTargetType()) {
    query["TargetType"] = request.getTargetType();
  }

  if (!!request.hasUseZstd()) {
    query["UseZstd"] = request.getUseZstd();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDownload"},
    {"version" , "2021-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDownloadResponse>();
}

/**
 * @summary Creates an advanced download task for an ApsaraDB RDS for MySQL instance, an ApsaraDB RDS for PostgreSQL instance, or a PolarDB for MySQL cluster.
 *
 * @description ### [](#)Supported database engines
 * *   ApsaraDB RDS for MySQL
 * *   ApsaraDB RDS for PostgreSQL
 * *   PolarDB for MySQL
 * ### [](#)References
 * For the instances that meet your business requirements, you can create an advanced download task by point in time or backup set. You can set the download destination to a URL or directly upload the downloaded backup set to your Object Storage Service (OSS) bucket to facilitate data analysis and offline archiving.
 * *   [Download the backup files of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/98819.html)
 * *   [Download the backup files of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96774.html)
 * *   [Download the backup files of a PolarDB for MySQL cluster](https://help.aliyun.com/document_detail/2627635.html)
 *
 * @param request CreateDownloadRequest
 * @return CreateDownloadResponse
 */
CreateDownloadResponse Client::createDownload(const CreateDownloadRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDownloadWithOptions(request, runtime);
}

/**
 * @summary Releases a sandbox instance.
 *
 * @description This operation is available only for the Database Backup (DBS) API of the 2021-01-01 version.
 *
 * @param request DeleteSandboxInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSandboxInstanceResponse
 */
DeleteSandboxInstanceResponse Client::deleteSandboxInstanceWithOptions(const DeleteSandboxInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupPlanId()) {
    query["BackupPlanId"] = request.getBackupPlanId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSandboxInstance"},
    {"version" , "2021-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSandboxInstanceResponse>();
}

/**
 * @summary Releases a sandbox instance.
 *
 * @description This operation is available only for the Database Backup (DBS) API of the 2021-01-01 version.
 *
 * @param request DeleteSandboxInstanceRequest
 * @return DeleteSandboxInstanceResponse
 */
DeleteSandboxInstanceResponse Client::deleteSandboxInstance(const DeleteSandboxInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSandboxInstanceWithOptions(request, runtime);
}

/**
 * @summary Queries the information about the backup data of a PolarDB for MySQL cluster.
 *
 * @description ### [](#)Supported database engine
 * PolarDB for MySQL
 * >  This API operation is available only to specific customers. If you want to call this API operation, join the Database Backup (DBS) DingTalk group (ID: 35585947) for customer consultation to request permissions.
 * ### [](#)References
 * [Back up data of PolarDB for MySQL](https://help.aliyun.com/document_detail/88172.html)
 *
 * @param request DescribeBackupDataListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBackupDataListResponse
 */
DescribeBackupDataListResponse Client::describeBackupDataListWithOptions(const DescribeBackupDataListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupId()) {
    query["BackupId"] = request.getBackupId();
  }

  if (!!request.hasBackupMethod()) {
    query["BackupMethod"] = request.getBackupMethod();
  }

  if (!!request.hasBackupMode()) {
    query["BackupMode"] = request.getBackupMode();
  }

  if (!!request.hasBackupScale()) {
    query["BackupScale"] = request.getBackupScale();
  }

  if (!!request.hasBackupStatus()) {
    query["BackupStatus"] = request.getBackupStatus();
  }

  if (!!request.hasBackupType()) {
    query["BackupType"] = request.getBackupType();
  }

  if (!!request.hasDataSourceId()) {
    query["DataSourceId"] = request.getDataSourceId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceIsDeleted()) {
    query["InstanceIsDeleted"] = request.getInstanceIsDeleted();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasInstanceRegion()) {
    query["InstanceRegion"] = request.getInstanceRegion();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionCode()) {
    query["RegionCode"] = request.getRegionCode();
  }

  if (!!request.hasSceneType()) {
    query["SceneType"] = request.getSceneType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBackupDataList"},
    {"version" , "2021-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBackupDataListResponse>();
}

/**
 * @summary Queries the information about the backup data of a PolarDB for MySQL cluster.
 *
 * @description ### [](#)Supported database engine
 * PolarDB for MySQL
 * >  This API operation is available only to specific customers. If you want to call this API operation, join the Database Backup (DBS) DingTalk group (ID: 35585947) for customer consultation to request permissions.
 * ### [](#)References
 * [Back up data of PolarDB for MySQL](https://help.aliyun.com/document_detail/88172.html)
 *
 * @param request DescribeBackupDataListRequest
 * @return DescribeBackupDataListResponse
 */
DescribeBackupDataListResponse Client::describeBackupDataList(const DescribeBackupDataListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupDataListWithOptions(request, runtime);
}

/**
 * @summary Queries the information about the backup policy of a PolarDB for MySQL instance.
 *
 * @description ### [](#)Supported database engine
 * PolarDB for MySQL
 * >  The API operation is available only to specific customers. If you want to call this API operation, request permissions by joining the Database Backup (DBS) DingTalk group (ID 35585947) for customer consultation.
 * ### [](#)References
 * [Topics related to backup policies of PolarDB for MySQL instances](https://help.aliyun.com/document_detail/280422.html)
 *
 * @param request DescribeBackupPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBackupPolicyResponse
 */
DescribeBackupPolicyResponse Client::describeBackupPolicyWithOptions(const DescribeBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasRegionCode()) {
    query["RegionCode"] = request.getRegionCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBackupPolicy"},
    {"version" , "2021-01-01"},
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
 * @summary Queries the information about the backup policy of a PolarDB for MySQL instance.
 *
 * @description ### [](#)Supported database engine
 * PolarDB for MySQL
 * >  The API operation is available only to specific customers. If you want to call this API operation, request permissions by joining the Database Backup (DBS) DingTalk group (ID 35585947) for customer consultation.
 * ### [](#)References
 * [Topics related to backup policies of PolarDB for MySQL instances](https://help.aliyun.com/document_detail/280422.html)
 *
 * @param request DescribeBackupPolicyRequest
 * @return DescribeBackupPolicyResponse
 */
DescribeBackupPolicyResponse Client::describeBackupPolicy(const DescribeBackupPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupPolicyWithOptions(request, runtime);
}

/**
 * @summary 查询存储介质访问详情
 *
 * @param request DescribeBakDataSourceStorageAccessInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBakDataSourceStorageAccessInfoResponse
 */
DescribeBakDataSourceStorageAccessInfoResponse Client::describeBakDataSourceStorageAccessInfoWithOptions(const DescribeBakDataSourceStorageAccessInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupSetId()) {
    query["BackupSetId"] = request.getBackupSetId();
  }

  if (!!request.hasBackupType()) {
    query["BackupType"] = request.getBackupType();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDataSourceId()) {
    query["DataSourceId"] = request.getDataSourceId();
  }

  if (!!request.hasDurationSeconds()) {
    query["DurationSeconds"] = request.getDurationSeconds();
  }

  if (!!request.hasRegionCode()) {
    query["RegionCode"] = request.getRegionCode();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasStorageType()) {
    query["StorageType"] = request.getStorageType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBakDataSourceStorageAccessInfo"},
    {"version" , "2021-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBakDataSourceStorageAccessInfoResponse>();
}

/**
 * @summary 查询存储介质访问详情
 *
 * @param request DescribeBakDataSourceStorageAccessInfoRequest
 * @return DescribeBakDataSourceStorageAccessInfoResponse
 */
DescribeBakDataSourceStorageAccessInfoResponse Client::describeBakDataSourceStorageAccessInfo(const DescribeBakDataSourceStorageAccessInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBakDataSourceStorageAccessInfoWithOptions(request, runtime);
}

/**
 * @summary 根据dbs实例id获取费用列表
 *
 * @param request DescribeCostInfoByDbsInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCostInfoByDbsInstanceResponse
 */
DescribeCostInfoByDbsInstanceResponse Client::describeCostInfoByDbsInstanceWithOptions(const DescribeCostInfoByDbsInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupPlanId()) {
    query["BackupPlanId"] = request.getBackupPlanId();
  }

  if (!!request.hasRegionCode()) {
    query["RegionCode"] = request.getRegionCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCostInfoByDbsInstance"},
    {"version" , "2021-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCostInfoByDbsInstanceResponse>();
}

/**
 * @summary 根据dbs实例id获取费用列表
 *
 * @param request DescribeCostInfoByDbsInstanceRequest
 * @return DescribeCostInfoByDbsInstanceResponse
 */
DescribeCostInfoByDbsInstanceResponse Client::describeCostInfoByDbsInstance(const DescribeCostInfoByDbsInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCostInfoByDbsInstanceWithOptions(request, runtime);
}

/**
 * @summary 查库表恢复可用的备份集
 *
 * @param request DescribeDBTablesRecoveryBackupSetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBTablesRecoveryBackupSetResponse
 */
DescribeDBTablesRecoveryBackupSetResponse Client::describeDBTablesRecoveryBackupSetWithOptions(const DescribeDBTablesRecoveryBackupSetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterName()) {
    query["ClusterName"] = request.getClusterName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionCode()) {
    query["RegionCode"] = request.getRegionCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBTablesRecoveryBackupSet"},
    {"version" , "2021-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBTablesRecoveryBackupSetResponse>();
}

/**
 * @summary 查库表恢复可用的备份集
 *
 * @param request DescribeDBTablesRecoveryBackupSetRequest
 * @return DescribeDBTablesRecoveryBackupSetResponse
 */
DescribeDBTablesRecoveryBackupSetResponse Client::describeDBTablesRecoveryBackupSet(const DescribeDBTablesRecoveryBackupSetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBTablesRecoveryBackupSetWithOptions(request, runtime);
}

/**
 * @summary 查库表恢复状态
 *
 * @param request DescribeDBTablesRecoveryStateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBTablesRecoveryStateResponse
 */
DescribeDBTablesRecoveryStateResponse Client::describeDBTablesRecoveryStateWithOptions(const DescribeDBTablesRecoveryStateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterName()) {
    query["ClusterName"] = request.getClusterName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionCode()) {
    query["RegionCode"] = request.getRegionCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBTablesRecoveryState"},
    {"version" , "2021-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBTablesRecoveryStateResponse>();
}

/**
 * @summary 查库表恢复状态
 *
 * @param request DescribeDBTablesRecoveryStateRequest
 * @return DescribeDBTablesRecoveryStateResponse
 */
DescribeDBTablesRecoveryStateResponse Client::describeDBTablesRecoveryState(const DescribeDBTablesRecoveryStateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBTablesRecoveryStateWithOptions(request, runtime);
}

/**
 * @summary 查库表恢复可恢复的时间范围
 *
 * @param request DescribeDBTablesRecoveryTimeRangeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBTablesRecoveryTimeRangeResponse
 */
DescribeDBTablesRecoveryTimeRangeResponse Client::describeDBTablesRecoveryTimeRangeWithOptions(const DescribeDBTablesRecoveryTimeRangeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterName()) {
    query["ClusterName"] = request.getClusterName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionCode()) {
    query["RegionCode"] = request.getRegionCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBTablesRecoveryTimeRange"},
    {"version" , "2021-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBTablesRecoveryTimeRangeResponse>();
}

/**
 * @summary 查库表恢复可恢复的时间范围
 *
 * @param request DescribeDBTablesRecoveryTimeRangeRequest
 * @return DescribeDBTablesRecoveryTimeRangeResponse
 */
DescribeDBTablesRecoveryTimeRangeResponse Client::describeDBTablesRecoveryTimeRange(const DescribeDBTablesRecoveryTimeRangeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBTablesRecoveryTimeRangeWithOptions(request, runtime);
}

/**
 * @summary Queries the storage information of a downloaded backup set.
 *
 * @description ### [](#)Supported database engines
 * *   ApsaraDB RDS for MySQL that uses Enterprise SSDs (ESSDs)
 * *   RDS PostgreSQL
 * *   PolarDB for MySQL
 * ### [](#)References
 * *   [Download the backup files of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/98819.html)
 * *   [Download the backup files of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96774.html)
 * *   [Download the backup files of a PolarDB for MySQL cluster](https://help.aliyun.com/document_detail/2627635.html)
 *
 * @param request DescribeDownloadBackupSetStorageInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDownloadBackupSetStorageInfoResponse
 */
DescribeDownloadBackupSetStorageInfoResponse Client::describeDownloadBackupSetStorageInfoWithOptions(const DescribeDownloadBackupSetStorageInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupSetId()) {
    query["BackupSetId"] = request.getBackupSetId();
  }

  if (!!request.hasClusterName()) {
    query["ClusterName"] = request.getClusterName();
  }

  if (!!request.hasDuration()) {
    query["Duration"] = request.getDuration();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasRegionCode()) {
    query["RegionCode"] = request.getRegionCode();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDownloadBackupSetStorageInfo"},
    {"version" , "2021-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDownloadBackupSetStorageInfoResponse>();
}

/**
 * @summary Queries the storage information of a downloaded backup set.
 *
 * @description ### [](#)Supported database engines
 * *   ApsaraDB RDS for MySQL that uses Enterprise SSDs (ESSDs)
 * *   RDS PostgreSQL
 * *   PolarDB for MySQL
 * ### [](#)References
 * *   [Download the backup files of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/98819.html)
 * *   [Download the backup files of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96774.html)
 * *   [Download the backup files of a PolarDB for MySQL cluster](https://help.aliyun.com/document_detail/2627635.html)
 *
 * @param request DescribeDownloadBackupSetStorageInfoRequest
 * @return DescribeDownloadBackupSetStorageInfoResponse
 */
DescribeDownloadBackupSetStorageInfoResponse Client::describeDownloadBackupSetStorageInfo(const DescribeDownloadBackupSetStorageInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDownloadBackupSetStorageInfoWithOptions(request, runtime);
}

/**
 * @summary Queries whether an instance supports the advanced download feature.
 *
 * @description ### [](#)Supported database engines
 * *   ApsaraDB RDS for MySQL
 * *   ApsaraDB RDS for PostgreSQL
 * *   PolarDB for MySQL
 * ### [](#)References
 * You can create an advanced download task by point in time or backup set. You can set the download destination to a URL or directly upload the downloaded backup set to your Object Storage Service (OSS) bucket to facilitate data analysis and offline archiving.
 * *   [Download the backup files of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/98819.html)
 * *   [Download the backup files of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96774.html)
 * *   [Download the backup files of a PolarDB for MySQL cluster](https://help.aliyun.com/document_detail/2627635.html)
 *
 * @param request DescribeDownloadSupportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDownloadSupportResponse
 */
DescribeDownloadSupportResponse Client::describeDownloadSupportWithOptions(const DescribeDownloadSupportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterName()) {
    query["ClusterName"] = request.getClusterName();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasRegionCode()) {
    query["RegionCode"] = request.getRegionCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDownloadSupport"},
    {"version" , "2021-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDownloadSupportResponse>();
}

/**
 * @summary Queries whether an instance supports the advanced download feature.
 *
 * @description ### [](#)Supported database engines
 * *   ApsaraDB RDS for MySQL
 * *   ApsaraDB RDS for PostgreSQL
 * *   PolarDB for MySQL
 * ### [](#)References
 * You can create an advanced download task by point in time or backup set. You can set the download destination to a URL or directly upload the downloaded backup set to your Object Storage Service (OSS) bucket to facilitate data analysis and offline archiving.
 * *   [Download the backup files of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/98819.html)
 * *   [Download the backup files of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96774.html)
 * *   [Download the backup files of a PolarDB for MySQL cluster](https://help.aliyun.com/document_detail/2627635.html)
 *
 * @param request DescribeDownloadSupportRequest
 * @return DescribeDownloadSupportResponse
 */
DescribeDownloadSupportResponse Client::describeDownloadSupport(const DescribeDownloadSupportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDownloadSupportWithOptions(request, runtime);
}

/**
 * @summary Queries the advanced download tasks for an ApsaraDB RDS for MySQL instance, an ApsaraDB RDS for PostgreSQL instance, or a PolarDB for MySQL cluster.
 *
 * @description ### [](#)Supported database engines
 * *   ApsaraDB RDS for MySQL
 * *   ApsaraDB RDS for PostgreSQL
 * *   PolarDB for MySQL
 * ### [](#)References
 * *   [Download the backup files of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/98819.html)
 * *   [Download the backup files of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96774.html)
 * *   [Download the backup files of a PolarDB for MySQL cluster](https://help.aliyun.com/document_detail/2627635.html)
 *
 * @param request DescribeDownloadTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDownloadTaskResponse
 */
DescribeDownloadTaskResponse Client::describeDownloadTaskWithOptions(const DescribeDownloadTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupSetId()) {
    query["BackupSetId"] = request.getBackupSetId();
  }

  if (!!request.hasClusterName()) {
    query["ClusterName"] = request.getClusterName();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDatasourceId()) {
    query["DatasourceId"] = request.getDatasourceId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasOrderColumn()) {
    query["OrderColumn"] = request.getOrderColumn();
  }

  if (!!request.hasOrderDirect()) {
    query["OrderDirect"] = request.getOrderDirect();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionCode()) {
    query["RegionCode"] = request.getRegionCode();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasState()) {
    query["State"] = request.getState();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.getTaskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDownloadTask"},
    {"version" , "2021-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDownloadTaskResponse>();
}

/**
 * @summary Queries the advanced download tasks for an ApsaraDB RDS for MySQL instance, an ApsaraDB RDS for PostgreSQL instance, or a PolarDB for MySQL cluster.
 *
 * @description ### [](#)Supported database engines
 * *   ApsaraDB RDS for MySQL
 * *   ApsaraDB RDS for PostgreSQL
 * *   PolarDB for MySQL
 * ### [](#)References
 * *   [Download the backup files of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/98819.html)
 * *   [Download the backup files of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96774.html)
 * *   [Download the backup files of a PolarDB for MySQL cluster](https://help.aliyun.com/document_detail/2627635.html)
 *
 * @param request DescribeDownloadTaskRequest
 * @return DescribeDownloadTaskResponse
 */
DescribeDownloadTaskResponse Client::describeDownloadTask(const DescribeDownloadTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDownloadTaskWithOptions(request, runtime);
}

/**
 * @summary Queries the snapshots of an instance.
 *
 * @description Before you call this operation, you must enable the sandbox feature for the database instance. For more information, see [Use the emergency recovery feature of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/203154.html) or [Create a sandbox instance for emergency disaster recovery of a self-managed MySQL database](https://help.aliyun.com/document_detail/185577.html). This operation is available only for the Database Backup (DBS) API of the 2021-01-01 version.
 *
 * @param request DescribeSandboxBackupSetsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSandboxBackupSetsResponse
 */
DescribeSandboxBackupSetsResponse Client::describeSandboxBackupSetsWithOptions(const DescribeSandboxBackupSetsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupPlanId()) {
    query["BackupPlanId"] = request.getBackupPlanId();
  }

  if (!!request.hasBackupSetId()) {
    query["BackupSetId"] = request.getBackupSetId();
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
    {"action" , "DescribeSandboxBackupSets"},
    {"version" , "2021-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSandboxBackupSetsResponse>();
}

/**
 * @summary Queries the snapshots of an instance.
 *
 * @description Before you call this operation, you must enable the sandbox feature for the database instance. For more information, see [Use the emergency recovery feature of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/203154.html) or [Create a sandbox instance for emergency disaster recovery of a self-managed MySQL database](https://help.aliyun.com/document_detail/185577.html). This operation is available only for the Database Backup (DBS) API of the 2021-01-01 version.
 *
 * @param request DescribeSandboxBackupSetsRequest
 * @return DescribeSandboxBackupSetsResponse
 */
DescribeSandboxBackupSetsResponse Client::describeSandboxBackupSets(const DescribeSandboxBackupSetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSandboxBackupSetsWithOptions(request, runtime);
}

/**
 * @summary Queries sandbox instances that are created within an account.
 *
 * @description This operation is available only in Database Backup (DBS) API of the 2021-01-01 version.
 *
 * @param request DescribeSandboxInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSandboxInstancesResponse
 */
DescribeSandboxInstancesResponse Client::describeSandboxInstancesWithOptions(const DescribeSandboxInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupPlanId()) {
    query["BackupPlanId"] = request.getBackupPlanId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSandboxInstances"},
    {"version" , "2021-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSandboxInstancesResponse>();
}

/**
 * @summary Queries sandbox instances that are created within an account.
 *
 * @description This operation is available only in Database Backup (DBS) API of the 2021-01-01 version.
 *
 * @param request DescribeSandboxInstancesRequest
 * @return DescribeSandboxInstancesResponse
 */
DescribeSandboxInstancesResponse Client::describeSandboxInstances(const DescribeSandboxInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSandboxInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries the recoverable time range of a sandbox instance.
 *
 * @description Before you call this operation, you must enable the sandbox feature for the database instance. For more information, see [Use the emergency recovery feature of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/203154.html) or [Create a sandbox instance for emergency disaster recovery of a self-managed MySQL database](https://help.aliyun.com/document_detail/185577.html). This operation is available only in Database Backup (DBS) API of the 2021-01-01 version.
 *
 * @param request DescribeSandboxRecoveryTimeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSandboxRecoveryTimeResponse
 */
DescribeSandboxRecoveryTimeResponse Client::describeSandboxRecoveryTimeWithOptions(const DescribeSandboxRecoveryTimeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupPlanId()) {
    query["BackupPlanId"] = request.getBackupPlanId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSandboxRecoveryTime"},
    {"version" , "2021-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSandboxRecoveryTimeResponse>();
}

/**
 * @summary Queries the recoverable time range of a sandbox instance.
 *
 * @description Before you call this operation, you must enable the sandbox feature for the database instance. For more information, see [Use the emergency recovery feature of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/203154.html) or [Create a sandbox instance for emergency disaster recovery of a self-managed MySQL database](https://help.aliyun.com/document_detail/185577.html). This operation is available only in Database Backup (DBS) API of the 2021-01-01 version.
 *
 * @param request DescribeSandboxRecoveryTimeRequest
 * @return DescribeSandboxRecoveryTimeResponse
 */
DescribeSandboxRecoveryTimeResponse Client::describeSandboxRecoveryTime(const DescribeSandboxRecoveryTimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSandboxRecoveryTimeWithOptions(request, runtime);
}

/**
 * @summary Modifies the backup policy of a PolarDB instance.
 *
 * @description ### [](#)Supported database engines
 * PolarDB for MySQL
 * >  This API operation is available only to specific customers. If you want to call this API operation, join the Database Backup (DBS) DingTalk group (ID 35585947) for customer consultation to request permissions.
 *
 * @param tmpReq ModifyBackupPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyBackupPolicyResponse
 */
ModifyBackupPolicyResponse Client::modifyBackupPolicyWithOptions(const ModifyBackupPolicyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyBackupPolicyShrinkRequest request = ModifyBackupPolicyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAdvanceDataPolicies()) {
    request.setAdvanceDataPoliciesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAdvanceDataPolicies(), "AdvanceDataPolicies", "json"));
  }

  if (!!tmpReq.hasAdvanceIncPolicies()) {
    request.setAdvanceIncPoliciesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAdvanceIncPolicies(), "AdvanceIncPolicies", "json"));
  }

  if (!!tmpReq.hasAdvanceLogPolicies()) {
    request.setAdvanceLogPoliciesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAdvanceLogPolicies(), "AdvanceLogPolicies", "json"));
  }

  json query = {};
  if (!!request.hasAdvanceDataPoliciesShrink()) {
    query["AdvanceDataPolicies"] = request.getAdvanceDataPoliciesShrink();
  }

  if (!!request.hasAdvanceIncPoliciesShrink()) {
    query["AdvanceIncPolicies"] = request.getAdvanceIncPoliciesShrink();
  }

  if (!!request.hasAdvanceLogPoliciesShrink()) {
    query["AdvanceLogPolicies"] = request.getAdvanceLogPoliciesShrink();
  }

  if (!!request.hasBackupMethod()) {
    query["BackupMethod"] = request.getBackupMethod();
  }

  if (!!request.hasBackupPriority()) {
    query["BackupPriority"] = request.getBackupPriority();
  }

  if (!!request.hasBackupRetentionPolicyOnClusterDeletion()) {
    query["BackupRetentionPolicyOnClusterDeletion"] = request.getBackupRetentionPolicyOnClusterDeletion();
  }

  if (!!request.hasCategory()) {
    query["Category"] = request.getCategory();
  }

  if (!!request.hasEnableIncBackup()) {
    query["EnableIncBackup"] = request.getEnableIncBackup();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasPreferredBackupWindowBegin()) {
    query["PreferredBackupWindowBegin"] = request.getPreferredBackupWindowBegin();
  }

  if (!!request.hasRegionCode()) {
    query["RegionCode"] = request.getRegionCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyBackupPolicy"},
    {"version" , "2021-01-01"},
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
 * @summary Modifies the backup policy of a PolarDB instance.
 *
 * @description ### [](#)Supported database engines
 * PolarDB for MySQL
 * >  This API operation is available only to specific customers. If you want to call this API operation, join the Database Backup (DBS) DingTalk group (ID 35585947) for customer consultation to request permissions.
 *
 * @param request ModifyBackupPolicyRequest
 * @return ModifyBackupPolicyResponse
 */
ModifyBackupPolicyResponse Client::modifyBackupPolicy(const ModifyBackupPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyBackupPolicyWithOptions(request, runtime);
}

/**
 * @summary 修改库表恢复状态
 *
 * @param request ModifyDBTablesRecoveryStateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBTablesRecoveryStateResponse
 */
ModifyDBTablesRecoveryStateResponse Client::modifyDBTablesRecoveryStateWithOptions(const ModifyDBTablesRecoveryStateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategory()) {
    query["Category"] = request.getCategory();
  }

  if (!!request.hasClusterName()) {
    query["ClusterName"] = request.getClusterName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionCode()) {
    query["RegionCode"] = request.getRegionCode();
  }

  if (!!request.hasRetention()) {
    query["Retention"] = request.getRetention();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBTablesRecoveryState"},
    {"version" , "2021-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBTablesRecoveryStateResponse>();
}

/**
 * @summary 修改库表恢复状态
 *
 * @param request ModifyDBTablesRecoveryStateRequest
 * @return ModifyDBTablesRecoveryStateResponse
 */
ModifyDBTablesRecoveryStateResponse Client::modifyDBTablesRecoveryState(const ModifyDBTablesRecoveryStateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBTablesRecoveryStateWithOptions(request, runtime);
}

/**
 * @summary 重试高级下载任务
 *
 * @param request RetryDownloadTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RetryDownloadTaskResponse
 */
RetryDownloadTaskResponse Client::retryDownloadTaskWithOptions(const RetryDownloadTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterName()) {
    query["ClusterName"] = request.getClusterName();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasRegionCode()) {
    query["RegionCode"] = request.getRegionCode();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RetryDownloadTask"},
    {"version" , "2021-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RetryDownloadTaskResponse>();
}

/**
 * @summary 重试高级下载任务
 *
 * @param request RetryDownloadTaskRequest
 * @return RetryDownloadTaskResponse
 */
RetryDownloadTaskResponse Client::retryDownloadTask(const RetryDownloadTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return retryDownloadTaskWithOptions(request, runtime);
}

/**
 * @summary 查询是否支持库表恢复
 *
 * @param request SupportDBTableRecoveryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SupportDBTableRecoveryResponse
 */
SupportDBTableRecoveryResponse Client::supportDBTableRecoveryWithOptions(const SupportDBTableRecoveryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterName()) {
    query["ClusterName"] = request.getClusterName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionCode()) {
    query["RegionCode"] = request.getRegionCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SupportDBTableRecovery"},
    {"version" , "2021-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SupportDBTableRecoveryResponse>();
}

/**
 * @summary 查询是否支持库表恢复
 *
 * @param request SupportDBTableRecoveryRequest
 * @return SupportDBTableRecoveryResponse
 */
SupportDBTableRecoveryResponse Client::supportDBTableRecovery(const SupportDBTableRecoveryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return supportDBTableRecoveryWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Dbs20210101