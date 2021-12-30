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

CreateFlowTagResponse Alibabacloud_Devops20210625::Client::createFlowTag(shared_ptr<string> organizationId, shared_ptr<CreateFlowTagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createFlowTagWithOptions(organizationId, request, headers, runtime);
}

CreateFlowTagResponse Alibabacloud_Devops20210625::Client::createFlowTagWithOptions(shared_ptr<string> organizationId,
                                                                                    shared_ptr<CreateFlowTagRequest> request,
                                                                                    shared_ptr<map<string, string>> headers,
                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  organizationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->color)) {
    query->insert(pair<string, string>("color", *request->color));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->flowTagGroupId)) {
    query->insert(pair<string, long>("flowTagGroupId", *request->flowTagGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateFlowTag"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(*organizationId) + string("/flow/tags"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateFlowTagResponse(callApi(params, req, runtime));
}

CreateFlowTagGroupResponse Alibabacloud_Devops20210625::Client::createFlowTagGroup(shared_ptr<string> organizationId, shared_ptr<CreateFlowTagGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createFlowTagGroupWithOptions(organizationId, request, headers, runtime);
}

CreateFlowTagGroupResponse Alibabacloud_Devops20210625::Client::createFlowTagGroupWithOptions(shared_ptr<string> organizationId,
                                                                                              shared_ptr<CreateFlowTagGroupRequest> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  organizationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateFlowTagGroup"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(*organizationId) + string("/flow/tagGroups"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateFlowTagGroupResponse(callApi(params, req, runtime));
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
  organizationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunRegion)) {
    body->insert(pair<string, string>("aliyunRegion", *request->aliyunRegion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecsLabelKey)) {
    body->insert(pair<string, string>("ecsLabelKey", *request->ecsLabelKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecsLabelValue)) {
    body->insert(pair<string, string>("ecsLabelValue", *request->ecsLabelValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecsType)) {
    body->insert(pair<string, string>("ecsType", *request->ecsType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->envId)) {
    body->insert(pair<string, string>("envId", *request->envId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->machineInfos)) {
    body->insert(pair<string, string>("machineInfos", *request->machineInfos));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->serviceConnectionId)) {
    body->insert(pair<string, long>("serviceConnectionId", *request->serviceConnectionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagIds)) {
    body->insert(pair<string, string>("tagIds", *request->tagIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateHostGroup"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(*organizationId) + string("/hostGroups"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateHostGroupResponse(callApi(params, req, runtime));
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
  organizationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId));
  resourceType = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(resourceType));
  resourceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(resourceId));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    body->insert(pair<string, string>("accountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roleName)) {
    body->insert(pair<string, string>("roleName", *request->roleName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateResourceMember"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(*organizationId) + string("/") + string(*resourceType) + string("/") + string(*resourceId) + string("/members"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateResourceMemberResponse(callApi(params, req, runtime));
}

CreateSshKeyResponse Alibabacloud_Devops20210625::Client::createSshKey(shared_ptr<string> organizationId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createSshKeyWithOptions(organizationId, headers, runtime);
}

CreateSshKeyResponse Alibabacloud_Devops20210625::Client::createSshKeyWithOptions(shared_ptr<string> organizationId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  organizationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSshKey"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(*organizationId) + string("/sshKey"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSshKeyResponse(callApi(params, req, runtime));
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
  organizationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->variables)) {
    body->insert(pair<string, string>("variables", *request->variables));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateVariableGroup"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(*organizationId) + string("/variableGroups"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateVariableGroupResponse(callApi(params, req, runtime));
}

CreateWorkspaceResponse Alibabacloud_Devops20210625::Client::createWorkspace(shared_ptr<CreateWorkspaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createWorkspaceWithOptions(request, headers, runtime);
}

CreateWorkspaceResponse Alibabacloud_Devops20210625::Client::createWorkspaceWithOptions(shared_ptr<CreateWorkspaceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->codeUrl)) {
    body->insert(pair<string, string>("codeUrl", *request->codeUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->codeVersion)) {
    body->insert(pair<string, string>("codeVersion", *request->codeVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filePath)) {
    body->insert(pair<string, string>("filePath", *request->filePath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestFrom)) {
    body->insert(pair<string, string>("requestFrom", *request->requestFrom));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceIdentifier)) {
    body->insert(pair<string, string>("resourceIdentifier", *request->resourceIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->reuse)) {
    body->insert(pair<string, bool>("reuse", *request->reuse));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceTemplate)) {
    body->insert(pair<string, string>("workspaceTemplate", *request->workspaceTemplate));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateWorkspace"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/workspaces"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateWorkspaceResponse(callApi(params, req, runtime));
}

DeleteFlowTagResponse Alibabacloud_Devops20210625::Client::deleteFlowTag(shared_ptr<string> organizationId, shared_ptr<string> id) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteFlowTagWithOptions(organizationId, id, headers, runtime);
}

DeleteFlowTagResponse Alibabacloud_Devops20210625::Client::deleteFlowTagWithOptions(shared_ptr<string> organizationId,
                                                                                    shared_ptr<string> id,
                                                                                    shared_ptr<map<string, string>> headers,
                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  organizationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId));
  id = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(id));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteFlowTag"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(*organizationId) + string("/flow/tags/") + string(*id))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteFlowTagResponse(callApi(params, req, runtime));
}

DeleteFlowTagGroupResponse Alibabacloud_Devops20210625::Client::deleteFlowTagGroup(shared_ptr<string> organizationId, shared_ptr<string> id) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteFlowTagGroupWithOptions(organizationId, id, headers, runtime);
}

DeleteFlowTagGroupResponse Alibabacloud_Devops20210625::Client::deleteFlowTagGroupWithOptions(shared_ptr<string> organizationId,
                                                                                              shared_ptr<string> id,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  organizationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId));
  id = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(id));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteFlowTagGroup"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(*organizationId) + string("/flow/tagGroups/") + string(*id))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteFlowTagGroupResponse(callApi(params, req, runtime));
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
  organizationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId));
  id = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(id));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteHostGroup"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(*organizationId) + string("/hostGroups/") + string(*id))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteHostGroupResponse(callApi(params, req, runtime));
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
  organizationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId));
  pipelineId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeletePipeline"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(*organizationId) + string("/pipelines/") + string(*pipelineId))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeletePipelineResponse(callApi(params, req, runtime));
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
  organizationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId));
  resourceType = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(resourceType));
  resourceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(resourceId));
  accountId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(accountId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteResourceMember"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(*organizationId) + string("/") + string(*resourceType) + string("/") + string(*resourceId) + string("/members/") + string(*accountId))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteResourceMemberResponse(callApi(params, req, runtime));
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
  organizationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId));
  id = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(id));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteVariableGroup"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(*organizationId) + string("/variableGroups/") + string(*id))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteVariableGroupResponse(callApi(params, req, runtime));
}

FrozenWorkspaceResponse Alibabacloud_Devops20210625::Client::frozenWorkspace(shared_ptr<string> workspaceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return frozenWorkspaceWithOptions(workspaceId, headers, runtime);
}

FrozenWorkspaceResponse Alibabacloud_Devops20210625::Client::frozenWorkspaceWithOptions(shared_ptr<string> workspaceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  workspaceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FrozenWorkspace"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/workspaces/") + string(*workspaceId) + string("/frozen"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FrozenWorkspaceResponse(callApi(params, req, runtime));
}

GetFlowTagGroupResponse Alibabacloud_Devops20210625::Client::getFlowTagGroup(shared_ptr<string> organizationId, shared_ptr<string> id) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getFlowTagGroupWithOptions(organizationId, id, headers, runtime);
}

GetFlowTagGroupResponse Alibabacloud_Devops20210625::Client::getFlowTagGroupWithOptions(shared_ptr<string> organizationId,
                                                                                        shared_ptr<string> id,
                                                                                        shared_ptr<map<string, string>> headers,
                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  organizationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId));
  id = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(id));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFlowTagGroup"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(*organizationId) + string("/flow/tagGroups/") + string(*id))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFlowTagGroupResponse(callApi(params, req, runtime));
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
  organizationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId));
  id = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(id));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetHostGroup"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(*organizationId) + string("/hostGroups/") + string(*id))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetHostGroupResponse(callApi(params, req, runtime));
}

GetOrganizationMemberResponse Alibabacloud_Devops20210625::Client::getOrganizationMember(shared_ptr<string> organizationId, shared_ptr<string> accountId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getOrganizationMemberWithOptions(organizationId, accountId, headers, runtime);
}

GetOrganizationMemberResponse Alibabacloud_Devops20210625::Client::getOrganizationMemberWithOptions(shared_ptr<string> organizationId,
                                                                                                    shared_ptr<string> accountId,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  organizationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId));
  accountId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(accountId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetOrganizationMember"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(*organizationId) + string("/members/") + string(*accountId))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetOrganizationMemberResponse(callApi(params, req, runtime));
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
  organizationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId));
  pipelineId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPipeline"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(*organizationId) + string("/pipelines/") + string(*pipelineId))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPipelineResponse(callApi(params, req, runtime));
}

GetPipelineArtifactUrlResponse Alibabacloud_Devops20210625::Client::getPipelineArtifactUrl(shared_ptr<string> organizationId, shared_ptr<GetPipelineArtifactUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getPipelineArtifactUrlWithOptions(organizationId, request, headers, runtime);
}

GetPipelineArtifactUrlResponse Alibabacloud_Devops20210625::Client::getPipelineArtifactUrlWithOptions(shared_ptr<string> organizationId,
                                                                                                      shared_ptr<GetPipelineArtifactUrlRequest> request,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  organizationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    query->insert(pair<string, string>("fileName", *request->fileName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filePath)) {
    query->insert(pair<string, string>("filePath", *request->filePath));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPipelineArtifactUrl"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(*organizationId) + string("/pipeline/getArtifactDownloadUrl"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPipelineArtifactUrlResponse(callApi(params, req, runtime));
}

GetPipelineEmasArtifactUrlResponse Alibabacloud_Devops20210625::Client::getPipelineEmasArtifactUrl(shared_ptr<string> organizationId,
                                                                                                   shared_ptr<string> emasJobInstanceId,
                                                                                                   shared_ptr<string> md5,
                                                                                                   shared_ptr<string> pipelineId,
                                                                                                   shared_ptr<string> pipelineRunId,
                                                                                                   shared_ptr<GetPipelineEmasArtifactUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getPipelineEmasArtifactUrlWithOptions(organizationId, emasJobInstanceId, md5, pipelineId, pipelineRunId, request, headers, runtime);
}

GetPipelineEmasArtifactUrlResponse Alibabacloud_Devops20210625::Client::getPipelineEmasArtifactUrlWithOptions(shared_ptr<string> organizationId,
                                                                                                              shared_ptr<string> emasJobInstanceId,
                                                                                                              shared_ptr<string> md5,
                                                                                                              shared_ptr<string> pipelineId,
                                                                                                              shared_ptr<string> pipelineRunId,
                                                                                                              shared_ptr<GetPipelineEmasArtifactUrlRequest> request,
                                                                                                              shared_ptr<map<string, string>> headers,
                                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  organizationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId));
  emasJobInstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(emasJobInstanceId));
  md5 = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(md5));
  pipelineId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineId));
  pipelineRunId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineRunId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->serviceConnectionId)) {
    query->insert(pair<string, long>("serviceConnectionId", *request->serviceConnectionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPipelineEmasArtifactUrl"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(*organizationId) + string("/pipeline/") + string(*pipelineId) + string("/pipelineRun/") + string(*pipelineRunId) + string("/emas/artifact/") + string(*emasJobInstanceId) + string("/") + string(*md5))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPipelineEmasArtifactUrlResponse(callApi(params, req, runtime));
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
  organizationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId));
  pipelineId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineId));
  pipelineRunId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineRunId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPipelineRun"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(*organizationId) + string("/pipelines/") + string(*pipelineId) + string("/pipelineRuns/") + string(*pipelineRunId))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPipelineRunResponse(callApi(params, req, runtime));
}

GetPipelineScanReportUrlResponse Alibabacloud_Devops20210625::Client::getPipelineScanReportUrl(shared_ptr<string> organizationId, shared_ptr<GetPipelineScanReportUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getPipelineScanReportUrlWithOptions(organizationId, request, headers, runtime);
}

GetPipelineScanReportUrlResponse Alibabacloud_Devops20210625::Client::getPipelineScanReportUrlWithOptions(shared_ptr<string> organizationId,
                                                                                                          shared_ptr<GetPipelineScanReportUrlRequest> request,
                                                                                                          shared_ptr<map<string, string>> headers,
                                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  organizationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->reportPath)) {
    body->insert(pair<string, string>("reportPath", *request->reportPath));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPipelineScanReportUrl"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(*organizationId) + string("/pipeline/getPipelineScanReportUrl"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPipelineScanReportUrlResponse(callApi(params, req, runtime));
}

GetProjectInfoResponse Alibabacloud_Devops20210625::Client::getProjectInfo(shared_ptr<string> organizationId, shared_ptr<string> projectId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getProjectInfoWithOptions(organizationId, projectId, headers, runtime);
}

GetProjectInfoResponse Alibabacloud_Devops20210625::Client::getProjectInfoWithOptions(shared_ptr<string> organizationId,
                                                                                      shared_ptr<string> projectId,
                                                                                      shared_ptr<map<string, string>> headers,
                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  organizationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId));
  projectId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(projectId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetProjectInfo"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(*organizationId) + string("/project/") + string(*projectId))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetProjectInfoResponse(callApi(params, req, runtime));
}

GetVMDeployOrderResponse Alibabacloud_Devops20210625::Client::getVMDeployOrder(shared_ptr<string> organizationId, shared_ptr<string> pipelineId, shared_ptr<string> deployOrderId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getVMDeployOrderWithOptions(organizationId, pipelineId, deployOrderId, headers, runtime);
}

GetVMDeployOrderResponse Alibabacloud_Devops20210625::Client::getVMDeployOrderWithOptions(shared_ptr<string> organizationId,
                                                                                          shared_ptr<string> pipelineId,
                                                                                          shared_ptr<string> deployOrderId,
                                                                                          shared_ptr<map<string, string>> headers,
                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  organizationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId));
  pipelineId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineId));
  deployOrderId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(deployOrderId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetVMDeployOrder"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(*organizationId) + string("/pipelines/") + string(*pipelineId) + string("/deploy/") + string(*deployOrderId))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetVMDeployOrderResponse(callApi(params, req, runtime));
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
  organizationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId));
  id = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(id));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetVariableGroup"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(*organizationId) + string("/variableGroups/") + string(*id))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetVariableGroupResponse(callApi(params, req, runtime));
}

GetWorkspaceResponse Alibabacloud_Devops20210625::Client::getWorkspace(shared_ptr<string> workspaceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getWorkspaceWithOptions(workspaceId, headers, runtime);
}

GetWorkspaceResponse Alibabacloud_Devops20210625::Client::getWorkspaceWithOptions(shared_ptr<string> workspaceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  workspaceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWorkspace"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/workspaces/") + string(*workspaceId))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetWorkspaceResponse(callApi(params, req, runtime));
}

ListFlowTagGroupsResponse Alibabacloud_Devops20210625::Client::listFlowTagGroups(shared_ptr<string> organizationId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listFlowTagGroupsWithOptions(organizationId, headers, runtime);
}

ListFlowTagGroupsResponse Alibabacloud_Devops20210625::Client::listFlowTagGroupsWithOptions(shared_ptr<string> organizationId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  organizationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListFlowTagGroups"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(*organizationId) + string("/flow/tagGroups"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListFlowTagGroupsResponse(callApi(params, req, runtime));
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
  organizationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->createEndTime)) {
    query->insert(pair<string, long>("createEndTime", *request->createEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createStartTime)) {
    query->insert(pair<string, long>("createStartTime", *request->createStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->creatorAccountIds)) {
    query->insert(pair<string, string>("creatorAccountIds", *request->creatorAccountIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ids)) {
    query->insert(pair<string, string>("ids", *request->ids));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("maxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageOrder)) {
    query->insert(pair<string, string>("pageOrder", *request->pageOrder));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSort)) {
    query->insert(pair<string, string>("pageSort", *request->pageSort));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListHostGroups"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(*organizationId) + string("/hostGroups"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListHostGroupsResponse(callApi(params, req, runtime));
}

ListOrganizationMembersResponse Alibabacloud_Devops20210625::Client::listOrganizationMembers(shared_ptr<string> organizationId, shared_ptr<ListOrganizationMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listOrganizationMembersWithOptions(organizationId, request, headers, runtime);
}

ListOrganizationMembersResponse Alibabacloud_Devops20210625::Client::listOrganizationMembersWithOptions(shared_ptr<string> organizationId,
                                                                                                        shared_ptr<ListOrganizationMembersRequest> request,
                                                                                                        shared_ptr<map<string, string>> headers,
                                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  organizationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->externUid)) {
    query->insert(pair<string, string>("externUid", *request->externUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->joinTimeFrom)) {
    query->insert(pair<string, long>("joinTimeFrom", *request->joinTimeFrom));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->joinTimeTo)) {
    query->insert(pair<string, long>("joinTimeTo", *request->joinTimeTo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("maxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationMemberName)) {
    query->insert(pair<string, string>("organizationMemberName", *request->organizationMemberName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->provider)) {
    query->insert(pair<string, string>("provider", *request->provider));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->state)) {
    query->insert(pair<string, string>("state", *request->state));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListOrganizationMembers"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(*organizationId) + string("/members"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListOrganizationMembersResponse(callApi(params, req, runtime));
}

ListPipelineJobHistorysResponse Alibabacloud_Devops20210625::Client::listPipelineJobHistorys(shared_ptr<string> organizationId, shared_ptr<string> pipelineId, shared_ptr<ListPipelineJobHistorysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listPipelineJobHistorysWithOptions(organizationId, pipelineId, request, headers, runtime);
}

ListPipelineJobHistorysResponse Alibabacloud_Devops20210625::Client::listPipelineJobHistorysWithOptions(shared_ptr<string> organizationId,
                                                                                                        shared_ptr<string> pipelineId,
                                                                                                        shared_ptr<ListPipelineJobHistorysRequest> request,
                                                                                                        shared_ptr<map<string, string>> headers,
                                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  organizationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId));
  pipelineId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->category)) {
    query->insert(pair<string, string>("category", *request->category));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->identifier)) {
    query->insert(pair<string, string>("identifier", *request->identifier));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("maxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPipelineJobHistorys"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(*organizationId) + string("/pipeline/") + string(*pipelineId) + string("/job/historys"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPipelineJobHistorysResponse(callApi(params, req, runtime));
}

ListPipelineJobsResponse Alibabacloud_Devops20210625::Client::listPipelineJobs(shared_ptr<string> organizationId, shared_ptr<string> pipelineId, shared_ptr<ListPipelineJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listPipelineJobsWithOptions(organizationId, pipelineId, request, headers, runtime);
}

ListPipelineJobsResponse Alibabacloud_Devops20210625::Client::listPipelineJobsWithOptions(shared_ptr<string> organizationId,
                                                                                          shared_ptr<string> pipelineId,
                                                                                          shared_ptr<ListPipelineJobsRequest> request,
                                                                                          shared_ptr<map<string, string>> headers,
                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  organizationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId));
  pipelineId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->category)) {
    query->insert(pair<string, string>("category", *request->category));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPipelineJobs"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(*organizationId) + string("/pipeline/") + string(*pipelineId) + string("/jobs"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPipelineJobsResponse(callApi(params, req, runtime));
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
  organizationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId));
  pipelineId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("endTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("maxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("startTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->triggerMode)) {
    query->insert(pair<string, long>("triggerMode", *request->triggerMode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPipelineRuns"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(*organizationId) + string("/pipelines/") + string(*pipelineId) + string("/pipelineRuns"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPipelineRunsResponse(callApi(params, req, runtime));
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
  organizationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->createEndTime)) {
    query->insert(pair<string, long>("createEndTime", *request->createEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createStartTime)) {
    query->insert(pair<string, long>("createStartTime", *request->createStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->creatorAccountIds)) {
    query->insert(pair<string, string>("creatorAccountIds", *request->creatorAccountIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->executeAccountIds)) {
    query->insert(pair<string, string>("executeAccountIds", *request->executeAccountIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->executeEndTime)) {
    query->insert(pair<string, long>("executeEndTime", *request->executeEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->executeStartTime)) {
    query->insert(pair<string, long>("executeStartTime", *request->executeStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("maxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pipelineName)) {
    query->insert(pair<string, string>("pipelineName", *request->pipelineName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->statusList)) {
    query->insert(pair<string, string>("statusList", *request->statusList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPipelines"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(*organizationId) + string("/pipelines"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPipelinesResponse(callApi(params, req, runtime));
}

ListProjectMembersResponse Alibabacloud_Devops20210625::Client::listProjectMembers(shared_ptr<string> organizationId, shared_ptr<string> projectId, shared_ptr<ListProjectMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listProjectMembersWithOptions(organizationId, projectId, request, headers, runtime);
}

ListProjectMembersResponse Alibabacloud_Devops20210625::Client::listProjectMembersWithOptions(shared_ptr<string> organizationId,
                                                                                              shared_ptr<string> projectId,
                                                                                              shared_ptr<ListProjectMembersRequest> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  organizationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId));
  projectId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(projectId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->targetType)) {
    query->insert(pair<string, string>("targetType", *request->targetType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProjectMembers"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(*organizationId) + string("/projects/") + string(*projectId) + string("/listMembers"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProjectMembersResponse(callApi(params, req, runtime));
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
  organizationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId));
  resourceType = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(resourceType));
  resourceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(resourceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListResourceMembers"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(*organizationId) + string("/") + string(*resourceType) + string("/") + string(*resourceId) + string("/members"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListResourceMembersResponse(callApi(params, req, runtime));
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
  organizationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->sericeConnectionType)) {
    query->insert(pair<string, string>("sericeConnectionType", *request->sericeConnectionType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListServiceConnections"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(*organizationId) + string("/serviceConnections"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListServiceConnectionsResponse(callApi(params, req, runtime));
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
  organizationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("maxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageOrder)) {
    query->insert(pair<string, string>("pageOrder", *request->pageOrder));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSort)) {
    query->insert(pair<string, string>("pageSort", *request->pageSort));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListVariableGroups"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(*organizationId) + string("/variableGroups"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListVariableGroupsResponse(callApi(params, req, runtime));
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
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("maxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->statusListShrink)) {
    query->insert(pair<string, string>("statusList", *request->statusListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceTemplateListShrink)) {
    query->insert(pair<string, string>("workspaceTemplateList", *request->workspaceTemplateListShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListWorkspaces"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/workspaces"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListWorkspacesResponse(callApi(params, req, runtime));
}

LogPipelineJobRunResponse Alibabacloud_Devops20210625::Client::logPipelineJobRun(shared_ptr<string> organizationId,
                                                                                 shared_ptr<string> pipelineId,
                                                                                 shared_ptr<string> jobId,
                                                                                 shared_ptr<string> pipelineRunId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return logPipelineJobRunWithOptions(organizationId, pipelineId, jobId, pipelineRunId, headers, runtime);
}

LogPipelineJobRunResponse Alibabacloud_Devops20210625::Client::logPipelineJobRunWithOptions(shared_ptr<string> organizationId,
                                                                                            shared_ptr<string> pipelineId,
                                                                                            shared_ptr<string> jobId,
                                                                                            shared_ptr<string> pipelineRunId,
                                                                                            shared_ptr<map<string, string>> headers,
                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  organizationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId));
  pipelineId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineId));
  jobId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(jobId));
  pipelineRunId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineRunId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("LogPipelineJobRun"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(*organizationId) + string("/pipeline/") + string(*pipelineId) + string("/pipelineRun/") + string(*pipelineRunId) + string("/job/") + string(*jobId) + string("/logs"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return LogPipelineJobRunResponse(callApi(params, req, runtime));
}

LogVMDeployMachineResponse Alibabacloud_Devops20210625::Client::logVMDeployMachine(shared_ptr<string> organizationId,
                                                                                   shared_ptr<string> pipelineId,
                                                                                   shared_ptr<string> deployOrderId,
                                                                                   shared_ptr<string> machineSn) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return logVMDeployMachineWithOptions(organizationId, pipelineId, deployOrderId, machineSn, headers, runtime);
}

LogVMDeployMachineResponse Alibabacloud_Devops20210625::Client::logVMDeployMachineWithOptions(shared_ptr<string> organizationId,
                                                                                              shared_ptr<string> pipelineId,
                                                                                              shared_ptr<string> deployOrderId,
                                                                                              shared_ptr<string> machineSn,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  organizationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId));
  pipelineId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineId));
  deployOrderId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(deployOrderId));
  machineSn = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(machineSn));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("LogVMDeployMachine"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(*organizationId) + string("/pipelines/") + string(*pipelineId) + string("/deploy/") + string(*deployOrderId) + string("/machine/") + string(*machineSn) + string("/log"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return LogVMDeployMachineResponse(callApi(params, req, runtime));
}

PassPipelineValidateResponse Alibabacloud_Devops20210625::Client::passPipelineValidate(shared_ptr<string> organizationId,
                                                                                       shared_ptr<string> pipelineId,
                                                                                       shared_ptr<string> pipelineRunId,
                                                                                       shared_ptr<string> jobId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return passPipelineValidateWithOptions(organizationId, pipelineId, pipelineRunId, jobId, headers, runtime);
}

PassPipelineValidateResponse Alibabacloud_Devops20210625::Client::passPipelineValidateWithOptions(shared_ptr<string> organizationId,
                                                                                                  shared_ptr<string> pipelineId,
                                                                                                  shared_ptr<string> pipelineRunId,
                                                                                                  shared_ptr<string> jobId,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  organizationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId));
  pipelineId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineId));
  pipelineRunId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineRunId));
  jobId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(jobId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PassPipelineValidate"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(*organizationId) + string("/pipelines/") + string(*pipelineId) + string("/pipelineRuns/") + string(*pipelineRunId) + string("/jobs/") + string(*jobId) + string("/pass"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PassPipelineValidateResponse(callApi(params, req, runtime));
}

RefusePipelineValidateResponse Alibabacloud_Devops20210625::Client::refusePipelineValidate(shared_ptr<string> organizationId,
                                                                                           shared_ptr<string> pipelineId,
                                                                                           shared_ptr<string> pipelineRunId,
                                                                                           shared_ptr<string> jobId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return refusePipelineValidateWithOptions(organizationId, pipelineId, pipelineRunId, jobId, headers, runtime);
}

RefusePipelineValidateResponse Alibabacloud_Devops20210625::Client::refusePipelineValidateWithOptions(shared_ptr<string> organizationId,
                                                                                                      shared_ptr<string> pipelineId,
                                                                                                      shared_ptr<string> pipelineRunId,
                                                                                                      shared_ptr<string> jobId,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  organizationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId));
  pipelineId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineId));
  pipelineRunId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineRunId));
  jobId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(jobId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RefusePipelineValidate"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(*organizationId) + string("/pipelines/") + string(*pipelineId) + string("/pipelineRuns/") + string(*pipelineRunId) + string("/jobs/") + string(*jobId) + string("/refuse"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RefusePipelineValidateResponse(callApi(params, req, runtime));
}

ReleaseWorkspaceResponse Alibabacloud_Devops20210625::Client::releaseWorkspace(shared_ptr<string> workspaceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return releaseWorkspaceWithOptions(workspaceId, headers, runtime);
}

ReleaseWorkspaceResponse Alibabacloud_Devops20210625::Client::releaseWorkspaceWithOptions(shared_ptr<string> workspaceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  workspaceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReleaseWorkspace"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/workspaces/") + string(*workspaceId) + string("/release"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReleaseWorkspaceResponse(callApi(params, req, runtime));
}

ResetSshKeyResponse Alibabacloud_Devops20210625::Client::resetSshKey(shared_ptr<string> organizationId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return resetSshKeyWithOptions(organizationId, headers, runtime);
}

ResetSshKeyResponse Alibabacloud_Devops20210625::Client::resetSshKeyWithOptions(shared_ptr<string> organizationId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  organizationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResetSshKey"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(*organizationId) + string("/sshKey"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResetSshKeyResponse(callApi(params, req, runtime));
}

ResumeVMDeployOrderResponse Alibabacloud_Devops20210625::Client::resumeVMDeployOrder(shared_ptr<string> organizationId, shared_ptr<string> pipelineId, shared_ptr<string> deployOrderId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return resumeVMDeployOrderWithOptions(organizationId, pipelineId, deployOrderId, headers, runtime);
}

ResumeVMDeployOrderResponse Alibabacloud_Devops20210625::Client::resumeVMDeployOrderWithOptions(shared_ptr<string> organizationId,
                                                                                                shared_ptr<string> pipelineId,
                                                                                                shared_ptr<string> deployOrderId,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  organizationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId));
  pipelineId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineId));
  deployOrderId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(deployOrderId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResumeVMDeployOrder"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(*organizationId) + string("/pipelines/") + string(*pipelineId) + string("/deploy/") + string(*deployOrderId) + string("/resume"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResumeVMDeployOrderResponse(callApi(params, req, runtime));
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
  organizationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId));
  pipelineId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineId));
  pipelineRunId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineRunId));
  jobId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(jobId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RetryPipelineJobRun"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(*organizationId) + string("/pipelines/") + string(*pipelineId) + string("/pipelineRuns/") + string(*pipelineRunId) + string("/jobs/") + string(*jobId))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RetryPipelineJobRunResponse(callApi(params, req, runtime));
}

RetryVMDeployMachineResponse Alibabacloud_Devops20210625::Client::retryVMDeployMachine(shared_ptr<string> organizationId,
                                                                                       shared_ptr<string> pipelineId,
                                                                                       shared_ptr<string> deployOrderId,
                                                                                       shared_ptr<string> machineSn) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return retryVMDeployMachineWithOptions(organizationId, pipelineId, deployOrderId, machineSn, headers, runtime);
}

RetryVMDeployMachineResponse Alibabacloud_Devops20210625::Client::retryVMDeployMachineWithOptions(shared_ptr<string> organizationId,
                                                                                                  shared_ptr<string> pipelineId,
                                                                                                  shared_ptr<string> deployOrderId,
                                                                                                  shared_ptr<string> machineSn,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  organizationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId));
  pipelineId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineId));
  deployOrderId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(deployOrderId));
  machineSn = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(machineSn));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RetryVMDeployMachine"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(*organizationId) + string("/pipelines/") + string(*pipelineId) + string("/deploy/") + string(*deployOrderId) + string("/machine/") + string(*machineSn) + string("/retry"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RetryVMDeployMachineResponse(callApi(params, req, runtime));
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
  organizationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId));
  pipelineId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineId));
  pipelineRunId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineRunId));
  jobId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(jobId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SkipPipelineJobRun"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(*organizationId) + string("/pipelines/") + string(*pipelineId) + string("/pipelineRuns/") + string(*pipelineRunId) + string("/jobs/") + string(*jobId) + string("/skip"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SkipPipelineJobRunResponse(callApi(params, req, runtime));
}

SkipVMDeployMachineResponse Alibabacloud_Devops20210625::Client::skipVMDeployMachine(shared_ptr<string> organizationId,
                                                                                     shared_ptr<string> pipelineId,
                                                                                     shared_ptr<string> deployOrderId,
                                                                                     shared_ptr<string> machineSn) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return skipVMDeployMachineWithOptions(organizationId, pipelineId, deployOrderId, machineSn, headers, runtime);
}

SkipVMDeployMachineResponse Alibabacloud_Devops20210625::Client::skipVMDeployMachineWithOptions(shared_ptr<string> organizationId,
                                                                                                shared_ptr<string> pipelineId,
                                                                                                shared_ptr<string> deployOrderId,
                                                                                                shared_ptr<string> machineSn,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  organizationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId));
  pipelineId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineId));
  deployOrderId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(deployOrderId));
  machineSn = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(machineSn));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SkipVMDeployMachine"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(*organizationId) + string("/pipelines/") + string(*pipelineId) + string("/deploy/") + string(*deployOrderId) + string("/machine/") + string(*machineSn) + string("/skip"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SkipVMDeployMachineResponse(callApi(params, req, runtime));
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
  organizationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId));
  pipelineId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineId));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->params)) {
    body->insert(pair<string, string>("params", *request->params));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartPipelineRun"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organizations/") + string(*organizationId) + string("/pipelines/") + string(*pipelineId) + string("/run"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartPipelineRunResponse(callApi(params, req, runtime));
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
  organizationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId));
  pipelineId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineId));
  pipelineRunId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineRunId));
  jobId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(jobId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopPipelineJobRun"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(*organizationId) + string("/pipelines/") + string(*pipelineId) + string("/pipelineRuns/") + string(*pipelineRunId) + string("/jobs/") + string(*jobId) + string("/stop"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopPipelineJobRunResponse(callApi(params, req, runtime));
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
  organizationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId));
  pipelineId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineId));
  pipelineRunId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineRunId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopPipelineRun"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(*organizationId) + string("/pipelines/") + string(*pipelineId) + string("/pipelineRuns/") + string(*pipelineRunId) + string("/stop"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopPipelineRunResponse(callApi(params, req, runtime));
}

StopVMDeployOrderResponse Alibabacloud_Devops20210625::Client::stopVMDeployOrder(shared_ptr<string> organizationId, shared_ptr<string> pipelineId, shared_ptr<string> deployOrderId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return stopVMDeployOrderWithOptions(organizationId, pipelineId, deployOrderId, headers, runtime);
}

StopVMDeployOrderResponse Alibabacloud_Devops20210625::Client::stopVMDeployOrderWithOptions(shared_ptr<string> organizationId,
                                                                                            shared_ptr<string> pipelineId,
                                                                                            shared_ptr<string> deployOrderId,
                                                                                            shared_ptr<map<string, string>> headers,
                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  organizationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId));
  pipelineId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineId));
  deployOrderId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(deployOrderId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopVMDeployOrder"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(*organizationId) + string("/pipelines/") + string(*pipelineId) + string("/deploy/") + string(*deployOrderId) + string("/stop"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopVMDeployOrderResponse(callApi(params, req, runtime));
}

UpdateFlowTagResponse Alibabacloud_Devops20210625::Client::updateFlowTag(shared_ptr<string> organizationId, shared_ptr<string> id, shared_ptr<UpdateFlowTagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateFlowTagWithOptions(organizationId, id, request, headers, runtime);
}

UpdateFlowTagResponse Alibabacloud_Devops20210625::Client::updateFlowTagWithOptions(shared_ptr<string> organizationId,
                                                                                    shared_ptr<string> id,
                                                                                    shared_ptr<UpdateFlowTagRequest> request,
                                                                                    shared_ptr<map<string, string>> headers,
                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  organizationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId));
  id = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(id));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->color)) {
    query->insert(pair<string, string>("color", *request->color));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->flowTagGroupId)) {
    query->insert(pair<string, long>("flowTagGroupId", *request->flowTagGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateFlowTag"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(*organizationId) + string("/flow/tags/") + string(*id))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateFlowTagResponse(callApi(params, req, runtime));
}

UpdateFlowTagGroupResponse Alibabacloud_Devops20210625::Client::updateFlowTagGroup(shared_ptr<string> organizationId, shared_ptr<string> id, shared_ptr<UpdateFlowTagGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateFlowTagGroupWithOptions(organizationId, id, request, headers, runtime);
}

UpdateFlowTagGroupResponse Alibabacloud_Devops20210625::Client::updateFlowTagGroupWithOptions(shared_ptr<string> organizationId,
                                                                                              shared_ptr<string> id,
                                                                                              shared_ptr<UpdateFlowTagGroupRequest> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  organizationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId));
  id = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(id));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateFlowTagGroup"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(*organizationId) + string("/flow/tagGroups/") + string(*id))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateFlowTagGroupResponse(callApi(params, req, runtime));
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
  organizationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId));
  id = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(id));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunRegion)) {
    body->insert(pair<string, string>("aliyunRegion", *request->aliyunRegion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecsLabelKey)) {
    body->insert(pair<string, string>("ecsLabelKey", *request->ecsLabelKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecsLabelValue)) {
    body->insert(pair<string, string>("ecsLabelValue", *request->ecsLabelValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecsType)) {
    body->insert(pair<string, string>("ecsType", *request->ecsType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->envId)) {
    body->insert(pair<string, string>("envId", *request->envId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->machineInfos)) {
    body->insert(pair<string, string>("machineInfos", *request->machineInfos));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->serviceConnectionId)) {
    body->insert(pair<string, long>("serviceConnectionId", *request->serviceConnectionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagIds)) {
    body->insert(pair<string, string>("tagIds", *request->tagIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateHostGroup"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(*organizationId) + string("/hostGroups/") + string(*id))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateHostGroupResponse(callApi(params, req, runtime));
}

UpdatePipelineBaseInfoResponse Alibabacloud_Devops20210625::Client::updatePipelineBaseInfo(shared_ptr<string> organizationId, shared_ptr<string> pipelineId, shared_ptr<UpdatePipelineBaseInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updatePipelineBaseInfoWithOptions(organizationId, pipelineId, request, headers, runtime);
}

UpdatePipelineBaseInfoResponse Alibabacloud_Devops20210625::Client::updatePipelineBaseInfoWithOptions(shared_ptr<string> organizationId,
                                                                                                      shared_ptr<string> pipelineId,
                                                                                                      shared_ptr<UpdatePipelineBaseInfoRequest> request,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  organizationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId));
  pipelineId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pipelineId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->envId)) {
    query->insert(pair<string, long>("envId", *request->envId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pipelineName)) {
    query->insert(pair<string, string>("pipelineName", *request->pipelineName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagList)) {
    query->insert(pair<string, string>("tagList", *request->tagList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdatePipelineBaseInfo"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(*organizationId) + string("/pipelines/") + string(*pipelineId) + string("/baseInfo"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdatePipelineBaseInfoResponse(callApi(params, req, runtime));
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
  organizationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId));
  resourceType = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(resourceType));
  resourceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(resourceId));
  accountId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(accountId));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->roleName)) {
    body->insert(pair<string, string>("roleName", *request->roleName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateResourceMember"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(*organizationId) + string("/") + string(*resourceType) + string("/") + string(*resourceId) + string("/members/") + string(*accountId))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateResourceMemberResponse(callApi(params, req, runtime));
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
  organizationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationId));
  id = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(id));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->variables)) {
    body->insert(pair<string, string>("variables", *request->variables));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateVariableGroup"))},
    {"version", boost::any(string("2021-06-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/organization/") + string(*organizationId) + string("/variableGroups/") + string(*id))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateVariableGroupResponse(callApi(params, req, runtime));
}

