#include <darabonba/Core.hpp>
#include <alibabacloud/Smc20190601.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Smc20190601::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Smc20190601
{

AlibabaCloud::Smc20190601::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "central";
  checkConfig(config);
  this->_endpoint = getEndpoint("smc", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Associates multiple migration sources with a workgroup.
 *
 * @description A migration source can be associated with only one workgroup.
 *
 * @param request AssociateSourceServersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AssociateSourceServersResponse
 */
AssociateSourceServersResponse Client::associateSourceServersWithOptions(const AssociateSourceServersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasSourceId()) {
    query["SourceId"] = request.sourceId();
  }

  if (!!request.hasWorkgroupId()) {
    query["WorkgroupId"] = request.workgroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AssociateSourceServers"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AssociateSourceServersResponse>();
}

/**
 * @summary Associates multiple migration sources with a workgroup.
 *
 * @description A migration source can be associated with only one workgroup.
 *
 * @param request AssociateSourceServersRequest
 * @return AssociateSourceServersResponse
 */
AssociateSourceServersResponse Client::associateSourceServers(const AssociateSourceServersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return associateSourceServersWithOptions(request, runtime);
}

/**
 * @summary Creates an activation code.
 *
 * @description If you want to import the information of migration sources by using an activation code, you can call this operation to create one.
 *
 * @param request CreateAccessTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAccessTokenResponse
 */
CreateAccessTokenResponse Client::createAccessTokenWithOptions(const CreateAccessTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCount()) {
    query["Count"] = request.count();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasTimeToLiveInDays()) {
    query["TimeToLiveInDays"] = request.timeToLiveInDays();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAccessToken"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAccessTokenResponse>();
}

/**
 * @summary Creates an activation code.
 *
 * @description If you want to import the information of migration sources by using an activation code, you can call this operation to create one.
 *
 * @param request CreateAccessTokenRequest
 * @return CreateAccessTokenResponse
 */
CreateAccessTokenResponse Client::createAccessToken(const CreateAccessTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAccessTokenWithOptions(request, runtime);
}

/**
 * @summary Server Migration Center (SMC) allows you to migrate Alibaba Cloud ECS instances across zones in the same region. You can also change the instance type (vCPU and memory) within the same instance family to meet your business requirements. You can use this API to create a cross-zone migration job.
 *
 * @description For more information about the limits and impacts of cross-zone migration, see [Cross-zone ECS instance migration](https://help.aliyun.com/document_detail/476797.html).
 *
 * @param request CreateCrossZoneMigrationJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCrossZoneMigrationJobResponse
 */
CreateCrossZoneMigrationJobResponse Client::createCrossZoneMigrationJobWithOptions(const CreateCrossZoneMigrationJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.autoPay();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDisk()) {
    query["Disk"] = request.disk();
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

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasTargetInstanceType()) {
    query["TargetInstanceType"] = request.targetInstanceType();
  }

  if (!!request.hasTargetVSwitchId()) {
    query["TargetVSwitchId"] = request.targetVSwitchId();
  }

  if (!!request.hasTargetZoneId()) {
    query["TargetZoneId"] = request.targetZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCrossZoneMigrationJob"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCrossZoneMigrationJobResponse>();
}

/**
 * @summary Server Migration Center (SMC) allows you to migrate Alibaba Cloud ECS instances across zones in the same region. You can also change the instance type (vCPU and memory) within the same instance family to meet your business requirements. You can use this API to create a cross-zone migration job.
 *
 * @description For more information about the limits and impacts of cross-zone migration, see [Cross-zone ECS instance migration](https://help.aliyun.com/document_detail/476797.html).
 *
 * @param request CreateCrossZoneMigrationJobRequest
 * @return CreateCrossZoneMigrationJobResponse
 */
CreateCrossZoneMigrationJobResponse Client::createCrossZoneMigrationJob(const CreateCrossZoneMigrationJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCrossZoneMigrationJobWithOptions(request, runtime);
}

/**
 * @summary Creates a migration job for a source server.
 *
 * @description ## Usage notes
 * *   You can create migration jobs only for source servers that are in the Available state.
 * *   Each source server can be associated with only one migration job that is in the Ready, Running, Stopped, Waiting, InError, or Expired state.
 * *   You can create a maximum of 1,000 migration jobs within each Alibaba Cloud account.
 * *   If you migrate a source server to an image, you must specify the ImageName, SystemDiskSize, and DataDisk parameters.
 * *   If you use a virtual private cloud (VPC) to migrate data, the VSwitchId parameter is required and the VpcId parameter is optional.
 * *   Server Migration Center (SMC) allows you to migrate source servers to Docker container images. This allows you to migrate containerized applications in a cost-effective way.
 *
 * @param request CreateReplicationJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateReplicationJobResponse
 */
CreateReplicationJobResponse Client::createReplicationJobWithOptions(const CreateReplicationJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasContainerNamespace()) {
    query["ContainerNamespace"] = request.containerNamespace();
  }

  if (!!request.hasContainerRepository()) {
    query["ContainerRepository"] = request.containerRepository();
  }

  if (!!request.hasContainerTag()) {
    query["ContainerTag"] = request.containerTag();
  }

  if (!!request.hasDataDisk()) {
    query["DataDisk"] = request.dataDisk();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasDisks()) {
    query["Disks"] = request.disks();
  }

  if (!!request.hasFrequency()) {
    query["Frequency"] = request.frequency();
  }

  if (!!request.hasImageName()) {
    query["ImageName"] = request.imageName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInstanceRamRole()) {
    query["InstanceRamRole"] = request.instanceRamRole();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.instanceType();
  }

  if (!!request.hasJobType()) {
    query["JobType"] = request.jobType();
  }

  if (!!request.hasLaunchTemplateId()) {
    query["LaunchTemplateId"] = request.launchTemplateId();
  }

  if (!!request.hasLaunchTemplateVersion()) {
    query["LaunchTemplateVersion"] = request.launchTemplateVersion();
  }

  if (!!request.hasLicenseType()) {
    query["LicenseType"] = request.licenseType();
  }

  if (!!request.hasMaxNumberOfImageToKeep()) {
    query["MaxNumberOfImageToKeep"] = request.maxNumberOfImageToKeep();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasNetMode()) {
    query["NetMode"] = request.netMode();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasReplicationParameters()) {
    query["ReplicationParameters"] = request.replicationParameters();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasRunOnce()) {
    query["RunOnce"] = request.runOnce();
  }

  if (!!request.hasScheduledStartTime()) {
    query["ScheduledStartTime"] = request.scheduledStartTime();
  }

  if (!!request.hasSourceId()) {
    query["SourceId"] = request.sourceId();
  }

  if (!!request.hasSystemDiskPart()) {
    query["SystemDiskPart"] = request.systemDiskPart();
  }

  if (!!request.hasSystemDiskSize()) {
    query["SystemDiskSize"] = request.systemDiskSize();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasTargetType()) {
    query["TargetType"] = request.targetType();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.vSwitchId();
  }

  if (!!request.hasValidTime()) {
    query["ValidTime"] = request.validTime();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateReplicationJob"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateReplicationJobResponse>();
}

/**
 * @summary Creates a migration job for a source server.
 *
 * @description ## Usage notes
 * *   You can create migration jobs only for source servers that are in the Available state.
 * *   Each source server can be associated with only one migration job that is in the Ready, Running, Stopped, Waiting, InError, or Expired state.
 * *   You can create a maximum of 1,000 migration jobs within each Alibaba Cloud account.
 * *   If you migrate a source server to an image, you must specify the ImageName, SystemDiskSize, and DataDisk parameters.
 * *   If you use a virtual private cloud (VPC) to migrate data, the VSwitchId parameter is required and the VpcId parameter is optional.
 * *   Server Migration Center (SMC) allows you to migrate source servers to Docker container images. This allows you to migrate containerized applications in a cost-effective way.
 *
 * @param request CreateReplicationJobRequest
 * @return CreateReplicationJobResponse
 */
CreateReplicationJobResponse Client::createReplicationJob(const CreateReplicationJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createReplicationJobWithOptions(request, runtime);
}

/**
 * @summary Creates a workgroup. You can create a workgroup to manage the lifecycles of multiple migration tasks at a time. This is suitable for scenarios in which multiple servers are migrated.
 *
 * @description *   You can create up to 50 workgroups within an Alibaba Cloud account.
 * *   A workgroup can be associated with a maximum of 50 migration sources.
 * *   A migration source can be associated with only one workgroup.
 *
 * @param request CreateWorkgroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWorkgroupResponse
 */
CreateWorkgroupResponse Client::createWorkgroupWithOptions(const CreateWorkgroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateWorkgroup"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateWorkgroupResponse>();
}

/**
 * @summary Creates a workgroup. You can create a workgroup to manage the lifecycles of multiple migration tasks at a time. This is suitable for scenarios in which multiple servers are migrated.
 *
 * @description *   You can create up to 50 workgroups within an Alibaba Cloud account.
 * *   A workgroup can be associated with a maximum of 50 migration sources.
 * *   A migration source can be associated with only one workgroup.
 *
 * @param request CreateWorkgroupRequest
 * @return CreateWorkgroupResponse
 */
CreateWorkgroupResponse Client::createWorkgroup(const CreateWorkgroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createWorkgroupWithOptions(request, runtime);
}

/**
 * @summary Stops an incremental migration job that periodically runs. After you call this operation to stop an incremental migration job, the migration job is complete.
 *
 * @description ## Usage notes
 * *   The incremental migration job must be in the Waiting state.
 * *   After you call this operation, the incremental migration job no longer periodically runs. In the meantime, Server Migration Center (SMC) determines whether to perform a full data migration for the last time based on the value of the `SyncData` parameter. If you set the SyncData parameter to `false`, SMC releases intermediate resources without data migration before the migration job is complete. If you set the SyncData parameter to `true`, SMC performs a full data migration and releases intermediate resources before the migration job is complete.
 *
 * @param request CutOverReplicationJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CutOverReplicationJobResponse
 */
CutOverReplicationJobResponse Client::cutOverReplicationJobWithOptions(const CutOverReplicationJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasSyncData()) {
    query["SyncData"] = request.syncData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CutOverReplicationJob"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CutOverReplicationJobResponse>();
}

/**
 * @summary Stops an incremental migration job that periodically runs. After you call this operation to stop an incremental migration job, the migration job is complete.
 *
 * @description ## Usage notes
 * *   The incremental migration job must be in the Waiting state.
 * *   After you call this operation, the incremental migration job no longer periodically runs. In the meantime, Server Migration Center (SMC) determines whether to perform a full data migration for the last time based on the value of the `SyncData` parameter. If you set the SyncData parameter to `false`, SMC releases intermediate resources without data migration before the migration job is complete. If you set the SyncData parameter to `true`, SMC performs a full data migration and releases intermediate resources before the migration job is complete.
 *
 * @param request CutOverReplicationJobRequest
 * @return CutOverReplicationJobResponse
 */
CutOverReplicationJobResponse Client::cutOverReplicationJob(const CutOverReplicationJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cutOverReplicationJobWithOptions(request, runtime);
}

/**
 * @summary Deletes an activation code.
 *
 * @description You can call this operation to delete an activation code if you no longer need to import the information about migration sources by using the activation code or if the activation code has expired.
 *
 * @param request DeleteAccessTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAccessTokenResponse
 */
DeleteAccessTokenResponse Client::deleteAccessTokenWithOptions(const DeleteAccessTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessTokenId()) {
    query["AccessTokenId"] = request.accessTokenId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAccessToken"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAccessTokenResponse>();
}

/**
 * @summary Deletes an activation code.
 *
 * @description You can call this operation to delete an activation code if you no longer need to import the information about migration sources by using the activation code or if the activation code has expired.
 *
 * @param request DeleteAccessTokenRequest
 * @return DeleteAccessTokenResponse
 */
DeleteAccessTokenResponse Client::deleteAccessToken(const DeleteAccessTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAccessTokenWithOptions(request, runtime);
}

/**
 * @summary Deletes a migration job.
 *
 * @description ## Usage notes
 * *   Deleted migration jobs cannot be restored.
 * *   After a migration job is deleted, associated resources, such as the intermediate instance, are automatically released.
 *
 * @param request DeleteReplicationJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteReplicationJobResponse
 */
DeleteReplicationJobResponse Client::deleteReplicationJobWithOptions(const DeleteReplicationJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteReplicationJob"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteReplicationJobResponse>();
}

/**
 * @summary Deletes a migration job.
 *
 * @description ## Usage notes
 * *   Deleted migration jobs cannot be restored.
 * *   After a migration job is deleted, associated resources, such as the intermediate instance, are automatically released.
 *
 * @param request DeleteReplicationJobRequest
 * @return DeleteReplicationJobResponse
 */
DeleteReplicationJobResponse Client::deleteReplicationJob(const DeleteReplicationJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteReplicationJobWithOptions(request, runtime);
}

/**
 * @summary Deletes a migration source.
 *
 * @description ## Usage notes
 * *   If a migration job is created for the migration source and the migration job is in the Running state, the migration source cannot be deleted.
 * *   If a migration job is created for the migration source but the migration job is not in the Running state, you can set the `Force` parameter to true to delete the migration source.
 *
 * @param request DeleteSourceServerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSourceServerResponse
 */
DeleteSourceServerResponse Client::deleteSourceServerWithOptions(const DeleteSourceServerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasForce()) {
    query["Force"] = request.force();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasSourceId()) {
    query["SourceId"] = request.sourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSourceServer"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSourceServerResponse>();
}

/**
 * @summary Deletes a migration source.
 *
 * @description ## Usage notes
 * *   If a migration job is created for the migration source and the migration job is in the Running state, the migration source cannot be deleted.
 * *   If a migration job is created for the migration source but the migration job is not in the Running state, you can set the `Force` parameter to true to delete the migration source.
 *
 * @param request DeleteSourceServerRequest
 * @return DeleteSourceServerResponse
 */
DeleteSourceServerResponse Client::deleteSourceServer(const DeleteSourceServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSourceServerWithOptions(request, runtime);
}

/**
 * @summary Deletes a workgroup.
 *
 * @description To delete a workgroup, you must delete or dissociate the migration source that is associated with the workgroup. For more information, see [DeleteSourceServer](https://help.aliyun.com/document_detail/2402124.html).
 *
 * @param request DeleteWorkgroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWorkgroupResponse
 */
DeleteWorkgroupResponse Client::deleteWorkgroupWithOptions(const DeleteWorkgroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasWorkgroupId()) {
    query["WorkgroupId"] = request.workgroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteWorkgroup"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteWorkgroupResponse>();
}

/**
 * @summary Deletes a workgroup.
 *
 * @description To delete a workgroup, you must delete or dissociate the migration source that is associated with the workgroup. For more information, see [DeleteSourceServer](https://help.aliyun.com/document_detail/2402124.html).
 *
 * @param request DeleteWorkgroupRequest
 * @return DeleteWorkgroupResponse
 */
DeleteWorkgroupResponse Client::deleteWorkgroup(const DeleteWorkgroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteWorkgroupWithOptions(request, runtime);
}

/**
 * @summary Queries the details of migration jobs.
 *
 * @description ## Usage notes
 * *   You can specify multiple request parameters to be queried. Specified parameters are evaluated by using the AND operator. Only the specified parameters are used as filter conditions.
 * *   Server Migration Center (SMC) allows you to migrate source servers to Docker container images. You can use SMC to migrate containerized applications in a cost-effective way. For more information, see [Terms](https://help.aliyun.com/document_detail/60744.html).
 *
 * @param request DescribeReplicationJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeReplicationJobsResponse
 */
DescribeReplicationJobsResponse Client::describeReplicationJobsWithOptions(const DescribeReplicationJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusinessStatus()) {
    query["BusinessStatus"] = request.businessStatus();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasJobType()) {
    query["JobType"] = request.jobType();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
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

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasSourceId()) {
    query["SourceId"] = request.sourceId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeReplicationJobs"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeReplicationJobsResponse>();
}

/**
 * @summary Queries the details of migration jobs.
 *
 * @description ## Usage notes
 * *   You can specify multiple request parameters to be queried. Specified parameters are evaluated by using the AND operator. Only the specified parameters are used as filter conditions.
 * *   Server Migration Center (SMC) allows you to migrate source servers to Docker container images. You can use SMC to migrate containerized applications in a cost-effective way. For more information, see [Terms](https://help.aliyun.com/document_detail/60744.html).
 *
 * @param request DescribeReplicationJobsRequest
 * @return DescribeReplicationJobsResponse
 */
DescribeReplicationJobsResponse Client::describeReplicationJobs(const DescribeReplicationJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeReplicationJobsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about one or more source servers.
 *
 * @description ## [](#)Usage notes
 * You can specify multiple request parameters to filter instances. Specified parameters have logical AND relations. Only the specified parameters are used as filter conditions.
 *
 * @param request DescribeSourceServersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSourceServersResponse
 */
DescribeSourceServersResponse Client::describeSourceServersWithOptions(const DescribeSourceServersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
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

  if (!!request.hasRelatedJobType()) {
    query["RelatedJobType"] = request.relatedJobType();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasSourceId()) {
    query["SourceId"] = request.sourceId();
  }

  if (!!request.hasState()) {
    query["State"] = request.state();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasWorkgroupId()) {
    query["WorkgroupId"] = request.workgroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSourceServers"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSourceServersResponse>();
}

/**
 * @summary Queries the information about one or more source servers.
 *
 * @description ## [](#)Usage notes
 * You can specify multiple request parameters to filter instances. Specified parameters have logical AND relations. Only the specified parameters are used as filter conditions.
 *
 * @param request DescribeSourceServersRequest
 * @return DescribeSourceServersResponse
 */
DescribeSourceServersResponse Client::describeSourceServers(const DescribeSourceServersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSourceServersWithOptions(request, runtime);
}

/**
 * @summary Queries the information about workgroups. After you create a workgroup, you can query the information about the workgroup, such as the name, description, and alert information.
 *
 * @param request DescribeWorkgroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeWorkgroupsResponse
 */
DescribeWorkgroupsResponse Client::describeWorkgroupsWithOptions(const DescribeWorkgroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.name();
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

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasWorkgroupId()) {
    query["WorkgroupId"] = request.workgroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeWorkgroups"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeWorkgroupsResponse>();
}

/**
 * @summary Queries the information about workgroups. After you create a workgroup, you can query the information about the workgroup, such as the name, description, and alert information.
 *
 * @param request DescribeWorkgroupsRequest
 * @return DescribeWorkgroupsResponse
 */
DescribeWorkgroupsResponse Client::describeWorkgroups(const DescribeWorkgroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeWorkgroupsWithOptions(request, runtime);
}

/**
 * @summary Disables an activation code.
 *
 * @description To prevent an activation code from being leaked, you can call this operation to disable the activation code. Disabled activation codes can no longer be used to import the information about migration sources. However, migration sources whose information has been imported are not affected.
 *
 * @param request DisableAccessTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableAccessTokenResponse
 */
DisableAccessTokenResponse Client::disableAccessTokenWithOptions(const DisableAccessTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessTokenId()) {
    query["AccessTokenId"] = request.accessTokenId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableAccessToken"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableAccessTokenResponse>();
}

/**
 * @summary Disables an activation code.
 *
 * @description To prevent an activation code from being leaked, you can call this operation to disable the activation code. Disabled activation codes can no longer be used to import the information about migration sources. However, migration sources whose information has been imported are not affected.
 *
 * @param request DisableAccessTokenRequest
 * @return DisableAccessTokenResponse
 */
DisableAccessTokenResponse Client::disableAccessToken(const DisableAccessTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableAccessTokenWithOptions(request, runtime);
}

/**
 * @summary Disassociates migration sources from a workgroup. If you do not need to use a workgroup to migrate migration sources, you can disassociate the migration sources from the workgroup.
 *
 * @param request DisassociateSourceServersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisassociateSourceServersResponse
 */
DisassociateSourceServersResponse Client::disassociateSourceServersWithOptions(const DisassociateSourceServersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasSourceId()) {
    query["SourceId"] = request.sourceId();
  }

  if (!!request.hasWorkgroupId()) {
    query["WorkgroupId"] = request.workgroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisassociateSourceServers"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisassociateSourceServersResponse>();
}

/**
 * @summary Disassociates migration sources from a workgroup. If you do not need to use a workgroup to migrate migration sources, you can disassociate the migration sources from the workgroup.
 *
 * @param request DisassociateSourceServersRequest
 * @return DisassociateSourceServersResponse
 */
DisassociateSourceServersResponse Client::disassociateSourceServers(const DisassociateSourceServersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disassociateSourceServersWithOptions(request, runtime);
}

/**
 * @summary Queries activation codes and the usage details of the activation codes.
 *
 * @description You can call this operation to query activation codes and the usage details of the activation codes. An activation code can be in the activated, unactivated, or expired state.
 *
 * @param request ListAccessTokensRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAccessTokensResponse
 */
ListAccessTokensResponse Client::listAccessTokensWithOptions(const ListAccessTokensRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessTokenId()) {
    query["AccessTokenId"] = request.accessTokenId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAccessTokens"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAccessTokensResponse>();
}

/**
 * @summary Queries activation codes and the usage details of the activation codes.
 *
 * @description You can call this operation to query activation codes and the usage details of the activation codes. An activation code can be in the activated, unactivated, or expired state.
 *
 * @param request ListAccessTokensRequest
 * @return ListAccessTokensResponse
 */
ListAccessTokensResponse Client::listAccessTokens(const ListAccessTokensRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAccessTokensWithOptions(request, runtime);
}

/**
 * @summary Queries the tags that are attached to Server Migration Center (SMC) resources. SMC resources include migration sources and migration jobs.
 *
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

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
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
    {"version" , "2019-06-01"},
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
 * @summary Queries the tags that are attached to Server Migration Center (SMC) resources. SMC resources include migration sources and migration jobs.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Modifies the parameters of a migration job.
 *
 * @description ## Usage notes
 * Before you modify the parameters of a migration job, take note of the following information:
 * *   The `Name` and `Description` parameters can be modified during the lifecycle of the migration job.
 * *   The `Frequency` and `MaxNumberOfImageToKeep` parameters can be modified only before the migration job is executed or when the migration job is in the `Waiting` state.
 * *   Other parameters can be modified only before the migration job is executed.
 *
 * @param request ModifyReplicationJobAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyReplicationJobAttributeResponse
 */
ModifyReplicationJobAttributeResponse Client::modifyReplicationJobAttributeWithOptions(const ModifyReplicationJobAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContainerNamespace()) {
    query["ContainerNamespace"] = request.containerNamespace();
  }

  if (!!request.hasContainerRepository()) {
    query["ContainerRepository"] = request.containerRepository();
  }

  if (!!request.hasContainerTag()) {
    query["ContainerTag"] = request.containerTag();
  }

  if (!!request.hasDataDisk()) {
    query["DataDisk"] = request.dataDisk();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasFrequency()) {
    query["Frequency"] = request.frequency();
  }

  if (!!request.hasImageName()) {
    query["ImageName"] = request.imageName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInstanceRamRole()) {
    query["InstanceRamRole"] = request.instanceRamRole();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.instanceType();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasLaunchTemplateId()) {
    query["LaunchTemplateId"] = request.launchTemplateId();
  }

  if (!!request.hasLaunchTemplateVersion()) {
    query["LaunchTemplateVersion"] = request.launchTemplateVersion();
  }

  if (!!request.hasMaxNumberOfImageToKeep()) {
    query["MaxNumberOfImageToKeep"] = request.maxNumberOfImageToKeep();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasNetMode()) {
    query["NetMode"] = request.netMode();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasReplicationParameters()) {
    query["ReplicationParameters"] = request.replicationParameters();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasScheduledStartTime()) {
    query["ScheduledStartTime"] = request.scheduledStartTime();
  }

  if (!!request.hasSystemDiskPart()) {
    query["SystemDiskPart"] = request.systemDiskPart();
  }

  if (!!request.hasSystemDiskSize()) {
    query["SystemDiskSize"] = request.systemDiskSize();
  }

  if (!!request.hasTargetType()) {
    query["TargetType"] = request.targetType();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.vSwitchId();
  }

  if (!!request.hasValidTime()) {
    query["ValidTime"] = request.validTime();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyReplicationJobAttribute"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyReplicationJobAttributeResponse>();
}

/**
 * @summary Modifies the parameters of a migration job.
 *
 * @description ## Usage notes
 * Before you modify the parameters of a migration job, take note of the following information:
 * *   The `Name` and `Description` parameters can be modified during the lifecycle of the migration job.
 * *   The `Frequency` and `MaxNumberOfImageToKeep` parameters can be modified only before the migration job is executed or when the migration job is in the `Waiting` state.
 * *   Other parameters can be modified only before the migration job is executed.
 *
 * @param request ModifyReplicationJobAttributeRequest
 * @return ModifyReplicationJobAttributeResponse
 */
ModifyReplicationJobAttributeResponse Client::modifyReplicationJobAttribute(const ModifyReplicationJobAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyReplicationJobAttributeWithOptions(request, runtime);
}

/**
 * @summary Modifies the name and description of a migration source.
 *
 * @description ## Usage notes
 * You can call this operation regardless of the status of the migration source.
 *
 * @param request ModifySourceServerAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySourceServerAttributeResponse
 */
ModifySourceServerAttributeResponse Client::modifySourceServerAttributeWithOptions(const ModifySourceServerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasSourceId()) {
    query["SourceId"] = request.sourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySourceServerAttribute"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySourceServerAttributeResponse>();
}

/**
 * @summary Modifies the name and description of a migration source.
 *
 * @description ## Usage notes
 * You can call this operation regardless of the status of the migration source.
 *
 * @param request ModifySourceServerAttributeRequest
 * @return ModifySourceServerAttributeResponse
 */
ModifySourceServerAttributeResponse Client::modifySourceServerAttribute(const ModifySourceServerAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySourceServerAttributeWithOptions(request, runtime);
}

/**
 * @summary Modifies the name and description of a workgroup.
 *
 * @param request ModifyWorkgroupAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyWorkgroupAttributeResponse
 */
ModifyWorkgroupAttributeResponse Client::modifyWorkgroupAttributeWithOptions(const ModifyWorkgroupAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasWorkgroupId()) {
    query["WorkgroupId"] = request.workgroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyWorkgroupAttribute"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyWorkgroupAttributeResponse>();
}

/**
 * @summary Modifies the name and description of a workgroup.
 *
 * @param request ModifyWorkgroupAttributeRequest
 * @return ModifyWorkgroupAttributeResponse
 */
ModifyWorkgroupAttributeResponse Client::modifyWorkgroupAttribute(const ModifyWorkgroupAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyWorkgroupAttributeWithOptions(request, runtime);
}

/**
 * @summary Starts a migration job.
 *
 * @description ## Usage notes
 * This operation can only be used to start the migration jobs that are in the Ready, Stopped, or InError state.
 *
 * @param request StartReplicationJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartReplicationJobResponse
 */
StartReplicationJobResponse Client::startReplicationJobWithOptions(const StartReplicationJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartReplicationJob"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartReplicationJobResponse>();
}

/**
 * @summary Starts a migration job.
 *
 * @description ## Usage notes
 * This operation can only be used to start the migration jobs that are in the Ready, Stopped, or InError state.
 *
 * @param request StartReplicationJobRequest
 * @return StartReplicationJobResponse
 */
StartReplicationJobResponse Client::startReplicationJob(const StartReplicationJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startReplicationJobWithOptions(request, runtime);
}

/**
 * @summary Pauses a migration job.
 *
 * @description ## Usage notes
 * You can call this operation to pause only a migration job whose primary status is Running and business status is Syncing.
 *
 * @param request StopReplicationJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopReplicationJobResponse
 */
StopReplicationJobResponse Client::stopReplicationJobWithOptions(const StopReplicationJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopReplicationJob"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopReplicationJobResponse>();
}

/**
 * @summary Pauses a migration job.
 *
 * @description ## Usage notes
 * You can call this operation to pause only a migration job whose primary status is Running and business status is Syncing.
 *
 * @param request StopReplicationJobRequest
 * @return StopReplicationJobResponse
 */
StopReplicationJobResponse Client::stopReplicationJob(const StopReplicationJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopReplicationJobWithOptions(request, runtime);
}

/**
 * @summary Creates tags and adds them to Server Migration Center (SMC) resources. The SMC resources include migration sources and jobs.
 *
 * @description ## Usage notes
 * Up to 20 tags can be added to each SMC resource.
 * Before you add tags to an SMC resource, Alibaba Cloud checks the number of the tags that have been added to the resource. If the maximum number is reached, an error message is returned.
 *
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
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
    {"version" , "2019-06-01"},
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
 * @summary Creates tags and adds them to Server Migration Center (SMC) resources. The SMC resources include migration sources and jobs.
 *
 * @description ## Usage notes
 * Up to 20 tags can be added to each SMC resource.
 * Before you add tags to an SMC resource, Alibaba Cloud checks the number of the tags that have been added to the resource. If the maximum number is reached, an error message is returned.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Removes tags that are added to Server Migration Center (SMC) resources. The SMC resources include migration sources and jobs.
 *
 * @description You can call this operation to remove tags that are added to one or more SMC resources and delete the tags if the tags are no longer used.
 *
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

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
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
    {"version" , "2019-06-01"},
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
 * @summary Removes tags that are added to Server Migration Center (SMC) resources. The SMC resources include migration sources and jobs.
 *
 * @description You can call this operation to remove tags that are added to one or more SMC resources and delete the tags if the tags are no longer used.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Smc20190601