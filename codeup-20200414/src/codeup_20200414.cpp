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
    (*query)["AccessToken"] = *request->accessToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    (*query)["OrganizationId"] = *request->organizationId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    (*query)["SubUserId"] = *request->subUserId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DeleteRepositoryMemberResponse(doROARequest(make_shared<string>("DeleteRepositoryMember"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>(string("/api/v3/projects/") + string(*ProjectId) + string("/members/") + string(*UserId)), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    (*query)["OrganizationId"] = *request->organizationId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return CreateRepositoryProtectedBranchResponse(doROARequest(make_shared<string>("CreateRepositoryProtectedBranch"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/api/v4/projects/") + string(*ProjectId) + string("/repository/protect_branches")), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    (*query)["OrganizationId"] = *request->organizationId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    (*query)["SubUserId"] = *request->subUserId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return CreateMergeRequestResponse(doROARequest(make_shared<string>("CreateMergeRequest"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/api/v4/projects/") + string(*ProjectId) + string("/merge_requests")), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    (*query)["OrganizationId"] = *request->organizationId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->externUserId)) {
    (*query)["ExternUserId"] = *request->externUserId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DeleteRepositoryMemberWithExternUidResponse(doROARequest(make_shared<string>("DeleteRepositoryMemberWithExternUid"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/api/v4/projects/") + string(*ProjectId) + string("/members/remove")), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    (*query)["OrganizationId"] = *request->organizationId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    (*query)["SubUserId"] = *request->subUserId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DeleteRepositoryResponse(doROARequest(make_shared<string>("DeleteRepository"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/api/v3/projects/") + string(*ProjectId) + string("/remove")), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    (*query)["OrganizationId"] = *request->organizationId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return GetRepositoryTagResponse(doROARequest(make_shared<string>("GetRepositoryTag"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v3/projects/") + string(*ProjectId) + string("/repository/tags/") + string(*TagName)), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    (*query)["OrganizationId"] = *request->organizationId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UpdateMergeRequestResponse(doROARequest(make_shared<string>("UpdateMergeRequest"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/api/v3/projects/") + string(*ProjectId) + string("/merge_request/") + string(*MergeRequestId)), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    (*query)["OrganizationId"] = *request->organizationId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UpdateRepositoryResponse(doROARequest(make_shared<string>("UpdateRepository"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/api/v3/projects/") + string(*ProjectId)), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    (*query)["OrganizationId"] = *request->organizationId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UpdateMergeRequestCommentResponse(doROARequest(make_shared<string>("UpdateMergeRequestComment"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/api/v3/projects/") + string(*ProjectId) + string("/merge_requests/") + string(*MergeRequestId) + string("/notes/") + string(*NoteId)), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->branchName)) {
    (*query)["BranchName"] = *request->branchName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    (*query)["OrganizationId"] = *request->organizationId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    (*query)["SubUserId"] = *request->subUserId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DeleteBranchResponse(doROARequest(make_shared<string>("DeleteBranch"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>(string("/api/v3/projects/") + string(*ProjectId) + string("/repository/branches/delete")), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    (*query)["OrganizationId"] = *request->organizationId;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->contextLine)) {
    (*query)["ContextLine"] = *request->contextLine;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListRepositoryCommitDiffResponse(doROARequest(make_shared<string>("ListRepositoryCommitDiff"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v3/projects/") + string(*ProjectId) + string("/repository/commits/") + string(*Sha) + string("/diff")), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->identity)) {
    (*query)["Identity"] = *request->identity;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    (*query)["OrganizationId"] = *request->organizationId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return GetRepositoryInfoResponse(doROARequest(make_shared<string>("GetRepositoryInfo"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v3/projects/info")), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    (*query)["OrganizationId"] = *request->organizationId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return AcceptMergeRequestResponse(doROARequest(make_shared<string>("AcceptMergeRequest"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/api/v3/projects/") + string(*ProjectId) + string("/merge_request/") + string(*MergeRequestId) + string("/accept")), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    (*query)["OrganizationId"] = *request->organizationId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->branchName)) {
    (*query)["BranchName"] = *request->branchName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filePath)) {
    (*query)["FilePath"] = *request->filePath;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->commitMessage)) {
    (*query)["CommitMessage"] = *request->commitMessage;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    (*query)["SubUserId"] = *request->subUserId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DeleteFileResponse(doROARequest(make_shared<string>("DeleteFile"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>(string("/api/v3/projects/") + string(*ProjectId) + string("/repository/files")), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    (*query)["OrganizationId"] = *request->organizationId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DeleteRepositoryProtectedBranchResponse(doROARequest(make_shared<string>("DeleteRepositoryProtectedBranch"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>(string("/api/v4/projects/") + string(*ProjectId) + string("/repository/protect_branches/") + string(*ProtectedBranchId)), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    (*query)["OrganizationId"] = *request->organizationId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagName)) {
    (*query)["TagName"] = *request->tagName;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DeleteRepositoryTagV2Response(doROARequest(make_shared<string>("DeleteRepositoryTagV2"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>(string("/api/v3/projects/") + string(*ProjectId) + string("/repository/tag/delete")), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    (*query)["OrganizationId"] = *request->organizationId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sha)) {
    (*query)["Sha"] = *request->sha;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filePath)) {
    (*query)["FilePath"] = *request->filePath;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return GetFileLastCommitResponse(doROARequest(make_shared<string>("GetFileLastCommit"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v3/projects/") + string(*ProjectId) + string("/repository/files/last_commit")), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    (*query)["OrganizationId"] = *request->organizationId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    (*query)["SubUserId"] = *request->subUserId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UpdateFileResponse(doROARequest(make_shared<string>("UpdateFile"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/api/v4/projects/") + string(*ProjectId) + string("/repository/files")), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    (*query)["OrganizationId"] = *request->organizationId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    (*query)["SubUserId"] = *request->subUserId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UpdateRepositoryMemberResponse(doROARequest(make_shared<string>("UpdateRepositoryMember"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/api/v3/projects/") + string(*ProjectId) + string("/members/") + string(*UserId)), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    (*query)["OrganizationId"] = *request->organizationId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    (*query)["SubUserId"] = *request->subUserId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return AddRepositoryMemberResponse(doROARequest(make_shared<string>("AddRepositoryMember"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/api/v4/projects/") + string(*ProjectId) + string("/members")), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return CreateSshKeyResponse(doROARequest(make_shared<string>("CreateSshKey"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/api/v3/user/keys")), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->search)) {
    (*query)["Search"] = *request->search;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    (*query)["OrganizationId"] = *request->organizationId;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    (*query)["Page"] = *request->page;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*query)["PageSize"] = *request->pageSize;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sort)) {
    (*query)["Sort"] = *request->sort;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->showSignature)) {
    (*query)["ShowSignature"] = *request->showSignature;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListRepositoryTagsResponse(doROARequest(make_shared<string>("ListRepositoryTags"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v4/projects/") + string(*ProjectId) + string("/repository/tags")), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    (*query)["OrganizationId"] = *request->organizationId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return AddWebhookResponse(doROARequest(make_shared<string>("AddWebhook"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/api/v3/projects/") + string(*ProjectId) + string("/hooks")), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    (*query)["OrganizationId"] = *request->organizationId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    (*query)["SubUserId"] = *request->subUserId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return EnableRepositoryDeployKeyResponse(doROARequest(make_shared<string>("EnableRepositoryDeployKey"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/api/v3/projects/") + string(*ProjectId) + string("/keys/") + string(*KeyId) + string("/enable")), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    (*query)["OrganizationId"] = *request->organizationId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return GetUserInfoResponse(doROARequest(make_shared<string>("GetUserInfo"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v3/user/current")), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    (*query)["OrganizationId"] = *request->organizationId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->path)) {
    (*query)["Path"] = *request->path;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    (*query)["Type"] = *request->type;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->refName)) {
    (*query)["RefName"] = *request->refName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    (*query)["SubUserId"] = *request->subUserId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListRepositoryTreeResponse(doROARequest(make_shared<string>("ListRepositoryTree"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v4/projects/") + string(*ProjectId) + string("/repository/tree")), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    (*query)["OrganizationId"] = *request->organizationId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    (*query)["SubUserId"] = *request->subUserId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DeleteRepositoryGroupResponse(doROARequest(make_shared<string>("DeleteRepositoryGroup"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/api/v3/groups/") + string(*GroupId) + string("/remove")), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    (*query)["OrganizationId"] = *request->organizationId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DeleteRepositoryWebhookResponse(doROARequest(make_shared<string>("DeleteRepositoryWebhook"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>(string("/api/v3/projects/") + string(*ProjectId) + string("/hooks/") + string(*WebhookId)), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    (*query)["OrganizationId"] = *request->organizationId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->query)) {
    (*query)["Query"] = *request->query;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    (*query)["Page"] = *request->page;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*query)["PageSize"] = *request->pageSize;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    (*query)["SubUserId"] = *request->subUserId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListRepositoryMemberResponse(doROARequest(make_shared<string>("ListRepositoryMember"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v3/projects/") + string(*ProjectId) + string("/members")), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    (*query)["OrganizationId"] = *request->organizationId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    (*query)["SubUserId"] = *request->subUserId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return CreateTagResponse(doROARequest(make_shared<string>("CreateTag"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/api/v3/projects/") + string(*ProjectId) + string("/repository/tags")), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    (*query)["OrganizationId"] = *request->organizationId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return GetRepositoryCommitResponse(doROARequest(make_shared<string>("GetRepositoryCommit"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v4/projects/") + string(*ProjectId) + string("/repository/commits/") + string(*Sha)), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    (*query)["OrganizationId"] = *request->organizationId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    (*query)["SubUserId"] = *request->subUserId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return AddGroupMemberResponse(doROARequest(make_shared<string>("AddGroupMember"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/api/v4/groups/") + string(*GroupId) + string("/members")), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    (*query)["OrganizationId"] = *request->organizationId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    (*query)["SubUserId"] = *request->subUserId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->branchName)) {
    (*query)["BranchName"] = *request->branchName;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return GetBranchInfoResponse(doROARequest(make_shared<string>("GetBranchInfo"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v3/projects/") + string(*ProjectId) + string("/repository/branches/detail")), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    (*query)["OrganizationId"] = *request->organizationId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fromCommit)) {
    (*query)["FromCommit"] = *request->fromCommit;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->toCommit)) {
    (*query)["ToCommit"] = *request->toCommit;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListMergeRequestCommentsResponse(doROARequest(make_shared<string>("ListMergeRequestComments"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v4/projects/") + string(*ProjectId) + string("/merge_request/") + string(*MergeRequestId) + string("/comments")), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    (*query)["OrganizationId"] = *request->organizationId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    (*query)["SubUserId"] = *request->subUserId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return CreateRepositoryGroupResponse(doROARequest(make_shared<string>("CreateRepositoryGroup"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/api/v3/groups")), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    (*query)["OrganizationId"] = *request->organizationId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return GetMergeRequestDetailResponse(doROARequest(make_shared<string>("GetMergeRequestDetail"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v4/projects/") + string(*ProjectId) + string("/merge_request/") + string(*MergeRequestId)), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->search)) {
    (*query)["Search"] = *request->search;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    (*query)["OrganizationId"] = *request->organizationId;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    (*query)["Page"] = *request->page;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*query)["PageSize"] = *request->pageSize;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    (*query)["SubUserId"] = *request->subUserId;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->includePersonal)) {
    (*query)["IncludePersonal"] = *request->includePersonal;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListGroupsResponse(doROARequest(make_shared<string>("ListGroups"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v3/groups/all")), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    (*query)["OrganizationId"] = *request->organizationId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListRepositoryProtectedBranchResponse(doROARequest(make_shared<string>("ListRepositoryProtectedBranch"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v4/projects/") + string(*ProjectId) + string("/repository/protect_branches")), make_shared<string>("json"), req, runtime));
}

ListOrganizationsResponse Alibabacloud_Codeup20200414::Client::listOrganizations(shared_ptr<ListOrganizationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listOrganizationsWithOptions(request, headers, runtime);
}

ListOrganizationsResponse Alibabacloud_Codeup20200414::Client::listOrganizationsWithOptions(shared_ptr<ListOrganizationsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    (*query)["AccessToken"] = *request->accessToken;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->accessLevel)) {
    (*query)["AccessLevel"] = *request->accessLevel;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minAccessLevel)) {
    (*query)["MinAccessLevel"] = *request->minAccessLevel;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListOrganizationsResponse(doROARequest(make_shared<string>("ListOrganizations"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v4/organization")), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    (*query)["OrganizationId"] = *request->organizationId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    (*query)["SubUserId"] = *request->subUserId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return GetProjectMemberResponse(doROARequest(make_shared<string>("GetProjectMember"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v3/projects/") + string(*ProjectId) + string("/members/") + string(*UserId)), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    (*query)["OrganizationId"] = *request->organizationId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    (*query)["SubUserId"] = *request->subUserId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return CreateFileResponse(doROARequest(make_shared<string>("CreateFile"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/api/v3/projects/") + string(*ProjectId) + string("/repository/files")), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    (*query)["OrganizationId"] = *request->organizationId;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    (*query)["Page"] = *request->page;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*query)["PageSize"] = *request->pageSize;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->search)) {
    (*query)["Search"] = *request->search;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->path)) {
    (*query)["Path"] = *request->path;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->refName)) {
    (*query)["RefName"] = *request->refName;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->showSignature)) {
    (*query)["ShowSignature"] = *request->showSignature;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListRepositoryCommitsResponse(doROARequest(make_shared<string>("ListRepositoryCommits"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v4/projects/") + string(*ProjectId) + string("/repository/commits")), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    (*query)["OrganizationId"] = *request->organizationId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return GetMergeRequestApproveStatusResponse(doROARequest(make_shared<string>("GetMergeRequestApproveStatus"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v4/projects/") + string(*ProjectId) + string("/merge_request/") + string(*MergeRequestId) + string("/approve_status")), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    (*query)["OrganizationId"] = *request->organizationId;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    (*query)["Page"] = *request->page;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*query)["PageSize"] = *request->pageSize;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    (*query)["Order"] = *request->order;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sort)) {
    (*query)["Sort"] = *request->sort;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->search)) {
    (*query)["Search"] = *request->search;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->archive)) {
    (*query)["Archive"] = *request->archive;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListRepositoriesResponse(doROARequest(make_shared<string>("ListRepositories"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v3/projects/all")), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    (*query)["OrganizationId"] = *request->organizationId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UpdateMergeRequestSettingResponse(doROARequest(make_shared<string>("UpdateMergeRequestSetting"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/api/v4/projects/") + string(*ProjectId) + string("/settings/merge_requests")), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    (*query)["OrganizationId"] = *request->organizationId;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    (*query)["Page"] = *request->page;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*query)["PageSize"] = *request->pageSize;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    (*query)["SubUserId"] = *request->subUserId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListGroupMemberResponse(doROARequest(make_shared<string>("ListGroupMember"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v3/groups/") + string(*GroupId) + string("/members")), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    (*query)["OrganizationId"] = *request->organizationId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    (*query)["SubUserId"] = *request->subUserId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UpdateGroupMemberResponse(doROARequest(make_shared<string>("UpdateGroupMember"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/api/v3/groups/") + string(*GroupId) + string("/members/") + string(*UserId)), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    (*query)["OrganizationId"] = *request->organizationId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return CreateMergeRequestCommentResponse(doROARequest(make_shared<string>("CreateMergeRequestComment"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/api/v4/projects/") + string(*ProjectId) + string("/merge_request/") + string(*MergeRequestId) + string("/comments")), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    (*query)["OrganizationId"] = *request->organizationId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    (*query)["SubUserId"] = *request->subUserId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return CreateRepositoryDeployKeyResponse(doROARequest(make_shared<string>("CreateRepositoryDeployKey"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/api/v3/projects/") + string(*ProjectId) + string("/keys")), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    (*query)["OrganizationId"] = *request->organizationId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DeleteRepositoryTagResponse(doROARequest(make_shared<string>("DeleteRepositoryTag"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>(string("/api/v3/projects/") + string(*ProjectId) + string("/repository/tags/") + string(*TagName)), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->sync)) {
    (*query)["Sync"] = *request->sync;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->createParentPath)) {
    (*query)["CreateParentPath"] = *request->createParentPath;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    (*query)["OrganizationId"] = *request->organizationId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    (*query)["SubUserId"] = *request->subUserId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return CreateRepositoryResponse(doROARequest(make_shared<string>("CreateRepository"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/api/v3/projects")), make_shared<string>("json"), req, runtime));
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
    (*query)["FetchKeys"] = *request->fetchKeys;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isEncrypted)) {
    (*query)["IsEncrypted"] = *request->isEncrypted;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return GetCodeCompletionResponse(doROARequest(make_shared<string>("GetCodeCompletion"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/api/v2/service/invoke/") + string(*ServiceName)), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    (*query)["OrganizationId"] = *request->organizationId;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    (*query)["Page"] = *request->page;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*query)["PageSize"] = *request->pageSize;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupIdList)) {
    (*query)["GroupIdList"] = *request->groupIdList;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectIdList)) {
    (*query)["ProjectIdList"] = *request->projectIdList;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authorCodeupIdList)) {
    (*query)["AuthorCodeupIdList"] = *request->authorCodeupIdList;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authorIdList)) {
    (*query)["AuthorIdList"] = *request->authorIdList;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->assigneeCodeupIdList)) {
    (*query)["AssigneeCodeupIdList"] = *request->assigneeCodeupIdList;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->assigneeIdList)) {
    (*query)["AssigneeIdList"] = *request->assigneeIdList;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriberCodeupIdList)) {
    (*query)["SubscriberCodeupIdList"] = *request->subscriberCodeupIdList;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->state)) {
    (*query)["State"] = *request->state;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->search)) {
    (*query)["Search"] = *request->search;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    (*query)["Order"] = *request->order;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->afterDate)) {
    (*query)["AfterDate"] = *request->afterDate;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->beforeDate)) {
    (*query)["BeforeDate"] = *request->beforeDate;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListMergeRequestsResponse(doROARequest(make_shared<string>("ListMergeRequests"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v4/merge_requests/advanced_search")), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListOrganizationSecurityScoresResponse(doROARequest(make_shared<string>("ListOrganizationSecurityScores"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v4/organization/security/scores")), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    (*query)["OrganizationId"] = *request->organizationId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filePath)) {
    (*query)["FilePath"] = *request->filePath;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ref)) {
    (*query)["Ref"] = *request->ref;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->from)) {
    (*query)["From"] = *request->from;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->to)) {
    (*query)["To"] = *request->to;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    (*query)["SubUserId"] = *request->subUserId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return GetFileBlobsResponse(doROARequest(make_shared<string>("GetFileBlobs"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v4/projects/") + string(*ProjectId) + string("/repository/blobs")), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    (*query)["OrganizationId"] = *request->organizationId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    (*query)["SubUserId"] = *request->subUserId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return MergeMergeRequestResponse(doROARequest(make_shared<string>("MergeMergeRequest"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/api/v3/projects/") + string(*ProjectId) + string("/merge_request/") + string(*MergeRequestId) + string("/merge")), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    (*query)["OrganizationId"] = *request->organizationId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    (*query)["SubUserId"] = *request->subUserId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DeleteGroupMemberResponse(doROARequest(make_shared<string>("DeleteGroupMember"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>(string("/api/v3/groups/") + string(*GroupId) + string("/members/") + string(*UserId)), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    (*query)["OrganizationId"] = *request->organizationId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListRepositoryMemberWithInheritedResponse(doROARequest(make_shared<string>("ListRepositoryMemberWithInherited"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v4/projects/") + string(*ProjectId) + string("/all_members")), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->groupId)) {
    (*query)["GroupId"] = *request->groupId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    (*query)["OrganizationId"] = *request->organizationId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    (*query)["SubUserId"] = *request->subUserId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return GetGroupDetailResponse(doROARequest(make_shared<string>("GetGroupDetail"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v3/groups/detail")), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    (*query)["OrganizationId"] = *request->organizationId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    (*query)["SubUserId"] = *request->subUserId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return GetCodeupOrganizationResponse(doROARequest(make_shared<string>("GetCodeupOrganization"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v4/organization/") + string(*OrganizationIdentity)), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return GetOrganizationSecurityCenterStatusResponse(doROARequest(make_shared<string>("GetOrganizationSecurityCenterStatus"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v4/organization/security/status")), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    (*query)["OrganizationId"] = *request->organizationId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    (*query)["SubUserId"] = *request->subUserId;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    (*query)["Page"] = *request->page;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*query)["PageSize"] = *request->pageSize;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->search)) {
    (*query)["Search"] = *request->search;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListRepositoryBranchesResponse(doROARequest(make_shared<string>("ListRepositoryBranches"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v3/projects/") + string(*ProjectId) + string("/repository/branches")), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    (*query)["OrganizationId"] = *request->organizationId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    (*query)["SubUserId"] = *request->subUserId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return CreateBranchResponse(doROARequest(make_shared<string>("CreateBranch"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/api/v3/projects/") + string(*ProjectId) + string("/repository/branches")), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    (*query)["OrganizationId"] = *request->organizationId;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isMember)) {
    (*query)["IsMember"] = *request->isMember;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    (*query)["SubUserId"] = *request->subUserId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->search)) {
    (*query)["Search"] = *request->search;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    (*query)["Page"] = *request->page;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*query)["PageSize"] = *request->pageSize;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListGroupRepositoriesResponse(doROARequest(make_shared<string>("ListGroupRepositories"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v3/groups/") + string(*Identity) + string("/projects")), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    (*query)["OrganizationId"] = *request->organizationId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagName)) {
    (*query)["TagName"] = *request->tagName;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return GetRepositoryTagV2Response(doROARequest(make_shared<string>("GetRepositoryTagV2"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v3/projects/") + string(*ProjectId) + string("/repository/tag/info")), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    (*query)["OrganizationId"] = *request->organizationId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return GetMergeRequestSettingResponse(doROARequest(make_shared<string>("GetMergeRequestSetting"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v4/projects/") + string(*ProjectId) + string("/settings/merge_requests")), make_shared<string>("json"), req, runtime));
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
    (*query)["AccessToken"] = *request->accessToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    (*query)["OrganizationId"] = *request->organizationId;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    (*query)["Page"] = *request->page;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*query)["PageSize"] = *request->pageSize;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListRepositoryWebhookResponse(doROARequest(make_shared<string>("ListRepositoryWebhook"), make_shared<string>("2020-04-14"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v3/projects/") + string(*ProjectId) + string("/hooks")), make_shared<string>("json"), req, runtime));
}

