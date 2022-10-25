// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/codeup_20200414.hpp>
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

using namespace Alibabacloud_Codeup20200414;

Alibabacloud_Codeup20200414::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _signatureAlgorithm = make_shared<string>("v2");
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("codeup"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Codeup20200414::Client::getEndpoint(shared_ptr<string> productId,
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

AcceptMergeRequestResponse Alibabacloud_Codeup20200414::Client::acceptMergeRequest(shared_ptr<string> ProjectId, shared_ptr<string> MergeRequestId, shared_ptr<AcceptMergeRequestRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return acceptMergeRequestWithOptions(ProjectId, MergeRequestId, request, headers, runtime);
}

AcceptMergeRequestResponse Alibabacloud_Codeup20200414::Client::acceptMergeRequestWithOptions(shared_ptr<string> ProjectId,
                                                                                              shared_ptr<string> MergeRequestId,
                                                                                              shared_ptr<AcceptMergeRequestRequest> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AcceptMergeRequest"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v3/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)) + string("/merge_request/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(MergeRequestId)) + string("/accept"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AcceptMergeRequestResponse(callApi(params, req, runtime));
}

AddGroupMemberResponse Alibabacloud_Codeup20200414::Client::addGroupMember(shared_ptr<string> GroupId, shared_ptr<AddGroupMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return addGroupMemberWithOptions(GroupId, request, headers, runtime);
}

AddGroupMemberResponse Alibabacloud_Codeup20200414::Client::addGroupMemberWithOptions(shared_ptr<string> GroupId,
                                                                                      shared_ptr<AddGroupMemberRequest> request,
                                                                                      shared_ptr<map<string, string>> headers,
                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    query->insert(pair<string, string>("SubUserId", *request->subUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddGroupMember"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v4/groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(GroupId)) + string("/members"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddGroupMemberResponse(callApi(params, req, runtime));
}

AddRepositoryMemberResponse Alibabacloud_Codeup20200414::Client::addRepositoryMember(shared_ptr<string> ProjectId, shared_ptr<AddRepositoryMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return addRepositoryMemberWithOptions(ProjectId, request, headers, runtime);
}

AddRepositoryMemberResponse Alibabacloud_Codeup20200414::Client::addRepositoryMemberWithOptions(shared_ptr<string> ProjectId,
                                                                                                shared_ptr<AddRepositoryMemberRequest> request,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    query->insert(pair<string, string>("SubUserId", *request->subUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddRepositoryMember"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v4/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)) + string("/members"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddRepositoryMemberResponse(callApi(params, req, runtime));
}

AddWebhookResponse Alibabacloud_Codeup20200414::Client::addWebhook(shared_ptr<string> ProjectId, shared_ptr<AddWebhookRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return addWebhookWithOptions(ProjectId, request, headers, runtime);
}

AddWebhookResponse Alibabacloud_Codeup20200414::Client::addWebhookWithOptions(shared_ptr<string> ProjectId,
                                                                              shared_ptr<AddWebhookRequest> request,
                                                                              shared_ptr<map<string, string>> headers,
                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddWebhook"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v3/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)) + string("/hooks"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddWebhookResponse(callApi(params, req, runtime));
}

CreateBranchResponse Alibabacloud_Codeup20200414::Client::createBranch(shared_ptr<string> ProjectId, shared_ptr<CreateBranchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createBranchWithOptions(ProjectId, request, headers, runtime);
}

CreateBranchResponse Alibabacloud_Codeup20200414::Client::createBranchWithOptions(shared_ptr<string> ProjectId,
                                                                                  shared_ptr<CreateBranchRequest> request,
                                                                                  shared_ptr<map<string, string>> headers,
                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    query->insert(pair<string, string>("SubUserId", *request->subUserId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->branchName)) {
    body->insert(pair<string, string>("branchName", *request->branchName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ref)) {
    body->insert(pair<string, string>("ref", *request->ref));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateBranch"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v3/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)) + string("/repository/branches"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateBranchResponse(callApi(params, req, runtime));
}

CreateFileResponse Alibabacloud_Codeup20200414::Client::createFile(shared_ptr<string> ProjectId, shared_ptr<CreateFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createFileWithOptions(ProjectId, request, headers, runtime);
}

CreateFileResponse Alibabacloud_Codeup20200414::Client::createFileWithOptions(shared_ptr<string> ProjectId,
                                                                              shared_ptr<CreateFileRequest> request,
                                                                              shared_ptr<map<string, string>> headers,
                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    query->insert(pair<string, string>("SubUserId", *request->subUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateFile"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v3/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)) + string("/repository/files"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateFileResponse(callApi(params, req, runtime));
}

CreateMergeRequestResponse Alibabacloud_Codeup20200414::Client::createMergeRequest(shared_ptr<string> ProjectId, shared_ptr<CreateMergeRequestRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createMergeRequestWithOptions(ProjectId, request, headers, runtime);
}

CreateMergeRequestResponse Alibabacloud_Codeup20200414::Client::createMergeRequestWithOptions(shared_ptr<string> ProjectId,
                                                                                              shared_ptr<CreateMergeRequestRequest> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    query->insert(pair<string, string>("SubUserId", *request->subUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMergeRequest"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v4/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)) + string("/merge_requests"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateMergeRequestResponse(callApi(params, req, runtime));
}

CreateMergeRequestCommentResponse Alibabacloud_Codeup20200414::Client::createMergeRequestComment(shared_ptr<string> ProjectId, shared_ptr<string> MergeRequestId, shared_ptr<CreateMergeRequestCommentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createMergeRequestCommentWithOptions(ProjectId, MergeRequestId, request, headers, runtime);
}

CreateMergeRequestCommentResponse Alibabacloud_Codeup20200414::Client::createMergeRequestCommentWithOptions(shared_ptr<string> ProjectId,
                                                                                                            shared_ptr<string> MergeRequestId,
                                                                                                            shared_ptr<CreateMergeRequestCommentRequest> request,
                                                                                                            shared_ptr<map<string, string>> headers,
                                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMergeRequestComment"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v4/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)) + string("/merge_request/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(MergeRequestId)) + string("/comments"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateMergeRequestCommentResponse(callApi(params, req, runtime));
}

CreateRepositoryResponse Alibabacloud_Codeup20200414::Client::createRepository(shared_ptr<CreateRepositoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createRepositoryWithOptions(request, headers, runtime);
}

CreateRepositoryResponse Alibabacloud_Codeup20200414::Client::createRepositoryWithOptions(shared_ptr<CreateRepositoryRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->createParentPath)) {
    query->insert(pair<string, bool>("CreateParentPath", *request->createParentPath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    query->insert(pair<string, string>("SubUserId", *request->subUserId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->sync)) {
    query->insert(pair<string, bool>("Sync", *request->sync));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->avatarUrl)) {
    body->insert(pair<string, string>("avatarUrl", *request->avatarUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gitignoreType)) {
    body->insert(pair<string, string>("gitignoreType", *request->gitignoreType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->importAccount)) {
    body->insert(pair<string, string>("importAccount", *request->importAccount));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->importDemoProject)) {
    body->insert(pair<string, bool>("importDemoProject", *request->importDemoProject));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->importRepoType)) {
    body->insert(pair<string, string>("importRepoType", *request->importRepoType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->importToken)) {
    body->insert(pair<string, string>("importToken", *request->importToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->importTokenEncrypted)) {
    body->insert(pair<string, string>("importTokenEncrypted", *request->importTokenEncrypted));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->importUrl)) {
    body->insert(pair<string, string>("importUrl", *request->importUrl));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->initStandardService)) {
    body->insert(pair<string, bool>("initStandardService", *request->initStandardService));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isCryptoEnabled)) {
    body->insert(pair<string, bool>("isCryptoEnabled", *request->isCryptoEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->localImportUrl)) {
    body->insert(pair<string, string>("localImportUrl", *request->localImportUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->namespaceId)) {
    body->insert(pair<string, long>("namespaceId", *request->namespaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->path)) {
    body->insert(pair<string, string>("path", *request->path));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->readmeType)) {
    body->insert(pair<string, string>("readmeType", *request->readmeType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->visibilityLevel)) {
    body->insert(pair<string, long>("visibilityLevel", *request->visibilityLevel));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRepository"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v3/projects"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateRepositoryResponse(callApi(params, req, runtime));
}

CreateRepositoryDeployKeyResponse Alibabacloud_Codeup20200414::Client::createRepositoryDeployKey(shared_ptr<string> ProjectId, shared_ptr<CreateRepositoryDeployKeyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createRepositoryDeployKeyWithOptions(ProjectId, request, headers, runtime);
}

CreateRepositoryDeployKeyResponse Alibabacloud_Codeup20200414::Client::createRepositoryDeployKeyWithOptions(shared_ptr<string> ProjectId,
                                                                                                            shared_ptr<CreateRepositoryDeployKeyRequest> request,
                                                                                                            shared_ptr<map<string, string>> headers,
                                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    query->insert(pair<string, string>("SubUserId", *request->subUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRepositoryDeployKey"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v3/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)) + string("/keys"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateRepositoryDeployKeyResponse(callApi(params, req, runtime));
}

CreateRepositoryGroupResponse Alibabacloud_Codeup20200414::Client::createRepositoryGroup(shared_ptr<CreateRepositoryGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createRepositoryGroupWithOptions(request, headers, runtime);
}

CreateRepositoryGroupResponse Alibabacloud_Codeup20200414::Client::createRepositoryGroupWithOptions(shared_ptr<CreateRepositoryGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    query->insert(pair<string, string>("SubUserId", *request->subUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRepositoryGroup"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v3/groups"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateRepositoryGroupResponse(callApi(params, req, runtime));
}

CreateRepositoryProtectedBranchResponse Alibabacloud_Codeup20200414::Client::createRepositoryProtectedBranch(shared_ptr<string> ProjectId, shared_ptr<CreateRepositoryProtectedBranchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createRepositoryProtectedBranchWithOptions(ProjectId, request, headers, runtime);
}

CreateRepositoryProtectedBranchResponse Alibabacloud_Codeup20200414::Client::createRepositoryProtectedBranchWithOptions(shared_ptr<string> ProjectId,
                                                                                                                        shared_ptr<CreateRepositoryProtectedBranchRequest> request,
                                                                                                                        shared_ptr<map<string, string>> headers,
                                                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRepositoryProtectedBranch"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v4/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)) + string("/repository/protect_branches"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateRepositoryProtectedBranchResponse(callApi(params, req, runtime));
}

CreateSshKeyResponse Alibabacloud_Codeup20200414::Client::createSshKey(shared_ptr<CreateSshKeyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createSshKeyWithOptions(request, headers, runtime);
}

CreateSshKeyResponse Alibabacloud_Codeup20200414::Client::createSshKeyWithOptions(shared_ptr<CreateSshKeyRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSshKey"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v3/user/keys"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSshKeyResponse(callApi(params, req, runtime));
}

CreateTagResponse Alibabacloud_Codeup20200414::Client::createTag(shared_ptr<string> ProjectId, shared_ptr<CreateTagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createTagWithOptions(ProjectId, request, headers, runtime);
}

CreateTagResponse Alibabacloud_Codeup20200414::Client::createTagWithOptions(shared_ptr<string> ProjectId,
                                                                            shared_ptr<CreateTagRequest> request,
                                                                            shared_ptr<map<string, string>> headers,
                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    query->insert(pair<string, string>("SubUserId", *request->subUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTag"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v3/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)) + string("/repository/tags"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTagResponse(callApi(params, req, runtime));
}

DeleteBranchResponse Alibabacloud_Codeup20200414::Client::deleteBranch(shared_ptr<string> ProjectId, shared_ptr<DeleteBranchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteBranchWithOptions(ProjectId, request, headers, runtime);
}

DeleteBranchResponse Alibabacloud_Codeup20200414::Client::deleteBranchWithOptions(shared_ptr<string> ProjectId,
                                                                                  shared_ptr<DeleteBranchRequest> request,
                                                                                  shared_ptr<map<string, string>> headers,
                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->branchName)) {
    query->insert(pair<string, string>("BranchName", *request->branchName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    query->insert(pair<string, string>("SubUserId", *request->subUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteBranch"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v3/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)) + string("/repository/branches/delete"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteBranchResponse(callApi(params, req, runtime));
}

DeleteFileResponse Alibabacloud_Codeup20200414::Client::deleteFile(shared_ptr<string> ProjectId, shared_ptr<DeleteFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteFileWithOptions(ProjectId, request, headers, runtime);
}

DeleteFileResponse Alibabacloud_Codeup20200414::Client::deleteFileWithOptions(shared_ptr<string> ProjectId,
                                                                              shared_ptr<DeleteFileRequest> request,
                                                                              shared_ptr<map<string, string>> headers,
                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->branchName)) {
    query->insert(pair<string, string>("BranchName", *request->branchName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->commitMessage)) {
    query->insert(pair<string, string>("CommitMessage", *request->commitMessage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filePath)) {
    query->insert(pair<string, string>("FilePath", *request->filePath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    query->insert(pair<string, string>("SubUserId", *request->subUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteFile"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v3/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)) + string("/repository/files"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteFileResponse(callApi(params, req, runtime));
}

DeleteGroupMemberResponse Alibabacloud_Codeup20200414::Client::deleteGroupMember(shared_ptr<string> GroupId, shared_ptr<string> UserId, shared_ptr<DeleteGroupMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteGroupMemberWithOptions(GroupId, UserId, request, headers, runtime);
}

DeleteGroupMemberResponse Alibabacloud_Codeup20200414::Client::deleteGroupMemberWithOptions(shared_ptr<string> GroupId,
                                                                                            shared_ptr<string> UserId,
                                                                                            shared_ptr<DeleteGroupMemberRequest> request,
                                                                                            shared_ptr<map<string, string>> headers,
                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    query->insert(pair<string, string>("SubUserId", *request->subUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteGroupMember"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v3/groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(GroupId)) + string("/members/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(UserId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteGroupMemberResponse(callApi(params, req, runtime));
}

DeleteRepositoryResponse Alibabacloud_Codeup20200414::Client::deleteRepository(shared_ptr<string> ProjectId, shared_ptr<DeleteRepositoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteRepositoryWithOptions(ProjectId, request, headers, runtime);
}

DeleteRepositoryResponse Alibabacloud_Codeup20200414::Client::deleteRepositoryWithOptions(shared_ptr<string> ProjectId,
                                                                                          shared_ptr<DeleteRepositoryRequest> request,
                                                                                          shared_ptr<map<string, string>> headers,
                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    query->insert(pair<string, string>("SubUserId", *request->subUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteRepository"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v3/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)) + string("/remove"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteRepositoryResponse(callApi(params, req, runtime));
}

DeleteRepositoryGroupResponse Alibabacloud_Codeup20200414::Client::deleteRepositoryGroup(shared_ptr<string> GroupId, shared_ptr<DeleteRepositoryGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteRepositoryGroupWithOptions(GroupId, request, headers, runtime);
}

DeleteRepositoryGroupResponse Alibabacloud_Codeup20200414::Client::deleteRepositoryGroupWithOptions(shared_ptr<string> GroupId,
                                                                                                    shared_ptr<DeleteRepositoryGroupRequest> request,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    query->insert(pair<string, string>("SubUserId", *request->subUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteRepositoryGroup"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v3/groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(GroupId)) + string("/remove"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteRepositoryGroupResponse(callApi(params, req, runtime));
}

DeleteRepositoryMemberResponse Alibabacloud_Codeup20200414::Client::deleteRepositoryMember(shared_ptr<string> ProjectId, shared_ptr<string> UserId, shared_ptr<DeleteRepositoryMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteRepositoryMemberWithOptions(ProjectId, UserId, request, headers, runtime);
}

DeleteRepositoryMemberResponse Alibabacloud_Codeup20200414::Client::deleteRepositoryMemberWithOptions(shared_ptr<string> ProjectId,
                                                                                                      shared_ptr<string> UserId,
                                                                                                      shared_ptr<DeleteRepositoryMemberRequest> request,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    query->insert(pair<string, string>("SubUserId", *request->subUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteRepositoryMember"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v3/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)) + string("/members/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(UserId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteRepositoryMemberResponse(callApi(params, req, runtime));
}

DeleteRepositoryMemberWithExternUidResponse Alibabacloud_Codeup20200414::Client::deleteRepositoryMemberWithExternUid(shared_ptr<string> ProjectId, shared_ptr<DeleteRepositoryMemberWithExternUidRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteRepositoryMemberWithExternUidWithOptions(ProjectId, request, headers, runtime);
}

DeleteRepositoryMemberWithExternUidResponse Alibabacloud_Codeup20200414::Client::deleteRepositoryMemberWithExternUidWithOptions(shared_ptr<string> ProjectId,
                                                                                                                                shared_ptr<DeleteRepositoryMemberWithExternUidRequest> request,
                                                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->externUserId)) {
    query->insert(pair<string, string>("ExternUserId", *request->externUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteRepositoryMemberWithExternUid"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v4/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)) + string("/members/remove"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteRepositoryMemberWithExternUidResponse(callApi(params, req, runtime));
}

DeleteRepositoryProtectedBranchResponse Alibabacloud_Codeup20200414::Client::deleteRepositoryProtectedBranch(shared_ptr<string> ProjectId, shared_ptr<string> ProtectedBranchId, shared_ptr<DeleteRepositoryProtectedBranchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteRepositoryProtectedBranchWithOptions(ProjectId, ProtectedBranchId, request, headers, runtime);
}

DeleteRepositoryProtectedBranchResponse Alibabacloud_Codeup20200414::Client::deleteRepositoryProtectedBranchWithOptions(shared_ptr<string> ProjectId,
                                                                                                                        shared_ptr<string> ProtectedBranchId,
                                                                                                                        shared_ptr<DeleteRepositoryProtectedBranchRequest> request,
                                                                                                                        shared_ptr<map<string, string>> headers,
                                                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteRepositoryProtectedBranch"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v4/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)) + string("/repository/protect_branches/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProtectedBranchId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteRepositoryProtectedBranchResponse(callApi(params, req, runtime));
}

DeleteRepositoryTagResponse Alibabacloud_Codeup20200414::Client::deleteRepositoryTag(shared_ptr<string> ProjectId, shared_ptr<string> TagName, shared_ptr<DeleteRepositoryTagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteRepositoryTagWithOptions(ProjectId, TagName, request, headers, runtime);
}

DeleteRepositoryTagResponse Alibabacloud_Codeup20200414::Client::deleteRepositoryTagWithOptions(shared_ptr<string> ProjectId,
                                                                                                shared_ptr<string> TagName,
                                                                                                shared_ptr<DeleteRepositoryTagRequest> request,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteRepositoryTag"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v3/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)) + string("/repository/tags/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TagName)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteRepositoryTagResponse(callApi(params, req, runtime));
}

DeleteRepositoryTagV2Response Alibabacloud_Codeup20200414::Client::deleteRepositoryTagV2(shared_ptr<string> ProjectId, shared_ptr<DeleteRepositoryTagV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteRepositoryTagV2WithOptions(ProjectId, request, headers, runtime);
}

DeleteRepositoryTagV2Response Alibabacloud_Codeup20200414::Client::deleteRepositoryTagV2WithOptions(shared_ptr<string> ProjectId,
                                                                                                    shared_ptr<DeleteRepositoryTagV2Request> request,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagName)) {
    query->insert(pair<string, string>("TagName", *request->tagName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteRepositoryTagV2"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v3/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)) + string("/repository/tag/delete"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteRepositoryTagV2Response(callApi(params, req, runtime));
}

DeleteRepositoryWebhookResponse Alibabacloud_Codeup20200414::Client::deleteRepositoryWebhook(shared_ptr<string> ProjectId, shared_ptr<string> WebhookId, shared_ptr<DeleteRepositoryWebhookRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteRepositoryWebhookWithOptions(ProjectId, WebhookId, request, headers, runtime);
}

DeleteRepositoryWebhookResponse Alibabacloud_Codeup20200414::Client::deleteRepositoryWebhookWithOptions(shared_ptr<string> ProjectId,
                                                                                                        shared_ptr<string> WebhookId,
                                                                                                        shared_ptr<DeleteRepositoryWebhookRequest> request,
                                                                                                        shared_ptr<map<string, string>> headers,
                                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteRepositoryWebhook"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v3/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)) + string("/hooks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(WebhookId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteRepositoryWebhookResponse(callApi(params, req, runtime));
}

EnableRepositoryDeployKeyResponse Alibabacloud_Codeup20200414::Client::enableRepositoryDeployKey(shared_ptr<string> ProjectId, shared_ptr<string> KeyId, shared_ptr<EnableRepositoryDeployKeyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return enableRepositoryDeployKeyWithOptions(ProjectId, KeyId, request, headers, runtime);
}

EnableRepositoryDeployKeyResponse Alibabacloud_Codeup20200414::Client::enableRepositoryDeployKeyWithOptions(shared_ptr<string> ProjectId,
                                                                                                            shared_ptr<string> KeyId,
                                                                                                            shared_ptr<EnableRepositoryDeployKeyRequest> request,
                                                                                                            shared_ptr<map<string, string>> headers,
                                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    query->insert(pair<string, string>("SubUserId", *request->subUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableRepositoryDeployKey"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v3/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)) + string("/keys/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(KeyId)) + string("/enable"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnableRepositoryDeployKeyResponse(callApi(params, req, runtime));
}

GetBranchInfoResponse Alibabacloud_Codeup20200414::Client::getBranchInfo(shared_ptr<string> ProjectId, shared_ptr<GetBranchInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getBranchInfoWithOptions(ProjectId, request, headers, runtime);
}

GetBranchInfoResponse Alibabacloud_Codeup20200414::Client::getBranchInfoWithOptions(shared_ptr<string> ProjectId,
                                                                                    shared_ptr<GetBranchInfoRequest> request,
                                                                                    shared_ptr<map<string, string>> headers,
                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->branchName)) {
    query->insert(pair<string, string>("BranchName", *request->branchName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    query->insert(pair<string, string>("SubUserId", *request->subUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBranchInfo"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v3/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)) + string("/repository/branches/detail"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetBranchInfoResponse(callApi(params, req, runtime));
}

GetCodeCompletionResponse Alibabacloud_Codeup20200414::Client::getCodeCompletion(shared_ptr<string> ServiceName, shared_ptr<GetCodeCompletionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getCodeCompletionWithOptions(ServiceName, request, headers, runtime);
}

GetCodeCompletionResponse Alibabacloud_Codeup20200414::Client::getCodeCompletionWithOptions(shared_ptr<string> ServiceName,
                                                                                            shared_ptr<GetCodeCompletionRequest> request,
                                                                                            shared_ptr<map<string, string>> headers,
                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fetchKeys)) {
    query->insert(pair<string, string>("FetchKeys", *request->fetchKeys));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isEncrypted)) {
    query->insert(pair<string, bool>("IsEncrypted", *request->isEncrypted));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCodeCompletion"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/service/invoke/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ServiceName)))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCodeCompletionResponse(callApi(params, req, runtime));
}

GetCodeupOrganizationResponse Alibabacloud_Codeup20200414::Client::getCodeupOrganization(shared_ptr<string> OrganizationIdentity, shared_ptr<GetCodeupOrganizationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getCodeupOrganizationWithOptions(OrganizationIdentity, request, headers, runtime);
}

GetCodeupOrganizationResponse Alibabacloud_Codeup20200414::Client::getCodeupOrganizationWithOptions(shared_ptr<string> OrganizationIdentity,
                                                                                                    shared_ptr<GetCodeupOrganizationRequest> request,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    query->insert(pair<string, string>("SubUserId", *request->subUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCodeupOrganization"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v4/organization/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(OrganizationIdentity)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCodeupOrganizationResponse(callApi(params, req, runtime));
}

GetFileBlobsResponse Alibabacloud_Codeup20200414::Client::getFileBlobs(shared_ptr<string> ProjectId, shared_ptr<GetFileBlobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getFileBlobsWithOptions(ProjectId, request, headers, runtime);
}

GetFileBlobsResponse Alibabacloud_Codeup20200414::Client::getFileBlobsWithOptions(shared_ptr<string> ProjectId,
                                                                                  shared_ptr<GetFileBlobsRequest> request,
                                                                                  shared_ptr<map<string, string>> headers,
                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filePath)) {
    query->insert(pair<string, string>("FilePath", *request->filePath));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->from)) {
    query->insert(pair<string, long>("From", *request->from));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ref)) {
    query->insert(pair<string, string>("Ref", *request->ref));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    query->insert(pair<string, string>("SubUserId", *request->subUserId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->to)) {
    query->insert(pair<string, long>("To", *request->to));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFileBlobs"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v4/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)) + string("/repository/blobs"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFileBlobsResponse(callApi(params, req, runtime));
}

GetFileLastCommitResponse Alibabacloud_Codeup20200414::Client::getFileLastCommit(shared_ptr<string> ProjectId, shared_ptr<GetFileLastCommitRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getFileLastCommitWithOptions(ProjectId, request, headers, runtime);
}

GetFileLastCommitResponse Alibabacloud_Codeup20200414::Client::getFileLastCommitWithOptions(shared_ptr<string> ProjectId,
                                                                                            shared_ptr<GetFileLastCommitRequest> request,
                                                                                            shared_ptr<map<string, string>> headers,
                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filePath)) {
    query->insert(pair<string, string>("FilePath", *request->filePath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sha)) {
    query->insert(pair<string, string>("Sha", *request->sha));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFileLastCommit"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v3/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)) + string("/repository/files/last_commit"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFileLastCommitResponse(callApi(params, req, runtime));
}

GetGroupDetailResponse Alibabacloud_Codeup20200414::Client::getGroupDetail(shared_ptr<GetGroupDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getGroupDetailWithOptions(request, headers, runtime);
}

GetGroupDetailResponse Alibabacloud_Codeup20200414::Client::getGroupDetailWithOptions(shared_ptr<GetGroupDetailRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->groupId)) {
    query->insert(pair<string, long>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    query->insert(pair<string, string>("SubUserId", *request->subUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetGroupDetail"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v3/groups/detail"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetGroupDetailResponse(callApi(params, req, runtime));
}

GetMergeRequestApproveStatusResponse Alibabacloud_Codeup20200414::Client::getMergeRequestApproveStatus(shared_ptr<string> ProjectId, shared_ptr<string> MergeRequestId, shared_ptr<GetMergeRequestApproveStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getMergeRequestApproveStatusWithOptions(ProjectId, MergeRequestId, request, headers, runtime);
}

GetMergeRequestApproveStatusResponse Alibabacloud_Codeup20200414::Client::getMergeRequestApproveStatusWithOptions(shared_ptr<string> ProjectId,
                                                                                                                  shared_ptr<string> MergeRequestId,
                                                                                                                  shared_ptr<GetMergeRequestApproveStatusRequest> request,
                                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMergeRequestApproveStatus"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v4/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)) + string("/merge_request/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(MergeRequestId)) + string("/approve_status"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMergeRequestApproveStatusResponse(callApi(params, req, runtime));
}

GetMergeRequestDetailResponse Alibabacloud_Codeup20200414::Client::getMergeRequestDetail(shared_ptr<string> ProjectId, shared_ptr<string> MergeRequestId, shared_ptr<GetMergeRequestDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getMergeRequestDetailWithOptions(ProjectId, MergeRequestId, request, headers, runtime);
}

GetMergeRequestDetailResponse Alibabacloud_Codeup20200414::Client::getMergeRequestDetailWithOptions(shared_ptr<string> ProjectId,
                                                                                                    shared_ptr<string> MergeRequestId,
                                                                                                    shared_ptr<GetMergeRequestDetailRequest> request,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMergeRequestDetail"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v4/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)) + string("/merge_request/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(MergeRequestId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMergeRequestDetailResponse(callApi(params, req, runtime));
}

GetMergeRequestSettingResponse Alibabacloud_Codeup20200414::Client::getMergeRequestSetting(shared_ptr<string> ProjectId, shared_ptr<GetMergeRequestSettingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getMergeRequestSettingWithOptions(ProjectId, request, headers, runtime);
}

GetMergeRequestSettingResponse Alibabacloud_Codeup20200414::Client::getMergeRequestSettingWithOptions(shared_ptr<string> ProjectId,
                                                                                                      shared_ptr<GetMergeRequestSettingRequest> request,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMergeRequestSetting"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v4/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)) + string("/settings/merge_requests"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMergeRequestSettingResponse(callApi(params, req, runtime));
}

GetOrganizationRepositorySettingResponse Alibabacloud_Codeup20200414::Client::getOrganizationRepositorySetting(shared_ptr<GetOrganizationRepositorySettingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getOrganizationRepositorySettingWithOptions(request, headers, runtime);
}

GetOrganizationRepositorySettingResponse Alibabacloud_Codeup20200414::Client::getOrganizationRepositorySettingWithOptions(shared_ptr<GetOrganizationRepositorySettingRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetOrganizationRepositorySetting"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v4/organization/settings/repo"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetOrganizationRepositorySettingResponse(callApi(params, req, runtime));
}

GetOrganizationSecurityCenterStatusResponse Alibabacloud_Codeup20200414::Client::getOrganizationSecurityCenterStatus(shared_ptr<GetOrganizationSecurityCenterStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getOrganizationSecurityCenterStatusWithOptions(request, headers, runtime);
}

GetOrganizationSecurityCenterStatusResponse Alibabacloud_Codeup20200414::Client::getOrganizationSecurityCenterStatusWithOptions(shared_ptr<GetOrganizationSecurityCenterStatusRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetOrganizationSecurityCenterStatus"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v4/organization/security/status"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetOrganizationSecurityCenterStatusResponse(callApi(params, req, runtime));
}

GetProjectMemberResponse Alibabacloud_Codeup20200414::Client::getProjectMember(shared_ptr<string> ProjectId, shared_ptr<string> UserId, shared_ptr<GetProjectMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getProjectMemberWithOptions(ProjectId, UserId, request, headers, runtime);
}

GetProjectMemberResponse Alibabacloud_Codeup20200414::Client::getProjectMemberWithOptions(shared_ptr<string> ProjectId,
                                                                                          shared_ptr<string> UserId,
                                                                                          shared_ptr<GetProjectMemberRequest> request,
                                                                                          shared_ptr<map<string, string>> headers,
                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    query->insert(pair<string, string>("SubUserId", *request->subUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetProjectMember"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v3/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)) + string("/members/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(UserId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetProjectMemberResponse(callApi(params, req, runtime));
}

GetRepositoryCommitResponse Alibabacloud_Codeup20200414::Client::getRepositoryCommit(shared_ptr<string> ProjectId, shared_ptr<string> Sha, shared_ptr<GetRepositoryCommitRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getRepositoryCommitWithOptions(ProjectId, Sha, request, headers, runtime);
}

GetRepositoryCommitResponse Alibabacloud_Codeup20200414::Client::getRepositoryCommitWithOptions(shared_ptr<string> ProjectId,
                                                                                                shared_ptr<string> Sha,
                                                                                                shared_ptr<GetRepositoryCommitRequest> request,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRepositoryCommit"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v4/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)) + string("/repository/commits/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(Sha)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRepositoryCommitResponse(callApi(params, req, runtime));
}

GetRepositoryInfoResponse Alibabacloud_Codeup20200414::Client::getRepositoryInfo(shared_ptr<GetRepositoryInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getRepositoryInfoWithOptions(request, headers, runtime);
}

GetRepositoryInfoResponse Alibabacloud_Codeup20200414::Client::getRepositoryInfoWithOptions(shared_ptr<GetRepositoryInfoRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->identity)) {
    query->insert(pair<string, string>("Identity", *request->identity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRepositoryInfo"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v3/projects/info"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRepositoryInfoResponse(callApi(params, req, runtime));
}

GetRepositoryTagResponse Alibabacloud_Codeup20200414::Client::getRepositoryTag(shared_ptr<string> ProjectId, shared_ptr<string> TagName, shared_ptr<GetRepositoryTagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getRepositoryTagWithOptions(ProjectId, TagName, request, headers, runtime);
}

GetRepositoryTagResponse Alibabacloud_Codeup20200414::Client::getRepositoryTagWithOptions(shared_ptr<string> ProjectId,
                                                                                          shared_ptr<string> TagName,
                                                                                          shared_ptr<GetRepositoryTagRequest> request,
                                                                                          shared_ptr<map<string, string>> headers,
                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRepositoryTag"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v3/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)) + string("/repository/tags/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TagName)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRepositoryTagResponse(callApi(params, req, runtime));
}

GetRepositoryTagV2Response Alibabacloud_Codeup20200414::Client::getRepositoryTagV2(shared_ptr<string> ProjectId, shared_ptr<GetRepositoryTagV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getRepositoryTagV2WithOptions(ProjectId, request, headers, runtime);
}

GetRepositoryTagV2Response Alibabacloud_Codeup20200414::Client::getRepositoryTagV2WithOptions(shared_ptr<string> ProjectId,
                                                                                              shared_ptr<GetRepositoryTagV2Request> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagName)) {
    query->insert(pair<string, string>("TagName", *request->tagName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRepositoryTagV2"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v3/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)) + string("/repository/tag/info"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRepositoryTagV2Response(callApi(params, req, runtime));
}

GetUserInfoResponse Alibabacloud_Codeup20200414::Client::getUserInfo(shared_ptr<GetUserInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getUserInfoWithOptions(request, headers, runtime);
}

GetUserInfoResponse Alibabacloud_Codeup20200414::Client::getUserInfoWithOptions(shared_ptr<GetUserInfoRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUserInfo"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v3/user/current"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUserInfoResponse(callApi(params, req, runtime));
}

IsSlsUserAuthrizedCodeupResponse Alibabacloud_Codeup20200414::Client::isSlsUserAuthrizedCodeup(shared_ptr<IsSlsUserAuthrizedCodeupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return isSlsUserAuthrizedCodeupWithOptions(request, headers, runtime);
}

IsSlsUserAuthrizedCodeupResponse Alibabacloud_Codeup20200414::Client::isSlsUserAuthrizedCodeupWithOptions(shared_ptr<IsSlsUserAuthrizedCodeupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunSubUserId)) {
    body->insert(pair<string, string>("aliyunSubUserId", *request->aliyunSubUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunUserId)) {
    body->insert(pair<string, string>("aliyunUserId", *request->aliyunUserId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->codeupProjectId)) {
    body->insert(pair<string, long>("codeupProjectId", *request->codeupProjectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->slsLogStore)) {
    body->insert(pair<string, string>("slsLogStore", *request->slsLogStore));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->slsProject)) {
    body->insert(pair<string, string>("slsProject", *request->slsProject));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("IsSlsUserAuthrizedCodeup"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v3/repository/is_codeup_authrized"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return IsSlsUserAuthrizedCodeupResponse(callApi(params, req, runtime));
}

ListGroupMemberResponse Alibabacloud_Codeup20200414::Client::listGroupMember(shared_ptr<string> GroupId, shared_ptr<ListGroupMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listGroupMemberWithOptions(GroupId, request, headers, runtime);
}

ListGroupMemberResponse Alibabacloud_Codeup20200414::Client::listGroupMemberWithOptions(shared_ptr<string> GroupId,
                                                                                        shared_ptr<ListGroupMemberRequest> request,
                                                                                        shared_ptr<map<string, string>> headers,
                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("Page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    query->insert(pair<string, string>("SubUserId", *request->subUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListGroupMember"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v3/groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(GroupId)) + string("/members"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListGroupMemberResponse(callApi(params, req, runtime));
}

ListGroupRepositoriesResponse Alibabacloud_Codeup20200414::Client::listGroupRepositories(shared_ptr<string> Identity, shared_ptr<ListGroupRepositoriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listGroupRepositoriesWithOptions(Identity, request, headers, runtime);
}

ListGroupRepositoriesResponse Alibabacloud_Codeup20200414::Client::listGroupRepositoriesWithOptions(shared_ptr<string> Identity,
                                                                                                    shared_ptr<ListGroupRepositoriesRequest> request,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isMember)) {
    query->insert(pair<string, bool>("IsMember", *request->isMember));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("Page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->search)) {
    query->insert(pair<string, string>("Search", *request->search));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    query->insert(pair<string, string>("SubUserId", *request->subUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListGroupRepositories"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v3/groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(Identity)) + string("/projects"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListGroupRepositoriesResponse(callApi(params, req, runtime));
}

ListGroupsResponse Alibabacloud_Codeup20200414::Client::listGroups(shared_ptr<ListGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listGroupsWithOptions(request, headers, runtime);
}

ListGroupsResponse Alibabacloud_Codeup20200414::Client::listGroupsWithOptions(shared_ptr<ListGroupsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->includePersonal)) {
    query->insert(pair<string, bool>("IncludePersonal", *request->includePersonal));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("Page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->search)) {
    query->insert(pair<string, string>("Search", *request->search));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    query->insert(pair<string, string>("SubUserId", *request->subUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListGroups"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v3/groups/all"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListGroupsResponse(callApi(params, req, runtime));
}

ListMergeRequestCommentsResponse Alibabacloud_Codeup20200414::Client::listMergeRequestComments(shared_ptr<string> ProjectId, shared_ptr<string> MergeRequestId, shared_ptr<ListMergeRequestCommentsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listMergeRequestCommentsWithOptions(ProjectId, MergeRequestId, request, headers, runtime);
}

ListMergeRequestCommentsResponse Alibabacloud_Codeup20200414::Client::listMergeRequestCommentsWithOptions(shared_ptr<string> ProjectId,
                                                                                                          shared_ptr<string> MergeRequestId,
                                                                                                          shared_ptr<ListMergeRequestCommentsRequest> request,
                                                                                                          shared_ptr<map<string, string>> headers,
                                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fromCommit)) {
    query->insert(pair<string, string>("FromCommit", *request->fromCommit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->toCommit)) {
    query->insert(pair<string, string>("ToCommit", *request->toCommit));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMergeRequestComments"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v4/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)) + string("/merge_request/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(MergeRequestId)) + string("/comments"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMergeRequestCommentsResponse(callApi(params, req, runtime));
}

ListMergeRequestsResponse Alibabacloud_Codeup20200414::Client::listMergeRequests(shared_ptr<ListMergeRequestsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listMergeRequestsWithOptions(request, headers, runtime);
}

ListMergeRequestsResponse Alibabacloud_Codeup20200414::Client::listMergeRequestsWithOptions(shared_ptr<ListMergeRequestsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->afterDate)) {
    query->insert(pair<string, string>("AfterDate", *request->afterDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->assigneeCodeupIdList)) {
    query->insert(pair<string, string>("AssigneeCodeupIdList", *request->assigneeCodeupIdList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->assigneeIdList)) {
    query->insert(pair<string, string>("AssigneeIdList", *request->assigneeIdList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authorCodeupIdList)) {
    query->insert(pair<string, string>("AuthorCodeupIdList", *request->authorCodeupIdList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authorIdList)) {
    query->insert(pair<string, string>("AuthorIdList", *request->authorIdList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->beforeDate)) {
    query->insert(pair<string, string>("BeforeDate", *request->beforeDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupIdList)) {
    query->insert(pair<string, string>("GroupIdList", *request->groupIdList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("Page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectIdList)) {
    query->insert(pair<string, string>("ProjectIdList", *request->projectIdList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->search)) {
    query->insert(pair<string, string>("Search", *request->search));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->state)) {
    query->insert(pair<string, string>("State", *request->state));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriberCodeupIdList)) {
    query->insert(pair<string, string>("SubscriberCodeupIdList", *request->subscriberCodeupIdList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMergeRequests"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v4/merge_requests/advanced_search"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMergeRequestsResponse(callApi(params, req, runtime));
}

ListOrganizationSecurityScoresResponse Alibabacloud_Codeup20200414::Client::listOrganizationSecurityScores(shared_ptr<ListOrganizationSecurityScoresRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listOrganizationSecurityScoresWithOptions(request, headers, runtime);
}

ListOrganizationSecurityScoresResponse Alibabacloud_Codeup20200414::Client::listOrganizationSecurityScoresWithOptions(shared_ptr<ListOrganizationSecurityScoresRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListOrganizationSecurityScores"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v4/organization/security/scores"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListOrganizationSecurityScoresResponse(callApi(params, req, runtime));
}

ListOrganizationsResponse Alibabacloud_Codeup20200414::Client::listOrganizations(shared_ptr<ListOrganizationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listOrganizationsWithOptions(request, headers, runtime);
}

ListOrganizationsResponse Alibabacloud_Codeup20200414::Client::listOrganizationsWithOptions(shared_ptr<ListOrganizationsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->accessLevel)) {
    query->insert(pair<string, long>("AccessLevel", *request->accessLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minAccessLevel)) {
    query->insert(pair<string, long>("MinAccessLevel", *request->minAccessLevel));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListOrganizations"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v4/organization"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListOrganizationsResponse(callApi(params, req, runtime));
}

ListRepositoriesResponse Alibabacloud_Codeup20200414::Client::listRepositories(shared_ptr<ListRepositoriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listRepositoriesWithOptions(request, headers, runtime);
}

ListRepositoriesResponse Alibabacloud_Codeup20200414::Client::listRepositoriesWithOptions(shared_ptr<ListRepositoriesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->archive)) {
    query->insert(pair<string, bool>("Archive", *request->archive));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("Page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->search)) {
    query->insert(pair<string, string>("Search", *request->search));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sort)) {
    query->insert(pair<string, string>("Sort", *request->sort));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRepositories"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v3/projects/all"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRepositoriesResponse(callApi(params, req, runtime));
}

ListRepositoryBranchesResponse Alibabacloud_Codeup20200414::Client::listRepositoryBranches(shared_ptr<string> ProjectId, shared_ptr<ListRepositoryBranchesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listRepositoryBranchesWithOptions(ProjectId, request, headers, runtime);
}

ListRepositoryBranchesResponse Alibabacloud_Codeup20200414::Client::listRepositoryBranchesWithOptions(shared_ptr<string> ProjectId,
                                                                                                      shared_ptr<ListRepositoryBranchesRequest> request,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("Page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->search)) {
    query->insert(pair<string, string>("Search", *request->search));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    query->insert(pair<string, string>("SubUserId", *request->subUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRepositoryBranches"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v3/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)) + string("/repository/branches"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRepositoryBranchesResponse(callApi(params, req, runtime));
}

ListRepositoryCodeResponse Alibabacloud_Codeup20200414::Client::listRepositoryCode(shared_ptr<ListRepositoryCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listRepositoryCodeWithOptions(request, headers, runtime);
}

ListRepositoryCodeResponse Alibabacloud_Codeup20200414::Client::listRepositoryCodeWithOptions(shared_ptr<ListRepositoryCodeRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<ListRepositoryCodeRequestFilePath>(request->filePath)) {
    body->insert(pair<string, ListRepositoryCodeRequestFilePath>("FilePath", *request->filePath));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isCodeBlock)) {
    body->insert(pair<string, bool>("IsCodeBlock", *request->isCodeBlock));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyWord)) {
    body->insert(pair<string, string>("KeyWord", *request->keyWord));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    body->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    body->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    body->insert(pair<string, long>("Page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<ListRepositoryCodeRequestRepositoryPath>(request->repositoryPath)) {
    body->insert(pair<string, ListRepositoryCodeRequestRepositoryPath>("RepositoryPath", *request->repositoryPath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scope)) {
    body->insert(pair<string, string>("Scope", *request->scope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sort)) {
    body->insert(pair<string, string>("Sort", *request->sort));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRepositoryCode"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/search/v3/code"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRepositoryCodeResponse(callApi(params, req, runtime));
}

ListRepositoryCommitDiffResponse Alibabacloud_Codeup20200414::Client::listRepositoryCommitDiff(shared_ptr<string> ProjectId, shared_ptr<string> Sha, shared_ptr<ListRepositoryCommitDiffRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listRepositoryCommitDiffWithOptions(ProjectId, Sha, request, headers, runtime);
}

ListRepositoryCommitDiffResponse Alibabacloud_Codeup20200414::Client::listRepositoryCommitDiffWithOptions(shared_ptr<string> ProjectId,
                                                                                                          shared_ptr<string> Sha,
                                                                                                          shared_ptr<ListRepositoryCommitDiffRequest> request,
                                                                                                          shared_ptr<map<string, string>> headers,
                                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->contextLine)) {
    query->insert(pair<string, long>("ContextLine", *request->contextLine));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRepositoryCommitDiff"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v3/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)) + string("/repository/commits/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(Sha)) + string("/diff"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRepositoryCommitDiffResponse(callApi(params, req, runtime));
}

ListRepositoryCommitsResponse Alibabacloud_Codeup20200414::Client::listRepositoryCommits(shared_ptr<string> ProjectId, shared_ptr<ListRepositoryCommitsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listRepositoryCommitsWithOptions(ProjectId, request, headers, runtime);
}

ListRepositoryCommitsResponse Alibabacloud_Codeup20200414::Client::listRepositoryCommitsWithOptions(shared_ptr<string> ProjectId,
                                                                                                    shared_ptr<ListRepositoryCommitsRequest> request,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("Page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->path)) {
    query->insert(pair<string, string>("Path", *request->path));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->refName)) {
    query->insert(pair<string, string>("RefName", *request->refName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->search)) {
    query->insert(pair<string, string>("Search", *request->search));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->showSignature)) {
    query->insert(pair<string, bool>("ShowSignature", *request->showSignature));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRepositoryCommits"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v4/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)) + string("/repository/commits"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRepositoryCommitsResponse(callApi(params, req, runtime));
}

ListRepositoryMemberResponse Alibabacloud_Codeup20200414::Client::listRepositoryMember(shared_ptr<string> ProjectId, shared_ptr<ListRepositoryMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listRepositoryMemberWithOptions(ProjectId, request, headers, runtime);
}

ListRepositoryMemberResponse Alibabacloud_Codeup20200414::Client::listRepositoryMemberWithOptions(shared_ptr<string> ProjectId,
                                                                                                  shared_ptr<ListRepositoryMemberRequest> request,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("Page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->query)) {
    query->insert(pair<string, string>("Query", *request->query));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    query->insert(pair<string, string>("SubUserId", *request->subUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRepositoryMember"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v3/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)) + string("/members"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRepositoryMemberResponse(callApi(params, req, runtime));
}

ListRepositoryMemberWithInheritedResponse Alibabacloud_Codeup20200414::Client::listRepositoryMemberWithInherited(shared_ptr<string> ProjectId, shared_ptr<ListRepositoryMemberWithInheritedRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listRepositoryMemberWithInheritedWithOptions(ProjectId, request, headers, runtime);
}

ListRepositoryMemberWithInheritedResponse Alibabacloud_Codeup20200414::Client::listRepositoryMemberWithInheritedWithOptions(shared_ptr<string> ProjectId,
                                                                                                                            shared_ptr<ListRepositoryMemberWithInheritedRequest> request,
                                                                                                                            shared_ptr<map<string, string>> headers,
                                                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRepositoryMemberWithInherited"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v4/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)) + string("/all_members"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRepositoryMemberWithInheritedResponse(callApi(params, req, runtime));
}

ListRepositoryProtectedBranchResponse Alibabacloud_Codeup20200414::Client::listRepositoryProtectedBranch(shared_ptr<string> ProjectId, shared_ptr<ListRepositoryProtectedBranchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listRepositoryProtectedBranchWithOptions(ProjectId, request, headers, runtime);
}

ListRepositoryProtectedBranchResponse Alibabacloud_Codeup20200414::Client::listRepositoryProtectedBranchWithOptions(shared_ptr<string> ProjectId,
                                                                                                                    shared_ptr<ListRepositoryProtectedBranchRequest> request,
                                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRepositoryProtectedBranch"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v4/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)) + string("/repository/protect_branches"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRepositoryProtectedBranchResponse(callApi(params, req, runtime));
}

ListRepositoryTagsResponse Alibabacloud_Codeup20200414::Client::listRepositoryTags(shared_ptr<string> ProjectId, shared_ptr<ListRepositoryTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listRepositoryTagsWithOptions(ProjectId, request, headers, runtime);
}

ListRepositoryTagsResponse Alibabacloud_Codeup20200414::Client::listRepositoryTagsWithOptions(shared_ptr<string> ProjectId,
                                                                                              shared_ptr<ListRepositoryTagsRequest> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("Page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->search)) {
    query->insert(pair<string, string>("Search", *request->search));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->showSignature)) {
    query->insert(pair<string, bool>("ShowSignature", *request->showSignature));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sort)) {
    query->insert(pair<string, string>("Sort", *request->sort));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRepositoryTags"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v4/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)) + string("/repository/tags"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRepositoryTagsResponse(callApi(params, req, runtime));
}

ListRepositoryTreeResponse Alibabacloud_Codeup20200414::Client::listRepositoryTree(shared_ptr<string> ProjectId, shared_ptr<ListRepositoryTreeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listRepositoryTreeWithOptions(ProjectId, request, headers, runtime);
}

ListRepositoryTreeResponse Alibabacloud_Codeup20200414::Client::listRepositoryTreeWithOptions(shared_ptr<string> ProjectId,
                                                                                              shared_ptr<ListRepositoryTreeRequest> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->path)) {
    query->insert(pair<string, string>("Path", *request->path));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->refName)) {
    query->insert(pair<string, string>("RefName", *request->refName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    query->insert(pair<string, string>("SubUserId", *request->subUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRepositoryTree"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v4/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)) + string("/repository/tree"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRepositoryTreeResponse(callApi(params, req, runtime));
}

ListRepositoryWebhookResponse Alibabacloud_Codeup20200414::Client::listRepositoryWebhook(shared_ptr<string> ProjectId, shared_ptr<ListRepositoryWebhookRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listRepositoryWebhookWithOptions(ProjectId, request, headers, runtime);
}

ListRepositoryWebhookResponse Alibabacloud_Codeup20200414::Client::listRepositoryWebhookWithOptions(shared_ptr<string> ProjectId,
                                                                                                    shared_ptr<ListRepositoryWebhookRequest> request,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("Page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRepositoryWebhook"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v3/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)) + string("/hooks"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRepositoryWebhookResponse(callApi(params, req, runtime));
}

MergeMergeRequestResponse Alibabacloud_Codeup20200414::Client::mergeMergeRequest(shared_ptr<string> ProjectId, shared_ptr<string> MergeRequestId, shared_ptr<MergeMergeRequestRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return mergeMergeRequestWithOptions(ProjectId, MergeRequestId, request, headers, runtime);
}

MergeMergeRequestResponse Alibabacloud_Codeup20200414::Client::mergeMergeRequestWithOptions(shared_ptr<string> ProjectId,
                                                                                            shared_ptr<string> MergeRequestId,
                                                                                            shared_ptr<MergeMergeRequestRequest> request,
                                                                                            shared_ptr<map<string, string>> headers,
                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    query->insert(pair<string, string>("SubUserId", *request->subUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("MergeMergeRequest"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v3/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)) + string("/merge_request/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(MergeRequestId)) + string("/merge"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return MergeMergeRequestResponse(callApi(params, req, runtime));
}

QuerySlsRelationResponse Alibabacloud_Codeup20200414::Client::querySlsRelation(shared_ptr<QuerySlsRelationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return querySlsRelationWithOptions(request, headers, runtime);
}

QuerySlsRelationResponse Alibabacloud_Codeup20200414::Client::querySlsRelationWithOptions(shared_ptr<QuerySlsRelationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunUserId)) {
    body->insert(pair<string, string>("aliyunUserId", *request->aliyunUserId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->codeupProjectId)) {
    body->insert(pair<string, long>("codeupProjectId", *request->codeupProjectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->slsLogStore)) {
    body->insert(pair<string, string>("slsLogStore", *request->slsLogStore));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->slsProject)) {
    body->insert(pair<string, string>("slsProject", *request->slsProject));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySlsRelation"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v3/repository/query_sls_relation"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QuerySlsRelationResponse(callApi(params, req, runtime));
}

RelatedSlsLogStoreResponse Alibabacloud_Codeup20200414::Client::relatedSlsLogStore(shared_ptr<RelatedSlsLogStoreRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return relatedSlsLogStoreWithOptions(request, headers, runtime);
}

RelatedSlsLogStoreResponse Alibabacloud_Codeup20200414::Client::relatedSlsLogStoreWithOptions(shared_ptr<RelatedSlsLogStoreRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunUserId)) {
    body->insert(pair<string, string>("aliyunUserId", *request->aliyunUserId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->codeupProjectId)) {
    body->insert(pair<string, long>("codeupProjectId", *request->codeupProjectId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->defaultViewer)) {
    body->insert(pair<string, bool>("defaultViewer", *request->defaultViewer));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->slsLogStore)) {
    body->insert(pair<string, string>("slsLogStore", *request->slsLogStore));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->slsProject)) {
    body->insert(pair<string, string>("slsProject", *request->slsProject));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RelatedSlsLogStore"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v3/repository/related_to_sls_log_store"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RelatedSlsLogStoreResponse(callApi(params, req, runtime));
}

TriggerRepositoryMirrorSyncResponse Alibabacloud_Codeup20200414::Client::triggerRepositoryMirrorSync(shared_ptr<string> ProjectId, shared_ptr<TriggerRepositoryMirrorSyncRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return triggerRepositoryMirrorSyncWithOptions(ProjectId, request, headers, runtime);
}

TriggerRepositoryMirrorSyncResponse Alibabacloud_Codeup20200414::Client::triggerRepositoryMirrorSyncWithOptions(shared_ptr<string> ProjectId,
                                                                                                                shared_ptr<TriggerRepositoryMirrorSyncRequest> request,
                                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->account)) {
    query->insert(pair<string, string>("Account", *request->account));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->token)) {
    query->insert(pair<string, string>("Token", *request->token));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TriggerRepositoryMirrorSync"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v4/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)) + string("/mirror"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TriggerRepositoryMirrorSyncResponse(callApi(params, req, runtime));
}

UnRelatedSlsLogStoreResponse Alibabacloud_Codeup20200414::Client::unRelatedSlsLogStore(shared_ptr<UnRelatedSlsLogStoreRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return unRelatedSlsLogStoreWithOptions(request, headers, runtime);
}

UnRelatedSlsLogStoreResponse Alibabacloud_Codeup20200414::Client::unRelatedSlsLogStoreWithOptions(shared_ptr<UnRelatedSlsLogStoreRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunUserId)) {
    body->insert(pair<string, string>("aliyunUserId", *request->aliyunUserId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->codeupProjectId)) {
    body->insert(pair<string, long>("codeupProjectId", *request->codeupProjectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->slsLogStore)) {
    body->insert(pair<string, string>("slsLogStore", *request->slsLogStore));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->slsProject)) {
    body->insert(pair<string, string>("slsProject", *request->slsProject));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnRelatedSlsLogStore"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v3/repository/unrelated_to_sls_log_store"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnRelatedSlsLogStoreResponse(callApi(params, req, runtime));
}

UpdateFileResponse Alibabacloud_Codeup20200414::Client::updateFile(shared_ptr<string> ProjectId, shared_ptr<UpdateFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateFileWithOptions(ProjectId, request, headers, runtime);
}

UpdateFileResponse Alibabacloud_Codeup20200414::Client::updateFileWithOptions(shared_ptr<string> ProjectId,
                                                                              shared_ptr<UpdateFileRequest> request,
                                                                              shared_ptr<map<string, string>> headers,
                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    query->insert(pair<string, string>("SubUserId", *request->subUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateFile"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v4/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)) + string("/repository/files"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateFileResponse(callApi(params, req, runtime));
}

UpdateGroupMemberResponse Alibabacloud_Codeup20200414::Client::updateGroupMember(shared_ptr<string> GroupId, shared_ptr<string> UserId, shared_ptr<UpdateGroupMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateGroupMemberWithOptions(GroupId, UserId, request, headers, runtime);
}

UpdateGroupMemberResponse Alibabacloud_Codeup20200414::Client::updateGroupMemberWithOptions(shared_ptr<string> GroupId,
                                                                                            shared_ptr<string> UserId,
                                                                                            shared_ptr<UpdateGroupMemberRequest> request,
                                                                                            shared_ptr<map<string, string>> headers,
                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    query->insert(pair<string, string>("SubUserId", *request->subUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateGroupMember"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v3/groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(GroupId)) + string("/members/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(UserId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateGroupMemberResponse(callApi(params, req, runtime));
}

UpdateMergeRequestResponse Alibabacloud_Codeup20200414::Client::updateMergeRequest(shared_ptr<string> ProjectId, shared_ptr<string> MergeRequestId, shared_ptr<UpdateMergeRequestRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateMergeRequestWithOptions(ProjectId, MergeRequestId, request, headers, runtime);
}

UpdateMergeRequestResponse Alibabacloud_Codeup20200414::Client::updateMergeRequestWithOptions(shared_ptr<string> ProjectId,
                                                                                              shared_ptr<string> MergeRequestId,
                                                                                              shared_ptr<UpdateMergeRequestRequest> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateMergeRequest"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v3/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)) + string("/merge_request/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(MergeRequestId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateMergeRequestResponse(callApi(params, req, runtime));
}

UpdateMergeRequestCommentResponse Alibabacloud_Codeup20200414::Client::updateMergeRequestComment(shared_ptr<string> ProjectId,
                                                                                                 shared_ptr<string> MergeRequestId,
                                                                                                 shared_ptr<string> NoteId,
                                                                                                 shared_ptr<UpdateMergeRequestCommentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateMergeRequestCommentWithOptions(ProjectId, MergeRequestId, NoteId, request, headers, runtime);
}

UpdateMergeRequestCommentResponse Alibabacloud_Codeup20200414::Client::updateMergeRequestCommentWithOptions(shared_ptr<string> ProjectId,
                                                                                                            shared_ptr<string> MergeRequestId,
                                                                                                            shared_ptr<string> NoteId,
                                                                                                            shared_ptr<UpdateMergeRequestCommentRequest> request,
                                                                                                            shared_ptr<map<string, string>> headers,
                                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateMergeRequestComment"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v3/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)) + string("/merge_requests/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(MergeRequestId)) + string("/notes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(NoteId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateMergeRequestCommentResponse(callApi(params, req, runtime));
}

UpdateMergeRequestSettingResponse Alibabacloud_Codeup20200414::Client::updateMergeRequestSetting(shared_ptr<string> ProjectId, shared_ptr<UpdateMergeRequestSettingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateMergeRequestSettingWithOptions(ProjectId, request, headers, runtime);
}

UpdateMergeRequestSettingResponse Alibabacloud_Codeup20200414::Client::updateMergeRequestSettingWithOptions(shared_ptr<string> ProjectId,
                                                                                                            shared_ptr<UpdateMergeRequestSettingRequest> request,
                                                                                                            shared_ptr<map<string, string>> headers,
                                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateMergeRequestSetting"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v4/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)) + string("/settings/merge_requests"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateMergeRequestSettingResponse(callApi(params, req, runtime));
}

UpdateRepositoryResponse Alibabacloud_Codeup20200414::Client::updateRepository(shared_ptr<string> ProjectId, shared_ptr<UpdateRepositoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateRepositoryWithOptions(ProjectId, request, headers, runtime);
}

UpdateRepositoryResponse Alibabacloud_Codeup20200414::Client::updateRepositoryWithOptions(shared_ptr<string> ProjectId,
                                                                                          shared_ptr<UpdateRepositoryRequest> request,
                                                                                          shared_ptr<map<string, string>> headers,
                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateRepository"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v3/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateRepositoryResponse(callApi(params, req, runtime));
}

UpdateRepositoryMemberResponse Alibabacloud_Codeup20200414::Client::updateRepositoryMember(shared_ptr<string> ProjectId, shared_ptr<string> UserId, shared_ptr<UpdateRepositoryMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateRepositoryMemberWithOptions(ProjectId, UserId, request, headers, runtime);
}

UpdateRepositoryMemberResponse Alibabacloud_Codeup20200414::Client::updateRepositoryMemberWithOptions(shared_ptr<string> ProjectId,
                                                                                                      shared_ptr<string> UserId,
                                                                                                      shared_ptr<UpdateRepositoryMemberRequest> request,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    query->insert(pair<string, string>("SubUserId", *request->subUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateRepositoryMember"))},
    {"version", boost::any(string("2020-04-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v3/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)) + string("/members/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(UserId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateRepositoryMemberResponse(callApi(params, req, runtime));
}

