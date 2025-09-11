#include <darabonba/Core.hpp>
#include <alibabacloud/Hsm20231113.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Hsm20231113::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Hsm20231113
{

AlibabaCloud::Hsm20231113::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("hsm", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Enables or disables the audit log feature and delivers audit logs to buckets.
 *
 * @description *   The region of the bucket must be the same as the region where the security audit feature is enabled.
 * *   If the security audit feature is enabled, do not delete Object Storage Service (OSS) buckets. If you delete OSS buckets, audit logs fail to be delivered.
 * *   Only electronic virtual security modules (EVSMs) and general virtual security modules (GVSMs) within the Chinese mainland support the security audit feature.
 *
 * @param request ConfigAuditLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigAuditLogResponse
 */
ConfigAuditLogResponse Client::configAuditLogWithOptions(const ConfigAuditLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuditAction()) {
    query["AuditAction"] = request.auditAction();
  }

  if (!!request.hasAuditOssBucket()) {
    query["AuditOssBucket"] = request.auditOssBucket();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ConfigAuditLog"},
    {"version" , "2023-11-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfigAuditLogResponse>();
}

/**
 * @summary Enables or disables the audit log feature and delivers audit logs to buckets.
 *
 * @description *   The region of the bucket must be the same as the region where the security audit feature is enabled.
 * *   If the security audit feature is enabled, do not delete Object Storage Service (OSS) buckets. If you delete OSS buckets, audit logs fail to be delivered.
 * *   Only electronic virtual security modules (EVSMs) and general virtual security modules (GVSMs) within the Chinese mainland support the security audit feature.
 *
 * @param request ConfigAuditLogRequest
 * @return ConfigAuditLogResponse
 */
ConfigAuditLogResponse Client::configAuditLog(const ConfigAuditLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configAuditLogWithOptions(request, runtime);
}

/**
 * @summary Configures the name and description of a backup.
 *
 * @param request ConfigBackupRemarkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigBackupRemarkResponse
 */
ConfigBackupRemarkResponse Client::configBackupRemarkWithOptions(const ConfigBackupRemarkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupId()) {
    query["BackupId"] = request.backupId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.remark();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ConfigBackupRemark"},
    {"version" , "2023-11-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfigBackupRemarkResponse>();
}

/**
 * @summary Configures the name and description of a backup.
 *
 * @param request ConfigBackupRemarkRequest
 * @return ConfigBackupRemarkResponse
 */
ConfigBackupRemarkResponse Client::configBackupRemark(const ConfigBackupRemarkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configBackupRemarkWithOptions(request, runtime);
}

/**
 * @summary Modifies the execution mode of a backup task.
 *
 * @description Only hardware security modules (HSMs) in the Chinese mainland support the operation.
 *
 * @param request ConfigBackupTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigBackupTaskResponse
 */
ConfigBackupTaskResponse Client::configBackupTaskWithOptions(const ConfigBackupTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupHourInDay()) {
    query["BackupHourInDay"] = request.backupHourInDay();
  }

  if (!!request.hasBackupId()) {
    query["BackupId"] = request.backupId();
  }

  if (!!request.hasBackupPeriod()) {
    query["BackupPeriod"] = request.backupPeriod();
  }

  if (!!request.hasManual2PeriodicList()) {
    query["Manual2PeriodicList"] = request.manual2PeriodicList();
  }

  if (!!request.hasPeriodic2ManualList()) {
    query["Periodic2ManualList"] = request.periodic2ManualList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ConfigBackupTask"},
    {"version" , "2023-11-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfigBackupTaskResponse>();
}

/**
 * @summary Modifies the execution mode of a backup task.
 *
 * @description Only hardware security modules (HSMs) in the Chinese mainland support the operation.
 *
 * @param request ConfigBackupTaskRequest
 * @return ConfigBackupTaskResponse
 */
ConfigBackupTaskResponse Client::configBackupTask(const ConfigBackupTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configBackupTaskWithOptions(request, runtime);
}

/**
 * @summary Configures a certificate for a cluster of hardware security modules (HSMs) outside the Chinese mainland.
 *
 * @description For more information about how to create a self-signed certificate and a cluster certificate on an Elastic Compute Service (ECS) instance, see [Create a NIST FIPS-validated GVSM cluster](https://help.aliyun.com/document_detail/293585.html).
 *
 * @param request ConfigClusterCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigClusterCertificateResponse
 */
ConfigClusterCertificateResponse Client::configClusterCertificateWithOptions(const ConfigClusterCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClusterCertificate()) {
    body["ClusterCertificate"] = request.clusterCertificate();
  }

  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.clusterId();
  }

  if (!!request.hasIssuerCertificate()) {
    body["IssuerCertificate"] = request.issuerCertificate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ConfigClusterCertificate"},
    {"version" , "2023-11-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfigClusterCertificateResponse>();
}

/**
 * @summary Configures a certificate for a cluster of hardware security modules (HSMs) outside the Chinese mainland.
 *
 * @description For more information about how to create a self-signed certificate and a cluster certificate on an Elastic Compute Service (ECS) instance, see [Create a NIST FIPS-validated GVSM cluster](https://help.aliyun.com/document_detail/293585.html).
 *
 * @param request ConfigClusterCertificateRequest
 * @return ConfigClusterCertificateResponse
 */
ConfigClusterCertificateResponse Client::configClusterCertificate(const ConfigClusterCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configClusterCertificateWithOptions(request, runtime);
}

/**
 * @summary Changes the name of a cluster.
 *
 * @param request ConfigClusterNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigClusterNameResponse
 */
ConfigClusterNameResponse Client::configClusterNameWithOptions(const ConfigClusterNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.clusterId();
  }

  if (!!request.hasClusterName()) {
    body["ClusterName"] = request.clusterName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ConfigClusterName"},
    {"version" , "2023-11-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfigClusterNameResponse>();
}

/**
 * @summary Changes the name of a cluster.
 *
 * @param request ConfigClusterNameRequest
 * @return ConfigClusterNameResponse
 */
ConfigClusterNameResponse Client::configClusterName(const ConfigClusterNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configClusterNameWithOptions(request, runtime);
}

/**
 * @summary Modifies a list of vSwitches that are associated with a hardware security module (HSM) cluster.
 *
 * @description You can call the operation to configure all vSwitches that are associated with a HSM cluster. You can only add new vSwitches. You cannot delete vSwitches.
 *
 * @param tmpReq ConfigClusterSubnetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigClusterSubnetResponse
 */
ConfigClusterSubnetResponse Client::configClusterSubnetWithOptions(const ConfigClusterSubnetRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ConfigClusterSubnetShrinkRequest request = ConfigClusterSubnetShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasVSwitchIds()) {
    request.setVSwitchIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.vSwitchIds(), "VSwitchIds", "json"));
  }

  json body = {};
  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.clusterId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasVSwitchIdsShrink()) {
    body["VSwitchIds"] = request.vSwitchIdsShrink();
  }

  if (!!request.hasVpcId()) {
    body["VpcId"] = request.vpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ConfigClusterSubnet"},
    {"version" , "2023-11-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfigClusterSubnetResponse>();
}

/**
 * @summary Modifies a list of vSwitches that are associated with a hardware security module (HSM) cluster.
 *
 * @description You can call the operation to configure all vSwitches that are associated with a HSM cluster. You can only add new vSwitches. You cannot delete vSwitches.
 *
 * @param request ConfigClusterSubnetRequest
 * @return ConfigClusterSubnetResponse
 */
ConfigClusterSubnetResponse Client::configClusterSubnet(const ConfigClusterSubnetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configClusterSubnetWithOptions(request, runtime);
}

/**
 * @summary Modifies the IP address whitelist of a cluster.
 *
 * @description The IP address whitelist of a cluster has a higher priority than the IP address whitelist of a hardware security module (HSM) in the cluster. In cluster mode, we recommend that you create an IP address whitelist for your cluster. You do not need to create an IP address for the HSM in the cluster.
 *
 * @param request ConfigClusterWhitelistRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigClusterWhitelistResponse
 */
ConfigClusterWhitelistResponse Client::configClusterWhitelistWithOptions(const ConfigClusterWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.clusterId();
  }

  if (!!request.hasWhitelist()) {
    body["Whitelist"] = request.whitelist();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ConfigClusterWhitelist"},
    {"version" , "2023-11-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfigClusterWhitelistResponse>();
}

/**
 * @summary Modifies the IP address whitelist of a cluster.
 *
 * @description The IP address whitelist of a cluster has a higher priority than the IP address whitelist of a hardware security module (HSM) in the cluster. In cluster mode, we recommend that you create an IP address whitelist for your cluster. You do not need to create an IP address for the HSM in the cluster.
 *
 * @param request ConfigClusterWhitelistRequest
 * @return ConfigClusterWhitelistResponse
 */
ConfigClusterWhitelistResponse Client::configClusterWhitelist(const ConfigClusterWhitelistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configClusterWhitelistWithOptions(request, runtime);
}

/**
 * @summary Modifies the description of an image.
 *
 * @param request ConfigImageRemarkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigImageRemarkResponse
 */
ConfigImageRemarkResponse Client::configImageRemarkWithOptions(const ConfigImageRemarkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasImageId()) {
    query["ImageId"] = request.imageId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.remark();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ConfigImageRemark"},
    {"version" , "2023-11-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfigImageRemarkResponse>();
}

/**
 * @summary Modifies the description of an image.
 *
 * @param request ConfigImageRemarkRequest
 * @return ConfigImageRemarkResponse
 */
ConfigImageRemarkResponse Client::configImageRemark(const ConfigImageRemarkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configImageRemarkWithOptions(request, runtime);
}

/**
 * @summary Modifies the virtual private cloud (VPC) endpoint of a hardware security module (HSM).
 *
 * @description After you add an HSM to a cluster, you cannot modify the VPC endpoint of the HSM.
 *
 * @param request ConfigInstanceIpAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigInstanceIpAddressResponse
 */
ConfigInstanceIpAddressResponse Client::configInstanceIpAddressWithOptions(const ConfigInstanceIpAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasIp()) {
    body["Ip"] = request.ip();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasVSwitchId()) {
    body["VSwitchId"] = request.vSwitchId();
  }

  if (!!request.hasVpcId()) {
    body["VpcId"] = request.vpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ConfigInstanceIpAddress"},
    {"version" , "2023-11-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfigInstanceIpAddressResponse>();
}

/**
 * @summary Modifies the virtual private cloud (VPC) endpoint of a hardware security module (HSM).
 *
 * @description After you add an HSM to a cluster, you cannot modify the VPC endpoint of the HSM.
 *
 * @param request ConfigInstanceIpAddressRequest
 * @return ConfigInstanceIpAddressResponse
 */
ConfigInstanceIpAddressResponse Client::configInstanceIpAddress(const ConfigInstanceIpAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configInstanceIpAddressWithOptions(request, runtime);
}

/**
 * @summary Modifies the description of a hardware security module (HSM).
 *
 * @param request ConfigInstanceRemarkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigInstanceRemarkResponse
 */
ConfigInstanceRemarkResponse Client::configInstanceRemarkWithOptions(const ConfigInstanceRemarkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRemark()) {
    body["Remark"] = request.remark();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ConfigInstanceRemark"},
    {"version" , "2023-11-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfigInstanceRemarkResponse>();
}

/**
 * @summary Modifies the description of a hardware security module (HSM).
 *
 * @param request ConfigInstanceRemarkRequest
 * @return ConfigInstanceRemarkResponse
 */
ConfigInstanceRemarkResponse Client::configInstanceRemark(const ConfigInstanceRemarkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configInstanceRemarkWithOptions(request, runtime);
}

/**
 * @summary Modifies the IP address whitelist of a hardware security module (HSM).
 *
 * @description You can configure the IP address whitelist for HSMs that are not added to a cluster and are in the ACTIVE state.
 *
 * @param request ConfigInstanceWhitelistRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigInstanceWhitelistResponse
 */
ConfigInstanceWhitelistResponse Client::configInstanceWhitelistWithOptions(const ConfigInstanceWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasWhitelist()) {
    body["Whitelist"] = request.whitelist();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ConfigInstanceWhitelist"},
    {"version" , "2023-11-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfigInstanceWhitelistResponse>();
}

/**
 * @summary Modifies the IP address whitelist of a hardware security module (HSM).
 *
 * @description You can configure the IP address whitelist for HSMs that are not added to a cluster and are in the ACTIVE state.
 *
 * @param request ConfigInstanceWhitelistRequest
 * @return ConfigInstanceWhitelistResponse
 */
ConfigInstanceWhitelistResponse Client::configInstanceWhitelist(const ConfigInstanceWhitelistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configInstanceWhitelistWithOptions(request, runtime);
}

/**
 * @summary Copies an image to another region.
 *
 * @description This operation requires that the destination region does not have the same image. This operation is available only for hardware security modules (HSMs) outside the Chinese mainland.
 *
 * @param request CopyImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CopyImageResponse
 */
CopyImageResponse Client::copyImageWithOptions(const CopyImageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasImageUid()) {
    body["ImageUid"] = request.imageUid();
  }

  if (!!request.hasTargetRegionId()) {
    body["TargetRegionId"] = request.targetRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CopyImage"},
    {"version" , "2023-11-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CopyImageResponse>();
}

/**
 * @summary Copies an image to another region.
 *
 * @description This operation requires that the destination region does not have the same image. This operation is available only for hardware security modules (HSMs) outside the Chinese mainland.
 *
 * @param request CopyImageRequest
 * @return CopyImageResponse
 */
CopyImageResponse Client::copyImage(const CopyImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return copyImageWithOptions(request, runtime);
}

/**
 * @summary Creates a cluster by specifying a hardware security module (HSM) as the master HSM.
 *
 * @description The master HSM that you specify to create a cluster must be in the ACTIVE state.
 *
 * @param request CreateClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateClusterResponse
 */
CreateClusterResponse Client::createClusterWithOptions(const CreateClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClusterName()) {
    body["ClusterName"] = request.clusterName();
  }

  if (!!request.hasMasterInstanceId()) {
    body["MasterInstanceId"] = request.masterInstanceId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateCluster"},
    {"version" , "2023-11-13"},
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
 * @summary Creates a cluster by specifying a hardware security module (HSM) as the master HSM.
 *
 * @description The master HSM that you specify to create a cluster must be in the ACTIVE state.
 *
 * @param request CreateClusterRequest
 * @return CreateClusterResponse
 */
CreateClusterResponse Client::createCluster(const CreateClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createClusterWithOptions(request, runtime);
}

/**
 * @summary Deletes a hardware security module (HSM) cluster.
 *
 * @description You can delete an HSM only if the cluster does not contain HSMs.
 *
 * @param request DeleteClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteClusterResponse
 */
DeleteClusterResponse Client::deleteClusterWithOptions(const DeleteClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.clusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteCluster"},
    {"version" , "2023-11-13"},
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
 * @summary Deletes a hardware security module (HSM) cluster.
 *
 * @description You can delete an HSM only if the cluster does not contain HSMs.
 *
 * @param request DeleteClusterRequest
 * @return DeleteClusterResponse
 */
DeleteClusterResponse Client::deleteCluster(const DeleteClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteClusterWithOptions(request, runtime);
}

/**
 * @summary Queries the regions that are supported by Cloud Hardware Security Module.
 *
 * @param request DescribeRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegionsWithOptions(const DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.acceptLanguage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRegions"},
    {"version" , "2023-11-13"},
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
 * @summary Queries the regions that are supported by Cloud Hardware Security Module.
 *
 * @param request DescribeRegionsRequest
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions(const DescribeRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRegionsWithOptions(request, runtime);
}

/**
 * @summary 下载集群托管证书
 *
 * @description ## 请求说明
 * - 该API允许用户获取特定集群的管理证书。
 * - 返回的数据是经过base64编码的证书内容。
 *
 * @param request DownloadClusterManagedCertRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DownloadClusterManagedCertResponse
 */
DownloadClusterManagedCertResponse Client::downloadClusterManagedCertWithOptions(const DownloadClusterManagedCertRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DownloadClusterManagedCert"},
    {"version" , "2023-11-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DownloadClusterManagedCertResponse>();
}

/**
 * @summary 下载集群托管证书
 *
 * @description ## 请求说明
 * - 该API允许用户获取特定集群的管理证书。
 * - 返回的数据是经过base64编码的证书内容。
 *
 * @param request DownloadClusterManagedCertRequest
 * @return DownloadClusterManagedCertResponse
 */
DownloadClusterManagedCertResponse Client::downloadClusterManagedCert(const DownloadClusterManagedCertRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return downloadClusterManagedCertWithOptions(request, runtime);
}

/**
 * @summary Binds a backup to a specified hardware security module (HSM).
 *
 * @description This operation is available only for backups in the Chinese mainland.
 *
 * @param request EnableBackupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableBackupResponse
 */
EnableBackupResponse Client::enableBackupWithOptions(const EnableBackupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupId()) {
    query["BackupId"] = request.backupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableBackup"},
    {"version" , "2023-11-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableBackupResponse>();
}

/**
 * @summary Binds a backup to a specified hardware security module (HSM).
 *
 * @description This operation is available only for backups in the Chinese mainland.
 *
 * @param request EnableBackupRequest
 * @return EnableBackupResponse
 */
EnableBackupResponse Client::enableBackup(const EnableBackupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableBackupWithOptions(request, runtime);
}

/**
 * @summary Exports the image for a specified hardware security module (HSM).
 *
 * @param request ExportImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportImageResponse
 */
ExportImageResponse Client::exportImageWithOptions(const ExportImageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasImageId()) {
    query["ImageId"] = request.imageId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ExportImage"},
    {"version" , "2023-11-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportImageResponse>();
}

/**
 * @summary Exports the image for a specified hardware security module (HSM).
 *
 * @param request ExportImageRequest
 * @return ExportImageResponse
 */
ExportImageResponse Client::exportImage(const ExportImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return exportImageWithOptions(request, runtime);
}

/**
 * @summary Queries the status of the audit log feature in the current region.
 *
 * @param request GetAuditLogStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAuditLogStatusResponse
 */
GetAuditLogStatusResponse Client::getAuditLogStatusWithOptions(const GetAuditLogStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGetOssBucket()) {
    query["GetOssBucket"] = request.getOssBucket();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAuditLogStatus"},
    {"version" , "2023-11-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAuditLogStatusResponse>();
}

/**
 * @summary Queries the status of the audit log feature in the current region.
 *
 * @param request GetAuditLogStatusRequest
 * @return GetAuditLogStatusResponse
 */
GetAuditLogStatusResponse Client::getAuditLogStatus(const GetAuditLogStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAuditLogStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a specified backup.
 *
 * @param request GetBackupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBackupResponse
 */
GetBackupResponse Client::getBackupWithOptions(const GetBackupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupId()) {
    query["BackupId"] = request.backupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetBackup"},
    {"version" , "2023-11-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetBackupResponse>();
}

/**
 * @summary Queries the information about a specified backup.
 *
 * @param request GetBackupRequest
 * @return GetBackupResponse
 */
GetBackupResponse Client::getBackup(const GetBackupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBackupWithOptions(request, runtime);
}

/**
 * @summary Queries information about a specified cluster.
 *
 * @param request GetClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetClusterResponse
 */
GetClusterResponse Client::getClusterWithOptions(const GetClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.clusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetCluster"},
    {"version" , "2023-11-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetClusterResponse>();
}

/**
 * @summary Queries information about a specified cluster.
 *
 * @param request GetClusterRequest
 * @return GetClusterResponse
 */
GetClusterResponse Client::getCluster(const GetClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getClusterWithOptions(request, runtime);
}

/**
 * @summary Queries information about an image.
 *
 * @param request GetImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetImageResponse
 */
GetImageResponse Client::getImageWithOptions(const GetImageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasImageId()) {
    query["ImageId"] = request.imageId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetImage"},
    {"version" , "2023-11-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetImageResponse>();
}

/**
 * @summary Queries information about an image.
 *
 * @param request GetImageRequest
 * @return GetImageResponse
 */
GetImageResponse Client::getImage(const GetImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getImageWithOptions(request, runtime);
}

/**
 * @summary Queries information about a specified hardware security module (HSM).
 *
 * @param request GetInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceResponse
 */
GetInstanceResponse Client::getInstanceWithOptions(const GetInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetInstance"},
    {"version" , "2023-11-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceResponse>();
}

/**
 * @summary Queries information about a specified hardware security module (HSM).
 *
 * @param request GetInstanceRequest
 * @return GetInstanceResponse
 */
GetInstanceResponse Client::getInstance(const GetInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an asynchronous task.
 *
 * @param request GetJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetJobResponse
 */
GetJobResponse Client::getJobWithOptions(const GetJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetJob"},
    {"version" , "2023-11-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetJobResponse>();
}

/**
 * @summary Queries the details of an asynchronous task.
 *
 * @param request GetJobRequest
 * @return GetJobResponse
 */
GetJobResponse Client::getJob(const GetJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getJobWithOptions(request, runtime);
}

/**
 * @summary Authorizes Cloud Hardware Security Module to deliver logs.
 *
 * @param request InitializeAuditLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InitializeAuditLogResponse
 */
InitializeAuditLogResponse Client::initializeAuditLogWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "InitializeAuditLog"},
    {"version" , "2023-11-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InitializeAuditLogResponse>();
}

/**
 * @summary Authorizes Cloud Hardware Security Module to deliver logs.
 *
 * @return InitializeAuditLogResponse
 */
InitializeAuditLogResponse Client::initializeAuditLog() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return initializeAuditLogWithOptions(runtime);
}

/**
 * @summary Initializes a cluster.
 *
 * @description *   The cluster is not initialized, but the master hardware security module (HSM) of the cluster is initialized.
 * *   Two or more vSwitches are configured for the cluster.
 *
 * @param request InitializeClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InitializeClusterResponse
 */
InitializeClusterResponse Client::initializeClusterWithOptions(const InitializeClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.clusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "InitializeCluster"},
    {"version" , "2023-11-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InitializeClusterResponse>();
}

/**
 * @summary Initializes a cluster.
 *
 * @description *   The cluster is not initialized, but the master hardware security module (HSM) of the cluster is initialized.
 * *   Two or more vSwitches are configured for the cluster.
 *
 * @param request InitializeClusterRequest
 * @return InitializeClusterResponse
 */
InitializeClusterResponse Client::initializeCluster(const InitializeClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return initializeClusterWithOptions(request, runtime);
}

/**
 * @summary Adds a hardware security module (HSM) to the current cluster.
 *
 * @description *   You can add the HSM to only the cluster that is in the INITIALIZED state.
 * *   The HSM that you want to add to the cluster is enabled or disabled and is not initialized.
 *
 * @param request JoinClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return JoinClusterResponse
 */
JoinClusterResponse Client::joinClusterWithOptions(const JoinClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.clusterId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "JoinCluster"},
    {"version" , "2023-11-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<JoinClusterResponse>();
}

/**
 * @summary Adds a hardware security module (HSM) to the current cluster.
 *
 * @description *   You can add the HSM to only the cluster that is in the INITIALIZED state.
 * *   The HSM that you want to add to the cluster is enabled or disabled and is not initialized.
 *
 * @param request JoinClusterRequest
 * @return JoinClusterResponse
 */
JoinClusterResponse Client::joinCluster(const JoinClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return joinClusterWithOptions(request, runtime);
}

/**
 * @summary Removes a hardware security module (HSM) from the current cluster.
 *
 * @description *   If non-master HSMs exist in a cluster, the master HSM cannot be removed from the cluster.
 * *   After the master HSM is removed from a cluster, the cluster enters the TO_DELETE state and cannot be restored to the available state. Proceed with caution.
 *
 * @param request LeaveClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return LeaveClusterResponse
 */
LeaveClusterResponse Client::leaveClusterWithOptions(const LeaveClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.clusterId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "LeaveCluster"},
    {"version" , "2023-11-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<LeaveClusterResponse>();
}

/**
 * @summary Removes a hardware security module (HSM) from the current cluster.
 *
 * @description *   If non-master HSMs exist in a cluster, the master HSM cannot be removed from the cluster.
 * *   After the master HSM is removed from a cluster, the cluster enters the TO_DELETE state and cannot be restored to the available state. Proceed with caution.
 *
 * @param request LeaveClusterRequest
 * @return LeaveClusterResponse
 */
LeaveClusterResponse Client::leaveCluster(const LeaveClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return leaveClusterWithOptions(request, runtime);
}

/**
 * @summary Queries the backups that meet the query conditions.
 *
 * @param request ListBackupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBackupsResponse
 */
ListBackupsResponse Client::listBackupsWithOptions(const ListBackupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupId()) {
    query["BackupId"] = request.backupId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListBackups"},
    {"version" , "2023-11-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListBackupsResponse>();
}

/**
 * @summary Queries the backups that meet the query conditions.
 *
 * @param request ListBackupsRequest
 * @return ListBackupsResponse
 */
ListBackupsResponse Client::listBackups(const ListBackupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listBackupsWithOptions(request, runtime);
}

/**
 * @summary Queries the clusters that meet the query conditions.
 *
 * @param request ListClustersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListClustersResponse
 */
ListClustersResponse Client::listClustersWithOptions(const ListClustersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCurrentPage()) {
    body["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListClusters"},
    {"version" , "2023-11-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListClustersResponse>();
}

/**
 * @summary Queries the clusters that meet the query conditions.
 *
 * @param request ListClustersRequest
 * @return ListClustersResponse
 */
ListClustersResponse Client::listClusters(const ListClustersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listClustersWithOptions(request, runtime);
}

/**
 * @summary Queries the images that meet the specified conditions.
 *
 * @param request ListImagesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListImagesResponse
 */
ListImagesResponse Client::listImagesWithOptions(const ListImagesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupId()) {
    query["BackupId"] = request.backupId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasMode()) {
    query["Mode"] = request.mode();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListImages"},
    {"version" , "2023-11-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListImagesResponse>();
}

/**
 * @summary Queries the images that meet the specified conditions.
 *
 * @param request ListImagesRequest
 * @return ListImagesResponse
 */
ListImagesResponse Client::listImages(const ListImagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listImagesWithOptions(request, runtime);
}

/**
 * @summary Queries the hardware security modules (HSMs) that meet the query conditions.
 *
 * @param request ListInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstancesResponse
 */
ListInstancesResponse Client::listInstancesWithOptions(const ListInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCurrentPage()) {
    body["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasTenantIsolationType()) {
    body["TenantIsolationType"] = request.tenantIsolationType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListInstances"},
    {"version" , "2023-11-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstancesResponse>();
}

/**
 * @summary Queries the hardware security modules (HSMs) that meet the query conditions.
 *
 * @param request ListInstancesRequest
 * @return ListInstancesResponse
 */
ListInstancesResponse Client::listInstances(const ListInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInstancesWithOptions(request, runtime);
}

/**
 * @summary Moves a resource to a new resource group.
 *
 * @param request MoveResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MoveResourceGroupResponse
 */
MoveResourceGroupResponse Client::moveResourceGroupWithOptions(const MoveResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MoveResourceGroup"},
    {"version" , "2023-11-13"},
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
 * @summary Moves a resource to a new resource group.
 *
 * @param request MoveResourceGroupRequest
 * @return MoveResourceGroupResponse
 */
MoveResourceGroupResponse Client::moveResourceGroup(const MoveResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return moveResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Disables a hardware security module (HSM).
 *
 * @description After you disable an HSM, the relevant service operations fail. Proceed with caution.
 *
 * @param request PauseInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PauseInstanceResponse
 */
PauseInstanceResponse Client::pauseInstanceWithOptions(const PauseInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "PauseInstance"},
    {"version" , "2023-11-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PauseInstanceResponse>();
}

/**
 * @summary Disables a hardware security module (HSM).
 *
 * @description After you disable an HSM, the relevant service operations fail. Proceed with caution.
 *
 * @param request PauseInstanceRequest
 * @return PauseInstanceResponse
 */
PauseInstanceResponse Client::pauseInstance(const PauseInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pauseInstanceWithOptions(request, runtime);
}

/**
 * @summary 快速部署集群
 *
 * @param tmpReq QuickDeployClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuickDeployClusterResponse
 */
QuickDeployClusterResponse Client::quickDeployClusterWithOptions(const QuickDeployClusterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QuickDeployClusterShrinkRequest request = QuickDeployClusterShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInstanceList()) {
    request.setInstanceListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.instanceList(), "InstanceList", "json"));
  }

  if (!!tmpReq.hasVSwitchIdList()) {
    request.setVSwitchIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.vSwitchIdList(), "VSwitchIdList", "json"));
  }

  if (!!tmpReq.hasWhiteList()) {
    request.setWhiteListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.whiteList(), "WhiteList", "json"));
  }

  json query = {};
  if (!!request.hasCertManaged()) {
    query["CertManaged"] = request.certManaged();
  }

  if (!!request.hasClusterName()) {
    query["ClusterName"] = request.clusterName();
  }

  if (!!request.hasInstanceListShrink()) {
    query["InstanceList"] = request.instanceListShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasVSwitchIdListShrink()) {
    query["VSwitchIdList"] = request.vSwitchIdListShrink();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  if (!!request.hasWhiteListShrink()) {
    query["WhiteList"] = request.whiteListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QuickDeployCluster"},
    {"version" , "2023-11-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuickDeployClusterResponse>();
}

/**
 * @summary 快速部署集群
 *
 * @param request QuickDeployClusterRequest
 * @return QuickDeployClusterResponse
 */
QuickDeployClusterResponse Client::quickDeployCluster(const QuickDeployClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return quickDeployClusterWithOptions(request, runtime);
}

/**
 * @summary Initializes a hardware security module (HSM).
 *
 * @description This operation is supported only for general virtual security modules (GVSMs) in the Chinese mainland.
 *
 * @param request QuickInitInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuickInitInstanceResponse
 */
QuickInitInstanceResponse Client::quickInitInstanceWithOptions(const QuickInitInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "QuickInitInstance"},
    {"version" , "2023-11-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuickInitInstanceResponse>();
}

/**
 * @summary Initializes a hardware security module (HSM).
 *
 * @description This operation is supported only for general virtual security modules (GVSMs) in the Chinese mainland.
 *
 * @param request QuickInitInstanceRequest
 * @return QuickInitInstanceResponse
 */
QuickInitInstanceResponse Client::quickInitInstance(const QuickInitInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return quickInitInstanceWithOptions(request, runtime);
}

/**
 * @summary Disassociates a backup from a hardware security module (HSM).
 *
 * @description This operation is available only for HSMs in the Chinese mainland.
 *
 * @param request ResetBackupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetBackupResponse
 */
ResetBackupResponse Client::resetBackupWithOptions(const ResetBackupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupId()) {
    query["BackupId"] = request.backupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResetBackup"},
    {"version" , "2023-11-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetBackupResponse>();
}

/**
 * @summary Disassociates a backup from a hardware security module (HSM).
 *
 * @description This operation is available only for HSMs in the Chinese mainland.
 *
 * @param request ResetBackupRequest
 * @return ResetBackupResponse
 */
ResetBackupResponse Client::resetBackup(const ResetBackupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetBackupWithOptions(request, runtime);
}

/**
 * @summary Resets a hardware security module (HSM).
 *
 * @description After an HSM is reset, all related data is deleted and cannot be recovered. Proceed with caution.
 *
 * @param request ResetInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetInstanceResponse
 */
ResetInstanceResponse Client::resetInstanceWithOptions(const ResetInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ResetInstance"},
    {"version" , "2023-11-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetInstanceResponse>();
}

/**
 * @summary Resets a hardware security module (HSM).
 *
 * @description After an HSM is reset, all related data is deleted and cannot be recovered. Proceed with caution.
 *
 * @param request ResetInstanceRequest
 * @return ResetInstanceResponse
 */
ResetInstanceResponse Client::resetInstance(const ResetInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetInstanceWithOptions(request, runtime);
}

/**
 * @summary Restores a hardware security module (HSM) by using an image.
 *
 * @description You can use images to restore only HSMs that are paused or disabled.
 *
 * @param request RestoreInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestoreInstanceResponse
 */
RestoreInstanceResponse Client::restoreInstanceWithOptions(const RestoreInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasImageId()) {
    body["ImageId"] = request.imageId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RestoreInstance"},
    {"version" , "2023-11-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RestoreInstanceResponse>();
}

/**
 * @summary Restores a hardware security module (HSM) by using an image.
 *
 * @description You can use images to restore only HSMs that are paused or disabled.
 *
 * @param request RestoreInstanceRequest
 * @return RestoreInstanceResponse
 */
RestoreInstanceResponse Client::restoreInstance(const RestoreInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return restoreInstanceWithOptions(request, runtime);
}

/**
 * @summary Resumes a disabled hardware security module (HSM).
 *
 * @param request ResumeInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResumeInstanceResponse
 */
ResumeInstanceResponse Client::resumeInstanceWithOptions(const ResumeInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ResumeInstance"},
    {"version" , "2023-11-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResumeInstanceResponse>();
}

/**
 * @summary Resumes a disabled hardware security module (HSM).
 *
 * @param request ResumeInstanceRequest
 * @return ResumeInstanceResponse
 */
ResumeInstanceResponse Client::resumeInstance(const ResumeInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resumeInstanceWithOptions(request, runtime);
}

/**
 * @summary 轮转集群托管证书
 *
 * @description ## 请求说明
 * 该API用于触发指定集群的管理证书轮转过程。通过提供`ClusterId`参数，可以指定需要进行证书轮转的集群。此操作有助于提高集群的安全性，建议定期执行。
 * ### 注意事项
 * - 确保提供的`ClusterId`是有效的，并且用户具有对该集群的操作权限。
 * - 证书轮转可能会影响依赖于旧证书的服务，请在适当的时间窗口内执行此操作。
 *
 * @param request RotateClusterManagedCertRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RotateClusterManagedCertResponse
 */
RotateClusterManagedCertResponse Client::rotateClusterManagedCertWithOptions(const RotateClusterManagedCertRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RotateClusterManagedCert"},
    {"version" , "2023-11-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RotateClusterManagedCertResponse>();
}

/**
 * @summary 轮转集群托管证书
 *
 * @description ## 请求说明
 * 该API用于触发指定集群的管理证书轮转过程。通过提供`ClusterId`参数，可以指定需要进行证书轮转的集群。此操作有助于提高集群的安全性，建议定期执行。
 * ### 注意事项
 * - 确保提供的`ClusterId`是有效的，并且用户具有对该集群的操作权限。
 * - 证书轮转可能会影响依赖于旧证书的服务，请在适当的时间窗口内执行此操作。
 *
 * @param request RotateClusterManagedCertRequest
 * @return RotateClusterManagedCertResponse
 */
RotateClusterManagedCertResponse Client::rotateClusterManagedCert(const RotateClusterManagedCertRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rotateClusterManagedCertWithOptions(request, runtime);
}

/**
 * @summary Promotes a slave hardware security module (HSM) to the master HSM within the cluster. Clusters that are manually synchronized in the Chinese Mainland do not support this operation.
 *
 * @param request SwitchClusterMasterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SwitchClusterMasterResponse
 */
SwitchClusterMasterResponse Client::switchClusterMasterWithOptions(const SwitchClusterMasterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.clusterId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SwitchClusterMaster"},
    {"version" , "2023-11-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SwitchClusterMasterResponse>();
}

/**
 * @summary Promotes a slave hardware security module (HSM) to the master HSM within the cluster. Clusters that are manually synchronized in the Chinese Mainland do not support this operation.
 *
 * @param request SwitchClusterMasterRequest
 * @return SwitchClusterMasterResponse
 */
SwitchClusterMasterResponse Client::switchClusterMaster(const SwitchClusterMasterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return switchClusterMasterWithOptions(request, runtime);
}

/**
 * @summary Synchronizes the data of hardware security modules (HSMs) in a cluster.
 *
 * @description *   This operation is used for manually synchronizing data within clusters located in the Chinese Mainland. For clusters outside the Chinese Mainland, automatic data synchronization is supported, and this operation is unnecessary. If you attempt to use this operation, a 400 error code will be returned.
 * *   The data synchronization takes approximately 5 minutes. To avoid service interruptions, we recommend performing this operation during off-peak hours.
 *
 * @param request SyncClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SyncClusterResponse
 */
SyncClusterResponse Client::syncClusterWithOptions(const SyncClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.clusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SyncCluster"},
    {"version" , "2023-11-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SyncClusterResponse>();
}

/**
 * @summary Synchronizes the data of hardware security modules (HSMs) in a cluster.
 *
 * @description *   This operation is used for manually synchronizing data within clusters located in the Chinese Mainland. For clusters outside the Chinese Mainland, automatic data synchronization is supported, and this operation is unnecessary. If you attempt to use this operation, a 400 error code will be returned.
 * *   The data synchronization takes approximately 5 minutes. To avoid service interruptions, we recommend performing this operation during off-peak hours.
 *
 * @param request SyncClusterRequest
 * @return SyncClusterResponse
 */
SyncClusterResponse Client::syncCluster(const SyncClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return syncClusterWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Hsm20231113