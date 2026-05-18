#include <darabonba/Core.hpp>
#include <alibabacloud/DFS20180620.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::DFS20180620::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace DFS20180620
{

AlibabaCloud::DFS20180620::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("dfs", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 挂载VSC挂载点
 *
 * @description ****
 *
 * @param tmpReq AttachVscMountPointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachVscMountPointResponse
 */
AttachVscMountPointResponse Client::attachVscMountPointWithOptions(const AttachVscMountPointRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AttachVscMountPointShrinkRequest request = AttachVscMountPointShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInstanceIds()) {
    request.setInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInstanceIds(), "InstanceIds", "json"));
  }

  if (!!tmpReq.hasVscIds()) {
    request.setVscIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getVscIds(), "VscIds", "json"));
  }

  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasInputRegionId()) {
    query["InputRegionId"] = request.getInputRegionId();
  }

  if (!!request.hasInstanceIdsShrink()) {
    query["InstanceIds"] = request.getInstanceIdsShrink();
  }

  if (!!request.hasMountPointId()) {
    query["MountPointId"] = request.getMountPointId();
  }

  if (!!request.hasUseAssumeRoleChkServerPerm()) {
    query["UseAssumeRoleChkServerPerm"] = request.getUseAssumeRoleChkServerPerm();
  }

  if (!!request.hasVscIdsShrink()) {
    query["VscIds"] = request.getVscIdsShrink();
  }

  if (!!request.hasVscName()) {
    query["VscName"] = request.getVscName();
  }

  if (!!request.hasVscType()) {
    query["VscType"] = request.getVscType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachVscMountPoint"},
    {"version" , "2018-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachVscMountPointResponse>();
}

/**
 * @summary 挂载VSC挂载点
 *
 * @description ****
 *
 * @param request AttachVscMountPointRequest
 * @return AttachVscMountPointResponse
 */
AttachVscMountPointResponse Client::attachVscMountPoint(const AttachVscMountPointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachVscMountPointWithOptions(request, runtime);
}

/**
 * @summary 批量挂载VSC挂载点
 *
 * @param tmpReq AttachVscToMountPointsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachVscToMountPointsResponse
 */
AttachVscToMountPointsResponse Client::attachVscToMountPointsWithOptions(const AttachVscToMountPointsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AttachVscToMountPointsShrinkRequest request = AttachVscToMountPointsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAttachInfos()) {
    request.setAttachInfosShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAttachInfos(), "AttachInfos", "json"));
  }

  json query = {};
  if (!!request.hasAttachInfosShrink()) {
    query["AttachInfos"] = request.getAttachInfosShrink();
  }

  if (!!request.hasInputRegionId()) {
    query["InputRegionId"] = request.getInputRegionId();
  }

  if (!!request.hasUseAssumeRoleChkServerPerm()) {
    query["UseAssumeRoleChkServerPerm"] = request.getUseAssumeRoleChkServerPerm();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachVscToMountPoints"},
    {"version" , "2018-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachVscToMountPointsResponse>();
}

/**
 * @summary 批量挂载VSC挂载点
 *
 * @param request AttachVscToMountPointsRequest
 * @return AttachVscToMountPointsResponse
 */
AttachVscToMountPointsResponse Client::attachVscToMountPoints(const AttachVscToMountPointsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachVscToMountPointsWithOptions(request, runtime);
}

/**
 * @param request BindVscMountPointAliasRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindVscMountPointAliasResponse
 */
BindVscMountPointAliasResponse Client::bindVscMountPointAliasWithOptions(const BindVscMountPointAliasRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliasPrefix()) {
    query["AliasPrefix"] = request.getAliasPrefix();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasInputRegionId()) {
    query["InputRegionId"] = request.getInputRegionId();
  }

  if (!!request.hasMountPointId()) {
    query["MountPointId"] = request.getMountPointId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BindVscMountPointAlias"},
    {"version" , "2018-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindVscMountPointAliasResponse>();
}

/**
 * @param request BindVscMountPointAliasRequest
 * @return BindVscMountPointAliasResponse
 */
BindVscMountPointAliasResponse Client::bindVscMountPointAlias(const BindVscMountPointAliasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindVscMountPointAliasWithOptions(request, runtime);
}

/**
 * @param request CreateAccessGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAccessGroupResponse
 */
CreateAccessGroupResponse Client::createAccessGroupWithOptions(const CreateAccessGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessGroupName()) {
    query["AccessGroupName"] = request.getAccessGroupName();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasInputRegionId()) {
    query["InputRegionId"] = request.getInputRegionId();
  }

  if (!!request.hasNetworkType()) {
    query["NetworkType"] = request.getNetworkType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAccessGroup"},
    {"version" , "2018-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAccessGroupResponse>();
}

/**
 * @param request CreateAccessGroupRequest
 * @return CreateAccessGroupResponse
 */
CreateAccessGroupResponse Client::createAccessGroup(const CreateAccessGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAccessGroupWithOptions(request, runtime);
}

/**
 * @param request CreateAccessRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAccessRuleResponse
 */
CreateAccessRuleResponse Client::createAccessRuleWithOptions(const CreateAccessRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessGroupId()) {
    query["AccessGroupId"] = request.getAccessGroupId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasInputRegionId()) {
    query["InputRegionId"] = request.getInputRegionId();
  }

  if (!!request.hasNetworkSegment()) {
    query["NetworkSegment"] = request.getNetworkSegment();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.getPriority();
  }

  if (!!request.hasRWAccessType()) {
    query["RWAccessType"] = request.getRWAccessType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAccessRule"},
    {"version" , "2018-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAccessRuleResponse>();
}

/**
 * @param request CreateAccessRuleRequest
 * @return CreateAccessRuleResponse
 */
CreateAccessRuleResponse Client::createAccessRule(const CreateAccessRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAccessRuleWithOptions(request, runtime);
}

/**
 * @param request CreateFileSystemRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFileSystemResponse
 */
CreateFileSystemResponse Client::createFileSystemWithOptions(const CreateFileSystemRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDataRedundancyType()) {
    query["DataRedundancyType"] = request.getDataRedundancyType();
  }

  if (!!request.hasDedicatedClusterId()) {
    query["DedicatedClusterId"] = request.getDedicatedClusterId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasFileSystemName()) {
    query["FileSystemName"] = request.getFileSystemName();
  }

  if (!!request.hasInputRegionId()) {
    query["InputRegionId"] = request.getInputRegionId();
  }

  if (!!request.hasPartitionNumber()) {
    query["PartitionNumber"] = request.getPartitionNumber();
  }

  if (!!request.hasProtocolType()) {
    query["ProtocolType"] = request.getProtocolType();
  }

  if (!!request.hasProvisionedThroughputInMiBps()) {
    query["ProvisionedThroughputInMiBps"] = request.getProvisionedThroughputInMiBps();
  }

  if (!!request.hasSpaceCapacity()) {
    query["SpaceCapacity"] = request.getSpaceCapacity();
  }

  if (!!request.hasStorageSetName()) {
    query["StorageSetName"] = request.getStorageSetName();
  }

  if (!!request.hasStorageType()) {
    query["StorageType"] = request.getStorageType();
  }

  if (!!request.hasThroughputMode()) {
    query["ThroughputMode"] = request.getThroughputMode();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateFileSystem"},
    {"version" , "2018-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFileSystemResponse>();
}

/**
 * @param request CreateFileSystemRequest
 * @return CreateFileSystemResponse
 */
CreateFileSystemResponse Client::createFileSystem(const CreateFileSystemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createFileSystemWithOptions(request, runtime);
}

/**
 * @param request CreateMountPointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMountPointResponse
 */
CreateMountPointResponse Client::createMountPointWithOptions(const CreateMountPointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessGroupId()) {
    query["AccessGroupId"] = request.getAccessGroupId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasInputRegionId()) {
    query["InputRegionId"] = request.getInputRegionId();
  }

  if (!!request.hasNetworkType()) {
    query["NetworkType"] = request.getNetworkType();
  }

  if (!!request.hasUsePerformanceMode()) {
    query["UsePerformanceMode"] = request.getUsePerformanceMode();
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
    {"action" , "CreateMountPoint"},
    {"version" , "2018-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMountPointResponse>();
}

/**
 * @param request CreateMountPointRequest
 * @return CreateMountPointResponse
 */
CreateMountPointResponse Client::createMountPoint(const CreateMountPointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMountPointWithOptions(request, runtime);
}

/**
 * @summary CreateQosPolicy
 *
 * @param tmpReq CreateQosPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateQosPolicyResponse
 */
CreateQosPolicyResponse Client::createQosPolicyWithOptions(const CreateQosPolicyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateQosPolicyShrinkRequest request = CreateQosPolicyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFlowIds()) {
    request.setFlowIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFlowIds(), "FlowIds", "json"));
  }

  if (!!tmpReq.hasReqTags()) {
    request.setReqTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getReqTags(), "ReqTags", "json"));
  }

  if (!!tmpReq.hasZoneIds()) {
    request.setZoneIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getZoneIds(), "ZoneIds", "json"));
  }

  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasFederationId()) {
    query["FederationId"] = request.getFederationId();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasFlowIdsShrink()) {
    query["FlowIds"] = request.getFlowIdsShrink();
  }

  if (!!request.hasInputRegionId()) {
    query["InputRegionId"] = request.getInputRegionId();
  }

  if (!!request.hasMaxIOBandWidth()) {
    query["MaxIOBandWidth"] = request.getMaxIOBandWidth();
  }

  if (!!request.hasMaxIOps()) {
    query["MaxIOps"] = request.getMaxIOps();
  }

  if (!!request.hasMaxMetaQps()) {
    query["MaxMetaQps"] = request.getMaxMetaQps();
  }

  if (!!request.hasReqTagsShrink()) {
    query["ReqTags"] = request.getReqTagsShrink();
  }

  if (!!request.hasZoneIdsShrink()) {
    query["ZoneIds"] = request.getZoneIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateQosPolicy"},
    {"version" , "2018-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateQosPolicyResponse>();
}

/**
 * @summary CreateQosPolicy
 *
 * @param request CreateQosPolicyRequest
 * @return CreateQosPolicyResponse
 */
CreateQosPolicyResponse Client::createQosPolicy(const CreateQosPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createQosPolicyWithOptions(request, runtime);
}

/**
 * @summary 创建 ugo
 *
 * @param tmpReq CreateUserGroupsMappingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUserGroupsMappingResponse
 */
CreateUserGroupsMappingResponse Client::createUserGroupsMappingWithOptions(const CreateUserGroupsMappingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateUserGroupsMappingShrinkRequest request = CreateUserGroupsMappingShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasGroupNames()) {
    request.setGroupNamesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getGroupNames(), "GroupNames", "json"));
  }

  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateUserGroupsMapping"},
    {"version" , "2018-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateUserGroupsMappingResponse>();
}

/**
 * @summary 创建 ugo
 *
 * @param request CreateUserGroupsMappingRequest
 * @return CreateUserGroupsMappingResponse
 */
CreateUserGroupsMappingResponse Client::createUserGroupsMapping(const CreateUserGroupsMappingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createUserGroupsMappingWithOptions(request, runtime);
}

/**
 * @param tmpReq CreateVscMountPointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVscMountPointResponse
 */
CreateVscMountPointResponse Client::createVscMountPointWithOptions(const CreateVscMountPointRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateVscMountPointShrinkRequest request = CreateVscMountPointShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInstanceIds()) {
    request.setInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInstanceIds(), "InstanceIds", "json"));
  }

  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasInputRegionId()) {
    query["InputRegionId"] = request.getInputRegionId();
  }

  if (!!request.hasInstanceIdsShrink()) {
    query["InstanceIds"] = request.getInstanceIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateVscMountPoint"},
    {"version" , "2018-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateVscMountPointResponse>();
}

/**
 * @param request CreateVscMountPointRequest
 * @return CreateVscMountPointResponse
 */
CreateVscMountPointResponse Client::createVscMountPoint(const CreateVscMountPointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createVscMountPointWithOptions(request, runtime);
}

/**
 * @param request DeleteAccessGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAccessGroupResponse
 */
DeleteAccessGroupResponse Client::deleteAccessGroupWithOptions(const DeleteAccessGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessGroupId()) {
    query["AccessGroupId"] = request.getAccessGroupId();
  }

  if (!!request.hasInputRegionId()) {
    query["InputRegionId"] = request.getInputRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAccessGroup"},
    {"version" , "2018-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAccessGroupResponse>();
}

/**
 * @param request DeleteAccessGroupRequest
 * @return DeleteAccessGroupResponse
 */
DeleteAccessGroupResponse Client::deleteAccessGroup(const DeleteAccessGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAccessGroupWithOptions(request, runtime);
}

/**
 * @param request DeleteAccessRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAccessRuleResponse
 */
DeleteAccessRuleResponse Client::deleteAccessRuleWithOptions(const DeleteAccessRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessGroupId()) {
    query["AccessGroupId"] = request.getAccessGroupId();
  }

  if (!!request.hasAccessRuleId()) {
    query["AccessRuleId"] = request.getAccessRuleId();
  }

  if (!!request.hasInputRegionId()) {
    query["InputRegionId"] = request.getInputRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAccessRule"},
    {"version" , "2018-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAccessRuleResponse>();
}

/**
 * @param request DeleteAccessRuleRequest
 * @return DeleteAccessRuleResponse
 */
DeleteAccessRuleResponse Client::deleteAccessRule(const DeleteAccessRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAccessRuleWithOptions(request, runtime);
}

/**
 * @param request DeleteFileSystemRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFileSystemResponse
 */
DeleteFileSystemResponse Client::deleteFileSystemWithOptions(const DeleteFileSystemRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasInputRegionId()) {
    query["InputRegionId"] = request.getInputRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteFileSystem"},
    {"version" , "2018-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFileSystemResponse>();
}

/**
 * @param request DeleteFileSystemRequest
 * @return DeleteFileSystemResponse
 */
DeleteFileSystemResponse Client::deleteFileSystem(const DeleteFileSystemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteFileSystemWithOptions(request, runtime);
}

/**
 * @param request DeleteMountPointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMountPointResponse
 */
DeleteMountPointResponse Client::deleteMountPointWithOptions(const DeleteMountPointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasInputRegionId()) {
    query["InputRegionId"] = request.getInputRegionId();
  }

  if (!!request.hasMountPointId()) {
    query["MountPointId"] = request.getMountPointId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMountPoint"},
    {"version" , "2018-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMountPointResponse>();
}

/**
 * @param request DeleteMountPointRequest
 * @return DeleteMountPointResponse
 */
DeleteMountPointResponse Client::deleteMountPoint(const DeleteMountPointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMountPointWithOptions(request, runtime);
}

/**
 * @summary DeleteQosPolicy
 *
 * @param request DeleteQosPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteQosPolicyResponse
 */
DeleteQosPolicyResponse Client::deleteQosPolicyWithOptions(const DeleteQosPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFederationId()) {
    query["FederationId"] = request.getFederationId();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasInputRegionId()) {
    query["InputRegionId"] = request.getInputRegionId();
  }

  if (!!request.hasQosPolicyId()) {
    query["QosPolicyId"] = request.getQosPolicyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteQosPolicy"},
    {"version" , "2018-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteQosPolicyResponse>();
}

/**
 * @summary DeleteQosPolicy
 *
 * @param request DeleteQosPolicyRequest
 * @return DeleteQosPolicyResponse
 */
DeleteQosPolicyResponse Client::deleteQosPolicy(const DeleteQosPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteQosPolicyWithOptions(request, runtime);
}

/**
 * @summary 删除 ugo
 *
 * @param tmpReq DeleteUserGroupsMappingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUserGroupsMappingResponse
 */
DeleteUserGroupsMappingResponse Client::deleteUserGroupsMappingWithOptions(const DeleteUserGroupsMappingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteUserGroupsMappingShrinkRequest request = DeleteUserGroupsMappingShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasGroupNames()) {
    request.setGroupNamesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getGroupNames(), "GroupNames", "json"));
  }

  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteUserGroupsMapping"},
    {"version" , "2018-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteUserGroupsMappingResponse>();
}

/**
 * @summary 删除 ugo
 *
 * @param request DeleteUserGroupsMappingRequest
 * @return DeleteUserGroupsMappingResponse
 */
DeleteUserGroupsMappingResponse Client::deleteUserGroupsMapping(const DeleteUserGroupsMappingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteUserGroupsMappingWithOptions(request, runtime);
}

/**
 * @param request DeleteVscMountPointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteVscMountPointResponse
 */
DeleteVscMountPointResponse Client::deleteVscMountPointWithOptions(const DeleteVscMountPointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasInputRegionId()) {
    query["InputRegionId"] = request.getInputRegionId();
  }

  if (!!request.hasMountPointId()) {
    query["MountPointId"] = request.getMountPointId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteVscMountPoint"},
    {"version" , "2018-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteVscMountPointResponse>();
}

/**
 * @param request DeleteVscMountPointRequest
 * @return DeleteVscMountPointResponse
 */
DeleteVscMountPointResponse Client::deleteVscMountPoint(const DeleteVscMountPointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteVscMountPointWithOptions(request, runtime);
}

/**
 * @summary 批量挂载VSC挂载点
 *
 * @param tmpReq DescribeMountPointsVscAttachInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMountPointsVscAttachInfoResponse
 */
DescribeMountPointsVscAttachInfoResponse Client::describeMountPointsVscAttachInfoWithOptions(const DescribeMountPointsVscAttachInfoRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeMountPointsVscAttachInfoShrinkRequest request = DescribeMountPointsVscAttachInfoShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasQueryInfos()) {
    request.setQueryInfosShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getQueryInfos(), "QueryInfos", "json"));
  }

  json query = {};
  if (!!request.hasInputRegionId()) {
    query["InputRegionId"] = request.getInputRegionId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasQueryInfosShrink()) {
    query["QueryInfos"] = request.getQueryInfosShrink();
  }

  if (!!request.hasUseAssumeRoleChkServerPerm()) {
    query["UseAssumeRoleChkServerPerm"] = request.getUseAssumeRoleChkServerPerm();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMountPointsVscAttachInfo"},
    {"version" , "2018-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMountPointsVscAttachInfoResponse>();
}

/**
 * @summary 批量挂载VSC挂载点
 *
 * @param request DescribeMountPointsVscAttachInfoRequest
 * @return DescribeMountPointsVscAttachInfoResponse
 */
DescribeMountPointsVscAttachInfoResponse Client::describeMountPointsVscAttachInfo(const DescribeMountPointsVscAttachInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMountPointsVscAttachInfoWithOptions(request, runtime);
}

/**
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

  if (!!request.hasInputRegionId()) {
    query["InputRegionId"] = request.getInputRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRegions"},
    {"version" , "2018-06-20"},
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
 * @summary 查询VSC挂载信息
 *
 * @param request DescribeVscMountPointsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVscMountPointsResponse
 */
DescribeVscMountPointsResponse Client::describeVscMountPointsWithOptions(const DescribeVscMountPointsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasInputRegionId()) {
    query["InputRegionId"] = request.getInputRegionId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMountPointId()) {
    query["MountPointId"] = request.getMountPointId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasVscId()) {
    query["VscId"] = request.getVscId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVscMountPoints"},
    {"version" , "2018-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVscMountPointsResponse>();
}

/**
 * @summary 查询VSC挂载信息
 *
 * @param request DescribeVscMountPointsRequest
 * @return DescribeVscMountPointsResponse
 */
DescribeVscMountPointsResponse Client::describeVscMountPoints(const DescribeVscMountPointsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVscMountPointsWithOptions(request, runtime);
}

/**
 * @summary 批量卸载VSC 挂载点
 *
 * @param tmpReq DetachVscFromMountPointsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachVscFromMountPointsResponse
 */
DetachVscFromMountPointsResponse Client::detachVscFromMountPointsWithOptions(const DetachVscFromMountPointsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DetachVscFromMountPointsShrinkRequest request = DetachVscFromMountPointsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDetachInfos()) {
    request.setDetachInfosShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDetachInfos(), "DetachInfos", "json"));
  }

  json query = {};
  if (!!request.hasDetachInfosShrink()) {
    query["DetachInfos"] = request.getDetachInfosShrink();
  }

  if (!!request.hasInputRegionId()) {
    query["InputRegionId"] = request.getInputRegionId();
  }

  if (!!request.hasUseAssumeRoleChkServerPerm()) {
    query["UseAssumeRoleChkServerPerm"] = request.getUseAssumeRoleChkServerPerm();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachVscFromMountPoints"},
    {"version" , "2018-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachVscFromMountPointsResponse>();
}

/**
 * @summary 批量卸载VSC 挂载点
 *
 * @param request DetachVscFromMountPointsRequest
 * @return DetachVscFromMountPointsResponse
 */
DetachVscFromMountPointsResponse Client::detachVscFromMountPoints(const DetachVscFromMountPointsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachVscFromMountPointsWithOptions(request, runtime);
}

/**
 * @param tmpReq DetachVscMountPointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachVscMountPointResponse
 */
DetachVscMountPointResponse Client::detachVscMountPointWithOptions(const DetachVscMountPointRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DetachVscMountPointShrinkRequest request = DetachVscMountPointShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInstanceIds()) {
    request.setInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInstanceIds(), "InstanceIds", "json"));
  }

  if (!!tmpReq.hasVscIds()) {
    request.setVscIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getVscIds(), "VscIds", "json"));
  }

  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasInputRegionId()) {
    query["InputRegionId"] = request.getInputRegionId();
  }

  if (!!request.hasInstanceIdsShrink()) {
    query["InstanceIds"] = request.getInstanceIdsShrink();
  }

  if (!!request.hasMountPointId()) {
    query["MountPointId"] = request.getMountPointId();
  }

  if (!!request.hasUseAssumeRoleChkServerPerm()) {
    query["UseAssumeRoleChkServerPerm"] = request.getUseAssumeRoleChkServerPerm();
  }

  if (!!request.hasVscIdsShrink()) {
    query["VscIds"] = request.getVscIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachVscMountPoint"},
    {"version" , "2018-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachVscMountPointResponse>();
}

/**
 * @param request DetachVscMountPointRequest
 * @return DetachVscMountPointResponse
 */
DetachVscMountPointResponse Client::detachVscMountPoint(const DetachVscMountPointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachVscMountPointWithOptions(request, runtime);
}

/**
 * @param request GetAccessGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAccessGroupResponse
 */
GetAccessGroupResponse Client::getAccessGroupWithOptions(const GetAccessGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessGroupId()) {
    query["AccessGroupId"] = request.getAccessGroupId();
  }

  if (!!request.hasInputRegionId()) {
    query["InputRegionId"] = request.getInputRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAccessGroup"},
    {"version" , "2018-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAccessGroupResponse>();
}

/**
 * @param request GetAccessGroupRequest
 * @return GetAccessGroupResponse
 */
GetAccessGroupResponse Client::getAccessGroup(const GetAccessGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAccessGroupWithOptions(request, runtime);
}

/**
 * @param request GetAccessRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAccessRuleResponse
 */
GetAccessRuleResponse Client::getAccessRuleWithOptions(const GetAccessRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessGroupId()) {
    query["AccessGroupId"] = request.getAccessGroupId();
  }

  if (!!request.hasAccessRuleId()) {
    query["AccessRuleId"] = request.getAccessRuleId();
  }

  if (!!request.hasInputRegionId()) {
    query["InputRegionId"] = request.getInputRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAccessRule"},
    {"version" , "2018-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAccessRuleResponse>();
}

/**
 * @param request GetAccessRuleRequest
 * @return GetAccessRuleResponse
 */
GetAccessRuleResponse Client::getAccessRule(const GetAccessRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAccessRuleWithOptions(request, runtime);
}

/**
 * @param request GetFileSystemRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFileSystemResponse
 */
GetFileSystemResponse Client::getFileSystemWithOptions(const GetFileSystemRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasInputRegionId()) {
    query["InputRegionId"] = request.getInputRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetFileSystem"},
    {"version" , "2018-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFileSystemResponse>();
}

/**
 * @param request GetFileSystemRequest
 * @return GetFileSystemResponse
 */
GetFileSystemResponse Client::getFileSystem(const GetFileSystemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getFileSystemWithOptions(request, runtime);
}

/**
 * @param request GetMountPointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMountPointResponse
 */
GetMountPointResponse Client::getMountPointWithOptions(const GetMountPointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasInputRegionId()) {
    query["InputRegionId"] = request.getInputRegionId();
  }

  if (!!request.hasMountPointId()) {
    query["MountPointId"] = request.getMountPointId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMountPoint"},
    {"version" , "2018-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMountPointResponse>();
}

/**
 * @param request GetMountPointRequest
 * @return GetMountPointResponse
 */
GetMountPointResponse Client::getMountPoint(const GetMountPointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMountPointWithOptions(request, runtime);
}

/**
 * @param request GetRegionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRegionResponse
 */
GetRegionResponse Client::getRegionWithOptions(const GetRegionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInputRegionId()) {
    query["InputRegionId"] = request.getInputRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRegion"},
    {"version" , "2018-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRegionResponse>();
}

/**
 * @param request GetRegionRequest
 * @return GetRegionResponse
 */
GetRegionResponse Client::getRegion(const GetRegionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRegionWithOptions(request, runtime);
}

/**
 * @param request ListAccessGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAccessGroupsResponse
 */
ListAccessGroupsResponse Client::listAccessGroupsWithOptions(const ListAccessGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInputRegionId()) {
    query["InputRegionId"] = request.getInputRegionId();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.getLimit();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
  }

  if (!!request.hasStartOffset()) {
    query["StartOffset"] = request.getStartOffset();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAccessGroups"},
    {"version" , "2018-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAccessGroupsResponse>();
}

/**
 * @param request ListAccessGroupsRequest
 * @return ListAccessGroupsResponse
 */
ListAccessGroupsResponse Client::listAccessGroups(const ListAccessGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAccessGroupsWithOptions(request, runtime);
}

/**
 * @param request ListAccessRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAccessRulesResponse
 */
ListAccessRulesResponse Client::listAccessRulesWithOptions(const ListAccessRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessGroupId()) {
    query["AccessGroupId"] = request.getAccessGroupId();
  }

  if (!!request.hasInputRegionId()) {
    query["InputRegionId"] = request.getInputRegionId();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.getLimit();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
  }

  if (!!request.hasStartOffset()) {
    query["StartOffset"] = request.getStartOffset();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAccessRules"},
    {"version" , "2018-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAccessRulesResponse>();
}

/**
 * @param request ListAccessRulesRequest
 * @return ListAccessRulesResponse
 */
ListAccessRulesResponse Client::listAccessRules(const ListAccessRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAccessRulesWithOptions(request, runtime);
}

/**
 * @summary 查询Federation
 *
 * @param request ListFederationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFederationsResponse
 */
ListFederationsResponse Client::listFederationsWithOptions(const ListFederationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFederationId()) {
    query["FederationId"] = request.getFederationId();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasInputRegionId()) {
    query["InputRegionId"] = request.getInputRegionId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListFederations"},
    {"version" , "2018-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFederationsResponse>();
}

/**
 * @summary 查询Federation
 *
 * @param request ListFederationsRequest
 * @return ListFederationsResponse
 */
ListFederationsResponse Client::listFederations(const ListFederationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listFederationsWithOptions(request, runtime);
}

/**
 * @param request ListFileSystemsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFileSystemsResponse
 */
ListFileSystemsResponse Client::listFileSystemsWithOptions(const ListFileSystemsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInputRegionId()) {
    query["InputRegionId"] = request.getInputRegionId();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.getLimit();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
  }

  if (!!request.hasStartOffset()) {
    query["StartOffset"] = request.getStartOffset();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListFileSystems"},
    {"version" , "2018-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFileSystemsResponse>();
}

/**
 * @param request ListFileSystemsRequest
 * @return ListFileSystemsResponse
 */
ListFileSystemsResponse Client::listFileSystems(const ListFileSystemsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listFileSystemsWithOptions(request, runtime);
}

/**
 * @param request ListMountPointsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMountPointsResponse
 */
ListMountPointsResponse Client::listMountPointsWithOptions(const ListMountPointsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasInputRegionId()) {
    query["InputRegionId"] = request.getInputRegionId();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.getLimit();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
  }

  if (!!request.hasStartOffset()) {
    query["StartOffset"] = request.getStartOffset();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMountPoints"},
    {"version" , "2018-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMountPointsResponse>();
}

/**
 * @param request ListMountPointsRequest
 * @return ListMountPointsResponse
 */
ListMountPointsResponse Client::listMountPoints(const ListMountPointsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMountPointsWithOptions(request, runtime);
}

/**
 * @summary 查询QosPolicies
 *
 * @param request ListQosPoliciesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListQosPoliciesResponse
 */
ListQosPoliciesResponse Client::listQosPoliciesWithOptions(const ListQosPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFederationId()) {
    query["FederationId"] = request.getFederationId();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasInputRegionId()) {
    query["InputRegionId"] = request.getInputRegionId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListQosPolicies"},
    {"version" , "2018-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListQosPoliciesResponse>();
}

/**
 * @summary 查询QosPolicies
 *
 * @param request ListQosPoliciesRequest
 * @return ListQosPoliciesResponse
 */
ListQosPoliciesResponse Client::listQosPolicies(const ListQosPoliciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listQosPoliciesWithOptions(request, runtime);
}

/**
 * @summary list ugm
 *
 * @param request ListUserGroupsMappingsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserGroupsMappingsResponse
 */
ListUserGroupsMappingsResponse Client::listUserGroupsMappingsWithOptions(const ListUserGroupsMappingsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilesystemId()) {
    query["FilesystemId"] = request.getFilesystemId();
  }

  if (!!request.hasInputRegionId()) {
    query["InputRegionId"] = request.getInputRegionId();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.getLimit();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUserGroupsMappings"},
    {"version" , "2018-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUserGroupsMappingsResponse>();
}

/**
 * @summary list ugm
 *
 * @param request ListUserGroupsMappingsRequest
 * @return ListUserGroupsMappingsResponse
 */
ListUserGroupsMappingsResponse Client::listUserGroupsMappings(const ListUserGroupsMappingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUserGroupsMappingsWithOptions(request, runtime);
}

/**
 * @param request ModifyAccessGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAccessGroupResponse
 */
ModifyAccessGroupResponse Client::modifyAccessGroupWithOptions(const ModifyAccessGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessGroupId()) {
    query["AccessGroupId"] = request.getAccessGroupId();
  }

  if (!!request.hasAccessGroupName()) {
    query["AccessGroupName"] = request.getAccessGroupName();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasInputRegionId()) {
    query["InputRegionId"] = request.getInputRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAccessGroup"},
    {"version" , "2018-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAccessGroupResponse>();
}

/**
 * @param request ModifyAccessGroupRequest
 * @return ModifyAccessGroupResponse
 */
ModifyAccessGroupResponse Client::modifyAccessGroup(const ModifyAccessGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAccessGroupWithOptions(request, runtime);
}

/**
 * @param request ModifyAccessRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAccessRuleResponse
 */
ModifyAccessRuleResponse Client::modifyAccessRuleWithOptions(const ModifyAccessRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessGroupId()) {
    query["AccessGroupId"] = request.getAccessGroupId();
  }

  if (!!request.hasAccessRuleId()) {
    query["AccessRuleId"] = request.getAccessRuleId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasInputRegionId()) {
    query["InputRegionId"] = request.getInputRegionId();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.getPriority();
  }

  if (!!request.hasRWAccessType()) {
    query["RWAccessType"] = request.getRWAccessType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAccessRule"},
    {"version" , "2018-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAccessRuleResponse>();
}

/**
 * @param request ModifyAccessRuleRequest
 * @return ModifyAccessRuleResponse
 */
ModifyAccessRuleResponse Client::modifyAccessRule(const ModifyAccessRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAccessRuleWithOptions(request, runtime);
}

/**
 * @param request ModifyFileSystemRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyFileSystemResponse
 */
ModifyFileSystemResponse Client::modifyFileSystemWithOptions(const ModifyFileSystemRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasFileSystemName()) {
    query["FileSystemName"] = request.getFileSystemName();
  }

  if (!!request.hasInputRegionId()) {
    query["InputRegionId"] = request.getInputRegionId();
  }

  if (!!request.hasProvisionedThroughputInMiBps()) {
    query["ProvisionedThroughputInMiBps"] = request.getProvisionedThroughputInMiBps();
  }

  if (!!request.hasSpaceCapacity()) {
    query["SpaceCapacity"] = request.getSpaceCapacity();
  }

  if (!!request.hasThroughputMode()) {
    query["ThroughputMode"] = request.getThroughputMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyFileSystem"},
    {"version" , "2018-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyFileSystemResponse>();
}

/**
 * @param request ModifyFileSystemRequest
 * @return ModifyFileSystemResponse
 */
ModifyFileSystemResponse Client::modifyFileSystem(const ModifyFileSystemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyFileSystemWithOptions(request, runtime);
}

/**
 * @param request ModifyMountPointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyMountPointResponse
 */
ModifyMountPointResponse Client::modifyMountPointWithOptions(const ModifyMountPointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessGroupId()) {
    query["AccessGroupId"] = request.getAccessGroupId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasInputRegionId()) {
    query["InputRegionId"] = request.getInputRegionId();
  }

  if (!!request.hasMountPointId()) {
    query["MountPointId"] = request.getMountPointId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyMountPoint"},
    {"version" , "2018-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyMountPointResponse>();
}

/**
 * @param request ModifyMountPointRequest
 * @return ModifyMountPointResponse
 */
ModifyMountPointResponse Client::modifyMountPoint(const ModifyMountPointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyMountPointWithOptions(request, runtime);
}

/**
 * @summary ModifyQosPolicy
 *
 * @param request ModifyQosPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyQosPolicyResponse
 */
ModifyQosPolicyResponse Client::modifyQosPolicyWithOptions(const ModifyQosPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasFederationId()) {
    query["FederationId"] = request.getFederationId();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasInputRegionId()) {
    query["InputRegionId"] = request.getInputRegionId();
  }

  if (!!request.hasMaxIOBandWidth()) {
    query["MaxIOBandWidth"] = request.getMaxIOBandWidth();
  }

  if (!!request.hasMaxIOps()) {
    query["MaxIOps"] = request.getMaxIOps();
  }

  if (!!request.hasMaxMetaQps()) {
    query["MaxMetaQps"] = request.getMaxMetaQps();
  }

  if (!!request.hasQosPolicyId()) {
    query["QosPolicyId"] = request.getQosPolicyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyQosPolicy"},
    {"version" , "2018-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyQosPolicyResponse>();
}

/**
 * @summary ModifyQosPolicy
 *
 * @param request ModifyQosPolicyRequest
 * @return ModifyQosPolicyResponse
 */
ModifyQosPolicyResponse Client::modifyQosPolicy(const ModifyQosPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyQosPolicyWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace DFS20180620