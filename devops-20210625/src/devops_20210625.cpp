// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/devops_20210625.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_Devops20210625;

Alibabacloud_Devops20210625::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("devops"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Devops20210625::Client::getEndpoint(shared_ptr<string> productId,
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

RetryPipelineJobRunResponse Alibabacloud_Devops20210625::Client::retryPipelineJobRun(shared_ptr<string> organizationId,
                                                                                     shared_ptr<string> pipelineId,
                                                                                     shared_ptr<string> pipelineRunId,
                                                                                     shared_ptr<string> jobId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return retryPipelineJobRunWithOptions(organizationId, pipelineId, pipelineRunId, jobId, headers, runtime);
}

RetryPipelineJobRunResponse Alibabacloud_Devops20210625::Client::retryPipelineJobRunWithOptions(shared_ptr<string> organizationId,
                                                                                                shared_ptr<string> pipelineId,
                                                                                                shared_ptr<string> pipelineRunId,
                                                                                                shared_ptr<string> jobId,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return RetryPipelineJobRunResponse(doROARequest(make_shared<string>("RetryPipelineJobRun"), make_shared<string>("2021-06-25"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/organization/") + string(*organizationId) + string("/pipelines/") + string(*pipelineId) + string("/pipelineRuns/") + string(*pipelineRunId) + string("/jobs/") + string(*jobId)), make_shared<string>("json"), req, runtime));
}

ListResourceMembersResponse Alibabacloud_Devops20210625::Client::listResourceMembers(shared_ptr<string> organizationId, shared_ptr<string> resourceType, shared_ptr<string> resourceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listResourceMembersWithOptions(organizationId, resourceType, resourceId, headers, runtime);
}

ListResourceMembersResponse Alibabacloud_Devops20210625::Client::listResourceMembersWithOptions(shared_ptr<string> organizationId,
                                                                                                shared_ptr<string> resourceType,
                                                                                                shared_ptr<string> resourceId,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return ListResourceMembersResponse(doROARequest(make_shared<string>("ListResourceMembers"), make_shared<string>("2021-06-25"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/organization/") + string(*organizationId) + string("/") + string(*resourceType) + string("/") + string(*resourceId) + string("/members")), make_shared<string>("json"), req, runtime));
}

GetHostGroupResponse Alibabacloud_Devops20210625::Client::getHostGroup(shared_ptr<string> organizationId, shared_ptr<string> id) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getHostGroupWithOptions(organizationId, id, headers, runtime);
}

GetHostGroupResponse Alibabacloud_Devops20210625::Client::getHostGroupWithOptions(shared_ptr<string> organizationId,
                                                                                  shared_ptr<string> id,
                                                                                  shared_ptr<map<string, string>> headers,
                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return GetHostGroupResponse(doROARequest(make_shared<string>("GetHostGroup"), make_shared<string>("2021-06-25"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/organization/") + string(*organizationId) + string("/hostGroups/") + string(*id)), make_shared<string>("json"), req, runtime));
}

GetVariableGroupResponse Alibabacloud_Devops20210625::Client::getVariableGroup(shared_ptr<string> organizationId, shared_ptr<string> id) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getVariableGroupWithOptions(organizationId, id, headers, runtime);
}

GetVariableGroupResponse Alibabacloud_Devops20210625::Client::getVariableGroupWithOptions(shared_ptr<string> organizationId,
                                                                                          shared_ptr<string> id,
                                                                                          shared_ptr<map<string, string>> headers,
                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return GetVariableGroupResponse(doROARequest(make_shared<string>("GetVariableGroup"), make_shared<string>("2021-06-25"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/organization/") + string(*organizationId) + string("/variableGroups/") + string(*id)), make_shared<string>("json"), req, runtime));
}

ListPipelinesResponse Alibabacloud_Devops20210625::Client::listPipelines(shared_ptr<string> organizationId, shared_ptr<ListPipelinesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listPipelinesWithOptions(organizationId, request, headers, runtime);
}

ListPipelinesResponse Alibabacloud_Devops20210625::Client::listPipelinesWithOptions(shared_ptr<string> organizationId,
                                                                                    shared_ptr<ListPipelinesRequest> request,
                                                                                    shared_ptr<map<string, string>> headers,
                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->pipelineName)) {
    (*query)["pipelineName"] = *request->pipelineName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->creatorAccountIds)) {
    (*query)["creatorAccountIds"] = *request->creatorAccountIds;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->executeAccountIds)) {
    (*query)["executeAccountIds"] = *request->executeAccountIds;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->statusList)) {
    (*query)["statusList"] = *request->statusList;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createStartTime)) {
    (*query)["createStartTime"] = *request->createStartTime;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createEndTime)) {
    (*query)["createEndTime"] = *request->createEndTime;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->executeStartTime)) {
    (*query)["executeStartTime"] = *request->executeStartTime;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->executeEndTime)) {
    (*query)["executeEndTime"] = *request->executeEndTime;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    (*query)["maxResults"] = *request->maxResults;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    (*query)["nextToken"] = *request->nextToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListPipelinesResponse(doROARequest(make_shared<string>("ListPipelines"), make_shared<string>("2021-06-25"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/organization/") + string(*organizationId) + string("/pipelines")), make_shared<string>("json"), req, runtime));
}

UpdateResourceMemberResponse Alibabacloud_Devops20210625::Client::updateResourceMember(shared_ptr<string> organizationId,
                                                                                       shared_ptr<string> resourceType,
                                                                                       shared_ptr<string> resourceId,
                                                                                       shared_ptr<string> accountId,
                                                                                       shared_ptr<UpdateResourceMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateResourceMemberWithOptions(organizationId, resourceType, resourceId, accountId, request, headers, runtime);
}

UpdateResourceMemberResponse Alibabacloud_Devops20210625::Client::updateResourceMemberWithOptions(shared_ptr<string> organizationId,
                                                                                                  shared_ptr<string> resourceType,
                                                                                                  shared_ptr<string> resourceId,
                                                                                                  shared_ptr<string> accountId,
                                                                                                  shared_ptr<UpdateResourceMemberRequest> request,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->roleName)) {
    (*body)["roleName"] = *request->roleName;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return UpdateResourceMemberResponse(doROARequestWithForm(make_shared<string>("UpdateResourceMember"), make_shared<string>("2021-06-25"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/organization/") + string(*organizationId) + string("/") + string(*resourceType) + string("/") + string(*resourceId) + string("/members/") + string(*accountId)), make_shared<string>("json"), req, runtime));
}

UpdateVariableGroupResponse Alibabacloud_Devops20210625::Client::updateVariableGroup(shared_ptr<string> organizationId, shared_ptr<string> id, shared_ptr<UpdateVariableGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateVariableGroupWithOptions(organizationId, id, request, headers, runtime);
}

UpdateVariableGroupResponse Alibabacloud_Devops20210625::Client::updateVariableGroupWithOptions(shared_ptr<string> organizationId,
                                                                                                shared_ptr<string> id,
                                                                                                shared_ptr<UpdateVariableGroupRequest> request,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    (*body)["name"] = *request->name;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    (*body)["description"] = *request->description;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->variables)) {
    (*body)["variables"] = *request->variables;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return UpdateVariableGroupResponse(doROARequestWithForm(make_shared<string>("UpdateVariableGroup"), make_shared<string>("2021-06-25"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/organization/") + string(*organizationId) + string("/variableGroups/") + string(*id)), make_shared<string>("json"), req, runtime));
}

DeleteResourceMemberResponse Alibabacloud_Devops20210625::Client::deleteResourceMember(shared_ptr<string> organizationId,
                                                                                       shared_ptr<string> resourceType,
                                                                                       shared_ptr<string> resourceId,
                                                                                       shared_ptr<string> accountId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteResourceMemberWithOptions(organizationId, resourceType, resourceId, accountId, headers, runtime);
}

DeleteResourceMemberResponse Alibabacloud_Devops20210625::Client::deleteResourceMemberWithOptions(shared_ptr<string> organizationId,
                                                                                                  shared_ptr<string> resourceType,
                                                                                                  shared_ptr<string> resourceId,
                                                                                                  shared_ptr<string> accountId,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return DeleteResourceMemberResponse(doROARequest(make_shared<string>("DeleteResourceMember"), make_shared<string>("2021-06-25"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>(string("/organization/") + string(*organizationId) + string("/") + string(*resourceType) + string("/") + string(*resourceId) + string("/members/") + string(*accountId)), make_shared<string>("json"), req, runtime));
}

ListHostGroupsResponse Alibabacloud_Devops20210625::Client::listHostGroups(shared_ptr<string> organizationId, shared_ptr<ListHostGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listHostGroupsWithOptions(organizationId, request, headers, runtime);
}

ListHostGroupsResponse Alibabacloud_Devops20210625::Client::listHostGroupsWithOptions(shared_ptr<string> organizationId,
                                                                                      shared_ptr<ListHostGroupsRequest> request,
                                                                                      shared_ptr<map<string, string>> headers,
                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ids)) {
    (*query)["ids"] = *request->ids;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createStartTime)) {
    (*query)["createStartTime"] = *request->createStartTime;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createEndTime)) {
    (*query)["createEndTime"] = *request->createEndTime;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    (*query)["name"] = *request->name;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->creatorAccountIds)) {
    (*query)["creatorAccountIds"] = *request->creatorAccountIds;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    (*query)["nextToken"] = *request->nextToken;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    (*query)["maxResults"] = *request->maxResults;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSort)) {
    (*query)["pageSort"] = *request->pageSort;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageOrder)) {
    (*query)["pageOrder"] = *request->pageOrder;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListHostGroupsResponse(doROARequest(make_shared<string>("ListHostGroups"), make_shared<string>("2021-06-25"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/organization/") + string(*organizationId) + string("/hostGroups")), make_shared<string>("json"), req, runtime));
}

ResetSshKeyResponse Alibabacloud_Devops20210625::Client::resetSshKey(shared_ptr<string> organizationId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return resetSshKeyWithOptions(organizationId, headers, runtime);
}

ResetSshKeyResponse Alibabacloud_Devops20210625::Client::resetSshKeyWithOptions(shared_ptr<string> organizationId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return ResetSshKeyResponse(doROARequest(make_shared<string>("ResetSshKey"), make_shared<string>("2021-06-25"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/organization/") + string(*organizationId) + string("/sshKey")), make_shared<string>("json"), req, runtime));
}

CreateWorkspaceResponse Alibabacloud_Devops20210625::Client::createWorkspace(shared_ptr<CreateWorkspaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createWorkspaceWithOptions(request, headers, runtime);
}

CreateWorkspaceResponse Alibabacloud_Devops20210625::Client::createWorkspaceWithOptions(shared_ptr<CreateWorkspaceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    (*body)["name"] = *request->name;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceTemplate)) {
    (*body)["workspaceTemplate"] = *request->workspaceTemplate;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->codeUrl)) {
    (*body)["codeUrl"] = *request->codeUrl;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->codeVersion)) {
    (*body)["codeVersion"] = *request->codeVersion;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filePath)) {
    (*body)["filePath"] = *request->filePath;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->reuse)) {
    (*body)["reuse"] = *request->reuse;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceIdentifier)) {
    (*body)["resourceIdentifier"] = *request->resourceIdentifier;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestFrom)) {
    (*body)["requestFrom"] = *request->requestFrom;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return CreateWorkspaceResponse(doROARequestWithForm(make_shared<string>("CreateWorkspace"), make_shared<string>("2021-06-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/api/workspaces")), make_shared<string>("json"), req, runtime));
}

ListServiceConnectionsResponse Alibabacloud_Devops20210625::Client::listServiceConnections(shared_ptr<string> organizationId, shared_ptr<ListServiceConnectionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listServiceConnectionsWithOptions(organizationId, request, headers, runtime);
}

ListServiceConnectionsResponse Alibabacloud_Devops20210625::Client::listServiceConnectionsWithOptions(shared_ptr<string> organizationId,
                                                                                                      shared_ptr<ListServiceConnectionsRequest> request,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->sericeConnectionType)) {
    (*query)["sericeConnectionType"] = *request->sericeConnectionType;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListServiceConnectionsResponse(doROARequest(make_shared<string>("ListServiceConnections"), make_shared<string>("2021-06-25"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/organization/") + string(*organizationId) + string("/serviceConnections")), make_shared<string>("json"), req, runtime));
}

CreateHostGroupResponse Alibabacloud_Devops20210625::Client::createHostGroup(shared_ptr<string> organizationId, shared_ptr<CreateHostGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createHostGroupWithOptions(organizationId, request, headers, runtime);
}

CreateHostGroupResponse Alibabacloud_Devops20210625::Client::createHostGroupWithOptions(shared_ptr<string> organizationId,
                                                                                        shared_ptr<CreateHostGroupRequest> request,
                                                                                        shared_ptr<map<string, string>> headers,
                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    (*body)["type"] = *request->type;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->envId)) {
    (*body)["envId"] = *request->envId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    (*body)["name"] = *request->name;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->serviceConnectionId)) {
    (*body)["serviceConnectionId"] = *request->serviceConnectionId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagIds)) {
    (*body)["tagIds"] = *request->tagIds;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecsType)) {
    (*body)["ecsType"] = *request->ecsType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecsLabelKey)) {
    (*body)["ecsLabelKey"] = *request->ecsLabelKey;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecsLabelValue)) {
    (*body)["ecsLabelValue"] = *request->ecsLabelValue;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunRegion)) {
    (*body)["aliyunRegion"] = *request->aliyunRegion;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->machineInfos)) {
    (*body)["machineInfos"] = *request->machineInfos;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return CreateHostGroupResponse(doROARequestWithForm(make_shared<string>("CreateHostGroup"), make_shared<string>("2021-06-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/organization/") + string(*organizationId) + string("/hostGroups")), make_shared<string>("json"), req, runtime));
}

StopPipelineRunResponse Alibabacloud_Devops20210625::Client::stopPipelineRun(shared_ptr<string> organizationId, shared_ptr<string> pipelineId, shared_ptr<string> pipelineRunId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return stopPipelineRunWithOptions(organizationId, pipelineId, pipelineRunId, headers, runtime);
}

StopPipelineRunResponse Alibabacloud_Devops20210625::Client::stopPipelineRunWithOptions(shared_ptr<string> organizationId,
                                                                                        shared_ptr<string> pipelineId,
                                                                                        shared_ptr<string> pipelineRunId,
                                                                                        shared_ptr<map<string, string>> headers,
                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return StopPipelineRunResponse(doROARequest(make_shared<string>("StopPipelineRun"), make_shared<string>("2021-06-25"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/organization/") + string(*organizationId) + string("/pipelines/") + string(*pipelineId) + string("/pipelineRuns/") + string(*pipelineRunId) + string("/stop")), make_shared<string>("json"), req, runtime));
}

UpdateHostGroupResponse Alibabacloud_Devops20210625::Client::updateHostGroup(shared_ptr<string> organizationId, shared_ptr<string> id, shared_ptr<UpdateHostGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateHostGroupWithOptions(organizationId, id, request, headers, runtime);
}

UpdateHostGroupResponse Alibabacloud_Devops20210625::Client::updateHostGroupWithOptions(shared_ptr<string> organizationId,
                                                                                        shared_ptr<string> id,
                                                                                        shared_ptr<UpdateHostGroupRequest> request,
                                                                                        shared_ptr<map<string, string>> headers,
                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    (*body)["type"] = *request->type;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->envId)) {
    (*body)["envId"] = *request->envId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    (*body)["name"] = *request->name;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->serviceConnectionId)) {
    (*body)["serviceConnectionId"] = *request->serviceConnectionId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagIds)) {
    (*body)["tagIds"] = *request->tagIds;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecsType)) {
    (*body)["ecsType"] = *request->ecsType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecsLabelKey)) {
    (*body)["ecsLabelKey"] = *request->ecsLabelKey;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecsLabelValue)) {
    (*body)["ecsLabelValue"] = *request->ecsLabelValue;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunRegion)) {
    (*body)["aliyunRegion"] = *request->aliyunRegion;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->machineInfos)) {
    (*body)["machineInfos"] = *request->machineInfos;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return UpdateHostGroupResponse(doROARequestWithForm(make_shared<string>("UpdateHostGroup"), make_shared<string>("2021-06-25"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/organization/") + string(*organizationId) + string("/hostGroups/") + string(*id)), make_shared<string>("json"), req, runtime));
}

CreateResourceMemberResponse Alibabacloud_Devops20210625::Client::createResourceMember(shared_ptr<string> organizationId,
                                                                                       shared_ptr<string> resourceType,
                                                                                       shared_ptr<string> resourceId,
                                                                                       shared_ptr<CreateResourceMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createResourceMemberWithOptions(organizationId, resourceType, resourceId, request, headers, runtime);
}

CreateResourceMemberResponse Alibabacloud_Devops20210625::Client::createResourceMemberWithOptions(shared_ptr<string> organizationId,
                                                                                                  shared_ptr<string> resourceType,
                                                                                                  shared_ptr<string> resourceId,
                                                                                                  shared_ptr<CreateResourceMemberRequest> request,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    (*body)["accountId"] = *request->accountId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roleName)) {
    (*body)["roleName"] = *request->roleName;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return CreateResourceMemberResponse(doROARequestWithForm(make_shared<string>("CreateResourceMember"), make_shared<string>("2021-06-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/organization/") + string(*organizationId) + string("/") + string(*resourceType) + string("/") + string(*resourceId) + string("/members")), make_shared<string>("json"), req, runtime));
}

SkipPipelineJobRunResponse Alibabacloud_Devops20210625::Client::skipPipelineJobRun(shared_ptr<string> organizationId,
                                                                                   shared_ptr<string> pipelineId,
                                                                                   shared_ptr<string> pipelineRunId,
                                                                                   shared_ptr<string> jobId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return skipPipelineJobRunWithOptions(organizationId, pipelineId, pipelineRunId, jobId, headers, runtime);
}

SkipPipelineJobRunResponse Alibabacloud_Devops20210625::Client::skipPipelineJobRunWithOptions(shared_ptr<string> organizationId,
                                                                                              shared_ptr<string> pipelineId,
                                                                                              shared_ptr<string> pipelineRunId,
                                                                                              shared_ptr<string> jobId,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return SkipPipelineJobRunResponse(doROARequest(make_shared<string>("SkipPipelineJobRun"), make_shared<string>("2021-06-25"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/organization/") + string(*organizationId) + string("/pipelines/") + string(*pipelineId) + string("/pipelineRuns/") + string(*pipelineRunId) + string("/jobs/") + string(*jobId) + string("/skip")), make_shared<string>("json"), req, runtime));
}

StopPipelineJobRunResponse Alibabacloud_Devops20210625::Client::stopPipelineJobRun(shared_ptr<string> organizationId,
                                                                                   shared_ptr<string> pipelineId,
                                                                                   shared_ptr<string> pipelineRunId,
                                                                                   shared_ptr<string> jobId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return stopPipelineJobRunWithOptions(organizationId, pipelineId, pipelineRunId, jobId, headers, runtime);
}

StopPipelineJobRunResponse Alibabacloud_Devops20210625::Client::stopPipelineJobRunWithOptions(shared_ptr<string> organizationId,
                                                                                              shared_ptr<string> pipelineId,
                                                                                              shared_ptr<string> pipelineRunId,
                                                                                              shared_ptr<string> jobId,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return StopPipelineJobRunResponse(doROARequest(make_shared<string>("StopPipelineJobRun"), make_shared<string>("2021-06-25"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/organization/") + string(*organizationId) + string("/pipelines/") + string(*pipelineId) + string("/pipelineRuns/") + string(*pipelineRunId) + string("/jobs/") + string(*jobId) + string("/stop")), make_shared<string>("json"), req, runtime));
}

StartPipelineRunResponse Alibabacloud_Devops20210625::Client::startPipelineRun(shared_ptr<string> organizationId, shared_ptr<string> pipelineId, shared_ptr<StartPipelineRunRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return startPipelineRunWithOptions(organizationId, pipelineId, request, headers, runtime);
}

StartPipelineRunResponse Alibabacloud_Devops20210625::Client::startPipelineRunWithOptions(shared_ptr<string> organizationId,
                                                                                          shared_ptr<string> pipelineId,
                                                                                          shared_ptr<StartPipelineRunRequest> request,
                                                                                          shared_ptr<map<string, string>> headers,
                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->params)) {
    (*body)["params"] = *request->params;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return StartPipelineRunResponse(doROARequestWithForm(make_shared<string>("StartPipelineRun"), make_shared<string>("2021-06-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/organizations/") + string(*organizationId) + string("/pipelines/") + string(*pipelineId) + string("/run")), make_shared<string>("json"), req, runtime));
}

ListWorkspacesResponse Alibabacloud_Devops20210625::Client::listWorkspaces(shared_ptr<ListWorkspacesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listWorkspacesWithOptions(request, headers, runtime);
}

ListWorkspacesResponse Alibabacloud_Devops20210625::Client::listWorkspacesWithOptions(shared_ptr<ListWorkspacesRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListWorkspacesShrinkRequest> request = make_shared<ListWorkspacesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->statusList)) {
    request->statusListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->statusList, make_shared<string>("statusList"), make_shared<string>("simple")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->workspaceTemplateList)) {
    request->workspaceTemplateListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->workspaceTemplateList, make_shared<string>("workspaceTemplateList"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    (*query)["nextToken"] = *request->nextToken;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    (*query)["maxResults"] = *request->maxResults;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->statusListShrink)) {
    (*query)["statusList"] = *request->statusListShrink;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceTemplateListShrink)) {
    (*query)["workspaceTemplateList"] = *request->workspaceTemplateListShrink;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListWorkspacesResponse(doROARequest(make_shared<string>("ListWorkspaces"), make_shared<string>("2021-06-25"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/workspaces")), make_shared<string>("json"), req, runtime));
}

GetPipelineRunResponse Alibabacloud_Devops20210625::Client::getPipelineRun(shared_ptr<string> organizationId, shared_ptr<string> pipelineId, shared_ptr<string> pipelineRunId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getPipelineRunWithOptions(organizationId, pipelineId, pipelineRunId, headers, runtime);
}

GetPipelineRunResponse Alibabacloud_Devops20210625::Client::getPipelineRunWithOptions(shared_ptr<string> organizationId,
                                                                                      shared_ptr<string> pipelineId,
                                                                                      shared_ptr<string> pipelineRunId,
                                                                                      shared_ptr<map<string, string>> headers,
                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return GetPipelineRunResponse(doROARequest(make_shared<string>("GetPipelineRun"), make_shared<string>("2021-06-25"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/organization/") + string(*organizationId) + string("/pipelines/") + string(*pipelineId) + string("/pipelineRuns/") + string(*pipelineRunId)), make_shared<string>("json"), req, runtime));
}

GetPipelineResponse Alibabacloud_Devops20210625::Client::getPipeline(shared_ptr<string> organizationId, shared_ptr<string> pipelineId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getPipelineWithOptions(organizationId, pipelineId, headers, runtime);
}

GetPipelineResponse Alibabacloud_Devops20210625::Client::getPipelineWithOptions(shared_ptr<string> organizationId,
                                                                                shared_ptr<string> pipelineId,
                                                                                shared_ptr<map<string, string>> headers,
                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return GetPipelineResponse(doROARequest(make_shared<string>("GetPipeline"), make_shared<string>("2021-06-25"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/organization/") + string(*organizationId) + string("/pipelines/") + string(*pipelineId)), make_shared<string>("json"), req, runtime));
}

CreateVariableGroupResponse Alibabacloud_Devops20210625::Client::createVariableGroup(shared_ptr<string> organizationId, shared_ptr<CreateVariableGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createVariableGroupWithOptions(organizationId, request, headers, runtime);
}

CreateVariableGroupResponse Alibabacloud_Devops20210625::Client::createVariableGroupWithOptions(shared_ptr<string> organizationId,
                                                                                                shared_ptr<CreateVariableGroupRequest> request,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    (*body)["name"] = *request->name;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    (*body)["description"] = *request->description;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->variables)) {
    (*body)["variables"] = *request->variables;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return CreateVariableGroupResponse(doROARequestWithForm(make_shared<string>("CreateVariableGroup"), make_shared<string>("2021-06-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/organization/") + string(*organizationId) + string("/variableGroups")), make_shared<string>("json"), req, runtime));
}

DeleteVariableGroupResponse Alibabacloud_Devops20210625::Client::deleteVariableGroup(shared_ptr<string> organizationId, shared_ptr<string> id) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteVariableGroupWithOptions(organizationId, id, headers, runtime);
}

DeleteVariableGroupResponse Alibabacloud_Devops20210625::Client::deleteVariableGroupWithOptions(shared_ptr<string> organizationId,
                                                                                                shared_ptr<string> id,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return DeleteVariableGroupResponse(doROARequest(make_shared<string>("DeleteVariableGroup"), make_shared<string>("2021-06-25"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>(string("/organization/") + string(*organizationId) + string("/variableGroups/") + string(*id)), make_shared<string>("json"), req, runtime));
}

GetWorkspaceResponse Alibabacloud_Devops20210625::Client::getWorkspace(shared_ptr<string> workspaceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getWorkspaceWithOptions(workspaceId, headers, runtime);
}

GetWorkspaceResponse Alibabacloud_Devops20210625::Client::getWorkspaceWithOptions(shared_ptr<string> workspaceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return GetWorkspaceResponse(doROARequest(make_shared<string>("GetWorkspace"), make_shared<string>("2021-06-25"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/workspaces/") + string(*workspaceId)), make_shared<string>("json"), req, runtime));
}

CreateSshKeyResponse Alibabacloud_Devops20210625::Client::createSshKey(shared_ptr<string> organizationId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createSshKeyWithOptions(organizationId, headers, runtime);
}

CreateSshKeyResponse Alibabacloud_Devops20210625::Client::createSshKeyWithOptions(shared_ptr<string> organizationId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return CreateSshKeyResponse(doROARequest(make_shared<string>("CreateSshKey"), make_shared<string>("2021-06-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/organization/") + string(*organizationId) + string("/sshKey")), make_shared<string>("json"), req, runtime));
}

DeleteHostGroupResponse Alibabacloud_Devops20210625::Client::deleteHostGroup(shared_ptr<string> organizationId, shared_ptr<string> id) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteHostGroupWithOptions(organizationId, id, headers, runtime);
}

DeleteHostGroupResponse Alibabacloud_Devops20210625::Client::deleteHostGroupWithOptions(shared_ptr<string> organizationId,
                                                                                        shared_ptr<string> id,
                                                                                        shared_ptr<map<string, string>> headers,
                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return DeleteHostGroupResponse(doROARequest(make_shared<string>("DeleteHostGroup"), make_shared<string>("2021-06-25"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>(string("/organization/") + string(*organizationId) + string("/hostGroups/") + string(*id)), make_shared<string>("json"), req, runtime));
}

ReleaseWorkspaceResponse Alibabacloud_Devops20210625::Client::releaseWorkspace(shared_ptr<string> workspaceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return releaseWorkspaceWithOptions(workspaceId, headers, runtime);
}

ReleaseWorkspaceResponse Alibabacloud_Devops20210625::Client::releaseWorkspaceWithOptions(shared_ptr<string> workspaceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return ReleaseWorkspaceResponse(doROARequest(make_shared<string>("ReleaseWorkspace"), make_shared<string>("2021-06-25"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>(string("/api/workspaces/") + string(*workspaceId) + string("/release")), make_shared<string>("json"), req, runtime));
}

ListVariableGroupsResponse Alibabacloud_Devops20210625::Client::listVariableGroups(shared_ptr<string> organizationId, shared_ptr<ListVariableGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listVariableGroupsWithOptions(organizationId, request, headers, runtime);
}

ListVariableGroupsResponse Alibabacloud_Devops20210625::Client::listVariableGroupsWithOptions(shared_ptr<string> organizationId,
                                                                                              shared_ptr<ListVariableGroupsRequest> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSort)) {
    (*query)["pageSort"] = *request->pageSort;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageOrder)) {
    (*query)["pageOrder"] = *request->pageOrder;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    (*query)["nextToken"] = *request->nextToken;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    (*query)["maxResults"] = *request->maxResults;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListVariableGroupsResponse(doROARequest(make_shared<string>("ListVariableGroups"), make_shared<string>("2021-06-25"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/organization/") + string(*organizationId) + string("/variableGroups")), make_shared<string>("json"), req, runtime));
}

DeletePipelineResponse Alibabacloud_Devops20210625::Client::deletePipeline(shared_ptr<string> organizationId, shared_ptr<string> pipelineId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deletePipelineWithOptions(organizationId, pipelineId, headers, runtime);
}

DeletePipelineResponse Alibabacloud_Devops20210625::Client::deletePipelineWithOptions(shared_ptr<string> organizationId,
                                                                                      shared_ptr<string> pipelineId,
                                                                                      shared_ptr<map<string, string>> headers,
                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return DeletePipelineResponse(doROARequest(make_shared<string>("DeletePipeline"), make_shared<string>("2021-06-25"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>(string("/organization/") + string(*organizationId) + string("/pipelines/") + string(*pipelineId)), make_shared<string>("json"), req, runtime));
}

FrozenWorkspaceResponse Alibabacloud_Devops20210625::Client::frozenWorkspace(shared_ptr<string> workspaceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return frozenWorkspaceWithOptions(workspaceId, headers, runtime);
}

FrozenWorkspaceResponse Alibabacloud_Devops20210625::Client::frozenWorkspaceWithOptions(shared_ptr<string> workspaceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return FrozenWorkspaceResponse(doROARequest(make_shared<string>("FrozenWorkspace"), make_shared<string>("2021-06-25"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/api/workspaces/") + string(*workspaceId) + string("/frozen")), make_shared<string>("json"), req, runtime));
}

ListPipelineRunsResponse Alibabacloud_Devops20210625::Client::listPipelineRuns(shared_ptr<string> organizationId, shared_ptr<string> pipelineId, shared_ptr<ListPipelineRunsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listPipelineRunsWithOptions(organizationId, pipelineId, request, headers, runtime);
}

ListPipelineRunsResponse Alibabacloud_Devops20210625::Client::listPipelineRunsWithOptions(shared_ptr<string> organizationId,
                                                                                          shared_ptr<string> pipelineId,
                                                                                          shared_ptr<ListPipelineRunsRequest> request,
                                                                                          shared_ptr<map<string, string>> headers,
                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    (*query)["startTime"] = *request->startTime;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    (*query)["endTime"] = *request->endTime;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    (*query)["status"] = *request->status;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    (*query)["maxResults"] = *request->maxResults;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    (*query)["nextToken"] = *request->nextToken;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->triggerMode)) {
    (*query)["triggerMode"] = *request->triggerMode;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListPipelineRunsResponse(doROARequest(make_shared<string>("ListPipelineRuns"), make_shared<string>("2021-06-25"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/organization/") + string(*organizationId) + string("/pipelines/") + string(*pipelineId) + string("/pipelineRuns")), make_shared<string>("json"), req, runtime));
}

