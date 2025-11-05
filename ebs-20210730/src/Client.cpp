#include <darabonba/Core.hpp>
#include <alibabacloud/Ebs20210730.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Ebs20210730::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Ebs20210730
{

AlibabaCloud::Ebs20210730::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("ebs", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Adds a replication pair to a replication pair-consistent group. You can use a replication pair-consistent group to batch manage replication pairs. When you call this operation, you can specify parameters, such as ReplicaGroupId, ReplicaPairId, and ClientToken, in the request.
 *
 * @description ## [](#)Usage notes
 * *   For information about the regions in which the replication pair-consistent group feature is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
 * *   A replication pair and a replication pair-consistent group replicate in the same direction if they have the same primary region (production region), primary zone (production zone), secondary region (disaster recovery region), and secondary zone (disaster recovery zone). A replication pair can be added only to a replication pair-consistent group that replicates in the same direction as the replication pair.
 * *   Before you can add a replication pair to a replication pair-consistent group, make sure that the pair and the group are in the **Created** (`created`) or **Stopped** (`stopped`) state.
 * *   Up to 17 replication pairs can be added to a single replication pair-consistent group.
 * *   After replication pairs are added to a replication pair-consistent group, the recovery point objective (RPO) of the group takes effect on the pairs in place of their original RPOs.
 *
 * @param request AddDiskReplicaPairRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddDiskReplicaPairResponse
 */
AddDiskReplicaPairResponse Client::addDiskReplicaPairWithOptions(const AddDiskReplicaPairRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasReplicaGroupId()) {
    query["ReplicaGroupId"] = request.replicaGroupId();
  }

  if (!!request.hasReplicaPairId()) {
    query["ReplicaPairId"] = request.replicaPairId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddDiskReplicaPair"},
    {"version" , "2021-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddDiskReplicaPairResponse>();
}

/**
 * @summary Adds a replication pair to a replication pair-consistent group. You can use a replication pair-consistent group to batch manage replication pairs. When you call this operation, you can specify parameters, such as ReplicaGroupId, ReplicaPairId, and ClientToken, in the request.
 *
 * @description ## [](#)Usage notes
 * *   For information about the regions in which the replication pair-consistent group feature is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
 * *   A replication pair and a replication pair-consistent group replicate in the same direction if they have the same primary region (production region), primary zone (production zone), secondary region (disaster recovery region), and secondary zone (disaster recovery zone). A replication pair can be added only to a replication pair-consistent group that replicates in the same direction as the replication pair.
 * *   Before you can add a replication pair to a replication pair-consistent group, make sure that the pair and the group are in the **Created** (`created`) or **Stopped** (`stopped`) state.
 * *   Up to 17 replication pairs can be added to a single replication pair-consistent group.
 * *   After replication pairs are added to a replication pair-consistent group, the recovery point objective (RPO) of the group takes effect on the pairs in place of their original RPOs.
 *
 * @param request AddDiskReplicaPairRequest
 * @return AddDiskReplicaPairResponse
 */
AddDiskReplicaPairResponse Client::addDiskReplicaPair(const AddDiskReplicaPairRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addDiskReplicaPairWithOptions(request, runtime);
}

/**
 * @summary Enables CloudLens for EBS.
 *
 * @description ## Usage notes
 * CloudLens for EBS is in invitational preview in the China (Hangzhou), China (Shanghai), China (Zhangjiakou), China (Shenzhen), and China (Hong Kong) regions. To use the feature, [submit a ticket](https://workorder-intl.console.aliyun.com/#/ticket/createIndex).
 *
 * @param request ApplyLensServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApplyLensServiceResponse
 */
ApplyLensServiceResponse Client::applyLensServiceWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "ApplyLensService"},
    {"version" , "2021-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ApplyLensServiceResponse>();
}

/**
 * @summary Enables CloudLens for EBS.
 *
 * @description ## Usage notes
 * CloudLens for EBS is in invitational preview in the China (Hangzhou), China (Shanghai), China (Zhangjiakou), China (Shenzhen), and China (Hong Kong) regions. To use the feature, [submit a ticket](https://workorder-intl.console.aliyun.com/#/ticket/createIndex).
 *
 * @return ApplyLensServiceResponse
 */
ApplyLensServiceResponse Client::applyLensService() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return applyLensServiceWithOptions(runtime);
}

/**
 * @summary Bind disks into a enterprise-level snapshot policy.
 *
 * @param request BindEnterpriseSnapshotPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindEnterpriseSnapshotPolicyResponse
 */
BindEnterpriseSnapshotPolicyResponse Client::bindEnterpriseSnapshotPolicyWithOptions(const BindEnterpriseSnapshotPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDiskTargets()) {
    query["DiskTargets"] = request.diskTargets();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.policyId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BindEnterpriseSnapshotPolicy"},
    {"version" , "2021-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindEnterpriseSnapshotPolicyResponse>();
}

/**
 * @summary Bind disks into a enterprise-level snapshot policy.
 *
 * @param request BindEnterpriseSnapshotPolicyRequest
 * @return BindEnterpriseSnapshotPolicyResponse
 */
BindEnterpriseSnapshotPolicyResponse Client::bindEnterpriseSnapshotPolicy(const BindEnterpriseSnapshotPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindEnterpriseSnapshotPolicyWithOptions(request, runtime);
}

/**
 * @summary Disables CloudLens for EBS.
 *
 * @description ## Usage notes
 * CloudLens for EBS is in invitational preview in the China (Hangzhou), China (Shanghai), China (Zhangjiakou), China (Shenzhen), and China (Hong Kong) regions. To use the feature, [submit a ticket](https://workorder-intl.console.aliyun.com/#/ticket/createIndex).
 *
 * @param request CancelLensServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelLensServiceResponse
 */
CancelLensServiceResponse Client::cancelLensServiceWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "CancelLensService"},
    {"version" , "2021-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelLensServiceResponse>();
}

/**
 * @summary Disables CloudLens for EBS.
 *
 * @description ## Usage notes
 * CloudLens for EBS is in invitational preview in the China (Hangzhou), China (Shanghai), China (Zhangjiakou), China (Shenzhen), and China (Hong Kong) regions. To use the feature, [submit a ticket](https://workorder-intl.console.aliyun.com/#/ticket/createIndex).
 *
 * @return CancelLensServiceResponse
 */
CancelLensServiceResponse Client::cancelLensService() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelLensServiceWithOptions(runtime);
}

/**
 * @summary Changes the resource group to which an Elastic Block Storage (EBS) resource belongs.
 *
 * @param request ChangeResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroupWithOptions(const ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasNewResourceGroupId()) {
    query["NewResourceGroupId"] = request.newResourceGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
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
    {"action" , "ChangeResourceGroup"},
    {"version" , "2021-07-30"},
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
 * @summary Changes the resource group to which an Elastic Block Storage (EBS) resource belongs.
 *
 * @param request ChangeResourceGroupRequest
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroup(const ChangeResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Clears the disaster recovery drills that were initiated from the secondary disk of a replication pair and deletes the auto-created drill disks.
 *
 * @param request ClearPairDrillRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ClearPairDrillResponse
 */
ClearPairDrillResponse Client::clearPairDrillWithOptions(const ClearPairDrillRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDrillId()) {
    query["DrillId"] = request.drillId();
  }

  if (!!request.hasPairId()) {
    query["PairId"] = request.pairId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ClearPairDrill"},
    {"version" , "2021-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ClearPairDrillResponse>();
}

/**
 * @summary Clears the disaster recovery drills that were initiated from the secondary disk of a replication pair and deletes the auto-created drill disks.
 *
 * @param request ClearPairDrillRequest
 * @return ClearPairDrillResponse
 */
ClearPairDrillResponse Client::clearPairDrill(const ClearPairDrillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return clearPairDrillWithOptions(request, runtime);
}

/**
 * @summary Clears the disaster recovery drills that were initiated from the secondary disks of a replication pair-consistent group and deletes the auto-created drill disks.
 *
 * @param request ClearReplicaGroupDrillRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ClearReplicaGroupDrillResponse
 */
ClearReplicaGroupDrillResponse Client::clearReplicaGroupDrillWithOptions(const ClearReplicaGroupDrillRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDrillId()) {
    query["DrillId"] = request.drillId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ClearReplicaGroupDrill"},
    {"version" , "2021-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ClearReplicaGroupDrillResponse>();
}

/**
 * @summary Clears the disaster recovery drills that were initiated from the secondary disks of a replication pair-consistent group and deletes the auto-created drill disks.
 *
 * @param request ClearReplicaGroupDrillRequest
 * @return ClearReplicaGroupDrillResponse
 */
ClearReplicaGroupDrillResponse Client::clearReplicaGroupDrill(const ClearReplicaGroupDrillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return clearReplicaGroupDrillWithOptions(request, runtime);
}

/**
 * @summary Creates a dedicated block storage cluster. When you call this operation, you can specify parameters, such as Azone, Capacity, Type, and PeriodUnit, in the request.
 *
 * @description ## [](#)Usage notes
 * *   Dedicated block storage clusters are physically isolated from public block storage clusters. The owner of each dedicated block storage cluster has exclusive access to all resources in the cluster.
 * *   Disks created in a dedicated block storage cluster can be attached only to Elastic Compute Service (ECS) instances that reside in the same zone as the cluster. Before you create a dedicated block storage cluster, decide the regions and zones in which to deploy your cloud resources.
 * *   Dedicated block storage clusters are classified into basic and performance types. When you create a dedicated block storage cluster, select a cluster type based on your business requirements.
 * *   You are charged for creating dedicated block storage clusters.
 *
 * @param request CreateDedicatedBlockStorageClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDedicatedBlockStorageClusterResponse
 */
CreateDedicatedBlockStorageClusterResponse Client::createDedicatedBlockStorageClusterWithOptions(const CreateDedicatedBlockStorageClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAzone()) {
    query["Azone"] = request.azone();
  }

  if (!!request.hasCapacity()) {
    query["Capacity"] = request.capacity();
  }

  if (!!request.hasDbscId()) {
    query["DbscId"] = request.dbscId();
  }

  if (!!request.hasDbscName()) {
    query["DbscName"] = request.dbscName();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.period();
  }

  if (!!request.hasPeriodUnit()) {
    query["PeriodUnit"] = request.periodUnit();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDedicatedBlockStorageCluster"},
    {"version" , "2021-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDedicatedBlockStorageClusterResponse>();
}

/**
 * @summary Creates a dedicated block storage cluster. When you call this operation, you can specify parameters, such as Azone, Capacity, Type, and PeriodUnit, in the request.
 *
 * @description ## [](#)Usage notes
 * *   Dedicated block storage clusters are physically isolated from public block storage clusters. The owner of each dedicated block storage cluster has exclusive access to all resources in the cluster.
 * *   Disks created in a dedicated block storage cluster can be attached only to Elastic Compute Service (ECS) instances that reside in the same zone as the cluster. Before you create a dedicated block storage cluster, decide the regions and zones in which to deploy your cloud resources.
 * *   Dedicated block storage clusters are classified into basic and performance types. When you create a dedicated block storage cluster, select a cluster type based on your business requirements.
 * *   You are charged for creating dedicated block storage clusters.
 *
 * @param request CreateDedicatedBlockStorageClusterRequest
 * @return CreateDedicatedBlockStorageClusterResponse
 */
CreateDedicatedBlockStorageClusterResponse Client::createDedicatedBlockStorageCluster(const CreateDedicatedBlockStorageClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDedicatedBlockStorageClusterWithOptions(request, runtime);
}

/**
 * @summary Creates a replication pair-consistent group.
 *
 * @description ## [](#)Usage notes
 * The replication pair-consistent group feature allows you to batch manage multiple disks in disaster recovery scenarios. You can restore the data of all disks in the same replication pair-consistent group to the same point in time to allow for disaster recovery of instances.
 * Take note of the following items:
 * *   For information about the regions in which the replication pair-consistent group feature is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
 * *   Replication pair-consistent groups can be used to implement disaster recovery across zones within the same region and disaster recovery across regions.
 * *   A replication pair and a replication pair-consistent group can replicate in the same direction if they have the same primary region (production region), primary zone (production zone), secondary region (disaster recovery region), and secondary zone (disaster recovery zone). A replication pair can be added to only a replication pair-consistent group that replicates in the same direction as the replication pair.
 * *   After replication pairs are added to a replication pair-consistent group, the recovery point objective (RPO) of the group takes effect on the pairs instead of their original RPOs.
 *
 * @param request CreateDiskReplicaGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDiskReplicaGroupResponse
 */
CreateDiskReplicaGroupResponse Client::createDiskReplicaGroupWithOptions(const CreateDiskReplicaGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBandwidth()) {
    query["Bandwidth"] = request.bandwidth();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasDestinationRegionId()) {
    query["DestinationRegionId"] = request.destinationRegionId();
  }

  if (!!request.hasDestinationZoneId()) {
    query["DestinationZoneId"] = request.destinationZoneId();
  }

  if (!!request.hasEnableRtc()) {
    query["EnableRtc"] = request.enableRtc();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasRPO()) {
    query["RPO"] = request.RPO();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSourceZoneId()) {
    query["SourceZoneId"] = request.sourceZoneId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDiskReplicaGroup"},
    {"version" , "2021-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDiskReplicaGroupResponse>();
}

/**
 * @summary Creates a replication pair-consistent group.
 *
 * @description ## [](#)Usage notes
 * The replication pair-consistent group feature allows you to batch manage multiple disks in disaster recovery scenarios. You can restore the data of all disks in the same replication pair-consistent group to the same point in time to allow for disaster recovery of instances.
 * Take note of the following items:
 * *   For information about the regions in which the replication pair-consistent group feature is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
 * *   Replication pair-consistent groups can be used to implement disaster recovery across zones within the same region and disaster recovery across regions.
 * *   A replication pair and a replication pair-consistent group can replicate in the same direction if they have the same primary region (production region), primary zone (production zone), secondary region (disaster recovery region), and secondary zone (disaster recovery zone). A replication pair can be added to only a replication pair-consistent group that replicates in the same direction as the replication pair.
 * *   After replication pairs are added to a replication pair-consistent group, the recovery point objective (RPO) of the group takes effect on the pairs instead of their original RPOs.
 *
 * @param request CreateDiskReplicaGroupRequest
 * @return CreateDiskReplicaGroupResponse
 */
CreateDiskReplicaGroupResponse Client::createDiskReplicaGroup(const CreateDiskReplicaGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDiskReplicaGroupWithOptions(request, runtime);
}

/**
 * @summary Creates a replication pair to asynchronously replicate data between disks.
 *
 * @description ## [](#)Usage notes
 * Async replication is a feature that protects data across regions by using the data replication capability of Elastic Block Storage (EBS). This feature can be used to asynchronously replicate data from a disk in one region to a disk in another region for disaster recovery purposes. You can use this feature to implement disaster recovery for critical business to protect data in your databases and improve business continuity. You are charged on a subscription basis for the bandwidth that is used by the async replication feature.
 * Currently, the async replication feature can asynchronously replicate data only between enhanced SSDs (ESSDs). The functionality of disks in replication pairs is limited.
 * Take note of the following items:
 * *   Make sure that the source disk (primary disk) from which to replicate data and the destination disk (secondary disk) to which to replicate data are created. You can call the [CreateDisk](https://help.aliyun.com/document_detail/25513.html) operation to create disks.
 * *   The secondary disk cannot reside in the same region as the primary disk. For information about the regions that support async replication, see [Overview](https://help.aliyun.com/document_detail/314563.html).
 * *   After you call this operation to create a replication pair for the primary disk and the secondary disk, you must call the [StartDiskReplicaPair](https://help.aliyun.com/document_detail/354205.html) operation to enable async replication to replicate data from the primary disk to the secondary disk cross regions on a periodic basis.
 *
 * @param request CreateDiskReplicaPairRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDiskReplicaPairResponse
 */
CreateDiskReplicaPairResponse Client::createDiskReplicaPairWithOptions(const CreateDiskReplicaPairRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBandwidth()) {
    query["Bandwidth"] = request.bandwidth();
  }

  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.chargeType();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasDestinationDiskId()) {
    query["DestinationDiskId"] = request.destinationDiskId();
  }

  if (!!request.hasDestinationRegionId()) {
    query["DestinationRegionId"] = request.destinationRegionId();
  }

  if (!!request.hasDestinationZoneId()) {
    query["DestinationZoneId"] = request.destinationZoneId();
  }

  if (!!request.hasDiskId()) {
    query["DiskId"] = request.diskId();
  }

  if (!!request.hasEnableRtc()) {
    query["EnableRtc"] = request.enableRtc();
  }

  if (!!request.hasPairName()) {
    query["PairName"] = request.pairName();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.period();
  }

  if (!!request.hasPeriodUnit()) {
    query["PeriodUnit"] = request.periodUnit();
  }

  if (!!request.hasRPO()) {
    query["RPO"] = request.RPO();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSourceZoneId()) {
    query["SourceZoneId"] = request.sourceZoneId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDiskReplicaPair"},
    {"version" , "2021-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDiskReplicaPairResponse>();
}

/**
 * @summary Creates a replication pair to asynchronously replicate data between disks.
 *
 * @description ## [](#)Usage notes
 * Async replication is a feature that protects data across regions by using the data replication capability of Elastic Block Storage (EBS). This feature can be used to asynchronously replicate data from a disk in one region to a disk in another region for disaster recovery purposes. You can use this feature to implement disaster recovery for critical business to protect data in your databases and improve business continuity. You are charged on a subscription basis for the bandwidth that is used by the async replication feature.
 * Currently, the async replication feature can asynchronously replicate data only between enhanced SSDs (ESSDs). The functionality of disks in replication pairs is limited.
 * Take note of the following items:
 * *   Make sure that the source disk (primary disk) from which to replicate data and the destination disk (secondary disk) to which to replicate data are created. You can call the [CreateDisk](https://help.aliyun.com/document_detail/25513.html) operation to create disks.
 * *   The secondary disk cannot reside in the same region as the primary disk. For information about the regions that support async replication, see [Overview](https://help.aliyun.com/document_detail/314563.html).
 * *   After you call this operation to create a replication pair for the primary disk and the secondary disk, you must call the [StartDiskReplicaPair](https://help.aliyun.com/document_detail/354205.html) operation to enable async replication to replicate data from the primary disk to the secondary disk cross regions on a periodic basis.
 *
 * @param request CreateDiskReplicaPairRequest
 * @return CreateDiskReplicaPairResponse
 */
CreateDiskReplicaPairResponse Client::createDiskReplicaPair(const CreateDiskReplicaPairRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDiskReplicaPairWithOptions(request, runtime);
}

/**
 * @summary Create an enterprise-level snapshot policy
 *
 * @param tmpReq CreateEnterpriseSnapshotPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEnterpriseSnapshotPolicyResponse
 */
CreateEnterpriseSnapshotPolicyResponse Client::createEnterpriseSnapshotPolicyWithOptions(const CreateEnterpriseSnapshotPolicyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateEnterpriseSnapshotPolicyShrinkRequest request = CreateEnterpriseSnapshotPolicyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCrossRegionCopyInfo()) {
    request.setCrossRegionCopyInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.crossRegionCopyInfo(), "CrossRegionCopyInfo", "json"));
  }

  if (!!tmpReq.hasRetainRule()) {
    request.setRetainRuleShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.retainRule(), "RetainRule", "json"));
  }

  if (!!tmpReq.hasSchedule()) {
    request.setScheduleShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.schedule(), "Schedule", "json"));
  }

  if (!!tmpReq.hasSpecialRetainRules()) {
    request.setSpecialRetainRulesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.specialRetainRules(), "SpecialRetainRules", "json"));
  }

  if (!!tmpReq.hasStorageRule()) {
    request.setStorageRuleShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.storageRule(), "StorageRule", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasCrossRegionCopyInfoShrink()) {
    query["CrossRegionCopyInfo"] = request.crossRegionCopyInfoShrink();
  }

  if (!!request.hasDesc()) {
    query["Desc"] = request.desc();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasRetainRuleShrink()) {
    query["RetainRule"] = request.retainRuleShrink();
  }

  if (!!request.hasScheduleShrink()) {
    query["Schedule"] = request.scheduleShrink();
  }

  if (!!request.hasSpecialRetainRulesShrink()) {
    query["SpecialRetainRules"] = request.specialRetainRulesShrink();
  }

  if (!!request.hasState()) {
    query["State"] = request.state();
  }

  if (!!request.hasStorageRuleShrink()) {
    query["StorageRule"] = request.storageRuleShrink();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasTargetType()) {
    query["TargetType"] = request.targetType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateEnterpriseSnapshotPolicy"},
    {"version" , "2021-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateEnterpriseSnapshotPolicyResponse>();
}

/**
 * @summary Create an enterprise-level snapshot policy
 *
 * @param request CreateEnterpriseSnapshotPolicyRequest
 * @return CreateEnterpriseSnapshotPolicyResponse
 */
CreateEnterpriseSnapshotPolicyResponse Client::createEnterpriseSnapshotPolicy(const CreateEnterpriseSnapshotPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createEnterpriseSnapshotPolicyWithOptions(request, runtime);
}

/**
 * @summary Deletes a replication pair-consistent group.
 *
 * @description ## [](#)Usage notes
 * *   For information about the regions in which the replication pair-consistent group feature is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
 * *   Before you can delete a replication pair-consistent group, make sure that no replication pairs exist in the group.
 * *   The replication pair-consistent group that you want to delete must be in the **Created** (`created`), **Creation Failed** (`create_failed`), **Stopped** (`stopped`), **Failovered** (`failovered`), **Deleting** (`deleting`), **Deletion Failed** (`delete_failed`), or **Invalid** (`invalid`) state.
 *
 * @param request DeleteDiskReplicaGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDiskReplicaGroupResponse
 */
DeleteDiskReplicaGroupResponse Client::deleteDiskReplicaGroupWithOptions(const DeleteDiskReplicaGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasReplicaGroupId()) {
    query["ReplicaGroupId"] = request.replicaGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDiskReplicaGroup"},
    {"version" , "2021-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDiskReplicaGroupResponse>();
}

/**
 * @summary Deletes a replication pair-consistent group.
 *
 * @description ## [](#)Usage notes
 * *   For information about the regions in which the replication pair-consistent group feature is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
 * *   Before you can delete a replication pair-consistent group, make sure that no replication pairs exist in the group.
 * *   The replication pair-consistent group that you want to delete must be in the **Created** (`created`), **Creation Failed** (`create_failed`), **Stopped** (`stopped`), **Failovered** (`failovered`), **Deleting** (`deleting`), **Deletion Failed** (`delete_failed`), or **Invalid** (`invalid`) state.
 *
 * @param request DeleteDiskReplicaGroupRequest
 * @return DeleteDiskReplicaGroupResponse
 */
DeleteDiskReplicaGroupResponse Client::deleteDiskReplicaGroup(const DeleteDiskReplicaGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDiskReplicaGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes replication pairs.
 *
 * @description ## [](#)Usage notes
 * *   For information about the regions in which async replication is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
 * *   Only replication pairs that are in the **Stopped** (`stopped`), **Invalid** (`invalid`), or **Failovered** (`failovered`) state can be deleted. This operation deletes only replication pairs. The primary and secondary disks in the deleted replication pairs are retained.
 * *   To delete a replication pair, you must call this operation in the region where the primary disk is located. After the replication pair is deleted, the functionality limits are lifted from the primary and secondary disks. For example, you can attach the secondary disk, resize the disk, or read data from or write data to the disk.
 *
 * @param request DeleteDiskReplicaPairRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDiskReplicaPairResponse
 */
DeleteDiskReplicaPairResponse Client::deleteDiskReplicaPairWithOptions(const DeleteDiskReplicaPairRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasReplicaPairId()) {
    query["ReplicaPairId"] = request.replicaPairId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDiskReplicaPair"},
    {"version" , "2021-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDiskReplicaPairResponse>();
}

/**
 * @summary Deletes replication pairs.
 *
 * @description ## [](#)Usage notes
 * *   For information about the regions in which async replication is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
 * *   Only replication pairs that are in the **Stopped** (`stopped`), **Invalid** (`invalid`), or **Failovered** (`failovered`) state can be deleted. This operation deletes only replication pairs. The primary and secondary disks in the deleted replication pairs are retained.
 * *   To delete a replication pair, you must call this operation in the region where the primary disk is located. After the replication pair is deleted, the functionality limits are lifted from the primary and secondary disks. For example, you can attach the secondary disk, resize the disk, or read data from or write data to the disk.
 *
 * @param request DeleteDiskReplicaPairRequest
 * @return DeleteDiskReplicaPairResponse
 */
DeleteDiskReplicaPairResponse Client::deleteDiskReplicaPair(const DeleteDiskReplicaPairRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDiskReplicaPairWithOptions(request, runtime);
}

/**
 * @summary Delete a enterprise-level snapshot policy.
 *
 * @param request DeleteEnterpriseSnapshotPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEnterpriseSnapshotPolicyResponse
 */
DeleteEnterpriseSnapshotPolicyResponse Client::deleteEnterpriseSnapshotPolicyWithOptions(const DeleteEnterpriseSnapshotPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.policyId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteEnterpriseSnapshotPolicy"},
    {"version" , "2021-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteEnterpriseSnapshotPolicyResponse>();
}

/**
 * @summary Delete a enterprise-level snapshot policy.
 *
 * @param request DeleteEnterpriseSnapshotPolicyRequest
 * @return DeleteEnterpriseSnapshotPolicyResponse
 */
DeleteEnterpriseSnapshotPolicyResponse Client::deleteEnterpriseSnapshotPolicy(const DeleteEnterpriseSnapshotPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEnterpriseSnapshotPolicyWithOptions(request, runtime);
}

/**
 * @summary Queries the details of one or more disks in a dedicated block storage cluster.
 *
 * @description *   You can use one of the following methods to check the responses:
 *     *   Method 1: Use `NextToken` to configure the query token. Set the value to the `NextToken` value that is returned in the last call to the DescribeDisks operation. Then, use `MaxResults` to specify the maximum number of entries to return on each page.
 *     *   Method 2: Use `PageSize` to specify the number of entries to return on each page and then use `PageNumber` to specify the number of the page to return.
 *         You can use only one of the preceding methods. If a large number of entries are to be returned, we recommend that you use method 1. When `NextToken` is specified, `PageSize` and `PageNumber` do not take effect and `TotalCount` in the response is invalid.
 * *   A disk that has the multi-attach feature enabled can be attached to multiple instances. You can query the attachment information of the disk based on the `Attachment` values in the response.
 * When you call an API operation by using Alibaba Cloud CLI, you must specify request parameter values of different data types in the required formats. For more information, see [Parameter format overview](https://help.aliyun.com/document_detail/110340.html).
 *
 * @param request DescribeDedicatedBlockStorageClusterDisksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDedicatedBlockStorageClusterDisksResponse
 */
DescribeDedicatedBlockStorageClusterDisksResponse Client::describeDedicatedBlockStorageClusterDisksWithOptions(const DescribeDedicatedBlockStorageClusterDisksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbscId()) {
    query["DbscId"] = request.dbscId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDedicatedBlockStorageClusterDisks"},
    {"version" , "2021-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDedicatedBlockStorageClusterDisksResponse>();
}

/**
 * @summary Queries the details of one or more disks in a dedicated block storage cluster.
 *
 * @description *   You can use one of the following methods to check the responses:
 *     *   Method 1: Use `NextToken` to configure the query token. Set the value to the `NextToken` value that is returned in the last call to the DescribeDisks operation. Then, use `MaxResults` to specify the maximum number of entries to return on each page.
 *     *   Method 2: Use `PageSize` to specify the number of entries to return on each page and then use `PageNumber` to specify the number of the page to return.
 *         You can use only one of the preceding methods. If a large number of entries are to be returned, we recommend that you use method 1. When `NextToken` is specified, `PageSize` and `PageNumber` do not take effect and `TotalCount` in the response is invalid.
 * *   A disk that has the multi-attach feature enabled can be attached to multiple instances. You can query the attachment information of the disk based on the `Attachment` values in the response.
 * When you call an API operation by using Alibaba Cloud CLI, you must specify request parameter values of different data types in the required formats. For more information, see [Parameter format overview](https://help.aliyun.com/document_detail/110340.html).
 *
 * @param request DescribeDedicatedBlockStorageClusterDisksRequest
 * @return DescribeDedicatedBlockStorageClusterDisksResponse
 */
DescribeDedicatedBlockStorageClusterDisksResponse Client::describeDedicatedBlockStorageClusterDisks(const DescribeDedicatedBlockStorageClusterDisksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDedicatedBlockStorageClusterDisksWithOptions(request, runtime);
}

/**
 * @summary Queries the dedicated block storage clusters that are created.
 *
 * @description ## [](#)Usage notes
 * >  The Dedicated Block Storage Cluster feature is available only in the China (Heyuan), Indonesia (Jakarta), and China (Shenzhen) regions.
 * *   You can specify multiple request parameters to be queried. Specified parameters are evaluated by using the AND operator. Only the specified parameters are included in the filter conditions.
 * *   We recommend that you use NextToken and MaxResults to perform paged queries. We recommend that you use MaxResults to specify the maximum number of entries to return in each request. The return value of NextToken is a pagination token, which can be used in the next request to retrieve a new page of results. When you call the DescribeDedicatedBlockStorageClusters operation to retrieve a new page of results, set NextToken to the NextToken value that is returned in the previous call and specify MaxResults to limit the number of entries returned.
 *
 * @param request DescribeDedicatedBlockStorageClustersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDedicatedBlockStorageClustersResponse
 */
DescribeDedicatedBlockStorageClustersResponse Client::describeDedicatedBlockStorageClustersWithOptions(const DescribeDedicatedBlockStorageClustersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDedicatedBlockStorageClusterId()) {
    query["DedicatedBlockStorageClusterId"] = request.dedicatedBlockStorageClusterId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
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

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  json body = {};
  if (!!request.hasAzoneId()) {
    body["AzoneId"] = request.azoneId();
  }

  if (!!request.hasCategory()) {
    body["Category"] = request.category();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DescribeDedicatedBlockStorageClusters"},
    {"version" , "2021-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDedicatedBlockStorageClustersResponse>();
}

/**
 * @summary Queries the dedicated block storage clusters that are created.
 *
 * @description ## [](#)Usage notes
 * >  The Dedicated Block Storage Cluster feature is available only in the China (Heyuan), Indonesia (Jakarta), and China (Shenzhen) regions.
 * *   You can specify multiple request parameters to be queried. Specified parameters are evaluated by using the AND operator. Only the specified parameters are included in the filter conditions.
 * *   We recommend that you use NextToken and MaxResults to perform paged queries. We recommend that you use MaxResults to specify the maximum number of entries to return in each request. The return value of NextToken is a pagination token, which can be used in the next request to retrieve a new page of results. When you call the DescribeDedicatedBlockStorageClusters operation to retrieve a new page of results, set NextToken to the NextToken value that is returned in the previous call and specify MaxResults to limit the number of entries returned.
 *
 * @param request DescribeDedicatedBlockStorageClustersRequest
 * @return DescribeDedicatedBlockStorageClustersResponse
 */
DescribeDedicatedBlockStorageClustersResponse Client::describeDedicatedBlockStorageClusters(const DescribeDedicatedBlockStorageClustersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDedicatedBlockStorageClustersWithOptions(request, runtime);
}

/**
 * @summary Queries the risk events of a disk.
 *
 * @description ## Usage notes
 * CloudLens for EBS is in invitational preview in the China (Hangzhou), China (Shanghai), China (Zhangjiakou), China (Shenzhen), and China (Hong Kong) regions. To use the feature, [submit a ticket](https://workorder-intl.console.aliyun.com/#/ticket/createIndex).
 *
 * @param request DescribeDiskEventsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDiskEventsResponse
 */
DescribeDiskEventsResponse Client::describeDiskEventsWithOptions(const DescribeDiskEventsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDiskCategory()) {
    query["DiskCategory"] = request.diskCategory();
  }

  if (!!request.hasDiskId()) {
    query["DiskId"] = request.diskId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDiskEvents"},
    {"version" , "2021-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDiskEventsResponse>();
}

/**
 * @summary Queries the risk events of a disk.
 *
 * @description ## Usage notes
 * CloudLens for EBS is in invitational preview in the China (Hangzhou), China (Shanghai), China (Zhangjiakou), China (Shenzhen), and China (Hong Kong) regions. To use the feature, [submit a ticket](https://workorder-intl.console.aliyun.com/#/ticket/createIndex).
 *
 * @param request DescribeDiskEventsRequest
 * @return DescribeDiskEventsResponse
 */
DescribeDiskEventsResponse Client::describeDiskEvents(const DescribeDiskEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDiskEventsWithOptions(request, runtime);
}

/**
 * @summary Queries the near real-time monitoring data of a disk.
 *
 * @description ## Usage notes
 * *   CloudLens for EBS is in invitational preview in the China (Hangzhou), China (Shanghai), China (Zhangjiakou), China (Shenzhen), and China (Hong Kong) regions. To use the feature, [submit a ticket](https://workorder-intl.console.aliyun.com/#/ticket/createIndex).
 * *   Up to 400 monitoring data entries can be returned at a time. An error is returned if the value calculated based on the following formula is greater than 400: `(EndTime - StartTime)/Period`.
 * *   You can query the monitoring data collected in the last three days. An error is returned if the time specified by `StartTime` is more than three days prior to the current time.
 *
 * @param request DescribeDiskMonitorDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDiskMonitorDataResponse
 */
DescribeDiskMonitorDataResponse Client::describeDiskMonitorDataWithOptions(const DescribeDiskMonitorDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDiskId()) {
    query["DiskId"] = request.diskId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.period();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDiskMonitorData"},
    {"version" , "2021-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDiskMonitorDataResponse>();
}

/**
 * @summary Queries the near real-time monitoring data of a disk.
 *
 * @description ## Usage notes
 * *   CloudLens for EBS is in invitational preview in the China (Hangzhou), China (Shanghai), China (Zhangjiakou), China (Shenzhen), and China (Hong Kong) regions. To use the feature, [submit a ticket](https://workorder-intl.console.aliyun.com/#/ticket/createIndex).
 * *   Up to 400 monitoring data entries can be returned at a time. An error is returned if the value calculated based on the following formula is greater than 400: `(EndTime - StartTime)/Period`.
 * *   You can query the monitoring data collected in the last three days. An error is returned if the time specified by `StartTime` is more than three days prior to the current time.
 *
 * @param request DescribeDiskMonitorDataRequest
 * @return DescribeDiskMonitorDataResponse
 */
DescribeDiskMonitorDataResponse Client::describeDiskMonitorData(const DescribeDiskMonitorDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDiskMonitorDataWithOptions(request, runtime);
}

/**
 * @summary Queries the near real-time monitoring data of disks. You can query only the burst performance data of ESSD AutoPL disks. The data is aggregated by hour.
 *
 * @description ## Usage notes
 * CloudLens for EBS is in invitational preview in the China (Hangzhou), China (Shanghai), China (Zhangjiakou), China (Shenzhen), and China (Hong Kong) regions. To use the feature, [submit a ticket](https://workorder-intl.console.aliyun.com/#/ticket/createIndex).
 *
 * @param request DescribeDiskMonitorDataListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDiskMonitorDataListResponse
 */
DescribeDiskMonitorDataListResponse Client::describeDiskMonitorDataListWithOptions(const DescribeDiskMonitorDataListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDiskIds()) {
    query["DiskIds"] = request.diskIds();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDiskMonitorDataList"},
    {"version" , "2021-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDiskMonitorDataListResponse>();
}

/**
 * @summary Queries the near real-time monitoring data of disks. You can query only the burst performance data of ESSD AutoPL disks. The data is aggregated by hour.
 *
 * @description ## Usage notes
 * CloudLens for EBS is in invitational preview in the China (Hangzhou), China (Shanghai), China (Zhangjiakou), China (Shenzhen), and China (Hong Kong) regions. To use the feature, [submit a ticket](https://workorder-intl.console.aliyun.com/#/ticket/createIndex).
 *
 * @param request DescribeDiskMonitorDataListRequest
 * @return DescribeDiskMonitorDataListResponse
 */
DescribeDiskMonitorDataListResponse Client::describeDiskMonitorDataList(const DescribeDiskMonitorDataListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDiskMonitorDataListWithOptions(request, runtime);
}

/**
 * @summary Queries the details of replication pair-consistent groups in a specific region.
 *
 * @description ## [](#)Usage notes
 * To perform a paged query, specify the MaxResults and NextToken parameters.
 * During a paged query, when you call the DescribeDiskReplicaGroups operation to retrieve the first page of results, set `MaxResults` to specify the maximum number of entries to return in the call. The return value of `NextToken` is a pagination token, which can be used in the next call to retrieve a new page of results. When you call the DescribeDiskReplicaGroups operation to retrieve a new page of results, set NextToken to the NextToken value returned in the previous call and set MaxResults to specify the maximum number of entries to return in this call.
 *
 * @param request DescribeDiskReplicaGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDiskReplicaGroupsResponse
 */
DescribeDiskReplicaGroupsResponse Client::describeDiskReplicaGroupsWithOptions(const DescribeDiskReplicaGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupIds()) {
    query["GroupIds"] = request.groupIds();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
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

  if (!!request.hasSite()) {
    query["Site"] = request.site();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDiskReplicaGroups"},
    {"version" , "2021-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDiskReplicaGroupsResponse>();
}

/**
 * @summary Queries the details of replication pair-consistent groups in a specific region.
 *
 * @description ## [](#)Usage notes
 * To perform a paged query, specify the MaxResults and NextToken parameters.
 * During a paged query, when you call the DescribeDiskReplicaGroups operation to retrieve the first page of results, set `MaxResults` to specify the maximum number of entries to return in the call. The return value of `NextToken` is a pagination token, which can be used in the next call to retrieve a new page of results. When you call the DescribeDiskReplicaGroups operation to retrieve a new page of results, set NextToken to the NextToken value returned in the previous call and set MaxResults to specify the maximum number of entries to return in this call.
 *
 * @param request DescribeDiskReplicaGroupsRequest
 * @return DescribeDiskReplicaGroupsResponse
 */
DescribeDiskReplicaGroupsResponse Client::describeDiskReplicaGroups(const DescribeDiskReplicaGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDiskReplicaGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries the replication progress of a replication pair.
 *
 * @param request DescribeDiskReplicaPairProgressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDiskReplicaPairProgressResponse
 */
DescribeDiskReplicaPairProgressResponse Client::describeDiskReplicaPairProgressWithOptions(const DescribeDiskReplicaPairProgressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasReplicaPairId()) {
    query["ReplicaPairId"] = request.replicaPairId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDiskReplicaPairProgress"},
    {"version" , "2021-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDiskReplicaPairProgressResponse>();
}

/**
 * @summary Queries the replication progress of a replication pair.
 *
 * @param request DescribeDiskReplicaPairProgressRequest
 * @return DescribeDiskReplicaPairProgressResponse
 */
DescribeDiskReplicaPairProgressResponse Client::describeDiskReplicaPairProgress(const DescribeDiskReplicaPairProgressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDiskReplicaPairProgressWithOptions(request, runtime);
}

/**
 * @summary Queries information about replication pairs in a specific region.
 *
 * @description ## [](#)Usage notes
 * *   For information about the regions in which async replication is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
 * *   When you call this operation for a specific region, if the primary disk (source disk) or secondary disk (destination disk) of a replication pair resides in the region, information about the replication pair is displayed in the response.
 * *   If you want to perform a paged query, configure the `NextToken` and `MaxResults` parameters. During a paged query, when you call the DescribeDiskReplicaPairs operation to retrieve the first page of results, set `MaxResults` to limit the maximum number of entries to return in the call. The return value of NextToken is a pagination token, which can be used in the next call to retrieve a new page of results. When you call the DescribeDiskReplicaPairs operation to retrieve a new page of results, set NextToken to the NextToken value returned in the previous call and set MaxResults to specify the maximum number of entries to return in this call.
 *
 * @param request DescribeDiskReplicaPairsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDiskReplicaPairsResponse
 */
DescribeDiskReplicaPairsResponse Client::describeDiskReplicaPairsWithOptions(const DescribeDiskReplicaPairsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPairIds()) {
    query["PairIds"] = request.pairIds();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasReplicaGroupId()) {
    query["ReplicaGroupId"] = request.replicaGroupId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSite()) {
    query["Site"] = request.site();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDiskReplicaPairs"},
    {"version" , "2021-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDiskReplicaPairsResponse>();
}

/**
 * @summary Queries information about replication pairs in a specific region.
 *
 * @description ## [](#)Usage notes
 * *   For information about the regions in which async replication is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
 * *   When you call this operation for a specific region, if the primary disk (source disk) or secondary disk (destination disk) of a replication pair resides in the region, information about the replication pair is displayed in the response.
 * *   If you want to perform a paged query, configure the `NextToken` and `MaxResults` parameters. During a paged query, when you call the DescribeDiskReplicaPairs operation to retrieve the first page of results, set `MaxResults` to limit the maximum number of entries to return in the call. The return value of NextToken is a pagination token, which can be used in the next call to retrieve a new page of results. When you call the DescribeDiskReplicaPairs operation to retrieve a new page of results, set NextToken to the NextToken value returned in the previous call and set MaxResults to specify the maximum number of entries to return in this call.
 *
 * @param request DescribeDiskReplicaPairsRequest
 * @return DescribeDiskReplicaPairsResponse
 */
DescribeDiskReplicaPairsResponse Client::describeDiskReplicaPairs(const DescribeDiskReplicaPairsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDiskReplicaPairsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about enterprise-level snapshot policies. When you call this operation, you can specify parameters, such as PolicyIds, ResourceGroupId, and Tag, in the request.
 *
 * @param request DescribeEnterpriseSnapshotPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEnterpriseSnapshotPolicyResponse
 */
DescribeEnterpriseSnapshotPolicyResponse Client::describeEnterpriseSnapshotPolicyWithOptions(const DescribeEnterpriseSnapshotPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDiskIds()) {
    query["DiskIds"] = request.diskIds();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPolicyIds()) {
    query["PolicyIds"] = request.policyIds();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEnterpriseSnapshotPolicy"},
    {"version" , "2021-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEnterpriseSnapshotPolicyResponse>();
}

/**
 * @summary Queries the information about enterprise-level snapshot policies. When you call this operation, you can specify parameters, such as PolicyIds, ResourceGroupId, and Tag, in the request.
 *
 * @param request DescribeEnterpriseSnapshotPolicyRequest
 * @return DescribeEnterpriseSnapshotPolicyResponse
 */
DescribeEnterpriseSnapshotPolicyResponse Client::describeEnterpriseSnapshotPolicy(const DescribeEnterpriseSnapshotPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEnterpriseSnapshotPolicyWithOptions(request, runtime);
}

/**
 * @summary Queries the risk events of a disk.
 *
 * @param request DescribeEventsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEventsResponse
 */
DescribeEventsResponse Client::describeEventsWithOptions(const DescribeEventsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasEventLevel()) {
    query["EventLevel"] = request.eventLevel();
  }

  if (!!request.hasEventName()) {
    query["EventName"] = request.eventName();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEvents"},
    {"version" , "2021-07-30"},
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
 * @summary Queries the risk events of a disk.
 *
 * @param request DescribeEventsRequest
 * @return DescribeEventsResponse
 */
DescribeEventsResponse Client::describeEvents(const DescribeEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEventsWithOptions(request, runtime);
}

/**
 * @summary Queries one or more Elastic Block Storage (EBS) devices that you created.
 *
 * @param request DescribeLensMonitorDisksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLensMonitorDisksResponse
 */
DescribeLensMonitorDisksResponse Client::describeLensMonitorDisksWithOptions(const DescribeLensMonitorDisksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDiskCategory()) {
    query["DiskCategory"] = request.diskCategory();
  }

  if (!!request.hasDiskIdPattern()) {
    query["DiskIdPattern"] = request.diskIdPattern();
  }

  if (!!request.hasDiskIds()) {
    query["DiskIds"] = request.diskIds();
  }

  if (!!request.hasLensTags()) {
    query["LensTags"] = request.lensTags();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLensMonitorDisks"},
    {"version" , "2021-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLensMonitorDisksResponse>();
}

/**
 * @summary Queries one or more Elastic Block Storage (EBS) devices that you created.
 *
 * @param request DescribeLensMonitorDisksRequest
 * @return DescribeLensMonitorDisksResponse
 */
DescribeLensMonitorDisksResponse Client::describeLensMonitorDisks(const DescribeLensMonitorDisksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLensMonitorDisksWithOptions(request, runtime);
}

/**
 * @summary 查询用户开通ebs数据洞察服务状态
 *
 * @description ## Usage notes
 * CloudLens for EBS is in invitational preview in the China (Hangzhou), China (Shanghai), China (Zhangjiakou), China (Shenzhen), and China (Hong Kong) regions. To use the feature, [submit a ticket](https://workorder-intl.console.aliyun.com/#/ticket/createIndex).
 *
 * @param request DescribeLensServiceStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLensServiceStatusResponse
 */
DescribeLensServiceStatusResponse Client::describeLensServiceStatusWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeLensServiceStatus"},
    {"version" , "2021-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLensServiceStatusResponse>();
}

/**
 * @summary 查询用户开通ebs数据洞察服务状态
 *
 * @description ## Usage notes
 * CloudLens for EBS is in invitational preview in the China (Hangzhou), China (Shanghai), China (Zhangjiakou), China (Shenzhen), and China (Hong Kong) regions. To use the feature, [submit a ticket](https://workorder-intl.console.aliyun.com/#/ticket/createIndex).
 *
 * @return DescribeLensServiceStatusResponse
 */
DescribeLensServiceStatusResponse Client::describeLensServiceStatus() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLensServiceStatusWithOptions(runtime);
}

/**
 * @summary Query single metric monitoring information
 *
 * @param tmpReq DescribeMetricDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMetricDataResponse
 */
DescribeMetricDataResponse Client::describeMetricDataWithOptions(const DescribeMetricDataRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeMetricDataShrinkRequest request = DescribeMetricDataShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasGroupByLabels()) {
    request.setGroupByLabelsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.groupByLabels(), "GroupByLabels", "simple"));
  }

  json query = {};
  if (!!request.hasAggreOps()) {
    query["AggreOps"] = request.aggreOps();
  }

  if (!!request.hasAggreOverLineOps()) {
    query["AggreOverLineOps"] = request.aggreOverLineOps();
  }

  if (!!request.hasDimensions()) {
    query["Dimensions"] = request.dimensions();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasGroupByLabelsShrink()) {
    query["GroupByLabels"] = request.groupByLabelsShrink();
  }

  if (!!request.hasMetricName()) {
    query["MetricName"] = request.metricName();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.period();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMetricData"},
    {"version" , "2021-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMetricDataResponse>();
}

/**
 * @summary Query single metric monitoring information
 *
 * @param request DescribeMetricDataRequest
 * @return DescribeMetricDataResponse
 */
DescribeMetricDataResponse Client::describeMetricData(const DescribeMetricDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMetricDataWithOptions(request, runtime);
}

/**
 * @summary Queries the disaster recovery drills that were performed on the replication pair whose secondary disk resides in a specific region.
 *
 * @param request DescribePairDrillsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePairDrillsResponse
 */
DescribePairDrillsResponse Client::describePairDrillsWithOptions(const DescribePairDrillsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDrillId()) {
    query["DrillId"] = request.drillId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPairId()) {
    query["PairId"] = request.pairId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePairDrills"},
    {"version" , "2021-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePairDrillsResponse>();
}

/**
 * @summary Queries the disaster recovery drills that were performed on the replication pair whose secondary disk resides in a specific region.
 *
 * @param request DescribePairDrillsRequest
 * @return DescribePairDrillsResponse
 */
DescribePairDrillsResponse Client::describePairDrills(const DescribePairDrillsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePairDrillsWithOptions(request, runtime);
}

/**
 * @summary Queries the details of regions in which Elastic Block Storage (EBS) features (such as async replication, CloudLens for EBS, and Dedicated Block Storage Cluster) are supported.
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRegions"},
    {"version" , "2021-07-30"},
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
 * @summary Queries the details of regions in which Elastic Block Storage (EBS) features (such as async replication, CloudLens for EBS, and Dedicated Block Storage Cluster) are supported.
 *
 * @param request DescribeRegionsRequest
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions(const DescribeRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRegionsWithOptions(request, runtime);
}

/**
 * @summary Queries the disaster recovery drills that were performed on the replication pair-consistent group whose secondary disk resides in a specific region.
 *
 * @param request DescribeReplicaGroupDrillsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeReplicaGroupDrillsResponse
 */
DescribeReplicaGroupDrillsResponse Client::describeReplicaGroupDrillsWithOptions(const DescribeReplicaGroupDrillsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDrillId()) {
    query["DrillId"] = request.drillId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeReplicaGroupDrills"},
    {"version" , "2021-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeReplicaGroupDrillsResponse>();
}

/**
 * @summary Queries the disaster recovery drills that were performed on the replication pair-consistent group whose secondary disk resides in a specific region.
 *
 * @param request DescribeReplicaGroupDrillsRequest
 * @return DescribeReplicaGroupDrillsResponse
 */
DescribeReplicaGroupDrillsResponse Client::describeReplicaGroupDrills(const DescribeReplicaGroupDrillsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeReplicaGroupDrillsWithOptions(request, runtime);
}

/**
 * @summary 查询解决方案实例默认配置
 *
 * @param request DescribeSolutionInstanceConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSolutionInstanceConfigurationResponse
 */
DescribeSolutionInstanceConfigurationResponse Client::describeSolutionInstanceConfigurationWithOptions(const DescribeSolutionInstanceConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasParameters()) {
    query["Parameters"] = request.parameters();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSolutionId()) {
    query["SolutionId"] = request.solutionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSolutionInstanceConfiguration"},
    {"version" , "2021-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSolutionInstanceConfigurationResponse>();
}

/**
 * @summary 查询解决方案实例默认配置
 *
 * @param request DescribeSolutionInstanceConfigurationRequest
 * @return DescribeSolutionInstanceConfigurationResponse
 */
DescribeSolutionInstanceConfigurationResponse Client::describeSolutionInstanceConfiguration(const DescribeSolutionInstanceConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSolutionInstanceConfigurationWithOptions(request, runtime);
}

/**
 * @summary Centralized Role: Query User Disk Snapshot tagKeys
 *
 * @description ## Interface Description
 * Query the tag key-value pairs of user\\"s cloud disk and snapshot. The search scope can be narrowed down by using filterTagKey.
 *
 * @param request DescribeUserTagKeysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserTagKeysResponse
 */
DescribeUserTagKeysResponse Client::describeUserTagKeysWithOptions(const DescribeUserTagKeysRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasTagFilterKey()) {
    body["TagFilterKey"] = request.tagFilterKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeUserTagKeys"},
    {"version" , "2021-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUserTagKeysResponse>();
}

/**
 * @summary Centralized Role: Query User Disk Snapshot tagKeys
 *
 * @description ## Interface Description
 * Query the tag key-value pairs of user\\"s cloud disk and snapshot. The search scope can be narrowed down by using filterTagKey.
 *
 * @param request DescribeUserTagKeysRequest
 * @return DescribeUserTagKeysResponse
 */
DescribeUserTagKeysResponse Client::describeUserTagKeys(const DescribeUserTagKeysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserTagKeysWithOptions(request, runtime);
}

/**
 * @summary Centralized Role: Query User Disk and Snapshot tagValues
 *
 * @description ## Interface Description
 * > The dedicated block storage cluster feature is currently supported in the following regions: South China 2 (Heyuan), Indonesia (Jakarta), and South China 1 (Shenzhen).
 * - The request parameters act as a filter, with a logical AND relationship. If any parameter is empty, the filter does not take effect.
 * - For paginated queries, it is recommended to use the MaxResults and NextToken parameters. Usage instructions: When querying the first page, set only MaxResults to limit the number of returned entries. The NextToken in the response will serve as the token for querying subsequent pages. When querying subsequent pages, set the NextToken parameter to the value obtained from the previous response, and set MaxResults to limit the number of returned entries.
 *
 * @param request DescribeUserTagValuesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserTagValuesResponse
 */
DescribeUserTagValuesResponse Client::describeUserTagValuesWithOptions(const DescribeUserTagValuesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasTagFilterValue()) {
    body["TagFilterValue"] = request.tagFilterValue();
  }

  if (!!request.hasTagKey()) {
    body["TagKey"] = request.tagKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeUserTagValues"},
    {"version" , "2021-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUserTagValuesResponse>();
}

/**
 * @summary Centralized Role: Query User Disk and Snapshot tagValues
 *
 * @description ## Interface Description
 * > The dedicated block storage cluster feature is currently supported in the following regions: South China 2 (Heyuan), Indonesia (Jakarta), and South China 1 (Shenzhen).
 * - The request parameters act as a filter, with a logical AND relationship. If any parameter is empty, the filter does not take effect.
 * - For paginated queries, it is recommended to use the MaxResults and NextToken parameters. Usage instructions: When querying the first page, set only MaxResults to limit the number of returned entries. The NextToken in the response will serve as the token for querying subsequent pages. When querying subsequent pages, set the NextToken parameter to the value obtained from the previous response, and set MaxResults to limit the number of returned entries.
 *
 * @param request DescribeUserTagValuesRequest
 * @return DescribeUserTagValuesResponse
 */
DescribeUserTagValuesResponse Client::describeUserTagValues(const DescribeUserTagValuesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserTagValuesWithOptions(request, runtime);
}

/**
 * @summary Enables the failover feature for replication pairs in a replication pair-consistent group. When the primary disks of specific replication pairs in a replication pair-consistent group fail, you can call this operation to enable the read and write permissions on the secondary disks.
 *
 * @description ## [](#)Usage notes
 * *   For information about the regions in which the replication pair-consistent group feature is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
 * *   The replication pair-consistent group must be in the **One-time Syncing** (`manual_syncing`), **Syncing** (`syncing`), **Normal** (`normal`), **Stopping** (`stopping`), **Stop Failed** (`stop_failed`), **Stopped** (`stopped`), **In Failover** (`failovering`), **Failover Failed** (`failover_failed`), or **Failovered** (`failovered`) state.
 * *   After a failover is performed, the replication pair-consistent group enters the **Failovered** (`failovered`) state.
 * *   Before you perform a failover, make sure that the first full data synchronization is completed between the primary site and secondary site.
 *
 * @param request FailoverDiskReplicaGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FailoverDiskReplicaGroupResponse
 */
FailoverDiskReplicaGroupResponse Client::failoverDiskReplicaGroupWithOptions(const FailoverDiskReplicaGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasReplicaGroupId()) {
    query["ReplicaGroupId"] = request.replicaGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FailoverDiskReplicaGroup"},
    {"version" , "2021-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FailoverDiskReplicaGroupResponse>();
}

/**
 * @summary Enables the failover feature for replication pairs in a replication pair-consistent group. When the primary disks of specific replication pairs in a replication pair-consistent group fail, you can call this operation to enable the read and write permissions on the secondary disks.
 *
 * @description ## [](#)Usage notes
 * *   For information about the regions in which the replication pair-consistent group feature is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
 * *   The replication pair-consistent group must be in the **One-time Syncing** (`manual_syncing`), **Syncing** (`syncing`), **Normal** (`normal`), **Stopping** (`stopping`), **Stop Failed** (`stop_failed`), **Stopped** (`stopped`), **In Failover** (`failovering`), **Failover Failed** (`failover_failed`), or **Failovered** (`failovered`) state.
 * *   After a failover is performed, the replication pair-consistent group enters the **Failovered** (`failovered`) state.
 * *   Before you perform a failover, make sure that the first full data synchronization is completed between the primary site and secondary site.
 *
 * @param request FailoverDiskReplicaGroupRequest
 * @return FailoverDiskReplicaGroupResponse
 */
FailoverDiskReplicaGroupResponse Client::failoverDiskReplicaGroup(const FailoverDiskReplicaGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return failoverDiskReplicaGroupWithOptions(request, runtime);
}

/**
 * @summary Enables the failover feature for replication pairs.
 *
 * @description ## [](#)Usage notes
 * *   For information about the regions in which async replication is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
 * *   The replication pair for which you want to enable failover cannot be in the **Invalid** (`invalid`) or **Deleted** (`deleted`) state.
 * *   After a failover is performed, the replication pair enters the **Failovered** (`failovered`) state.
 *
 * @param request FailoverDiskReplicaPairRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FailoverDiskReplicaPairResponse
 */
FailoverDiskReplicaPairResponse Client::failoverDiskReplicaPairWithOptions(const FailoverDiskReplicaPairRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasReplicaPairId()) {
    query["ReplicaPairId"] = request.replicaPairId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FailoverDiskReplicaPair"},
    {"version" , "2021-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FailoverDiskReplicaPairResponse>();
}

/**
 * @summary Enables the failover feature for replication pairs.
 *
 * @description ## [](#)Usage notes
 * *   For information about the regions in which async replication is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
 * *   The replication pair for which you want to enable failover cannot be in the **Invalid** (`invalid`) or **Deleted** (`deleted`) state.
 * *   After a failover is performed, the replication pair enters the **Failovered** (`failovered`) state.
 *
 * @param request FailoverDiskReplicaPairRequest
 * @return FailoverDiskReplicaPairResponse
 */
FailoverDiskReplicaPairResponse Client::failoverDiskReplicaPair(const FailoverDiskReplicaPairRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return failoverDiskReplicaPairWithOptions(request, runtime);
}

/**
 * @summary Centralized Role: Obtain User Usage Report with reportId
 *
 * @param request GetReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetReportResponse
 */
GetReportResponse Client::getReportWithOptions(const GetReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.appName();
  }

  if (!!request.hasReportType()) {
    query["ReportType"] = request.reportType();
  }

  json body = {};
  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasReportId()) {
    body["ReportId"] = request.reportId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetReport"},
    {"version" , "2021-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetReportResponse>();
}

/**
 * @summary Centralized Role: Obtain User Usage Report with reportId
 *
 * @param request GetReportRequest
 * @return GetReportResponse
 */
GetReportResponse Client::getReport(const GetReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getReportWithOptions(request, runtime);
}

/**
 * @summary 查询异步复制支持的目的地域和可用区
 *
 * @param request ListReplicaEdgeSupportedRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListReplicaEdgeSupportedResponse
 */
ListReplicaEdgeSupportedResponse Client::listReplicaEdgeSupportedWithOptions(const ListReplicaEdgeSupportedRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAzone()) {
    query["Azone"] = request.azone();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListReplicaEdgeSupported"},
    {"version" , "2021-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListReplicaEdgeSupportedResponse>();
}

/**
 * @summary 查询异步复制支持的目的地域和可用区
 *
 * @param request ListReplicaEdgeSupportedRequest
 * @return ListReplicaEdgeSupportedResponse
 */
ListReplicaEdgeSupportedResponse Client::listReplicaEdgeSupported(const ListReplicaEdgeSupportedRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listReplicaEdgeSupportedWithOptions(request, runtime);
}

/**
 * @summary Centralized Role: Query Historical Reports
 *
 * @param request ListReportsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListReportsResponse
 */
ListReportsResponse Client::listReportsWithOptions(const ListReportsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  json body = {};
  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListReports"},
    {"version" , "2021-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListReportsResponse>();
}

/**
 * @summary Centralized Role: Query Historical Reports
 *
 * @param request ListReportsRequest
 * @return ListReportsResponse
 */
ListReportsResponse Client::listReports(const ListReportsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listReportsWithOptions(request, runtime);
}

/**
 * @summary Queries the tags that are added to one or more Elastic Block Storage (EBS) resources, or queries the IDs and tags of resources in a specified non-default resource group.
 *
 * @description Specify at least one of the following parameters or parameter pairs in a request to determine a query object:
 * *   `ResourceId.N`
 * *   `Tag.N` parameter pair (`Tag.N.Key` and `Tag.N.Value`)
 * If you set `Tag.N` and `ResourceId.N` at the same time, the EBS resources that match both the parameters are returned.
 *
 * @param request ListTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
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
    {"version" , "2021-07-30"},
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
 * @summary Queries the tags that are added to one or more Elastic Block Storage (EBS) resources, or queries the IDs and tags of resources in a specified non-default resource group.
 *
 * @description Specify at least one of the following parameters or parameter pairs in a request to determine a query object:
 * *   `ResourceId.N`
 * *   `Tag.N` parameter pair (`Tag.N.Key` and `Tag.N.Value`)
 * If you set `Tag.N` and `ResourceId.N` at the same time, the EBS resources that match both the parameters are returned.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary 修改专属集群属性OpenApi
 *
 * @description You can call this operation to modify the information of a dedicated block storage cluster. The information includes the name and description of the cluster.
 *
 * @param request ModifyDedicatedBlockStorageClusterAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDedicatedBlockStorageClusterAttributeResponse
 */
ModifyDedicatedBlockStorageClusterAttributeResponse Client::modifyDedicatedBlockStorageClusterAttributeWithOptions(const ModifyDedicatedBlockStorageClusterAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDbscId()) {
    query["DbscId"] = request.dbscId();
  }

  if (!!request.hasDbscName()) {
    query["DbscName"] = request.dbscName();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDedicatedBlockStorageClusterAttribute"},
    {"version" , "2021-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDedicatedBlockStorageClusterAttributeResponse>();
}

/**
 * @summary 修改专属集群属性OpenApi
 *
 * @description You can call this operation to modify the information of a dedicated block storage cluster. The information includes the name and description of the cluster.
 *
 * @param request ModifyDedicatedBlockStorageClusterAttributeRequest
 * @return ModifyDedicatedBlockStorageClusterAttributeResponse
 */
ModifyDedicatedBlockStorageClusterAttributeResponse Client::modifyDedicatedBlockStorageClusterAttribute(const ModifyDedicatedBlockStorageClusterAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDedicatedBlockStorageClusterAttributeWithOptions(request, runtime);
}

/**
 * @summary Modifies the name, description, or recovery point objective (RPO) of a replication pair-consistent group.
 *
 * @description ## [](#)Usage notes
 * *   For information about the regions in which the replication pair-consistent group feature is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
 * *   The replication pair-consistent group must be in the **Created** (`created`) or **Stopped** (`stopped`) state.
 *
 * @param request ModifyDiskReplicaGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDiskReplicaGroupResponse
 */
ModifyDiskReplicaGroupResponse Client::modifyDiskReplicaGroupWithOptions(const ModifyDiskReplicaGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBandwidth()) {
    query["Bandwidth"] = request.bandwidth();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasEnableRtc()) {
    query["EnableRtc"] = request.enableRtc();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasRPO()) {
    query["RPO"] = request.RPO();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasReplicaGroupId()) {
    query["ReplicaGroupId"] = request.replicaGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDiskReplicaGroup"},
    {"version" , "2021-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDiskReplicaGroupResponse>();
}

/**
 * @summary Modifies the name, description, or recovery point objective (RPO) of a replication pair-consistent group.
 *
 * @description ## [](#)Usage notes
 * *   For information about the regions in which the replication pair-consistent group feature is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
 * *   The replication pair-consistent group must be in the **Created** (`created`) or **Stopped** (`stopped`) state.
 *
 * @param request ModifyDiskReplicaGroupRequest
 * @return ModifyDiskReplicaGroupResponse
 */
ModifyDiskReplicaGroupResponse Client::modifyDiskReplicaGroup(const ModifyDiskReplicaGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDiskReplicaGroupWithOptions(request, runtime);
}

/**
 * @summary Modifies a replication pair.
 *
 * @description ## [](#)Usage notes
 * *   For information about the regions in which async replication is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
 * *   Only replication pairs that are in the **Created** (`created`) or **Stopped** (`stopped`) state can have their names or descriptions modified.
 *
 * @param request ModifyDiskReplicaPairRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDiskReplicaPairResponse
 */
ModifyDiskReplicaPairResponse Client::modifyDiskReplicaPairWithOptions(const ModifyDiskReplicaPairRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBandwidth()) {
    query["Bandwidth"] = request.bandwidth();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasEnableRtc()) {
    query["EnableRtc"] = request.enableRtc();
  }

  if (!!request.hasPairName()) {
    query["PairName"] = request.pairName();
  }

  if (!!request.hasRPO()) {
    query["RPO"] = request.RPO();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasReplicaPairId()) {
    query["ReplicaPairId"] = request.replicaPairId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDiskReplicaPair"},
    {"version" , "2021-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDiskReplicaPairResponse>();
}

/**
 * @summary Modifies a replication pair.
 *
 * @description ## [](#)Usage notes
 * *   For information about the regions in which async replication is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
 * *   Only replication pairs that are in the **Created** (`created`) or **Stopped** (`stopped`) state can have their names or descriptions modified.
 *
 * @param request ModifyDiskReplicaPairRequest
 * @return ModifyDiskReplicaPairResponse
 */
ModifyDiskReplicaPairResponse Client::modifyDiskReplicaPair(const ModifyDiskReplicaPairRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDiskReplicaPairWithOptions(request, runtime);
}

/**
 * @summary Query the throughput status of a dedicated block storage cluster disk which has been set through the SetDedicatedBlockStorageClusterDiskThroughput API.
 *
 * @param request QueryDedicatedBlockStorageClusterDiskThroughputStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDedicatedBlockStorageClusterDiskThroughputStatusResponse
 */
QueryDedicatedBlockStorageClusterDiskThroughputStatusResponse Client::queryDedicatedBlockStorageClusterDiskThroughputStatusWithOptions(const QueryDedicatedBlockStorageClusterDiskThroughputStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  json body = {};
  if (!!request.hasQosRequestId()) {
    body["QosRequestId"] = request.qosRequestId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "QueryDedicatedBlockStorageClusterDiskThroughputStatus"},
    {"version" , "2021-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryDedicatedBlockStorageClusterDiskThroughputStatusResponse>();
}

/**
 * @summary Query the throughput status of a dedicated block storage cluster disk which has been set through the SetDedicatedBlockStorageClusterDiskThroughput API.
 *
 * @param request QueryDedicatedBlockStorageClusterDiskThroughputStatusRequest
 * @return QueryDedicatedBlockStorageClusterDiskThroughputStatusResponse
 */
QueryDedicatedBlockStorageClusterDiskThroughputStatusResponse Client::queryDedicatedBlockStorageClusterDiskThroughputStatus(const QueryDedicatedBlockStorageClusterDiskThroughputStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDedicatedBlockStorageClusterDiskThroughputStatusWithOptions(request, runtime);
}

/**
 * @summary Query dedicated block storage cluster capacity trend data, includ available capacity size and total capacity size.
 *
 * @description Period is the time interval between data retrieval points. When set to 60 (minute interval), a maximum of 1440 data points can be returned; when set to 3600 (hour interval), a maximum of 744 data points can be returned; and when set to 86400 (day interval), a maximum of 366 data points can be returned.
 *
 * @param request QueryDedicatedBlockStorageClusterInventoryDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDedicatedBlockStorageClusterInventoryDataResponse
 */
QueryDedicatedBlockStorageClusterInventoryDataResponse Client::queryDedicatedBlockStorageClusterInventoryDataWithOptions(const QueryDedicatedBlockStorageClusterInventoryDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  json body = {};
  if (!!request.hasDbscId()) {
    body["DbscId"] = request.dbscId();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasPeriod()) {
    body["Period"] = request.period();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "QueryDedicatedBlockStorageClusterInventoryData"},
    {"version" , "2021-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryDedicatedBlockStorageClusterInventoryDataResponse>();
}

/**
 * @summary Query dedicated block storage cluster capacity trend data, includ available capacity size and total capacity size.
 *
 * @description Period is the time interval between data retrieval points. When set to 60 (minute interval), a maximum of 1440 data points can be returned; when set to 3600 (hour interval), a maximum of 744 data points can be returned; and when set to 86400 (day interval), a maximum of 366 data points can be returned.
 *
 * @param request QueryDedicatedBlockStorageClusterInventoryDataRequest
 * @return QueryDedicatedBlockStorageClusterInventoryDataResponse
 */
QueryDedicatedBlockStorageClusterInventoryDataResponse Client::queryDedicatedBlockStorageClusterInventoryData(const QueryDedicatedBlockStorageClusterInventoryDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDedicatedBlockStorageClusterInventoryDataWithOptions(request, runtime);
}

/**
 * @summary Removes a replication pair from a replication pair-consistent group. After a replication pair is removed from a replication pair-consistent group, the pair is disassociated from the group but is not deleted.
 *
 * @description ## [](#)Usage notes
 * *   For information about the regions in which the replication pair-consistent group feature is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
 * *   The replication pair-consistent group from which you want to remove a replication pair must be in the **Created** (`created`), **Stopped** (`stopped`), or **Invalid** (`invalid`) state.
 *
 * @param request RemoveDiskReplicaPairRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveDiskReplicaPairResponse
 */
RemoveDiskReplicaPairResponse Client::removeDiskReplicaPairWithOptions(const RemoveDiskReplicaPairRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasReplicaGroupId()) {
    query["ReplicaGroupId"] = request.replicaGroupId();
  }

  if (!!request.hasReplicaPairId()) {
    query["ReplicaPairId"] = request.replicaPairId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveDiskReplicaPair"},
    {"version" , "2021-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveDiskReplicaPairResponse>();
}

/**
 * @summary Removes a replication pair from a replication pair-consistent group. After a replication pair is removed from a replication pair-consistent group, the pair is disassociated from the group but is not deleted.
 *
 * @description ## [](#)Usage notes
 * *   For information about the regions in which the replication pair-consistent group feature is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
 * *   The replication pair-consistent group from which you want to remove a replication pair must be in the **Created** (`created`), **Stopped** (`stopped`), or **Invalid** (`invalid`) state.
 *
 * @param request RemoveDiskReplicaPairRequest
 * @return RemoveDiskReplicaPairResponse
 */
RemoveDiskReplicaPairResponse Client::removeDiskReplicaPair(const RemoveDiskReplicaPairRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeDiskReplicaPairWithOptions(request, runtime);
}

/**
 * @summary Enables the reverse replication feature for replication pairs that belong to a replication pair-consistent group. After reverse replication is enabled, data stored on the original secondary disks is replicated to the original primary disks. When a reverse replication is being performed, the primary and secondary sites of the replication pair-consistent group remain unchanged, but data is replicated from the secondary site to the primary site.
 *
 * @description ## [](#)Usage notes
 * *   For information about the regions in which the replication pair-consistent group feature is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
 * *   The replication pair-consistent group for which you want to enable reverse replication must be in the **Failovered** (`failovered`) state. You can call the `FailoverDiskReplicaPair` operation to enable failover.
 * *   Before a reverse replication is performed, the primary disks must be detached from its associated Elastic Compute Service (ECS) instance and must be in the Unattached state. You can call the [DetachDisk](https://help.aliyun.com/document_detail/25516.html) operation to detach the disks.
 * *   After you enable reverse replication, you must call the `StartDiskReplicaPair` operation again to enable the async replication feature before data can be replicated from the original secondary disks to the original primary disks.
 * *   You can set the ReverseReplicate parameter to false to cancel the **Failovered** (`failovered`) state and restore the original replication direction.
 *
 * @param request ReprotectDiskReplicaGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReprotectDiskReplicaGroupResponse
 */
ReprotectDiskReplicaGroupResponse Client::reprotectDiskReplicaGroupWithOptions(const ReprotectDiskReplicaGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasReplicaGroupId()) {
    query["ReplicaGroupId"] = request.replicaGroupId();
  }

  if (!!request.hasReverseReplicate()) {
    query["ReverseReplicate"] = request.reverseReplicate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReprotectDiskReplicaGroup"},
    {"version" , "2021-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReprotectDiskReplicaGroupResponse>();
}

/**
 * @summary Enables the reverse replication feature for replication pairs that belong to a replication pair-consistent group. After reverse replication is enabled, data stored on the original secondary disks is replicated to the original primary disks. When a reverse replication is being performed, the primary and secondary sites of the replication pair-consistent group remain unchanged, but data is replicated from the secondary site to the primary site.
 *
 * @description ## [](#)Usage notes
 * *   For information about the regions in which the replication pair-consistent group feature is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
 * *   The replication pair-consistent group for which you want to enable reverse replication must be in the **Failovered** (`failovered`) state. You can call the `FailoverDiskReplicaPair` operation to enable failover.
 * *   Before a reverse replication is performed, the primary disks must be detached from its associated Elastic Compute Service (ECS) instance and must be in the Unattached state. You can call the [DetachDisk](https://help.aliyun.com/document_detail/25516.html) operation to detach the disks.
 * *   After you enable reverse replication, you must call the `StartDiskReplicaPair` operation again to enable the async replication feature before data can be replicated from the original secondary disks to the original primary disks.
 * *   You can set the ReverseReplicate parameter to false to cancel the **Failovered** (`failovered`) state and restore the original replication direction.
 *
 * @param request ReprotectDiskReplicaGroupRequest
 * @return ReprotectDiskReplicaGroupResponse
 */
ReprotectDiskReplicaGroupResponse Client::reprotectDiskReplicaGroup(const ReprotectDiskReplicaGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return reprotectDiskReplicaGroupWithOptions(request, runtime);
}

/**
 * @summary Enables the reverse replication feature for a replication pair.
 *
 * @description ## [](#)Usage notes
 * *   For information about the regions in which async replication is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
 * *   The replication pair for which you want to enable reverse replication must be in the **Failovered** (`failovered`) state. You can call the [FailoverDiskReplicaPair](https://help.aliyun.com/document_detail/354358.html) operation to enable failover.
 * *   The primary disk must be detached from its associated Elastic Compute Service (ECS) instance and is in the Unattached state. You can call the [DetachDisk](https://help.aliyun.com/document_detail/25516.html) operation to detach the disk.
 * *   After you enable reverse replication, you must call the [StartDiskReplicaPair](https://help.aliyun.com/document_detail/354205.html) operation again to activate the replication pair before data can be replicated from the original secondary disk to the original primary disk.
 * *   You can set the ReverseReplicate parameter to false to cancel the **Failovered** (`failovered`) state and restore the original replication direction.
 *
 * @param request ReprotectDiskReplicaPairRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReprotectDiskReplicaPairResponse
 */
ReprotectDiskReplicaPairResponse Client::reprotectDiskReplicaPairWithOptions(const ReprotectDiskReplicaPairRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasReplicaPairId()) {
    query["ReplicaPairId"] = request.replicaPairId();
  }

  if (!!request.hasReverseReplicate()) {
    query["ReverseReplicate"] = request.reverseReplicate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReprotectDiskReplicaPair"},
    {"version" , "2021-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReprotectDiskReplicaPairResponse>();
}

/**
 * @summary Enables the reverse replication feature for a replication pair.
 *
 * @description ## [](#)Usage notes
 * *   For information about the regions in which async replication is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
 * *   The replication pair for which you want to enable reverse replication must be in the **Failovered** (`failovered`) state. You can call the [FailoverDiskReplicaPair](https://help.aliyun.com/document_detail/354358.html) operation to enable failover.
 * *   The primary disk must be detached from its associated Elastic Compute Service (ECS) instance and is in the Unattached state. You can call the [DetachDisk](https://help.aliyun.com/document_detail/25516.html) operation to detach the disk.
 * *   After you enable reverse replication, you must call the [StartDiskReplicaPair](https://help.aliyun.com/document_detail/354205.html) operation again to activate the replication pair before data can be replicated from the original secondary disk to the original primary disk.
 * *   You can set the ReverseReplicate parameter to false to cancel the **Failovered** (`failovered`) state and restore the original replication direction.
 *
 * @param request ReprotectDiskReplicaPairRequest
 * @return ReprotectDiskReplicaPairResponse
 */
ReprotectDiskReplicaPairResponse Client::reprotectDiskReplicaPair(const ReprotectDiskReplicaPairRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return reprotectDiskReplicaPairWithOptions(request, runtime);
}

/**
 * @summary In the elastic type dedicated block storage cluster, you can easily achieve the specified throughput (Bps) for the target disk. You only need to set the cloud disk ID and the target throughput, simplifying the process of configuring.
 *
 * @param request SetDedicatedBlockStorageClusterDiskThroughputRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetDedicatedBlockStorageClusterDiskThroughputResponse
 */
SetDedicatedBlockStorageClusterDiskThroughputResponse Client::setDedicatedBlockStorageClusterDiskThroughputWithOptions(const SetDedicatedBlockStorageClusterDiskThroughputRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  json body = {};
  if (!!request.hasBps()) {
    body["Bps"] = request.bps();
  }

  if (!!request.hasDiskId()) {
    body["DiskId"] = request.diskId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SetDedicatedBlockStorageClusterDiskThroughput"},
    {"version" , "2021-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetDedicatedBlockStorageClusterDiskThroughputResponse>();
}

/**
 * @summary In the elastic type dedicated block storage cluster, you can easily achieve the specified throughput (Bps) for the target disk. You only need to set the cloud disk ID and the target throughput, simplifying the process of configuring.
 *
 * @param request SetDedicatedBlockStorageClusterDiskThroughputRequest
 * @return SetDedicatedBlockStorageClusterDiskThroughputResponse
 */
SetDedicatedBlockStorageClusterDiskThroughputResponse Client::setDedicatedBlockStorageClusterDiskThroughput(const SetDedicatedBlockStorageClusterDiskThroughputRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setDedicatedBlockStorageClusterDiskThroughputWithOptions(request, runtime);
}

/**
 * @summary Enables the async replication feature for replication pairs that belong to a replication pair-consistent group. When the async replication feature is enabled for the pairs for the first time, the system first performs a full synchronization to synchronize all data from disks at the primary site (primary disks) to disks at the secondary site (secondary disks) and then periodically synchronizes incremental data based on the recovery point objective (RPO) of the replication pair-consistent group.
 *
 * @description ## [](#)Usage notes
 * *   For information about the regions in which the replication pair-consistent group feature is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
 * *   If you set the `OneShot` to `false`, the replication pair-consistent group must be in the **Created** (`created` ), **Synchronizing** (`syncing` ), **Normal** (`normal` ), or **Stopped** (`stopped`) state.
 * *   If you set `OneShot` to `true`, the replication pair-consistent group must be in the **Created** (`created` ), **One-time Syncing** (`manual_syncing` ), or **Stopped** (`stopped`) state. The time interval between two consecutive one-time synchronizations must be longer than one half of the recovery point objective (RPO).
 * *   After a replication pair-consistent group is activated, the group enters the **Initial Syncing** (`initial_syncing`) state and the system performs the first async replication to replicate all data from the primary disks to secondary disks.
 *
 * @param request StartDiskReplicaGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartDiskReplicaGroupResponse
 */
StartDiskReplicaGroupResponse Client::startDiskReplicaGroupWithOptions(const StartDiskReplicaGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasOneShot()) {
    query["OneShot"] = request.oneShot();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasReplicaGroupId()) {
    query["ReplicaGroupId"] = request.replicaGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartDiskReplicaGroup"},
    {"version" , "2021-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartDiskReplicaGroupResponse>();
}

/**
 * @summary Enables the async replication feature for replication pairs that belong to a replication pair-consistent group. When the async replication feature is enabled for the pairs for the first time, the system first performs a full synchronization to synchronize all data from disks at the primary site (primary disks) to disks at the secondary site (secondary disks) and then periodically synchronizes incremental data based on the recovery point objective (RPO) of the replication pair-consistent group.
 *
 * @description ## [](#)Usage notes
 * *   For information about the regions in which the replication pair-consistent group feature is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
 * *   If you set the `OneShot` to `false`, the replication pair-consistent group must be in the **Created** (`created` ), **Synchronizing** (`syncing` ), **Normal** (`normal` ), or **Stopped** (`stopped`) state.
 * *   If you set `OneShot` to `true`, the replication pair-consistent group must be in the **Created** (`created` ), **One-time Syncing** (`manual_syncing` ), or **Stopped** (`stopped`) state. The time interval between two consecutive one-time synchronizations must be longer than one half of the recovery point objective (RPO).
 * *   After a replication pair-consistent group is activated, the group enters the **Initial Syncing** (`initial_syncing`) state and the system performs the first async replication to replicate all data from the primary disks to secondary disks.
 *
 * @param request StartDiskReplicaGroupRequest
 * @return StartDiskReplicaGroupResponse
 */
StartDiskReplicaGroupResponse Client::startDiskReplicaGroup(const StartDiskReplicaGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startDiskReplicaGroupWithOptions(request, runtime);
}

/**
 * @summary Activates a replication pair.
 *
 * @description ## [](#)Usage notes
 * *   For information about the regions in which async replication is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
 * *   Only replication pairs that are in the **Created** (`created`) or **Stopped** (`stopped`) state can be activated.
 * *   After a replication pair is activated, it enters the **Initial Syncing** (`initial_syncing`) state and the system performs the first asynchronous replication to replicate all data from the primary disk to the secondary disk.
 *
 * @param request StartDiskReplicaPairRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartDiskReplicaPairResponse
 */
StartDiskReplicaPairResponse Client::startDiskReplicaPairWithOptions(const StartDiskReplicaPairRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasOneShot()) {
    query["OneShot"] = request.oneShot();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasReplicaPairId()) {
    query["ReplicaPairId"] = request.replicaPairId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartDiskReplicaPair"},
    {"version" , "2021-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartDiskReplicaPairResponse>();
}

/**
 * @summary Activates a replication pair.
 *
 * @description ## [](#)Usage notes
 * *   For information about the regions in which async replication is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
 * *   Only replication pairs that are in the **Created** (`created`) or **Stopped** (`stopped`) state can be activated.
 * *   After a replication pair is activated, it enters the **Initial Syncing** (`initial_syncing`) state and the system performs the first asynchronous replication to replicate all data from the primary disk to the secondary disk.
 *
 * @param request StartDiskReplicaPairRequest
 * @return StartDiskReplicaPairResponse
 */
StartDiskReplicaPairResponse Client::startDiskReplicaPair(const StartDiskReplicaPairRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startDiskReplicaPairWithOptions(request, runtime);
}

/**
 * @summary Starts a disaster recovery drill to ensure the continued replication and clone the data from the last recovery point of the secondary disk to a new disk. This helps you test the completeness and correctness of applications that are deployed on the disaster recovery site on a regular basis.
 *
 * @description After the disaster recovery drill is complete on the secondary disk, a pay-as-you-go drill disk that has the same capacity and category as the secondary disk is created in the zone where the secondary disk resides. The drill disk contains last-recovery-point data that can be used to test the completeness and correctness of applications.
 *
 * @param request StartPairDrillRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartPairDrillResponse
 */
StartPairDrillResponse Client::startPairDrillWithOptions(const StartPairDrillRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasPairId()) {
    query["PairId"] = request.pairId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartPairDrill"},
    {"version" , "2021-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartPairDrillResponse>();
}

/**
 * @summary Starts a disaster recovery drill to ensure the continued replication and clone the data from the last recovery point of the secondary disk to a new disk. This helps you test the completeness and correctness of applications that are deployed on the disaster recovery site on a regular basis.
 *
 * @description After the disaster recovery drill is complete on the secondary disk, a pay-as-you-go drill disk that has the same capacity and category as the secondary disk is created in the zone where the secondary disk resides. The drill disk contains last-recovery-point data that can be used to test the completeness and correctness of applications.
 *
 * @param request StartPairDrillRequest
 * @return StartPairDrillResponse
 */
StartPairDrillResponse Client::startPairDrill(const StartPairDrillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startPairDrillWithOptions(request, runtime);
}

/**
 * @summary Starts a disaster recovery drill in a replication pair-consistent group to ensure the continued replication and restores data from the latest recovery point of secondary disks to new disks. This helps test the completeness and correctness of applications that are deployed on the disaster recovery site on a regular basis.
 *
 * @description After the disaster recovery drill is complete on secondary disks, a pay-as-you-go drill disk is created in the zone where the secondary disk of each replication pair resides. The latest-recovery-point data is restored to the drill disks to test the completeness and correctness of applications.
 *
 * @param request StartReplicaGroupDrillRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartReplicaGroupDrillResponse
 */
StartReplicaGroupDrillResponse Client::startReplicaGroupDrillWithOptions(const StartReplicaGroupDrillRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartReplicaGroupDrill"},
    {"version" , "2021-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartReplicaGroupDrillResponse>();
}

/**
 * @summary Starts a disaster recovery drill in a replication pair-consistent group to ensure the continued replication and restores data from the latest recovery point of secondary disks to new disks. This helps test the completeness and correctness of applications that are deployed on the disaster recovery site on a regular basis.
 *
 * @description After the disaster recovery drill is complete on secondary disks, a pay-as-you-go drill disk is created in the zone where the secondary disk of each replication pair resides. The latest-recovery-point data is restored to the drill disks to test the completeness and correctness of applications.
 *
 * @param request StartReplicaGroupDrillRequest
 * @return StartReplicaGroupDrillResponse
 */
StartReplicaGroupDrillResponse Client::startReplicaGroupDrill(const StartReplicaGroupDrillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startReplicaGroupDrillWithOptions(request, runtime);
}

/**
 * @summary Stops a replication pair-consistent group. This operation stops all replication pairs in the replication pair-consistent group.
 *
 * @description ## [](#)Usage notes
 * *   For information about the regions in which the replication pair-consistent group feature is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
 * *   The replication pair-consistent group that you want to stop must be in the **One-time Syncing** (`manual_syncing`), **Syncing** (`syncing`), **Normal** (`normal`), **Stopping** (`stopping`), **Stop Failed** (`stop_failed`), or **Stopped** (`stopped`) state.
 * *   When a replication pair-consistent group is stopped, it enters the **Stopped** (`stopped`) state. If a replication pair-consistent group cannot be stopped, the state of the group remains unchanged or changes to **Stop Failed** (`stop_failed`). In this case, try again later.
 *
 * @param request StopDiskReplicaGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopDiskReplicaGroupResponse
 */
StopDiskReplicaGroupResponse Client::stopDiskReplicaGroupWithOptions(const StopDiskReplicaGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasReplicaGroupId()) {
    query["ReplicaGroupId"] = request.replicaGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopDiskReplicaGroup"},
    {"version" , "2021-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopDiskReplicaGroupResponse>();
}

/**
 * @summary Stops a replication pair-consistent group. This operation stops all replication pairs in the replication pair-consistent group.
 *
 * @description ## [](#)Usage notes
 * *   For information about the regions in which the replication pair-consistent group feature is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
 * *   The replication pair-consistent group that you want to stop must be in the **One-time Syncing** (`manual_syncing`), **Syncing** (`syncing`), **Normal** (`normal`), **Stopping** (`stopping`), **Stop Failed** (`stop_failed`), or **Stopped** (`stopped`) state.
 * *   When a replication pair-consistent group is stopped, it enters the **Stopped** (`stopped`) state. If a replication pair-consistent group cannot be stopped, the state of the group remains unchanged or changes to **Stop Failed** (`stop_failed`). In this case, try again later.
 *
 * @param request StopDiskReplicaGroupRequest
 * @return StopDiskReplicaGroupResponse
 */
StopDiskReplicaGroupResponse Client::stopDiskReplicaGroup(const StopDiskReplicaGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopDiskReplicaGroupWithOptions(request, runtime);
}

/**
 * @summary Stops a replication pair.
 *
 * @description ## [](#)Usage notes
 * *   For information about the regions in which async replication is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
 * *   Only replication pairs that are in the **Initial Syncing** (`initial_syncing`), **Syncing** (`syncing`), **One-time Syncing** (`manual_syncing`), or **Normal** (`normal`) state can be stopped. When a replication pair is stopped, it enters the Stopped (`stopped`) state. The secondary disk rolls back to the point in time when the last async replication was complete and drops all the data that is being replicated from the primary disk.
 *
 * @param request StopDiskReplicaPairRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopDiskReplicaPairResponse
 */
StopDiskReplicaPairResponse Client::stopDiskReplicaPairWithOptions(const StopDiskReplicaPairRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasReplicaPairId()) {
    query["ReplicaPairId"] = request.replicaPairId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopDiskReplicaPair"},
    {"version" , "2021-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopDiskReplicaPairResponse>();
}

/**
 * @summary Stops a replication pair.
 *
 * @description ## [](#)Usage notes
 * *   For information about the regions in which async replication is available, see [Overview](https://help.aliyun.com/document_detail/314563.html).
 * *   Only replication pairs that are in the **Initial Syncing** (`initial_syncing`), **Syncing** (`syncing`), **One-time Syncing** (`manual_syncing`), or **Normal** (`normal`) state can be stopped. When a replication pair is stopped, it enters the Stopped (`stopped`) state. The secondary disk rolls back to the point in time when the last async replication was complete and drops all the data that is being replicated from the primary disk.
 *
 * @param request StopDiskReplicaPairRequest
 * @return StopDiskReplicaPairResponse
 */
StopDiskReplicaPairResponse Client::stopDiskReplicaPair(const StopDiskReplicaPairRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopDiskReplicaPairWithOptions(request, runtime);
}

/**
 * @summary Creates tags and adds the tags to Elastic Block Storage (EBS) resources.
 *
 * @description Before you add tags to a resource, Alibaba Cloud checks the number of existing tags of the resource. If the maximum number of tags is reached, an error message is returned. For more information, see the "Tag limits" section in [Limits](https://help.aliyun.com/document_detail/25412.html).
 *
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
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
    {"version" , "2021-07-30"},
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
 * @summary Creates tags and adds the tags to Elastic Block Storage (EBS) resources.
 *
 * @description Before you add tags to a resource, Alibaba Cloud checks the number of existing tags of the resource. If the maximum number of tags is reached, an error message is returned. For more information, see the "Tag limits" section in [Limits](https://help.aliyun.com/document_detail/25412.html).
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Unbind disks from a enterprise-level snapshot policy.
 *
 * @param request UnbindEnterpriseSnapshotPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnbindEnterpriseSnapshotPolicyResponse
 */
UnbindEnterpriseSnapshotPolicyResponse Client::unbindEnterpriseSnapshotPolicyWithOptions(const UnbindEnterpriseSnapshotPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDiskTargets()) {
    query["DiskTargets"] = request.diskTargets();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.policyId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnbindEnterpriseSnapshotPolicy"},
    {"version" , "2021-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnbindEnterpriseSnapshotPolicyResponse>();
}

/**
 * @summary Unbind disks from a enterprise-level snapshot policy.
 *
 * @param request UnbindEnterpriseSnapshotPolicyRequest
 * @return UnbindEnterpriseSnapshotPolicyResponse
 */
UnbindEnterpriseSnapshotPolicyResponse Client::unbindEnterpriseSnapshotPolicy(const UnbindEnterpriseSnapshotPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unbindEnterpriseSnapshotPolicyWithOptions(request, runtime);
}

/**
 * @summary Removes tags from specified Elastic Block Storage (EBS) resources.
 *
 * @description *   You can remove up to 20 tags at a time.
 * *   After a tag is removed from an EBS resource, the tag is automatically deleted if the tag is not added to any instance.
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

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
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
    {"version" , "2021-07-30"},
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
 * @summary Removes tags from specified Elastic Block Storage (EBS) resources.
 *
 * @description *   You can remove up to 20 tags at a time.
 * *   After a tag is removed from an EBS resource, the tag is automatically deleted if the tag is not added to any instance.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @summary Search for a enterprise-level snapshot policy.
 *
 * @param tmpReq UpdateEnterpriseSnapshotPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateEnterpriseSnapshotPolicyResponse
 */
UpdateEnterpriseSnapshotPolicyResponse Client::updateEnterpriseSnapshotPolicyWithOptions(const UpdateEnterpriseSnapshotPolicyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateEnterpriseSnapshotPolicyShrinkRequest request = UpdateEnterpriseSnapshotPolicyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCrossRegionCopyInfo()) {
    request.setCrossRegionCopyInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.crossRegionCopyInfo(), "CrossRegionCopyInfo", "json"));
  }

  if (!!tmpReq.hasRetainRule()) {
    request.setRetainRuleShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.retainRule(), "RetainRule", "json"));
  }

  if (!!tmpReq.hasSchedule()) {
    request.setScheduleShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.schedule(), "Schedule", "json"));
  }

  if (!!tmpReq.hasSpecialRetainRules()) {
    request.setSpecialRetainRulesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.specialRetainRules(), "SpecialRetainRules", "json"));
  }

  if (!!tmpReq.hasStorageRule()) {
    request.setStorageRuleShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.storageRule(), "StorageRule", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasCrossRegionCopyInfoShrink()) {
    query["CrossRegionCopyInfo"] = request.crossRegionCopyInfoShrink();
  }

  if (!!request.hasDesc()) {
    query["Desc"] = request.desc();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.policyId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRetainRuleShrink()) {
    query["RetainRule"] = request.retainRuleShrink();
  }

  if (!!request.hasScheduleShrink()) {
    query["Schedule"] = request.scheduleShrink();
  }

  if (!!request.hasSpecialRetainRulesShrink()) {
    query["SpecialRetainRules"] = request.specialRetainRulesShrink();
  }

  if (!!request.hasState()) {
    query["State"] = request.state();
  }

  if (!!request.hasStorageRuleShrink()) {
    query["StorageRule"] = request.storageRuleShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateEnterpriseSnapshotPolicy"},
    {"version" , "2021-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateEnterpriseSnapshotPolicyResponse>();
}

/**
 * @summary Search for a enterprise-level snapshot policy.
 *
 * @param request UpdateEnterpriseSnapshotPolicyRequest
 * @return UpdateEnterpriseSnapshotPolicyResponse
 */
UpdateEnterpriseSnapshotPolicyResponse Client::updateEnterpriseSnapshotPolicy(const UpdateEnterpriseSnapshotPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateEnterpriseSnapshotPolicyWithOptions(request, runtime);
}

/**
 * @summary 更新解决方案实例属性
 *
 * @param request UpdateSolutionInstanceAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSolutionInstanceAttributeResponse
 */
UpdateSolutionInstanceAttributeResponse Client::updateSolutionInstanceAttributeWithOptions(const UpdateSolutionInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSolutionInstanceId()) {
    query["SolutionInstanceId"] = request.solutionInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateSolutionInstanceAttribute"},
    {"version" , "2021-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSolutionInstanceAttributeResponse>();
}

/**
 * @summary 更新解决方案实例属性
 *
 * @param request UpdateSolutionInstanceAttributeRequest
 * @return UpdateSolutionInstanceAttributeResponse
 */
UpdateSolutionInstanceAttributeResponse Client::updateSolutionInstanceAttribute(const UpdateSolutionInstanceAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSolutionInstanceAttributeWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Ebs20210730