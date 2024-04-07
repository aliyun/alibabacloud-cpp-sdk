// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/dfs20180620.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_DFS20180620;

Alibabacloud_DFS20180620::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("dfs"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_DFS20180620::Client::getEndpoint(shared_ptr<string> productId,
                                                     shared_ptr<string> regionId,
                                                     shared_ptr<string> endpointRule,
                                                     shared_ptr<string> network,
                                                     shared_ptr<string> suffix,
                                                     shared_ptr<map<string, string>> endpointMap,
                                                     shared_ptr<string> endpoint) {
  if (!Darabonba_Util::Client::empty(endpoint)) {
    return *endpoint;
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(endpointMap) && !Darabonba_Util::Client::empty(make_shared<string>((*endpointMap)[regionId]))) {
    return (*endpointMap)[regionId];
  }
  return Alibabacloud_EndpointUtil::Client::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

AttachVscMountPointResponse Alibabacloud_DFS20180620::Client::attachVscMountPointWithOptions(shared_ptr<AttachVscMountPointRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AttachVscMountPointShrinkRequest> request = make_shared<AttachVscMountPointShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->instanceIds)) {
    request->instanceIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->instanceIds, make_shared<string>("InstanceIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->vscIds)) {
    request->vscIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->vscIds, make_shared<string>("VscIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileSystemId)) {
    query->insert(pair<string, string>("FileSystemId", *request->fileSystemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputRegionId)) {
    query->insert(pair<string, string>("InputRegionId", *request->inputRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIdsShrink)) {
    query->insert(pair<string, string>("InstanceIds", *request->instanceIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mountPointId)) {
    query->insert(pair<string, string>("MountPointId", *request->mountPointId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vscIdsShrink)) {
    query->insert(pair<string, string>("VscIds", *request->vscIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vscType)) {
    query->insert(pair<string, string>("VscType", *request->vscType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AttachVscMountPoint"))},
    {"version", boost::any(string("2018-06-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AttachVscMountPointResponse(callApi(params, req, runtime));
}

AttachVscMountPointResponse Alibabacloud_DFS20180620::Client::attachVscMountPoint(shared_ptr<AttachVscMountPointRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachVscMountPointWithOptions(request, runtime);
}

BindVscMountPointAliasResponse Alibabacloud_DFS20180620::Client::bindVscMountPointAliasWithOptions(shared_ptr<BindVscMountPointAliasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliasPrefix)) {
    query->insert(pair<string, string>("AliasPrefix", *request->aliasPrefix));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileSystemId)) {
    query->insert(pair<string, string>("FileSystemId", *request->fileSystemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputRegionId)) {
    query->insert(pair<string, string>("InputRegionId", *request->inputRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mountPointId)) {
    query->insert(pair<string, string>("MountPointId", *request->mountPointId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BindVscMountPointAlias"))},
    {"version", boost::any(string("2018-06-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BindVscMountPointAliasResponse(callApi(params, req, runtime));
}

BindVscMountPointAliasResponse Alibabacloud_DFS20180620::Client::bindVscMountPointAlias(shared_ptr<BindVscMountPointAliasRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindVscMountPointAliasWithOptions(request, runtime);
}

CreateAccessGroupResponse Alibabacloud_DFS20180620::Client::createAccessGroupWithOptions(shared_ptr<CreateAccessGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessGroupName)) {
    query->insert(pair<string, string>("AccessGroupName", *request->accessGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputRegionId)) {
    query->insert(pair<string, string>("InputRegionId", *request->inputRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkType)) {
    query->insert(pair<string, string>("NetworkType", *request->networkType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAccessGroup"))},
    {"version", boost::any(string("2018-06-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAccessGroupResponse(callApi(params, req, runtime));
}

CreateAccessGroupResponse Alibabacloud_DFS20180620::Client::createAccessGroup(shared_ptr<CreateAccessGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAccessGroupWithOptions(request, runtime);
}

CreateAccessRuleResponse Alibabacloud_DFS20180620::Client::createAccessRuleWithOptions(shared_ptr<CreateAccessRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessGroupId)) {
    query->insert(pair<string, string>("AccessGroupId", *request->accessGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputRegionId)) {
    query->insert(pair<string, string>("InputRegionId", *request->inputRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkSegment)) {
    query->insert(pair<string, string>("NetworkSegment", *request->networkSegment));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->priority)) {
    query->insert(pair<string, long>("Priority", *request->priority));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->RWAccessType)) {
    query->insert(pair<string, string>("RWAccessType", *request->RWAccessType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAccessRule"))},
    {"version", boost::any(string("2018-06-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAccessRuleResponse(callApi(params, req, runtime));
}

CreateAccessRuleResponse Alibabacloud_DFS20180620::Client::createAccessRule(shared_ptr<CreateAccessRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAccessRuleWithOptions(request, runtime);
}

CreateFileSystemResponse Alibabacloud_DFS20180620::Client::createFileSystemWithOptions(shared_ptr<CreateFileSystemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataRedundancyType)) {
    query->insert(pair<string, string>("DataRedundancyType", *request->dataRedundancyType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileSystemName)) {
    query->insert(pair<string, string>("FileSystemName", *request->fileSystemName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputRegionId)) {
    query->insert(pair<string, string>("InputRegionId", *request->inputRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->partitionNumber)) {
    query->insert(pair<string, long>("PartitionNumber", *request->partitionNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->protocolType)) {
    query->insert(pair<string, string>("ProtocolType", *request->protocolType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->provisionedThroughputInMiBps)) {
    query->insert(pair<string, long>("ProvisionedThroughputInMiBps", *request->provisionedThroughputInMiBps));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->spaceCapacity)) {
    query->insert(pair<string, long>("SpaceCapacity", *request->spaceCapacity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storageSetName)) {
    query->insert(pair<string, string>("StorageSetName", *request->storageSetName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storageType)) {
    query->insert(pair<string, string>("StorageType", *request->storageType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->throughputMode)) {
    query->insert(pair<string, string>("ThroughputMode", *request->throughputMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zoneId)) {
    query->insert(pair<string, string>("ZoneId", *request->zoneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateFileSystem"))},
    {"version", boost::any(string("2018-06-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateFileSystemResponse(callApi(params, req, runtime));
}

CreateFileSystemResponse Alibabacloud_DFS20180620::Client::createFileSystem(shared_ptr<CreateFileSystemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createFileSystemWithOptions(request, runtime);
}

CreateMountPointResponse Alibabacloud_DFS20180620::Client::createMountPointWithOptions(shared_ptr<CreateMountPointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessGroupId)) {
    query->insert(pair<string, string>("AccessGroupId", *request->accessGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileSystemId)) {
    query->insert(pair<string, string>("FileSystemId", *request->fileSystemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputRegionId)) {
    query->insert(pair<string, string>("InputRegionId", *request->inputRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkType)) {
    query->insert(pair<string, string>("NetworkType", *request->networkType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchId)) {
    query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    query->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMountPoint"))},
    {"version", boost::any(string("2018-06-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateMountPointResponse(callApi(params, req, runtime));
}

CreateMountPointResponse Alibabacloud_DFS20180620::Client::createMountPoint(shared_ptr<CreateMountPointRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMountPointWithOptions(request, runtime);
}

CreateUserGroupsMappingResponse Alibabacloud_DFS20180620::Client::createUserGroupsMappingWithOptions(shared_ptr<CreateUserGroupsMappingRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateUserGroupsMappingShrinkRequest> request = make_shared<CreateUserGroupsMappingShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->groupNames)) {
    request->groupNamesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->groupNames, make_shared<string>("GroupNames"), make_shared<string>("json")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateUserGroupsMapping"))},
    {"version", boost::any(string("2018-06-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateUserGroupsMappingResponse(callApi(params, req, runtime));
}

CreateUserGroupsMappingResponse Alibabacloud_DFS20180620::Client::createUserGroupsMapping(shared_ptr<CreateUserGroupsMappingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createUserGroupsMappingWithOptions(request, runtime);
}

CreateVscMountPointResponse Alibabacloud_DFS20180620::Client::createVscMountPointWithOptions(shared_ptr<CreateVscMountPointRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateVscMountPointShrinkRequest> request = make_shared<CreateVscMountPointShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->instanceIds)) {
    request->instanceIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->instanceIds, make_shared<string>("InstanceIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileSystemId)) {
    query->insert(pair<string, string>("FileSystemId", *request->fileSystemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputRegionId)) {
    query->insert(pair<string, string>("InputRegionId", *request->inputRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIdsShrink)) {
    query->insert(pair<string, string>("InstanceIds", *request->instanceIdsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateVscMountPoint"))},
    {"version", boost::any(string("2018-06-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateVscMountPointResponse(callApi(params, req, runtime));
}

CreateVscMountPointResponse Alibabacloud_DFS20180620::Client::createVscMountPoint(shared_ptr<CreateVscMountPointRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createVscMountPointWithOptions(request, runtime);
}

DeleteAccessGroupResponse Alibabacloud_DFS20180620::Client::deleteAccessGroupWithOptions(shared_ptr<DeleteAccessGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessGroupId)) {
    query->insert(pair<string, string>("AccessGroupId", *request->accessGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputRegionId)) {
    query->insert(pair<string, string>("InputRegionId", *request->inputRegionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAccessGroup"))},
    {"version", boost::any(string("2018-06-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAccessGroupResponse(callApi(params, req, runtime));
}

DeleteAccessGroupResponse Alibabacloud_DFS20180620::Client::deleteAccessGroup(shared_ptr<DeleteAccessGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAccessGroupWithOptions(request, runtime);
}

DeleteAccessRuleResponse Alibabacloud_DFS20180620::Client::deleteAccessRuleWithOptions(shared_ptr<DeleteAccessRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessGroupId)) {
    query->insert(pair<string, string>("AccessGroupId", *request->accessGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accessRuleId)) {
    query->insert(pair<string, string>("AccessRuleId", *request->accessRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputRegionId)) {
    query->insert(pair<string, string>("InputRegionId", *request->inputRegionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAccessRule"))},
    {"version", boost::any(string("2018-06-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAccessRuleResponse(callApi(params, req, runtime));
}

DeleteAccessRuleResponse Alibabacloud_DFS20180620::Client::deleteAccessRule(shared_ptr<DeleteAccessRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAccessRuleWithOptions(request, runtime);
}

DeleteFileSystemResponse Alibabacloud_DFS20180620::Client::deleteFileSystemWithOptions(shared_ptr<DeleteFileSystemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fileSystemId)) {
    query->insert(pair<string, string>("FileSystemId", *request->fileSystemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputRegionId)) {
    query->insert(pair<string, string>("InputRegionId", *request->inputRegionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteFileSystem"))},
    {"version", boost::any(string("2018-06-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteFileSystemResponse(callApi(params, req, runtime));
}

DeleteFileSystemResponse Alibabacloud_DFS20180620::Client::deleteFileSystem(shared_ptr<DeleteFileSystemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteFileSystemWithOptions(request, runtime);
}

DeleteMountPointResponse Alibabacloud_DFS20180620::Client::deleteMountPointWithOptions(shared_ptr<DeleteMountPointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fileSystemId)) {
    query->insert(pair<string, string>("FileSystemId", *request->fileSystemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputRegionId)) {
    query->insert(pair<string, string>("InputRegionId", *request->inputRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mountPointId)) {
    query->insert(pair<string, string>("MountPointId", *request->mountPointId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteMountPoint"))},
    {"version", boost::any(string("2018-06-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteMountPointResponse(callApi(params, req, runtime));
}

DeleteMountPointResponse Alibabacloud_DFS20180620::Client::deleteMountPoint(shared_ptr<DeleteMountPointRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMountPointWithOptions(request, runtime);
}

DeleteUserGroupsMappingResponse Alibabacloud_DFS20180620::Client::deleteUserGroupsMappingWithOptions(shared_ptr<DeleteUserGroupsMappingRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteUserGroupsMappingShrinkRequest> request = make_shared<DeleteUserGroupsMappingShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->groupNames)) {
    request->groupNamesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->groupNames, make_shared<string>("GroupNames"), make_shared<string>("json")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteUserGroupsMapping"))},
    {"version", boost::any(string("2018-06-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteUserGroupsMappingResponse(callApi(params, req, runtime));
}

DeleteUserGroupsMappingResponse Alibabacloud_DFS20180620::Client::deleteUserGroupsMapping(shared_ptr<DeleteUserGroupsMappingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteUserGroupsMappingWithOptions(request, runtime);
}

DeleteVscMountPointResponse Alibabacloud_DFS20180620::Client::deleteVscMountPointWithOptions(shared_ptr<DeleteVscMountPointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fileSystemId)) {
    query->insert(pair<string, string>("FileSystemId", *request->fileSystemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputRegionId)) {
    query->insert(pair<string, string>("InputRegionId", *request->inputRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mountPointId)) {
    query->insert(pair<string, string>("MountPointId", *request->mountPointId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteVscMountPoint"))},
    {"version", boost::any(string("2018-06-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteVscMountPointResponse(callApi(params, req, runtime));
}

DeleteVscMountPointResponse Alibabacloud_DFS20180620::Client::deleteVscMountPoint(shared_ptr<DeleteVscMountPointRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteVscMountPointWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_DFS20180620::Client::describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputRegionId)) {
    query->insert(pair<string, string>("InputRegionId", *request->inputRegionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRegions"))},
    {"version", boost::any(string("2018-06-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRegionsResponse(callApi(params, req, runtime));
}

DescribeRegionsResponse Alibabacloud_DFS20180620::Client::describeRegions(shared_ptr<DescribeRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(request, runtime);
}

DescribeVscMountPointsResponse Alibabacloud_DFS20180620::Client::describeVscMountPointsWithOptions(shared_ptr<DescribeVscMountPointsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fileSystemId)) {
    query->insert(pair<string, string>("FileSystemId", *request->fileSystemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputRegionId)) {
    query->insert(pair<string, string>("InputRegionId", *request->inputRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mountPointId)) {
    query->insert(pair<string, string>("MountPointId", *request->mountPointId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vscId)) {
    query->insert(pair<string, string>("VscId", *request->vscId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeVscMountPoints"))},
    {"version", boost::any(string("2018-06-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeVscMountPointsResponse(callApi(params, req, runtime));
}

DescribeVscMountPointsResponse Alibabacloud_DFS20180620::Client::describeVscMountPoints(shared_ptr<DescribeVscMountPointsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVscMountPointsWithOptions(request, runtime);
}

DetachVscMountPointResponse Alibabacloud_DFS20180620::Client::detachVscMountPointWithOptions(shared_ptr<DetachVscMountPointRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DetachVscMountPointShrinkRequest> request = make_shared<DetachVscMountPointShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->instanceIds)) {
    request->instanceIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->instanceIds, make_shared<string>("InstanceIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->vscIds)) {
    request->vscIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->vscIds, make_shared<string>("VscIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileSystemId)) {
    query->insert(pair<string, string>("FileSystemId", *request->fileSystemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputRegionId)) {
    query->insert(pair<string, string>("InputRegionId", *request->inputRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIdsShrink)) {
    query->insert(pair<string, string>("InstanceIds", *request->instanceIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mountPointId)) {
    query->insert(pair<string, string>("MountPointId", *request->mountPointId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vscIdsShrink)) {
    query->insert(pair<string, string>("VscIds", *request->vscIdsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetachVscMountPoint"))},
    {"version", boost::any(string("2018-06-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetachVscMountPointResponse(callApi(params, req, runtime));
}

DetachVscMountPointResponse Alibabacloud_DFS20180620::Client::detachVscMountPoint(shared_ptr<DetachVscMountPointRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachVscMountPointWithOptions(request, runtime);
}

GetAccessGroupResponse Alibabacloud_DFS20180620::Client::getAccessGroupWithOptions(shared_ptr<GetAccessGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessGroupId)) {
    query->insert(pair<string, string>("AccessGroupId", *request->accessGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputRegionId)) {
    query->insert(pair<string, string>("InputRegionId", *request->inputRegionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAccessGroup"))},
    {"version", boost::any(string("2018-06-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAccessGroupResponse(callApi(params, req, runtime));
}

GetAccessGroupResponse Alibabacloud_DFS20180620::Client::getAccessGroup(shared_ptr<GetAccessGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAccessGroupWithOptions(request, runtime);
}

GetAccessRuleResponse Alibabacloud_DFS20180620::Client::getAccessRuleWithOptions(shared_ptr<GetAccessRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessGroupId)) {
    query->insert(pair<string, string>("AccessGroupId", *request->accessGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accessRuleId)) {
    query->insert(pair<string, string>("AccessRuleId", *request->accessRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputRegionId)) {
    query->insert(pair<string, string>("InputRegionId", *request->inputRegionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAccessRule"))},
    {"version", boost::any(string("2018-06-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAccessRuleResponse(callApi(params, req, runtime));
}

GetAccessRuleResponse Alibabacloud_DFS20180620::Client::getAccessRule(shared_ptr<GetAccessRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAccessRuleWithOptions(request, runtime);
}

GetFileSystemResponse Alibabacloud_DFS20180620::Client::getFileSystemWithOptions(shared_ptr<GetFileSystemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fileSystemId)) {
    query->insert(pair<string, string>("FileSystemId", *request->fileSystemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputRegionId)) {
    query->insert(pair<string, string>("InputRegionId", *request->inputRegionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFileSystem"))},
    {"version", boost::any(string("2018-06-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFileSystemResponse(callApi(params, req, runtime));
}

GetFileSystemResponse Alibabacloud_DFS20180620::Client::getFileSystem(shared_ptr<GetFileSystemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getFileSystemWithOptions(request, runtime);
}

GetMountPointResponse Alibabacloud_DFS20180620::Client::getMountPointWithOptions(shared_ptr<GetMountPointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fileSystemId)) {
    query->insert(pair<string, string>("FileSystemId", *request->fileSystemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputRegionId)) {
    query->insert(pair<string, string>("InputRegionId", *request->inputRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mountPointId)) {
    query->insert(pair<string, string>("MountPointId", *request->mountPointId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMountPoint"))},
    {"version", boost::any(string("2018-06-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMountPointResponse(callApi(params, req, runtime));
}

GetMountPointResponse Alibabacloud_DFS20180620::Client::getMountPoint(shared_ptr<GetMountPointRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMountPointWithOptions(request, runtime);
}

GetRegionResponse Alibabacloud_DFS20180620::Client::getRegionWithOptions(shared_ptr<GetRegionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->inputRegionId)) {
    query->insert(pair<string, string>("InputRegionId", *request->inputRegionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRegion"))},
    {"version", boost::any(string("2018-06-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRegionResponse(callApi(params, req, runtime));
}

GetRegionResponse Alibabacloud_DFS20180620::Client::getRegion(shared_ptr<GetRegionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRegionWithOptions(request, runtime);
}

ListAccessGroupsResponse Alibabacloud_DFS20180620::Client::listAccessGroupsWithOptions(shared_ptr<ListAccessGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->inputRegionId)) {
    query->insert(pair<string, string>("InputRegionId", *request->inputRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    query->insert(pair<string, long>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("OrderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderType)) {
    query->insert(pair<string, string>("OrderType", *request->orderType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startOffset)) {
    query->insert(pair<string, long>("StartOffset", *request->startOffset));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAccessGroups"))},
    {"version", boost::any(string("2018-06-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAccessGroupsResponse(callApi(params, req, runtime));
}

ListAccessGroupsResponse Alibabacloud_DFS20180620::Client::listAccessGroups(shared_ptr<ListAccessGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAccessGroupsWithOptions(request, runtime);
}

ListAccessRulesResponse Alibabacloud_DFS20180620::Client::listAccessRulesWithOptions(shared_ptr<ListAccessRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessGroupId)) {
    query->insert(pair<string, string>("AccessGroupId", *request->accessGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputRegionId)) {
    query->insert(pair<string, string>("InputRegionId", *request->inputRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    query->insert(pair<string, long>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("OrderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderType)) {
    query->insert(pair<string, string>("OrderType", *request->orderType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startOffset)) {
    query->insert(pair<string, long>("StartOffset", *request->startOffset));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAccessRules"))},
    {"version", boost::any(string("2018-06-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAccessRulesResponse(callApi(params, req, runtime));
}

ListAccessRulesResponse Alibabacloud_DFS20180620::Client::listAccessRules(shared_ptr<ListAccessRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAccessRulesWithOptions(request, runtime);
}

ListFileSystemsResponse Alibabacloud_DFS20180620::Client::listFileSystemsWithOptions(shared_ptr<ListFileSystemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->inputRegionId)) {
    query->insert(pair<string, string>("InputRegionId", *request->inputRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    query->insert(pair<string, long>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("OrderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderType)) {
    query->insert(pair<string, string>("OrderType", *request->orderType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startOffset)) {
    query->insert(pair<string, long>("StartOffset", *request->startOffset));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListFileSystems"))},
    {"version", boost::any(string("2018-06-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListFileSystemsResponse(callApi(params, req, runtime));
}

ListFileSystemsResponse Alibabacloud_DFS20180620::Client::listFileSystems(shared_ptr<ListFileSystemsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFileSystemsWithOptions(request, runtime);
}

ListMountPointsResponse Alibabacloud_DFS20180620::Client::listMountPointsWithOptions(shared_ptr<ListMountPointsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fileSystemId)) {
    query->insert(pair<string, string>("FileSystemId", *request->fileSystemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputRegionId)) {
    query->insert(pair<string, string>("InputRegionId", *request->inputRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    query->insert(pair<string, long>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("OrderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderType)) {
    query->insert(pair<string, string>("OrderType", *request->orderType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startOffset)) {
    query->insert(pair<string, long>("StartOffset", *request->startOffset));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMountPoints"))},
    {"version", boost::any(string("2018-06-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMountPointsResponse(callApi(params, req, runtime));
}

ListMountPointsResponse Alibabacloud_DFS20180620::Client::listMountPoints(shared_ptr<ListMountPointsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMountPointsWithOptions(request, runtime);
}

ListUserGroupsMappingsResponse Alibabacloud_DFS20180620::Client::listUserGroupsMappingsWithOptions(shared_ptr<ListUserGroupsMappingsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->filesystemId)) {
    query->insert(pair<string, string>("FilesystemId", *request->filesystemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputRegionId)) {
    query->insert(pair<string, string>("InputRegionId", *request->inputRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    query->insert(pair<string, long>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListUserGroupsMappings"))},
    {"version", boost::any(string("2018-06-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListUserGroupsMappingsResponse(callApi(params, req, runtime));
}

ListUserGroupsMappingsResponse Alibabacloud_DFS20180620::Client::listUserGroupsMappings(shared_ptr<ListUserGroupsMappingsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listUserGroupsMappingsWithOptions(request, runtime);
}

ModifyAccessGroupResponse Alibabacloud_DFS20180620::Client::modifyAccessGroupWithOptions(shared_ptr<ModifyAccessGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessGroupId)) {
    query->insert(pair<string, string>("AccessGroupId", *request->accessGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accessGroupName)) {
    query->insert(pair<string, string>("AccessGroupName", *request->accessGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputRegionId)) {
    query->insert(pair<string, string>("InputRegionId", *request->inputRegionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyAccessGroup"))},
    {"version", boost::any(string("2018-06-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyAccessGroupResponse(callApi(params, req, runtime));
}

ModifyAccessGroupResponse Alibabacloud_DFS20180620::Client::modifyAccessGroup(shared_ptr<ModifyAccessGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAccessGroupWithOptions(request, runtime);
}

ModifyAccessRuleResponse Alibabacloud_DFS20180620::Client::modifyAccessRuleWithOptions(shared_ptr<ModifyAccessRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessGroupId)) {
    query->insert(pair<string, string>("AccessGroupId", *request->accessGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accessRuleId)) {
    query->insert(pair<string, string>("AccessRuleId", *request->accessRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputRegionId)) {
    query->insert(pair<string, string>("InputRegionId", *request->inputRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->priority)) {
    query->insert(pair<string, long>("Priority", *request->priority));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->RWAccessType)) {
    query->insert(pair<string, string>("RWAccessType", *request->RWAccessType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyAccessRule"))},
    {"version", boost::any(string("2018-06-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyAccessRuleResponse(callApi(params, req, runtime));
}

ModifyAccessRuleResponse Alibabacloud_DFS20180620::Client::modifyAccessRule(shared_ptr<ModifyAccessRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAccessRuleWithOptions(request, runtime);
}

ModifyFileSystemResponse Alibabacloud_DFS20180620::Client::modifyFileSystemWithOptions(shared_ptr<ModifyFileSystemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileSystemId)) {
    query->insert(pair<string, string>("FileSystemId", *request->fileSystemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileSystemName)) {
    query->insert(pair<string, string>("FileSystemName", *request->fileSystemName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputRegionId)) {
    query->insert(pair<string, string>("InputRegionId", *request->inputRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->provisionedThroughputInMiBps)) {
    query->insert(pair<string, long>("ProvisionedThroughputInMiBps", *request->provisionedThroughputInMiBps));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->spaceCapacity)) {
    query->insert(pair<string, long>("SpaceCapacity", *request->spaceCapacity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->throughputMode)) {
    query->insert(pair<string, string>("ThroughputMode", *request->throughputMode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyFileSystem"))},
    {"version", boost::any(string("2018-06-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyFileSystemResponse(callApi(params, req, runtime));
}

ModifyFileSystemResponse Alibabacloud_DFS20180620::Client::modifyFileSystem(shared_ptr<ModifyFileSystemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyFileSystemWithOptions(request, runtime);
}

ModifyMountPointResponse Alibabacloud_DFS20180620::Client::modifyMountPointWithOptions(shared_ptr<ModifyMountPointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessGroupId)) {
    query->insert(pair<string, string>("AccessGroupId", *request->accessGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileSystemId)) {
    query->insert(pair<string, string>("FileSystemId", *request->fileSystemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputRegionId)) {
    query->insert(pair<string, string>("InputRegionId", *request->inputRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mountPointId)) {
    query->insert(pair<string, string>("MountPointId", *request->mountPointId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyMountPoint"))},
    {"version", boost::any(string("2018-06-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyMountPointResponse(callApi(params, req, runtime));
}

ModifyMountPointResponse Alibabacloud_DFS20180620::Client::modifyMountPoint(shared_ptr<ModifyMountPointRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyMountPointWithOptions(request, runtime);
}

